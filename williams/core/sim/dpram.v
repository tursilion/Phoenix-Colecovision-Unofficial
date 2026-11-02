// Simulation model of rtl/mister/dpram.vhd (two clocks; GHDL + Yosys leave
// the dpram components as black boxes).
module dpram #(parameter dWidth = 8, parameter aWidth = 10)
  ( input                   clk_a
  , input                   we_a
  , input      [aWidth-1:0] addr_a
  , input      [dWidth-1:0] d_a
  , output reg [dWidth-1:0] q_a
  , input                   clk_b
  , input                   we_b
  , input      [aWidth-1:0] addr_b
  , input      [dWidth-1:0] d_b
  , output reg [dWidth-1:0] q_b
  );
  reg [dWidth-1:0] mem [0:(1<<aWidth)-1];
  always @(posedge clk_a) begin
    if (we_a === 1'b1) mem[addr_a] <= d_a;
    q_a <= mem[addr_a];
  end
  always @(posedge clk_b) begin
    if (we_b === 1'b1) mem[addr_b] <= d_b;
    q_b <= mem[addr_b];
  end
endmodule
