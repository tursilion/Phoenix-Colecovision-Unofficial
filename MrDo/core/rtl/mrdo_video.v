// Mr. Do! video board: timing, the two tile layers, the sprites and the
// video RAMs.  Written after MAME's mrdo.cpp / mrdo_v.cpp.
//
// Timing (MAME's coordinates): 312 x 262 at the 4.9MHz pixel enable,
// visible x 8-247, y 32-223.  The vertical blank interrupt is at line 224.
//
// CPU side:
//   8000-83FF background attributes   8400-87FF background codes
//   8800-8BFF foreground attributes   8C00-8FFF foreground codes
//   9000-90FF sprite RAM (write only): code, 256 - y, attributes, x
// Attribute bits: b7 code bit 8, b6 opaque tile (pen 0 drawn), b5-0 colour.
//
// The picture is made a line ahead in a line buffer, at 25MHz, not per
// pixel:
//   - The sprite engine draws line n + 2 into one half of a sprite line
//     buffer while the composer reads line n + 1 from the other half.  It
//     first clears its half (256 clocks), then draws sprites 63 to 0, so
//     sprite 0 ends on top (MAME's order).
//   - The composer makes line n + 1 one pixel every 5 clocks: background,
//     foreground and sprite pixel, and the colour index (0-255 into the
//     palette).  pix_we / pix_x / pix_y / pixel go to the line buffer or
//     the rotation frame buffer in mrdo_phoenix.v (x 0-239, y 0-191).
//
// Graphics ROMs (block RAM, loaded through ld_*, ld_a = offset in 10000):
//   0000-0FFF foreground plane 0 (d9)   1000-1FFF foreground plane 1 (d10)
//   2000-2FFF background plane 0 (r8)   3000-3FFF background plane 1 (n8)
//   4000-5FFF sprites (h5, k5)          6040-605F sprite colour PROM (f10)
// In boot mode the sprite ROM block RAM holds the boot loader, read at
// boot_a.

