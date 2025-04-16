`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 16.04.2025 16:50:39
// Design Name: 
// Module Name: tb_square
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////
`include "quadra.vh"

module square_tb;

  // Clock and reset
  logic clk;
  logic rst_b;

  // Inputs
  x2_t x2;
  dv_t x2_dv;

  // Outputs
  sq_t sq;
  dv_t sq_dv;

  // Clock generation: 10ns period
  initial clk = 0;
  always #5 clk = ~clk;

  // DUT
  square dut (
    .clk(clk),
    .rst_b(rst_b),
    .x2(x2),
    .x2_dv(x2_dv),
    .sq(sq),
    .sq_dv(sq_dv)
  );

  // Send input task
  task send_input(input real val);
    x2_t fixed_val;
    fixed_val = val * 131072;  // u0.17 format
    @(posedge clk);
    x2 <= fixed_val;
    x2_dv <= 1;
    @(posedge clk);
    x2_dv <= 0;
  endtask

  // Simulation logic
  initial begin
    $display("\n==== square_tb ====\n");

    // Reset
    rst_b = 0;
    x2 = '0;
    x2_dv = 0;
    repeat (3) @(posedge clk);
    rst_b = 1;

    // Stimulus
    send_input(0.5);
    send_input(0.25);
    send_input(0.75);
  end

endmodule
