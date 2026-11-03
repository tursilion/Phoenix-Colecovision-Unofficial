// Mr. Do! for the Phoenix: clocks, frame lock, memories, boot loader
// interface and video output.  The boards are mrdo_main.v (CPU, sound) and
// mrdo_video.v.  The structure is the Galaga core's galaga_phoenix.v.
//
// Everything runs from the 25MHz pixel clock.
//
// Clocks
//   - The 4.9MHz pixel enable is 49 per 250 clocks (exact): a 312 x 262
//     frame takes 417,061 clocks, 2,939 fewer than one 640x480 HDMI frame.
//     The game waits at the end of each frame (h = 311, v = 261) until
//     HDMI line 504, which locks it to 59.52Hz (the original is 59.94Hz).
//     Only a game already waiting is released, so it locks within a frame.
//   - The Z80 (4.1MHz, 41 per 250 clocks) waits with it.
//   - The PSGs run at their own exact rate.
//
// External SRAM
//   00000-07FFF CPU ROM            20000-21FFF boot loader copy
//   40000-4FFFF, 60000-6FFFF frame buffers for the rotated picture
// CPU ROM reads are made when the CPU's ROM address changes (address out
// on one clock, data in on the next).  Writes take two clocks.  Priority:
// CPU reads, writes (loader, frame buffer), display line prefetch.
//
// Boot mode (after power-on, or reset held for a second): the Z80 runs the
// boot loader, at first from the sprite ROM's block RAM (which is
// initialized with it), then from its copy in the SRAM, so that it can
// load the sprite ROMs.  Memory map:
//   0000-1FFF boot loader        8000-837F text (video RAM, 32 x 28)
//   E000-EFFF RAM
//   C000 R SPI received byte             W SPI transfer byte (starts it)
//   C001 R b7 SPI busy, b6 card present  W b0 SD select, b1 fast (6.25MHz)
//   C002 R b0 SRAM write pending         W load address 7:0
//   C003 R b0 vertical blank             W load address 15:8
//   C004 W load address 17:16
//   C005 W load data: write it, then address + 1
//   C006 R P1 (active low, as the game reads it)
//   C007 R P2
//   C008-C009 W DIP switches 1, 2
//   C00B W b0 error LED
//   C00C W b0 run the loader from its SRAM copy
//   C00F W start the game
//   I/O read, any port:  the SPI received byte, and start the next transfer
//                        (sending 0xFF), for INIR block reads
//   I/O write, any port: load data, as C005 (for OTIR)
// Load addresses: 00000-0FFFF and 20000-3FFFF go to the SRAM;
// 10000-15FFF graphics ROMs and 16040 sprite colour PROM (mrdo_video.v),
// 16000 / 16020 palette PROMs (u02, t02).

