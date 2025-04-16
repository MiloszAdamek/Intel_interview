`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 16.04.2025 16:27:33
// Design Name: 
// Module Name: square_tb
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

  // Inputs
  x2_t x2;

  // Output
  sq_t sq;

  // Instantiate DUT
  square dut (
    .x2(x2),
    .sq(sq)
  );

  initial begin
    $display("\n==== square_tb ====\n");

    // Example 1: x2 = 0.5
    x2 = 17'h10000; // 0.5 in u0.17
    #1;
    $display("x2 = %f | x2^2 = %f", x2 / 131072.0, sq / 17179869184.0); // sq is u0.34 ? 2^34

    // Example 2: x2 = 0.25
    x2 = 17'h08000; // 0.25
    #1;
    $display("x2 = %f | x2^2 = %f", x2 / 131072.0, sq / 17179869184.0);

    // Example 3: x2 = 0.75
    x2 = 17'h18000; // 0.75
    #1;
    $display("x2 = %f | x2^2 = %f", x2 / 131072.0, sq / 17179869184.0);

    $display("\n====================\n");

    #10 $finish;
  end

endmodule
