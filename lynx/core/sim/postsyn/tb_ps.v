// Post-synthesis test: the XST netlist of lynx_phoenix (netgen), with an
// SRAM, no SD card.  Prints each CPU bus request (address, read/write)
// for the first N requests, to compare with the RTL simulation.
`timescale 1ps / 1ps
module tb;
  reg clk32 = 0, clk25 = 0;
  always #15625 clk32 = !clk32;
  always #20000 clk25 = !clk25;
  reg reset = 1;
  wire [18:0] sram_addr; wire [7:0] sram_dout; wire sram_doe, sram_we_n, sram_oe_n;
  reg  [7:0] sram [0:524287];
  wire [7:0] sram_din = sram[sram_addr];
  always @(posedge sram_we_n) if (sram_doe) sram[sram_addr] <= sram_dout;
  wire [15:0] dbg_addr; wire dbg_req, dbg_rnw, dbg_done, ce;
  lynx_phoenix dut
    ( .clk25(clk25), .clk32(clk32), .reset(reset), .game_reset(1'b0)
    , .cv1(10'h3c0), .cv2(10'h3c0), .snes(12'd0), .kb_keys(16'd0), .kb_joy(5'd0)
    , .sram_addr(sram_addr), .sram_dout(sram_dout), .sram_din(sram_din), .sram_doe(sram_doe)
    , .sram_we_n(sram_we_n), .sram_oe_n(sram_oe_n)
    , .sd_cs_n(), .sd_sclk(), .sd_mosi(), .sd_miso(1'b1), .sd_cd_n(1'b1)
    , .vid_r(), .vid_g(), .vid_b(), .vid_hsync_n(), .vid_vsync_n(), .vid_blank()
    , .audio_l(), .audio_r(), .boot_mode(), .clk32_locked(1'b1)
    , .dbg_addr_o(dbg_addr), .dbg_req_o(dbg_req), .dbg_rnw_o(dbg_rnw)
    , .dbg_done_o(dbg_done), .dbg_ce_o(ce) );
  integer n = 0, i;
  reg pend = 0;
  initial begin
    for (i = 0; i < 524288; i = i + 1) sram[i] = 0;
    #(31250 * 40) reset = 0;
  end
  // A request is logged at the first ce it is seen, and again after
  // memorymux reports it done.
  always @(posedge clk32) begin
    if (dbg_done) pend <= 0;
    if (ce && dbg_req && !pend && !dbg_done) begin
      $display("%0d %04x %s", n, dbg_addr, dbg_rnw ? "R" : "W");
      n = n + 1;
      pend <= 1;
      if (n == `NREQ) $finish;
    end
  end
endmodule
