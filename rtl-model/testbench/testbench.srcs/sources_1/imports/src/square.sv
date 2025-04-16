`include "quadra.vh"

module square
(
    input  x2_t x2,
    output sq_t sq
);

    always_comb sq = x2 * x2;

endmodule

//module square (
//    input  logic       clk,
//    input  logic       rst_b,
//    input  logic       x2_dv,
//    input  x2_t        x2,
//    output logic       sq_dv,
//    output sq_t        sq
//);

//    // Rejestracja danych wyj?ciowych
//    always_ff @(posedge clk or negedge rst_b) begin
//        if (!rst_b) begin
//            sq    <= '0;
//            sq_dv <= 1'b0;
//        end else begin
//            sq    <= x2 * x2;
//            sq_dv <= x2_dv;
//        end
//    end

//endmodule
