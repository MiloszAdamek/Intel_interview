// quadra.vh

`ifndef QUADRA_VH
`define QUADRA_VH

typedef logic ck_t; // clock
typedef logic rs_t; // reset
typedef logic dv_t; // data valid

// --------------------------------------------------------------------------------
// I/O precision
// --------------------------------------------------------------------------------

// x in [0,2) -> u1.23
localparam int  X_I =  1;          //         =  1
localparam int  X_F = 23;          //         = 23
localparam int  X_W = X_I + X_F;   //  1 + 23 = 24 (u1.23)

typedef logic [X_W-1:0] x_t;

// y [-2,2) -> s2.23
localparam int  Y_I =  2;          //         =  2
localparam int  Y_F = 23;          //         = 23
localparam int  Y_W = X_I + X_F;   //  2 + 23 = 25 (s2.23)

typedef logic signed [Y_W-1:0] y_t;

// --------------------------------------------------------------------------------
// Internal precision:
// --------------------------------------------------------------------------------

// <challenge!>

typedef logic [X_W-1:17] x1_t;				// [23:17]
typedef logic [16:0] x2_t;						// [16:0]
typedef logic signed [33:0] sq_t;						// x2_t * x2_t, u0.34

typedef logic signed [31:0] a_t;				// s2.30
typedef logic signed [31:0] b_t;
typedef logic signed [31:0] c_t;

`endif
