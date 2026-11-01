// Phoenix glue for the Atari Lynx core (rtl/mister, from the MiSTer core).
//
// Clocks:
//
//  - clk25: the 640x480 HDMI pixel clock.
//  - clk32: 32MHz.  The Lynx runs from it with ce every second clock (its
//    16MHz system tick), and so do the SRAM, the SD card and the loader.
//
// Picture: the Lynx writes its 160x102 pixels (12-bit colour) into a
// frame buffer (block RAM); HDMI shows it 4x: 640 x 408, lines 36-443.
// The Lynx's frame rate (often 75Hz) is not the HDMI's, so the picture
// can tear.
//
// SRAM (512K): the Lynx's 64K RAM at 00000 (8K pages 0-7), the cartridge
// in 8K pages 8-63 (448K).  Each ce period (two clocks) the Lynx's RAM
// port gets the first clock and a cartridge byte read can take the second
// (not after a RAM write: WE goes high at the falling edge after it, so
// the address must stay).  RAM: the address is out at the ce clock, the
// data is taken one clock later and held for the Lynx's next ce.
//
// ROM cache: a cartridge can be 512K, 64 pages of 8K, and the SRAM has 56
// of them.  A game starts with cartridge pages 0-55 in SRAM pages 8-63
// (all of a cartridge up to 448K).  A cartridge byte from a page that is
// not there waits (the cartridge port waits for its byte anyway) while
// the cache reads the page from the SD card (one CMD18, 16 or 17 sectors,
// each CRC-checked, a bad page is read again) into the SRAM page that was
// not used lately (clock hand), at the SD argument the loader gave for
// it.  Each byte written stops the Lynx for one tick (62ns), so a page
// costs it about 0.5ms of its 6ms.
//
// Loader mode: at power-on the Lynx's own CPU runs the menu and loader
// (loader/, cc65) from a 16K block RAM ROM at $C000-$FFFF (Suzy, Mikey,
// $FFF9 and the I/O window are not covered), and this I/O window is at
// $FE00-$FEFF:
//
//  $00 R  SPI received byte
//      W  SPI transfer byte
//  $01 R  bit7 busy (SPI or forward engine), bit6 card present
//      W  bit0 SD select (1 = CS asserted), bit1 slow SPI clock,
//         bit2 forward engine discards the bytes
//  $02 W  byte to the SRAM at the load address, which then increments
//  $04 W  start the game
//  $06 W  forward count, low byte
//  $07 W  forward count, high byte, and start: clock in that many SPI bytes
//         (sending $FF) and write each to the SRAM at the load address.
//         The Lynx stops while it runs.
//  $08-$0A W  load address, bits 7:0, 15:8, 18:16
//  $0B W  cartridge bank 0 page size (LNX header bytes 4-5), low byte
//  $0C W  its high byte
//  $10 W  ROM cache: cartridge page (8K, 0-63) for $11-$14
//  $11-$14 W  the SD read argument of that page's first sector (block
//         number, or byte offset on an SD v1 card), bits 7:0 first; $14
//         writes it to the page table
//  $15 R  SPI received byte, and start the next transfer (sending $FF)
//  $16 W  bytes of a page's first sector before the page (the LNX
//         header: 64), bits 7:0
//  $17 W  bit 0: its bit 8
//
// Resets: the reset button (or ESC) resets the Lynx, which runs the game
// again from its boot ROM; holding it for a second goes back to the menu.

