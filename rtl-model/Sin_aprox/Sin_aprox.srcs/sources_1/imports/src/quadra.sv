//
// Quadratic polynomial:  f(x) = a + b*x2 + c*(x2^2)
//

`include "quadra.vh"

module quadra
(
    input  x2_t   x2,
    input  a_t    a,
    input  b_t    b,
    input  c_t    c,
    output y_t    y
);

    // x2^2 computation
    sq_t x2_sq;

    square sq_unit (
        .x2(x2),
        .sq(x2_sq)
    );

    // Intermediate results with full precision
    logic signed [48:0] bx2_long;    // b * x2 => s2.30 * u0.17 = s2.47
    logic signed [65:0] cx2sq_long;  // c * x2^2 => s2.30 * u0.34 = s2.64
    logic signed [31:0] y_long;      // final result in s2.30

    // Multiply and shift to match a_t precision (s2.30)
    assign bx2_long   = b * x2;
    assign cx2sq_long = c * x2_sq;
    assign y_long     = a + (bx2_long >>> 17) + (cx2sq_long >>> 34);

    // Convert s2.30 -> s2.23 (y_t)
    assign y = y_long[31:7];

endmodule
