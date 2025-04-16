`include "quadra.vh"

module square
(
    input  x2_t x2,
    output logic signed [33:0] sq
);

    always_comb sq = x2 * x2;

endmodule
