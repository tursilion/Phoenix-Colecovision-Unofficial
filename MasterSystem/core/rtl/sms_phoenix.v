// Phoenix glue for the Sega Master System / Game Gear core (rtl/mister,
// from the MiSTer core; FM is Jotego's jt2413, rtl/jtopl).
//
// Clocks:
//
//  - clk25: the 640x480 HDMI pixel clock.
//  - clk: 32.22MHz (25MHz x 58/45), 9 x the Z80's 3.58MHz: the VDP ticks
//    every 3 clocks, pixels every 6, the CPU every 9.  A line (342
//    pixels) takes 63.68us, a little less than two HDMI lines (64us).
//
// Frame lock: at the top of each frame (line 0) the system's clock
// enables stop until the HDMI frame reaches the release line, so the
// picture never tears; the system runs at the HDMI's 59.52 frames a
// second (0.7% slow).
//
// Picture: each line goes into an 8-line buffer; HDMI shows it twice and
// each pixel twice: 512 x 384 (192 lines) or 512 x 448 (224 lines),
// centred.  Game Gear: its 160 x 144 window, 320 x 288, centred.
//
// SRAM (512K): 60 8K pages of cartridge ROM from 00000 (480K), cartridge
// RAM (saves, 32K) at 78000.  The SRAM is read every clock, alternately at
// the ROM address and the cartridge RAM address the system shows; the
// Z80's memory cycles are long enough for both to be fresh.
//
// ROM cache: a cartridge can be 4M, 512 pages of 8K.  A game starts with
// pages 0-59 in SRAM pages 0-59 (all of a cartridge up to 480K).  When
// the Z80 reads a page that is not there, it waits (its clock enable
// stops; the VDP and the sound go on) while the cache reads the page from
// the SD card (one CMD18, 16 sectors, each CRC-checked, a bad page is read
// again) into the SRAM page that was not used lately (clock hand), at the
// SD argument the loader gave for it.
//
// Loader mode: at power-on the Z80 runs the menu and loader (loader/,
// SDCC) from the system's boot ROM (16K block RAM at $0000-$3FFF; RAM at
// $C000), and this I/O window is at ports $F8-$FF:
//
//  $F8 R  SPI received byte
//      W  SPI transfer byte
//  $F9 R  bit7 busy (SPI or forward engine), bit6 card present
//      W  bit0 SD select (1 = CS asserted), bit1 slow SPI clock,
//         bit2 forward engine discards the bytes
//  $FA W  byte to the SRAM at the load address, which then increments
//  $FB W  start the game: bit0 = Game Gear
//  $FC W  forward count, low byte
//  $FD W  forward count, high byte, and start: clock in that many SPI
//         bytes (sending $FF) and write each to the SRAM at the load
//         address
//  $FE W  the load address goes to 0
//  $FF R  SPI received byte, and start the next transfer (sending $FF)
//      W  ROM size: banks of 16K minus 1 (a power of two minus 1)
//  $E8 W  ROM cache: cartridge page (8K) for $EA-$ED, bits 7:0
//  $E9 W  bit 0: its bit 8
//  $EA-$ED W  the SD read argument of that page's first sector (block
//         number, or byte offset on an SD v1 card), bits 7:0 first; $ED
//         writes it to the page table
//  ($E8-$EF are write-only; on a Master System writes there do nothing.)
//
// Resets: the reset button (or ESC) resets the game; holding it for a
// second goes back to the menu.

