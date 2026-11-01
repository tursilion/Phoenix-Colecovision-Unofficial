// Low-pass filter check: full-amplitude square waves.  half = half period
// in 32MHz clocks.
`timescale 1ns/1ps
module tb;
  reg clk = 0; always #1 clk = !clk;
  reg tick = 0; reg [5:0] d = 0;
  always @(posedge clk) begin d <= d + 1; tick <= (d == 63); end
  reg signed [15:0] x = 0; wire signed [15:0] y;
  lynx_lowpass f (.clk(clk), .tick(tick), .x(x), .y(y));
  integer n, mn, mx;
  task run(input integer half, input integer clocks);
    begin
      mn = 99999; mx = -99999;
      for (n = 0; n < clocks; n = n + 1) begin
        x = ((n / half) % 2) ? -16'sd30000 : 16'sd30000;
        @(posedge clk);
        if (n > clocks / 2) begin if (y < mn) mn = y; if (y > mx) mx = y; end
      end
      $display("half period %0d clocks (%0d Hz): out %0d .. %0d", half, 16000000 / half, mn, mx);
    end
  endtask
  initial begin
    run(32000, 400000);   // 500Hz: passes
    run(640, 200000);     // 25kHz: small
    run(32, 400000);      // 500kHz: nulled (aliases to DC without the average)
    run(31, 400000);      // 516kHz: aliases to 16kHz
    run(16, 400000);      // 1MHz
    run(48, 400000);      // 333kHz
    $finish;
  end
endmodule
