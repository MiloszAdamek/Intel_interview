`timescale 1ns/1ps

`include "quadra.vh"

module quadra_tb;

  // Inputs
  x2_t   x2;
  a_t    a;
  b_t    b;
  c_t    c;

  // Output
  y_t y;

  // Device Under Test
  quadra DUT (
    .x2(x2),
    .a(a),
    .b(b),
    .c(c),
    .y(y)
  );

  // Helpers
  function real to_real(input logic signed [31:0] val, input int frac_bits);
    return val / (2.0 ** frac_bits);
  endfunction

  function real to_real_u(input logic [16:0] val, input int frac_bits);
    return val / (2.0 ** frac_bits);
  endfunction

  function real to_real_y(input logic signed [24:0] val);
    return val / (2.0 ** 23);
  endfunction

  function real abs(input real val);
    return (val < 0) ? -val : val;
  endfunction

  // Task to check
  task check_auto;
    real rx2, ra, rb, rc;
    real y_exp, y_real, bx2, cx2;
    rx2  = to_real_u(x2, 17);
    ra   = to_real(a, 30);
    rb   = to_real(b, 30);
    rc   = to_real(c, 30);
    y_real = to_real_y($signed(y));

    bx2 = rb * rx2;
    cx2 = rc * rx2 * rx2;
    y_exp = ra + bx2 + cx2;

    $display("DEBUG: a=%.6f, b=%.6f, c=%.6f, x2=%.6f", ra, rb, rc, rx2);
    $display("DEBUG: b*x2=%.6f, c*x2^2=%.6f, y_expected=%.6f, y_actual=%.6f",
              bx2, cx2, y_exp, y_real);

    if (y_exp >= 2.0 || y_exp < -2.0) begin
      $display("SKIP: expected y out of range [-2, 2): %f", y_exp);
    end
    else if (abs(y_exp - y_real) > 0.0001) begin
      $display("FAIL: expected y=%.6f, got y=%.6f", y_exp, y_real);
    end else begin
      $display("PASS: y=%.6f", y_real);
    end
  endtask

  initial begin
    // x2 = 0.5 (in u0.17)
    x2 = 17'h10000;

    // Test 1: all zeros
    a = 32'sd0; b = 32'sd0; c = 32'sd0;
    #10; check_auto();

    // Test 2: max safe positive within [-2,2)
    a = 32'sh40000000; // 1.0
    b = 32'sh20000000; // 0.5
    c = 32'sh10000000; // 0.25
    // 1 + 0.5*0.5 + 0.25*0.25 = 1.3125
    #10; check_auto();

    // Test 3: negative b, positive a and c
    a = 32'sh3E000000; // ~0.96875
    b = -32'sh20000000; // -0.5
    c = 32'sh08000000; // 0.125
    // ~0.96875 - 0.25 + 0.03125 = 0.75
    #10; check_auto();

    // Test 4: negative result ~ -1.5
    a = -32'sh40000000; // -1.0
    b = -32'sh20000000; // -0.5
    c = -32'sh20000000; // -0.5
    #10; check_auto(); // -1 -0.25 -0.125 = -1.375

    // Test 5: edge near 2.0
    a = 32'sh3F000000; // ~1.875
    b = 32'sh01000000; // 0.0625
    c = 32'sh01000000; // 0.0625
    #10; check_auto(); // ~1.875 + 0.03125 + 0.015625 = ~1.9219
    
        // Test 6: near lower bound (-2.0)
    a = -32'sh40000000; // -1.0
    b = -32'sh40000000; // -1.0
    c = -32'sh40000000; // -1.0
    #10; check_auto(); // -1 - 0.5 - 0.25 = -1.75

    // Test 7: only quadratic component
    a = 32'sd0;
    b = 32'sd0;
    c = 32'sh40000000; // 1.0
    #10; check_auto(); // y = 1.0 * 0.25 = 0.25

    // Test 8: only linear component
    a = 32'sd0;
    b = 32'sh40000000; // 1.0
    c = 32'sd0;
    #10; check_auto(); // y = 1.0 * 0.5 = 0.5

    // Test 9: large negative quadratic term
    a = 32'sh20000000; // 0.5
    b = 32'sh00000000; // 0.0
    c = -32'sh40000000; // -1.0
    #10; check_auto(); // y = 0.5 - 0.25 = 0.25

    // Test 10: all terms negative, cancel to zero
    a = -32'sh20000000; // -0.5
    b = -32'sh40000000; // -1.0
    c = -32'sh80000000; // -2.0
    // -0.5 -0.5 -0.5 = -1.5
    #10; check_auto();

    // Test 11: hand-tuned precision case
    a = 32'sh3F800000; // 1.96875
    b = -32'sh00800000; // -0.03125
    c = 32'sh00400000;  // 0.015625
    // y = 1.96875 - 0.015625 + 0.00390625 ? 1.957031
    #10; check_auto();

    $finish;
  end

endmodule