`timescale 1ns / 1ps

module lynx_phoenix
  #( parameter LOADER_FILE = "lynx_loader.hex"
   , parameter BOOT_FILE   = "lynxboot.hex"
   )
   ( input             clk25
   , input             clk32

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
   , output reg        sram_we_n   // changes at the falling edge of clk32
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
   , input             clk32_locked  // the 32MHz DCM is locked

   // Debug (simulation): the CPU's bus, and the system tick
   , output     [15:0] dbg_addr_o
   , output            dbg_req_o
   , output            dbg_rnw_o
   , output            dbg_done_o
   , output            dbg_ce_o
   );

// ---------------------------------------------------------------------------
// Resets (clk32)

reg [2:0] reset_s = 3'b111, game_reset_s = 0;
always @(posedge clk32) begin
  reset_s      <= {reset_s[1:0], reset};
  game_reset_s <= {game_reset_s[1:0], game_reset};
end
wire g_reset = reset_s[2] || !clk32_locked;

reg       start_game = 0;
reg [7:0] lynx_rst_cnt = 8'hff;
reg       c_init = 0;         // the cache table is being set up
wire      lynx_reset = (lynx_rst_cnt != 0) || c_init;

initial boot_mode = 1;

always @(posedge clk32) begin
  if (g_reset)
    boot_mode <= 1;
  else if (start_game)
    boot_mode <= 0;

  if (g_reset || start_game || (game_reset_s[2] && !boot_mode))
    lynx_rst_cnt <= 8'hff;
  else if (lynx_rst_cnt != 0)
    lynx_rst_cnt <= lynx_rst_cnt - 1;
end

// ---------------------------------------------------------------------------
// System tick: ce every second clock, held low while the loader writes
// the SRAM (forward engine)

reg  ph = 0;
wire hold;
wire ce = ph && !hold;

always @(posedge clk32)
  ph <= !ph;

// ---------------------------------------------------------------------------
// Controllers

// ColecoVision key codes (pins 4..1, active low)
localparam [3:0] CV_1 = 4'b0111, CV_2 = 4'b1011, CV_HASH = 4'b1010;

// Lynx buttons: 0 up, 1 down, 2 left, 3 right, 4 A, 5 B, 6 option 1,
// 7 option 2, 8 pause
function [8:0] cv_pad(input [9:0] p);
  // left fire A, right fire B, 1 option 1, 2 option 2, # pause
  cv_pad = { p[9:6] == CV_HASH, p[9:6] == CV_2, p[9:6] == CV_1, p[5:0] };
endfunction

reg [8:0] joy = 0;

always @(posedge clk25)
  // SNES: A and X A, B and Y B, L option 1, R option 2, start pause;
  // keyboard: arrows, X A, Z B, 1 option 1, 2 option 2, Q pause
  joy <= cv_pad(cv1) | cv_pad(cv2) |
         { snes[4], snes[7], snes[6], snes[1] | snes[3], snes[0] | snes[2],
           snes[11], snes[10], snes[9], snes[8] } |
         { kb_keys[6], kb_keys[7], kb_keys[13], kb_joy[4], kb_keys[0],
           kb_joy[3:0] };

// To clk32: take a value once it has been the same for two clocks.
reg [8:0] joy_m, joy_s, joy_g = 0;
always @(posedge clk32) begin
  joy_m <= joy; joy_s <= joy_m; if (joy_s == joy_m) joy_g <= joy_s;
end

// ---------------------------------------------------------------------------
// The Lynx

reg  [15:0] bank0size = 16'h0200;

wire [19:0] rom_addr;
reg   [7:0] rom_byte = 0;
wire        rom_req;
reg         rom_ack = 0;
wire        rom_stale;
wire [15:0] ram_addr;
wire  [7:0] ram_din;
wire        ram_we;
reg   [7:0] ram_dout = 0;
wire [13:0] boot_addr;
reg   [7:0] boot_q;
wire  [7:0] io_addr, io_dout;
wire        io_wr, io_rd;
reg   [7:0] io_din;
wire [13:0] pix_addr;
wire [11:0] pix_data;
wire        pix_we;
wire [15:0] lynx_l, lynx_r;
wire        frame_end;
wire [15:0] dbg_addr;
wire        dbg_req, dbg_rnw, dbg_done;
assign dbg_addr_o = dbg_addr;
assign dbg_req_o  = dbg_req;
assign dbg_rnw_o  = dbg_rnw;
assign dbg_done_o = dbg_done;
assign dbg_ce_o   = ce;

lynx_core lynx
  ( .clk            (clk32)
  , .ce             (ce)
  , .reset_in       (lynx_reset)
  , .rom_addr       (rom_addr)
  , .rom_byte       (rom_byte)
  , .rom_req        (rom_req)
  , .rom_ack        (rom_ack)
  , .rom_stale      (rom_stale)
  , .bank0size      (bank0size)
  , .ram_addr       (ram_addr)
  , .ram_din        (ram_din)
  , .ram_we         (ram_we)
  , .ram_dout       (ram_dout)
  , .boot_mode      (boot_mode)
  , .bootrom_addr   (boot_addr)
  , .bootrom_data   (boot_q)
  , .io_addr        (io_addr)
  , .io_dout        (io_dout)
  , .io_wr          (io_wr)
  , .io_rd          (io_rd)
  , .io_din         (io_din)
  , .pixel_out_addr (pix_addr)
  , .pixel_out_data (pix_data)
  , .pixel_out_we   (pix_we)
  , .frame_end      (frame_end)
  , .audio_l        (lynx_l)
  , .audio_r        (lynx_r)
  , .JoyUP          (joy_g[0])
  , .JoyDown        (joy_g[1])
  , .JoyLeft        (joy_g[2])
  , .JoyRight       (joy_g[3])
  , .Option1        (joy_g[6])
  , .Option2        (joy_g[7])
  , .KeyB           (joy_g[5])
  , .KeyA           (joy_g[4])
  , .KeyPause       (joy_g[8])
  , .dbg_addr       (dbg_addr)
  , .dbg_req        (dbg_req)
  , .dbg_rnw        (dbg_rnw)
  , .dbg_done       (dbg_done)
  );

// Boot ROMs: the Lynx's 512 bytes, and the loader's 16K
reg [7:0] boot_rom   [0:511];
reg [7:0] loader_rom [0:16383];
reg [7:0] boot_rom_q, loader_q;
initial $readmemh(BOOT_FILE, boot_rom);
initial $readmemh(LOADER_FILE, loader_rom);
always @(posedge clk32) begin
  boot_rom_q <= boot_rom[boot_addr[8:0]];
  loader_q   <= loader_rom[boot_addr];
end
always @*
  boot_q = boot_mode ? loader_q : boot_rom_q;

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
reg        fwd_wait = 0;      // a forward byte is being clocked in

reg        ld_pend = 0;       // a byte waits for the SRAM
reg  [7:0] ld_data;
reg [18:0] ld_addr = 0;
wire       ld_done;           // the SRAM took it

assign hold = fwd_active || ld_pend;

reg        f_cs = 0;          // the cache's SD select

assign sd_cs_n = !(boot_mode ? spi_sel : f_cs);
assign sd_sclk = spi_sclk_r;
assign sd_mosi = spi_tx[7];

// SPI half period: 2 clocks fast (8MHz SCLK), 80 clocks slow (200kHz).
// MISO is taken at the end of SCLK's high half.
wire spi_tick = (spi_slow && boot_mode) ? (spi_div == 7'd79) : (spi_div[0] == 1'b1);

always @(posedge clk32) begin
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

reg  [6:0] c_map [0:63];       // cartridge page -> {in the SRAM, SRAM page}
reg  [5:0] c_rev [0:63];       // SRAM page (8-63) -> cartridge page
reg [63:0] c_ref = 0;          // SRAM page used since the clock hand passed
reg [31:0] c_lba [0:63];       // cartridge page -> SD argument of its first sector
reg  [6:0] c_init_i;

reg        rom_pend = 0;       // the Lynx waits for a cartridge byte
reg [18:0] rom_ra;             // its address in the cartridge
wire [6:0] c_map_q = c_map[rom_ra[18:13]];
wire       c_hit   = c_map_q[6];
wire [5:0] c_line  = c_map_q[5:0];
reg  [5:0] c_want;             // the page a read waits for
reg  [8:0] miss_age = 0;       // clocks a missing page's byte has been wanted
reg        c_want_v = 0;
wire       rom_used;           // the SRAM controller read a hit (clk)

localparam F_IDLE = 5'd0,  F_VICT = 5'd1,  F_EVICT = 5'd2, F_CMD = 5'd3,
           F_R1 = 5'd4,    F_R1C = 5'd5,   F_TOK = 5'd6,   F_TOKC = 5'd7,
           F_DATA = 5'd8,  F_DATAC = 5'd9, F_CRC = 5'd10,  F_STOP = 5'd11,
           F_STUFF = 5'd12, F_SR1 = 5'd13, F_SR1C = 5'd14, F_BUSY = 5'd15,
           F_BUSYC = 5'd16, F_END = 5'd17, F_MAP = 5'd18,  F_WAIT = 5'd19,
           F_ERR = 5'd20,  F_MAPW = 5'd21, F_CRCC = 5'd22;
reg  [4:0] f_state = F_IDLE, f_next;
reg  [5:0] f_page;
reg  [5:0] f_line, f_hand = 6'd8;
reg [15:0] f_cnt;
reg  [4:0] f_blk;
reg  [8:0] f_byte;
reg  [2:0] f_ci;               // command byte
reg        f_stop;             // sending CMD12 (else CMD18)
reg [31:0] f_arg;              // the page's first sector
reg  [8:0] f_skip = 0;         // bytes of the first sector before the page
reg [15:0] f_crc;              // CRC16 (CCITT, 0 start) of a block's data
reg        f_bad;              // a block of the page had a bad CRC
reg        f_retry = 0;        // an error's CMD12 has been sent

// A byte of the page: from f_skip in the first sector to f_skip in the 17th
wire f_in_page = (f_blk == 5'd0)  ? (f_byte >= f_skip) :
                 (f_blk == 5'd16) ? (f_byte < f_skip) : 1'b1;
wire [4:0] f_last_blk = (f_skip != 0) ? 5'd16 : 5'd15;

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
reg  [5:0] cm_a;
reg  [6:0] cm_d;
reg        cr_we = 0;
reg  [5:0] cr_a;
reg  [5:0] cr_d;
reg  [5:0] lba_page;
reg [23:0] lba_lo;

always @(posedge clk32) begin
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

// I/O accesses: io_wr / io_rd are set at a ce clock and held until the
// next: act on them together with ce.
wire io_w = boot_mode && io_wr && ce;
wire io_r = boot_mode && io_rd && ce;

always @(posedge clk32) begin
  spi_start  <= 0;
  start_game <= 0;

  if (io_w) begin
    case (io_addr)
    8'h00: begin spi_txd <= io_dout; spi_start <= 1; end
    8'h01: begin spi_sel <= io_dout[0]; spi_slow <= io_dout[1]; fwd_discard <= io_dout[2]; end
    8'h02: begin ld_data <= io_dout; ld_pend <= 1; end
    8'h04: start_game <= 1;
    8'h06: fwd_lo <= io_dout;
    8'h07: begin
             fwd_count <= {io_dout, fwd_lo};
             fwd_active <= ({io_dout, fwd_lo} != 16'd0);
           end
    8'h08: ld_addr[7:0]   <= io_dout;
    8'h09: ld_addr[15:8]  <= io_dout;
    8'h0A: ld_addr[18:16] <= io_dout[2:0];
    8'h0B: bank0size[7:0]  <= io_dout;
    8'h0C: bank0size[15:8] <= io_dout;
    8'h10: lba_page       <= io_dout[5:0];
    8'h11: lba_lo[7:0]    <= io_dout;
    8'h12: lba_lo[15:8]   <= io_dout;
    8'h13: lba_lo[23:16]  <= io_dout;
    8'h14: c_lba[lba_page] <= {io_dout, lba_lo};
    8'h16: f_skip[7:0]    <= io_dout;
    8'h17: f_skip[8]      <= io_dout[0];
    default: ;
    endcase
  end

  // $15: the received byte, and the next transfer starts
  if (io_r && io_addr == 8'h15) begin
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

  if (ld_done) begin
    ld_pend <= 0;
    ld_addr <= ld_addr + 1;
  end

  // Cache tables: set up at the start of a game (cartridge pages 0-55 in
  // SRAM pages 8-63, where the loader put them)
  cm_we <= 0;
  cr_we <= 0;
  if (start_game) begin
    c_init   <= 1;
    c_init_i <= 0;
  end else if (c_init) begin
    cm_we    <= 1;
    cm_a     <= c_init_i[5:0];
    cm_d     <= (c_init_i[5:0] < 6'd56) ? {1'b1, c_init_i[5:0] + 6'd8} : 7'd0;
    cr_we    <= 1;
    cr_a     <= c_init_i[5:0] + 6'd8;
    cr_d     <= c_init_i[5:0];
    c_ref    <= 0;
    f_hand   <= 6'd8;
    c_init_i <= c_init_i + 1;
    if (c_init_i == 7'd63)
      c_init <= 0;
  end

  // Cartridge reads mark their SRAM page used
  if (rom_used)
    c_ref[c_line] <= 1;

  // A cartridge byte from a page that is not in the SRAM: the reader
  // takes the page from c_want.  The cartridge port reads ahead at every
  // address, also each step of a page number being shifted in, so a miss
  // waits 16us first: if the address moves on, the SRAM controller drops
  // the byte (rom_stale) and no page is read for nothing.
  if (!rom_pend || c_hit || rom_stale)
    miss_age <= 0;
  else if (miss_age != 9'h1FF)
    miss_age <= miss_age + 1;
  if (!boot_mode && !c_init && rom_pend && !c_hit && !rom_stale && miss_age == 9'h1FF &&
      f_state == F_IDLE && !c_want_v) begin
    c_want   <= rom_ra[18:13];
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
      f_hand <= (f_hand == 6'd63) ? 6'd8 : f_hand + 6'd1;
    end else begin
      f_line  <= f_hand;
      f_hand  <= (f_hand == 6'd63) ? 6'd8 : f_hand + 6'd1;
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
      if (f_in_page) begin
        ld_data <= spi_data;
        ld_pend <= 1;
      end
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
        f_state <= (f_blk == f_last_blk) ? F_STOP : F_TOK;
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

  if (g_reset) begin
    spi_sel    <= 0;
    spi_slow   <= 1;
    fwd_active <= 0;
    fwd_wait   <= 0;
    ld_pend    <= 0;
    c_init     <= 0;
  end
end

// I/O reads: the value for io_addr, taken by the Lynx at a ce clock
always @(posedge clk32)
  case (io_addr)
  8'h01:   io_din <= { spi_busy || spi_start || fwd_active || ld_pend, !sd_cd_n, 6'd0 };
  default: io_din <= spi_data;
  endcase

// ---------------------------------------------------------------------------
// SRAM controller
//
// ph = 1 is the ce clock.  At its end (A) the Lynx's RAM address goes out;
// a write drives the data and WE goes low at the next falling edge and
// high at the one after.  At the end of the ph = 0 clock (B) a read's data
// is taken for the Lynx; a cartridge read (rom_pend) can put its address
// out instead when there was no write, and its data is taken at the next
// A.  While the Lynx holds (loader), the A slot writes the loader's byte.

reg        slot_rom = 0;      // B put a cartridge address out
reg        slot_ram = 0;      // A put the Lynx's address out (its data at B)
reg        slot_wr = 0;       // A started a write
reg        we_next = 1;       // WE for the next falling edge
reg        ld_wr = 0;         // the A slot wrote the loader's byte

assign ld_done = ld_wr;

// The SRAM address of the cartridge byte: in a game through the cache, in
// boot mode (the cartridge port reads ahead) straight
wire        rom_ok  = boot_mode || (c_hit && !c_init);
wire [18:0] rom_sa  = boot_mode ? 19'h10000 + rom_ra : {c_line, rom_ra[12:0]};
assign rom_used = !ph && !slot_wr && rom_pend && !slot_rom && !boot_mode && rom_ok;

always @(posedge clk32) begin
  rom_ack <= 0;
  ld_wr   <= 0;

  if (rom_req) begin
    rom_pend <= 1;
    rom_ra   <= rom_addr[18:0];
  end else if (rom_pend && !rom_ok && rom_stale && !slot_rom) begin
    rom_byte <= 8'hFF;             // a missing byte no longer wanted
    rom_ack  <= 1;
    rom_pend <= 0;
  end

  if (ph) begin
    // A: end of the ce clock
    slot_ram <= 0;
    slot_wr  <= 0;
    if (slot_rom) begin
      rom_byte <= sram_din;
      rom_ack  <= 1;
      rom_pend <= 0;
      slot_rom <= 0;
    end
    if (ce) begin
      sram_addr <= {3'd0, ram_addr};
      sram_dout <= ram_din;
      slot_ram  <= !ram_we;
      slot_wr   <= ram_we;
      sram_doe  <= ram_we;
      sram_oe_n <= ram_we;
      we_next   <= !ram_we;
    end else if (ld_pend && !ld_wr) begin
      sram_addr <= ld_addr;
      sram_dout <= ld_data;
      slot_wr   <= 1;
      sram_doe  <= 1;
      sram_oe_n <= 1;
      we_next   <= 0;
      ld_wr     <= 1;
    end else begin
      sram_doe  <= 0;
      sram_oe_n <= 0;
      we_next   <= 1;
    end
  end else begin
    // B
    we_next <= 1;
    if (slot_ram)
      ram_dout <= sram_din;
    if (!slot_wr) begin
      sram_doe  <= 0;
      sram_oe_n <= 0;
      if (rom_pend && !rom_req && !slot_rom && rom_ok) begin
        sram_addr <= rom_sa;
        slot_rom  <= 1;
      end
    end
  end

  if (lynx_reset && rom_pend && !slot_rom)
    rom_pend <= 0;
end

initial sram_we_n = 1;
always @(negedge clk32)
  sram_we_n <= we_next;

// ---------------------------------------------------------------------------
// Frame buffer: 160 x 102, 12-bit colour

reg [11:0] fb [0:16383] /* verilator public */;
always @(posedge clk32)
  if (pix_we)
    fb[pix_addr] <= pix_data;

// ---------------------------------------------------------------------------
// HDMI timing and picture (clk25): 800 x 525, 640 x 480 visible.  The
// Lynx picture is 4x: 640 x 408 at lines 36-443.

localparam TOP = 10'd36, BOTTOM = 10'd444;

reg  [9:0] hc = 0, vc /* verilator public */ = 0;
reg [13:0] line_base = 0;     // frame buffer address of the line's pixel 0
reg  [1:0] line_sub = 0;      // HDMI line within the Lynx line

always @(posedge clk25) begin
  if (hc == 10'd799) begin
    hc <= 0;
    vc <= (vc == 10'd524) ? 10'd0 : vc + 1;
    if (vc == TOP - 1) begin
      line_base <= 0;
      line_sub  <= 0;
    end else begin
      line_sub <= line_sub + 1;
      if (line_sub == 2'd3)
        line_base <= line_base + 14'd160;
    end
  end else
    hc <= hc + 1;
end

reg [11:0] fb_q;
reg  [9:0] hc1, vc1;
reg        pic1;
always @(posedge clk25) begin
  fb_q <= fb[line_base + hc[9:2]];
  hc1  <= hc;
  vc1  <= vc;
  pic1 <= (vc >= TOP) && (vc < BOTTOM) && (hc < 10'd640);
end

always @(posedge clk25) begin
  vid_blank   <= (hc1 >= 10'd640) || (vc1 >= 10'd480);
  vid_hsync_n <= !((hc1 >= 10'd656) && (hc1 < 10'd752));
  vid_vsync_n <= !((vc1 >= 10'd490) && (vc1 < 10'd492));
  vid_r <= pic1 ? {fb_q[11:8], fb_q[11:8]} : 8'd0;
  vid_g <= pic1 ? {fb_q[7:4],  fb_q[7:4]}  : 8'd0;
  vid_b <= pic1 ? {fb_q[3:0],  fb_q[3:0]}  : 8'd0;
end

// ---------------------------------------------------------------------------
// Audio: a low-pass filter (the Lynx's own output has an analog one), so
// tones above what HDMI's 48kHz can carry don't fold back into audible
// whistles.  Three one-pole stages, y += (x - y) / 8 at 500kHz (each
// about 10kHz; together -3dB near 5kHz, -25dB at 24kHz).

reg  [5:0] af_div = 0;
always @(posedge clk32)
  af_div <= af_div + 1;
wire af_tick = (af_div == 0);
wire signed [15:0] lf_out, rf_out;
lynx_lowpass lp_l (.clk(clk32), .tick(af_tick), .x(lynx_l), .y(lf_out));
lynx_lowpass lp_r (.clk(clk32), .tick(af_tick), .x(lynx_r), .y(rf_out));

// To clk25: take a value once it has been the same for two clocks.
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


// The average of x over each tick's 64 clocks (2us: this nulls tones at
// multiples of 500kHz, which sampling at the ticks would fold down to a
// rumble), then three one-pole low-pass stages, y += (x - y) / 8 at each
// tick.  Signed, with 4 fraction bits and room for the difference.
module lynx_lowpass
  ( input                    clk
  , input                    tick        // every 64 clocks
  , input      signed [15:0] x
  , output     signed [15:0] y
  );

reg  signed [21:0] acc = 0, avg = 0;
reg  signed [21:0] s1 = 0, s2 = 0, s3 = 0;

always @(posedge clk) begin
  if (tick) begin
    acc <= 0;
    avg <= acc + x;              // 64 samples: x 64 = x 16 with 2 more bits
  end else
    acc <= acc + x;
  if (tick) begin
    s1 <= s1 + (((avg >>> 2) - s1) >>> 3);
    s2 <= s2 + ((s1 - s2) >>> 3);
    s3 <= s3 + ((s2 - s3) >>> 3);
  end
end

assign y = s3[19:4];

endmodule
