// Module `padded16_global_wrapper_stencil_ub` defined externally
// Module `lyy_stencil_ub` defined externally
// Module `lxy_stencil_ub` defined externally
// Module `lxx_stencil_ub` defined externally
// Module `lgyy_stencil_ub` defined externally
// Module `lgyy_stencil_clkwrk_dsa2_ub` defined externally
// Module `lgxy_stencil_ub` defined externally
// Module `lgxy_stencil_clkwrk_dsa1_ub` defined externally
// Module `lgxx_stencil_ub` defined externally
// Module `lgxx_stencil_clkwrk_dsa0_ub` defined externally
// Module `grad_y_stencil_ub` defined externally
// Module `grad_x_stencil_ub` defined externally
// Module `cim_stencil_ub` defined externally
// Module `cim_output_stencil_ub` defined externally
module op_hcompute_padded16_global_wrapper_stencil_write_start_pt__U1745 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_lyy_stencil_write_start_pt__U2063 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_lxy_stencil_write_start_pt__U1961 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_lxx_stencil_write_start_pt__U1821 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_lgyy_stencil_write_start_pt__U2089 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_lgyy_stencil_1_write_start_pt__U2127 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_lgxy_stencil_write_start_pt__U1987 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_lgxy_stencil_1_write_start_pt__U2025 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_lgxx_stencil_write_start_pt__U1847 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_lgxx_stencil_1_write_start_pt__U1885 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_write_start_pt__U2241 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_grad_y_stencil_write_start_pt__U1923 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_grad_x_stencil_write_start_pt__U1783 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_cim_stencil_write_start_pt__U2165 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_cim_output_stencil_write_start_pt__U2203 (
    input in,
    output out
);
assign out = in;
endmodule

module hcompute_padded16_global_wrapper_stencil (
    output [15:0] out_padded16_global_wrapper_stencil,
    input [15:0] in0_padded16_stencil [0:0]
);
assign out_padded16_global_wrapper_stencil = in0_padded16_stencil[0];
endmodule

module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_cim_output_stencil [0:0]
);
assign out_hw_output_stencil = in0_cim_output_stencil[0];
endmodule

module cu_op_hcompute_padded16_global_wrapper_stencil (
    input clk,
    input [15:0] padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0],
    output [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0]
);
wire [15:0] inner_compute_out_padded16_global_wrapper_stencil;
wire [15:0] inner_compute_in0_padded16_stencil [0:0];
assign inner_compute_in0_padded16_stencil[0] = padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0];
hcompute_padded16_global_wrapper_stencil inner_compute (
    .out_padded16_global_wrapper_stencil(inner_compute_out_padded16_global_wrapper_stencil),
    .in0_padded16_stencil(inner_compute_in0_padded16_stencil)
);
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0] = inner_compute_out_padded16_global_wrapper_stencil;
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_cim_output_stencil [0:0];
assign inner_compute_in0_cim_output_stencil[0] = cim_output_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_cim_output_stencil(inner_compute_in0_cim_output_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module coreir_reg #(
    parameter width = 1,
    parameter clk_posedge = 1,
    parameter init = 1
) (
    input clk,
    input [width-1:0] in,
    output [width-1:0] out
);
  reg [width-1:0] outReg=init;
  wire real_clk;
  assign real_clk = clk_posedge ? clk : ~clk;
  always @(posedge real_clk) begin
    outReg <= in;
  end
  assign out = outReg;
endmodule

module mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    parameter init = 16'h0000
) (
    input [15:0] in,
    input clk,
    output [15:0] out
);
wire reg0_clk;
wire [15:0] reg0_in;
assign reg0_clk = clk;
assign reg0_in = in;
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(reg0_clk),
    .in(reg0_in),
    .out(out)
);
endmodule

module mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    parameter init = 16'h0000
) (
    input [15:0] in,
    input clk,
    output [15:0] out,
    input en
);
wire reg0_clk;
wire [15:0] reg0_in;
assign reg0_clk = clk;
assign reg0_in = en ? in : out;
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(reg0_clk),
    .in(reg0_in),
    .out(out)
);
endmodule

module hcompute_lgyy_stencil (
    output [15:0] out_lgyy_stencil
);
assign out_lgyy_stencil = 16'h0000;
endmodule

