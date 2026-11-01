// The Master System's FM sound (YM2413), Jotego's jt2413 (rtl/jtopl,
// GPL-3.0), with the ports system.vhd uses.  The chip runs from the
// 3.58MHz clock enable, as on the FM Sound Unit / Japanese Mark III.

module fm_ym2413
  ( input               clk
  , input               ce        // 3.58MHz
  , input        [7:0]  din
  , input               a0
  , input               wr_n      // a write to port $F0/$F1
  , input               rst_n
  , output       [13:0] sound     // signed
  );

wire signed [15:0] snd;

jt2413 u_opll
  ( .rst    (!rst_n)
  , .clk    (clk)
  , .cen    (ce)
  , .din    (din)
  , .addr   (a0)
  , .cs_n   (1'b0)
  , .wr_n   (wr_n)
  , .snd    (snd)
  , .sample ()
  );

assign sound = snd[15:2];

endmodule