`timescale 1ns / 1ps

module mrdo_video
   ( input             clk
   , input             cen_pix       // 4.9MHz pixel enable
   , output reg  [8:0] h = 0
   , output reg  [8:0] v = 0
   , output reg        ev_vbl = 0    // pulse: line 224 starts (interrupt)

   // CPU
   , input      [15:0] cpu_a
   , input       [7:0] cpu_d
   , input             cpu_wr        // write strobe (one clock)
   , output reg  [7:0] vram_q = 0    // video RAM read data at cpu_a
   , input       [7:0] scrollx
   , input       [7:0] scrolly
   , input             flip

   // ROM loading
   , input             ld_we
   , input      [14:0] ld_a
   , input       [7:0] ld_d

   // Boot mode
   , input       [9:0] text_a        // text: background attribute RAM
   , output reg  [7:0] text_q = 0
   , input      [12:0] boot_a
   , output      [7:0] boot_q
   , input             boot_mode

   // Pixels
   , output reg        pix_we = 0
   , output reg  [7:0] pix_x = 0
   , output reg  [7:0] pix_y = 0
   , output reg  [7:0] pixel = 0
   );

// ---------------------------------------------------------------------------
// Timing

wire line_start = cen_pix && h == 9'd311;    // the next line starts

always @(posedge clk) begin
  ev_vbl <= 0;
  if (cen_pix) begin
    if (h == 9'd311) begin
      h <= 0;
      v <= (v == 9'd261) ? 9'd0 : v + 1'd1;
      if (v == 9'd223)
        ev_vbl <= 1;
    end else
      h <= h + 1'd1;
  end
end

// Line numbers being made after this line starts
wire [8:0] v_next = (v == 9'd261) ? 9'd0 : v + 1'd1;
wire [8:0] c_line = (v_next == 9'd261) ? 9'd0 : v_next + 1'd1;   // composer
wire [8:0] s_line = (c_line == 9'd261) ? 9'd0 : c_line + 1'd1;   // sprites

// ---------------------------------------------------------------------------
// Video RAMs: port A the CPU, port B the composer

wire cs_bga = cpu_a[15:10] == 6'b100000;
wire cs_bgc = cpu_a[15:10] == 6'b100001;
wire cs_fga = cpu_a[15:10] == 6'b100010;
wire cs_fgc = cpu_a[15:10] == 6'b100011;
wire cs_spr = cpu_a[15:8]  == 8'h90;

reg [7:0] bga [0:1023];
reg [7:0] bgc [0:1023];
reg [7:0] fga [0:1023];
reg [7:0] fgc [0:1023];
reg [7:0] q_bga = 0, q_bgc = 0, q_fga = 0, q_fgc = 0;

always @(posedge clk) begin
  if (cpu_wr && cs_bga) bga[cpu_a[9:0]] <= cpu_d;
  q_bga <= bga[cpu_a[9:0]];
end
always @(posedge clk) begin
  if (cpu_wr && cs_bgc) bgc[cpu_a[9:0]] <= cpu_d;
  q_bgc <= bgc[cpu_a[9:0]];
end
always @(posedge clk) begin
  if (cpu_wr && cs_fga) fga[cpu_a[9:0]] <= cpu_d;
  q_fga <= fga[cpu_a[9:0]];
end
always @(posedge clk) begin
  if (cpu_wr && cs_fgc) fgc[cpu_a[9:0]] <= cpu_d;
  q_fgc <= fgc[cpu_a[9:0]];
end

always @*
  case (cpu_a[11:10])
  2'd0: vram_q = q_bga;
  2'd1: vram_q = q_bgc;
  2'd2: vram_q = q_fga;
  default: vram_q = q_fgc;
  endcase

reg  [9:0] bg_va = 0, fg_va = 0;
reg  [7:0] bg_attr = 0, bg_code = 0, fg_attr = 0, fg_code = 0;
wire [9:0] bga_rd = boot_mode ? text_a : bg_va;

always @(posedge clk) bg_attr <= bga[bga_rd];
always @(posedge clk) bg_code <= bgc[bg_va];
always @(posedge clk) fg_attr <= fga[fg_va];
always @(posedge clk) fg_code <= fgc[fg_va];
always @* text_q = bg_attr;

// Sprite RAM: four 64-byte RAMs, one per byte of a sprite
reg [7:0] sr0 [0:63];
reg [7:0] sr1 [0:63];
reg [7:0] sr2 [0:63];
reg [7:0] sr3 [0:63];
reg [5:0] s_idx = 0;
reg [7:0] s_code = 0, s_y = 0, s_attr = 0, s_x = 0;

always @(posedge clk) begin
  if (cpu_wr && cs_spr) begin
    case (cpu_a[1:0])
    2'd0: sr0[cpu_a[7:2]] <= cpu_d;
    2'd1: sr1[cpu_a[7:2]] <= cpu_d;
    2'd2: sr2[cpu_a[7:2]] <= cpu_d;
    default: sr3[cpu_a[7:2]] <= cpu_d;
    endcase
  end
end
always @(posedge clk) begin
  s_code <= sr0[s_idx];
  s_y    <= sr1[s_idx];
  s_attr <= sr2[s_idx];
  s_x    <= sr3[s_idx];
end

// ---------------------------------------------------------------------------
// Graphics ROMs

wire ld_fg0 = ld_we && ld_a[14:12] == 3'd0;
wire ld_fg1 = ld_we && ld_a[14:12] == 3'd1;
wire ld_bg0 = ld_we && ld_a[14:12] == 3'd2;
wire ld_bg1 = ld_we && ld_a[14:12] == 3'd3;
wire ld_spr = ld_we && ld_a[14:13] == 2'b10;
wire ld_ctb = ld_we && ld_a[14:5] == 10'b1100000010;   // 6040-605F

reg [7:0] fg0 [0:4095];
reg [7:0] fg1 [0:4095];
reg [7:0] bg0 [0:4095];
reg [7:0] bg1 [0:4095];
reg [11:0] fg_ga = 0, bg_ga = 0;
reg [7:0] fg0_q = 0, fg1_q = 0, bg0_q = 0, bg1_q = 0;

always @(posedge clk) if (ld_fg0) fg0[ld_a[11:0]] <= ld_d;
always @(posedge clk) if (ld_fg1) fg1[ld_a[11:0]] <= ld_d;
always @(posedge clk) if (ld_bg0) bg0[ld_a[11:0]] <= ld_d;
always @(posedge clk) if (ld_bg1) bg1[ld_a[11:0]] <= ld_d;
always @(posedge clk) fg0_q <= fg0[fg_ga];
always @(posedge clk) fg1_q <= fg1[fg_ga];
always @(posedge clk) bg0_q <= bg0[bg_ga];
always @(posedge clk) bg1_q <= bg1[bg_ga];

// Sprite ROM: four 2K RAMs, one per byte of a sprite row (4 pixels each).
// Port A: loading, and the boot loader's code; port B: the sprite engine.
reg [7:0] sg0 [0:2047];
reg [7:0] sg1 [0:2047];
reg [7:0] sg2 [0:2047];
reg [7:0] sg3 [0:2047];
initial $readmemh("mrdo_boot0.hex", sg0);
initial $readmemh("mrdo_boot1.hex", sg1);
initial $readmemh("mrdo_boot2.hex", sg2);
initial $readmemh("mrdo_boot3.hex", sg3);

wire [12:0] sga_a = ld_spr ? ld_a[12:0] : boot_a;
reg   [1:0] sga_sel = 0;
reg   [7:0] sga0_q = 0, sga1_q = 0, sga2_q = 0, sga3_q = 0;
reg  [10:0] sgb_a = 0;
reg   [7:0] sgb0_q = 0, sgb1_q = 0, sgb2_q = 0, sgb3_q = 0;

always @(posedge clk) begin
  if (ld_spr && sga_a[1:0] == 2'd0) sg0[sga_a[12:2]] <= ld_d;
  sga0_q <= sg0[sga_a[12:2]];
end
always @(posedge clk) begin
  if (ld_spr && sga_a[1:0] == 2'd1) sg1[sga_a[12:2]] <= ld_d;
  sga1_q <= sg1[sga_a[12:2]];
end
always @(posedge clk) begin
  if (ld_spr && sga_a[1:0] == 2'd2) sg2[sga_a[12:2]] <= ld_d;
  sga2_q <= sg2[sga_a[12:2]];
end
always @(posedge clk) begin
  if (ld_spr && sga_a[1:0] == 2'd3) sg3[sga_a[12:2]] <= ld_d;
  sga3_q <= sg3[sga_a[12:2]];
end
always @(posedge clk) sga_sel <= sga_a[1:0];

assign boot_q = (sga_sel == 2'd0) ? sga0_q : (sga_sel == 2'd1) ? sga1_q :
                (sga_sel == 2'd2) ? sga2_q : sga3_q;

always @(posedge clk) sgb0_q <= sg0[sgb_a];
always @(posedge clk) sgb1_q <= sg1[sgb_a];
always @(posedge clk) sgb2_q <= sg2[sgb_a];
always @(posedge clk) sgb3_q <= sg3[sgb_a];

// Sprite colour PROM: 16 colours, low nibble for colours 0-7 of the
// sprite palette (index 0-31), high nibble for 8-15
reg [7:0] ctab [0:31];
always @(posedge clk) if (ld_ctb) ctab[ld_a[4:0]] <= ld_d;

// ---------------------------------------------------------------------------
// Sprite line buffer: {colour, pen}, 0 = transparent.  Half = line bit 0.

reg  [5:0] sbuf [0:511];
reg        sb_we = 0;
reg  [8:0] sb_wa = 0;
reg  [5:0] sb_wd = 0;
reg  [8:0] sb_ra = 0;
reg  [5:0] sb_q = 0;

always @(posedge clk) if (sb_we) sbuf[sb_wa] <= sb_wd;
always @(posedge clk) sb_q <= sbuf[sb_ra];

// ---------------------------------------------------------------------------
// Sprite engine

localparam SP_IDLE = 3'd0, SP_CLEAR = 3'd1, SP_READ = 3'd2, SP_CHECK = 3'd3,
           SP_GFX = 3'd4, SP_DRAW = 3'd5;

reg  [2:0] sp_st = SP_IDLE;
reg  [7:0] sp_line = 0;
reg  [8:0] sp_cnt = 0;
reg  [3:0] sp_col = 0;
reg  [8:0] sp_x = 0;
reg  [3:0] sp_color = 0;
reg        sp_flipx = 0;
reg        sp_last = 0;

wire [8:0] sp_sum = {1'b0, sp_line} + {1'b0, s_y};      // line - (256 - y)
wire       sp_hit = s_y != 8'd0 && sp_sum[8] && sp_sum[7:4] == 4'd0;
wire [3:0] sp_row = s_attr[5] ? ~sp_sum[3:0] : sp_sum[3:0];
wire [3:0] sp_px  = sp_flipx ? ~sp_col : sp_col;
wire [7:0] sp_b   = (sp_px[3:2] == 2'd0) ? sgb0_q : (sp_px[3:2] == 2'd1) ? sgb1_q :
                    (sp_px[3:2] == 2'd2) ? sgb2_q : sgb3_q;
wire [1:0] sp_pen = {sp_b[sp_px[1:0]], sp_b[{1'b1, sp_px[1:0]}]};

always @(posedge clk) begin
  sb_we <= 0;
  case (sp_st)
  SP_IDLE: ;
  SP_CLEAR: begin
    sb_we  <= 1;
    sb_wa  <= {sp_line[0], sp_cnt[7:0]};
    sb_wd  <= 0;
    sp_cnt <= sp_cnt + 1'd1;
    if (sp_cnt[7:0] == 8'hff) begin
      s_idx <= 6'd63;
      sp_st <= SP_READ;
    end
  end
  SP_READ: begin                   // sprite RAM read
    sp_last <= (s_idx == 6'd0);
    sp_st   <= SP_CHECK;
  end
  SP_CHECK: begin
    sp_x     <= {1'b0, s_x};
    sp_color <= s_attr[3:0];
    sp_flipx <= s_attr[4];
    sp_col   <= 0;
    sgb_a    <= {s_code[6:0], sp_row};
    if (sp_hit)
      sp_st <= SP_GFX;
    else if (sp_last)
      sp_st <= SP_IDLE;
    else begin
      s_idx <= s_idx - 1'd1;
      sp_st <= SP_READ;
    end
  end
  SP_GFX:                          // sprite ROM read
    sp_st <= SP_DRAW;
  SP_DRAW: begin
    if (sp_pen != 2'd0 && !sp_x[8]) begin
      sb_we <= 1;
      sb_wa <= {sp_line[0], sp_x[7:0]};
      sb_wd <= {sp_color, sp_pen};
    end
    sp_x   <= sp_x + 1'd1;
    sp_col <= sp_col + 1'd1;
    if (sp_col == 4'd15) begin
      if (sp_last)
        sp_st <= SP_IDLE;
      else begin
        s_idx <= s_idx - 1'd1;
        sp_st <= SP_READ;
      end
    end
  end
  default: sp_st <= SP_IDLE;
  endcase

  if (line_start && s_line >= 9'd32 && s_line < 9'd224) begin
    sp_line <= s_line[7:0];
    sp_cnt  <= 0;
    sp_st   <= SP_CLEAR;
  end
end

// ---------------------------------------------------------------------------
// Composer: one pixel every 5 clocks, x = 8-247 of line c_line
//   phase 0: video RAM and sprite line buffer addresses
//   phase 2: tile codes in: graphics ROM addresses
//   phase 4: graphics in: the pixel, next x

reg        cp_on = 0;
reg  [7:0] cp_line = 0;
reg  [7:0] cp_x = 0;
reg  [2:0] cp_ph = 0;
reg  [2:0] fg_fx = 0, fg_fy = 0, bg_fx = 0, bg_fy = 0;

wire [7:0] tx  = flip ? ~cp_x : cp_x;
wire [7:0] ty  = flip ? ~cp_line : cp_line;
wire [7:0] bx  = tx + scrollx;
wire [7:0] by  = ty + scrolly;

wire [1:0] fg_pen = {fg0_q[fg_fx], fg1_q[fg_fx]};
wire [1:0] bg_pen = {bg0_q[bg_fx], bg1_q[bg_fx]};
wire [7:0] ct     = ctab[sb_q[4:0]];
wire [3:0] sp_ci  = sb_q[5] ? ct[7:4] : ct[3:0];

always @(posedge clk) begin
  pix_we <= 0;
  if (cp_on) begin
    cp_ph <= (cp_ph == 3'd4) ? 3'd0 : cp_ph + 1'd1;
    case (cp_ph)
    3'd0: begin
      fg_va <= {ty[7:3], tx[7:3]};
      bg_va <= {by[7:3], bx[7:3]};
      sb_ra <= {cp_line[0], cp_x};
      fg_fx <= tx[2:0];
      fg_fy <= ty[2:0];
      bg_fx <= bx[2:0];
      bg_fy <= by[2:0];
    end
    3'd2: begin
      fg_ga <= {fg_attr[7], fg_code, fg_fy};
      bg_ga <= {bg_attr[7], bg_code, bg_fy};
    end
    3'd4: begin
      pix_we <= 1;
      pix_x  <= cp_x - 8'd8;
      pix_y  <= cp_line - 8'd32;
      if (sb_q[1:0] != 2'd0)
        pixel <= {1'b0, sp_ci[3:2], 1'b0, sp_ci};
      else if (fg_pen != 2'd0 || fg_attr[6])
        pixel <= {fg_attr[5:0], fg_pen};
      else if (bg_pen != 2'd0 || bg_attr[6])
        pixel <= {bg_attr[5:0], bg_pen};
      else
        pixel <= 8'd0;
      cp_x <= cp_x + 1'd1;
      if (cp_x == 8'd247)
        cp_on <= 0;
    end
    default: ;
    endcase
  end

  if (line_start && c_line >= 9'd32 && c_line < 9'd224) begin
    cp_on   <= 1;
    cp_ph   <= 0;
    cp_line <= c_line[7:0];
    cp_x    <= 8'd8;
  end
end

endmodule
