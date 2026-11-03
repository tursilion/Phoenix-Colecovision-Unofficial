// Mr. Do! CPU board: Z80, work RAM, inputs, the protection PAL, the two
// SN76489 PSGs, and the video board (mrdo_video.v).  Written after MAME's
// mrdo.cpp (the Taito-licence sets mrdot / mrdofix).
//
// Memory map:
//   0000-7FFF ROM (external SRAM, see mrdo_phoenix.v)
//   8000-8FFF video RAM            9000-90FF sprite RAM (write only)
//   9800 W    b0 flip screen       9801 / 9802 W  PSG 1 / 2
//   9803 R    protection PAL (U001): latched on every foreground RAM write
//   A000-A003 R  P1, P2, DSW1, DSW2
//   E000-EFFF work RAM
//   F000-F7FF W  background scroll x   F800-FFFF W  scroll y
// Interrupt: IRQ (RST 38) at line 224, held until acknowledged.
//
// In boot mode the Z80 runs the boot loader (mrdo_phoenix.v supplies the
// data for its ROM and I/O through boot_sel / boot_q); the PSGs and the
// interrupt are off.

`timescale 1ns / 1ps

module mrdo_main
   ( input             clk
   , input             reset
   , input             boot_mode
   , input             cen_cpu       // 4.1MHz
   , input             cen_psg       // 2.05MHz: PSG clock / 2
   , input             cen_pix       // 4.9MHz

   , input       [7:0] p1            // active low, as MAME's P1 / P2
   , input       [7:0] p2
   , input       [7:0] dsw1
   , input       [7:0] dsw2

   // ROM (SRAM)
   , input       [7:0] rom_q

   // Z80 bus, for the ROM fetch and the boot loader
   , output     [15:0] z_a
   , output      [7:0] z_dout
   , output            z_mreq_n
   , output            z_iorq_n
   , output            z_rd_n
   , output            z_wr_n
   , output            z_m1_n
   , output            z_rfsh_n
   , input             boot_sel
   , input       [7:0] boot_q

   // ROM loading (graphics and PROMs: offset in 10000)
   , input             ld_we
   , input      [14:0] ld_a
   , input       [7:0] ld_d

   // Video
   , output      [8:0] h
   , output      [8:0] v
   , output            ev_vbl
   , input       [9:0] text_a
   , output      [7:0] text_q
   , output      [7:0] boot_rom_q    // loader code in the sprite ROM block RAM
   , output            pix_we
   , output      [7:0] pix_x
   , output      [7:0] pix_y
   , output      [7:0] pixel

   , output reg signed [15:0] audio = 0
   );

// ---------------------------------------------------------------------------
// CPU

wire [15:0] A;
wire  [7:0] dout;
wire        n_m1, n_mreq, n_iorq, n_rd, n_wr, n_rfsh;
reg         n_int = 1;
reg   [7:0] din;

tv80e #(.Mode(0), .T2Write(1), .IOWait(1)) cpu
  ( .m1_n(n_m1), .mreq_n(n_mreq), .iorq_n(n_iorq), .rd_n(n_rd), .wr_n(n_wr)
  , .rfsh_n(n_rfsh), .halt_n(), .busak_n(), .A(A), .dout(dout)
  , .reset_n(!reset), .clk(clk), .cen(cen_cpu), .wait_n(1'b1), .int_n(n_int)
  , .nmi_n(1'b1), .busrq_n(1'b1), .di(din)
  );

assign z_a      = A;
assign z_dout   = dout;
assign z_mreq_n = n_mreq;
assign z_iorq_n = n_iorq;
assign z_rd_n   = n_rd;
assign z_wr_n   = n_wr;
assign z_m1_n   = n_m1;
assign z_rfsh_n = n_rfsh;

// One write strobe per bus cycle
reg  wr_n_d = 1;
always @(posedge clk) wr_n_d <= n_wr;
wire wr_stb = !n_mreq && !n_wr && wr_n_d;

wire cs_rom  = A[15] == 1'b0;
wire cs_vram = A[15:12] == 4'h8;
wire cs_fg   = A[15:11] == 5'b10001;
wire cs_98   = A[15:11] == 5'b10011;
wire cs_in   = A[15:11] == 5'b10100;
wire cs_ram  = A[15:12] == 4'hE;
wire cs_scx  = A[15:11] == 5'b11110;
wire cs_scy  = A[15:11] == 5'b11111;
wire intack  = !n_iorq && !n_m1;

// Work RAM
reg [7:0] ram [0:4095];
reg [7:0] ram_q = 0;
always @(posedge clk) begin
  if (wr_stb && cs_ram) ram[A[11:0]] <= dout;
  ram_q <= ram[A[11:0]];
end

// Interrupt: set at line 224, cleared by the acknowledge
always @(posedge clk) begin
  if (ev_vbl)
    n_int <= 0;
  if (intack)
    n_int <= 1;
  if (reset || boot_mode)
    n_int <= 1;
end

// Latches
reg [7:0] scrollx = 0, scrolly = 0;
reg       flip = 0;
reg [7:0] pal_u001 = 8'hff;

// Protection: each foreground RAM write latches a new value in U001
// (PAL16R6), equations from MAME (mrdot_state::protection_w)
function [7:0] u001(input [7:0] d);
  reg i9, i8, i6, i5, i4, i3, i2, t1, t2, t3, t4;
  begin
    i9 = d[0]; i8 = d[1]; i6 = d[3]; i5 = d[4]; i4 = d[5]; i3 = d[6]; i2 = d[7];
    t1 =  i2 & !i3 &  i4 & !i5 & !i6 & !i8 &  i9;
    t2 = !i2 & !i3 &  i4 &  i5 & !i6 &  i8 & !i9;
    t3 =  i2 &  i3 & !i4 & !i5 &  i6 & !i8 &  i9;
    t4 = !i2 &  i3 &  i4 & !i5 &  i6 &  i8 &  i9;
    u001 = ~{1'b0, t3 | t4, t1 | t3, t1, t1 | t3, t1 | t2, t1, 1'b0};
  end
endfunction

always @(posedge clk) begin
  if (wr_stb && !boot_mode) begin
    if (cs_98 && A[1:0] == 2'd0) flip    <= dout[0];
    if (cs_scx)                  scrollx <= dout;
    if (cs_scy)                  scrolly <= flip ? 8'd0 - dout : dout;   // as MAME
  end
  if (wr_stb && cs_fg)
    pal_u001 <= u001(dout);
  if (reset) begin
    flip     <= 0;
    scrollx  <= 0;
    scrolly  <= 0;
    pal_u001 <= 8'hff;
  end
end

// ---------------------------------------------------------------------------
// Video board

wire [7:0] vram_q;

mrdo_video video
  ( .clk(clk), .cen_pix(cen_pix), .h(h), .v(v), .ev_vbl(ev_vbl)
  , .cpu_a(A), .cpu_d(dout), .cpu_wr(wr_stb), .vram_q(vram_q)
  , .scrollx(scrollx), .scrolly(scrolly), .flip(flip)
  , .ld_we(ld_we), .ld_a(ld_a), .ld_d(ld_d)
  , .text_a(text_a), .text_q(text_q), .boot_a(A[12:0]), .boot_q(boot_rom_q)
  , .boot_mode(boot_mode)
  , .pix_we(pix_we), .pix_x(pix_x), .pix_y(pix_y), .pixel(pixel)
  );

// ---------------------------------------------------------------------------
// Data in

always @* begin
  if (boot_sel)
    din = boot_q;
  else if (intack)
    din = 8'hff;                   // RST 38
  else if (cs_ram)
    din = ram_q;
  else if (cs_vram)
    din = vram_q;
  else if (boot_mode)
    din = 8'hff;
  else if (cs_rom)
    din = rom_q;
  else if (cs_98 && A[1:0] == 2'd3)
    din = pal_u001;
  else if (cs_in)
    case (A[1:0])
    2'd0: din = p1;
    2'd1: din = p2;
    2'd2: din = dsw1;
    default: din = dsw2;
    endcase
  else
    din = 8'hff;
end

// ---------------------------------------------------------------------------
// Sound: two SN76489 at 4.1MHz

wire       psg_wr1 = wr_stb && !boot_mode && cs_98 && A[1:0] == 2'd1;
wire       psg_wr2 = wr_stb && !boot_mode && cs_98 && A[1:0] == 2'd2;
wire [9:0] sn1_out, sn2_out;

sn76489 #(.LFSR15(1)) sn1 ( .clk(clk), .reset(reset), .clk_en(cen_psg), .wr(psg_wr1), .din(dout), .out(sn1_out) );
sn76489 #(.LFSR15(1)) sn2 ( .clk(clk), .reset(reset), .clk_en(cen_psg), .wr(psg_wr2), .din(dout), .out(sn2_out) );

// Mix, low-pass and remove the DC level.  The PSGs can make tones far
// above the audio band, so the mix is first averaged over 512 clocks
// (48.8kHz samples; a box filter that removes those), then goes through
// two one-pole low-pass stages at about 11kHz; a one-pole high-pass at
// about 4Hz removes the DC level.
wire [10:0] mix = {1'b0, sn1_out} + {1'b0, sn2_out};   // 0-2040

reg  [19:0] box = 0;
reg   [8:0] box_n = 0;
reg  [10:0] smp = 0;
reg         smp_stb = 0;
always @(posedge clk) begin
  smp_stb <= 0;
  box_n   <= box_n + 1'd1;
  if (box_n == 9'd511) begin
    box     <= {9'd0, mix};
    smp     <= box[19:9];
    smp_stb <= 1;
  end else
    box <= box + mix;
end

// Filters at 48.8kHz, 16.8 fixed point; low-pass y += (x - y) * 3/4
reg signed [23:0] lp1 = 0, lp2 = 0, dc = 0;
wire signed [23:0] x24  = {5'd0, smp, 8'd0};
wire signed [23:0] d1   = x24 - lp1;
wire signed [23:0] d2   = lp1 - lp2;
wire signed [23:0] hp   = lp2 - dc;

function [15:0] clip(input signed [23:0] v);   // 16.8 -> x32, clipped
  reg signed [23:0] m;
  begin
    m = v >>> 3;
    clip = (m > 24'sd32767) ? 16'h7fff : (m < -24'sd32768) ? 16'h8000 : m[15:0];
  end
endfunction

always @(posedge clk) begin
  if (smp_stb) begin
    lp1 <= lp1 + (d1 >>> 1) + (d1 >>> 2);
    lp2 <= lp2 + (d2 >>> 1) + (d2 >>> 2);
    dc  <= dc + (hp >>> 11);
    audio <= clip(hp);
  end
  if (reset) begin
    lp1 <= 0; lp2 <= 0; dc <= 0;
  end
end

endmodule