module cu_op_hcompute_lgyy_stencil (
    input clk,
    output [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lgyy_stencil;
hcompute_lgyy_stencil inner_compute (
    .out_lgyy_stencil(inner_compute_out_lgyy_stencil)
);
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write[0] = inner_compute_out_lgyy_stencil;
endmodule

module hcompute_lgxy_stencil (
    output [15:0] out_lgxy_stencil
);
assign out_lgxy_stencil = 16'h0000;
endmodule

module cu_op_hcompute_lgxy_stencil (
    input clk,
    output [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lgxy_stencil;
hcompute_lgxy_stencil inner_compute (
    .out_lgxy_stencil(inner_compute_out_lgxy_stencil)
);
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write[0] = inner_compute_out_lgxy_stencil;
endmodule

module hcompute_lgxx_stencil (
    output [15:0] out_lgxx_stencil
);
assign out_lgxx_stencil = 16'h0000;
endmodule

module cu_op_hcompute_lgxx_stencil (
    input clk,
    output [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lgxx_stencil;
hcompute_lgxx_stencil inner_compute (
    .out_lgxx_stencil(inner_compute_out_lgxx_stencil)
);
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write[0] = inner_compute_out_lgxx_stencil;
endmodule

module hcompute_lyy_stencil (
    output [15:0] out_lyy_stencil,
    input [15:0] in0_grad_y_stencil [0:0]
);
assign out_lyy_stencil = ($signed(16'(in0_grad_y_stencil[0] * in0_grad_y_stencil[0]))) >>> 16'h0007;
endmodule

module cu_op_hcompute_lyy_stencil (
    input clk,
    input [15:0] grad_y_stencil_op_hcompute_lyy_stencil_read [0:0],
    output [15:0] lyy_stencil_op_hcompute_lyy_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lyy_stencil;
wire [15:0] inner_compute_in0_grad_y_stencil [0:0];
assign inner_compute_in0_grad_y_stencil[0] = grad_y_stencil_op_hcompute_lyy_stencil_read[0];
hcompute_lyy_stencil inner_compute (
    .out_lyy_stencil(inner_compute_out_lyy_stencil),
    .in0_grad_y_stencil(inner_compute_in0_grad_y_stencil)
);
assign lyy_stencil_op_hcompute_lyy_stencil_write[0] = inner_compute_out_lyy_stencil;
endmodule

module hcompute_lxy_stencil (
    output [15:0] out_lxy_stencil,
    input [15:0] in0_grad_x_stencil [0:0],
    input [15:0] in1_grad_y_stencil [0:0]
);
assign out_lxy_stencil = ($signed(16'(in0_grad_x_stencil[0] * in1_grad_y_stencil[0]))) >>> 16'h0007;
endmodule

module cu_op_hcompute_lxy_stencil (
    input clk,
    input [15:0] grad_x_stencil_op_hcompute_lxy_stencil_read [0:0],
    input [15:0] grad_y_stencil_op_hcompute_lxy_stencil_read [0:0],
    output [15:0] lxy_stencil_op_hcompute_lxy_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lxy_stencil;
wire [15:0] inner_compute_in0_grad_x_stencil [0:0];
wire [15:0] inner_compute_in1_grad_y_stencil [0:0];
assign inner_compute_in0_grad_x_stencil[0] = grad_x_stencil_op_hcompute_lxy_stencil_read[0];
assign inner_compute_in1_grad_y_stencil[0] = grad_y_stencil_op_hcompute_lxy_stencil_read[0];
hcompute_lxy_stencil inner_compute (
    .out_lxy_stencil(inner_compute_out_lxy_stencil),
    .in0_grad_x_stencil(inner_compute_in0_grad_x_stencil),
    .in1_grad_y_stencil(inner_compute_in1_grad_y_stencil)
);
assign lxy_stencil_op_hcompute_lxy_stencil_write[0] = inner_compute_out_lxy_stencil;
endmodule

module hcompute_lxx_stencil (
    output [15:0] out_lxx_stencil,
    input [15:0] in0_grad_x_stencil [0:0]
);
assign out_lxx_stencil = ($signed(16'(in0_grad_x_stencil[0] * in0_grad_x_stencil[0]))) >>> 16'h0007;
endmodule

module cu_op_hcompute_lxx_stencil (
    input clk,
    input [15:0] grad_x_stencil_op_hcompute_lxx_stencil_read [0:0],
    output [15:0] lxx_stencil_op_hcompute_lxx_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lxx_stencil;
wire [15:0] inner_compute_in0_grad_x_stencil [0:0];
assign inner_compute_in0_grad_x_stencil[0] = grad_x_stencil_op_hcompute_lxx_stencil_read[0];
hcompute_lxx_stencil inner_compute (
    .out_lxx_stencil(inner_compute_out_lxx_stencil),
    .in0_grad_x_stencil(inner_compute_in0_grad_x_stencil)
);
assign lxx_stencil_op_hcompute_lxx_stencil_write[0] = inner_compute_out_lxx_stencil;
endmodule

module hcompute_lgyy_stencil_1 (
    output [15:0] out_lgyy_stencil,
    input [15:0] in0_lgyy_stencil [0:0],
    input [15:0] in1_lyy_stencil [8:0]
);
assign out_lgyy_stencil = 16'(in1_lyy_stencil[0] + (16'(in0_lgyy_stencil[0] + (16'(in1_lyy_stencil[1] + (16'(in1_lyy_stencil[2] + (16'(in1_lyy_stencil[3] + (16'(in1_lyy_stencil[4] + (16'(in1_lyy_stencil[5] + (16'(in1_lyy_stencil[6] + (16'(in1_lyy_stencil[7] + in1_lyy_stencil[8])))))))))))))))));
endmodule

module cu_op_hcompute_lgyy_stencil_1 (
    input clk,
    input [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read [0:0],
    input [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0],
    output [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_lgyy_stencil;
wire [15:0] inner_compute_in0_lgyy_stencil [0:0];
wire [15:0] inner_compute_in1_lyy_stencil [8:0];
assign inner_compute_in0_lgyy_stencil[0] = lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read[0];
assign inner_compute_in1_lyy_stencil[8] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[8];
assign inner_compute_in1_lyy_stencil[7] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[7];
assign inner_compute_in1_lyy_stencil[6] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[6];
assign inner_compute_in1_lyy_stencil[5] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[5];
assign inner_compute_in1_lyy_stencil[4] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[4];
assign inner_compute_in1_lyy_stencil[3] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[3];
assign inner_compute_in1_lyy_stencil[2] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[2];
assign inner_compute_in1_lyy_stencil[1] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[1];
assign inner_compute_in1_lyy_stencil[0] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[0];
hcompute_lgyy_stencil_1 inner_compute (
    .out_lgyy_stencil(inner_compute_out_lgyy_stencil),
    .in0_lgyy_stencil(inner_compute_in0_lgyy_stencil),
    .in1_lyy_stencil(inner_compute_in1_lyy_stencil)
);
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0] = inner_compute_out_lgyy_stencil;
endmodule

module hcompute_lgxy_stencil_1 (
    output [15:0] out_lgxy_stencil,
    input [15:0] in0_lgxy_stencil [0:0],
    input [15:0] in1_lxy_stencil [8:0]
);
assign out_lgxy_stencil = 16'(in1_lxy_stencil[0] + (16'(in0_lgxy_stencil[0] + (16'(in1_lxy_stencil[1] + (16'(in1_lxy_stencil[2] + (16'(in1_lxy_stencil[3] + (16'(in1_lxy_stencil[4] + (16'(in1_lxy_stencil[5] + (16'(in1_lxy_stencil[6] + (16'(in1_lxy_stencil[7] + in1_lxy_stencil[8])))))))))))))))));
endmodule

module cu_op_hcompute_lgxy_stencil_1 (
    input clk,
    input [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read [0:0],
    input [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0],
    output [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_lgxy_stencil;
wire [15:0] inner_compute_in0_lgxy_stencil [0:0];
wire [15:0] inner_compute_in1_lxy_stencil [8:0];
assign inner_compute_in0_lgxy_stencil[0] = lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read[0];
assign inner_compute_in1_lxy_stencil[8] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[8];
assign inner_compute_in1_lxy_stencil[7] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[7];
assign inner_compute_in1_lxy_stencil[6] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[6];
assign inner_compute_in1_lxy_stencil[5] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[5];
assign inner_compute_in1_lxy_stencil[4] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[4];
assign inner_compute_in1_lxy_stencil[3] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[3];
assign inner_compute_in1_lxy_stencil[2] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[2];
assign inner_compute_in1_lxy_stencil[1] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[1];
assign inner_compute_in1_lxy_stencil[0] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[0];
hcompute_lgxy_stencil_1 inner_compute (
    .out_lgxy_stencil(inner_compute_out_lgxy_stencil),
    .in0_lgxy_stencil(inner_compute_in0_lgxy_stencil),
    .in1_lxy_stencil(inner_compute_in1_lxy_stencil)
);
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0] = inner_compute_out_lgxy_stencil;
endmodule

module hcompute_lgxx_stencil_1 (
    output [15:0] out_lgxx_stencil,
    input [15:0] in0_lgxx_stencil [0:0],
    input [15:0] in1_lxx_stencil [8:0]
);
assign out_lgxx_stencil = 16'(in1_lxx_stencil[0] + (16'(in0_lgxx_stencil[0] + (16'(in1_lxx_stencil[1] + (16'(in1_lxx_stencil[2] + (16'(in1_lxx_stencil[3] + (16'(in1_lxx_stencil[4] + (16'(in1_lxx_stencil[5] + (16'(in1_lxx_stencil[6] + (16'(in1_lxx_stencil[7] + in1_lxx_stencil[8])))))))))))))))));
endmodule

module cu_op_hcompute_lgxx_stencil_1 (
    input clk,
    input [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read [0:0],
    input [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0],
    output [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_lgxx_stencil;
wire [15:0] inner_compute_in0_lgxx_stencil [0:0];
wire [15:0] inner_compute_in1_lxx_stencil [8:0];
assign inner_compute_in0_lgxx_stencil[0] = lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read[0];
assign inner_compute_in1_lxx_stencil[8] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[8];
assign inner_compute_in1_lxx_stencil[7] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[7];
assign inner_compute_in1_lxx_stencil[6] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[6];
assign inner_compute_in1_lxx_stencil[5] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[5];
assign inner_compute_in1_lxx_stencil[4] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[4];
assign inner_compute_in1_lxx_stencil[3] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[3];
assign inner_compute_in1_lxx_stencil[2] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[2];
assign inner_compute_in1_lxx_stencil[1] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[1];
assign inner_compute_in1_lxx_stencil[0] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[0];
hcompute_lgxx_stencil_1 inner_compute (
    .out_lgxx_stencil(inner_compute_out_lgxx_stencil),
    .in0_lgxx_stencil(inner_compute_in0_lgxx_stencil),
    .in1_lxx_stencil(inner_compute_in1_lxx_stencil)
);
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0] = inner_compute_out_lgxx_stencil;
endmodule

module hcompute_cim_stencil (
    output [15:0] out_cim_stencil,
    input [15:0] in0_lgxx_stencil [0:0],
    input [15:0] in1_lgxy_stencil [0:0],
    input [15:0] in2_lgyy_stencil [0:0]
);
wire [15:0] add_529_530_535_out;
wire [15:0] ashr_lgxx_stencil_2_528_529_out;
wire [15:0] ashr_lgxy_stencil_2_528_532_out;
wire [15:0] ashr_lgyy_stencil_2_528_530_out;
assign add_529_530_535_out = 16'(ashr_lgxx_stencil_2_528_529_out + ashr_lgyy_stencil_2_528_530_out);
assign ashr_lgxx_stencil_2_528_529_out = ($signed(in0_lgxx_stencil[0])) >>> 16'h0006;
assign ashr_lgxy_stencil_2_528_532_out = ($signed(in1_lgxy_stencil[0])) >>> 16'h0006;
assign ashr_lgyy_stencil_2_528_530_out = ($signed(in2_lgyy_stencil[0])) >>> 16'h0006;
assign out_cim_stencil = 16'((16'((16'(ashr_lgxx_stencil_2_528_529_out * ashr_lgyy_stencil_2_528_530_out)) - (16'(ashr_lgxy_stencil_2_528_532_out * ashr_lgxy_stencil_2_528_532_out)))) - (($signed(16'(add_529_530_535_out * add_529_530_535_out))) >>> 16'h0004));
endmodule

module cu_op_hcompute_cim_stencil (
    input clk,
    input [15:0] lgxx_stencil_op_hcompute_cim_stencil_read [0:0],
    input [15:0] lgxy_stencil_op_hcompute_cim_stencil_read [0:0],
    input [15:0] lgyy_stencil_op_hcompute_cim_stencil_read [0:0],
    output [15:0] cim_stencil_op_hcompute_cim_stencil_write [0:0]
);
wire [15:0] inner_compute_out_cim_stencil;
wire [15:0] inner_compute_in0_lgxx_stencil [0:0];
wire [15:0] inner_compute_in1_lgxy_stencil [0:0];
wire [15:0] inner_compute_in2_lgyy_stencil [0:0];
assign inner_compute_in0_lgxx_stencil[0] = lgxx_stencil_op_hcompute_cim_stencil_read[0];
assign inner_compute_in1_lgxy_stencil[0] = lgxy_stencil_op_hcompute_cim_stencil_read[0];
assign inner_compute_in2_lgyy_stencil[0] = lgyy_stencil_op_hcompute_cim_stencil_read[0];
hcompute_cim_stencil inner_compute (
    .out_cim_stencil(inner_compute_out_cim_stencil),
    .in0_lgxx_stencil(inner_compute_in0_lgxx_stencil),
    .in1_lgxy_stencil(inner_compute_in1_lgxy_stencil),
    .in2_lgyy_stencil(inner_compute_in2_lgyy_stencil)
);
assign cim_stencil_op_hcompute_cim_stencil_write[0] = inner_compute_out_cim_stencil;
endmodule

module corebit_reg #(
    parameter clk_posedge = 1,
    parameter init = 1
) (
    input clk,
    input in,
    output out
);
reg outReg = init;
always @(posedge clk) begin
  outReg <= in;
end
assign out = outReg;
endmodule

module hcompute_cim_output_stencil (
    output [15:0] out_cim_output_stencil,
    input [15:0] in0_cim_stencil [8:0]
);
assign out_cim_output_stencil = ((((((((($signed(in0_cim_stencil[0])) < ($signed(in0_cim_stencil[1]))) & (($signed(in0_cim_stencil[2])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[3])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[4])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[5])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[6])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[7])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[8])) < ($signed(in0_cim_stencil[1])))) & (($signed(16'h0001)) <= ($signed(in0_cim_stencil[1]))) ? 16'h00ff : 16'h0000;
endmodule

module cu_op_hcompute_cim_output_stencil (
    input clk,
    input [15:0] cim_stencil_op_hcompute_cim_output_stencil_read [8:0],
    output [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_cim_output_stencil;
wire [15:0] inner_compute_in0_cim_stencil [8:0];
assign inner_compute_in0_cim_stencil[8] = cim_stencil_op_hcompute_cim_output_stencil_read[8];
assign inner_compute_in0_cim_stencil[7] = cim_stencil_op_hcompute_cim_output_stencil_read[7];
assign inner_compute_in0_cim_stencil[6] = cim_stencil_op_hcompute_cim_output_stencil_read[6];
assign inner_compute_in0_cim_stencil[5] = cim_stencil_op_hcompute_cim_output_stencil_read[5];
assign inner_compute_in0_cim_stencil[4] = cim_stencil_op_hcompute_cim_output_stencil_read[4];
assign inner_compute_in0_cim_stencil[3] = cim_stencil_op_hcompute_cim_output_stencil_read[3];
assign inner_compute_in0_cim_stencil[2] = cim_stencil_op_hcompute_cim_output_stencil_read[2];
assign inner_compute_in0_cim_stencil[1] = cim_stencil_op_hcompute_cim_output_stencil_read[1];
assign inner_compute_in0_cim_stencil[0] = cim_stencil_op_hcompute_cim_output_stencil_read[0];
hcompute_cim_output_stencil inner_compute (
    .out_cim_output_stencil(inner_compute_out_cim_output_stencil),
    .in0_cim_stencil(inner_compute_in0_cim_stencil)
);
assign cim_output_stencil_op_hcompute_cim_output_stencil_write[0] = inner_compute_out_cim_output_stencil;
endmodule

module commonlib_smin__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = ($signed(in0)) <= ($signed(in1)) ? in0 : in1;
endmodule

module commonlib_smax__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = ($signed(in0)) >= ($signed(in1)) ? in0 : in1;
endmodule

module hcompute_grad_y_stencil (
    output [15:0] out_grad_y_stencil,
    input [15:0] in0_padded16_global_wrapper_stencil [5:0]
);
wire [15:0] smax_382_383_384_in0;
wire [15:0] smax_382_383_384_in1;
wire [15:0] smin_380_381_382_in0;
wire [15:0] smin_380_381_382_in1;
wire [15:0] smin_380_381_382_out;
assign smax_382_383_384_in0 = smin_380_381_382_out;
assign smax_382_383_384_in1 = 16'hff01;
commonlib_smax__width16 smax_382_383_384 (
    .in0(smax_382_383_384_in0),
    .in1(smax_382_383_384_in1),
    .out(out_grad_y_stencil)
);
assign smin_380_381_382_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[3] + (16'(in0_padded16_global_wrapper_stencil[4] + (16'(in0_padded16_global_wrapper_stencil[5] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[0])) - (16'(in0_padded16_global_wrapper_stencil[1] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[2]);
assign smin_380_381_382_in1 = 16'h00ff;
commonlib_smin__width16 smin_380_381_382 (
    .in0(smin_380_381_382_in0),
    .in1(smin_380_381_382_in1),
    .out(smin_380_381_382_out)
);
endmodule

module cu_op_hcompute_grad_y_stencil (
    input clk,
    input [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0],
    output [15:0] grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0]
);
wire [15:0] inner_compute_out_grad_y_stencil;
wire [15:0] inner_compute_in0_padded16_global_wrapper_stencil [5:0];
assign inner_compute_in0_padded16_global_wrapper_stencil[5] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[5];
assign inner_compute_in0_padded16_global_wrapper_stencil[4] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[4];
assign inner_compute_in0_padded16_global_wrapper_stencil[3] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[3];
assign inner_compute_in0_padded16_global_wrapper_stencil[2] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[2];
assign inner_compute_in0_padded16_global_wrapper_stencil[1] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[1];
assign inner_compute_in0_padded16_global_wrapper_stencil[0] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[0];
hcompute_grad_y_stencil inner_compute (
    .out_grad_y_stencil(inner_compute_out_grad_y_stencil),
    .in0_padded16_global_wrapper_stencil(inner_compute_in0_padded16_global_wrapper_stencil)
);
assign grad_y_stencil_op_hcompute_grad_y_stencil_write[0] = inner_compute_out_grad_y_stencil;
endmodule

module hcompute_grad_x_stencil (
    output [15:0] out_grad_x_stencil,
    input [15:0] in0_padded16_global_wrapper_stencil [5:0]
);
wire [15:0] smax_282_283_284_in0;
wire [15:0] smax_282_283_284_in1;
wire [15:0] smin_280_281_282_in0;
wire [15:0] smin_280_281_282_in1;
wire [15:0] smin_280_281_282_out;
assign smax_282_283_284_in0 = smin_280_281_282_out;
assign smax_282_283_284_in1 = 16'hff01;
commonlib_smax__width16 smax_282_283_284 (
    .in0(smax_282_283_284_in0),
    .in1(smax_282_283_284_in1),
    .out(out_grad_x_stencil)
);
assign smin_280_281_282_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[0] + (16'(in0_padded16_global_wrapper_stencil[1] + (16'(in0_padded16_global_wrapper_stencil[2] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[3])) - (16'(in0_padded16_global_wrapper_stencil[4] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[5]);
assign smin_280_281_282_in1 = 16'h00ff;
commonlib_smin__width16 smin_280_281_282 (
    .in0(smin_280_281_282_in0),
    .in1(smin_280_281_282_in1),
    .out(smin_280_281_282_out)
);
endmodule

module cu_op_hcompute_grad_x_stencil (
    input clk,
    input [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0],
    output [15:0] grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0]
);
wire [15:0] inner_compute_out_grad_x_stencil;
wire [15:0] inner_compute_in0_padded16_global_wrapper_stencil [5:0];
assign inner_compute_in0_padded16_global_wrapper_stencil[5] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[5];
assign inner_compute_in0_padded16_global_wrapper_stencil[4] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[4];
assign inner_compute_in0_padded16_global_wrapper_stencil[3] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[3];
assign inner_compute_in0_padded16_global_wrapper_stencil[2] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[2];
assign inner_compute_in0_padded16_global_wrapper_stencil[1] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[1];
assign inner_compute_in0_padded16_global_wrapper_stencil[0] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[0];
hcompute_grad_x_stencil inner_compute (
    .out_grad_x_stencil(inner_compute_out_grad_x_stencil),
    .in0_padded16_global_wrapper_stencil(inner_compute_in0_padded16_global_wrapper_stencil)
);
assign grad_x_stencil_op_hcompute_grad_x_stencil_write[0] = inner_compute_out_grad_x_stencil;
endmodule

module array_delay_U2246 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2247_in;
wire _U2247_clk;
wire [15:0] _U2247_out;
wire [15:0] _U2248_in;
wire _U2248_clk;
wire [15:0] _U2248_out;
wire [15:0] _U2249_in;
wire _U2249_clk;
wire [15:0] _U2249_out;
assign _U2247_in = in[0];
assign _U2247_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2247 (
    .in(_U2247_in),
    .clk(_U2247_clk),
    .out(_U2247_out)
);
assign _U2248_in = in[1];
assign _U2248_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2248 (
    .in(_U2248_in),
    .clk(_U2248_clk),
    .out(_U2248_out)
);
assign _U2249_in = in[2];
assign _U2249_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2249 (
    .in(_U2249_in),
    .clk(_U2249_clk),
    .out(_U2249_out)
);
assign out[2] = _U2249_out;
assign out[1] = _U2248_out;
assign out[0] = _U2247_out;
endmodule

module array_delay_U2242 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2243_in;
wire _U2243_clk;
wire [15:0] _U2243_out;
wire [15:0] _U2244_in;
wire _U2244_clk;
wire [15:0] _U2244_out;
wire [15:0] _U2245_in;
wire _U2245_clk;
wire [15:0] _U2245_out;
assign _U2243_in = in[0];
assign _U2243_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2243 (
    .in(_U2243_in),
    .clk(_U2243_clk),
    .out(_U2243_out)
);
assign _U2244_in = in[1];
assign _U2244_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2244 (
    .in(_U2244_in),
    .clk(_U2244_clk),
    .out(_U2244_out)
);
assign _U2245_in = in[2];
assign _U2245_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2245 (
    .in(_U2245_in),
    .clk(_U2245_clk),
    .out(_U2245_out)
);
assign out[2] = _U2245_out;
assign out[1] = _U2244_out;
assign out[0] = _U2243_out;
endmodule

module array_delay_U2237 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2238_in;
wire _U2238_clk;
wire [15:0] _U2238_out;
wire [15:0] _U2239_in;
wire _U2239_clk;
wire [15:0] _U2239_out;
wire [15:0] _U2240_in;
wire _U2240_clk;
wire [15:0] _U2240_out;
assign _U2238_in = in[0];
assign _U2238_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2238 (
    .in(_U2238_in),
    .clk(_U2238_clk),
    .out(_U2238_out)
);
assign _U2239_in = in[1];
assign _U2239_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2239 (
    .in(_U2239_in),
    .clk(_U2239_clk),
    .out(_U2239_out)
);
assign _U2240_in = in[2];
assign _U2240_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2240 (
    .in(_U2240_in),
    .clk(_U2240_clk),
    .out(_U2240_out)
);
assign out[2] = _U2240_out;
assign out[1] = _U2239_out;
assign out[0] = _U2238_out;
endmodule

module array_delay_U2231 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2232_in;
wire _U2232_clk;
wire [15:0] _U2232_out;
wire [15:0] _U2233_in;
wire _U2233_clk;
wire [15:0] _U2233_out;
wire [15:0] _U2234_in;
wire _U2234_clk;
wire [15:0] _U2234_out;
assign _U2232_in = in[0];
assign _U2232_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2232 (
    .in(_U2232_in),
    .clk(_U2232_clk),
    .out(_U2232_out)
);
assign _U2233_in = in[1];
assign _U2233_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2233 (
    .in(_U2233_in),
    .clk(_U2233_clk),
    .out(_U2233_out)
);
assign _U2234_in = in[2];
assign _U2234_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2234 (
    .in(_U2234_in),
    .clk(_U2234_clk),
    .out(_U2234_out)
);
assign out[2] = _U2234_out;
assign out[1] = _U2233_out;
assign out[0] = _U2232_out;
endmodule

module array_delay_U2208 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2209_in;
wire _U2209_clk;
wire [15:0] _U2209_out;
wire [15:0] _U2210_in;
wire _U2210_clk;
wire [15:0] _U2210_out;
wire [15:0] _U2211_in;
wire _U2211_clk;
wire [15:0] _U2211_out;
assign _U2209_in = in[0];
assign _U2209_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2209 (
    .in(_U2209_in),
    .clk(_U2209_clk),
    .out(_U2209_out)
);
assign _U2210_in = in[1];
assign _U2210_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2210 (
    .in(_U2210_in),
    .clk(_U2210_clk),
    .out(_U2210_out)
);
assign _U2211_in = in[2];
assign _U2211_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2211 (
    .in(_U2211_in),
    .clk(_U2211_clk),
    .out(_U2211_out)
);
assign out[2] = _U2211_out;
assign out[1] = _U2210_out;
assign out[0] = _U2209_out;
endmodule

module array_delay_U2204 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2205_in;
wire _U2205_clk;
wire [15:0] _U2205_out;
wire [15:0] _U2206_in;
wire _U2206_clk;
wire [15:0] _U2206_out;
wire [15:0] _U2207_in;
wire _U2207_clk;
wire [15:0] _U2207_out;
assign _U2205_in = in[0];
assign _U2205_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2205 (
    .in(_U2205_in),
    .clk(_U2205_clk),
    .out(_U2205_out)
);
assign _U2206_in = in[1];
assign _U2206_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2206 (
    .in(_U2206_in),
    .clk(_U2206_clk),
    .out(_U2206_out)
);
assign _U2207_in = in[2];
assign _U2207_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2207 (
    .in(_U2207_in),
    .clk(_U2207_clk),
    .out(_U2207_out)
);
assign out[2] = _U2207_out;
assign out[1] = _U2206_out;
assign out[0] = _U2205_out;
endmodule

module array_delay_U2199 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2200_in;
wire _U2200_clk;
wire [15:0] _U2200_out;
wire [15:0] _U2201_in;
wire _U2201_clk;
wire [15:0] _U2201_out;
wire [15:0] _U2202_in;
wire _U2202_clk;
wire [15:0] _U2202_out;
assign _U2200_in = in[0];
assign _U2200_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2200 (
    .in(_U2200_in),
    .clk(_U2200_clk),
    .out(_U2200_out)
);
assign _U2201_in = in[1];
assign _U2201_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2201 (
    .in(_U2201_in),
    .clk(_U2201_clk),
    .out(_U2201_out)
);
assign _U2202_in = in[2];
assign _U2202_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2202 (
    .in(_U2202_in),
    .clk(_U2202_clk),
    .out(_U2202_out)
);
assign out[2] = _U2202_out;
assign out[1] = _U2201_out;
assign out[0] = _U2200_out;
endmodule

module array_delay_U2193 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2194_in;
wire _U2194_clk;
wire [15:0] _U2194_out;
wire [15:0] _U2195_in;
wire _U2195_clk;
wire [15:0] _U2195_out;
wire [15:0] _U2196_in;
wire _U2196_clk;
wire [15:0] _U2196_out;
assign _U2194_in = in[0];
assign _U2194_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2194 (
    .in(_U2194_in),
    .clk(_U2194_clk),
    .out(_U2194_out)
);
assign _U2195_in = in[1];
assign _U2195_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2195 (
    .in(_U2195_in),
    .clk(_U2195_clk),
    .out(_U2195_out)
);
assign _U2196_in = in[2];
assign _U2196_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2196 (
    .in(_U2196_in),
    .clk(_U2196_clk),
    .out(_U2196_out)
);
assign out[2] = _U2196_out;
assign out[1] = _U2195_out;
assign out[0] = _U2194_out;
endmodule

module array_delay_U2170 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2171_in;
wire _U2171_clk;
wire [15:0] _U2171_out;
wire [15:0] _U2172_in;
wire _U2172_clk;
wire [15:0] _U2172_out;
wire [15:0] _U2173_in;
wire _U2173_clk;
wire [15:0] _U2173_out;
assign _U2171_in = in[0];
assign _U2171_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2171 (
    .in(_U2171_in),
    .clk(_U2171_clk),
    .out(_U2171_out)
);
assign _U2172_in = in[1];
assign _U2172_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2172 (
    .in(_U2172_in),
    .clk(_U2172_clk),
    .out(_U2172_out)
);
assign _U2173_in = in[2];
assign _U2173_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2173 (
    .in(_U2173_in),
    .clk(_U2173_clk),
    .out(_U2173_out)
);
assign out[2] = _U2173_out;
assign out[1] = _U2172_out;
assign out[0] = _U2171_out;
endmodule

module array_delay_U2166 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2167_in;
wire _U2167_clk;
wire [15:0] _U2167_out;
wire [15:0] _U2168_in;
wire _U2168_clk;
wire [15:0] _U2168_out;
wire [15:0] _U2169_in;
wire _U2169_clk;
wire [15:0] _U2169_out;
assign _U2167_in = in[0];
assign _U2167_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2167 (
    .in(_U2167_in),
    .clk(_U2167_clk),
    .out(_U2167_out)
);
assign _U2168_in = in[1];
assign _U2168_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2168 (
    .in(_U2168_in),
    .clk(_U2168_clk),
    .out(_U2168_out)
);
assign _U2169_in = in[2];
assign _U2169_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2169 (
    .in(_U2169_in),
    .clk(_U2169_clk),
    .out(_U2169_out)
);
assign out[2] = _U2169_out;
assign out[1] = _U2168_out;
assign out[0] = _U2167_out;
endmodule

module array_delay_U2161 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2162_in;
wire _U2162_clk;
wire [15:0] _U2162_out;
wire [15:0] _U2163_in;
wire _U2163_clk;
wire [15:0] _U2163_out;
wire [15:0] _U2164_in;
wire _U2164_clk;
wire [15:0] _U2164_out;
assign _U2162_in = in[0];
assign _U2162_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2162 (
    .in(_U2162_in),
    .clk(_U2162_clk),
    .out(_U2162_out)
);
assign _U2163_in = in[1];
assign _U2163_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2163 (
    .in(_U2163_in),
    .clk(_U2163_clk),
    .out(_U2163_out)
);
assign _U2164_in = in[2];
assign _U2164_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2164 (
    .in(_U2164_in),
    .clk(_U2164_clk),
    .out(_U2164_out)
);
assign out[2] = _U2164_out;
assign out[1] = _U2163_out;
assign out[0] = _U2162_out;
endmodule

module array_delay_U2155 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2156_in;
wire _U2156_clk;
wire [15:0] _U2156_out;
wire [15:0] _U2157_in;
wire _U2157_clk;
wire [15:0] _U2157_out;
wire [15:0] _U2158_in;
wire _U2158_clk;
wire [15:0] _U2158_out;
assign _U2156_in = in[0];
assign _U2156_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2156 (
    .in(_U2156_in),
    .clk(_U2156_clk),
    .out(_U2156_out)
);
assign _U2157_in = in[1];
assign _U2157_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2157 (
    .in(_U2157_in),
    .clk(_U2157_clk),
    .out(_U2157_out)
);
assign _U2158_in = in[2];
assign _U2158_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2158 (
    .in(_U2158_in),
    .clk(_U2158_clk),
    .out(_U2158_out)
);
assign out[2] = _U2158_out;
assign out[1] = _U2157_out;
assign out[0] = _U2156_out;
endmodule

module array_delay_U2132 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2133_in;
wire _U2133_clk;
wire [15:0] _U2133_out;
wire [15:0] _U2134_in;
wire _U2134_clk;
wire [15:0] _U2134_out;
wire [15:0] _U2135_in;
wire _U2135_clk;
wire [15:0] _U2135_out;
assign _U2133_in = in[0];
assign _U2133_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2133 (
    .in(_U2133_in),
    .clk(_U2133_clk),
    .out(_U2133_out)
);
assign _U2134_in = in[1];
assign _U2134_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2134 (
    .in(_U2134_in),
    .clk(_U2134_clk),
    .out(_U2134_out)
);
assign _U2135_in = in[2];
assign _U2135_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2135 (
    .in(_U2135_in),
    .clk(_U2135_clk),
    .out(_U2135_out)
);
assign out[2] = _U2135_out;
assign out[1] = _U2134_out;
assign out[0] = _U2133_out;
endmodule

module array_delay_U2128 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2129_in;
wire _U2129_clk;
wire [15:0] _U2129_out;
wire [15:0] _U2130_in;
wire _U2130_clk;
wire [15:0] _U2130_out;
wire [15:0] _U2131_in;
wire _U2131_clk;
wire [15:0] _U2131_out;
assign _U2129_in = in[0];
assign _U2129_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2129 (
    .in(_U2129_in),
    .clk(_U2129_clk),
    .out(_U2129_out)
);
assign _U2130_in = in[1];
assign _U2130_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2130 (
    .in(_U2130_in),
    .clk(_U2130_clk),
    .out(_U2130_out)
);
assign _U2131_in = in[2];
assign _U2131_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2131 (
    .in(_U2131_in),
    .clk(_U2131_clk),
    .out(_U2131_out)
);
assign out[2] = _U2131_out;
assign out[1] = _U2130_out;
assign out[0] = _U2129_out;
endmodule

module array_delay_U2123 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2124_in;
wire _U2124_clk;
wire [15:0] _U2124_out;
wire [15:0] _U2125_in;
wire _U2125_clk;
wire [15:0] _U2125_out;
wire [15:0] _U2126_in;
wire _U2126_clk;
wire [15:0] _U2126_out;
assign _U2124_in = in[0];
assign _U2124_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2124 (
    .in(_U2124_in),
    .clk(_U2124_clk),
    .out(_U2124_out)
);
assign _U2125_in = in[1];
assign _U2125_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2125 (
    .in(_U2125_in),
    .clk(_U2125_clk),
    .out(_U2125_out)
);
assign _U2126_in = in[2];
assign _U2126_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2126 (
    .in(_U2126_in),
    .clk(_U2126_clk),
    .out(_U2126_out)
);
assign out[2] = _U2126_out;
assign out[1] = _U2125_out;
assign out[0] = _U2124_out;
endmodule

module array_delay_U2117 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2118_in;
wire _U2118_clk;
wire [15:0] _U2118_out;
wire [15:0] _U2119_in;
wire _U2119_clk;
wire [15:0] _U2119_out;
wire [15:0] _U2120_in;
wire _U2120_clk;
wire [15:0] _U2120_out;
assign _U2118_in = in[0];
assign _U2118_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2118 (
    .in(_U2118_in),
    .clk(_U2118_clk),
    .out(_U2118_out)
);
assign _U2119_in = in[1];
assign _U2119_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2119 (
    .in(_U2119_in),
    .clk(_U2119_clk),
    .out(_U2119_out)
);
assign _U2120_in = in[2];
assign _U2120_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2120 (
    .in(_U2120_in),
    .clk(_U2120_clk),
    .out(_U2120_out)
);
assign out[2] = _U2120_out;
assign out[1] = _U2119_out;
assign out[0] = _U2118_out;
endmodule

module array_delay_U2094 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2095_in;
wire _U2095_clk;
wire [15:0] _U2095_out;
wire [15:0] _U2096_in;
wire _U2096_clk;
wire [15:0] _U2096_out;
wire [15:0] _U2097_in;
wire _U2097_clk;
wire [15:0] _U2097_out;
assign _U2095_in = in[0];
assign _U2095_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2095 (
    .in(_U2095_in),
    .clk(_U2095_clk),
    .out(_U2095_out)
);
assign _U2096_in = in[1];
assign _U2096_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2096 (
    .in(_U2096_in),
    .clk(_U2096_clk),
    .out(_U2096_out)
);
assign _U2097_in = in[2];
assign _U2097_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2097 (
    .in(_U2097_in),
    .clk(_U2097_clk),
    .out(_U2097_out)
);
assign out[2] = _U2097_out;
assign out[1] = _U2096_out;
assign out[0] = _U2095_out;
endmodule

module array_delay_U2090 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2091_in;
wire _U2091_clk;
wire [15:0] _U2091_out;
wire [15:0] _U2092_in;
wire _U2092_clk;
wire [15:0] _U2092_out;
wire [15:0] _U2093_in;
wire _U2093_clk;
wire [15:0] _U2093_out;
assign _U2091_in = in[0];
assign _U2091_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2091 (
    .in(_U2091_in),
    .clk(_U2091_clk),
    .out(_U2091_out)
);
assign _U2092_in = in[1];
assign _U2092_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2092 (
    .in(_U2092_in),
    .clk(_U2092_clk),
    .out(_U2092_out)
);
assign _U2093_in = in[2];
assign _U2093_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2093 (
    .in(_U2093_in),
    .clk(_U2093_clk),
    .out(_U2093_out)
);
assign out[2] = _U2093_out;
assign out[1] = _U2092_out;
assign out[0] = _U2091_out;
endmodule

module array_delay_U2068 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2069_in;
wire _U2069_clk;
wire [15:0] _U2069_out;
wire [15:0] _U2070_in;
wire _U2070_clk;
wire [15:0] _U2070_out;
wire [15:0] _U2071_in;
wire _U2071_clk;
wire [15:0] _U2071_out;
assign _U2069_in = in[0];
assign _U2069_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2069 (
    .in(_U2069_in),
    .clk(_U2069_clk),
    .out(_U2069_out)
);
assign _U2070_in = in[1];
assign _U2070_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2070 (
    .in(_U2070_in),
    .clk(_U2070_clk),
    .out(_U2070_out)
);
assign _U2071_in = in[2];
assign _U2071_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2071 (
    .in(_U2071_in),
    .clk(_U2071_clk),
    .out(_U2071_out)
);
assign out[2] = _U2071_out;
assign out[1] = _U2070_out;
assign out[0] = _U2069_out;
endmodule

module array_delay_U2064 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2065_in;
wire _U2065_clk;
wire [15:0] _U2065_out;
wire [15:0] _U2066_in;
wire _U2066_clk;
wire [15:0] _U2066_out;
wire [15:0] _U2067_in;
wire _U2067_clk;
wire [15:0] _U2067_out;
assign _U2065_in = in[0];
assign _U2065_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2065 (
    .in(_U2065_in),
    .clk(_U2065_clk),
    .out(_U2065_out)
);
assign _U2066_in = in[1];
assign _U2066_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2066 (
    .in(_U2066_in),
    .clk(_U2066_clk),
    .out(_U2066_out)
);
assign _U2067_in = in[2];
assign _U2067_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2067 (
    .in(_U2067_in),
    .clk(_U2067_clk),
    .out(_U2067_out)
);
assign out[2] = _U2067_out;
assign out[1] = _U2066_out;
assign out[0] = _U2065_out;
endmodule

module array_delay_U2059 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2060_in;
wire _U2060_clk;
wire [15:0] _U2060_out;
wire [15:0] _U2061_in;
wire _U2061_clk;
wire [15:0] _U2061_out;
wire [15:0] _U2062_in;
wire _U2062_clk;
wire [15:0] _U2062_out;
assign _U2060_in = in[0];
assign _U2060_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2060 (
    .in(_U2060_in),
    .clk(_U2060_clk),
    .out(_U2060_out)
);
assign _U2061_in = in[1];
assign _U2061_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2061 (
    .in(_U2061_in),
    .clk(_U2061_clk),
    .out(_U2061_out)
);
assign _U2062_in = in[2];
assign _U2062_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2062 (
    .in(_U2062_in),
    .clk(_U2062_clk),
    .out(_U2062_out)
);
assign out[2] = _U2062_out;
assign out[1] = _U2061_out;
assign out[0] = _U2060_out;
endmodule

module array_delay_U2053 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2054_in;
wire _U2054_clk;
wire [15:0] _U2054_out;
wire [15:0] _U2055_in;
wire _U2055_clk;
wire [15:0] _U2055_out;
wire [15:0] _U2056_in;
wire _U2056_clk;
wire [15:0] _U2056_out;
assign _U2054_in = in[0];
assign _U2054_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2054 (
    .in(_U2054_in),
    .clk(_U2054_clk),
    .out(_U2054_out)
);
assign _U2055_in = in[1];
assign _U2055_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2055 (
    .in(_U2055_in),
    .clk(_U2055_clk),
    .out(_U2055_out)
);
assign _U2056_in = in[2];
assign _U2056_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2056 (
    .in(_U2056_in),
    .clk(_U2056_clk),
    .out(_U2056_out)
);
assign out[2] = _U2056_out;
assign out[1] = _U2055_out;
assign out[0] = _U2054_out;
endmodule

module array_delay_U2030 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2031_in;
wire _U2031_clk;
wire [15:0] _U2031_out;
wire [15:0] _U2032_in;
wire _U2032_clk;
wire [15:0] _U2032_out;
wire [15:0] _U2033_in;
wire _U2033_clk;
wire [15:0] _U2033_out;
assign _U2031_in = in[0];
assign _U2031_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2031 (
    .in(_U2031_in),
    .clk(_U2031_clk),
    .out(_U2031_out)
);
assign _U2032_in = in[1];
assign _U2032_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2032 (
    .in(_U2032_in),
    .clk(_U2032_clk),
    .out(_U2032_out)
);
assign _U2033_in = in[2];
assign _U2033_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2033 (
    .in(_U2033_in),
    .clk(_U2033_clk),
    .out(_U2033_out)
);
assign out[2] = _U2033_out;
assign out[1] = _U2032_out;
assign out[0] = _U2031_out;
endmodule

module array_delay_U2026 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2027_in;
wire _U2027_clk;
wire [15:0] _U2027_out;
wire [15:0] _U2028_in;
wire _U2028_clk;
wire [15:0] _U2028_out;
wire [15:0] _U2029_in;
wire _U2029_clk;
wire [15:0] _U2029_out;
assign _U2027_in = in[0];
assign _U2027_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2027 (
    .in(_U2027_in),
    .clk(_U2027_clk),
    .out(_U2027_out)
);
assign _U2028_in = in[1];
assign _U2028_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2028 (
    .in(_U2028_in),
    .clk(_U2028_clk),
    .out(_U2028_out)
);
assign _U2029_in = in[2];
assign _U2029_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2029 (
    .in(_U2029_in),
    .clk(_U2029_clk),
    .out(_U2029_out)
);
assign out[2] = _U2029_out;
assign out[1] = _U2028_out;
assign out[0] = _U2027_out;
endmodule

module array_delay_U2021 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2022_in;
wire _U2022_clk;
wire [15:0] _U2022_out;
wire [15:0] _U2023_in;
wire _U2023_clk;
wire [15:0] _U2023_out;
wire [15:0] _U2024_in;
wire _U2024_clk;
wire [15:0] _U2024_out;
assign _U2022_in = in[0];
assign _U2022_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2022 (
    .in(_U2022_in),
    .clk(_U2022_clk),
    .out(_U2022_out)
);
assign _U2023_in = in[1];
assign _U2023_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2023 (
    .in(_U2023_in),
    .clk(_U2023_clk),
    .out(_U2023_out)
);
assign _U2024_in = in[2];
assign _U2024_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2024 (
    .in(_U2024_in),
    .clk(_U2024_clk),
    .out(_U2024_out)
);
assign out[2] = _U2024_out;
assign out[1] = _U2023_out;
assign out[0] = _U2022_out;
endmodule

module array_delay_U2015 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2016_in;
wire _U2016_clk;
wire [15:0] _U2016_out;
wire [15:0] _U2017_in;
wire _U2017_clk;
wire [15:0] _U2017_out;
wire [15:0] _U2018_in;
wire _U2018_clk;
wire [15:0] _U2018_out;
assign _U2016_in = in[0];
assign _U2016_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2016 (
    .in(_U2016_in),
    .clk(_U2016_clk),
    .out(_U2016_out)
);
assign _U2017_in = in[1];
assign _U2017_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2017 (
    .in(_U2017_in),
    .clk(_U2017_clk),
    .out(_U2017_out)
);
assign _U2018_in = in[2];
assign _U2018_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2018 (
    .in(_U2018_in),
    .clk(_U2018_clk),
    .out(_U2018_out)
);
assign out[2] = _U2018_out;
assign out[1] = _U2017_out;
assign out[0] = _U2016_out;
endmodule

module array_delay_U1992 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1993_in;
wire _U1993_clk;
wire [15:0] _U1993_out;
wire [15:0] _U1994_in;
wire _U1994_clk;
wire [15:0] _U1994_out;
wire [15:0] _U1995_in;
wire _U1995_clk;
wire [15:0] _U1995_out;
assign _U1993_in = in[0];
assign _U1993_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1993 (
    .in(_U1993_in),
    .clk(_U1993_clk),
    .out(_U1993_out)
);
assign _U1994_in = in[1];
assign _U1994_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1994 (
    .in(_U1994_in),
    .clk(_U1994_clk),
    .out(_U1994_out)
);
assign _U1995_in = in[2];
assign _U1995_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1995 (
    .in(_U1995_in),
    .clk(_U1995_clk),
    .out(_U1995_out)
);
assign out[2] = _U1995_out;
assign out[1] = _U1994_out;
assign out[0] = _U1993_out;
endmodule

module array_delay_U1988 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1989_in;
wire _U1989_clk;
wire [15:0] _U1989_out;
wire [15:0] _U1990_in;
wire _U1990_clk;
wire [15:0] _U1990_out;
wire [15:0] _U1991_in;
wire _U1991_clk;
wire [15:0] _U1991_out;
assign _U1989_in = in[0];
assign _U1989_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1989 (
    .in(_U1989_in),
    .clk(_U1989_clk),
    .out(_U1989_out)
);
assign _U1990_in = in[1];
assign _U1990_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1990 (
    .in(_U1990_in),
    .clk(_U1990_clk),
    .out(_U1990_out)
);
assign _U1991_in = in[2];
assign _U1991_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1991 (
    .in(_U1991_in),
    .clk(_U1991_clk),
    .out(_U1991_out)
);
assign out[2] = _U1991_out;
assign out[1] = _U1990_out;
assign out[0] = _U1989_out;
endmodule

module array_delay_U1966 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1967_in;
wire _U1967_clk;
wire [15:0] _U1967_out;
wire [15:0] _U1968_in;
wire _U1968_clk;
wire [15:0] _U1968_out;
wire [15:0] _U1969_in;
wire _U1969_clk;
wire [15:0] _U1969_out;
assign _U1967_in = in[0];
assign _U1967_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1967 (
    .in(_U1967_in),
    .clk(_U1967_clk),
    .out(_U1967_out)
);
assign _U1968_in = in[1];
assign _U1968_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1968 (
    .in(_U1968_in),
    .clk(_U1968_clk),
    .out(_U1968_out)
);
assign _U1969_in = in[2];
assign _U1969_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1969 (
    .in(_U1969_in),
    .clk(_U1969_clk),
    .out(_U1969_out)
);
assign out[2] = _U1969_out;
assign out[1] = _U1968_out;
assign out[0] = _U1967_out;
endmodule

module array_delay_U1962 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1963_in;
wire _U1963_clk;
wire [15:0] _U1963_out;
wire [15:0] _U1964_in;
wire _U1964_clk;
wire [15:0] _U1964_out;
wire [15:0] _U1965_in;
wire _U1965_clk;
wire [15:0] _U1965_out;
assign _U1963_in = in[0];
assign _U1963_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1963 (
    .in(_U1963_in),
    .clk(_U1963_clk),
    .out(_U1963_out)
);
assign _U1964_in = in[1];
assign _U1964_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1964 (
    .in(_U1964_in),
    .clk(_U1964_clk),
    .out(_U1964_out)
);
assign _U1965_in = in[2];
assign _U1965_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1965 (
    .in(_U1965_in),
    .clk(_U1965_clk),
    .out(_U1965_out)
);
assign out[2] = _U1965_out;
assign out[1] = _U1964_out;
assign out[0] = _U1963_out;
endmodule

module array_delay_U1957 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1958_in;
wire _U1958_clk;
wire [15:0] _U1958_out;
wire [15:0] _U1959_in;
wire _U1959_clk;
wire [15:0] _U1959_out;
wire [15:0] _U1960_in;
wire _U1960_clk;
wire [15:0] _U1960_out;
assign _U1958_in = in[0];
assign _U1958_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1958 (
    .in(_U1958_in),
    .clk(_U1958_clk),
    .out(_U1958_out)
);
assign _U1959_in = in[1];
assign _U1959_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1959 (
    .in(_U1959_in),
    .clk(_U1959_clk),
    .out(_U1959_out)
);
assign _U1960_in = in[2];
assign _U1960_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1960 (
    .in(_U1960_in),
    .clk(_U1960_clk),
    .out(_U1960_out)
);
assign out[2] = _U1960_out;
assign out[1] = _U1959_out;
assign out[0] = _U1958_out;
endmodule

module array_delay_U1951 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1952_in;
wire _U1952_clk;
wire [15:0] _U1952_out;
wire [15:0] _U1953_in;
wire _U1953_clk;
wire [15:0] _U1953_out;
wire [15:0] _U1954_in;
wire _U1954_clk;
wire [15:0] _U1954_out;
assign _U1952_in = in[0];
assign _U1952_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1952 (
    .in(_U1952_in),
    .clk(_U1952_clk),
    .out(_U1952_out)
);
assign _U1953_in = in[1];
assign _U1953_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1953 (
    .in(_U1953_in),
    .clk(_U1953_clk),
    .out(_U1953_out)
);
assign _U1954_in = in[2];
assign _U1954_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1954 (
    .in(_U1954_in),
    .clk(_U1954_clk),
    .out(_U1954_out)
);
assign out[2] = _U1954_out;
assign out[1] = _U1953_out;
assign out[0] = _U1952_out;
endmodule

module array_delay_U1928 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1929_in;
wire _U1929_clk;
wire [15:0] _U1929_out;
wire [15:0] _U1930_in;
wire _U1930_clk;
wire [15:0] _U1930_out;
wire [15:0] _U1931_in;
wire _U1931_clk;
wire [15:0] _U1931_out;
assign _U1929_in = in[0];
assign _U1929_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1929 (
    .in(_U1929_in),
    .clk(_U1929_clk),
    .out(_U1929_out)
);
assign _U1930_in = in[1];
assign _U1930_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1930 (
    .in(_U1930_in),
    .clk(_U1930_clk),
    .out(_U1930_out)
);
assign _U1931_in = in[2];
assign _U1931_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1931 (
    .in(_U1931_in),
    .clk(_U1931_clk),
    .out(_U1931_out)
);
assign out[2] = _U1931_out;
assign out[1] = _U1930_out;
assign out[0] = _U1929_out;
endmodule

module array_delay_U1924 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1925_in;
wire _U1925_clk;
wire [15:0] _U1925_out;
wire [15:0] _U1926_in;
wire _U1926_clk;
wire [15:0] _U1926_out;
wire [15:0] _U1927_in;
wire _U1927_clk;
wire [15:0] _U1927_out;
assign _U1925_in = in[0];
assign _U1925_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1925 (
    .in(_U1925_in),
    .clk(_U1925_clk),
    .out(_U1925_out)
);
assign _U1926_in = in[1];
assign _U1926_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1926 (
    .in(_U1926_in),
    .clk(_U1926_clk),
    .out(_U1926_out)
);
assign _U1927_in = in[2];
assign _U1927_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1927 (
    .in(_U1927_in),
    .clk(_U1927_clk),
    .out(_U1927_out)
);
assign out[2] = _U1927_out;
assign out[1] = _U1926_out;
assign out[0] = _U1925_out;
endmodule

module array_delay_U1919 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1920_in;
wire _U1920_clk;
wire [15:0] _U1920_out;
wire [15:0] _U1921_in;
wire _U1921_clk;
wire [15:0] _U1921_out;
wire [15:0] _U1922_in;
wire _U1922_clk;
wire [15:0] _U1922_out;
assign _U1920_in = in[0];
assign _U1920_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1920 (
    .in(_U1920_in),
    .clk(_U1920_clk),
    .out(_U1920_out)
);
assign _U1921_in = in[1];
assign _U1921_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1921 (
    .in(_U1921_in),
    .clk(_U1921_clk),
    .out(_U1921_out)
);
assign _U1922_in = in[2];
assign _U1922_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1922 (
    .in(_U1922_in),
    .clk(_U1922_clk),
    .out(_U1922_out)
);
assign out[2] = _U1922_out;
assign out[1] = _U1921_out;
assign out[0] = _U1920_out;
endmodule

module array_delay_U1913 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1914_in;
wire _U1914_clk;
wire [15:0] _U1914_out;
wire [15:0] _U1915_in;
wire _U1915_clk;
wire [15:0] _U1915_out;
wire [15:0] _U1916_in;
wire _U1916_clk;
wire [15:0] _U1916_out;
assign _U1914_in = in[0];
assign _U1914_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1914 (
    .in(_U1914_in),
    .clk(_U1914_clk),
    .out(_U1914_out)
);
assign _U1915_in = in[1];
assign _U1915_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1915 (
    .in(_U1915_in),
    .clk(_U1915_clk),
    .out(_U1915_out)
);
assign _U1916_in = in[2];
assign _U1916_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1916 (
    .in(_U1916_in),
    .clk(_U1916_clk),
    .out(_U1916_out)
);
assign out[2] = _U1916_out;
assign out[1] = _U1915_out;
assign out[0] = _U1914_out;
endmodule

module array_delay_U1890 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1891_in;
wire _U1891_clk;
wire [15:0] _U1891_out;
wire [15:0] _U1892_in;
wire _U1892_clk;
wire [15:0] _U1892_out;
wire [15:0] _U1893_in;
wire _U1893_clk;
wire [15:0] _U1893_out;
assign _U1891_in = in[0];
assign _U1891_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1891 (
    .in(_U1891_in),
    .clk(_U1891_clk),
    .out(_U1891_out)
);
assign _U1892_in = in[1];
assign _U1892_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1892 (
    .in(_U1892_in),
    .clk(_U1892_clk),
    .out(_U1892_out)
);
assign _U1893_in = in[2];
assign _U1893_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1893 (
    .in(_U1893_in),
    .clk(_U1893_clk),
    .out(_U1893_out)
);
assign out[2] = _U1893_out;
assign out[1] = _U1892_out;
assign out[0] = _U1891_out;
endmodule

module array_delay_U1886 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1887_in;
wire _U1887_clk;
wire [15:0] _U1887_out;
wire [15:0] _U1888_in;
wire _U1888_clk;
wire [15:0] _U1888_out;
wire [15:0] _U1889_in;
wire _U1889_clk;
wire [15:0] _U1889_out;
assign _U1887_in = in[0];
assign _U1887_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1887 (
    .in(_U1887_in),
    .clk(_U1887_clk),
    .out(_U1887_out)
);
assign _U1888_in = in[1];
assign _U1888_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1888 (
    .in(_U1888_in),
    .clk(_U1888_clk),
    .out(_U1888_out)
);
assign _U1889_in = in[2];
assign _U1889_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1889 (
    .in(_U1889_in),
    .clk(_U1889_clk),
    .out(_U1889_out)
);
assign out[2] = _U1889_out;
assign out[1] = _U1888_out;
assign out[0] = _U1887_out;
endmodule

module array_delay_U1881 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1882_in;
wire _U1882_clk;
wire [15:0] _U1882_out;
wire [15:0] _U1883_in;
wire _U1883_clk;
wire [15:0] _U1883_out;
wire [15:0] _U1884_in;
wire _U1884_clk;
wire [15:0] _U1884_out;
assign _U1882_in = in[0];
assign _U1882_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1882 (
    .in(_U1882_in),
    .clk(_U1882_clk),
    .out(_U1882_out)
);
assign _U1883_in = in[1];
assign _U1883_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1883 (
    .in(_U1883_in),
    .clk(_U1883_clk),
    .out(_U1883_out)
);
assign _U1884_in = in[2];
assign _U1884_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1884 (
    .in(_U1884_in),
    .clk(_U1884_clk),
    .out(_U1884_out)
);
assign out[2] = _U1884_out;
assign out[1] = _U1883_out;
assign out[0] = _U1882_out;
endmodule

module array_delay_U1875 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1876_in;
wire _U1876_clk;
wire [15:0] _U1876_out;
wire [15:0] _U1877_in;
wire _U1877_clk;
wire [15:0] _U1877_out;
wire [15:0] _U1878_in;
wire _U1878_clk;
wire [15:0] _U1878_out;
assign _U1876_in = in[0];
assign _U1876_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1876 (
    .in(_U1876_in),
    .clk(_U1876_clk),
    .out(_U1876_out)
);
assign _U1877_in = in[1];
assign _U1877_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1877 (
    .in(_U1877_in),
    .clk(_U1877_clk),
    .out(_U1877_out)
);
assign _U1878_in = in[2];
assign _U1878_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1878 (
    .in(_U1878_in),
    .clk(_U1878_clk),
    .out(_U1878_out)
);
assign out[2] = _U1878_out;
assign out[1] = _U1877_out;
assign out[0] = _U1876_out;
endmodule

module array_delay_U1852 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1853_in;
wire _U1853_clk;
wire [15:0] _U1853_out;
wire [15:0] _U1854_in;
wire _U1854_clk;
wire [15:0] _U1854_out;
wire [15:0] _U1855_in;
wire _U1855_clk;
wire [15:0] _U1855_out;
assign _U1853_in = in[0];
assign _U1853_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1853 (
    .in(_U1853_in),
    .clk(_U1853_clk),
    .out(_U1853_out)
);
assign _U1854_in = in[1];
assign _U1854_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1854 (
    .in(_U1854_in),
    .clk(_U1854_clk),
    .out(_U1854_out)
);
assign _U1855_in = in[2];
assign _U1855_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1855 (
    .in(_U1855_in),
    .clk(_U1855_clk),
    .out(_U1855_out)
);
assign out[2] = _U1855_out;
assign out[1] = _U1854_out;
assign out[0] = _U1853_out;
endmodule

module array_delay_U1848 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1849_in;
wire _U1849_clk;
wire [15:0] _U1849_out;
wire [15:0] _U1850_in;
wire _U1850_clk;
wire [15:0] _U1850_out;
wire [15:0] _U1851_in;
wire _U1851_clk;
wire [15:0] _U1851_out;
assign _U1849_in = in[0];
assign _U1849_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1849 (
    .in(_U1849_in),
    .clk(_U1849_clk),
    .out(_U1849_out)
);
assign _U1850_in = in[1];
assign _U1850_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1850 (
    .in(_U1850_in),
    .clk(_U1850_clk),
    .out(_U1850_out)
);
assign _U1851_in = in[2];
assign _U1851_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1851 (
    .in(_U1851_in),
    .clk(_U1851_clk),
    .out(_U1851_out)
);
assign out[2] = _U1851_out;
assign out[1] = _U1850_out;
assign out[0] = _U1849_out;
endmodule

module array_delay_U1826 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1827_in;
wire _U1827_clk;
wire [15:0] _U1827_out;
wire [15:0] _U1828_in;
wire _U1828_clk;
wire [15:0] _U1828_out;
wire [15:0] _U1829_in;
wire _U1829_clk;
wire [15:0] _U1829_out;
assign _U1827_in = in[0];
assign _U1827_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1827 (
    .in(_U1827_in),
    .clk(_U1827_clk),
    .out(_U1827_out)
);
assign _U1828_in = in[1];
assign _U1828_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1828 (
    .in(_U1828_in),
    .clk(_U1828_clk),
    .out(_U1828_out)
);
assign _U1829_in = in[2];
assign _U1829_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1829 (
    .in(_U1829_in),
    .clk(_U1829_clk),
    .out(_U1829_out)
);
assign out[2] = _U1829_out;
assign out[1] = _U1828_out;
assign out[0] = _U1827_out;
endmodule

module array_delay_U1822 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1823_in;
wire _U1823_clk;
wire [15:0] _U1823_out;
wire [15:0] _U1824_in;
wire _U1824_clk;
wire [15:0] _U1824_out;
wire [15:0] _U1825_in;
wire _U1825_clk;
wire [15:0] _U1825_out;
assign _U1823_in = in[0];
assign _U1823_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1823 (
    .in(_U1823_in),
    .clk(_U1823_clk),
    .out(_U1823_out)
);
assign _U1824_in = in[1];
assign _U1824_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1824 (
    .in(_U1824_in),
    .clk(_U1824_clk),
    .out(_U1824_out)
);
assign _U1825_in = in[2];
assign _U1825_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1825 (
    .in(_U1825_in),
    .clk(_U1825_clk),
    .out(_U1825_out)
);
assign out[2] = _U1825_out;
assign out[1] = _U1824_out;
assign out[0] = _U1823_out;
endmodule

module array_delay_U1817 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1818_in;
wire _U1818_clk;
wire [15:0] _U1818_out;
wire [15:0] _U1819_in;
wire _U1819_clk;
wire [15:0] _U1819_out;
wire [15:0] _U1820_in;
wire _U1820_clk;
wire [15:0] _U1820_out;
assign _U1818_in = in[0];
assign _U1818_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1818 (
    .in(_U1818_in),
    .clk(_U1818_clk),
    .out(_U1818_out)
);
assign _U1819_in = in[1];
assign _U1819_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1819 (
    .in(_U1819_in),
    .clk(_U1819_clk),
    .out(_U1819_out)
);
assign _U1820_in = in[2];
assign _U1820_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1820 (
    .in(_U1820_in),
    .clk(_U1820_clk),
    .out(_U1820_out)
);
assign out[2] = _U1820_out;
assign out[1] = _U1819_out;
assign out[0] = _U1818_out;
endmodule

module array_delay_U1811 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1812_in;
wire _U1812_clk;
wire [15:0] _U1812_out;
wire [15:0] _U1813_in;
wire _U1813_clk;
wire [15:0] _U1813_out;
wire [15:0] _U1814_in;
wire _U1814_clk;
wire [15:0] _U1814_out;
assign _U1812_in = in[0];
assign _U1812_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1812 (
    .in(_U1812_in),
    .clk(_U1812_clk),
    .out(_U1812_out)
);
assign _U1813_in = in[1];
assign _U1813_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1813 (
    .in(_U1813_in),
    .clk(_U1813_clk),
    .out(_U1813_out)
);
assign _U1814_in = in[2];
assign _U1814_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1814 (
    .in(_U1814_in),
    .clk(_U1814_clk),
    .out(_U1814_out)
);
assign out[2] = _U1814_out;
assign out[1] = _U1813_out;
assign out[0] = _U1812_out;
endmodule

module array_delay_U1788 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1789_in;
wire _U1789_clk;
wire [15:0] _U1789_out;
wire [15:0] _U1790_in;
wire _U1790_clk;
wire [15:0] _U1790_out;
wire [15:0] _U1791_in;
wire _U1791_clk;
wire [15:0] _U1791_out;
assign _U1789_in = in[0];
assign _U1789_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1789 (
    .in(_U1789_in),
    .clk(_U1789_clk),
    .out(_U1789_out)
);
assign _U1790_in = in[1];
assign _U1790_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1790 (
    .in(_U1790_in),
    .clk(_U1790_clk),
    .out(_U1790_out)
);
assign _U1791_in = in[2];
assign _U1791_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1791 (
    .in(_U1791_in),
    .clk(_U1791_clk),
    .out(_U1791_out)
);
assign out[2] = _U1791_out;
assign out[1] = _U1790_out;
assign out[0] = _U1789_out;
endmodule

module array_delay_U1784 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1785_in;
wire _U1785_clk;
wire [15:0] _U1785_out;
wire [15:0] _U1786_in;
wire _U1786_clk;
wire [15:0] _U1786_out;
wire [15:0] _U1787_in;
wire _U1787_clk;
wire [15:0] _U1787_out;
assign _U1785_in = in[0];
assign _U1785_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1785 (
    .in(_U1785_in),
    .clk(_U1785_clk),
    .out(_U1785_out)
);
assign _U1786_in = in[1];
assign _U1786_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1786 (
    .in(_U1786_in),
    .clk(_U1786_clk),
    .out(_U1786_out)
);
assign _U1787_in = in[2];
assign _U1787_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1787 (
    .in(_U1787_in),
    .clk(_U1787_clk),
    .out(_U1787_out)
);
assign out[2] = _U1787_out;
assign out[1] = _U1786_out;
assign out[0] = _U1785_out;
endmodule

module array_delay_U1779 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1780_in;
wire _U1780_clk;
wire [15:0] _U1780_out;
wire [15:0] _U1781_in;
wire _U1781_clk;
wire [15:0] _U1781_out;
wire [15:0] _U1782_in;
wire _U1782_clk;
wire [15:0] _U1782_out;
assign _U1780_in = in[0];
assign _U1780_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1780 (
    .in(_U1780_in),
    .clk(_U1780_clk),
    .out(_U1780_out)
);
assign _U1781_in = in[1];
assign _U1781_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1781 (
    .in(_U1781_in),
    .clk(_U1781_clk),
    .out(_U1781_out)
);
assign _U1782_in = in[2];
assign _U1782_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1782 (
    .in(_U1782_in),
    .clk(_U1782_clk),
    .out(_U1782_out)
);
assign out[2] = _U1782_out;
assign out[1] = _U1781_out;
assign out[0] = _U1780_out;
endmodule

module array_delay_U1773 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1774_in;
wire _U1774_clk;
wire [15:0] _U1774_out;
wire [15:0] _U1775_in;
wire _U1775_clk;
wire [15:0] _U1775_out;
wire [15:0] _U1776_in;
wire _U1776_clk;
wire [15:0] _U1776_out;
assign _U1774_in = in[0];
assign _U1774_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1774 (
    .in(_U1774_in),
    .clk(_U1774_clk),
    .out(_U1774_out)
);
assign _U1775_in = in[1];
assign _U1775_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1775 (
    .in(_U1775_in),
    .clk(_U1775_clk),
    .out(_U1775_out)
);
assign _U1776_in = in[2];
assign _U1776_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1776 (
    .in(_U1776_in),
    .clk(_U1776_clk),
    .out(_U1776_out)
);
assign out[2] = _U1776_out;
assign out[1] = _U1775_out;
assign out[0] = _U1774_out;
endmodule

module array_delay_U1750 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1751_in;
wire _U1751_clk;
wire [15:0] _U1751_out;
wire [15:0] _U1752_in;
wire _U1752_clk;
wire [15:0] _U1752_out;
wire [15:0] _U1753_in;
wire _U1753_clk;
wire [15:0] _U1753_out;
assign _U1751_in = in[0];
assign _U1751_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1751 (
    .in(_U1751_in),
    .clk(_U1751_clk),
    .out(_U1751_out)
);
assign _U1752_in = in[1];
assign _U1752_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1752 (
    .in(_U1752_in),
    .clk(_U1752_clk),
    .out(_U1752_out)
);
assign _U1753_in = in[2];
assign _U1753_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1753 (
    .in(_U1753_in),
    .clk(_U1753_clk),
    .out(_U1753_out)
);
assign out[2] = _U1753_out;
assign out[1] = _U1752_out;
assign out[0] = _U1751_out;
endmodule

module array_delay_U1746 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1747_in;
wire _U1747_clk;
wire [15:0] _U1747_out;
wire [15:0] _U1748_in;
wire _U1748_clk;
wire [15:0] _U1748_out;
wire [15:0] _U1749_in;
wire _U1749_clk;
wire [15:0] _U1749_out;
assign _U1747_in = in[0];
assign _U1747_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1747 (
    .in(_U1747_in),
    .clk(_U1747_clk),
    .out(_U1747_out)
);
assign _U1748_in = in[1];
assign _U1748_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1748 (
    .in(_U1748_in),
    .clk(_U1748_clk),
    .out(_U1748_out)
);
assign _U1749_in = in[2];
assign _U1749_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1749 (
    .in(_U1749_in),
    .clk(_U1749_clk),
    .out(_U1749_out)
);
assign out[2] = _U1749_out;
assign out[1] = _U1748_out;
assign out[0] = _U1747_out;
endmodule

module aff__U991 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0123);
endmodule

module affine_controller__U990 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U991 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U973 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U972 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U973 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U955 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U954 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U955 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U937 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U936 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U937 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U919 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U918 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U919 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U91 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0002);
endmodule

module affine_controller__U90 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U91 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U901 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0121);
endmodule

module affine_controller__U900 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U901 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U883 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U882 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U883 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U865 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0121);
endmodule

module affine_controller__U864 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U865 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U847 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0120);
endmodule

module affine_controller__U846 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U847 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U829 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h011f);
endmodule

module affine_controller__U828 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U829 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U811 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h011f);
endmodule

module affine_controller__U810 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U811 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U793 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h011f);
endmodule

module affine_controller__U792 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U793 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U775 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h009a);
endmodule

module affine_controller__U774 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U775 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U757 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U756 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U757 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U739 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U738 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U739 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U73 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U72 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U73 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U721 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U720 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U721 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U703 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U702 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U703 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U685 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0098);
endmodule

module affine_controller__U684 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U685 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U667 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U666 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U667 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U649 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0098);
endmodule

module affine_controller__U648 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U649 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U631 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0096);
endmodule

module affine_controller__U630 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U631 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U613 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0095);
endmodule

module affine_controller__U612 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U613 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U595 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0095);
endmodule

module affine_controller__U594 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U595 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U577 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0095);
endmodule

module affine_controller__U576 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U577 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U559 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0095);
endmodule

module affine_controller__U558 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U559 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U55 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U54 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U55 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U541 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0094);
endmodule

module affine_controller__U540 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U541 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U523 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0114);
endmodule

module affine_controller__U522 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U523 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U505 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U504 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U505 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U487 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U486 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U487 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U469 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U468 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U469 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U451 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U450 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U451 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U433 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U432 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U433 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U415 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U414 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U415 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U397 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U396 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U397 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U379 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0111);
endmodule

module affine_controller__U378 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U379 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U37 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U36 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U37 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U361 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0110);
endmodule

module affine_controller__U360 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U361 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U343 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0110);
endmodule

module affine_controller__U342 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U343 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U325 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0110);
endmodule

module affine_controller__U324 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U325 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U307 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008b);
endmodule

module affine_controller__U306 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U307 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U289 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U288 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U289 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U271 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U270 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U271 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U253 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U252 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U253 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U235 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U234 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U235 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2213 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U2212 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2213 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2175 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b7);
endmodule

module affine_controller__U2174 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2175 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U217 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U216 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U217 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2137 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U2136 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2137 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2099 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U2098 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2099 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2073 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012a);
endmodule

module affine_controller__U2072 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2073 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2035 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a4);
endmodule

module affine_controller__U2034 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2035 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1997 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U1996 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1997 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U199 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0087);
endmodule

module affine_controller__U198 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U199 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1971 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h011f);
endmodule

module affine_controller__U1970 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1971 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1933 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U1932 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1933 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U19 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U18 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U19 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1895 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0095);
endmodule

module affine_controller__U1894 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1895 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1857 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U1856 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1857 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1831 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0110);
endmodule

module affine_controller__U1830 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1831 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U181 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U180 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U181 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1793 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U1792 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1793 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1755 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U1754 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1755 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1729 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U1728 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1729 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1711 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1710 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1711 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1693 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1692 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1693 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1675 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1674 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1675 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1657 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1656 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1657 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1639 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1638 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1639 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U163 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U162 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U163 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1621 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01ba);
endmodule

module affine_controller__U1620 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1621 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1603 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b8);
endmodule

module affine_controller__U1602 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1603 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1585 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b7);
endmodule

module affine_controller__U1584 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1585 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1567 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b7);
endmodule

module affine_controller__U1566 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1567 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1549 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b7);
endmodule

module affine_controller__U1548 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1549 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1531 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b7);
endmodule

module affine_controller__U1530 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1531 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1513 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b6);
endmodule

module affine_controller__U1512 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1513 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1495 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0132);
endmodule

module affine_controller__U1494 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1495 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1477 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U1476 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1477 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1459 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U1458 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1459 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U145 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U144 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U145 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1441 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U1440 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1441 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1423 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U1422 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1423 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1405 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0130);
endmodule

module affine_controller__U1404 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1405 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1387 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U1386 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1387 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1369 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0130);
endmodule

module affine_controller__U1368 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1369 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1351 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U1350 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1351 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1333 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0130);
endmodule

module affine_controller__U1332 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1333 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1315 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012e);
endmodule

module affine_controller__U1314 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1315 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1297 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U1296 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1297 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1279 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U1278 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1279 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U127 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U126 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U127 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1261 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U1260 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1261 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1243 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U1242 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1243 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1225 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012c);
endmodule

module affine_controller__U1224 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1225 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1207 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U1206 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1207 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1189 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012c);
endmodule

module affine_controller__U1188 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1189 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1171 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012b);
endmodule

module affine_controller__U1170 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1171 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1153 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012a);
endmodule

module affine_controller__U1152 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1153 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1135 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012a);
endmodule

module affine_controller__U1134 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1135 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1117 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012a);
endmodule

module affine_controller__U1116 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1117 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1099 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a5);
endmodule