`timescale 1ns / 1ps

module mrdo_phoenix
   ( input             clk          // 25MHz
   , input             reset        // power-on reset, re-enters boot mode
   , input             game_reset   // reset the game only

   // Controls, 1 = pressed: b0 up b1 down b2 left b3 right b4 fire
   , input       [4:0] joy1
   , input       [4:0] joy2
   , input       [4:0] sys          // b0 coin1 b1 coin2 b2 service b3 start1 b4 start2
   , input             rot_toggle   // pulse: switch between the rotated and the native picture

   // External SRAM
   , output reg [18:0] sram_addr = 0
   , output reg  [7:0] sram_dout = 0
   , input       [7:0] sram_din
   , output reg        sram_doe = 0
   , output reg        sram_wpulse = 0   // pulse WE low in the second half of this clock
   , output reg        sram_oe_n = 1

   // SD card
   , output reg        sd_cs_n = 1
   , output reg        sd_sclk = 0
   , output reg        sd_mosi = 1
   , input             sd_miso
   , input             sd_cd_n

   // 640x480 video
   , output reg  [7:0] vid_r = 0
   , output reg  [7:0] vid_g = 0
   , output reg  [7:0] vid_b = 0
   , output reg        vid_hsync_n = 1
   , output reg        vid_vsync_n = 1
   , output reg        vid_blank = 1

   // Audio
   , output     [15:0] audio

   , output reg        boot_mode = 1
   , output reg        led_err = 0
   );

// ---------------------------------------------------------------------------
// HDMI timing: 800 x 525, visible 640 x 480

reg [9:0] hc = 0;
reg [9:0] vc = 0;

always @(posedge clk) begin
  if (hc == 10'd799) begin
    hc <= 0;
    vc <= (vc == 10'd524) ? 10'd0 : vc + 1'd1;
  end else
    hc <= hc + 1'd1;
end

wire release_line = (hc == 10'd0 && vc == 10'd504);

// ---------------------------------------------------------------------------
// Game clock enables and frame lock

wire [8:0] g_h, g_v;
reg        cen_pix = 0, cen_cpu = 0;
reg  [7:0] acc_pix = 0, acc_cpu = 0;
reg        go = 0;

wire wait_pt = (g_h == 9'd311 && g_v == 9'd261);
wire run     = !wait_pt || go;

always @(posedge clk) begin
  cen_pix <= 0;
  cen_cpu <= 0;
  if (run) begin
    if (acc_pix >= 8'd201) begin
      acc_pix <= acc_pix - 8'd201;          // + 49 - 250
      cen_pix <= 1;
    end else
      acc_pix <= acc_pix + 8'd49;
    if (acc_cpu >= 8'd209) begin
      acc_cpu <= acc_cpu - 8'd209;          // + 41 - 250
      cen_cpu <= 1;
    end else
      acc_cpu <= acc_cpu + 8'd41;
  end
  if (release_line && wait_pt)
    go <= 1;
  else if (cen_pix && wait_pt)
    go <= 0;
end

// PSG clock / 2 = 2.05MHz, 24-bit phase accumulator
reg [23:0] acc_psg = 0;
reg        cen_psg = 0;
always @(posedge clk)
  {cen_psg, acc_psg} <= {1'b0, acc_psg} + 25'd1375732;

// ---------------------------------------------------------------------------
// Resets

reg       start_game = 0;
reg [7:0] rst_cnt = 8'hff;
wire      cpu_reset = (rst_cnt != 0);

always @(posedge clk) begin
  if (reset)
    boot_mode <= 1;
  else if (start_game)
    boot_mode <= 0;

  if (reset || start_game || (game_reset && !boot_mode))
    rst_cnt <= 8'hff;
  else if (rst_cnt != 0)
    rst_cnt <= rst_cnt - 1'd1;
end

// ---------------------------------------------------------------------------
// Inputs and DIP switches

reg [7:0] dsw1 = 8'hdf, dsw2 = 8'hff;

// P1: b0 left b1 down b2 right b3 up b4 fire b5 start 1 b6 start 2 b7 tilt
// P2: the same for player 2 (cocktail), b6 coin 1, b7 coin 2
wire [7:0] p1 = {1'b1, ~sys[4], ~sys[3], ~joy1[4], ~joy1[0], ~joy1[3], ~joy1[1], ~joy1[2]};
wire [7:0] p2 = {~sys[1], ~sys[0], 1'b1, ~joy2[4], ~joy2[0], ~joy2[3], ~joy2[1], ~joy2[2]};

// ---------------------------------------------------------------------------
// Board

wire [15:0] A;
wire  [7:0] z_dout;
wire        z_mreq_n, z_iorq_n, z_rd_n, z_wr_n, z_m1_n, z_rfsh_n;
reg   [7:0] rom_q = 8'hff;
reg         boot_sel;
reg   [7:0] boot_q;
reg         ld_we = 0;
reg  [17:0] ld_a = 0;
reg   [7:0] ld_d = 0;
wire  [7:0] boot_rom_q;

reg   [9:0] text_a = 0;
wire  [7:0] text_q;
wire        ev_vbl;
wire        pix_we;
wire  [7:0] pix_x, pix_y;
wire  [7:0] g_pixel;

wire ld_vid = ld_we && ld_a[17:15] == 3'b010;           // 10000-17FFF
wire ld_pal = ld_we && ld_a[17:6]  == 12'h580;          // 16000-1603F

mrdo_main main
  ( .clk(clk), .reset(cpu_reset), .boot_mode(boot_mode)
  , .cen_cpu(cen_cpu), .cen_psg(cen_psg), .cen_pix(cen_pix)
  , .p1(p1), .p2(p2), .dsw1(dsw1), .dsw2(dsw2)
  , .rom_q(rom_q)
  , .z_a(A), .z_dout(z_dout), .z_mreq_n(z_mreq_n), .z_iorq_n(z_iorq_n), .z_rd_n(z_rd_n)
  , .z_wr_n(z_wr_n), .z_m1_n(z_m1_n), .z_rfsh_n(z_rfsh_n)
  , .boot_sel(boot_sel), .boot_q(boot_q)
  , .ld_we(ld_vid), .ld_a(ld_a[14:0]), .ld_d(ld_d)
  , .h(g_h), .v(g_v), .ev_vbl(ev_vbl)
  , .text_a(text_a), .text_q(text_q), .boot_rom_q(boot_rom_q)
  , .pix_we(pix_we), .pix_x(pix_x), .pix_y(pix_y), .pixel(g_pixel)
  , .audio(audio)
  );

// Palette PROMs: u02 (high bits) indexed by colour b4-0, t02 (low bits) by
// {b7-5, b1-0}; each b1-0 red, b3-2 green, b5-4 blue
reg [7:0] pal_u [0:31];
reg [7:0] pal_t [0:31];
always @(posedge clk)
  if (ld_pal && !ld_a[5]) pal_u[ld_a[4:0]] <= ld_d;
always @(posedge clk)
  if (ld_pal && ld_a[5]) pal_t[ld_a[4:0]] <= ld_d;

// ---------------------------------------------------------------------------
// SRAM

reg        exec_sram = 0;          // boot loader runs from its SRAM copy

wire        r0 = boot_mode ? (A[15:13] == 3'b000) : (A[15] == 1'b0);
wire [18:0] m0_addr = boot_mode ? {6'b010000, A[12:0]} : {4'b0000, A[14:0]};   // 20000 / 00000

reg        b_pend = 0;
reg [18:0] b_addr = 0;
reg  [7:0] b_data = 0;

// Rotated display: frame buffers and the line prefetch (see the video
// output below)
reg        rot = 0;                // 1 = rotated picture (toggled at run time)
reg        wbank = 0, rbank = 0, rbank_next = 0;
reg  [7:0] fq_d [0:15];            // pixel write queue
reg [15:0] fq_a [0:15];            // {line, x}
reg        fq_b [0:15];            // bank
reg  [3:0] fq_wp = 0, fq_rp = 0;
wire       fq_empty = (fq_wp == fq_rp);
reg        rd_pend = 0;            // prefetching a display line
reg  [7:0] rd_u = 0;               // next pixel of that line (source line)
reg  [7:0] rd_x = 0;               // its source column
reg        rd_half = 0;
reg        pf_go = 0;              // start a line prefetch
reg  [7:0] rt_u = 0;               // pixel of the read issued last clock
reg        rt_half = 0;

// CPU ROM reads are made when the ROM address changes; s0_addr is the
// address rom_q holds.
reg [18:0] s0_addr = 0;
reg        s0_ok = 0;
wire       p0 = r0 && (!s0_ok || s0_addr != m0_addr);

reg        wph = 0;                // second clock of a write
reg  [1:0] rtag = 0;               // read issued last clock: 1 CPU, 2 frame buffer
reg        lb_we = 0;
reg [10:0] lb_wa = 0;
reg  [7:0] lb_wd = 0;

always @(posedge clk) begin
  rtag        <= 0;
  sram_wpulse <= 0;
  lb_we       <= 0;
  case (rtag)
  2'd1: rom_q <= sram_din;
  2'd2: begin lb_we <= 1; lb_wa <= {2'b00, rt_half, rt_u}; lb_wd <= sram_din; end
  default: ;
  endcase

  if (wph) begin
    wph <= 0;                              // address and data held, WE high
  end else if (p0) begin
    sram_doe  <= 0;
    sram_oe_n <= 0;
    sram_addr <= m0_addr;
    s0_addr   <= m0_addr;
    s0_ok     <= 1;
    rtag      <= 2'd1;
  end else if (b_pend || !fq_empty) begin
    // write: WE pulses low in the second half of this clock (ODDR2 in the
    // top level), then one more clock with the address held
    sram_doe    <= 1;
    sram_oe_n   <= 1;
    sram_wpulse <= 1;
    wph         <= 1;
    if (b_pend) begin                      // loader write: the CPU's data may be stale
      s0_ok     <= 0;
      sram_addr <= b_addr;
      sram_dout <= b_data;
      b_pend    <= 0;
    end else begin
      sram_addr <= {1'b1, fq_b[fq_rp], 1'b0, fq_a[fq_rp]};
      sram_dout <= fq_d[fq_rp];
      fq_rp     <= fq_rp + 1'd1;
    end
  end else if (rd_pend) begin
    sram_doe  <= 0;
    sram_oe_n <= 0;
    sram_addr <= {1'b1, rbank, 1'b0, rd_u, rd_x};
    rtag      <= 2'd2;
    rt_u      <= rd_u;
    rt_half   <= rd_half;
    rd_u      <= rd_u + 1'd1;
    if (rd_u == 8'd191)
      rd_pend <= 0;
  end else begin
    sram_doe  <= 0;
    sram_oe_n <= 0;
  end

  if (pf_go) begin
    rd_pend <= 1;
    rd_u    <= 0;
  end

  if (ld_we && (ld_a[17:16] == 2'b00 || ld_a[17])) begin
    b_pend <= 1;
    b_addr <= {1'b0, ld_a};
    b_data <= ld_d;
  end

  if (reset) begin
    wph      <= 0;
    sram_doe <= 0;
    b_pend   <= 0;
  end
end

// ---------------------------------------------------------------------------
// SPI (SD card), mode 0: about 390kHz or 6.25MHz

reg  [7:0] spi_tx = 8'hff;
reg  [7:0] spi_sr = 8'hff;
reg  [7:0] spi_rx = 8'hff;
reg        spi_fast = 0;
reg        spi_start = 0;
reg        spi_busy = 0;
reg  [3:0] spi_cnt = 0;            // half bits left
reg  [4:0] spi_div = 0;

always @(posedge clk) begin
  if (spi_start) begin
    spi_busy <= 1;
    spi_sr   <= spi_tx;
    sd_mosi  <= spi_tx[7];
    sd_sclk  <= 0;
    spi_cnt  <= 4'd15;
    spi_div  <= 0;
  end else if (spi_busy) begin
    spi_div <= spi_div + 1'd1;
    if ((spi_fast && spi_div[0]) || spi_div == 5'd31) begin
      spi_div <= 0;
      if (!sd_sclk) begin                    // rising edge: sample
        sd_sclk <= 1;
        spi_sr  <= {spi_sr[6:0], sd_miso};   // valid a clock after the falling edge
      end else begin                         // falling edge: next bit
        sd_sclk <= 0;
        sd_mosi <= spi_sr[7];
      end
      if (spi_cnt == 0) begin
        spi_busy <= 0;
        spi_rx   <= spi_sr;                    // the last tick is a falling edge
      end else
        spi_cnt <= spi_cnt - 1'd1;
    end
  end
end

// ---------------------------------------------------------------------------
// Boot loader registers

wire vblank_out = (vc >= 10'd480);

wire mem_rd  = !z_mreq_n && !z_rd_n && z_rfsh_n;
wire a_c0    = (A[15:8] == 8'hC0);
reg  wr_n_d  = 1;
wire wr_stb  = !z_mreq_n && !z_wr_n && wr_n_d;
always @(posedge clk) wr_n_d <= z_wr_n;

wire [7:0] boot_io =
  (A[4:0] == 5'h00) ? spi_rx :
  (A[4:0] == 5'h01) ? {spi_busy, !sd_cd_n, 6'd0} :
  (A[4:0] == 5'h02) ? {7'd0, b_pend} :
  (A[4:0] == 5'h03) ? {7'd0, vblank_out} :
  (A[4:0] == 5'h06) ? p1 :
  (A[4:0] == 5'h07) ? p2 : 8'hff;

reg  io_rd_d = 0;
reg  [7:0] io_q = 8'hff;           // frozen during the cycle: the next transfer may end first
wire io_rd = boot_mode && !z_iorq_n && !z_rd_n && z_m1_n;
wire io_rd_stb = io_rd && !io_rd_d;
reg  io_wr_d = 0;
wire io_wr = boot_mode && !z_iorq_n && !z_wr_n;
wire io_wr_stb = io_wr && !io_wr_d;

always @(posedge clk) begin
  io_rd_d <= io_rd;
  io_wr_d <= io_wr;
  if (!io_rd)
    io_q <= spi_rx;
end

always @* begin
  boot_sel = 0;
  boot_q   = 8'hff;
  if (io_rd) begin
    boot_sel = 1;
    boot_q   = io_rd_stb ? spi_rx : io_q;
  end else if (boot_mode && mem_rd && A[15:13] == 3'b000) begin
    boot_sel = 1;
    boot_q   = exec_sram ? rom_q : boot_rom_q;
  end else if (boot_mode && mem_rd && a_c0) begin
    boot_sel = 1;
    boot_q   = boot_io;
  end
end

always @(posedge clk) begin
  spi_start  <= 0;
  start_game <= 0;
  ld_we      <= 0;

  if (ld_we)
    ld_a <= ld_a + 1'd1;

  if (io_rd_stb) begin
    spi_tx    <= 8'hff;
    spi_start <= 1;
  end

  if (io_wr_stb) begin
    ld_d  <= z_dout;
    ld_we <= 1;
  end

  if (wr_stb && boot_mode && a_c0) begin
    case (A[4:0])
    5'h00: begin spi_tx <= z_dout; spi_start <= 1; end
    5'h01: begin sd_cs_n <= !z_dout[0]; spi_fast <= z_dout[1]; end
    5'h02: ld_a[7:0]   <= z_dout;
    5'h03: ld_a[15:8]  <= z_dout;
    5'h04: ld_a[17:16] <= z_dout[1:0];
    5'h05: begin ld_d <= z_dout; ld_we <= 1; end
    5'h08: dsw1 <= z_dout;
    5'h09: dsw2 <= z_dout;
    5'h0B: led_err <= z_dout[0];
    5'h0C: exec_sram <= z_dout[0];
    5'h0F: start_game <= 1;
    default: ;
    endcase
  end

  if (reset) begin
    sd_cs_n   <= 1;
    spi_fast  <= 0;
    led_err   <= 0;
    exec_sram <= 0;
  end
end

`ifdef MD_SIM_PC
reg m1_d = 1;
always @(posedge clk) begin
  m1_d <= z_m1_n;
  if (!z_m1_n && m1_d) $display("PC %04x boot=%0d sram=%0d t=%0t", A, boot_mode, exec_sram, $time);
  if (wr_stb) $display("  W %04x <- %02x", A, z_dout);
  if (io_wr_stb) $display("  OUT %02x -> ld %05x", z_dout, ld_a);
