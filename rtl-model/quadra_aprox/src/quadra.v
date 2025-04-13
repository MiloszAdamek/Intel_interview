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

    // <challenge> 
	 
    sq_t x2_sq;
    y_t  y_result;

    square sq_unit (
        .x2(x2),
        .sq(x2_sq)
    );

    always_comb begin
        y_result = a + b * x2 + c * x2_sq;
    end

    assign y = y_result;

endmodule