`timescale 1ns / 1ps

module sms_phoenix
  #( parameter LOADER_FILE = "sms_loader.hex"
   , parameter FM = 1
   )
   ( input             clk25
   , input             clk

   , input             reset       // power-on or hold-reset (clk25): back to the menu
   , input             game_reset  // reset the game (clk25)

   // Controllers (clk25), 1 = pressed
   , input       [9:0] cv1         // ColecoVision port 1 (cv_pads_ga format)
   , input       [9:0] cv2         // ColecoVision port 2
   , input      [11:0] snes        // 0 A 1 B 2 X 3 Y 4 start 5 select 6 L 7 R 8 up 9 down 10 left 11 right
   , input      [15:0] kb_keys     // colecoKeyboard keys
   , input       [4:0] kb_joy      // colecoKeyboard arrows + Z

   // External SRAM.  The data bus tri-state is done at the top level.
   , output reg [18:0] sram_addr
   , output reg  [7:0] sram_dout
   , input       [7:0] sram_din
   , output reg        sram_doe
   , output reg        sram_we_n   // changes at the falling edge of clk
   , output reg        sram_oe_n

   // SD card SPI
   , output            sd_cs_n
   , output            sd_sclk
   , output            sd_mosi
   , input             sd_miso
   , input             sd_cd_n

   // 640x480 video (clk25)
   , output reg  [7:0] vid_r
   , output reg  [7:0] vid_g
   , output reg  [7:0] vid_b
   , output reg        vid_hsync_n
   , output reg        vid_vsync_n
   , output reg        vid_blank

   // Audio (clk25), signed
   , output reg [15:0] audio_l
   , output reg [15:0] audio_r

   , output reg        boot_mode
   , input             clk_locked
   );

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
// Resets (clk)

reg [2:0] reset_s = 3'b111, game_reset_s = 0;
always @(posedge clk) begin
  reset_s      <= {reset_s[1:0], reset};
  game_reset_s <= {game_reset_s[1:0], game_reset};
end
wire g_reset = reset_s[2] || !clk_locked;

reg       start_game = 0;
reg       gg = 0;              // the game is a Game Gear one
reg       gg_next = 0;
reg [7:0] sys_rst_cnt = 8'hff;
reg       c_init = 0;          // the ROM cache tables are being set up
wire      sys_reset = (sys_rst_cnt != 0) || c_init;

initial boot_mode = 1;

always @(posedge clk) begin
  if (g_reset) begin
    boot_mode <= 1;
    gg        <= 0;
  end else if (start_game) begin
    boot_mode <= 0;
    gg        <= gg_next;
  end

  if (g_reset || start_game || (game_reset_s[2] && !boot_mode))
    sys_rst_cnt <= 8'hff;
  else if (sys_rst_cnt != 0)
    sys_rst_cnt <= sys_rst_cnt - 1;
end

// ---------------------------------------------------------------------------
// Clock enables: VDP every 3 clocks, pixels every 6, CPU every 9 (with a
// VDP tick, as in the MiSTer core's 15-clock pattern), stopped while the
// frame lock waits.

reg  [3:0] div = 0;
reg        cpu_hold = 0;       // the ROM cache holds the Z80
reg        run = 1;
reg        pix_t = 0;          // every second VDP tick is a pixel
reg        ce_cpu = 0, ce_vdp = 0, ce_pix = 0;
wire       vdp_tick = (div == 4'd2) || (div == 4'd5) || (div == 4'd8);

always @(negedge clk) begin
  ce_cpu <= 0;
  ce_vdp <= 0;
  ce_pix <= 0;
  if (run) begin
    div    <= (div == 4'd8) ? 4'd0 : div + 1;
    ce_vdp <= vdp_tick;
    ce_pix <= vdp_tick && pix_t;
    ce_cpu <= (div == 4'd8) && !cpu_hold;
    if (vdp_tick)
      pix_t <= !pix_t;
  end
end

// ---------------------------------------------------------------------------
// Controllers

// ColecoVision key codes (pins 4..1, active low)
localparam [3:0] CV_HASH = 4'b1010;

// Pad bits: 0 up, 1 down, 2 left, 3 right, 4 button 1, 5 button 2,
// 6 pause (Game Gear start)
function [6:0] cv_pad(input [9:0] p);
  // left fire button 1, right fire button 2, # pause / start
  cv_pad = { p[9:6] == CV_HASH, p[5:0] };
endfunction

reg [6:0] joy1 = 0, joy2 = 0;

always @(posedge clk25) begin
  // SNES (player 1): B and Y button 1, A and X button 2, start pause;
  // keyboard (player 1): arrows, Z button 1, X button 2, Q pause
  joy1 <= cv_pad(cv1) |
          { snes[4], snes[0] | snes[2], snes[1] | snes[3],
            snes[11], snes[10], snes[9], snes[8] } |
          { kb_keys[6], kb_keys[0], kb_joy[4], kb_joy[3:0] };
  joy2 <= cv_pad(cv2);
end

// To clk: take a value once it has been the same for two clocks.
reg [13:0] joy_m, joy_s, joy_g = 0;
always @(posedge clk) begin
  joy_m <= {joy2, joy1}; joy_s <= joy_m; if (joy_s == joy_m) joy_g <= joy_s;
end

// ---------------------------------------------------------------------------
// The system

wire [21:0] rom_a;
reg   [7:0] rom_q = 8'hff;
wire [12:0] ram_a;
wire  [7:0] ram_d;
wire        ram_we;
reg   [7:0] ram_q;
wire [14:0] nvram_a;
wire  [7:0] nvram_d;
wire        nvram_we;
reg   [7:0] nvram_q = 8'hff;
wire [13:0] boot_a;
reg   [7:0] boot_q;
reg   [7:0] ext_io_q;
wire  [4:0] ext_io_a;
wire        cart_rd;
wire  [7:0] ext_io_d;
wire        ext_io_wr_n, ext_io_rd_n;
wire  [8:0] x, y;
wire [11:0] color;
wire        smode_M1, smode_M3;
wire [15:0] sys_l, sys_r;

system
`ifndef SIM_NETLIST                   // (the simulation's netlist has them built in)
  #(.MAX_SPPL(7), .FM_EN(FM))