end
`endif

// ---------------------------------------------------------------------------
// Native picture (rot = 0, the default): 8 lines of 240 pixels in lbuf,
// written by the video board and read twice per line by the HDMI output
// (480 x 384, centred).
//
// Rotated picture (rot = 1): Mr. Do! is a vertical game (MAME ROT270), so
// its 240 x 192 frame is turned 90 degrees counter-clockwise to 192 x 240.
// Each frame is written to one of two frame buffers in the SRAM (40000 /
// 60000, address {line, x}) while the other, finished one is shown, so
// frames never tear.  Each HDMI line is prefetched from the SRAM into lbuf
// during the line before; it shows one source column, pixels doubled to
// 384 wide (centred), each column on two lines (480).

reg  [7:0] lbuf [0:2047];
wire        lbw_en = lb_we || (pix_we && !rot);
wire [10:0] lbw_a  = lb_we ? lb_wa : {pix_y[2:0], pix_x};
wire  [7:0] lbw_d  = lb_we ? lb_wd : g_pixel;
wire [10:0] lbr_a;                 // read address (output pipeline)

always @(posedge clk)
  if (lbw_en)
    lbuf[lbw_a] <= lbw_d;

// Pixel write queue (written here, emptied by the SRAM arbiter)
always @(posedge clk) begin
  if (pix_we && rot && !boot_mode) begin
    fq_d[fq_wp] <= g_pixel;
    fq_a[fq_wp] <= {pix_y, pix_x};
    fq_b[fq_wp] <= wbank;
    fq_wp <= fq_wp + 1'd1;
  end
end

`ifdef MD_SIM_FB
reg [31:0] fq_ovf = 0, rd_late = 0;
always @(posedge clk) begin
  if (pix_we && rot && !boot_mode && (fq_wp + 1'd1) == fq_rp) begin
    fq_ovf <= fq_ovf + 1;
    if (fq_ovf[11:0] == 0) $display("FIFO overflow %0d (v=%0d) t=%0t", fq_ovf, pix_y, $time);
  end
  if (pf_go && rd_pend) begin
    rd_late <= rd_late + 1;
    if (rd_late[7:0] == 0) $display("prefetch late %0d at u=%0d vc=%0d", rd_late, rd_u, vc);
  end
end
`endif

// Frame buffer swap: at the start of the game's vertical blank the frame
// just written becomes the one to show from the next HDMI frame.
always @(posedge clk) begin
  if (ev_vbl) begin
    wbank      <= !wbank;
    rbank_next <= wbank;
  end
  if (hc == 10'd0 && vc == 10'd0)
    rbank <= rbank_next;
  if (rot_toggle)
    rot <= !rot;
end

// Line prefetch: at the start of HDMI line vc, fetch line vc + 1, which
// shows source column 239 - (vc + 1) / 2.
always @(posedge clk) begin
  pf_go <= 0;
  if (hc == 10'd0 && (vc == 10'd524 || vc < 10'd479)) begin
    pf_go   <= rot && !boot_mode;
    rd_half <= (vc == 10'd524) ? 1'b0 : !vc[0];
    if (vc == 10'd524)
      rd_x <= 8'd239;
    else if (vc[0])
      rd_x <= rd_x - 1'd1;
  end
end

// Output pipeline
//   stage 1: line buffer / video RAM address
//   stage 2: their data
//   stage 3: palette / font lookup, RGB out
wire       in_area = (hc >= 10'd80 && hc < 10'd560 && vc >= 10'd48 && vc < 10'd432);
wire       in_text = (hc >= 10'd64 && hc < 10'd576 && vc >= 10'd16 && vc < 10'd464);
wire       in_rot  = (hc >= 10'd128 && hc < 10'd512 && vc < 10'd480);
wire [9:0] rx = hc - 10'd128;
wire [9:0] ax = hc - 10'd80;
wire [9:0] ay = vc - 10'd48;
wire [9:0] tx = hc - 10'd64;
wire [9:0] ty = vc - 10'd16;

assign lbr_a = (rot && !boot_mode) ? {2'b00, vc[0], rx[8:1]} : {ay[3:1], ax[8:1]};

reg  [7:0] lb_q = 0;
reg        area1 = 0, area2 = 0;
reg  [2:0] fx1 = 0, fx2 = 0;
reg  [2:0] fy1 = 0, fy2 = 0;
reg  [1:0] hs = 2'b11, vs = 2'b11, bl = 2'b11;
reg  [7:0] pidx2 = 0;
reg  [7:0] font [0:511];
initial $readmemh("font64.hex", font);

always @(posedge clk) begin
  lb_q   <= lbuf[lbr_a];
  text_a <= {ty[8:4], tx[8:4]};
  area1  <= boot_mode ? in_text : rot ? in_rot : in_area;
  fx1    <= tx[3:1];
  fy1    <= ty[3:1];
  hs[0]  <= !(hc >= 10'd656 && hc < 10'd752);
  vs[0]  <= !(vc == 10'd490 || vc == 10'd491);
  bl[0]  <= (hc >= 10'd640 || vc >= 10'd480);
  hs[1]  <= hs[0];
  vs[1]  <= vs[0];
  bl[1]  <= bl[0];
  area2  <= area1;
  pidx2  <= lb_q;
  fx2    <= fx1;
  fy2    <= fy1;
end

// Colour levels: two 2-bit PROM outputs through 75/100 and 120/150 ohm
// (MAME's resistor network, with the diode drop); index {u02, t02} bits
function [7:0] lv(input [3:0] b);
  case (b)
  4'h0: lv = 8'h00; 4'h1: lv = 8'h00; 4'h2: lv = 8'h00; 4'h3: lv = 8'h58;
  4'h4: lv = 8'h00; 4'h5: lv = 8'h70; 4'h6: lv = 8'h85; 4'h7: lv = 8'hc0;
  4'h8: lv = 8'h3c; 4'h9: lv = 8'h96; 4'ha: lv = 8'ha6; 4'hb: lv = 8'hd4;
  4'hc: lv = 8'hb4; 4'hd: lv = 8'hdd; 4'he: lv = 8'he5; default: lv = 8'hfe;
  endcase
endfunction

wire [7:0] pu    = pal_u[pidx2[4:0]];
wire [7:0] pt    = pal_t[{pidx2[7:5], pidx2[1:0]}];
wire [7:0] glyph = font[{text_q[5:0] - 6'd32, fy2}];
wire       ink   = glyph[3'd7 - fx2];

always @(posedge clk) begin
  vid_hsync_n <= hs[1];
  vid_vsync_n <= vs[1];
  vid_blank   <= bl[1];
  if (!area2) begin
    vid_r <= 0; vid_g <= 0; vid_b <= 0;
  end else if (boot_mode) begin
    if (ink) begin
      vid_r <= 8'hff; vid_g <= 8'hff; vid_b <= text_q[7] ? 8'h00 : 8'hff;
    end else begin
      vid_r <= 8'h00; vid_g <= 8'h00; vid_b <= 8'h60;
    end
  end else begin
    vid_r <= lv({pu[1:0], pt[1:0]});
    vid_g <= lv({pu[3:2], pt[3:2]});
    vid_b <= lv({pu[5:4], pt[5:4]});
  end
end

endmodule
