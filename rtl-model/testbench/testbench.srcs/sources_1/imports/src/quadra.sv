//
// Quadratic polynomial:  f(x) = a + b*x2 + c*(x2^2)
//

`include "quadra.vh"

module quadra (
    input  x2_t   x2,
    input  a_t    a,
    input  b_t    b,
    input  c_t    c,
    output y_t    y
);

    // Square module: x2^2
    sq_t x2_sq;
    square sq_unit (
        .x2(x2),
        .sq(x2_sq)
    );

    // Intermediate signals
    logic signed [17:0] x2_ext;         // u0.17 -> s1.17
    logic signed [48:0] bx2_long;       // s2.30 * s1.17 = s3.47
    logic signed [65:0] cx2sq_long;     // s2.30 * u0.34 = s2.64

    logic signed [31:0] bx2_sft;
    logic signed [31:0] cx2_sft;
    logic signed [34:0] y_long;

    // Multiply and shift
    assign x2_ext     = {1'b0, x2};                     // unsigned to signed extension
    assign bx2_long   = b * x2_ext;
    assign cx2sq_long = c * $signed(x2_sq);

    assign bx2_sft = bx2_long >>> 17;
    assign cx2_sft = cx2sq_long >>> 34;
    assign y_long  = a + bx2_sft + cx2_sft;

    // s2.30 to s2.23 conversion
    assign y = y_long >>> 7;

//`ifndef SYNTHESIS
//    function real to_real(input logic signed [65:0] val, input int frac_bits);
//        return val / (2.0 ** frac_bits);
//    endfunction

//    function real to_real_u(input logic [33:0] val, input int frac_bits);
//        return val / (2.0 ** frac_bits);
//    endfunction

//    // Debug output
//    initial begin
//        $display("[quadra] INIT: using 3x s2.30 add and shifting to s2.23");
//    end

//    always @(*) begin
//        $display("[quadra] a=%f, b=%f, c=%f", to_real(a, 30), to_real(b, 30), to_real(c, 30));
//        $display("[quadra] x2=%f, x2_sq=%f", to_real(x2, 17), to_real_u(x2_sq, 34));
//        $display("[quadra] bx2_long=%f, cx2sq_long=%f, y_long=%f",
//                  to_real(bx2_long, 47), to_real(cx2sq_long, 64), to_real(y_long, 30));
//        $display("BITWISE: y_long = %b", y_long);
//        $display("BITWISE: y      = %b", y);
//    end
//`endif

endmodule