module affine_controller__U1098 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1099 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U109 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0085);
endmodule

module affine_controller__U108 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U109 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1081 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a4);
endmodule

module affine_controller__U1080 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1081 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1063 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a4);
endmodule

module affine_controller__U1062 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1063 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1045 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a4);
endmodule

module affine_controller__U1044 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1045 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1027 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a4);
endmodule

module affine_controller__U1026 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1027 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1009 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a3);
endmodule

module affine_controller__U1008 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1009 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U0 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module harris (
    input clk,
    input rst_n,
    input flush,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    output padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_valid,
    input [15:0] padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0]
);
wire [15:0] _U2250_in;
wire _U2250_clk;
wire [15:0] _U2250_out;
wire arr__U1772_clk;
wire [15:0] arr__U1772_in [2:0];
wire [15:0] arr__U1772_out [2:0];
wire arr__U1778_clk;
wire [15:0] arr__U1778_in [2:0];
wire [15:0] arr__U1778_out [2:0];
wire arr__U1810_clk;
wire [15:0] arr__U1810_in [2:0];
wire [15:0] arr__U1810_out [2:0];
wire arr__U1816_clk;
wire [15:0] arr__U1816_in [2:0];
wire [15:0] arr__U1816_out [2:0];
wire arr__U1874_clk;
wire [15:0] arr__U1874_in [2:0];
wire [15:0] arr__U1874_out [2:0];
wire arr__U1880_clk;
wire [15:0] arr__U1880_in [2:0];
wire [15:0] arr__U1880_out [2:0];
wire arr__U1912_clk;
wire [15:0] arr__U1912_in [2:0];
wire [15:0] arr__U1912_out [2:0];
wire arr__U1918_clk;
wire [15:0] arr__U1918_in [2:0];
wire [15:0] arr__U1918_out [2:0];
wire arr__U1950_clk;
wire [15:0] arr__U1950_in [2:0];
wire [15:0] arr__U1950_out [2:0];
wire arr__U1956_clk;
wire [15:0] arr__U1956_in [2:0];
wire [15:0] arr__U1956_out [2:0];
wire arr__U2014_clk;
wire [15:0] arr__U2014_in [2:0];
wire [15:0] arr__U2014_out [2:0];
wire arr__U2020_clk;
wire [15:0] arr__U2020_in [2:0];
wire [15:0] arr__U2020_out [2:0];
wire arr__U2052_clk;
wire [15:0] arr__U2052_in [2:0];
wire [15:0] arr__U2052_out [2:0];
wire arr__U2058_clk;
wire [15:0] arr__U2058_in [2:0];
wire [15:0] arr__U2058_out [2:0];
wire arr__U2116_clk;
wire [15:0] arr__U2116_in [2:0];
wire [15:0] arr__U2116_out [2:0];
wire arr__U2122_clk;
wire [15:0] arr__U2122_in [2:0];
wire [15:0] arr__U2122_out [2:0];
wire arr__U2154_clk;
wire [15:0] arr__U2154_in [2:0];
wire [15:0] arr__U2154_out [2:0];
wire arr__U2160_clk;
wire [15:0] arr__U2160_in [2:0];
wire [15:0] arr__U2160_out [2:0];
wire arr__U2192_clk;
wire [15:0] arr__U2192_in [2:0];
wire [15:0] arr__U2192_out [2:0];
wire arr__U2198_clk;
wire [15:0] arr__U2198_in [2:0];
wire [15:0] arr__U2198_out [2:0];
wire arr__U2230_clk;
wire [15:0] arr__U2230_in [2:0];
wire [15:0] arr__U2230_out [2:0];
wire arr__U2236_clk;
wire [15:0] arr__U2236_in [2:0];
wire [15:0] arr__U2236_out [2:0];
wire cim_output_stencil_clk;
wire cim_output_stencil_flush;
wire cim_output_stencil_rst_n;
wire cim_output_stencil_op_hcompute_cim_output_stencil_write_wen;
wire [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars [2:0];
wire [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0];
wire cim_output_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire cim_stencil_clk;
wire cim_stencil_flush;
wire cim_stencil_rst_n;
wire cim_stencil_op_hcompute_cim_output_stencil_read_ren;
wire [15:0] cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars [2:0];
wire [15:0] cim_stencil_op_hcompute_cim_output_stencil_read [8:0];
wire cim_stencil_op_hcompute_cim_stencil_write_wen;
wire [15:0] cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars [2:0];
wire [15:0] cim_stencil_op_hcompute_cim_stencil_write [0:0];
wire delay_reg__U1771_clk;
wire delay_reg__U1771_in;
wire delay_reg__U1771_out;
wire delay_reg__U1777_clk;
wire delay_reg__U1777_in;
wire delay_reg__U1777_out;
wire delay_reg__U1809_clk;
wire delay_reg__U1809_in;
wire delay_reg__U1809_out;
wire delay_reg__U1815_clk;
wire delay_reg__U1815_in;
wire delay_reg__U1815_out;
wire delay_reg__U1873_clk;
wire delay_reg__U1873_in;
wire delay_reg__U1873_out;
wire delay_reg__U1879_clk;
wire delay_reg__U1879_in;
wire delay_reg__U1879_out;
wire delay_reg__U1911_clk;
wire delay_reg__U1911_in;
wire delay_reg__U1911_out;
wire delay_reg__U1917_clk;
wire delay_reg__U1917_in;
wire delay_reg__U1917_out;
wire delay_reg__U1949_clk;
wire delay_reg__U1949_in;
wire delay_reg__U1949_out;
wire delay_reg__U1955_clk;
wire delay_reg__U1955_in;
wire delay_reg__U1955_out;
wire delay_reg__U2013_clk;
wire delay_reg__U2013_in;
wire delay_reg__U2013_out;
wire delay_reg__U2019_clk;
wire delay_reg__U2019_in;
wire delay_reg__U2019_out;
wire delay_reg__U2051_clk;
wire delay_reg__U2051_in;
wire delay_reg__U2051_out;
wire delay_reg__U2057_clk;
wire delay_reg__U2057_in;
wire delay_reg__U2057_out;
wire delay_reg__U2115_clk;
wire delay_reg__U2115_in;
wire delay_reg__U2115_out;
wire delay_reg__U2121_clk;
wire delay_reg__U2121_in;
wire delay_reg__U2121_out;
wire delay_reg__U2153_clk;
wire delay_reg__U2153_in;
wire delay_reg__U2153_out;
wire delay_reg__U2159_clk;
wire delay_reg__U2159_in;
wire delay_reg__U2159_out;
wire delay_reg__U2191_clk;
wire delay_reg__U2191_in;
wire delay_reg__U2191_out;
wire delay_reg__U2197_clk;
wire delay_reg__U2197_in;
wire delay_reg__U2197_out;
wire delay_reg__U2229_clk;
wire delay_reg__U2229_in;
wire delay_reg__U2229_out;
wire delay_reg__U2235_clk;
wire delay_reg__U2235_in;
wire delay_reg__U2235_out;
wire grad_x_stencil_clk;
wire grad_x_stencil_flush;
wire grad_x_stencil_rst_n;
wire grad_x_stencil_op_hcompute_grad_x_stencil_write_wen;
wire [15:0] grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars [2:0];
wire [15:0] grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0];
wire grad_x_stencil_op_hcompute_lxx_stencil_read_ren;
wire [15:0] grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars [2:0];
wire [15:0] grad_x_stencil_op_hcompute_lxx_stencil_read [0:0];
wire grad_x_stencil_op_hcompute_lxy_stencil_read_ren;
wire [15:0] grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars [2:0];
wire [15:0] grad_x_stencil_op_hcompute_lxy_stencil_read [0:0];
wire grad_y_stencil_clk;
wire grad_y_stencil_flush;
wire grad_y_stencil_rst_n;
wire grad_y_stencil_op_hcompute_grad_y_stencil_write_wen;
wire [15:0] grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars [2:0];
wire [15:0] grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0];
wire grad_y_stencil_op_hcompute_lxy_stencil_read_ren;
wire [15:0] grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars [2:0];
wire [15:0] grad_y_stencil_op_hcompute_lxy_stencil_read [0:0];
wire grad_y_stencil_op_hcompute_lyy_stencil_read_ren;
wire [15:0] grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars [2:0];
wire [15:0] grad_y_stencil_op_hcompute_lyy_stencil_read [0:0];
wire lgxx_stencil_clk;
wire lgxx_stencil_flush;
wire lgxx_stencil_rst_n;
wire lgxx_stencil_op_hcompute_cim_stencil_read_ren;
wire [15:0] lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_op_hcompute_cim_stencil_read [0:0];
wire lgxx_stencil_op_hcompute_lgxx_stencil_1_write_wen;
wire [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0];
wire lgxx_stencil_clkwrk_dsa0_clk;
wire lgxx_stencil_clkwrk_dsa0_flush;
wire lgxx_stencil_clkwrk_dsa0_rst_n;
wire lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ren;
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read [0:0];
wire lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_wen;
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write [0:0];
wire lgxy_stencil_clk;
wire lgxy_stencil_flush;
wire lgxy_stencil_rst_n;
wire lgxy_stencil_op_hcompute_cim_stencil_read_ren;
wire [15:0] lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_op_hcompute_cim_stencil_read [0:0];
wire lgxy_stencil_op_hcompute_lgxy_stencil_1_write_wen;
wire [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0];
wire lgxy_stencil_clkwrk_dsa1_clk;
wire lgxy_stencil_clkwrk_dsa1_flush;
wire lgxy_stencil_clkwrk_dsa1_rst_n;
wire lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ren;
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read [0:0];
wire lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_wen;
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write [0:0];
wire lgyy_stencil_clk;
wire lgyy_stencil_flush;
wire lgyy_stencil_rst_n;
wire lgyy_stencil_op_hcompute_cim_stencil_read_ren;
wire [15:0] lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_op_hcompute_cim_stencil_read [0:0];
wire lgyy_stencil_op_hcompute_lgyy_stencil_1_write_wen;
wire [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0];
wire lgyy_stencil_clkwrk_dsa2_clk;
wire lgyy_stencil_clkwrk_dsa2_flush;
wire lgyy_stencil_clkwrk_dsa2_rst_n;
wire lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ren;
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read [0:0];
wire lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_wen;
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write [0:0];
wire lxx_stencil_clk;
wire lxx_stencil_flush;
wire lxx_stencil_rst_n;
wire lxx_stencil_op_hcompute_lgxx_stencil_1_read_ren;
wire [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0];
wire lxx_stencil_op_hcompute_lxx_stencil_write_wen;
wire [15:0] lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars [2:0];
wire [15:0] lxx_stencil_op_hcompute_lxx_stencil_write [0:0];
wire lxy_stencil_clk;
wire lxy_stencil_flush;
wire lxy_stencil_rst_n;
wire lxy_stencil_op_hcompute_lgxy_stencil_1_read_ren;
wire [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0];
wire lxy_stencil_op_hcompute_lxy_stencil_write_wen;
wire [15:0] lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars [2:0];
wire [15:0] lxy_stencil_op_hcompute_lxy_stencil_write [0:0];
wire lyy_stencil_clk;
wire lyy_stencil_flush;
wire lyy_stencil_rst_n;
wire lyy_stencil_op_hcompute_lgyy_stencil_1_read_ren;
wire [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0];
wire lyy_stencil_op_hcompute_lyy_stencil_write_wen;
wire [15:0] lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars [2:0];
wire [15:0] lyy_stencil_op_hcompute_lyy_stencil_write [0:0];
wire op_hcompute_cim_output_stencil_clk;
wire [15:0] op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read [8:0];
wire [15:0] op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0];
wire op_hcompute_cim_output_stencil_exe_start_clk;
wire op_hcompute_cim_output_stencil_exe_start_in;
wire op_hcompute_cim_output_stencil_exe_start_out;
wire op_hcompute_cim_output_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_cim_output_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_cim_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_cim_output_stencil_port_controller_clk;
wire op_hcompute_cim_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1529_clk;
wire op_hcompute_cim_output_stencil_port_controller_U1529_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1529_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1547_clk;
wire op_hcompute_cim_output_stencil_port_controller_U1547_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1547_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1565_clk;
wire op_hcompute_cim_output_stencil_port_controller_U1565_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1565_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1583_clk;
wire op_hcompute_cim_output_stencil_port_controller_U1583_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1583_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1601_clk;
wire op_hcompute_cim_output_stencil_port_controller_U1601_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1601_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1619_clk;
wire op_hcompute_cim_output_stencil_port_controller_U1619_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1619_d [2:0];
wire op_hcompute_cim_output_stencil_read_start;
wire op_hcompute_cim_output_stencil_write_start_in;
wire op_hcompute_cim_output_stencil_write_start_out;
wire op_hcompute_cim_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_cim_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_cim_output_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_cim_stencil_clk;
wire [15:0] op_hcompute_cim_stencil_lgxx_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] op_hcompute_cim_stencil_lgxy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] op_hcompute_cim_stencil_lgyy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write [0:0];
wire op_hcompute_cim_stencil_exe_start_clk;
wire op_hcompute_cim_stencil_exe_start_in;
wire op_hcompute_cim_stencil_exe_start_out;
wire op_hcompute_cim_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_cim_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_cim_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_cim_stencil_port_controller_clk;
wire op_hcompute_cim_stencil_port_controller_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1349_clk;
wire op_hcompute_cim_stencil_port_controller_U1349_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1349_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1367_clk;
wire op_hcompute_cim_stencil_port_controller_U1367_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1367_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1385_clk;
wire op_hcompute_cim_stencil_port_controller_U1385_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1385_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1403_clk;
wire op_hcompute_cim_stencil_port_controller_U1403_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1403_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1421_clk;
wire op_hcompute_cim_stencil_port_controller_U1421_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1421_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1439_clk;
wire op_hcompute_cim_stencil_port_controller_U1439_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1439_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1457_clk;
wire op_hcompute_cim_stencil_port_controller_U1457_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1457_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1475_clk;
wire op_hcompute_cim_stencil_port_controller_U1475_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1475_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1493_clk;
wire op_hcompute_cim_stencil_port_controller_U1493_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1493_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1511_clk;
wire op_hcompute_cim_stencil_port_controller_U1511_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1511_d [2:0];
wire op_hcompute_cim_stencil_read_start;
wire op_hcompute_cim_stencil_write_start_in;
wire op_hcompute_cim_stencil_write_start_out;
wire op_hcompute_cim_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_cim_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_cim_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_grad_x_stencil_clk;
wire [15:0] op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0];
wire [15:0] op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0];
wire op_hcompute_grad_x_stencil_exe_start_clk;
wire op_hcompute_grad_x_stencil_exe_start_in;
wire op_hcompute_grad_x_stencil_exe_start_out;
wire op_hcompute_grad_x_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_grad_x_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_grad_x_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_grad_x_stencil_port_controller_clk;
wire op_hcompute_grad_x_stencil_port_controller_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U125_clk;
wire op_hcompute_grad_x_stencil_port_controller_U125_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U125_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U143_clk;
wire op_hcompute_grad_x_stencil_port_controller_U143_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U143_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U161_clk;
wire op_hcompute_grad_x_stencil_port_controller_U161_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U161_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U179_clk;
wire op_hcompute_grad_x_stencil_port_controller_U179_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U179_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U197_clk;
wire op_hcompute_grad_x_stencil_port_controller_U197_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U197_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U215_clk;
wire op_hcompute_grad_x_stencil_port_controller_U215_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U215_d [2:0];
wire op_hcompute_grad_x_stencil_read_start;
wire op_hcompute_grad_x_stencil_write_start_in;
wire op_hcompute_grad_x_stencil_write_start_out;
wire op_hcompute_grad_x_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_grad_x_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_grad_x_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_grad_y_stencil_clk;
wire [15:0] op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0];
wire [15:0] op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0];
wire op_hcompute_grad_y_stencil_exe_start_clk;
wire op_hcompute_grad_y_stencil_exe_start_in;
wire op_hcompute_grad_y_stencil_exe_start_out;
wire op_hcompute_grad_y_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_grad_y_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_grad_y_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_grad_y_stencil_port_controller_clk;
wire op_hcompute_grad_y_stencil_port_controller_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U557_clk;
wire op_hcompute_grad_y_stencil_port_controller_U557_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U557_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U575_clk;
wire op_hcompute_grad_y_stencil_port_controller_U575_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U575_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U593_clk;
wire op_hcompute_grad_y_stencil_port_controller_U593_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U593_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U611_clk;
wire op_hcompute_grad_y_stencil_port_controller_U611_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U611_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U629_clk;
wire op_hcompute_grad_y_stencil_port_controller_U629_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U629_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U647_clk;
wire op_hcompute_grad_y_stencil_port_controller_U647_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U647_d [2:0];
wire op_hcompute_grad_y_stencil_read_start;
wire op_hcompute_grad_y_stencil_write_start_in;
wire op_hcompute_grad_y_stencil_write_start_out;
wire op_hcompute_grad_y_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_grad_y_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_grad_y_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_clk;
wire op_hcompute_hw_output_stencil_exe_start_in;
wire op_hcompute_hw_output_stencil_exe_start_out;
wire op_hcompute_hw_output_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_port_controller_clk;
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1637_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1637_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1637_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1655_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1655_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1655_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1673_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1673_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1673_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1691_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1691_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1691_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1709_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1709_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1709_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1727_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1727_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1727_d [2:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start_in;
wire op_hcompute_hw_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_clk;
wire [15:0] op_hcompute_lgxx_stencil_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write [0:0];
wire op_hcompute_lgxx_stencil_1_clk;
wire [15:0] op_hcompute_lgxx_stencil_1_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read [0:0];
wire [15:0] op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0];
wire [15:0] op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0];
wire op_hcompute_lgxx_stencil_1_exe_start_clk;
wire op_hcompute_lgxx_stencil_1_exe_start_in;
wire op_hcompute_lgxx_stencil_1_exe_start_out;
wire op_hcompute_lgxx_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgxx_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxx_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U413_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U413_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U413_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U431_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U431_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U431_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U449_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U449_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U449_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U467_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U467_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U467_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U485_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U485_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U485_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U503_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U503_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U503_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U521_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U521_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U521_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U539_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_U539_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U539_d [2:0];
wire op_hcompute_lgxx_stencil_1_read_start;
wire op_hcompute_lgxx_stencil_1_write_start_in;
wire op_hcompute_lgxx_stencil_1_write_start_out;
wire op_hcompute_lgxx_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgxx_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxx_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_exe_start_clk;
wire op_hcompute_lgxx_stencil_exe_start_in;
wire op_hcompute_lgxx_stencil_exe_start_out;
wire op_hcompute_lgxx_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgxx_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxx_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_port_controller_clk;
wire op_hcompute_lgxx_stencil_port_controller_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_d [2:0];
wire op_hcompute_lgxx_stencil_port_controller_U341_clk;
wire op_hcompute_lgxx_stencil_port_controller_U341_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_U341_d [2:0];
wire op_hcompute_lgxx_stencil_port_controller_U359_clk;
wire op_hcompute_lgxx_stencil_port_controller_U359_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_U359_d [2:0];
wire op_hcompute_lgxx_stencil_port_controller_U377_clk;
wire op_hcompute_lgxx_stencil_port_controller_U377_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_U377_d [2:0];
wire op_hcompute_lgxx_stencil_port_controller_U395_clk;
wire op_hcompute_lgxx_stencil_port_controller_U395_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_U395_d [2:0];
wire op_hcompute_lgxx_stencil_read_start;
wire op_hcompute_lgxx_stencil_write_start_in;
wire op_hcompute_lgxx_stencil_write_start_out;
wire op_hcompute_lgxx_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgxx_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxx_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_clk;
wire [15:0] op_hcompute_lgxy_stencil_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write [0:0];
wire op_hcompute_lgxy_stencil_1_clk;
wire [15:0] op_hcompute_lgxy_stencil_1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read [0:0];
wire [15:0] op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0];
wire [15:0] op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0];
wire op_hcompute_lgxy_stencil_1_exe_start_clk;
wire op_hcompute_lgxy_stencil_1_exe_start_in;
wire op_hcompute_lgxy_stencil_1_exe_start_out;
wire op_hcompute_lgxy_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgxy_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxy_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U1007_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U1007_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U1007_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U881_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U881_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U881_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U899_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U899_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U899_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U917_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U917_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U917_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U935_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U935_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U935_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U953_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U953_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U953_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U971_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U971_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U971_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U989_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_U989_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U989_d [2:0];
wire op_hcompute_lgxy_stencil_1_read_start;
wire op_hcompute_lgxy_stencil_1_write_start_in;
wire op_hcompute_lgxy_stencil_1_write_start_out;
wire op_hcompute_lgxy_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgxy_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxy_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_exe_start_clk;
wire op_hcompute_lgxy_stencil_exe_start_in;
wire op_hcompute_lgxy_stencil_exe_start_out;
wire op_hcompute_lgxy_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgxy_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_port_controller_clk;
wire op_hcompute_lgxy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_d [2:0];
wire op_hcompute_lgxy_stencil_port_controller_U809_clk;
wire op_hcompute_lgxy_stencil_port_controller_U809_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_U809_d [2:0];
wire op_hcompute_lgxy_stencil_port_controller_U827_clk;
wire op_hcompute_lgxy_stencil_port_controller_U827_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_U827_d [2:0];
wire op_hcompute_lgxy_stencil_port_controller_U845_clk;
wire op_hcompute_lgxy_stencil_port_controller_U845_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_U845_d [2:0];
wire op_hcompute_lgxy_stencil_port_controller_U863_clk;
wire op_hcompute_lgxy_stencil_port_controller_U863_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_U863_d [2:0];
wire op_hcompute_lgxy_stencil_read_start;
wire op_hcompute_lgxy_stencil_write_start_in;
wire op_hcompute_lgxy_stencil_write_start_out;
wire op_hcompute_lgxy_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgxy_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxy_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_clk;
wire [15:0] op_hcompute_lgyy_stencil_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write [0:0];
wire op_hcompute_lgyy_stencil_1_clk;
wire [15:0] op_hcompute_lgyy_stencil_1_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read [0:0];
wire [15:0] op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0];
wire [15:0] op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0];
wire op_hcompute_lgyy_stencil_1_exe_start_clk;
wire op_hcompute_lgyy_stencil_1_exe_start_in;
wire op_hcompute_lgyy_stencil_1_exe_start_out;
wire op_hcompute_lgyy_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgyy_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgyy_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1205_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1205_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1205_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1223_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1223_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1223_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1241_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1241_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1241_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1259_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1259_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1259_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1277_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1277_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1277_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1295_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1295_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1295_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1313_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1313_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1313_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1331_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_U1331_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1331_d [2:0];
wire op_hcompute_lgyy_stencil_1_read_start;
wire op_hcompute_lgyy_stencil_1_write_start_in;
wire op_hcompute_lgyy_stencil_1_write_start_out;
wire op_hcompute_lgyy_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgyy_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgyy_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_exe_start_clk;
wire op_hcompute_lgyy_stencil_exe_start_in;
wire op_hcompute_lgyy_stencil_exe_start_out;
wire op_hcompute_lgyy_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgyy_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgyy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_port_controller_clk;
wire op_hcompute_lgyy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_d [2:0];
wire op_hcompute_lgyy_stencil_port_controller_U1133_clk;
wire op_hcompute_lgyy_stencil_port_controller_U1133_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_U1133_d [2:0];
wire op_hcompute_lgyy_stencil_port_controller_U1151_clk;
wire op_hcompute_lgyy_stencil_port_controller_U1151_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_U1151_d [2:0];
wire op_hcompute_lgyy_stencil_port_controller_U1169_clk;
wire op_hcompute_lgyy_stencil_port_controller_U1169_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_U1169_d [2:0];
wire op_hcompute_lgyy_stencil_port_controller_U1187_clk;
wire op_hcompute_lgyy_stencil_port_controller_U1187_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_U1187_d [2:0];
wire op_hcompute_lgyy_stencil_read_start;
wire op_hcompute_lgyy_stencil_write_start_in;
wire op_hcompute_lgyy_stencil_write_start_out;
wire op_hcompute_lgyy_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgyy_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgyy_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lxx_stencil_clk;
wire [15:0] op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read [0:0];
wire [15:0] op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write [0:0];
wire op_hcompute_lxx_stencil_exe_start_clk;
wire op_hcompute_lxx_stencil_exe_start_in;
wire op_hcompute_lxx_stencil_exe_start_out;
wire op_hcompute_lxx_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lxx_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lxx_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lxx_stencil_port_controller_clk;
wire op_hcompute_lxx_stencil_port_controller_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U233_clk;
wire op_hcompute_lxx_stencil_port_controller_U233_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U233_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U251_clk;
wire op_hcompute_lxx_stencil_port_controller_U251_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U251_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U269_clk;
wire op_hcompute_lxx_stencil_port_controller_U269_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U269_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U287_clk;
wire op_hcompute_lxx_stencil_port_controller_U287_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U287_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U305_clk;
wire op_hcompute_lxx_stencil_port_controller_U305_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U305_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U323_clk;
wire op_hcompute_lxx_stencil_port_controller_U323_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U323_d [2:0];
wire op_hcompute_lxx_stencil_read_start;
wire op_hcompute_lxx_stencil_write_start_in;
wire op_hcompute_lxx_stencil_write_start_out;
wire op_hcompute_lxx_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lxx_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lxx_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lxy_stencil_clk;
wire [15:0] op_hcompute_lxy_stencil_grad_x_stencil_op_hcompute_lxy_stencil_read [0:0];
wire [15:0] op_hcompute_lxy_stencil_grad_y_stencil_op_hcompute_lxy_stencil_read [0:0];
wire [15:0] op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write [0:0];
wire op_hcompute_lxy_stencil_exe_start_clk;
wire op_hcompute_lxy_stencil_exe_start_in;
wire op_hcompute_lxy_stencil_exe_start_out;
wire op_hcompute_lxy_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lxy_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lxy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lxy_stencil_port_controller_clk;
wire op_hcompute_lxy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U665_clk;
wire op_hcompute_lxy_stencil_port_controller_U665_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U665_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U683_clk;
wire op_hcompute_lxy_stencil_port_controller_U683_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U683_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U701_clk;
wire op_hcompute_lxy_stencil_port_controller_U701_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U701_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U719_clk;
wire op_hcompute_lxy_stencil_port_controller_U719_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U719_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U737_clk;
wire op_hcompute_lxy_stencil_port_controller_U737_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U737_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U755_clk;
wire op_hcompute_lxy_stencil_port_controller_U755_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U755_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U773_clk;
wire op_hcompute_lxy_stencil_port_controller_U773_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U773_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U791_clk;
wire op_hcompute_lxy_stencil_port_controller_U791_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U791_d [2:0];
wire op_hcompute_lxy_stencil_read_start;
wire op_hcompute_lxy_stencil_write_start_in;
wire op_hcompute_lxy_stencil_write_start_out;
wire op_hcompute_lxy_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lxy_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lxy_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lyy_stencil_clk;
wire [15:0] op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read [0:0];
wire [15:0] op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write [0:0];
wire op_hcompute_lyy_stencil_exe_start_clk;
wire op_hcompute_lyy_stencil_exe_start_in;
wire op_hcompute_lyy_stencil_exe_start_out;
wire op_hcompute_lyy_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lyy_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lyy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lyy_stencil_port_controller_clk;
wire op_hcompute_lyy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1025_clk;
wire op_hcompute_lyy_stencil_port_controller_U1025_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1025_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1043_clk;
wire op_hcompute_lyy_stencil_port_controller_U1043_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1043_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1061_clk;
wire op_hcompute_lyy_stencil_port_controller_U1061_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1061_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1079_clk;
wire op_hcompute_lyy_stencil_port_controller_U1079_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1079_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1097_clk;
wire op_hcompute_lyy_stencil_port_controller_U1097_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1097_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1115_clk;
wire op_hcompute_lyy_stencil_port_controller_U1115_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1115_d [2:0];
wire op_hcompute_lyy_stencil_read_start;
wire op_hcompute_lyy_stencil_write_start_in;
wire op_hcompute_lyy_stencil_write_start_out;
wire op_hcompute_lyy_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lyy_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lyy_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_clk;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0];
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0];
wire op_hcompute_padded16_global_wrapper_stencil_exe_start_clk;
wire op_hcompute_padded16_global_wrapper_stencil_exe_start_in;
wire op_hcompute_padded16_global_wrapper_stencil_exe_start_out;
wire op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_read_start;
wire op_hcompute_padded16_global_wrapper_stencil_write_start_in;
wire op_hcompute_padded16_global_wrapper_stencil_write_start_out;
wire op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire padded16_global_wrapper_stencil_clk;
wire padded16_global_wrapper_stencil_flush;
wire padded16_global_wrapper_stencil_rst_n;
wire padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ren;
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars [2:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0];
wire padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ren;
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars [2:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0];
wire padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_wen;
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars [2:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0];
assign _U2250_in = padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0];
assign _U2250_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2250 (
    .in(_U2250_in),
    .clk(_U2250_clk),
    .out(_U2250_out)
);
assign arr__U1772_clk = clk;
assign arr__U1772_in[2] = op_hcompute_grad_x_stencil_port_controller_d[2];
assign arr__U1772_in[1] = op_hcompute_grad_x_stencil_port_controller_d[1];
assign arr__U1772_in[0] = op_hcompute_grad_x_stencil_port_controller_d[0];
array_delay_U1773 arr__U1772 (
    .clk(arr__U1772_clk),
    .in(arr__U1772_in),
    .out(arr__U1772_out)
);
assign arr__U1778_clk = clk;
assign arr__U1778_in[2] = arr__U1772_out[2];
assign arr__U1778_in[1] = arr__U1772_out[1];
assign arr__U1778_in[0] = arr__U1772_out[0];
array_delay_U1779 arr__U1778 (
    .clk(arr__U1778_clk),
    .in(arr__U1778_in),
    .out(arr__U1778_out)
);
assign arr__U1810_clk = clk;
assign arr__U1810_in[2] = op_hcompute_lxx_stencil_port_controller_d[2];
assign arr__U1810_in[1] = op_hcompute_lxx_stencil_port_controller_d[1];
assign arr__U1810_in[0] = op_hcompute_lxx_stencil_port_controller_d[0];
array_delay_U1811 arr__U1810 (
    .clk(arr__U1810_clk),
    .in(arr__U1810_in),
    .out(arr__U1810_out)
);
assign arr__U1816_clk = clk;
assign arr__U1816_in[2] = arr__U1810_out[2];
assign arr__U1816_in[1] = arr__U1810_out[1];
assign arr__U1816_in[0] = arr__U1810_out[0];
array_delay_U1817 arr__U1816 (
    .clk(arr__U1816_clk),
    .in(arr__U1816_in),
    .out(arr__U1816_out)
);
assign arr__U1874_clk = clk;
assign arr__U1874_in[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign arr__U1874_in[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign arr__U1874_in[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
array_delay_U1875 arr__U1874 (
    .clk(arr__U1874_clk),
    .in(arr__U1874_in),
    .out(arr__U1874_out)
);
assign arr__U1880_clk = clk;
assign arr__U1880_in[2] = arr__U1874_out[2];
assign arr__U1880_in[1] = arr__U1874_out[1];
assign arr__U1880_in[0] = arr__U1874_out[0];
array_delay_U1881 arr__U1880 (
    .clk(arr__U1880_clk),
    .in(arr__U1880_in),
    .out(arr__U1880_out)
);
assign arr__U1912_clk = clk;
assign arr__U1912_in[2] = op_hcompute_grad_y_stencil_port_controller_d[2];
assign arr__U1912_in[1] = op_hcompute_grad_y_stencil_port_controller_d[1];
assign arr__U1912_in[0] = op_hcompute_grad_y_stencil_port_controller_d[0];
array_delay_U1913 arr__U1912 (
    .clk(arr__U1912_clk),
    .in(arr__U1912_in),
    .out(arr__U1912_out)
);
assign arr__U1918_clk = clk;
assign arr__U1918_in[2] = arr__U1912_out[2];
assign arr__U1918_in[1] = arr__U1912_out[1];
assign arr__U1918_in[0] = arr__U1912_out[0];
array_delay_U1919 arr__U1918 (
    .clk(arr__U1918_clk),
    .in(arr__U1918_in),
    .out(arr__U1918_out)
);
assign arr__U1950_clk = clk;
assign arr__U1950_in[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign arr__U1950_in[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign arr__U1950_in[0] = op_hcompute_lxy_stencil_port_controller_d[0];
array_delay_U1951 arr__U1950 (
    .clk(arr__U1950_clk),
    .in(arr__U1950_in),
    .out(arr__U1950_out)
);
assign arr__U1956_clk = clk;
assign arr__U1956_in[2] = arr__U1950_out[2];
assign arr__U1956_in[1] = arr__U1950_out[1];
assign arr__U1956_in[0] = arr__U1950_out[0];
array_delay_U1957 arr__U1956 (
    .clk(arr__U1956_clk),
    .in(arr__U1956_in),
    .out(arr__U1956_out)
);
assign arr__U2014_clk = clk;
assign arr__U2014_in[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign arr__U2014_in[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign arr__U2014_in[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
array_delay_U2015 arr__U2014 (
    .clk(arr__U2014_clk),
    .in(arr__U2014_in),
    .out(arr__U2014_out)
);
assign arr__U2020_clk = clk;
assign arr__U2020_in[2] = arr__U2014_out[2];
assign arr__U2020_in[1] = arr__U2014_out[1];
assign arr__U2020_in[0] = arr__U2014_out[0];
array_delay_U2021 arr__U2020 (
    .clk(arr__U2020_clk),
    .in(arr__U2020_in),
    .out(arr__U2020_out)
);
assign arr__U2052_clk = clk;
assign arr__U2052_in[2] = op_hcompute_lyy_stencil_port_controller_d[2];
assign arr__U2052_in[1] = op_hcompute_lyy_stencil_port_controller_d[1];
assign arr__U2052_in[0] = op_hcompute_lyy_stencil_port_controller_d[0];
array_delay_U2053 arr__U2052 (
    .clk(arr__U2052_clk),
    .in(arr__U2052_in),
    .out(arr__U2052_out)
);
assign arr__U2058_clk = clk;
assign arr__U2058_in[2] = arr__U2052_out[2];
assign arr__U2058_in[1] = arr__U2052_out[1];
assign arr__U2058_in[0] = arr__U2052_out[0];
array_delay_U2059 arr__U2058 (
    .clk(arr__U2058_clk),
    .in(arr__U2058_in),
    .out(arr__U2058_out)
);
assign arr__U2116_clk = clk;
assign arr__U2116_in[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign arr__U2116_in[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign arr__U2116_in[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
array_delay_U2117 arr__U2116 (
    .clk(arr__U2116_clk),
    .in(arr__U2116_in),
    .out(arr__U2116_out)
);
assign arr__U2122_clk = clk;
assign arr__U2122_in[2] = arr__U2116_out[2];
assign arr__U2122_in[1] = arr__U2116_out[1];
assign arr__U2122_in[0] = arr__U2116_out[0];
array_delay_U2123 arr__U2122 (
    .clk(arr__U2122_clk),
    .in(arr__U2122_in),
    .out(arr__U2122_out)
);
assign arr__U2154_clk = clk;
assign arr__U2154_in[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign arr__U2154_in[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign arr__U2154_in[0] = op_hcompute_cim_stencil_port_controller_d[0];
array_delay_U2155 arr__U2154 (
    .clk(arr__U2154_clk),
    .in(arr__U2154_in),
    .out(arr__U2154_out)
);
assign arr__U2160_clk = clk;
assign arr__U2160_in[2] = arr__U2154_out[2];
assign arr__U2160_in[1] = arr__U2154_out[1];
assign arr__U2160_in[0] = arr__U2154_out[0];
array_delay_U2161 arr__U2160 (
    .clk(arr__U2160_clk),
    .in(arr__U2160_in),
    .out(arr__U2160_out)
);
assign arr__U2192_clk = clk;
assign arr__U2192_in[2] = op_hcompute_cim_output_stencil_port_controller_d[2];
assign arr__U2192_in[1] = op_hcompute_cim_output_stencil_port_controller_d[1];
assign arr__U2192_in[0] = op_hcompute_cim_output_stencil_port_controller_d[0];
array_delay_U2193 arr__U2192 (
    .clk(arr__U2192_clk),
    .in(arr__U2192_in),
    .out(arr__U2192_out)
);
assign arr__U2198_clk = clk;
assign arr__U2198_in[2] = arr__U2192_out[2];
assign arr__U2198_in[1] = arr__U2192_out[1];
assign arr__U2198_in[0] = arr__U2192_out[0];
array_delay_U2199 arr__U2198 (
    .clk(arr__U2198_clk),
    .in(arr__U2198_in),
    .out(arr__U2198_out)
);
assign arr__U2230_clk = clk;
assign arr__U2230_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign arr__U2230_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign arr__U2230_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U2231 arr__U2230 (
    .clk(arr__U2230_clk),
    .in(arr__U2230_in),
    .out(arr__U2230_out)
);
assign arr__U2236_clk = clk;
assign arr__U2236_in[2] = arr__U2230_out[2];
assign arr__U2236_in[1] = arr__U2230_out[1];
assign arr__U2236_in[0] = arr__U2230_out[0];
array_delay_U2237 arr__U2236 (
    .clk(arr__U2236_clk),
    .in(arr__U2236_in),
    .out(arr__U2236_out)
);
assign cim_output_stencil_clk = clk;
assign cim_output_stencil_flush = flush;
assign cim_output_stencil_rst_n = rst_n;
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_wen = op_hcompute_cim_output_stencil_write_start_out;
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars[2] = op_hcompute_cim_output_stencil_write_start_control_vars_out[2];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars[1] = op_hcompute_cim_output_stencil_write_start_control_vars_out[1];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars[0] = op_hcompute_cim_output_stencil_write_start_control_vars_out[0];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write[0] = op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write[0];
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
cim_output_stencil_ub cim_output_stencil (
    .clk(cim_output_stencil_clk),
    .flush(cim_output_stencil_flush),
    .rst_n(cim_output_stencil_rst_n),
    .op_hcompute_cim_output_stencil_write_wen(cim_output_stencil_op_hcompute_cim_output_stencil_write_wen),
    .op_hcompute_cim_output_stencil_write_ctrl_vars(cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars),
    .op_hcompute_cim_output_stencil_write(cim_output_stencil_op_hcompute_cim_output_stencil_write),
    .op_hcompute_hw_output_stencil_read_ren(cim_output_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(cim_output_stencil_op_hcompute_hw_output_stencil_read)
);
assign cim_stencil_clk = clk;
assign cim_stencil_flush = flush;
assign cim_stencil_rst_n = rst_n;
assign cim_stencil_op_hcompute_cim_output_stencil_read_ren = op_hcompute_cim_output_stencil_read_start;
assign cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars[2] = op_hcompute_cim_output_stencil_port_controller_d[2];
assign cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars[1] = op_hcompute_cim_output_stencil_port_controller_d[1];
assign cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars[0] = op_hcompute_cim_output_stencil_port_controller_d[0];
assign cim_stencil_op_hcompute_cim_stencil_write_wen = op_hcompute_cim_stencil_write_start_out;
assign cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars[2] = op_hcompute_cim_stencil_write_start_control_vars_out[2];
assign cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars[1] = op_hcompute_cim_stencil_write_start_control_vars_out[1];
assign cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars[0] = op_hcompute_cim_stencil_write_start_control_vars_out[0];
assign cim_stencil_op_hcompute_cim_stencil_write[0] = op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write[0];
cim_stencil_ub cim_stencil (
    .clk(cim_stencil_clk),
    .flush(cim_stencil_flush),
    .rst_n(cim_stencil_rst_n),
    .op_hcompute_cim_output_stencil_read_ren(cim_stencil_op_hcompute_cim_output_stencil_read_ren),
    .op_hcompute_cim_output_stencil_read_ctrl_vars(cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars),
    .op_hcompute_cim_output_stencil_read(cim_stencil_op_hcompute_cim_output_stencil_read),
    .op_hcompute_cim_stencil_write_wen(cim_stencil_op_hcompute_cim_stencil_write_wen),
    .op_hcompute_cim_stencil_write_ctrl_vars(cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars),
    .op_hcompute_cim_stencil_write(cim_stencil_op_hcompute_cim_stencil_write)
);
assign delay_reg__U1771_clk = clk;
assign delay_reg__U1771_in = op_hcompute_grad_x_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U1771 (
    .clk(delay_reg__U1771_clk),
    .in(delay_reg__U1771_in),
    .out(delay_reg__U1771_out)
);
assign delay_reg__U1777_clk = clk;
assign delay_reg__U1777_in = delay_reg__U1771_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U1777 (
    .clk(delay_reg__U1777_clk),
    .in(delay_reg__U1777_in),
    .out(delay_reg__U1777_out)
);
assign delay_reg__U1809_clk = clk;
assign delay_reg__U1809_in = op_hcompute_lxx_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U1809 (
    .clk(delay_reg__U1809_clk),
    .in(delay_reg__U1809_in),
    .out(delay_reg__U1809_out)
);
assign delay_reg__U1815_clk = clk;
assign delay_reg__U1815_in = delay_reg__U1809_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U1815 (
    .clk(delay_reg__U1815_clk),
    .in(delay_reg__U1815_in),
    .out(delay_reg__U1815_out)
);
assign delay_reg__U1873_clk = clk;
assign delay_reg__U1873_in = op_hcompute_lgxx_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U1873 (
    .clk(delay_reg__U1873_clk),
    .in(delay_reg__U1873_in),
    .out(delay_reg__U1873_out)
);
assign delay_reg__U1879_clk = clk;
assign delay_reg__U1879_in = delay_reg__U1873_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U1879 (
    .clk(delay_reg__U1879_clk),
    .in(delay_reg__U1879_in),
    .out(delay_reg__U1879_out)
);
assign delay_reg__U1911_clk = clk;
assign delay_reg__U1911_in = op_hcompute_grad_y_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U1911 (
    .clk(delay_reg__U1911_clk),
    .in(delay_reg__U1911_in),
    .out(delay_reg__U1911_out)
);
assign delay_reg__U1917_clk = clk;
assign delay_reg__U1917_in = delay_reg__U1911_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U1917 (
    .clk(delay_reg__U1917_clk),
    .in(delay_reg__U1917_in),
    .out(delay_reg__U1917_out)
);
assign delay_reg__U1949_clk = clk;
assign delay_reg__U1949_in = op_hcompute_lxy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U1949 (
    .clk(delay_reg__U1949_clk),
    .in(delay_reg__U1949_in),
    .out(delay_reg__U1949_out)
);
assign delay_reg__U1955_clk = clk;
assign delay_reg__U1955_in = delay_reg__U1949_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U1955 (
    .clk(delay_reg__U1955_clk),
    .in(delay_reg__U1955_in),
    .out(delay_reg__U1955_out)
);
assign delay_reg__U2013_clk = clk;
assign delay_reg__U2013_in = op_hcompute_lgxy_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U2013 (
    .clk(delay_reg__U2013_clk),
    .in(delay_reg__U2013_in),
    .out(delay_reg__U2013_out)
);
assign delay_reg__U2019_clk = clk;
assign delay_reg__U2019_in = delay_reg__U2013_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U2019 (
    .clk(delay_reg__U2019_clk),
    .in(delay_reg__U2019_in),
    .out(delay_reg__U2019_out)
);
assign delay_reg__U2051_clk = clk;
assign delay_reg__U2051_in = op_hcompute_lyy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U2051 (
    .clk(delay_reg__U2051_clk),
    .in(delay_reg__U2051_in),
    .out(delay_reg__U2051_out)
);
assign delay_reg__U2057_clk = clk;
assign delay_reg__U2057_in = delay_reg__U2051_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U2057 (
    .clk(delay_reg__U2057_clk),
    .in(delay_reg__U2057_in),
    .out(delay_reg__U2057_out)
);
assign delay_reg__U2115_clk = clk;
assign delay_reg__U2115_in = op_hcompute_lgyy_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U2115 (
    .clk(delay_reg__U2115_clk),
    .in(delay_reg__U2115_in),
    .out(delay_reg__U2115_out)
);
assign delay_reg__U2121_clk = clk;
assign delay_reg__U2121_in = delay_reg__U2115_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U2121 (
    .clk(delay_reg__U2121_clk),
    .in(delay_reg__U2121_in),
    .out(delay_reg__U2121_out)
);
assign delay_reg__U2153_clk = clk;
assign delay_reg__U2153_in = op_hcompute_cim_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U2153 (
    .clk(delay_reg__U2153_clk),
    .in(delay_reg__U2153_in),
    .out(delay_reg__U2153_out)
);
assign delay_reg__U2159_clk = clk;
assign delay_reg__U2159_in = delay_reg__U2153_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U2159 (
    .clk(delay_reg__U2159_clk),
    .in(delay_reg__U2159_in),
    .out(delay_reg__U2159_out)
);
assign delay_reg__U2191_clk = clk;
assign delay_reg__U2191_in = op_hcompute_cim_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U2191 (
    .clk(delay_reg__U2191_clk),
    .in(delay_reg__U2191_in),
    .out(delay_reg__U2191_out)
);
assign delay_reg__U2197_clk = clk;
assign delay_reg__U2197_in = delay_reg__U2191_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U2197 (
    .clk(delay_reg__U2197_clk),
    .in(delay_reg__U2197_in),
    .out(delay_reg__U2197_out)
);
assign delay_reg__U2229_clk = clk;
assign delay_reg__U2229_in = op_hcompute_hw_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U2229 (
    .clk(delay_reg__U2229_clk),
    .in(delay_reg__U2229_in),
    .out(delay_reg__U2229_out)
);
assign delay_reg__U2235_clk = clk;
assign delay_reg__U2235_in = delay_reg__U2229_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U2235 (
    .clk(delay_reg__U2235_clk),
    .in(delay_reg__U2235_in),
    .out(delay_reg__U2235_out)
);
assign grad_x_stencil_clk = clk;
assign grad_x_stencil_flush = flush;
assign grad_x_stencil_rst_n = rst_n;
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_wen = op_hcompute_grad_x_stencil_write_start_out;
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars[2] = op_hcompute_grad_x_stencil_write_start_control_vars_out[2];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars[1] = op_hcompute_grad_x_stencil_write_start_control_vars_out[1];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars[0] = op_hcompute_grad_x_stencil_write_start_control_vars_out[0];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write[0] = op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write[0];
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ren = op_hcompute_lxx_stencil_read_start;
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars[2] = op_hcompute_lxx_stencil_port_controller_d[2];
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars[1] = op_hcompute_lxx_stencil_port_controller_d[1];
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars[0] = op_hcompute_lxx_stencil_port_controller_d[0];
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ren = op_hcompute_lxy_stencil_read_start;
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[0] = op_hcompute_lxy_stencil_port_controller_d[0];
grad_x_stencil_ub grad_x_stencil (
    .clk(grad_x_stencil_clk),
    .flush(grad_x_stencil_flush),
    .rst_n(grad_x_stencil_rst_n),
    .op_hcompute_grad_x_stencil_write_wen(grad_x_stencil_op_hcompute_grad_x_stencil_write_wen),
    .op_hcompute_grad_x_stencil_write_ctrl_vars(grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars),
    .op_hcompute_grad_x_stencil_write(grad_x_stencil_op_hcompute_grad_x_stencil_write),
    .op_hcompute_lxx_stencil_read_ren(grad_x_stencil_op_hcompute_lxx_stencil_read_ren),
    .op_hcompute_lxx_stencil_read_ctrl_vars(grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars),
    .op_hcompute_lxx_stencil_read(grad_x_stencil_op_hcompute_lxx_stencil_read),
    .op_hcompute_lxy_stencil_read_ren(grad_x_stencil_op_hcompute_lxy_stencil_read_ren),
    .op_hcompute_lxy_stencil_read_ctrl_vars(grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars),
    .op_hcompute_lxy_stencil_read(grad_x_stencil_op_hcompute_lxy_stencil_read)
);
assign grad_y_stencil_clk = clk;
assign grad_y_stencil_flush = flush;
assign grad_y_stencil_rst_n = rst_n;
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_wen = op_hcompute_grad_y_stencil_write_start_out;
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars[2] = op_hcompute_grad_y_stencil_write_start_control_vars_out[2];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars[1] = op_hcompute_grad_y_stencil_write_start_control_vars_out[1];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars[0] = op_hcompute_grad_y_stencil_write_start_control_vars_out[0];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write[0] = op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write[0];
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ren = op_hcompute_lxy_stencil_read_start;
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[0] = op_hcompute_lxy_stencil_port_controller_d[0];
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ren = op_hcompute_lyy_stencil_read_start;
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars[2] = op_hcompute_lyy_stencil_port_controller_d[2];
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars[1] = op_hcompute_lyy_stencil_port_controller_d[1];
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars[0] = op_hcompute_lyy_stencil_port_controller_d[0];
grad_y_stencil_ub grad_y_stencil (
    .clk(grad_y_stencil_clk),
    .flush(grad_y_stencil_flush),
    .rst_n(grad_y_stencil_rst_n),
    .op_hcompute_grad_y_stencil_write_wen(grad_y_stencil_op_hcompute_grad_y_stencil_write_wen),
    .op_hcompute_grad_y_stencil_write_ctrl_vars(grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars),
    .op_hcompute_grad_y_stencil_write(grad_y_stencil_op_hcompute_grad_y_stencil_write),
    .op_hcompute_lxy_stencil_read_ren(grad_y_stencil_op_hcompute_lxy_stencil_read_ren),
    .op_hcompute_lxy_stencil_read_ctrl_vars(grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars),
    .op_hcompute_lxy_stencil_read(grad_y_stencil_op_hcompute_lxy_stencil_read),
    .op_hcompute_lyy_stencil_read_ren(grad_y_stencil_op_hcompute_lyy_stencil_read_ren),
    .op_hcompute_lyy_stencil_read_ctrl_vars(grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars),
    .op_hcompute_lyy_stencil_read(grad_y_stencil_op_hcompute_lyy_stencil_read)
);
assign lgxx_stencil_clk = clk;
assign lgxx_stencil_flush = flush;
assign lgxx_stencil_rst_n = rst_n;
assign lgxx_stencil_op_hcompute_cim_stencil_read_ren = op_hcompute_cim_stencil_read_start;
assign lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars[0] = op_hcompute_cim_stencil_port_controller_d[0];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_wen = op_hcompute_lgxx_stencil_1_write_start_out;
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars[2] = op_hcompute_lgxx_stencil_1_write_start_control_vars_out[2];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars[1] = op_hcompute_lgxx_stencil_1_write_start_control_vars_out[1];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars[0] = op_hcompute_lgxx_stencil_1_write_start_control_vars_out[0];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0] = op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0];
lgxx_stencil_ub lgxx_stencil (
    .clk(lgxx_stencil_clk),
    .flush(lgxx_stencil_flush),
    .rst_n(lgxx_stencil_rst_n),
    .op_hcompute_cim_stencil_read_ren(lgxx_stencil_op_hcompute_cim_stencil_read_ren),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgxx_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxx_stencil_1_write_wen(lgxx_stencil_op_hcompute_lgxx_stencil_1_write_wen),
    .op_hcompute_lgxx_stencil_1_write_ctrl_vars(lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_write(lgxx_stencil_op_hcompute_lgxx_stencil_1_write)
);
assign lgxx_stencil_clkwrk_dsa0_clk = clk;
assign lgxx_stencil_clkwrk_dsa0_flush = flush;
assign lgxx_stencil_clkwrk_dsa0_rst_n = rst_n;
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ren = op_hcompute_lgxx_stencil_1_read_start;
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_wen = op_hcompute_lgxx_stencil_write_start_out;
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars[2] = op_hcompute_lgxx_stencil_write_start_control_vars_out[2];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars[1] = op_hcompute_lgxx_stencil_write_start_control_vars_out[1];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars[0] = op_hcompute_lgxx_stencil_write_start_control_vars_out[0];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write[0] = op_hcompute_lgxx_stencil_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write[0];
lgxx_stencil_clkwrk_dsa0_ub lgxx_stencil_clkwrk_dsa0 (
    .clk(lgxx_stencil_clkwrk_dsa0_clk),
    .flush(lgxx_stencil_clkwrk_dsa0_flush),
    .rst_n(lgxx_stencil_clkwrk_dsa0_rst_n),
    .op_hcompute_lgxx_stencil_1_read_ren(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ren),
    .op_hcompute_lgxx_stencil_1_read_ctrl_vars(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_read(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read),
    .op_hcompute_lgxx_stencil_write_wen(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_wen),
    .op_hcompute_lgxx_stencil_write_ctrl_vars(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars),
    .op_hcompute_lgxx_stencil_write(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write)
);
assign lgxy_stencil_clk = clk;
assign lgxy_stencil_flush = flush;
assign lgxy_stencil_rst_n = rst_n;
assign lgxy_stencil_op_hcompute_cim_stencil_read_ren = op_hcompute_cim_stencil_read_start;
assign lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[0] = op_hcompute_cim_stencil_port_controller_d[0];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_wen = op_hcompute_lgxy_stencil_1_write_start_out;
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars[2] = op_hcompute_lgxy_stencil_1_write_start_control_vars_out[2];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars[1] = op_hcompute_lgxy_stencil_1_write_start_control_vars_out[1];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars[0] = op_hcompute_lgxy_stencil_1_write_start_control_vars_out[0];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0] = op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0];
lgxy_stencil_ub lgxy_stencil (
    .clk(lgxy_stencil_clk),
    .flush(lgxy_stencil_flush),
    .rst_n(lgxy_stencil_rst_n),
    .op_hcompute_cim_stencil_read_ren(lgxy_stencil_op_hcompute_cim_stencil_read_ren),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgxy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxy_stencil_1_write_wen(lgxy_stencil_op_hcompute_lgxy_stencil_1_write_wen),
    .op_hcompute_lgxy_stencil_1_write_ctrl_vars(lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_write(lgxy_stencil_op_hcompute_lgxy_stencil_1_write)
);
assign lgxy_stencil_clkwrk_dsa1_clk = clk;
assign lgxy_stencil_clkwrk_dsa1_flush = flush;
assign lgxy_stencil_clkwrk_dsa1_rst_n = rst_n;
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ren = op_hcompute_lgxy_stencil_1_read_start;
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_wen = op_hcompute_lgxy_stencil_write_start_out;
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars[2] = op_hcompute_lgxy_stencil_write_start_control_vars_out[2];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars[1] = op_hcompute_lgxy_stencil_write_start_control_vars_out[1];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars[0] = op_hcompute_lgxy_stencil_write_start_control_vars_out[0];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write[0] = op_hcompute_lgxy_stencil_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write[0];
lgxy_stencil_clkwrk_dsa1_ub lgxy_stencil_clkwrk_dsa1 (
    .clk(lgxy_stencil_clkwrk_dsa1_clk),
    .flush(lgxy_stencil_clkwrk_dsa1_flush),
    .rst_n(lgxy_stencil_clkwrk_dsa1_rst_n),
    .op_hcompute_lgxy_stencil_1_read_ren(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ren),
    .op_hcompute_lgxy_stencil_1_read_ctrl_vars(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_read(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read),
    .op_hcompute_lgxy_stencil_write_wen(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_wen),
    .op_hcompute_lgxy_stencil_write_ctrl_vars(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars),
    .op_hcompute_lgxy_stencil_write(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write)
);
assign lgyy_stencil_clk = clk;
assign lgyy_stencil_flush = flush;
assign lgyy_stencil_rst_n = rst_n;
assign lgyy_stencil_op_hcompute_cim_stencil_read_ren = op_hcompute_cim_stencil_read_start;
assign lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[0] = op_hcompute_cim_stencil_port_controller_d[0];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_wen = op_hcompute_lgyy_stencil_1_write_start_out;
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars[2] = op_hcompute_lgyy_stencil_1_write_start_control_vars_out[2];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars[1] = op_hcompute_lgyy_stencil_1_write_start_control_vars_out[1];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars[0] = op_hcompute_lgyy_stencil_1_write_start_control_vars_out[0];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0] = op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0];
lgyy_stencil_ub lgyy_stencil (
    .clk(lgyy_stencil_clk),
    .flush(lgyy_stencil_flush),
    .rst_n(lgyy_stencil_rst_n),
    .op_hcompute_cim_stencil_read_ren(lgyy_stencil_op_hcompute_cim_stencil_read_ren),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgyy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgyy_stencil_1_write_wen(lgyy_stencil_op_hcompute_lgyy_stencil_1_write_wen),
    .op_hcompute_lgyy_stencil_1_write_ctrl_vars(lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_write(lgyy_stencil_op_hcompute_lgyy_stencil_1_write)
);
assign lgyy_stencil_clkwrk_dsa2_clk = clk;
assign lgyy_stencil_clkwrk_dsa2_flush = flush;
assign lgyy_stencil_clkwrk_dsa2_rst_n = rst_n;
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ren = op_hcompute_lgyy_stencil_1_read_start;
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_wen = op_hcompute_lgyy_stencil_write_start_out;
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars[2] = op_hcompute_lgyy_stencil_write_start_control_vars_out[2];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars[1] = op_hcompute_lgyy_stencil_write_start_control_vars_out[1];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars[0] = op_hcompute_lgyy_stencil_write_start_control_vars_out[0];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write[0] = op_hcompute_lgyy_stencil_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write[0];
lgyy_stencil_clkwrk_dsa2_ub lgyy_stencil_clkwrk_dsa2 (
    .clk(lgyy_stencil_clkwrk_dsa2_clk),
    .flush(lgyy_stencil_clkwrk_dsa2_flush),
    .rst_n(lgyy_stencil_clkwrk_dsa2_rst_n),
    .op_hcompute_lgyy_stencil_1_read_ren(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ren),
    .op_hcompute_lgyy_stencil_1_read_ctrl_vars(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_read(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read),
    .op_hcompute_lgyy_stencil_write_wen(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_wen),
    .op_hcompute_lgyy_stencil_write_ctrl_vars(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars),
    .op_hcompute_lgyy_stencil_write(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write)
);
assign lxx_stencil_clk = clk;
assign lxx_stencil_flush = flush;
assign lxx_stencil_rst_n = rst_n;
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ren = op_hcompute_lgxx_stencil_1_read_start;
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
assign lxx_stencil_op_hcompute_lxx_stencil_write_wen = op_hcompute_lxx_stencil_write_start_out;
assign lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars[2] = op_hcompute_lxx_stencil_write_start_control_vars_out[2];
assign lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars[1] = op_hcompute_lxx_stencil_write_start_control_vars_out[1];
assign lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars[0] = op_hcompute_lxx_stencil_write_start_control_vars_out[0];
assign lxx_stencil_op_hcompute_lxx_stencil_write[0] = op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write[0];
lxx_stencil_ub lxx_stencil (
    .clk(lxx_stencil_clk),
    .flush(lxx_stencil_flush),
    .rst_n(lxx_stencil_rst_n),
    .op_hcompute_lgxx_stencil_1_read_ren(lxx_stencil_op_hcompute_lgxx_stencil_1_read_ren),
    .op_hcompute_lgxx_stencil_1_read_ctrl_vars(lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_read(lxx_stencil_op_hcompute_lgxx_stencil_1_read),
    .op_hcompute_lxx_stencil_write_wen(lxx_stencil_op_hcompute_lxx_stencil_write_wen),
    .op_hcompute_lxx_stencil_write_ctrl_vars(lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars),
    .op_hcompute_lxx_stencil_write(lxx_stencil_op_hcompute_lxx_stencil_write)
);
assign lxy_stencil_clk = clk;
assign lxy_stencil_flush = flush;
assign lxy_stencil_rst_n = rst_n;
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ren = op_hcompute_lgxy_stencil_1_read_start;
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
assign lxy_stencil_op_hcompute_lxy_stencil_write_wen = op_hcompute_lxy_stencil_write_start_out;
assign lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars[2] = op_hcompute_lxy_stencil_write_start_control_vars_out[2];
assign lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars[1] = op_hcompute_lxy_stencil_write_start_control_vars_out[1];
assign lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars[0] = op_hcompute_lxy_stencil_write_start_control_vars_out[0];
assign lxy_stencil_op_hcompute_lxy_stencil_write[0] = op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write[0];
lxy_stencil_ub lxy_stencil (
    .clk(lxy_stencil_clk),
    .flush(lxy_stencil_flush),
    .rst_n(lxy_stencil_rst_n),
    .op_hcompute_lgxy_stencil_1_read_ren(lxy_stencil_op_hcompute_lgxy_stencil_1_read_ren),
    .op_hcompute_lgxy_stencil_1_read_ctrl_vars(lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_read(lxy_stencil_op_hcompute_lgxy_stencil_1_read),
    .op_hcompute_lxy_stencil_write_wen(lxy_stencil_op_hcompute_lxy_stencil_write_wen),
    .op_hcompute_lxy_stencil_write_ctrl_vars(lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars),
    .op_hcompute_lxy_stencil_write(lxy_stencil_op_hcompute_lxy_stencil_write)
);
assign lyy_stencil_clk = clk;
assign lyy_stencil_flush = flush;
assign lyy_stencil_rst_n = rst_n;
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ren = op_hcompute_lgyy_stencil_1_read_start;
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
assign lyy_stencil_op_hcompute_lyy_stencil_write_wen = op_hcompute_lyy_stencil_write_start_out;
assign lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars[2] = op_hcompute_lyy_stencil_write_start_control_vars_out[2];
assign lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars[1] = op_hcompute_lyy_stencil_write_start_control_vars_out[1];
assign lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars[0] = op_hcompute_lyy_stencil_write_start_control_vars_out[0];
assign lyy_stencil_op_hcompute_lyy_stencil_write[0] = op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write[0];
lyy_stencil_ub lyy_stencil (
    .clk(lyy_stencil_clk),
    .flush(lyy_stencil_flush),
    .rst_n(lyy_stencil_rst_n),
    .op_hcompute_lgyy_stencil_1_read_ren(lyy_stencil_op_hcompute_lgyy_stencil_1_read_ren),
    .op_hcompute_lgyy_stencil_1_read_ctrl_vars(lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_read(lyy_stencil_op_hcompute_lgyy_stencil_1_read),
    .op_hcompute_lyy_stencil_write_wen(lyy_stencil_op_hcompute_lyy_stencil_write_wen),
    .op_hcompute_lyy_stencil_write_ctrl_vars(lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars),
    .op_hcompute_lyy_stencil_write(lyy_stencil_op_hcompute_lyy_stencil_write)
);
assign op_hcompute_cim_output_stencil_clk = clk;
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[8] = cim_stencil_op_hcompute_cim_output_stencil_read[8];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[7] = cim_stencil_op_hcompute_cim_output_stencil_read[7];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[6] = cim_stencil_op_hcompute_cim_output_stencil_read[6];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[5] = cim_stencil_op_hcompute_cim_output_stencil_read[5];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[4] = cim_stencil_op_hcompute_cim_output_stencil_read[4];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[3] = cim_stencil_op_hcompute_cim_output_stencil_read[3];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[2] = cim_stencil_op_hcompute_cim_output_stencil_read[2];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[1] = cim_stencil_op_hcompute_cim_output_stencil_read[1];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[0] = cim_stencil_op_hcompute_cim_output_stencil_read[0];
cu_op_hcompute_cim_output_stencil op_hcompute_cim_output_stencil (
    .clk(op_hcompute_cim_output_stencil_clk),
    .cim_stencil_op_hcompute_cim_output_stencil_read(op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read),
    .cim_output_stencil_op_hcompute_cim_output_stencil_write(op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write)
);
assign op_hcompute_cim_output_stencil_exe_start_clk = clk;
assign op_hcompute_cim_output_stencil_exe_start_in = op_hcompute_cim_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_cim_output_stencil_exe_start (
    .clk(op_hcompute_cim_output_stencil_exe_start_clk),
    .in(op_hcompute_cim_output_stencil_exe_start_in),
    .out(op_hcompute_cim_output_stencil_exe_start_out)
);
assign op_hcompute_cim_output_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_cim_output_stencil_exe_start_control_vars_in[2] = op_hcompute_cim_output_stencil_port_controller_d[2];
assign op_hcompute_cim_output_stencil_exe_start_control_vars_in[1] = op_hcompute_cim_output_stencil_port_controller_d[1];
assign op_hcompute_cim_output_stencil_exe_start_control_vars_in[0] = op_hcompute_cim_output_stencil_port_controller_d[0];
array_delay_U2208 op_hcompute_cim_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_cim_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_cim_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_cim_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_cim_output_stencil_port_controller_clk = clk;
affine_controller__U2174 op_hcompute_cim_output_stencil_port_controller (
    .clk(op_hcompute_cim_output_stencil_port_controller_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_d)
);
assign op_hcompute_cim_output_stencil_port_controller_U1529_clk = clk;
affine_controller__U1512 op_hcompute_cim_output_stencil_port_controller_U1529 (
    .clk(op_hcompute_cim_output_stencil_port_controller_U1529_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1529_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1529_d)
);
assign op_hcompute_cim_output_stencil_port_controller_U1547_clk = clk;
affine_controller__U1530 op_hcompute_cim_output_stencil_port_controller_U1547 (
    .clk(op_hcompute_cim_output_stencil_port_controller_U1547_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1547_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1547_d)
);
assign op_hcompute_cim_output_stencil_port_controller_U1565_clk = clk;
affine_controller__U1548 op_hcompute_cim_output_stencil_port_controller_U1565 (
    .clk(op_hcompute_cim_output_stencil_port_controller_U1565_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1565_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1565_d)
);
assign op_hcompute_cim_output_stencil_port_controller_U1583_clk = clk;
affine_controller__U1566 op_hcompute_cim_output_stencil_port_controller_U1583 (
    .clk(op_hcompute_cim_output_stencil_port_controller_U1583_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1583_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1583_d)
);
assign op_hcompute_cim_output_stencil_port_controller_U1601_clk = clk;
affine_controller__U1584 op_hcompute_cim_output_stencil_port_controller_U1601 (
    .clk(op_hcompute_cim_output_stencil_port_controller_U1601_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1601_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1601_d)
);
assign op_hcompute_cim_output_stencil_port_controller_U1619_clk = clk;
affine_controller__U1602 op_hcompute_cim_output_stencil_port_controller_U1619 (
    .clk(op_hcompute_cim_output_stencil_port_controller_U1619_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1619_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1619_d)
);
assign op_hcompute_cim_output_stencil_read_start = op_hcompute_cim_output_stencil_port_controller_valid;
assign op_hcompute_cim_output_stencil_write_start_in = op_hcompute_cim_output_stencil_exe_start_out;
op_hcompute_cim_output_stencil_write_start_pt__U2203 op_hcompute_cim_output_stencil_write_start (
    .in(op_hcompute_cim_output_stencil_write_start_in),
    .out(op_hcompute_cim_output_stencil_write_start_out)
);
assign op_hcompute_cim_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_cim_output_stencil_write_start_control_vars_in[2] = op_hcompute_cim_output_stencil_port_controller_d[2];
assign op_hcompute_cim_output_stencil_write_start_control_vars_in[1] = op_hcompute_cim_output_stencil_port_controller_d[1];
assign op_hcompute_cim_output_stencil_write_start_control_vars_in[0] = op_hcompute_cim_output_stencil_port_controller_d[0];
array_delay_U2204 op_hcompute_cim_output_stencil_write_start_control_vars (
    .clk(op_hcompute_cim_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_cim_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_cim_output_stencil_write_start_control_vars_out)
);
assign op_hcompute_cim_stencil_clk = clk;
assign op_hcompute_cim_stencil_lgxx_stencil_op_hcompute_cim_stencil_read[0] = lgxx_stencil_op_hcompute_cim_stencil_read[0];
assign op_hcompute_cim_stencil_lgxy_stencil_op_hcompute_cim_stencil_read[0] = lgxy_stencil_op_hcompute_cim_stencil_read[0];
assign op_hcompute_cim_stencil_lgyy_stencil_op_hcompute_cim_stencil_read[0] = lgyy_stencil_op_hcompute_cim_stencil_read[0];
cu_op_hcompute_cim_stencil op_hcompute_cim_stencil (
    .clk(op_hcompute_cim_stencil_clk),
    .lgxx_stencil_op_hcompute_cim_stencil_read(op_hcompute_cim_stencil_lgxx_stencil_op_hcompute_cim_stencil_read),
    .lgxy_stencil_op_hcompute_cim_stencil_read(op_hcompute_cim_stencil_lgxy_stencil_op_hcompute_cim_stencil_read),
    .lgyy_stencil_op_hcompute_cim_stencil_read(op_hcompute_cim_stencil_lgyy_stencil_op_hcompute_cim_stencil_read),
    .cim_stencil_op_hcompute_cim_stencil_write(op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write)
);
assign op_hcompute_cim_stencil_exe_start_clk = clk;
assign op_hcompute_cim_stencil_exe_start_in = op_hcompute_cim_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_cim_stencil_exe_start (
    .clk(op_hcompute_cim_stencil_exe_start_clk),
    .in(op_hcompute_cim_stencil_exe_start_in),
    .out(op_hcompute_cim_stencil_exe_start_out)
);
assign op_hcompute_cim_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_cim_stencil_exe_start_control_vars_in[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign op_hcompute_cim_stencil_exe_start_control_vars_in[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign op_hcompute_cim_stencil_exe_start_control_vars_in[0] = op_hcompute_cim_stencil_port_controller_d[0];
array_delay_U2170 op_hcompute_cim_stencil_exe_start_control_vars (
    .clk(op_hcompute_cim_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_cim_stencil_exe_start_control_vars_in),
    .out(op_hcompute_cim_stencil_exe_start_control_vars_out)
);
assign op_hcompute_cim_stencil_port_controller_clk = clk;
affine_controller__U2136 op_hcompute_cim_stencil_port_controller (
    .clk(op_hcompute_cim_stencil_port_controller_clk),
    .valid(op_hcompute_cim_stencil_port_controller_valid),
    .d(op_hcompute_cim_stencil_port_controller_d)
);
assign op_hcompute_cim_stencil_port_controller_U1349_clk = clk;
affine_controller__U1332 op_hcompute_cim_stencil_port_controller_U1349 (
    .clk(op_hcompute_cim_stencil_port_controller_U1349_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1349_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1349_d)
);
assign op_hcompute_cim_stencil_port_controller_U1367_clk = clk;
affine_controller__U1350 op_hcompute_cim_stencil_port_controller_U1367 (
    .clk(op_hcompute_cim_stencil_port_controller_U1367_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1367_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1367_d)
);
assign op_hcompute_cim_stencil_port_controller_U1385_clk = clk;
affine_controller__U1368 op_hcompute_cim_stencil_port_controller_U1385 (
    .clk(op_hcompute_cim_stencil_port_controller_U1385_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1385_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1385_d)
);
assign op_hcompute_cim_stencil_port_controller_U1403_clk = clk;
affine_controller__U1386 op_hcompute_cim_stencil_port_controller_U1403 (
    .clk(op_hcompute_cim_stencil_port_controller_U1403_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1403_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1403_d)
);
assign op_hcompute_cim_stencil_port_controller_U1421_clk = clk;
affine_controller__U1404 op_hcompute_cim_stencil_port_controller_U1421 (
    .clk(op_hcompute_cim_stencil_port_controller_U1421_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1421_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1421_d)
);
assign op_hcompute_cim_stencil_port_controller_U1439_clk = clk;
affine_controller__U1422 op_hcompute_cim_stencil_port_controller_U1439 (
    .clk(op_hcompute_cim_stencil_port_controller_U1439_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1439_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1439_d)
);
assign op_hcompute_cim_stencil_port_controller_U1457_clk = clk;
affine_controller__U1440 op_hcompute_cim_stencil_port_controller_U1457 (
    .clk(op_hcompute_cim_stencil_port_controller_U1457_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1457_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1457_d)
);
assign op_hcompute_cim_stencil_port_controller_U1475_clk = clk;
affine_controller__U1458 op_hcompute_cim_stencil_port_controller_U1475 (
    .clk(op_hcompute_cim_stencil_port_controller_U1475_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1475_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1475_d)
);
assign op_hcompute_cim_stencil_port_controller_U1493_clk = clk;
affine_controller__U1476 op_hcompute_cim_stencil_port_controller_U1493 (
    .clk(op_hcompute_cim_stencil_port_controller_U1493_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1493_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1493_d)
);
assign op_hcompute_cim_stencil_port_controller_U1511_clk = clk;
affine_controller__U1494 op_hcompute_cim_stencil_port_controller_U1511 (
    .clk(op_hcompute_cim_stencil_port_controller_U1511_clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1511_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1511_d)
);
assign op_hcompute_cim_stencil_read_start = op_hcompute_cim_stencil_port_controller_valid;
assign op_hcompute_cim_stencil_write_start_in = op_hcompute_cim_stencil_exe_start_out;
op_hcompute_cim_stencil_write_start_pt__U2165 op_hcompute_cim_stencil_write_start (
    .in(op_hcompute_cim_stencil_write_start_in),
    .out(op_hcompute_cim_stencil_write_start_out)
);
assign op_hcompute_cim_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_cim_stencil_write_start_control_vars_in[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign op_hcompute_cim_stencil_write_start_control_vars_in[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign op_hcompute_cim_stencil_write_start_control_vars_in[0] = op_hcompute_cim_stencil_port_controller_d[0];
array_delay_U2166 op_hcompute_cim_stencil_write_start_control_vars (
    .clk(op_hcompute_cim_stencil_write_start_control_vars_clk),
    .in(op_hcompute_cim_stencil_write_start_control_vars_in),
    .out(op_hcompute_cim_stencil_write_start_control_vars_out)
);
assign op_hcompute_grad_x_stencil_clk = clk;
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[5] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[5];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[4] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[4];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[3] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[3];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[2] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[2];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[1] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[1];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[0] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[0];
cu_op_hcompute_grad_x_stencil op_hcompute_grad_x_stencil (
    .clk(op_hcompute_grad_x_stencil_clk),
    .padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read(op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read),
    .grad_x_stencil_op_hcompute_grad_x_stencil_write(op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write)
);
assign op_hcompute_grad_x_stencil_exe_start_clk = clk;
assign op_hcompute_grad_x_stencil_exe_start_in = op_hcompute_grad_x_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_grad_x_stencil_exe_start (
    .clk(op_hcompute_grad_x_stencil_exe_start_clk),
    .in(op_hcompute_grad_x_stencil_exe_start_in),
    .out(op_hcompute_grad_x_stencil_exe_start_out)
);
assign op_hcompute_grad_x_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_grad_x_stencil_exe_start_control_vars_in[2] = op_hcompute_grad_x_stencil_port_controller_d[2];
assign op_hcompute_grad_x_stencil_exe_start_control_vars_in[1] = op_hcompute_grad_x_stencil_port_controller_d[1];
assign op_hcompute_grad_x_stencil_exe_start_control_vars_in[0] = op_hcompute_grad_x_stencil_port_controller_d[0];
array_delay_U1788 op_hcompute_grad_x_stencil_exe_start_control_vars (
    .clk(op_hcompute_grad_x_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_grad_x_stencil_exe_start_control_vars_in),
    .out(op_hcompute_grad_x_stencil_exe_start_control_vars_out)
);
assign op_hcompute_grad_x_stencil_port_controller_clk = clk;
affine_controller__U1754 op_hcompute_grad_x_stencil_port_controller (
    .clk(op_hcompute_grad_x_stencil_port_controller_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_d)
);
assign op_hcompute_grad_x_stencil_port_controller_U125_clk = clk;
affine_controller__U108 op_hcompute_grad_x_stencil_port_controller_U125 (
    .clk(op_hcompute_grad_x_stencil_port_controller_U125_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U125_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U125_d)
);
assign op_hcompute_grad_x_stencil_port_controller_U143_clk = clk;
affine_controller__U126 op_hcompute_grad_x_stencil_port_controller_U143 (
    .clk(op_hcompute_grad_x_stencil_port_controller_U143_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U143_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U143_d)
);
assign op_hcompute_grad_x_stencil_port_controller_U161_clk = clk;
affine_controller__U144 op_hcompute_grad_x_stencil_port_controller_U161 (
    .clk(op_hcompute_grad_x_stencil_port_controller_U161_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U161_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U161_d)
);
assign op_hcompute_grad_x_stencil_port_controller_U179_clk = clk;
affine_controller__U162 op_hcompute_grad_x_stencil_port_controller_U179 (
    .clk(op_hcompute_grad_x_stencil_port_controller_U179_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U179_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U179_d)
);
assign op_hcompute_grad_x_stencil_port_controller_U197_clk = clk;
affine_controller__U180 op_hcompute_grad_x_stencil_port_controller_U197 (
    .clk(op_hcompute_grad_x_stencil_port_controller_U197_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U197_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U197_d)
);
assign op_hcompute_grad_x_stencil_port_controller_U215_clk = clk;
affine_controller__U198 op_hcompute_grad_x_stencil_port_controller_U215 (
    .clk(op_hcompute_grad_x_stencil_port_controller_U215_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U215_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U215_d)
);
assign op_hcompute_grad_x_stencil_read_start = op_hcompute_grad_x_stencil_port_controller_valid;
assign op_hcompute_grad_x_stencil_write_start_in = op_hcompute_grad_x_stencil_exe_start_out;
op_hcompute_grad_x_stencil_write_start_pt__U1783 op_hcompute_grad_x_stencil_write_start (
    .in(op_hcompute_grad_x_stencil_write_start_in),
    .out(op_hcompute_grad_x_stencil_write_start_out)
);
assign op_hcompute_grad_x_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_grad_x_stencil_write_start_control_vars_in[2] = op_hcompute_grad_x_stencil_port_controller_d[2];
assign op_hcompute_grad_x_stencil_write_start_control_vars_in[1] = op_hcompute_grad_x_stencil_port_controller_d[1];
assign op_hcompute_grad_x_stencil_write_start_control_vars_in[0] = op_hcompute_grad_x_stencil_port_controller_d[0];
array_delay_U1784 op_hcompute_grad_x_stencil_write_start_control_vars (
    .clk(op_hcompute_grad_x_stencil_write_start_control_vars_clk),
    .in(op_hcompute_grad_x_stencil_write_start_control_vars_in),
    .out(op_hcompute_grad_x_stencil_write_start_control_vars_out)
);
assign op_hcompute_grad_y_stencil_clk = clk;
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[5] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[5];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[4] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[4];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[3] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[3];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[2] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[2];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[1] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[1];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[0] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[0];
cu_op_hcompute_grad_y_stencil op_hcompute_grad_y_stencil (
    .clk(op_hcompute_grad_y_stencil_clk),
    .padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read(op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read),
    .grad_y_stencil_op_hcompute_grad_y_stencil_write(op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write)
);
assign op_hcompute_grad_y_stencil_exe_start_clk = clk;
assign op_hcompute_grad_y_stencil_exe_start_in = op_hcompute_grad_y_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_grad_y_stencil_exe_start (
    .clk(op_hcompute_grad_y_stencil_exe_start_clk),
    .in(op_hcompute_grad_y_stencil_exe_start_in),
    .out(op_hcompute_grad_y_stencil_exe_start_out)
);
assign op_hcompute_grad_y_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_grad_y_stencil_exe_start_control_vars_in[2] = op_hcompute_grad_y_stencil_port_controller_d[2];
assign op_hcompute_grad_y_stencil_exe_start_control_vars_in[1] = op_hcompute_grad_y_stencil_port_controller_d[1];
assign op_hcompute_grad_y_stencil_exe_start_control_vars_in[0] = op_hcompute_grad_y_stencil_port_controller_d[0];
array_delay_U1928 op_hcompute_grad_y_stencil_exe_start_control_vars (
    .clk(op_hcompute_grad_y_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_grad_y_stencil_exe_start_control_vars_in),
    .out(op_hcompute_grad_y_stencil_exe_start_control_vars_out)
);
assign op_hcompute_grad_y_stencil_port_controller_clk = clk;
affine_controller__U1894 op_hcompute_grad_y_stencil_port_controller (
    .clk(op_hcompute_grad_y_stencil_port_controller_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_d)
);
assign op_hcompute_grad_y_stencil_port_controller_U557_clk = clk;
affine_controller__U540 op_hcompute_grad_y_stencil_port_controller_U557 (
    .clk(op_hcompute_grad_y_stencil_port_controller_U557_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U557_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U557_d)
);
assign op_hcompute_grad_y_stencil_port_controller_U575_clk = clk;
affine_controller__U558 op_hcompute_grad_y_stencil_port_controller_U575 (
    .clk(op_hcompute_grad_y_stencil_port_controller_U575_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U575_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U575_d)
);
assign op_hcompute_grad_y_stencil_port_controller_U593_clk = clk;
affine_controller__U576 op_hcompute_grad_y_stencil_port_controller_U593 (
    .clk(op_hcompute_grad_y_stencil_port_controller_U593_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U593_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U593_d)
);
assign op_hcompute_grad_y_stencil_port_controller_U611_clk = clk;
affine_controller__U594 op_hcompute_grad_y_stencil_port_controller_U611 (
    .clk(op_hcompute_grad_y_stencil_port_controller_U611_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U611_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U611_d)
);
assign op_hcompute_grad_y_stencil_port_controller_U629_clk = clk;
affine_controller__U612 op_hcompute_grad_y_stencil_port_controller_U629 (
    .clk(op_hcompute_grad_y_stencil_port_controller_U629_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U629_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U629_d)
);
assign op_hcompute_grad_y_stencil_port_controller_U647_clk = clk;
affine_controller__U630 op_hcompute_grad_y_stencil_port_controller_U647 (
    .clk(op_hcompute_grad_y_stencil_port_controller_U647_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U647_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U647_d)
);
assign op_hcompute_grad_y_stencil_read_start = op_hcompute_grad_y_stencil_port_controller_valid;
assign op_hcompute_grad_y_stencil_write_start_in = op_hcompute_grad_y_stencil_exe_start_out;
op_hcompute_grad_y_stencil_write_start_pt__U1923 op_hcompute_grad_y_stencil_write_start (
    .in(op_hcompute_grad_y_stencil_write_start_in),
    .out(op_hcompute_grad_y_stencil_write_start_out)
);
assign op_hcompute_grad_y_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_grad_y_stencil_write_start_control_vars_in[2] = op_hcompute_grad_y_stencil_port_controller_d[2];
assign op_hcompute_grad_y_stencil_write_start_control_vars_in[1] = op_hcompute_grad_y_stencil_port_controller_d[1];
assign op_hcompute_grad_y_stencil_write_start_control_vars_in[0] = op_hcompute_grad_y_stencil_port_controller_d[0];
array_delay_U1924 op_hcompute_grad_y_stencil_write_start_control_vars (
    .clk(op_hcompute_grad_y_stencil_write_start_control_vars_clk),
    .in(op_hcompute_grad_y_stencil_write_start_control_vars_in),
    .out(op_hcompute_grad_y_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read[0] = cim_output_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .cim_output_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write)
);
assign op_hcompute_hw_output_stencil_exe_start_clk = clk;
assign op_hcompute_hw_output_stencil_exe_start_in = op_hcompute_hw_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_output_stencil_exe_start (
    .clk(op_hcompute_hw_output_stencil_exe_start_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_in),
    .out(op_hcompute_hw_output_stencil_exe_start_out)
);
assign op_hcompute_hw_output_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U2246 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U2212 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1637_clk = clk;
affine_controller__U1620 op_hcompute_hw_output_stencil_port_controller_U1637 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1637_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1637_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1637_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1655_clk = clk;
affine_controller__U1638 op_hcompute_hw_output_stencil_port_controller_U1655 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1655_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1655_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1655_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1673_clk = clk;
affine_controller__U1656 op_hcompute_hw_output_stencil_port_controller_U1673 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1673_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1673_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1673_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1691_clk = clk;
affine_controller__U1674 op_hcompute_hw_output_stencil_port_controller_U1691 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1691_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1691_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1691_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1709_clk = clk;
affine_controller__U1692 op_hcompute_hw_output_stencil_port_controller_U1709 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1709_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1709_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1709_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1727_clk = clk;
affine_controller__U1710 op_hcompute_hw_output_stencil_port_controller_U1727 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1727_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1727_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1727_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start_in = op_hcompute_hw_output_stencil_exe_start_out;
op_hcompute_hw_output_stencil_write_start_pt__U2241 op_hcompute_hw_output_stencil_write_start (
    .in(op_hcompute_hw_output_stencil_write_start_in),
    .out(hw_output_stencil_op_hcompute_hw_output_stencil_write_en)
);
assign op_hcompute_hw_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U2242 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign op_hcompute_lgxx_stencil_clk = clk;
cu_op_hcompute_lgxx_stencil op_hcompute_lgxx_stencil (
    .clk(op_hcompute_lgxx_stencil_clk),
    .lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write(op_hcompute_lgxx_stencil_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write)
);
assign op_hcompute_lgxx_stencil_1_clk = clk;
assign op_hcompute_lgxx_stencil_1_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read[0] = lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read[0];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[8] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[8];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[7] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[7];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[6] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[6];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[5] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[5];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[4] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[4];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[3] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[3];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[2] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[2];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[1] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[1];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[0] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[0];
cu_op_hcompute_lgxx_stencil_1 op_hcompute_lgxx_stencil_1 (
    .clk(op_hcompute_lgxx_stencil_1_clk),
    .lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read(op_hcompute_lgxx_stencil_1_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read),
    .lxx_stencil_op_hcompute_lgxx_stencil_1_read(op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read),
    .lgxx_stencil_op_hcompute_lgxx_stencil_1_write(op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write)
);
assign op_hcompute_lgxx_stencil_1_exe_start_clk = clk;
assign op_hcompute_lgxx_stencil_1_exe_start_in = op_hcompute_lgxx_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxx_stencil_1_exe_start (
    .clk(op_hcompute_lgxx_stencil_1_exe_start_clk),
    .in(op_hcompute_lgxx_stencil_1_exe_start_in),
    .out(op_hcompute_lgxx_stencil_1_exe_start_out)
);
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_in[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_in[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_in[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
array_delay_U1890 op_hcompute_lgxx_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_lgxx_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_lgxx_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_lgxx_stencil_1_port_controller_clk = clk;
affine_controller__U1856 op_hcompute_lgxx_stencil_1_port_controller (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U413_clk = clk;
affine_controller__U396 op_hcompute_lgxx_stencil_1_port_controller_U413 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U413_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U413_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U413_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U431_clk = clk;
affine_controller__U414 op_hcompute_lgxx_stencil_1_port_controller_U431 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U431_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U431_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U431_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U449_clk = clk;
affine_controller__U432 op_hcompute_lgxx_stencil_1_port_controller_U449 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U449_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U449_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U449_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U467_clk = clk;
affine_controller__U450 op_hcompute_lgxx_stencil_1_port_controller_U467 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U467_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U467_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U467_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U485_clk = clk;
affine_controller__U468 op_hcompute_lgxx_stencil_1_port_controller_U485 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U485_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U485_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U485_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U503_clk = clk;
affine_controller__U486 op_hcompute_lgxx_stencil_1_port_controller_U503 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U503_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U503_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U503_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U521_clk = clk;
affine_controller__U504 op_hcompute_lgxx_stencil_1_port_controller_U521 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U521_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U521_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U521_d)
);
assign op_hcompute_lgxx_stencil_1_port_controller_U539_clk = clk;
affine_controller__U522 op_hcompute_lgxx_stencil_1_port_controller_U539 (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_U539_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U539_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U539_d)
);
assign op_hcompute_lgxx_stencil_1_read_start = op_hcompute_lgxx_stencil_1_port_controller_valid;
assign op_hcompute_lgxx_stencil_1_write_start_in = op_hcompute_lgxx_stencil_1_exe_start_out;
op_hcompute_lgxx_stencil_1_write_start_pt__U1885 op_hcompute_lgxx_stencil_1_write_start (
    .in(op_hcompute_lgxx_stencil_1_write_start_in),
    .out(op_hcompute_lgxx_stencil_1_write_start_out)
);
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_in[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_in[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_in[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
array_delay_U1886 op_hcompute_lgxx_stencil_1_write_start_control_vars (
    .clk(op_hcompute_lgxx_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_lgxx_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_lgxx_stencil_exe_start_clk = clk;
assign op_hcompute_lgxx_stencil_exe_start_in = op_hcompute_lgxx_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxx_stencil_exe_start (
    .clk(op_hcompute_lgxx_stencil_exe_start_clk),
    .in(op_hcompute_lgxx_stencil_exe_start_in),
    .out(op_hcompute_lgxx_stencil_exe_start_out)
);
assign op_hcompute_lgxx_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lgxx_stencil_exe_start_control_vars_in[2] = op_hcompute_lgxx_stencil_port_controller_d[2];
assign op_hcompute_lgxx_stencil_exe_start_control_vars_in[1] = op_hcompute_lgxx_stencil_port_controller_d[1];
assign op_hcompute_lgxx_stencil_exe_start_control_vars_in[0] = op_hcompute_lgxx_stencil_port_controller_d[0];
array_delay_U1852 op_hcompute_lgxx_stencil_exe_start_control_vars (
    .clk(op_hcompute_lgxx_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lgxx_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lgxx_stencil_port_controller_clk = clk;
affine_controller__U1830 op_hcompute_lgxx_stencil_port_controller (
    .clk(op_hcompute_lgxx_stencil_port_controller_clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_d)
);
assign op_hcompute_lgxx_stencil_port_controller_U341_clk = clk;
affine_controller__U324 op_hcompute_lgxx_stencil_port_controller_U341 (
    .clk(op_hcompute_lgxx_stencil_port_controller_U341_clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_U341_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_U341_d)
);
assign op_hcompute_lgxx_stencil_port_controller_U359_clk = clk;
affine_controller__U342 op_hcompute_lgxx_stencil_port_controller_U359 (
    .clk(op_hcompute_lgxx_stencil_port_controller_U359_clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_U359_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_U359_d)
);
assign op_hcompute_lgxx_stencil_port_controller_U377_clk = clk;
affine_controller__U360 op_hcompute_lgxx_stencil_port_controller_U377 (
    .clk(op_hcompute_lgxx_stencil_port_controller_U377_clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_U377_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_U377_d)
);
assign op_hcompute_lgxx_stencil_port_controller_U395_clk = clk;
affine_controller__U378 op_hcompute_lgxx_stencil_port_controller_U395 (
    .clk(op_hcompute_lgxx_stencil_port_controller_U395_clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_U395_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_U395_d)
);
assign op_hcompute_lgxx_stencil_read_start = op_hcompute_lgxx_stencil_port_controller_valid;
assign op_hcompute_lgxx_stencil_write_start_in = op_hcompute_lgxx_stencil_exe_start_out;
op_hcompute_lgxx_stencil_write_start_pt__U1847 op_hcompute_lgxx_stencil_write_start (
    .in(op_hcompute_lgxx_stencil_write_start_in),
    .out(op_hcompute_lgxx_stencil_write_start_out)
);
assign op_hcompute_lgxx_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lgxx_stencil_write_start_control_vars_in[2] = op_hcompute_lgxx_stencil_port_controller_d[2];
assign op_hcompute_lgxx_stencil_write_start_control_vars_in[1] = op_hcompute_lgxx_stencil_port_controller_d[1];
assign op_hcompute_lgxx_stencil_write_start_control_vars_in[0] = op_hcompute_lgxx_stencil_port_controller_d[0];
array_delay_U1848 op_hcompute_lgxx_stencil_write_start_control_vars (
    .clk(op_hcompute_lgxx_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lgxx_stencil_write_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_write_start_control_vars_out)
);
assign op_hcompute_lgxy_stencil_clk = clk;
cu_op_hcompute_lgxy_stencil op_hcompute_lgxy_stencil (
    .clk(op_hcompute_lgxy_stencil_clk),
    .lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write(op_hcompute_lgxy_stencil_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write)
);
assign op_hcompute_lgxy_stencil_1_clk = clk;
assign op_hcompute_lgxy_stencil_1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read[0] = lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read[0];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[8] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[8];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[7] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[7];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[6] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[6];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[5] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[5];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[4] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[4];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[3] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[3];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[2] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[2];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[1] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[1];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[0] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[0];
cu_op_hcompute_lgxy_stencil_1 op_hcompute_lgxy_stencil_1 (
    .clk(op_hcompute_lgxy_stencil_1_clk),
    .lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read(op_hcompute_lgxy_stencil_1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read),
    .lxy_stencil_op_hcompute_lgxy_stencil_1_read(op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read),
    .lgxy_stencil_op_hcompute_lgxy_stencil_1_write(op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write)
);
assign op_hcompute_lgxy_stencil_1_exe_start_clk = clk;
assign op_hcompute_lgxy_stencil_1_exe_start_in = op_hcompute_lgxy_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxy_stencil_1_exe_start (
    .clk(op_hcompute_lgxy_stencil_1_exe_start_clk),
    .in(op_hcompute_lgxy_stencil_1_exe_start_in),
    .out(op_hcompute_lgxy_stencil_1_exe_start_out)
);
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_in[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_in[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_in[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
array_delay_U2030 op_hcompute_lgxy_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_lgxy_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_lgxy_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_lgxy_stencil_1_port_controller_clk = clk;
affine_controller__U1996 op_hcompute_lgxy_stencil_1_port_controller (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U1007_clk = clk;
affine_controller__U990 op_hcompute_lgxy_stencil_1_port_controller_U1007 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U1007_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U1007_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U1007_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U881_clk = clk;
affine_controller__U864 op_hcompute_lgxy_stencil_1_port_controller_U881 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U881_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U881_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U881_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U899_clk = clk;
affine_controller__U882 op_hcompute_lgxy_stencil_1_port_controller_U899 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U899_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U899_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U899_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U917_clk = clk;
affine_controller__U900 op_hcompute_lgxy_stencil_1_port_controller_U917 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U917_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U917_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U917_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U935_clk = clk;
affine_controller__U918 op_hcompute_lgxy_stencil_1_port_controller_U935 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U935_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U935_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U935_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U953_clk = clk;
affine_controller__U936 op_hcompute_lgxy_stencil_1_port_controller_U953 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U953_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U953_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U953_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U971_clk = clk;
affine_controller__U954 op_hcompute_lgxy_stencil_1_port_controller_U971 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U971_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U971_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U971_d)
);
assign op_hcompute_lgxy_stencil_1_port_controller_U989_clk = clk;
affine_controller__U972 op_hcompute_lgxy_stencil_1_port_controller_U989 (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_U989_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U989_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U989_d)
);
assign op_hcompute_lgxy_stencil_1_read_start = op_hcompute_lgxy_stencil_1_port_controller_valid;
assign op_hcompute_lgxy_stencil_1_write_start_in = op_hcompute_lgxy_stencil_1_exe_start_out;
op_hcompute_lgxy_stencil_1_write_start_pt__U2025 op_hcompute_lgxy_stencil_1_write_start (
    .in(op_hcompute_lgxy_stencil_1_write_start_in),
    .out(op_hcompute_lgxy_stencil_1_write_start_out)
);
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_in[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_in[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_in[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
array_delay_U2026 op_hcompute_lgxy_stencil_1_write_start_control_vars (
    .clk(op_hcompute_lgxy_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_lgxy_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_lgxy_stencil_exe_start_clk = clk;
assign op_hcompute_lgxy_stencil_exe_start_in = op_hcompute_lgxy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxy_stencil_exe_start (
    .clk(op_hcompute_lgxy_stencil_exe_start_clk),
    .in(op_hcompute_lgxy_stencil_exe_start_in),
    .out(op_hcompute_lgxy_stencil_exe_start_out)
);
assign op_hcompute_lgxy_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lgxy_stencil_exe_start_control_vars_in[2] = op_hcompute_lgxy_stencil_port_controller_d[2];
assign op_hcompute_lgxy_stencil_exe_start_control_vars_in[1] = op_hcompute_lgxy_stencil_port_controller_d[1];
assign op_hcompute_lgxy_stencil_exe_start_control_vars_in[0] = op_hcompute_lgxy_stencil_port_controller_d[0];
array_delay_U1992 op_hcompute_lgxy_stencil_exe_start_control_vars (
    .clk(op_hcompute_lgxy_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lgxy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lgxy_stencil_port_controller_clk = clk;
affine_controller__U1970 op_hcompute_lgxy_stencil_port_controller (
    .clk(op_hcompute_lgxy_stencil_port_controller_clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_d)
);
assign op_hcompute_lgxy_stencil_port_controller_U809_clk = clk;
affine_controller__U792 op_hcompute_lgxy_stencil_port_controller_U809 (
    .clk(op_hcompute_lgxy_stencil_port_controller_U809_clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_U809_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_U809_d)
);
assign op_hcompute_lgxy_stencil_port_controller_U827_clk = clk;
affine_controller__U810 op_hcompute_lgxy_stencil_port_controller_U827 (
    .clk(op_hcompute_lgxy_stencil_port_controller_U827_clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_U827_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_U827_d)
);
assign op_hcompute_lgxy_stencil_port_controller_U845_clk = clk;
affine_controller__U828 op_hcompute_lgxy_stencil_port_controller_U845 (
    .clk(op_hcompute_lgxy_stencil_port_controller_U845_clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_U845_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_U845_d)
);
assign op_hcompute_lgxy_stencil_port_controller_U863_clk = clk;
affine_controller__U846 op_hcompute_lgxy_stencil_port_controller_U863 (
    .clk(op_hcompute_lgxy_stencil_port_controller_U863_clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_U863_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_U863_d)
);
assign op_hcompute_lgxy_stencil_read_start = op_hcompute_lgxy_stencil_port_controller_valid;
assign op_hcompute_lgxy_stencil_write_start_in = op_hcompute_lgxy_stencil_exe_start_out;
op_hcompute_lgxy_stencil_write_start_pt__U1987 op_hcompute_lgxy_stencil_write_start (
    .in(op_hcompute_lgxy_stencil_write_start_in),
    .out(op_hcompute_lgxy_stencil_write_start_out)
);
assign op_hcompute_lgxy_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lgxy_stencil_write_start_control_vars_in[2] = op_hcompute_lgxy_stencil_port_controller_d[2];
assign op_hcompute_lgxy_stencil_write_start_control_vars_in[1] = op_hcompute_lgxy_stencil_port_controller_d[1];
assign op_hcompute_lgxy_stencil_write_start_control_vars_in[0] = op_hcompute_lgxy_stencil_port_controller_d[0];
array_delay_U1988 op_hcompute_lgxy_stencil_write_start_control_vars (
    .clk(op_hcompute_lgxy_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lgxy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_write_start_control_vars_out)
);
assign op_hcompute_lgyy_stencil_clk = clk;
cu_op_hcompute_lgyy_stencil op_hcompute_lgyy_stencil (
    .clk(op_hcompute_lgyy_stencil_clk),
    .lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write(op_hcompute_lgyy_stencil_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write)
);
assign op_hcompute_lgyy_stencil_1_clk = clk;
assign op_hcompute_lgyy_stencil_1_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read[0] = lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read[0];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[8] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[8];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[7] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[7];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[6] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[6];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[5] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[5];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[4] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[4];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[3] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[3];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[2] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[2];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[1] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[1];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[0] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[0];
cu_op_hcompute_lgyy_stencil_1 op_hcompute_lgyy_stencil_1 (
    .clk(op_hcompute_lgyy_stencil_1_clk),
    .lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read(op_hcompute_lgyy_stencil_1_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read),
    .lyy_stencil_op_hcompute_lgyy_stencil_1_read(op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read),
    .lgyy_stencil_op_hcompute_lgyy_stencil_1_write(op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write)
);
assign op_hcompute_lgyy_stencil_1_exe_start_clk = clk;
assign op_hcompute_lgyy_stencil_1_exe_start_in = op_hcompute_lgyy_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgyy_stencil_1_exe_start (
    .clk(op_hcompute_lgyy_stencil_1_exe_start_clk),
    .in(op_hcompute_lgyy_stencil_1_exe_start_in),
    .out(op_hcompute_lgyy_stencil_1_exe_start_out)
);
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_in[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_in[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_in[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
array_delay_U2132 op_hcompute_lgyy_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_lgyy_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_lgyy_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_lgyy_stencil_1_port_controller_clk = clk;
affine_controller__U2098 op_hcompute_lgyy_stencil_1_port_controller (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1205_clk = clk;
affine_controller__U1188 op_hcompute_lgyy_stencil_1_port_controller_U1205 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1205_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1205_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1205_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1223_clk = clk;
affine_controller__U1206 op_hcompute_lgyy_stencil_1_port_controller_U1223 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1223_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1223_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1223_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1241_clk = clk;
affine_controller__U1224 op_hcompute_lgyy_stencil_1_port_controller_U1241 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1241_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1241_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1241_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1259_clk = clk;
affine_controller__U1242 op_hcompute_lgyy_stencil_1_port_controller_U1259 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1259_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1259_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1259_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1277_clk = clk;
affine_controller__U1260 op_hcompute_lgyy_stencil_1_port_controller_U1277 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1277_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1277_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1277_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1295_clk = clk;
affine_controller__U1278 op_hcompute_lgyy_stencil_1_port_controller_U1295 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1295_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1295_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1295_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1313_clk = clk;
affine_controller__U1296 op_hcompute_lgyy_stencil_1_port_controller_U1313 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1313_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1313_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1313_d)
);
assign op_hcompute_lgyy_stencil_1_port_controller_U1331_clk = clk;
affine_controller__U1314 op_hcompute_lgyy_stencil_1_port_controller_U1331 (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_U1331_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1331_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1331_d)
);
assign op_hcompute_lgyy_stencil_1_read_start = op_hcompute_lgyy_stencil_1_port_controller_valid;
assign op_hcompute_lgyy_stencil_1_write_start_in = op_hcompute_lgyy_stencil_1_exe_start_out;
op_hcompute_lgyy_stencil_1_write_start_pt__U2127 op_hcompute_lgyy_stencil_1_write_start (
    .in(op_hcompute_lgyy_stencil_1_write_start_in),
    .out(op_hcompute_lgyy_stencil_1_write_start_out)
);
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_in[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_in[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_in[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
array_delay_U2128 op_hcompute_lgyy_stencil_1_write_start_control_vars (
    .clk(op_hcompute_lgyy_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_lgyy_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_lgyy_stencil_exe_start_clk = clk;
assign op_hcompute_lgyy_stencil_exe_start_in = op_hcompute_lgyy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgyy_stencil_exe_start (
    .clk(op_hcompute_lgyy_stencil_exe_start_clk),
    .in(op_hcompute_lgyy_stencil_exe_start_in),
    .out(op_hcompute_lgyy_stencil_exe_start_out)
);
assign op_hcompute_lgyy_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lgyy_stencil_exe_start_control_vars_in[2] = op_hcompute_lgyy_stencil_port_controller_d[2];
assign op_hcompute_lgyy_stencil_exe_start_control_vars_in[1] = op_hcompute_lgyy_stencil_port_controller_d[1];
assign op_hcompute_lgyy_stencil_exe_start_control_vars_in[0] = op_hcompute_lgyy_stencil_port_controller_d[0];
array_delay_U2094 op_hcompute_lgyy_stencil_exe_start_control_vars (
    .clk(op_hcompute_lgyy_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lgyy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lgyy_stencil_port_controller_clk = clk;
affine_controller__U2072 op_hcompute_lgyy_stencil_port_controller (
    .clk(op_hcompute_lgyy_stencil_port_controller_clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_d)
);
assign op_hcompute_lgyy_stencil_port_controller_U1133_clk = clk;
affine_controller__U1116 op_hcompute_lgyy_stencil_port_controller_U1133 (
    .clk(op_hcompute_lgyy_stencil_port_controller_U1133_clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_U1133_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_U1133_d)
);
assign op_hcompute_lgyy_stencil_port_controller_U1151_clk = clk;
affine_controller__U1134 op_hcompute_lgyy_stencil_port_controller_U1151 (
    .clk(op_hcompute_lgyy_stencil_port_controller_U1151_clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_U1151_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_U1151_d)
);
assign op_hcompute_lgyy_stencil_port_controller_U1169_clk = clk;
affine_controller__U1152 op_hcompute_lgyy_stencil_port_controller_U1169 (
    .clk(op_hcompute_lgyy_stencil_port_controller_U1169_clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_U1169_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_U1169_d)
);
assign op_hcompute_lgyy_stencil_port_controller_U1187_clk = clk;
affine_controller__U1170 op_hcompute_lgyy_stencil_port_controller_U1187 (
    .clk(op_hcompute_lgyy_stencil_port_controller_U1187_clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_U1187_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_U1187_d)
);
assign op_hcompute_lgyy_stencil_read_start = op_hcompute_lgyy_stencil_port_controller_valid;
assign op_hcompute_lgyy_stencil_write_start_in = op_hcompute_lgyy_stencil_exe_start_out;
op_hcompute_lgyy_stencil_write_start_pt__U2089 op_hcompute_lgyy_stencil_write_start (
    .in(op_hcompute_lgyy_stencil_write_start_in),
    .out(op_hcompute_lgyy_stencil_write_start_out)
);
assign op_hcompute_lgyy_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lgyy_stencil_write_start_control_vars_in[2] = op_hcompute_lgyy_stencil_port_controller_d[2];
assign op_hcompute_lgyy_stencil_write_start_control_vars_in[1] = op_hcompute_lgyy_stencil_port_controller_d[1];
assign op_hcompute_lgyy_stencil_write_start_control_vars_in[0] = op_hcompute_lgyy_stencil_port_controller_d[0];
array_delay_U2090 op_hcompute_lgyy_stencil_write_start_control_vars (
    .clk(op_hcompute_lgyy_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lgyy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_write_start_control_vars_out)
);
assign op_hcompute_lxx_stencil_clk = clk;
assign op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read[0] = grad_x_stencil_op_hcompute_lxx_stencil_read[0];
cu_op_hcompute_lxx_stencil op_hcompute_lxx_stencil (
    .clk(op_hcompute_lxx_stencil_clk),
    .grad_x_stencil_op_hcompute_lxx_stencil_read(op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read),
    .lxx_stencil_op_hcompute_lxx_stencil_write(op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write)
);
assign op_hcompute_lxx_stencil_exe_start_clk = clk;
assign op_hcompute_lxx_stencil_exe_start_in = op_hcompute_lxx_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lxx_stencil_exe_start (
    .clk(op_hcompute_lxx_stencil_exe_start_clk),
    .in(op_hcompute_lxx_stencil_exe_start_in),
    .out(op_hcompute_lxx_stencil_exe_start_out)
);
assign op_hcompute_lxx_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lxx_stencil_exe_start_control_vars_in[2] = op_hcompute_lxx_stencil_port_controller_d[2];
assign op_hcompute_lxx_stencil_exe_start_control_vars_in[1] = op_hcompute_lxx_stencil_port_controller_d[1];
assign op_hcompute_lxx_stencil_exe_start_control_vars_in[0] = op_hcompute_lxx_stencil_port_controller_d[0];
array_delay_U1826 op_hcompute_lxx_stencil_exe_start_control_vars (
    .clk(op_hcompute_lxx_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lxx_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lxx_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lxx_stencil_port_controller_clk = clk;
affine_controller__U1792 op_hcompute_lxx_stencil_port_controller (
    .clk(op_hcompute_lxx_stencil_port_controller_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_valid),
    .d(op_hcompute_lxx_stencil_port_controller_d)
);
assign op_hcompute_lxx_stencil_port_controller_U233_clk = clk;
affine_controller__U216 op_hcompute_lxx_stencil_port_controller_U233 (
    .clk(op_hcompute_lxx_stencil_port_controller_U233_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U233_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U233_d)
);
assign op_hcompute_lxx_stencil_port_controller_U251_clk = clk;
affine_controller__U234 op_hcompute_lxx_stencil_port_controller_U251 (
    .clk(op_hcompute_lxx_stencil_port_controller_U251_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U251_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U251_d)
);
assign op_hcompute_lxx_stencil_port_controller_U269_clk = clk;
affine_controller__U252 op_hcompute_lxx_stencil_port_controller_U269 (
    .clk(op_hcompute_lxx_stencil_port_controller_U269_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U269_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U269_d)
);
assign op_hcompute_lxx_stencil_port_controller_U287_clk = clk;
affine_controller__U270 op_hcompute_lxx_stencil_port_controller_U287 (
    .clk(op_hcompute_lxx_stencil_port_controller_U287_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U287_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U287_d)
);
assign op_hcompute_lxx_stencil_port_controller_U305_clk = clk;
affine_controller__U288 op_hcompute_lxx_stencil_port_controller_U305 (
    .clk(op_hcompute_lxx_stencil_port_controller_U305_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U305_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U305_d)
);
assign op_hcompute_lxx_stencil_port_controller_U323_clk = clk;
affine_controller__U306 op_hcompute_lxx_stencil_port_controller_U323 (
    .clk(op_hcompute_lxx_stencil_port_controller_U323_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U323_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U323_d)
);
assign op_hcompute_lxx_stencil_read_start = op_hcompute_lxx_stencil_port_controller_valid;
assign op_hcompute_lxx_stencil_write_start_in = op_hcompute_lxx_stencil_exe_start_out;
op_hcompute_lxx_stencil_write_start_pt__U1821 op_hcompute_lxx_stencil_write_start (
    .in(op_hcompute_lxx_stencil_write_start_in),
    .out(op_hcompute_lxx_stencil_write_start_out)
);
assign op_hcompute_lxx_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lxx_stencil_write_start_control_vars_in[2] = op_hcompute_lxx_stencil_port_controller_d[2];
assign op_hcompute_lxx_stencil_write_start_control_vars_in[1] = op_hcompute_lxx_stencil_port_controller_d[1];
assign op_hcompute_lxx_stencil_write_start_control_vars_in[0] = op_hcompute_lxx_stencil_port_controller_d[0];
array_delay_U1822 op_hcompute_lxx_stencil_write_start_control_vars (
    .clk(op_hcompute_lxx_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lxx_stencil_write_start_control_vars_in),
    .out(op_hcompute_lxx_stencil_write_start_control_vars_out)
);
assign op_hcompute_lxy_stencil_clk = clk;
assign op_hcompute_lxy_stencil_grad_x_stencil_op_hcompute_lxy_stencil_read[0] = grad_x_stencil_op_hcompute_lxy_stencil_read[0];
assign op_hcompute_lxy_stencil_grad_y_stencil_op_hcompute_lxy_stencil_read[0] = grad_y_stencil_op_hcompute_lxy_stencil_read[0];
cu_op_hcompute_lxy_stencil op_hcompute_lxy_stencil (
    .clk(op_hcompute_lxy_stencil_clk),
    .grad_x_stencil_op_hcompute_lxy_stencil_read(op_hcompute_lxy_stencil_grad_x_stencil_op_hcompute_lxy_stencil_read),
    .grad_y_stencil_op_hcompute_lxy_stencil_read(op_hcompute_lxy_stencil_grad_y_stencil_op_hcompute_lxy_stencil_read),
    .lxy_stencil_op_hcompute_lxy_stencil_write(op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write)
);
assign op_hcompute_lxy_stencil_exe_start_clk = clk;
assign op_hcompute_lxy_stencil_exe_start_in = op_hcompute_lxy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lxy_stencil_exe_start (
    .clk(op_hcompute_lxy_stencil_exe_start_clk),
    .in(op_hcompute_lxy_stencil_exe_start_in),
    .out(op_hcompute_lxy_stencil_exe_start_out)
);
assign op_hcompute_lxy_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lxy_stencil_exe_start_control_vars_in[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign op_hcompute_lxy_stencil_exe_start_control_vars_in[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign op_hcompute_lxy_stencil_exe_start_control_vars_in[0] = op_hcompute_lxy_stencil_port_controller_d[0];
array_delay_U1966 op_hcompute_lxy_stencil_exe_start_control_vars (
    .clk(op_hcompute_lxy_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lxy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lxy_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lxy_stencil_port_controller_clk = clk;
affine_controller__U1932 op_hcompute_lxy_stencil_port_controller (
    .clk(op_hcompute_lxy_stencil_port_controller_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_valid),
    .d(op_hcompute_lxy_stencil_port_controller_d)
);
assign op_hcompute_lxy_stencil_port_controller_U665_clk = clk;
affine_controller__U648 op_hcompute_lxy_stencil_port_controller_U665 (
    .clk(op_hcompute_lxy_stencil_port_controller_U665_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U665_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U665_d)
);
assign op_hcompute_lxy_stencil_port_controller_U683_clk = clk;
affine_controller__U666 op_hcompute_lxy_stencil_port_controller_U683 (
    .clk(op_hcompute_lxy_stencil_port_controller_U683_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U683_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U683_d)
);
assign op_hcompute_lxy_stencil_port_controller_U701_clk = clk;
affine_controller__U684 op_hcompute_lxy_stencil_port_controller_U701 (
    .clk(op_hcompute_lxy_stencil_port_controller_U701_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U701_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U701_d)
);
assign op_hcompute_lxy_stencil_port_controller_U719_clk = clk;
affine_controller__U702 op_hcompute_lxy_stencil_port_controller_U719 (
    .clk(op_hcompute_lxy_stencil_port_controller_U719_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U719_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U719_d)
);
assign op_hcompute_lxy_stencil_port_controller_U737_clk = clk;
affine_controller__U720 op_hcompute_lxy_stencil_port_controller_U737 (
    .clk(op_hcompute_lxy_stencil_port_controller_U737_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U737_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U737_d)
);
assign op_hcompute_lxy_stencil_port_controller_U755_clk = clk;
affine_controller__U738 op_hcompute_lxy_stencil_port_controller_U755 (
    .clk(op_hcompute_lxy_stencil_port_controller_U755_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U755_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U755_d)
);
assign op_hcompute_lxy_stencil_port_controller_U773_clk = clk;
affine_controller__U756 op_hcompute_lxy_stencil_port_controller_U773 (
    .clk(op_hcompute_lxy_stencil_port_controller_U773_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U773_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U773_d)
);
assign op_hcompute_lxy_stencil_port_controller_U791_clk = clk;
affine_controller__U774 op_hcompute_lxy_stencil_port_controller_U791 (
    .clk(op_hcompute_lxy_stencil_port_controller_U791_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U791_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U791_d)
);
assign op_hcompute_lxy_stencil_read_start = op_hcompute_lxy_stencil_port_controller_valid;
assign op_hcompute_lxy_stencil_write_start_in = op_hcompute_lxy_stencil_exe_start_out;
op_hcompute_lxy_stencil_write_start_pt__U1961 op_hcompute_lxy_stencil_write_start (
    .in(op_hcompute_lxy_stencil_write_start_in),
    .out(op_hcompute_lxy_stencil_write_start_out)
);
assign op_hcompute_lxy_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lxy_stencil_write_start_control_vars_in[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign op_hcompute_lxy_stencil_write_start_control_vars_in[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign op_hcompute_lxy_stencil_write_start_control_vars_in[0] = op_hcompute_lxy_stencil_port_controller_d[0];
array_delay_U1962 op_hcompute_lxy_stencil_write_start_control_vars (
    .clk(op_hcompute_lxy_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lxy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lxy_stencil_write_start_control_vars_out)
);
assign op_hcompute_lyy_stencil_clk = clk;
assign op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read[0] = grad_y_stencil_op_hcompute_lyy_stencil_read[0];
cu_op_hcompute_lyy_stencil op_hcompute_lyy_stencil (
    .clk(op_hcompute_lyy_stencil_clk),
    .grad_y_stencil_op_hcompute_lyy_stencil_read(op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read),
    .lyy_stencil_op_hcompute_lyy_stencil_write(op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write)
);
assign op_hcompute_lyy_stencil_exe_start_clk = clk;
assign op_hcompute_lyy_stencil_exe_start_in = op_hcompute_lyy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lyy_stencil_exe_start (
    .clk(op_hcompute_lyy_stencil_exe_start_clk),
    .in(op_hcompute_lyy_stencil_exe_start_in),
    .out(op_hcompute_lyy_stencil_exe_start_out)
);
assign op_hcompute_lyy_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lyy_stencil_exe_start_control_vars_in[2] = op_hcompute_lyy_stencil_port_controller_d[2];
assign op_hcompute_lyy_stencil_exe_start_control_vars_in[1] = op_hcompute_lyy_stencil_port_controller_d[1];
assign op_hcompute_lyy_stencil_exe_start_control_vars_in[0] = op_hcompute_lyy_stencil_port_controller_d[0];
array_delay_U2068 op_hcompute_lyy_stencil_exe_start_control_vars (
    .clk(op_hcompute_lyy_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lyy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lyy_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lyy_stencil_port_controller_clk = clk;
affine_controller__U2034 op_hcompute_lyy_stencil_port_controller (
    .clk(op_hcompute_lyy_stencil_port_controller_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_valid),
    .d(op_hcompute_lyy_stencil_port_controller_d)
);
assign op_hcompute_lyy_stencil_port_controller_U1025_clk = clk;
affine_controller__U1008 op_hcompute_lyy_stencil_port_controller_U1025 (
    .clk(op_hcompute_lyy_stencil_port_controller_U1025_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1025_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1025_d)
);
assign op_hcompute_lyy_stencil_port_controller_U1043_clk = clk;
affine_controller__U1026 op_hcompute_lyy_stencil_port_controller_U1043 (
    .clk(op_hcompute_lyy_stencil_port_controller_U1043_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1043_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1043_d)
);
assign op_hcompute_lyy_stencil_port_controller_U1061_clk = clk;
affine_controller__U1044 op_hcompute_lyy_stencil_port_controller_U1061 (
    .clk(op_hcompute_lyy_stencil_port_controller_U1061_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1061_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1061_d)
);
assign op_hcompute_lyy_stencil_port_controller_U1079_clk = clk;
affine_controller__U1062 op_hcompute_lyy_stencil_port_controller_U1079 (
    .clk(op_hcompute_lyy_stencil_port_controller_U1079_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1079_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1079_d)
);
assign op_hcompute_lyy_stencil_port_controller_U1097_clk = clk;
affine_controller__U1080 op_hcompute_lyy_stencil_port_controller_U1097 (
    .clk(op_hcompute_lyy_stencil_port_controller_U1097_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1097_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1097_d)
);
assign op_hcompute_lyy_stencil_port_controller_U1115_clk = clk;
affine_controller__U1098 op_hcompute_lyy_stencil_port_controller_U1115 (
    .clk(op_hcompute_lyy_stencil_port_controller_U1115_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1115_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1115_d)
);
assign op_hcompute_lyy_stencil_read_start = op_hcompute_lyy_stencil_port_controller_valid;
assign op_hcompute_lyy_stencil_write_start_in = op_hcompute_lyy_stencil_exe_start_out;
op_hcompute_lyy_stencil_write_start_pt__U2063 op_hcompute_lyy_stencil_write_start (
    .in(op_hcompute_lyy_stencil_write_start_in),
    .out(op_hcompute_lyy_stencil_write_start_out)
);
assign op_hcompute_lyy_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lyy_stencil_write_start_control_vars_in[2] = op_hcompute_lyy_stencil_port_controller_d[2];
assign op_hcompute_lyy_stencil_write_start_control_vars_in[1] = op_hcompute_lyy_stencil_port_controller_d[1];
assign op_hcompute_lyy_stencil_write_start_control_vars_in[0] = op_hcompute_lyy_stencil_port_controller_d[0];
array_delay_U2064 op_hcompute_lyy_stencil_write_start_control_vars (
    .clk(op_hcompute_lyy_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lyy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lyy_stencil_write_start_control_vars_out)
);
assign op_hcompute_padded16_global_wrapper_stencil_clk = clk;
assign op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0] = _U2250_out;
cu_op_hcompute_padded16_global_wrapper_stencil op_hcompute_padded16_global_wrapper_stencil (
    .clk(op_hcompute_padded16_global_wrapper_stencil_clk),
    .padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read(op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read),
    .padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write(op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write)
);
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_clk = clk;
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_in = op_hcompute_padded16_global_wrapper_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_padded16_global_wrapper_stencil_exe_start (
    .clk(op_hcompute_padded16_global_wrapper_stencil_exe_start_clk),
    .in(op_hcompute_padded16_global_wrapper_stencil_exe_start_in),
    .out(op_hcompute_padded16_global_wrapper_stencil_exe_start_out)
);
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in[2] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in[1] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in[0] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[0];
array_delay_U1750 op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars (
    .clk(op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_out)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_clk = clk;
affine_controller__U1728 op_hcompute_padded16_global_wrapper_stencil_port_controller (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_clk = clk;
affine_controller__U90 op_hcompute_padded16_global_wrapper_stencil_port_controller_U107 (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_clk = clk;
affine_controller__U0 op_hcompute_padded16_global_wrapper_stencil_port_controller_U17 (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_clk = clk;
affine_controller__U18 op_hcompute_padded16_global_wrapper_stencil_port_controller_U35 (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_clk = clk;
affine_controller__U36 op_hcompute_padded16_global_wrapper_stencil_port_controller_U53 (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_clk = clk;
affine_controller__U54 op_hcompute_padded16_global_wrapper_stencil_port_controller_U71 (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_clk = clk;
affine_controller__U72 op_hcompute_padded16_global_wrapper_stencil_port_controller_U89 (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_read_start = op_hcompute_padded16_global_wrapper_stencil_port_controller_valid;
assign op_hcompute_padded16_global_wrapper_stencil_write_start_in = op_hcompute_padded16_global_wrapper_stencil_exe_start_out;
op_hcompute_padded16_global_wrapper_stencil_write_start_pt__U1745 op_hcompute_padded16_global_wrapper_stencil_write_start (
    .in(op_hcompute_padded16_global_wrapper_stencil_write_start_in),
    .out(op_hcompute_padded16_global_wrapper_stencil_write_start_out)
);
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[0];
array_delay_U1746 op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars (
    .clk(op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_clk),
    .in(op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in),
    .out(op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out)
);
assign padded16_global_wrapper_stencil_clk = clk;
assign padded16_global_wrapper_stencil_flush = flush;
assign padded16_global_wrapper_stencil_rst_n = rst_n;
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ren = op_hcompute_grad_x_stencil_read_start;
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars[2] = op_hcompute_grad_x_stencil_port_controller_d[2];
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars[1] = op_hcompute_grad_x_stencil_port_controller_d[1];
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars[0] = op_hcompute_grad_x_stencil_port_controller_d[0];
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ren = op_hcompute_grad_y_stencil_read_start;
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars[2] = op_hcompute_grad_y_stencil_port_controller_d[2];
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars[1] = op_hcompute_grad_y_stencil_port_controller_d[1];
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars[0] = op_hcompute_grad_y_stencil_port_controller_d[0];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_wen = op_hcompute_padded16_global_wrapper_stencil_write_start_out;
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out[2];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out[1];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out[0];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0] = op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0];
padded16_global_wrapper_stencil_ub padded16_global_wrapper_stencil (
    .clk(padded16_global_wrapper_stencil_clk),
    .flush(padded16_global_wrapper_stencil_flush),
    .rst_n(padded16_global_wrapper_stencil_rst_n),
    .op_hcompute_grad_x_stencil_read_ren(padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ren),
    .op_hcompute_grad_x_stencil_read_ctrl_vars(padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars),
    .op_hcompute_grad_x_stencil_read(padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read),
    .op_hcompute_grad_y_stencil_read_ren(padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ren),
    .op_hcompute_grad_y_stencil_read_ctrl_vars(padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars),
    .op_hcompute_grad_y_stencil_read(padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read),
    .op_hcompute_padded16_global_wrapper_stencil_write_wen(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_wen),
    .op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_padded16_global_wrapper_stencil_write(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_valid = op_hcompute_padded16_global_wrapper_stencil_read_start;
endmodule

