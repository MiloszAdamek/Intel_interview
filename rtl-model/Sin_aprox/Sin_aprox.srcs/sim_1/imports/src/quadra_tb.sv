`include "quadra.vh"
`timescale 1ps/1ps

`define T_CLK 1000 // 1ns

module quadra_tb;

  // Inputs
  logic clk;
  logic rst_b;
  x_t   x;
  dv_t  x_dv;

  // Outputs
  y_t   y;
  dv_t  y_dv;

  // Instantiate DUT
  quadra_top dut (
    .clk(clk),
    .rst_b(rst_b),
    .x(x),
    .x_dv(x_dv),
    .y(y),
    .y_dv(y_dv)
  );

  // Clock generator
  initial clk = 0;
  always #(`T_CLK/2) clk = ~clk;

  // Reset
  initial begin
    rst_b = 0;
    repeat (2) @(posedge clk);
    rst_b = 1;
  end

  // Stimulus
  initial begin
    $display("Started test at time %0t", $time);

    // init
    x    = 0;
    x_dv = 0;

    // Wait after reset
    repeat (3) @(posedge clk);

    // Apply stimulus
    x    = 24'h880001;
    x_dv = 1;
    @(posedge clk);
    x_dv = 0;

    // Wait for output
    wait (y_dv == 1);
    $display("Time: %0t | x = 0x%06h | y = 0x%06h | y_dv = %b", $time, x, y, y_dv);

    repeat (2) @(posedge clk);
    $display("Simulation finished at %0t", $time);
    
    $finish;
  end

endmodule
