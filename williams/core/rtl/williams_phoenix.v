// Phoenix glue for the Williams cores (Robotron: 2084, Joust, Sinistar),
// the MiSTer Robotron core's williams_soc (rtl/mister) with cpu09 as its
// 6809.  One RTL, three builds (GAME).
//
// Clocks (from one DCM, so the 48MHz and 12MHz edges line up):
//
//  - clk25: the 640x480 HDMI pixel clock.
//  - clk48: the SRAM controller, the SD card and the loader I/O.
//  - clk12: 12MHz, always running (the frame lock's control).
//  - clk12g: clk12 through a BUFGCE whose enable is run: the Williams
//    board.  At the end of each Williams frame the frame lock stops it
//    until the HDMI frame reaches the release line.
//
// The Williams board makes one memory access per 12MHz clock (12 a
// microsecond: video, CPU, blitter), and takes its data at the next
// clock.  The SRAM controller sees each board clock as a toggle of
// sc_tog: the next 48MHz clock puts the address out, the one after takes
// the data (and, for a write, merges the enabled nibbles into it and
// writes the byte).  The other two of the four 48MHz clocks are free for
// the loader's writes.
//
// SRAM (512K):
//   00000-0FFFF  the board's RAM: video RAM, work RAM, CMOS at CC00-CFFF
//                (low nibbles)
//   10000-1BFFF  the 48K program ROM (CPU 0000-8FFF -> 10000, D000-FFFF ->
//                19000), as williams_rom maps it
//
// The sound ROM, the speech ROMs (Sinistar) and the decoder PROMs are
// block RAM in williams_soc, written through its dl_* port.
//
// Boot mode (power-on, or reset held a second): the 6809 runs the loader
// (loader/, gcc6809) from a 12K block RAM ROM at $D000-$FFFF, with its
// RAM at $9000-$BFFF and the screen RAM at $0000-$97FF (its text is drawn
// there).  The loader's I/O window, $C400-$C7FF (address bits 7:0):
//
//  $00 R  SPI received byte
//      W  SPI transfer byte
//  $01 R  bit7 busy (SPI or forward engine), bit6 card present
//      W  bit0 SD select (1 = CS asserted), bit1 slow SPI clock,
//         bit2 forward engine discards the bytes
//  $02 W  load data: write it at the load address, which then increments
//  $03 W  start the game
//  $04 W  forward count, low byte
//  $05 W  forward count, high byte, and start: clock in that many SPI
//         bytes (sending $FF) and load each at the load address
//  $06-$08 W  load address, bits 7:0, 15:8, 19:16 (MiSTer's ROM layout):
//         00000-0BFFF program ROM, 0C000 sound ROM, 0D000 CMOS (1K),
//         0D400 decoder 4, 0D600 decoder 6, 0E000-11FFF speech ROMs
//  $09 R  bit0 a load write is pending
//  $0A R  the game: 0 Robotron, 1 Joust, 6 Sinistar
//  $0F R  SPI received byte, and start the next transfer (sending $FF)
//
// Resets: the reset button (or ESC) resets the game; holding it for a
// second loads it again.

