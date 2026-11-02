// Post-synthesis test of the Williams glue + board (XST netlist from
// netgen): prints the first NW SRAM writes and the SD card select
// changes, to compare with the RTL simulation (tb.cpp --log-writes).
`timescale 1ps / 1ps
module tb;
  reg clk48 = 0, clk12 = 0, clk25 = 0, gate = 1;
  always #10417 clk48 = !clk48;        // 48MHz (rounded)
  always #41668 clk12 = !clk12;        // every fourth clk48 edge
  always #20000 clk25 = !clk25;
  wire run;
  always @(negedge clk12) gate <= run;  // as a BUFGCE
  wire clk12g = clk12 & gate;
  reg reset = 1;
  wire [18:0] sram_addr; wire [7:0] sram_dout; wire sram_doe, sram_we_n, sram_oe_n;
  reg  [7:0] sram [0:524287];
  wire [7:0] sram_din = sram[sram_addr];
  integer nw = 0, i;
  always @(posedge sram_we_n) if (sram_doe) begin
    sram[sram_addr] <= sram_dout;
    if (nw < `NW) $display("W %05x %02x  t=%0d", sram_addr, sram_dout, $time / 1000000);
    nw = nw + 1;
  end
  wire sd_cs_n, sd_sclk, sd_mosi;
  always @(sd_cs_n) $display("CS %b t=%0d us", sd_cs_n, $time / 1000000);
  integer sclk_n = 0;
  always @(posedge sd_sclk) sclk_n = sclk_n + 1;
  williams_phoenix dut
    ( .clk25(clk25), .clk48(clk48), .clk12(clk12), .clk12g(clk12g), .run(run)
    , .reset(reset), .game_reset(1'b0)
    , .cv1(10'h3c0), .cv2(10'h3c0), .snes(12'd0), .kb_keys(16'd0), .kb_joy(5'd0)
    , .sram_addr(sram_addr), .sram_dout(sram_dout), .sram_din(sram_din), .sram_doe(sram_doe)
    , .sram_we_n(sram_we_n), .sram_oe_n(sram_oe_n)
    , .sd_cs_n(sd_cs_n), .sd_sclk(sd_sclk), .sd_mosi(sd_mosi), .sd_miso(1'b1), .sd_cd_n(1'b0)
    , .vid_r(), .vid_g(), .vid_b(), .vid_hsync_n(), .vid_vsync_n(), .vid_blank()
    , .audio_l(), .audio_r(), .boot_mode(), .clk_locked(1'b1) );
  initial begin
    for (i = 0; i < 524288; i = i + 1) sram[i] = $random;
    #(1000000) reset = 0;
  end
  always #1000000000 $display("t=%0d ms  writes %0d  sclk %0d", $time / 1000000000, nw, sclk_n);
`ifdef PROBE
  // the CPU's bus cycles (at the fall of E)
  integer nc = 0;
  always @(negedge dut.soc.\mc6809is_gen.mc6809 .E) if (!reset && nc < `NC) begin
    $display("C %0d %04x %s d %02x o %02x", nc, dut.soc.\mc6809is_gen.mc6809 .ADDR,
             dut.soc.\mc6809is_gen.mc6809 .RnW ? "r" : "w", dut.soc.\mc6809is_gen.mc6809 .D,
             dut.soc.\mc6809is_gen.mc6809 .Dout);
    nc = nc + 1;
  end
`endif
  initial #(`TEND) $finish;
endmodule
