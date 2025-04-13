module quadra_top
(
    input  ck_t clk,
    input  rs_t rst_b,
    input  x_t  x,
    input  dv_t x_dv,
    output y_t  y,
    output dv_t y_dv
);
    // Pipeline data valid (3 stages):
    dv_t dv_p0, dv_p1, dv_p2;

    always_ff @(posedge clk)
    if (!rst_b) begin
        dv_p0 <= '0;
        dv_p1 <= '0;
        dv_p2 <= '0;
    end
    else begin
        dv_p0 <= x_dv;
        dv_p1 <= dv_p0;
        dv_p2 <= dv_p1;
    end

    // <challenge!>
	 
	 // Split x into x1 (index) and x2 (delta)
	 x1_t x1;
    x2_t x2;

    assign x1 = x[X_W-1:X_W-7];  // x[23:17] LUT index
    assign x2 = x[16:0];         // x[16:0]  delta x for quadratic part
	 
	 // Coefficient LUT:
	 a_t a;
    b_t b;
    c_t c;

    lut lut_inst (
        .x1(x1),
        .a(a),
        .b(b),
        .c(c)
    );
	 
	 //Quadratic approximation:
	 y_t y_q;

    quadra quadra_inst (
        .x2(x2),
        .a(a),
        .b(b),
        .c(c),
        .y(y_q)
    );
	 

    // Outputs:
    always_comb y_dv = dv_p2;
    always_comb y    = '0;

endmodule