`timescale 1ns / 1ps

module williams_phoenix
  #( parameter GAME        = 0         // 0 Robotron, 1 Joust, 6 Sinistar
   , parameter LOADER_FILE = "williams_loader.hex"
   , parameter CPU09       = 0         // 1: cpu09 (half the size, but Robotron's game corrupts its data with it)
   )
   ( input             clk25
   , input             clk48
   , input             clk12       // ungated
   , input             clk12g      // gated by run
   , output reg        run = 1     // enable of clk12g (clk12 domain)

   , input             reset       // power-on or hold-reset (clk25): back to the loader
   , input             game_reset  // reset the game (clk25)

   // Controllers (clk25), 1 = pressed
   , input       [9:0] cv1         // ColecoVision port 1 (cv_pads_ga format)
   , input       [9:0] cv2         // ColecoVision port 2
   , input      [11:0] snes        // 0 A 1 B 2 X 3 Y 4 start 5 select 6 L 7 R 8 up 9 down 10 left 11 right
   , input      [15:0] kb_keys     // colecoKeyboard keys
   , input       [4:0] kb_joy      // colecoKeyboard arrows + Z

   // External SRAM.  The data bus tri-state is done at the top level.
   , output reg [18:0] sram_addr = 0
   , output reg  [7:0] sram_dout = 0
   , input       [7:0] sram_din
   , output reg        sram_doe = 0
   , output reg        sram_we_n = 1   // changes at the falling edge of clk48
   , output reg        sram_oe_n = 1

   // SD card SPI
   , output            sd_cs_n
   , output            sd_sclk
   , output            sd_mosi
   , input             sd_miso
   , input             sd_cd_n

   // 640x480 video (clk25)
   , output reg  [7:0] vid_r = 0
   , output reg  [7:0] vid_g = 0
   , output reg  [7:0] vid_b = 0
   , output reg        vid_hsync_n = 1
   , output reg        vid_vsync_n = 1
   , output reg        vid_blank = 1

   // Audio (clk25), signed
   , output reg [15:0] audio_l = 0
   , output reg [15:0] audio_r = 0

   , output reg        boot_mode = 1
   , input             clk_locked
   );

localparam SINISTAR = (GAME == 6);

// ---------------------------------------------------------------------------
// HDMI timing (clk25)

reg [9:0] hc = 0, vc /* verilator public */ = 0;

always @(posedge clk25) begin
  if (hc == 10'd799) begin
    hc <= 0;
    vc <= (vc == 10'd524) ? 10'd0 : vc + 1;
  end else
    hc <= hc + 1;
end

// ---------------------------------------------------------------------------
// Resets (clk48)

reg [2:0] reset_s = 3'b111, game_reset_s = 0;
always @(posedge clk48) begin
  reset_s      <= {reset_s[1:0], reset};
  game_reset_s <= {game_reset_s[1:0], game_reset};
end
wire g_reset = reset_s[2] || !clk_locked;

reg        start_game = 0;
reg [11:0] soc_rst_cnt = 12'hfff;   // board reset request (BTN 0), in 48MHz clocks
wire       soc_reset = (soc_rst_cnt != 0);

always @(posedge clk48) begin
  if (g_reset)
    boot_mode <= 1;
  else if (start_game)
    boot_mode <= 0;

  if (g_reset || start_game || (game_reset_s[2] && !boot_mode))
    soc_rst_cnt <= 12'hfff;
  else if (soc_rst_cnt != 0)
    soc_rst_cnt <= soc_rst_cnt - 1;
end

// To the board's clock
reg [1:0] soc_reset_g = 2'b11, boot_g = 2'b11;
always @(posedge clk12g) begin
  soc_reset_g <= {soc_reset_g[0], soc_reset};
  boot_g      <= {boot_g[0], boot_mode};
end

// ---------------------------------------------------------------------------
// Controllers

// ColecoVision key codes (pins 4..1, active low)
localparam [3:0] CV_1 = 4'b0111, CV_2 = 4'b1011, CV_5 = 4'b1001;

// cv_pads_ga: 0 up, 1 down, 2 left, 3 right, 4 left fire, 5 right fire, 9:6 key
reg  [5:0] p1 = 0, p2 = 0;     // up down left right fire1 fire2
reg  [3:0] fire4 = 0;          // SNES: up (X) down (B) left (Y) right (A)
reg  [2:0] sys = 0;            // coin, start 1, start 2
always @(posedge clk25) begin
  p1 <= cv1[5:0] | { snes[1] | snes[3], snes[0] | snes[2], snes[11], snes[10], snes[9], snes[8] } |
        { kb_keys[0], kb_joy[4], kb_joy[3:0] };
  p2 <= cv2[5:0];
  fire4 <= { snes[0], snes[3], snes[1], snes[2] };          // right left down up
  sys <= { (cv1[9:6] == CV_2) | (cv2[9:6] == CV_2) | kb_keys[7],
           (cv1[9:6] == CV_1) | (cv2[9:6] == CV_1) | snes[4] | kb_keys[13],
           (cv1[9:6] == CV_5) | (cv2[9:6] == CV_5) | snes[5] };
end

// To the board's clock: take a value once it has been the same for two clocks.
// in_g: 5:0 port 1 (up down left right fire1 fire2), 11:6 port 2,
// 15:12 SNES fire up/down/left/right, 18:16 coin / start 1 / start 2
reg [18:0] in_m, in_s, in_g = 0;
always @(posedge clk12g) begin
  in_m <= {sys, fire4[3], fire4[2], fire4[1], fire4[0], p2, p1}; in_s <= in_m; if (in_s == in_m) in_g <= in_s;
end
wire [5:0] g_p1 = in_g[5:0], g_p2 = in_g[11:6];
// Robotron fires with port 2's stick or the SNES buttons
wire f_up    = in_g[12] | g_p2[0];
wire f_down  = in_g[13] | g_p2[1];
wire f_left  = in_g[14] | g_p2[2];
wire f_right = in_g[15] | g_p2[3];
wire cn = in_g[16], st1 = in_g[17], st2 = in_g[18];

// The inputs as each game reads them (JA/JB active low; BTN 3:1 active high)
reg  [7:0] ja, jb;
reg  [3:0] btn;
reg        sin_fire, sin_bomb;
always @* begin
  ja = 8'hff; jb = 8'hff; btn = 4'b0000; sin_fire = 1; sin_bomb = 1;
  case (GAME)
  0: begin   // Robotron: move (port 1 / d-pad), fire (port 2 / SNES buttons)
       ja  = ~{ f_right, f_left, f_down, f_up, g_p1[3], g_p1[2], g_p1[1], g_p1[0] };
       jb  = ja;
       btn = { st1, st2, cn, 1'b0 };
     end
  1: begin   // Joust: left, right, flap (either fire); player 2 on port 2
       ja  = ~{ 5'b00000, g_p1[4] | g_p1[5], g_p1[3], g_p1[2] };
       jb  = ~{ 5'b00000, g_p2[4] | g_p2[5], g_p2[3], g_p2[2] };
       btn = { st2, st1, cn, 1'b0 };
     end
  default: begin   // Sinistar: the 49-way stick at its ends; fire, bomb
       ja  = ~{ g_p1[2] ? 4'd0 : g_p1[3] ? 4'd8 : 4'd7,
                g_p1[1] ? 4'd0 : g_p1[0] ? 4'd8 : 4'd7 };
       jb  = ja;
       btn = { st1, st2, cn, 1'b0 };
       sin_fire = !g_p1[4];
       sin_bomb = !g_p1[5];
     end
  endcase
end

// ---------------------------------------------------------------------------
// The Williams board

wire [15:0] mem_a /* verilator public */;
wire  [7:0] mem_di;
reg   [7:0] mem_do = 8'hff;
wire        mem_wr_n /* verilator public */, ram_cs_n /* verilator public */, ram_lb_n, ram_ub_n;
wire  [2:0] vr, vg;
wire  [1:0] vb;
wire        hs_n, vs_n;
wire  [7:0] snd;
wire [15:0] speech;
wire [11:0] phase /* verilator public */;
wire [14:0] vcount;
wire  [7:0] ext_a /* verilator public */, ext_dout /* verilator public */;
wire        ext_wr /* verilator public */, ext_rd /* verilator public */;
reg   [7:0] ext_din /* verilator public */ = 8'hff;
reg  [24:0] dl_addr = 0;
reg   [7:0] dl_data = 0;
reg         dl_wr = 0;

`ifdef SIM_NETLIST
williams_soc soc        // the simulation's netlist is made with SPEECH = 1
`else
williams_soc #(.SPEECH(SINISTAR ? 1 : 0), .CPU09(CPU09)) soc
`endif
  ( .clock        (clk12g)
  , .MemWR        (mem_wr_n)
  , .RamCS        (ram_cs_n)
  , .RamLB        (ram_lb_n)
  , .RamUB        (ram_ub_n)
  , .MemAdr       (mem_a)
  , .MemDin       (mem_di)
  , .MemDout      (mem_do)
  , .blitter_sc2  (1'b0)
  , .sinistar     (SINISTAR ? 1'b1 : 1'b0)
  , .game         (GAME[7:0])
  , .ROM_BANK     ()
  , .JOY_X        (4'h7)
  , .JOY_Y        (4'h7)
  , .DIGITAL_X    (4'h7)
  , .DIGITAL_Y    (4'h7)
  , .BLASTER_BTN  (4'b1111)
  , .sg_state     ()
  , .SW           (8'h00)
  , .BTN          ({btn[3:1], soc_reset_g[1]})
  , .SIN_FIRE     (sin_fire)
  , .SIN_BOMB     (sin_bomb)
  , .vgaRed       (vr)
  , .vgaGreen     (vg)
  , .vgaBlue      (vb)
  , .Hsync        (hs_n)
  , .Vsync        (vs_n)
  , .audio_out    (snd)
  , .audio_out_r  ()
  , .speech_out   (speech)
  , .JA           (ja)
  , .JB           (jb)
  , .pause        (1'b0)
  , .dl_clock     (clk48)
  , .dl_addr      (dl_addr)
  , .dl_data      (dl_data)
  , .dl_wr        (dl_wr)
  , .dl_upload    (1'b0)
  , .PHASE        (phase)
  , .VCOUNT       (vcount)
  , .BOOT         (boot_g[1])
  , .EXT_A        (ext_a)
  , .EXT_DOUT     (ext_dout)
  , .EXT_WR       (ext_wr)
  , .EXT_RD       (ext_rd)
  , .EXT_DIN      (ext_din)
  );

// ---------------------------------------------------------------------------
// The board's clocks as seen at 48MHz: sc_tog toggles at each board
// clock; sc_go is the 48MHz clock just after one.

reg sc_tog = 0;
always @(posedge clk12g)
  sc_tog <= !sc_tog;

reg sc_tog48 = 0;
wire sc_go = (sc_tog48 != sc_tog);
always @(posedge clk48)
  sc_tog48 <= sc_tog;

// The board's I/O accesses, at 48MHz: one pulse each
wire io_w = boot_mode && sc_go && ext_wr;
wire io_r = boot_mode && sc_go && ext_rd;

// ---------------------------------------------------------------------------
// Loader I/O: SD card SPI, forward engine, loads

reg        spi_sel = 0;
reg        spi_slow = 1;
reg        spi_busy = 0;
reg  [7:0] spi_tx = 8'hff, spi_rx = 8'hff;
reg  [7:0] spi_data = 8'hff;   // the last whole byte received
reg  [7:0] spi_txd;
reg  [2:0] spi_bit;
reg  [6:0] spi_div = 0;
reg        spi_sclk_r = 0;
reg        spi_start = 0;
reg [15:0] fwd_count = 0;
reg  [7:0] fwd_lo;
reg        fwd_active = 0;
reg        fwd_discard = 0;
reg        fwd_wait = 0;

reg        ld_pend = 0;        // a byte waits to be loaded
reg  [7:0] ld_data;
reg [19:0] ld_addr = 0;        // MiSTer's ROM layout
wire       ld_sram = (ld_addr < 20'h0C000) || (ld_addr[19:10] == 10'h034);   // ROM, CMOS
wire       ld_done;            // the SRAM (or the block RAM port) took it

assign sd_cs_n = !spi_sel;
assign sd_sclk = spi_sclk_r;
assign sd_mosi = spi_tx[7];

// SPI half period: 3 clocks fast (8MHz SCLK), 120 clocks slow (200kHz).
// MISO is taken at the end of SCLK's high half.
wire spi_tick = spi_slow ? (spi_div == 7'd119) : (spi_div == 7'd2);

always @(posedge clk48) begin
  spi_div <= spi_tick ? 7'd0 : spi_div + 1;

  if (spi_start) begin
    spi_tx     <= spi_txd;
    spi_busy   <= 1;
    spi_bit    <= 0;
    spi_sclk_r <= 0;
    spi_div    <= 0;
  end else if (spi_busy && spi_tick) begin
    if (!spi_sclk_r) begin
      spi_sclk_r <= 1;
    end else begin
      spi_sclk_r <= 0;
      spi_rx     <= {spi_rx[6:0], sd_miso};
      spi_tx     <= {spi_tx[6:0], 1'b1};
      spi_bit    <= spi_bit + 1;
      if (spi_bit == 3'd7) begin
        spi_busy <= 0;
        spi_data <= {spi_rx[6:0], sd_miso};
      end
    end
  end

  if (g_reset) begin
    spi_busy   <= 0;
    spi_sclk_r <= 0;
    spi_tx     <= 8'hff;
  end
end

reg dl_wr_d = 0;
wire ld_sram_done;
assign ld_done = ld_sram ? ld_sram_done : dl_wr_d;

always @(posedge clk48) begin
  spi_start  <= 0;
  start_game <= 0;
  dl_wr      <= 0;
  dl_wr_d    <= dl_wr;

  if (io_w) begin
    case (ext_a[3:0])
    4'h0: begin spi_txd <= ext_dout; spi_start <= 1; end
    4'h1: begin spi_sel <= ext_dout[0]; spi_slow <= ext_dout[1]; fwd_discard <= ext_dout[2]; end
    4'h2: begin ld_data <= ext_dout; ld_pend <= 1; end
    4'h3: start_game <= 1;
    4'h4: fwd_lo <= ext_dout;
    4'h5: begin
            fwd_count  <= {ext_dout, fwd_lo};
            fwd_active <= ({ext_dout, fwd_lo} != 16'd0);
          end
    4'h6: ld_addr[7:0]   <= ext_dout;
    4'h7: ld_addr[15:8]  <= ext_dout;
    4'h8: ld_addr[19:16] <= ext_dout[3:0];
    default: ;
    endcase
  end

  // $0F: the received byte, and the next transfer starts
  if (io_r && ext_a[3:0] == 4'hF) begin
    spi_txd   <= 8'hff;
    spi_start <= 1;
  end

  // Forward engine: one SPI byte at a time, each loaded
  if (fwd_active && !fwd_wait && !spi_busy && !spi_start && !ld_pend) begin
    if (fwd_count == 0)
      fwd_active <= 0;
    else begin
      spi_txd   <= 8'hff;
      spi_start <= 1;
      fwd_wait  <= 1;
      fwd_count <= fwd_count - 1;
    end
  end
  if (fwd_wait && !spi_busy && !spi_start) begin
    fwd_wait <= 0;
    if (!fwd_discard) begin
      ld_data <= spi_data;
      ld_pend <= 1;
    end
  end

  // Block RAM loads (sound ROM, decoder PROMs, speech ROMs) go to the
  // board's dl_* port at once
  if (ld_pend && !ld_sram && !dl_wr && !dl_wr_d) begin
    dl_addr <= {5'd0, ld_addr};
    dl_data <= ld_data;
    dl_wr   <= 1;
  end

  if (ld_done) begin
    ld_pend <= 0;
    ld_addr <= ld_addr + 1;
  end

  if (g_reset) begin
    spi_sel    <= 0;
    spi_slow   <= 1;
    fwd_active <= 0;
    fwd_wait   <= 0;
    ld_pend    <= 0;
  end
end

// I/O reads: the value for the address, taken by the board at its read
always @(posedge clk48)
  case (ext_a[3:0])
  4'h1:    ext_din <= { spi_busy || spi_start || fwd_active || ld_pend, !sd_cd_n, 6'd0 };
  4'h9:    ext_din <= { 7'd0, ld_pend };
  4'hA:    ext_din <= GAME[7:0];
  default: ext_din <= spi_data;
  endcase

// ---------------------------------------------------------------------------
// Boot ROM: the loader, 12K at $D000-$FFFF (index = address - $C000)

reg [7:0] loader_rom [0:16383];
reg [7:0] loader_q;
initial $readmemh(LOADER_FILE, loader_rom);
always @(posedge clk48)
  loader_q <= loader_rom[mem_a[13:0]];

// ---------------------------------------------------------------------------
// Sinistar: the rotated picture (its monitor stands upright; MAME ROT270)
//
// Toggled with keypad 0, SNES L or R, or keyboard 0; native at power-on.
// The screen RAM is read straight from the SRAM: each HDMI line shows one
// screen column (pixels 18-309 spread over the 480 lines, the last one at
// the top), with the 240 shown lines across, doubled to 480 pixels and
// centred.  A column of bytes (two pixel columns) is prefetched into one
// half of colbuf in the SRAM's free slots while the other half is shown.
// Like the arcade's monitor, the picture is not double buffered.
//
// Physical screen RAM: {bank, row, col} (16 bits); pixel q = px - 2 =
// 6 col + 2 bank + nibble (0 = high); row = line - 1 (decoder 6).

localparam [8:0] ROT_HOFS = 9'd80;     // left edge of the 480-pixel rotated picture

reg        rot = 0;                    // clk25: 1 = rotated picture
reg        rot_key_r = 0;
reg  [1:0] boot25 = 2'b11;
localparam [3:0] CV_0 = 4'b1100;
wire       rot_key = (cv1[9:6] == CV_0) || (cv2[9:6] == CV_0) || snes[6] || snes[7] || kb_keys[10];
always @(posedge clk25) begin
  boot25    <= {boot25[0], boot_mode};
  rot_key_r <= rot_key;
  if (SINISTAR && rot_key && !rot_key_r)
    rot <= !rot;
end
`ifdef SIM_ROT_BOOT
// simulation: the rotation works on the loader's screen too (decoders bypassed: row = line)
wire       rot_on = SINISTAR && rot;
localparam [7:0] ROT_ROW0 = 8'd7;
`else
wire       rot_on = SINISTAR && rot && !boot25[1];
localparam [7:0] ROT_ROW0 = 8'd6;      // the row of the first shown line (VTOP - 1, decoder 6)
`endif

// The column for each HDMI line: k = floor(vc * 292 / 480) (held at 0 in
// the vertical blank, so the first two columns load then); shown pixel
// p = 291 - k, q = p + 16, byte column B = q / 2, nibble q & 1.
reg  [8:0] rk = 0;                     // k
reg  [8:0] rrem = 0;
reg        rfpar = 0;                  // frame parity: a new frame refetches
wire [9:0] rrem_n = {1'b0, rrem} + 10'd292;
always @(posedge clk25)
  if (hc == 10'd799) begin
    if (vc == 10'd479 || vc >= 10'd480) begin
      rk   <= 0;
      rrem <= 0;
      if (vc == 10'd479) rfpar <= !rfpar;
    end else if (rrem_n >= 10'd480) begin
      rrem <= rrem_n - 10'd480;
      rk   <= rk + 1'd1;
    end else
      rrem <= rrem_n[8:0];
  end
wire [8:0] rq   = 9'd307 - rk;         // (291 - k) + 16
wire [7:0] rB   = rq[8:1];
wire       rnib = rq[0];

// To clk48: the byte column shown now and the frame parity, once stable
reg  [8:0] rw_m = 0, rw_s = 0, rw_g = 0;
reg        ron_m = 0, ron_s = 0;
always @(posedge clk48) begin
  rw_m <= {rfpar, rB};  rw_s <= rw_m;  if (rw_s == rw_m) rw_g <= rw_s;
  ron_m <= rot_on;      ron_s <= ron_m;
end
wire [8:0] want_cur = rw_g;
wire [8:0] want_nxt = {rw_g[8], rw_g[7:0] - 1'd1};

// Prefetch (clk48): fill colbuf half B[0] with byte column B, rows 0-239
reg  [8:0] rtag0 = 9'h1ff, rtag1 = 9'h1ff;
reg        rf_busy = 0;
reg  [8:0] rf_col = 0;                 // {parity, B} being fetched
reg  [7:0] rf_row = 0;
reg        rf_we = 0;
reg  [7:0] rf_q = 0;
reg        rf_issued = 0;              // this board clock's read is out (set in the SRAM controller)
wire [16:0] rf_m3  = rf_col[7:0] * 9'd171;
wire [7:0] rf_c3   = rf_m3[16:9];                               // B / 3
wire [1:0] rf_bank = rf_col[7:0] - {rf_c3[6:0], 1'b0} - rf_c3; // B % 3
wire [7:0] rf_rowa = rf_row + ROT_ROW0;
wire [18:0] rf_addr = {3'b000, rf_bank, rf_rowa, rf_c3[5:0]};
wire       rf_go   = SINISTAR && rf_busy && !rf_issued;
wire       tag_cur = want_cur[0] ? (rtag1 == want_cur) : (rtag0 == want_cur);
wire       tag_nxt = want_nxt[0] ? (rtag1 == want_nxt) : (rtag0 == want_nxt);

reg  [7:0] colbuf [0:511];
always @(posedge clk48)
  if (rf_we)
    colbuf[{rf_col[0], rf_row}] <= rf_q;

always @(posedge clk48) begin
  if (rf_we) begin
    if (rf_row == 8'd239) begin
      rf_busy <= 0;
      if (rf_col[0]) rtag1 <= rf_col; else rtag0 <= rf_col;
    end
    rf_row <= rf_row + 1'd1;
  end

  if (!rf_busy && ron_s) begin
    if (!tag_cur) begin
      rf_busy <= 1;  rf_col <= want_cur;  rf_row <= 0;
    end else if (!tag_nxt) begin
      rf_busy <= 1;  rf_col <= want_nxt;  rf_row <= 0;
    end
  end
  if (!ron_s) begin
    rtag0 <= 9'h1ff;
    rtag1 <= 9'h1ff;
  end
end

// The palette, as the board's CPU writes it ($C000-$C00F, BBGGGRRR)
reg  [7:0] pal [0:15];
always @(posedge clk48)
  if (sc_go && !mem_wr_n && mem_a[15:10] == 6'b110000)
    pal[mem_a[3:0]] <= mem_di;

// ---------------------------------------------------------------------------
// SRAM controller (clk48)
//
// Each board clock (sc_go, st 0): the board's address goes out.  At st 2
// (41.7ns later) its data is taken (mem_do, which the board takes at its
// next clock); a board write then merges the enabled nibbles into it and
// writes the byte, else a loader write may go.  WE goes low at the falling
// edge after st 2 and high at the one after st 3, before the board's next
// address.

reg  [1:0] st = 0;
reg        rf_rd = 0;          // a rotation read is out (st 2), taken at the next sc_go
reg        b_wr, b_rom, b_lb, b_ub;
reg  [7:0] b_di;
reg        we_next = 1;
reg        lw_done = 0;
assign ld_sram_done = lw_done;

// The board's address in the SRAM
wire [15:0] rom_off = { mem_a[15], !mem_a[15] && mem_a[14], mem_a[13:0] };   // williams_rom's fixed_addr
wire [18:0] b_addr  = ram_cs_n ? (19'h10000 + {3'd0, rom_off}) : {3'd0, mem_a};
// The loader's
wire [18:0] l_addr  = (ld_addr < 20'h0C000) ? (19'h10000 + ld_addr[18:0]) :
                      (19'h0CC00 + {9'd0, ld_addr[9:0]});            // CMOS
wire  [7:0] l_data  = (ld_addr < 20'h0C000) ? ld_data : {4'hF, ld_data[3:0]};

always @(posedge clk48) begin
  lw_done <= 0;

  rf_we <= 0;
  if (sc_go) begin
    if (rf_rd) begin                 // rotation read: its data, 41.7ns after st 2
      rf_q  <= sram_din;
      rf_we <= 1;
    end
    rf_rd     <= 0;
    rf_issued <= 0;
    st        <= 2'd1;
    b_wr      <= !mem_wr_n && !ram_cs_n;
    b_rom     <= ram_cs_n;
    b_lb      <= !ram_lb_n;
    b_ub      <= !ram_ub_n;
    b_di      <= mem_di;
    sram_addr <= b_addr;
    sram_doe  <= 0;
    sram_oe_n <= 0;
    we_next   <= 1;
  end else case (st)
  2'd1:
    st <= 2'd2;
  2'd2: begin
      // RAM reads give 0 in a disabled nibble, as MiSTer's williams_ram
      mem_do <= (b_rom && boot_mode && mem_a[15:12] >= 4'hD) ? loader_q :
                b_rom ? sram_din :
                { b_ub ? sram_din[7:4] : 4'h0, b_lb ? sram_din[3:0] : 4'h0 };
      if (b_wr) begin
        sram_dout <= { b_ub ? b_di[7:4] : sram_din[7:4], b_lb ? b_di[3:0] : sram_din[3:0] };
        sram_doe  <= 1;
        sram_oe_n <= 1;
        we_next   <= 0;
      end else if (ld_pend && ld_sram && !lw_done) begin
        sram_addr <= l_addr;
        sram_dout <= l_data;
        sram_doe  <= 1;
        sram_oe_n <= 1;
        we_next   <= 0;
        lw_done   <= 1;
      end else if (rf_go) begin        // a free slot: rotation prefetch read
        sram_addr <= rf_addr;
        rf_rd     <= 1;
        rf_issued <= 1;
      end
      st <= 2'd3;
    end
  2'd3: begin
      we_next <= 1;
      st      <= 2'd0;
    end
  default: ;
  endcase
end

always @(negedge clk48)
  sram_we_n <= we_next;

// ---------------------------------------------------------------------------
// Frame lock and line buffer
//
// The board's line is 64us, exactly two HDMI lines, and its frame (260
// lines) a little shorter than the HDMI's: the board stops at the end of
// its frame (run low) until the HDMI frame reaches REL_LINE.  Its line n
// is then shown on HDMI lines 2n - TOP2 and the one after.

// Release: board line L is then done at HDMI line 2L - 17, three lines
// before it is shown at 2(L - VTOP); the 8-line buffer keeps it until
// line L + 8 overwrites it from 2L - 3 on.  (522 showed line L - 8.)
localparam [9:0] REL_LINE = 10'd506;
localparam [8:0] VTOP     = 9'd7;      // the first board line shown
localparam [9:0] HOFS     = 10'd28;    // left edge of the 584-pixel picture
localparam [8:0] PX0      = 9'd18;     // the first shown pixel: px = 6 col + 2 bank + nibble + 2
                                       // is visible from 18 to 309 (bank 2 col 2 to bank 0 col 51)

reg  release_tog = 0;
always @(posedge clk25)
  if (vc == REL_LINE && hc == 0)
    release_tog <= !release_tog;

reg  [2:0] rel_sync = 0;
reg        waiting = 0;
wire       rel_event = rel_sync[2] ^ rel_sync[1];
// the frame's end: the last line, phase 0
// the frame's end: video_count 16639 (the address stays at 3Fxx for its
// last 4 lines, so 3FFF comes twice)
wire       frame_end = (vcount == 15'h7FFF);

always @(posedge clk12) begin
  rel_sync <= {rel_sync[1:0], release_tog};
  if (!waiting) begin
    if (frame_end && phase[0] && run) begin
      waiting <= 1;
      run     <= 0;
    end
  end else if (rel_event) begin
    waiting <= 0;
    run     <= 1;
  end
end

// Pixels: the board puts one out at each even phase; take it at the odd
// one after.  x = byte * 6 + (phase - 1) / 2.
reg  [2:0] pk;
always @* begin
  case (phase)
  12'h002: pk = 3'd0;  12'h008: pk = 3'd1;  12'h020: pk = 3'd2;
  12'h080: pk = 3'd3;  12'h200: pk = 3'd4;  12'h800: pk = 3'd5;
  default: pk = 3'd7;
  endcase
end
wire [8:0] px = {vcount[5:0], 3'd0} - {vcount[5:0], 1'b0} + pk;   // byte*6 + k
wire [7:0] pline = vcount[13:6];

reg [7:0] lbuf [0:4095];        // 8 lines of 512
always @(posedge clk12g)
  if (pk != 3'd7 && !vcount[14])
    lbuf[{pline[2:0], px}] <= {vr, vg, vb};

// HDMI side
wire [9:0] vrow = vc;                  // HDMI line: board line = vc/2 + VTOP
wire [8:0] sline = vc[9:1] + VTOP;
wire [9:0] hcol = hc - HOFS;
wire       in_pic = (vc < 10'd480) && (hc >= HOFS) && (hc < HOFS + 10'd584);
reg  [7:0] lb_q;
reg  [9:0] hc1, vc1;
reg        pic1;
// rotated: the colbuf half of this line's column, row (hc - ROT_HOFS) / 2
wire [9:0] rcol = hc - ROT_HOFS;
wire       in_rot = (vc < 10'd480) && (hc >= ROT_HOFS) && (hc < ROT_HOFS + 10'd480);
reg  [7:0] cb_q;
reg        rnib1, rot1;
always @(posedge clk25) begin
  lb_q  <= lbuf[{sline[2:0], hcol[9:1] + PX0}];
  cb_q  <= colbuf[{rB[0], rcol[8:1]}];
  rnib1 <= rnib;
  rot1  <= rot_on;
  hc1   <= hc;
  vc1   <= vc;
  pic1  <= rot_on ? in_rot : in_pic;
end
wire [7:0] rpal = pal[rnib1 ? cb_q[3:0] : cb_q[7:4]];               // BBGGGRRR
wire [7:0] pix  = rot1 ? {rpal[2:0], rpal[5:3], rpal[7:6]} : lb_q;   // RRRGGGBB

always @(posedge clk25) begin
  vid_blank   <= (hc1 >= 10'd640) || (vc1 >= 10'd480);
  vid_hsync_n <= !((hc1 >= 10'd656) && (hc1 < 10'd752));
  vid_vsync_n <= !((vc1 >= 10'd490) && (vc1 < 10'd492));
  // RRRGGGBB
  vid_r <= pic1 ? {pix[7:5], pix[7:5], pix[7:6]} : 8'd0;
  vid_g <= pic1 ? {pix[4:2], pix[4:2], pix[4:3]} : 8'd0;
  vid_b <= pic1 ? {4{pix[1:0]}} : 8'd0;
end

// ---------------------------------------------------------------------------
// Audio: the sound board's DAC (8-bit unsigned) and the speech (16-bit
// offset binary), averaged over each 2us and low-pass filtered, to clk25.

wire signed [15:0] mix = $signed({~snd[7], snd[6:0], 8'd0}) >>> 1;
wire signed [15:0] spk = SINISTAR ? ($signed({~speech[15], speech[14:0]}) >>> 1) : 16'sd0;
wire signed [15:0] mono = mix + spk;

reg [6:0] af_div = 0;
always @(posedge clk48)
  af_div <= (af_div == 7'd95) ? 7'd0 : af_div + 1;
wire af_tick = (af_div == 0);
wire signed [15:0] lp_out;
williams_lowpass lp (.clk(clk48), .tick(af_tick), .x(mono), .y(lp_out));

// DC blocker: the board's output is AC coupled, and its DAC rests at 00 or
// FF for seconds between sounds.  dc follows the output with a 33 ms time
// constant (5 Hz).
reg  signed [31:0] dc = 0;                       // 16.16
wire signed [31:0] lp32 = $signed({lp_out, 16'd0});
always @(posedge clk48)
  if (af_tick)
    dc <= dc + ((lp32 - dc) >>> 14);
wire signed [16:0] hp = {lp_out[15], lp_out} - {dc[31], dc[31:16]};
wire signed [15:0] hp_out = (hp > 17'sd32767) ? 16'sh7fff : (hp < -17'sd32768) ? 16'sh8000 : hp[15:0];

reg [15:0] aud_m, aud_s;
always @(posedge clk25) begin
  aud_m <= hp_out;
  aud_s <= aud_m;
  if (aud_s == aud_m) begin
    audio_l <= aud_s;
    audio_r <= aud_s;
  end
end

endmodule


// The average of x over each tick's 96 clocks (2us), then two one-pole
// low-pass stages, y += (x - y) / 8 at each tick (together about 7kHz).
// Signed, with room for the sum.  (From the Lynx and Master System cores.)
module williams_lowpass
  ( input                    clk
  , input                    tick        // every 96 clocks
  , input      signed [15:0] x
  , output     signed [15:0] y
  );

reg  signed [22:0] acc = 0;
reg  signed [22:0] avg = 0;
reg  signed [21:0] s1 = 0, s2 = 0;

always @(posedge clk) begin
  if (tick) begin
    acc <= 0;
    avg <= acc + x;
  end else
    acc <= acc + x;
  if (tick) begin
    // avg / 96 ~ (avg * 85) >> 13, times 16 (4 fraction bits): (avg * 85) >> 9
    s1 <= s1 + ((((avg * 85) >>> 9) - s1) >>> 3);
    s2 <= s2 + ((s1 - s2) >>> 3);
  end
end

assign y = s2[19:4];

endmodule
