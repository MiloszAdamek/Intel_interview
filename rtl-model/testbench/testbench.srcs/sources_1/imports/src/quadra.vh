`ifndef QUADRA_VH
`define QUADRA_VH

typedef logic ck_t; // clock
typedef logic rs_t; // reset
typedef logic dv_t; // data valid

// --------------------------------------------------------------------------------
// I/O precision
// --------------------------------------------------------------------------------

// x in [0,2) -> u1.23
localparam int  X_I =  1;
localparam int  X_F = 23;
localparam int  X_W = X_I + X_F;   // 24 (u1.23)
typedef logic [X_W-1:0] x_t;

// y in [-2,2) -> s2.23 (but typedef is unsigned!)
localparam int  Y_I =  2;
localparam int  Y_F = 23;
localparam int  Y_W = Y_I + Y_F;   // 25 (s2.23)
typedef logic signed [Y_W-1:0] y_t; // unsigned, cast to signed later

// --------------------------------------------------------------------------------
// Internal precision
// --------------------------------------------------------------------------------

typedef logic [X_W-1:17] x1_t;          // [23:17]
typedef logic [16:0] x2_t;              // [16:0], u0.17
typedef logic [33:0] sq_t;              // x2_t * x2_t, u0.34

typedef logic signed [31:0] a_t;        // s4.28
typedef logic signed [31:0] b_t;
typedef logic signed [31:0] c_t;

`endif