`endif
  sys
  ( .clk_sys      (clk)
  , .ce_cpu       (ce_cpu)
  , .ce_vdp       (ce_vdp)
  , .ce_pix       (ce_pix)
  , .ce_sp        (1'b0)
  , .gg           (gg)
  , .bios_en      (boot_mode)
  , .boot_a       (boot_a)
  , .boot_q       (boot_q)
  , .ext_io_q     (ext_io_q)
  , .boot_active  ()
  , .cart_rd      (cart_rd)
  , .ext_io_a     (ext_io_a)
  , .ext_io_d     (ext_io_d)
  , .ext_io_wr_n  (ext_io_wr_n)
  , .ext_io_rd_n  (ext_io_rd_n)
  , .RESET_n      (!sys_reset)
  , .rom_rd       ()
  , .rom_a        (rom_a)
  , .rom_do       (rom_q)
  , .j1_up        (!joy_g[0])
  , .j1_down      (!joy_g[1])
  , .j1_left      (!joy_g[2])
  , .j1_right     (!joy_g[3])
  , .j1_tl        (!joy_g[4])
  , .j1_tr        (!joy_g[5])
  , .j1_th        (1'b1)
  , .j2_up        (!joy_g[7])
  , .j2_down      (!joy_g[8])
  , .j2_left      (!joy_g[9])
  , .j2_right     (!joy_g[10])
  , .j2_tl        (!joy_g[11])
  , .j2_tr        (!joy_g[12])
  , .j2_th        (1'b1)
  , .pause        (!(joy_g[6] || joy_g[13]))
  , .j1_tr_out    ()
  , .j1_th_out    ()
  , .j2_tr_out    ()
  , .j2_th_out    ()
  , .x            (x)
  , .y            (y)
  , .color        (color)
  , .mask_column  ()
  , .black_column (1'b0)
  , .smode_M1     (smode_M1)
  , .smode_M2     ()
  , .smode_M3     (smode_M3)
  , .pal          (1'b0)
  , .region       (1'b0)
  , .mapper_lock  (1'b0)
  , .audioL       (sys_l)
  , .audioR       (sys_r)
  , .fm_ena       (!gg)
  , .dbr          (1'b1)
  , .sp64         (1'b0)
  , .ram_a        (ram_a)
  , .ram_d        (ram_d)
  , .ram_we       (ram_we)
  , .ram_q        (ram_q)
  , .nvram_a      (nvram_a)
  , .nvram_d      (nvram_d)
  , .nvram_we     (nvram_we)
  , .nvram_q      (nvram_q)
  );

video vid
  ( .clk          (clk)
  , .ce_pix       (ce_pix)
  , .pal          (1'b0)
  , .gg           (gg)
  , .border       (1'b0)
  , .mask_column  (1'b0)
  , .cut_mask     (1'b0)
  , .smode_M1     (smode_M1)
  , .smode_M3     (smode_M3)
  , .x            (x)
  , .y            (y)
  , .hsync        ()
  , .vsync        ()
  , .hblank       ()
  , .vblank       ()
  );

// Work RAM, 8K
reg [7:0] wram [0:8191];
always @(posedge clk) begin
  if (ram_we)
    wram[ram_a] <= ram_d;
  ram_q <= wram[ram_a];
end

// Boot ROM: the loader, 16K
reg [7:0] loader_rom [0:16383];
initial $readmemh(LOADER_FILE, loader_rom);
always @(posedge clk)
  boot_q <= loader_rom[boot_a];

// ---------------------------------------------------------------------------
// Loader I/O: SD card SPI, forward engine, SRAM loader

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
reg        fwd_wait = 0;       // a forward byte is being clocked in

reg        ld_pend = 0;        // a byte waits for the SRAM
reg  [7:0] ld_data;
reg [18:0] ld_addr = 0;
wire       ld_done;            // the SRAM took it
reg  [7:0] rom_mask = 8'h1f;   // ROM size in 16K banks - 1
reg        f_cs = 0;           // the cache's SD select

assign sd_cs_n = !(boot_mode ? spi_sel : f_cs);
assign sd_sclk = spi_sclk_r;
assign sd_mosi = spi_tx[7];

// SPI half period: 2 clocks fast (8MHz SCLK), 80 clocks slow (200kHz).
// MISO is taken at the end of SCLK's high half.
wire spi_tick = (spi_slow && boot_mode) ? (spi_div == 7'd79) : (spi_div[0] == 1'b1);

always @(posedge clk) begin
  spi_div <= spi_tick ? 7'd0 : spi_div + 1;

  if (spi_start) begin
    spi_tx     <= spi_txd;
    spi_busy   <= 1;
    spi_bit    <= 0;
    spi_sclk_r <= 0;
    spi_div    <= 0;
  end else if (spi_busy && spi_tick) begin
    if (!spi_sclk_r) begin                // rising edge
      spi_sclk_r <= 1;
    end else begin                        // falling edge: sample MISO, shift MOSI
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

// ---------------------------------------------------------------------------
// ROM cache tables and page reader

reg  [6:0] c_map [0:511];      // ROM page -> {in the SRAM, SRAM page}
reg  [8:0] c_rev [0:63];       // SRAM page (0-59) -> ROM page
reg [63:0] c_ref = 0;          // SRAM page used since the clock hand passed
reg [31:0] c_lba [0:511];      // ROM page -> SD argument of its first sector
reg  [9:0] c_init_i;
reg  [2:0] c_settle = 0;

// The ROM address, masked to the ROM size, and its page
wire [21:0] rom_ma  = {rom_a[21:14] & rom_mask, rom_a[13:0]};
wire  [8:0] c_page  = rom_ma[21:13];
wire  [6:0] c_map_q = c_map[c_page];
wire        c_hit   = c_map_q[6];
wire  [5:0] c_line  = c_map_q[5:0];
reg   [8:0] c_want;            // the page a read waits for
reg         c_want_v = 0;

localparam F_IDLE = 5'd0,  F_VICT = 5'd1,  F_EVICT = 5'd2, F_CMD = 5'd3,
           F_R1 = 5'd4,    F_R1C = 5'd5,   F_TOK = 5'd6,   F_TOKC = 5'd7,
           F_DATA = 5'd8,  F_DATAC = 5'd9, F_CRC = 5'd10,  F_STOP = 5'd11,
           F_STUFF = 5'd12, F_SR1 = 5'd13, F_SR1C = 5'd14, F_BUSY = 5'd15,
           F_BUSYC = 5'd16, F_END = 5'd17, F_MAP = 5'd18,  F_WAIT = 5'd19,
           F_ERR = 5'd20,  F_MAPW = 5'd21, F_CRCC = 5'd22;
reg  [4:0] f_state = F_IDLE, f_next;
reg  [8:0] f_page;
reg  [5:0] f_line, f_hand = 0;
reg [15:0] f_cnt;
reg  [3:0] f_blk;
reg  [8:0] f_byte;
reg  [2:0] f_ci;               // command byte
reg        f_stop;             // sending CMD12 (else CMD18)
reg [31:0] f_arg;              // the page's first sector
reg [15:0] f_crc;              // CRC16 (CCITT, 0 start) of a block's data
reg        f_bad;              // a block of the page had a bad CRC
reg        f_retry = 0;        // an error's CMD12 has been sent

function [15:0] crc16_byte(input [15:0] c, input [7:0] d);
  integer i;
  reg [15:0] r;
  begin
    r = c ^ {d, 8'd0};
    for (i = 0; i < 8; i = i + 1)
      r = r[15] ? (r << 1) ^ 16'h1021 : (r << 1);
    crc16_byte = r;
  end
endfunction

// One registered write port for each table (XST drops a second one)
reg        cm_we = 0;
reg  [8:0] cm_a;
reg  [6:0] cm_d;
reg        cr_we = 0;
reg  [5:0] cr_a;
reg  [8:0] cr_d;
reg  [8:0] lba_page;
reg [23:0] lba_lo;

always @(posedge clk) begin
  if (cm_we)
    c_map[cm_a] <= cm_d;
  if (cr_we)
    c_rev[cr_a] <= cr_d;
  f_arg <= c_lba[f_page];
end

wire [7:0] f_cmd_byte = f_ci == 3'd0 ? (f_stop ? 8'h4C : 8'h52) :   // CMD12, CMD18
                        f_ci == 3'd5 ? 8'hFF : f_stop ? 8'h00 :
                        f_ci == 3'd1 ? f_arg[31:24] : f_ci == 3'd2 ? f_arg[23:16] :
                        f_ci == 3'd3 ? f_arg[15:8]  : f_arg[7:0];

// The CPU's accesses to ports $E8-$EF / $F8-$FF: one pulse at the start of each
reg  io_wr_d = 1, io_rd_d = 1;
always @(posedge clk) begin
  io_wr_d <= ext_io_wr_n;
  io_rd_d <= ext_io_rd_n;
end
wire io_w = boot_mode && !ext_io_wr_n && io_wr_d;
wire io_r = boot_mode && !ext_io_rd_n && io_rd_d;

always @(posedge clk) begin
  spi_start  <= 0;
  start_game <= 0;

  if (io_w && ext_io_a[4:3] == 2'b01) begin       // $E8-$EF
    case (ext_io_a[2:0])
    3'd0: lba_page[7:0]  <= ext_io_d;
    3'd1: lba_page[8]    <= ext_io_d[0];
    3'd2: lba_lo[7:0]    <= ext_io_d;
    3'd3: lba_lo[15:8]   <= ext_io_d;
    3'd4: lba_lo[23:16]  <= ext_io_d;
    3'd5: c_lba[lba_page] <= {ext_io_d, lba_lo};
    default: ;
    endcase
  end
  if (io_w && ext_io_a[4:3] == 2'b11) begin       // $F8-$FF
    case (ext_io_a[2:0])
    3'd0: begin spi_txd <= ext_io_d; spi_start <= 1; end
    3'd1: begin spi_sel <= ext_io_d[0]; spi_slow <= ext_io_d[1]; fwd_discard <= ext_io_d[2]; end
    3'd2: begin ld_data <= ext_io_d; ld_pend <= 1; end
    3'd3: begin gg_next <= ext_io_d[0]; start_game <= 1; end
    3'd4: fwd_lo <= ext_io_d;
    3'd5: begin
            fwd_count  <= {ext_io_d, fwd_lo};
            fwd_active <= ({ext_io_d, fwd_lo} != 16'd0);
          end
    3'd6: ld_addr  <= 0;
    3'd7: rom_mask <= ext_io_d;
    endcase
  end

  // $FF: the received byte, and the next transfer starts.  (The Z80
  // takes the byte at the end of its read, so start it only then: the
  // read's start would shift spi_data under it.)
  if (boot_mode && ext_io_rd_n && !io_rd_d && ext_io_a == 5'h1F) begin
    spi_txd   <= 8'hff;
    spi_start <= 1;
  end

  // Forward engine: one SPI byte at a time, each to the SRAM
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


  // Cache tables: set up at the start of a game (pages 0-59 in SRAM pages
  // 0-59, where the loader put them)
  cm_we <= 0;
  cr_we <= 0;
  if (start_game) begin
    c_init   <= 1;
    c_init_i <= 0;
  end else if (c_init) begin
    cm_we    <= 1;
    cm_a     <= c_init_i[8:0];
    cm_d     <= (c_init_i[8:0] < 9'd60) ? {1'b1, c_init_i[5:0]} : 7'd0;
    cr_we    <= (c_init_i[8:0] < 9'd64);
    cr_a     <= c_init_i[5:0];
    cr_d     <= c_init_i[8:0];
    c_ref    <= 0;
    f_hand   <= 0;
    c_init_i <= c_init_i + 1;
    if (c_init_i == 10'd511)
      c_init <= 0;
  end

  // ROM reads mark their SRAM page used; a read of a page that is not
  // there holds the Z80 and the reader takes the page from c_want.  A hit
  // waits c_settle clocks after its page has been mapped (the SRAM read
  // catching up).
  if (cart_rd && c_hit)
    c_ref[c_line] <= 1;
  if (c_settle != 0)
    c_settle <= c_settle - 1;
  cpu_hold <= !boot_mode && !c_init && cart_rd && (!c_hit || c_settle != 0);
  if (!boot_mode && !c_init && cart_rd && !c_hit && f_state == F_IDLE && !c_want_v) begin
    c_want   <= c_page;
    c_want_v <= 1;
  end

  if (boot_mode || c_init) begin
    f_state  <= F_IDLE;
    f_cs     <= 0;
    c_want_v <= 0;
  end else case (f_state)
  F_IDLE:
    if (c_want_v) begin
      f_page   <= c_want;
      c_want_v <= 0;
      f_state  <= F_VICT;
    end
  F_VICT:                            // clock hand: the first page not used lately
    if (c_ref[f_hand]) begin
      c_ref[f_hand] <= 0;
      f_hand <= (f_hand == 6'd59) ? 6'd0 : f_hand + 6'd1;
    end else begin
      f_line  <= f_hand;
      f_hand  <= (f_hand == 6'd59) ? 6'd0 : f_hand + 6'd1;
      f_state <= F_EVICT;
    end
  F_EVICT: begin
      cm_we <= 1;                    // unmap the page it had
      cm_a  <= c_rev[f_line];
      cm_d  <= 7'd0;
      cr_we <= 1;
      cr_a  <= f_line;
      cr_d  <= f_page;
      ld_addr <= {f_line, 13'd0};
      f_cnt   <= 0;
      f_blk   <= 0;
      f_ci    <= 0;
      f_stop  <= 0;
      f_bad   <= 0;
      f_cs    <= 1;
      spi_txd <= 8'hFF; spi_start <= 1; f_state <= F_WAIT; f_next <= F_CMD;
    end
  F_CMD: begin                       // CMD18 or CMD12, 6 bytes
      spi_txd <= f_cmd_byte; spi_start <= 1; f_state <= F_WAIT;
      f_ci <= f_ci + 1;
      f_next <= (f_ci != 3'd5) ? F_CMD : f_stop ? F_STUFF : F_R1;
      f_cnt <= 0;
    end
  F_R1: begin
      spi_txd <= 8'hFF; spi_start <= 1; f_state <= F_WAIT; f_next <= F_R1C;
      f_cnt <= f_cnt + 1;
    end
  F_R1C:
    if (spi_data == 8'hFF)
      f_state <= (f_cnt == 16) ? F_ERR : F_R1;
    else
      f_state <= (spi_data == 8'h00) ? F_TOK : F_ERR;
  F_TOK: begin
      spi_txd <= 8'hFF; spi_start <= 1; f_state <= F_WAIT; f_next <= F_TOKC;
      f_cnt <= f_cnt + 1;
    end
  F_TOKC:
    if (spi_data == 8'hFE) begin
      f_byte  <= 0;
      f_crc   <= 0;
      f_state <= F_DATA;
    end else
      f_state <= (spi_data != 8'hFF || f_cnt == 16'hFFFF) ? F_ERR : F_TOK;
  F_DATA:
    if (!ld_pend) begin
      spi_txd <= 8'hFF; spi_start <= 1; f_state <= F_WAIT; f_next <= F_DATAC;
    end
  F_DATAC: if (!ld_pend) begin       // (the SRAM has the last byte)
      ld_data <= spi_data;
      ld_pend <= 1;
      f_crc   <= crc16_byte(f_crc, spi_data);
      f_byte  <= f_byte + 1;
      f_cnt   <= 0;
      f_state <= (f_byte == 9'd511) ? F_CRC : F_DATA;
    end
  F_CRC: begin                       // two CRC bytes (checked in F_CRCC)
      spi_txd <= 8'hFF; spi_start <= 1; f_state <= F_WAIT;
      f_cnt <= f_cnt + 1;
      f_next <= F_CRCC;
    end
  F_CRCC: begin
      if (spi_data != (f_cnt == 1 ? f_crc[15:8] : f_crc[7:0]))
        f_bad <= 1;
      if (f_cnt == 2) begin
        f_blk   <= f_blk + 1;
        f_cnt   <= 0;
        f_state <= (f_blk == 4'd15) ? F_STOP : F_TOK;
      end else
        f_state <= F_CRC;
    end
  F_STOP: begin                      // all sectors: CMD12
      f_ci    <= 0;
      f_stop  <= 1;
      f_state <= F_CMD;
    end
  F_STUFF: begin                     // the byte after CMD12 (discarded)
      spi_txd <= 8'hFF; spi_start <= 1; f_state <= F_WAIT; f_next <= F_SR1;
      f_cnt <= 0;
    end
  F_SR1: begin                       // CMD12's response
      spi_txd <= 8'hFF; spi_start <= 1; f_state <= F_WAIT; f_next <= F_SR1C;
      f_cnt <= f_cnt + 1;
    end
  F_SR1C:
    if (spi_data == 8'hFF && f_cnt != 16)
      f_state <= F_SR1;
    else begin
      f_cnt   <= 0;
      f_state <= F_BUSY;
    end
  F_BUSY: begin                      // the card is busy while it sends 0
      spi_txd <= 8'hFF; spi_start <= 1; f_state <= F_WAIT; f_next <= F_BUSYC;
      f_cnt <= f_cnt + 1;
    end
  F_BUSYC:
    if (spi_data == 8'hFF)
      f_state <= F_END;
    else
      f_state <= (f_cnt == 16'hFFFF) ? F_ERR : F_BUSY;
  F_END:
    if (!ld_pend) begin
      f_cs <= 0;
      spi_txd <= 8'hFF; spi_start <= 1; f_state <= F_WAIT;
      f_next  <= f_bad ? F_ERR : F_MAP;    // a bad block: read the page again
    end
  F_MAP: begin
      cm_we <= 1;
      cm_a  <= f_page;
      cm_d  <= {1'b1, f_line};
      c_ref[f_line] <= 1;
      c_settle <= 3'd7;
      f_state <= F_MAPW;
    end
  F_MAPW:                            // the table write lands
      f_state <= F_IDLE;
  F_WAIT:                            // an SPI byte
    if (!spi_start && !spi_busy)
      f_state <= f_next;
  F_ERR:                             // stop the read (CMD12), then start the page again
    if (!f_retry) begin
      f_retry <= 1;
      f_bad   <= 1;
      f_state <= F_STOP;
    end else if (!ld_pend) begin
      f_retry <= 0;
      f_cs    <= 0;
      spi_txd <= 8'hFF; spi_start <= 1; f_state <= F_WAIT; f_next <= F_EVICT;
    end
  default: f_state <= F_IDLE;
  endcase

  if (ld_done) begin
    ld_pend <= 0;
    ld_addr <= ld_addr + 1;
  end

  if (g_reset) begin
    c_init     <= 0;
    spi_sel    <= 0;
    spi_slow   <= 1;
    fwd_active <= 0;
    fwd_wait   <= 0;
    ld_pend    <= 0;
  end
end

// I/O reads: the value for the port, taken by the Z80 at the end of its read
always @(posedge clk)
  case (ext_io_a[2:0])
  3'd1:    ext_io_q <= { spi_busy || spi_start || fwd_active || ld_pend, !sd_cd_n, 6'd0 };
  default: ext_io_q <= spi_data;
  endcase

// ---------------------------------------------------------------------------
// SRAM controller
//
// Reads: every clock, alternately the ROM byte and the cartridge RAM
// byte (address out at a clock, data taken at the next).  A write (the
// loader's byte, or a cartridge RAM write) puts address and data out,
// WE goes low at the next falling edge and high at the one after, and
// the address stays one more clock.

localparam [18:0] NVRAM_BASE = 19'h78000;

reg  [1:0] wr_st = 0;          // 0 none, 1 WE low, 2 WE high, 3 hold
reg        wr_ld;              // the write is the loader's
reg        nv_done = 0;        // this cartridge RAM write is done
reg        rd_slot = 0;        // 0: ROM address out, 1: cartridge RAM
reg        rd_valid = 0;       // the last clock put a read address out
reg        we_next = 1;

wire [18:0] rom_sa = {c_line, rom_ma[12:0]};
wire [18:0] nv_sa  = NVRAM_BASE | {4'd0, nvram_a};

assign ld_done = (wr_st == 2'd3) && wr_ld;

always @(posedge clk) begin
  // the data of the read address put out at the last clock
  if (rd_valid) begin
    if (rd_slot) rom_q   <= sram_din;
    else         nvram_q <= sram_din;
  end
  rd_valid <= 0;

  if (!nvram_we)
    nv_done <= 0;

  case (wr_st)
  2'd0:
    if (ld_pend) begin
      sram_addr <= ld_addr;
      sram_dout <= ld_data;
      sram_doe  <= 1;
      sram_oe_n <= 1;
      we_next   <= 0;
      wr_ld     <= 1;
      wr_st     <= 2'd1;
    end else if (nvram_we && !nv_done && !boot_mode) begin
      sram_addr <= nv_sa;
      sram_dout <= nvram_d;
      sram_doe  <= 1;
      sram_oe_n <= 1;
      we_next   <= 0;
      wr_ld     <= 0;
      nv_done   <= 1;
      wr_st     <= 2'd1;
    end else begin
      sram_doe  <= 0;
      sram_oe_n <= 0;
      we_next   <= 1;
      rd_slot   <= !rd_slot;
      sram_addr <= rd_slot ? nv_sa : rom_sa;
      rd_valid  <= 1;
    end
  2'd1: begin we_next <= 1; wr_st <= 2'd2; end
  2'd2: wr_st <= 2'd3;
  2'd3: begin sram_doe <= 0; sram_oe_n <= 0; wr_st <= 2'd0; end
  endcase
end

initial sram_we_n = 1;
always @(negedge clk)
  sram_we_n <= we_next;

// ---------------------------------------------------------------------------
// Frame lock and line buffer
//
// The system waits at the top of its frame (line 0) until the HDMI frame
// reaches rel_line; its line n is then shown on HDMI lines TOP + 2n and
// TOP + 2n + 1.

wire [9:0] top     = smode_M1 ? 10'd16 : 10'd48;   // 224 or 192 lines
wire [9:0] rel_line = top - 10'd3;

reg  release_tog = 0;
always @(posedge clk25)
  if (vc == rel_line && hc == 0)
    release_tog <= !release_tog;

reg  [2:0] rel_sync = 0;
reg        waiting = 0;
wire       rel_event = rel_sync[2] ^ rel_sync[1];

always @(posedge clk) begin
  rel_sync <= {rel_sync[1:0], release_tog};
  if (!waiting) begin
    // (the line counter steps at pixel 487: line 0 starts 24 pixels on)
    if (ce_pix && y == 9'd0 && x == 9'd488 && !sys_reset) begin
      waiting <= 1;
      run     <= 0;
    end
  end else if (rel_event) begin
    waiting <= 0;
    run     <= 1;
  end
  if (sys_reset && !waiting)
    run <= 1;
end

// 8 lines of 256 pixels, 12-bit colour (blue 11:8, green 7:4, red 3:0)
// (The VDP shows pixel n when x is n + 1: x 1-256, Game Gear 49-208.)
reg [11:0] lbuf [0:2047];
wire [8:0] xm1 = x - 9'd1;
always @(posedge clk)
  if (ce_pix && x != 9'd0 && x <= 9'd256 && y < 9'd256)
    lbuf[{y[2:0], xm1[7:0]}] <= color;

// HDMI side
wire [9:0] vrow = vc - top;          // HDMI line in the picture
wire [9:0] hcol = hc - 10'd64;       // pixel in the picture
wire       in_pic = (vc >= top) && (vrow < (smode_M1 ? 10'd448 : 10'd384)) &&
                    (hc >= 10'd64) && (hc < 10'd576);
// Game Gear: only its window, x 48-207 and y 24-167 (40-183 in 224-line mode)
wire [8:0] sy = vrow[9:1];
wire [8:0] sx = hcol[9:1];
wire       in_gg = (sx >= 9'd48) && (sx < 9'd208) &&
                   (smode_M1 ? (sy >= 9'd40 && sy < 9'd184) : (sy >= 9'd24 && sy < 9'd168));

reg [11:0] lb_q;
reg  [9:0] hc1, vc1;
reg        pic1;
always @(posedge clk25) begin
  lb_q <= lbuf[{sy[2:0], sx[7:0]}];
  hc1  <= hc;
  vc1  <= vc;
  pic1 <= in_pic && (!gg || in_gg);
end

always @(posedge clk25) begin
  vid_blank   <= (hc1 >= 10'd640) || (vc1 >= 10'd480);
  vid_hsync_n <= !((hc1 >= 10'd656) && (hc1 < 10'd752));
  vid_vsync_n <= !((vc1 >= 10'd490) && (vc1 < 10'd492));
  vid_r <= pic1 ? {lb_q[3:0],  lb_q[3:0]}  : 8'd0;
  vid_g <= pic1 ? {lb_q[7:4],  lb_q[7:4]}  : 8'd0;
  vid_b <= pic1 ? {lb_q[11:8], lb_q[11:8]} : 8'd0;
end

// ---------------------------------------------------------------------------
// Audio: the average of each tick's 64 clocks, then a low-pass (see
// sms_lowpass), to clk25.

reg [5:0] af_div = 0;
always @(posedge clk)
  af_div <= af_div + 1;
wire af_tick = (af_div == 0);
wire signed [15:0] lf_out, rf_out;
sms_lowpass lp_l (.clk(clk), .tick(af_tick), .x(sys_l), .y(lf_out));
sms_lowpass lp_r (.clk(clk), .tick(af_tick), .x(sys_r), .y(rf_out));

reg [31:0] aud_m, aud_s;
always @(posedge clk25) begin
  aud_m <= {lf_out, rf_out};
  aud_s <= aud_m;
  if (aud_s == aud_m) begin
    audio_l <= aud_s[31:16];
    audio_r <= aud_s[15:0];
  end
end

endmodule


// The average of x over each tick's 64 clocks (2us: nulls tones at
// multiples of 500kHz, which sampling at the ticks would fold down), then
// two one-pole low-pass stages, y += (x - y) / 4 at each tick (together
// -3dB near 13kHz).  Signed, with 4 fraction bits and room for the
// difference.  (From the Lynx core.)
module sms_lowpass
  ( input                    clk
  , input                    tick        // every 64 clocks
  , input      signed [15:0] x
  , output     signed [15:0] y
  );

reg  signed [21:0] acc = 0, avg = 0;
reg  signed [21:0] s1 = 0, s2 = 0;

always @(posedge clk) begin
  if (tick) begin
    acc <= 0;
    avg <= acc + x;              // 64 samples: x 64 = x 16 with 2 more bits
  end else
    acc <= acc + x;
  if (tick) begin
    s1 <= s1 + (((avg >>> 2) - s1) >>> 2);
    s2 <= s2 + ((s1 - s2) >>> 2);
  end
end

assign y = s2[19:4];

endmodule
