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
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(clk),
    .in(in),
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
wire [15:0] enMux_out;
assign enMux_out = en ? in : out;
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(clk),
    .in(enMux_out),
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
assign inner_compute_in0_grad_x_stencil[0] = grad_x_stencil_op_hcompute_lxy_stencil_read[0];
wire [15:0] inner_compute_in1_grad_y_stencil [0:0];
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
assign inner_compute_in0_lgyy_stencil[0] = lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read[0];
wire [15:0] inner_compute_in1_lyy_stencil [8:0];
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
assign inner_compute_in0_lgxy_stencil[0] = lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read[0];
wire [15:0] inner_compute_in1_lxy_stencil [8:0];
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
assign inner_compute_in0_lgxx_stencil[0] = lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read[0];
wire [15:0] inner_compute_in1_lxx_stencil [8:0];
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
assign inner_compute_in0_lgxx_stencil[0] = lgxx_stencil_op_hcompute_cim_stencil_read[0];
wire [15:0] inner_compute_in1_lgxy_stencil [0:0];
assign inner_compute_in1_lgxy_stencil[0] = lgxy_stencil_op_hcompute_cim_stencil_read[0];
wire [15:0] inner_compute_in2_lgyy_stencil [0:0];
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
wire [15:0] smin_380_381_382_out;
wire [15:0] sub_379_padded16_global_wrapper_stencil_12_380_out;
commonlib_smax__width16 smax_382_383_384 (
    .in0(smin_380_381_382_out),
    .in1(16'hff01),
    .out(out_grad_y_stencil)
);
commonlib_smin__width16 smin_380_381_382 (
    .in0(sub_379_padded16_global_wrapper_stencil_12_380_out),
    .in1(16'h00ff),
    .out(smin_380_381_382_out)
);
assign sub_379_padded16_global_wrapper_stencil_12_380_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[3] + (16'(in0_padded16_global_wrapper_stencil[4] + (16'(in0_padded16_global_wrapper_stencil[5] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[0])) - (16'(in0_padded16_global_wrapper_stencil[1] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[2]);
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
wire [15:0] smin_280_281_282_out;
wire [15:0] sub_279_padded16_global_wrapper_stencil_6_280_out;
commonlib_smax__width16 smax_282_283_284 (
    .in0(smin_280_281_282_out),
    .in1(16'hff01),
    .out(out_grad_x_stencil)
);
commonlib_smin__width16 smin_280_281_282 (
    .in0(sub_279_padded16_global_wrapper_stencil_6_280_out),
    .in1(16'h00ff),
    .out(smin_280_281_282_out)
);
assign sub_279_padded16_global_wrapper_stencil_6_280_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[0] + (16'(in0_padded16_global_wrapper_stencil[1] + (16'(in0_padded16_global_wrapper_stencil[2] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[3])) - (16'(in0_padded16_global_wrapper_stencil[4] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[5]);
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

module array_delay_U2099 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2100_out;
wire [15:0] _U2101_out;
wire [15:0] _U2102_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2100 (
    .in(in[0]),
    .clk(clk),
    .out(_U2100_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2101 (
    .in(in[1]),
    .clk(clk),
    .out(_U2101_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2102 (
    .in(in[2]),
    .clk(clk),
    .out(_U2102_out)
);
assign out[2] = _U2102_out;
assign out[1] = _U2101_out;
assign out[0] = _U2100_out;
endmodule

module array_delay_U2095 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2096_out;
wire [15:0] _U2097_out;
wire [15:0] _U2098_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2096 (
    .in(in[0]),
    .clk(clk),
    .out(_U2096_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2097 (
    .in(in[1]),
    .clk(clk),
    .out(_U2097_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2098 (
    .in(in[2]),
    .clk(clk),
    .out(_U2098_out)
);
assign out[2] = _U2098_out;
assign out[1] = _U2097_out;
assign out[0] = _U2096_out;
endmodule

module array_delay_U2074 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2075_out;
wire [15:0] _U2076_out;
wire [15:0] _U2077_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2075 (
    .in(in[0]),
    .clk(clk),
    .out(_U2075_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2076 (
    .in(in[1]),
    .clk(clk),
    .out(_U2076_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2077 (
    .in(in[2]),
    .clk(clk),
    .out(_U2077_out)
);
assign out[2] = _U2077_out;
assign out[1] = _U2076_out;
assign out[0] = _U2075_out;
endmodule

module array_delay_U2070 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2071_out;
wire [15:0] _U2072_out;
wire [15:0] _U2073_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2071 (
    .in(in[0]),
    .clk(clk),
    .out(_U2071_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2072 (
    .in(in[1]),
    .clk(clk),
    .out(_U2072_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2073 (
    .in(in[2]),
    .clk(clk),
    .out(_U2073_out)
);
assign out[2] = _U2073_out;
assign out[1] = _U2072_out;
assign out[0] = _U2071_out;
endmodule

module array_delay_U2049 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2050_out;
wire [15:0] _U2051_out;
wire [15:0] _U2052_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2050 (
    .in(in[0]),
    .clk(clk),
    .out(_U2050_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2051 (
    .in(in[1]),
    .clk(clk),
    .out(_U2051_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2052 (
    .in(in[2]),
    .clk(clk),
    .out(_U2052_out)
);
assign out[2] = _U2052_out;
assign out[1] = _U2051_out;
assign out[0] = _U2050_out;
endmodule

module array_delay_U2045 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2046_out;
wire [15:0] _U2047_out;
wire [15:0] _U2048_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2046 (
    .in(in[0]),
    .clk(clk),
    .out(_U2046_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2047 (
    .in(in[1]),
    .clk(clk),
    .out(_U2047_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2048 (
    .in(in[2]),
    .clk(clk),
    .out(_U2048_out)
);
assign out[2] = _U2048_out;
assign out[1] = _U2047_out;
assign out[0] = _U2046_out;
endmodule

module array_delay_U2024 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2025_out;
wire [15:0] _U2026_out;
wire [15:0] _U2027_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2025 (
    .in(in[0]),
    .clk(clk),
    .out(_U2025_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2026 (
    .in(in[1]),
    .clk(clk),
    .out(_U2026_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2027 (
    .in(in[2]),
    .clk(clk),
    .out(_U2027_out)
);
assign out[2] = _U2027_out;
assign out[1] = _U2026_out;
assign out[0] = _U2025_out;
endmodule

module array_delay_U2020 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2021_out;
wire [15:0] _U2022_out;
wire [15:0] _U2023_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2021 (
    .in(in[0]),
    .clk(clk),
    .out(_U2021_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2022 (
    .in(in[1]),
    .clk(clk),
    .out(_U2022_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2023 (
    .in(in[2]),
    .clk(clk),
    .out(_U2023_out)
);
assign out[2] = _U2023_out;
assign out[1] = _U2022_out;
assign out[0] = _U2021_out;
endmodule

module array_delay_U1999 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U2000_out;
wire [15:0] _U2001_out;
wire [15:0] _U2002_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2000 (
    .in(in[0]),
    .clk(clk),
    .out(_U2000_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2001 (
    .in(in[1]),
    .clk(clk),
    .out(_U2001_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2002 (
    .in(in[2]),
    .clk(clk),
    .out(_U2002_out)
);
assign out[2] = _U2002_out;
assign out[1] = _U2001_out;
assign out[0] = _U2000_out;
endmodule

module array_delay_U1995 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1996_out;
wire [15:0] _U1997_out;
wire [15:0] _U1998_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1996 (
    .in(in[0]),
    .clk(clk),
    .out(_U1996_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1997 (
    .in(in[1]),
    .clk(clk),
    .out(_U1997_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1998 (
    .in(in[2]),
    .clk(clk),
    .out(_U1998_out)
);
assign out[2] = _U1998_out;
assign out[1] = _U1997_out;
assign out[0] = _U1996_out;
endmodule

module array_delay_U1974 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1975_out;
wire [15:0] _U1976_out;
wire [15:0] _U1977_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1975 (
    .in(in[0]),
    .clk(clk),
    .out(_U1975_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1976 (
    .in(in[1]),
    .clk(clk),
    .out(_U1976_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1977 (
    .in(in[2]),
    .clk(clk),
    .out(_U1977_out)
);
assign out[2] = _U1977_out;
assign out[1] = _U1976_out;
assign out[0] = _U1975_out;
endmodule

module array_delay_U1970 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1971_out;
wire [15:0] _U1972_out;
wire [15:0] _U1973_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1971 (
    .in(in[0]),
    .clk(clk),
    .out(_U1971_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1972 (
    .in(in[1]),
    .clk(clk),
    .out(_U1972_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1973 (
    .in(in[2]),
    .clk(clk),
    .out(_U1973_out)
);
assign out[2] = _U1973_out;
assign out[1] = _U1972_out;
assign out[0] = _U1971_out;
endmodule

module array_delay_U1949 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1950_out;
wire [15:0] _U1951_out;
wire [15:0] _U1952_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1950 (
    .in(in[0]),
    .clk(clk),
    .out(_U1950_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1951 (
    .in(in[1]),
    .clk(clk),
    .out(_U1951_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1952 (
    .in(in[2]),
    .clk(clk),
    .out(_U1952_out)
);
assign out[2] = _U1952_out;
assign out[1] = _U1951_out;
assign out[0] = _U1950_out;
endmodule

module array_delay_U1945 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1946_out;
wire [15:0] _U1947_out;
wire [15:0] _U1948_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1946 (
    .in(in[0]),
    .clk(clk),
    .out(_U1946_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1947 (
    .in(in[1]),
    .clk(clk),
    .out(_U1947_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1948 (
    .in(in[2]),
    .clk(clk),
    .out(_U1948_out)
);
assign out[2] = _U1948_out;
assign out[1] = _U1947_out;
assign out[0] = _U1946_out;
endmodule

module array_delay_U1924 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1925_out;
wire [15:0] _U1926_out;
wire [15:0] _U1927_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1925 (
    .in(in[0]),
    .clk(clk),
    .out(_U1925_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1926 (
    .in(in[1]),
    .clk(clk),
    .out(_U1926_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1927 (
    .in(in[2]),
    .clk(clk),
    .out(_U1927_out)
);
assign out[2] = _U1927_out;
assign out[1] = _U1926_out;
assign out[0] = _U1925_out;
endmodule

module array_delay_U1920 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1921_out;
wire [15:0] _U1922_out;
wire [15:0] _U1923_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1921 (
    .in(in[0]),
    .clk(clk),
    .out(_U1921_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1922 (
    .in(in[1]),
    .clk(clk),
    .out(_U1922_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1923 (
    .in(in[2]),
    .clk(clk),
    .out(_U1923_out)
);
assign out[2] = _U1923_out;
assign out[1] = _U1922_out;
assign out[0] = _U1921_out;
endmodule

module array_delay_U1899 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1900_out;
wire [15:0] _U1901_out;
wire [15:0] _U1902_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1900 (
    .in(in[0]),
    .clk(clk),
    .out(_U1900_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1901 (
    .in(in[1]),
    .clk(clk),
    .out(_U1901_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1902 (
    .in(in[2]),
    .clk(clk),
    .out(_U1902_out)
);
assign out[2] = _U1902_out;
assign out[1] = _U1901_out;
assign out[0] = _U1900_out;
endmodule

module array_delay_U1895 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1896_out;
wire [15:0] _U1897_out;
wire [15:0] _U1898_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1896 (
    .in(in[0]),
    .clk(clk),
    .out(_U1896_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1897 (
    .in(in[1]),
    .clk(clk),
    .out(_U1897_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1898 (
    .in(in[2]),
    .clk(clk),
    .out(_U1898_out)
);
assign out[2] = _U1898_out;
assign out[1] = _U1897_out;
assign out[0] = _U1896_out;
endmodule

module array_delay_U1874 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1875_out;
wire [15:0] _U1876_out;
wire [15:0] _U1877_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1875 (
    .in(in[0]),
    .clk(clk),
    .out(_U1875_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1876 (
    .in(in[1]),
    .clk(clk),
    .out(_U1876_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1877 (
    .in(in[2]),
    .clk(clk),
    .out(_U1877_out)
);
assign out[2] = _U1877_out;
assign out[1] = _U1876_out;
assign out[0] = _U1875_out;
endmodule

module array_delay_U1870 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1871_out;
wire [15:0] _U1872_out;
wire [15:0] _U1873_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1871 (
    .in(in[0]),
    .clk(clk),
    .out(_U1871_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1872 (
    .in(in[1]),
    .clk(clk),
    .out(_U1872_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1873 (
    .in(in[2]),
    .clk(clk),
    .out(_U1873_out)
);
assign out[2] = _U1873_out;
assign out[1] = _U1872_out;
assign out[0] = _U1871_out;
endmodule

module array_delay_U1849 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1850_out;
wire [15:0] _U1851_out;
wire [15:0] _U1852_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1850 (
    .in(in[0]),
    .clk(clk),
    .out(_U1850_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1851 (
    .in(in[1]),
    .clk(clk),
    .out(_U1851_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1852 (
    .in(in[2]),
    .clk(clk),
    .out(_U1852_out)
);
assign out[2] = _U1852_out;
assign out[1] = _U1851_out;
assign out[0] = _U1850_out;
endmodule

module array_delay_U1845 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1846_out;
wire [15:0] _U1847_out;
wire [15:0] _U1848_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1846 (
    .in(in[0]),
    .clk(clk),
    .out(_U1846_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1847 (
    .in(in[1]),
    .clk(clk),
    .out(_U1847_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1848 (
    .in(in[2]),
    .clk(clk),
    .out(_U1848_out)
);
assign out[2] = _U1848_out;
assign out[1] = _U1847_out;
assign out[0] = _U1846_out;
endmodule

module array_delay_U1824 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1825_out;
wire [15:0] _U1826_out;
wire [15:0] _U1827_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1825 (
    .in(in[0]),
    .clk(clk),
    .out(_U1825_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1826 (
    .in(in[1]),
    .clk(clk),
    .out(_U1826_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1827 (
    .in(in[2]),
    .clk(clk),
    .out(_U1827_out)
);
assign out[2] = _U1827_out;
assign out[1] = _U1826_out;
assign out[0] = _U1825_out;
endmodule

module array_delay_U1820 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1821_out;
wire [15:0] _U1822_out;
wire [15:0] _U1823_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1821 (
    .in(in[0]),
    .clk(clk),
    .out(_U1821_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1822 (
    .in(in[1]),
    .clk(clk),
    .out(_U1822_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1823 (
    .in(in[2]),
    .clk(clk),
    .out(_U1823_out)
);
assign out[2] = _U1823_out;
assign out[1] = _U1822_out;
assign out[0] = _U1821_out;
endmodule

module array_delay_U1799 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1800_out;
wire [15:0] _U1801_out;
wire [15:0] _U1802_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1800 (
    .in(in[0]),
    .clk(clk),
    .out(_U1800_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1801 (
    .in(in[1]),
    .clk(clk),
    .out(_U1801_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1802 (
    .in(in[2]),
    .clk(clk),
    .out(_U1802_out)
);
assign out[2] = _U1802_out;
assign out[1] = _U1801_out;
assign out[0] = _U1800_out;
endmodule

module array_delay_U1795 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1796_out;
wire [15:0] _U1797_out;
wire [15:0] _U1798_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1796 (
    .in(in[0]),
    .clk(clk),
    .out(_U1796_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1797 (
    .in(in[1]),
    .clk(clk),
    .out(_U1797_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1798 (
    .in(in[2]),
    .clk(clk),
    .out(_U1798_out)
);
assign out[2] = _U1798_out;
assign out[1] = _U1797_out;
assign out[0] = _U1796_out;
endmodule

module array_delay_U1774 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1775_out;
wire [15:0] _U1776_out;
wire [15:0] _U1777_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1775 (
    .in(in[0]),
    .clk(clk),
    .out(_U1775_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1776 (
    .in(in[1]),
    .clk(clk),
    .out(_U1776_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1777 (
    .in(in[2]),
    .clk(clk),
    .out(_U1777_out)
);
assign out[2] = _U1777_out;
assign out[1] = _U1776_out;
assign out[0] = _U1775_out;
endmodule

module array_delay_U1770 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1771_out;
wire [15:0] _U1772_out;
wire [15:0] _U1773_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1771 (
    .in(in[0]),
    .clk(clk),
    .out(_U1771_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1772 (
    .in(in[1]),
    .clk(clk),
    .out(_U1772_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1773 (
    .in(in[2]),
    .clk(clk),
    .out(_U1773_out)
);
assign out[2] = _U1773_out;
assign out[1] = _U1772_out;
assign out[0] = _U1771_out;
endmodule

module array_delay_U1749 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1750_out;
wire [15:0] _U1751_out;
wire [15:0] _U1752_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1750 (
    .in(in[0]),
    .clk(clk),
    .out(_U1750_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1751 (
    .in(in[1]),
    .clk(clk),
    .out(_U1751_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1752 (
    .in(in[2]),
    .clk(clk),
    .out(_U1752_out)
);
assign out[2] = _U1752_out;
assign out[1] = _U1751_out;
assign out[0] = _U1750_out;
endmodule

module array_delay_U1745 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1746_out;
wire [15:0] _U1747_out;
wire [15:0] _U1748_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1746 (
    .in(in[0]),
    .clk(clk),
    .out(_U1746_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1747 (
    .in(in[1]),
    .clk(clk),
    .out(_U1747_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1748 (
    .in(in[2]),
    .clk(clk),
    .out(_U1748_out)
);
assign out[2] = _U1748_out;
assign out[1] = _U1747_out;
assign out[0] = _U1746_out;
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U991 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U973 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U955 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U937 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U919 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U91 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U901 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U883 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U865 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U847 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U829 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U811 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U793 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U775 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U757 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U739 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U73 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U721 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U703 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U685 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U667 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U649 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U631 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U613 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U595 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U577 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U559 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U55 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U541 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U523 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U505 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U487 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U469 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U451 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U433 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U415 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U397 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U379 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U37 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U361 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U343 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U325 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U307 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U289 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U271 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U253 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U235 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U217 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2079 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U2078 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2079 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2054 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b7);
endmodule

module affine_controller__U2053 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2054 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2029 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U2028 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2029 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U2004 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U2003 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U2004 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U199 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1979 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012a);
endmodule

module affine_controller__U1978 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1979 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1954 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a4);
endmodule

module affine_controller__U1953 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1954 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1929 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U1928 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1929 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1904 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h011f);
endmodule

module affine_controller__U1903 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1904 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U19 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1879 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U1878 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1879 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1854 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0095);
endmodule

module affine_controller__U1853 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1854 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1829 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U1828 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1829 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U181 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1804 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0110);
endmodule

module affine_controller__U1803 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1804 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1779 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U1778 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1779 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1754 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U1753 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1754 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1729 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1711 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1693 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1675 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1657 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1639 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U163 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1621 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1603 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1585 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1567 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1549 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1531 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1513 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1495 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1477 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1459 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U145 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1441 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1423 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1405 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1387 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1369 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1351 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1333 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1315 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1297 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1279 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U127 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1261 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1243 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1225 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1207 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1189 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1171 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1153 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1135 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1117 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1099 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U109 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1081 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1063 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1045 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1027 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1009 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
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
wire [15:0] _U2103_out;
wire [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] cim_stencil_op_hcompute_cim_output_stencil_read [8:0];
wire [15:0] grad_x_stencil_op_hcompute_lxx_stencil_read [0:0];
wire [15:0] grad_x_stencil_op_hcompute_lxy_stencil_read [0:0];
wire [15:0] grad_y_stencil_op_hcompute_lxy_stencil_read [0:0];
wire [15:0] grad_y_stencil_op_hcompute_lyy_stencil_read [0:0];
wire [15:0] lgxx_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read [0:0];
wire [15:0] lgxy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read [0:0];
wire [15:0] lgyy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read [0:0];
wire [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0];
wire [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0];
wire [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0];
wire [15:0] op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0];
wire op_hcompute_cim_output_stencil_exe_start_out;
wire [15:0] op_hcompute_cim_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_cim_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1529_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1529_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1547_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1547_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1565_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1565_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1583_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1583_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1601_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1601_d [2:0];
wire op_hcompute_cim_output_stencil_port_controller_U1619_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_U1619_d [2:0];
wire op_hcompute_cim_output_stencil_read_start;
wire op_hcompute_cim_output_stencil_write_start;
wire [15:0] op_hcompute_cim_output_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write [0:0];
wire op_hcompute_cim_stencil_exe_start_out;
wire [15:0] op_hcompute_cim_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_cim_stencil_port_controller_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1349_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1349_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1367_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1367_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1385_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1385_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1403_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1403_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1421_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1421_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1439_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1439_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1457_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1457_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1475_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1475_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1493_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1493_d [2:0];
wire op_hcompute_cim_stencil_port_controller_U1511_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_U1511_d [2:0];
wire op_hcompute_cim_stencil_read_start;
wire op_hcompute_cim_stencil_write_start;
wire [15:0] op_hcompute_cim_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0];
wire op_hcompute_grad_x_stencil_exe_start_out;
wire [15:0] op_hcompute_grad_x_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_grad_x_stencil_port_controller_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U125_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U125_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U143_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U143_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U161_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U161_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U179_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U179_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U197_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U197_d [2:0];
wire op_hcompute_grad_x_stencil_port_controller_U215_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_U215_d [2:0];
wire op_hcompute_grad_x_stencil_read_start;
wire op_hcompute_grad_x_stencil_write_start;
wire [15:0] op_hcompute_grad_x_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0];
wire op_hcompute_grad_y_stencil_exe_start_out;
wire [15:0] op_hcompute_grad_y_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_grad_y_stencil_port_controller_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U557_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U557_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U575_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U575_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U593_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U593_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U611_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U611_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U629_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U629_d [2:0];
wire op_hcompute_grad_y_stencil_port_controller_U647_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_U647_d [2:0];
wire op_hcompute_grad_y_stencil_read_start;
wire op_hcompute_grad_y_stencil_write_start;
wire [15:0] op_hcompute_grad_y_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1637_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1637_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1655_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1655_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1673_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1673_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1691_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1691_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1709_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1709_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1727_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1727_d [2:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_lgxx_stencil_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write [0:0];
wire [15:0] op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0];
wire op_hcompute_lgxx_stencil_1_exe_start_out;
wire [15:0] op_hcompute_lgxx_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U413_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U413_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U431_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U431_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U449_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U449_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U467_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U467_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U485_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U485_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U503_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U503_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U521_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U521_d [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_U539_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_U539_d [2:0];
wire op_hcompute_lgxx_stencil_1_read_start;
wire op_hcompute_lgxx_stencil_1_write_start;
wire [15:0] op_hcompute_lgxx_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_exe_start_out;
wire [15:0] op_hcompute_lgxx_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_port_controller_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_d [2:0];
wire op_hcompute_lgxx_stencil_port_controller_U341_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_U341_d [2:0];
wire op_hcompute_lgxx_stencil_port_controller_U359_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_U359_d [2:0];
wire op_hcompute_lgxx_stencil_port_controller_U377_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_U377_d [2:0];
wire op_hcompute_lgxx_stencil_port_controller_U395_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_U395_d [2:0];
wire op_hcompute_lgxx_stencil_read_start;
wire op_hcompute_lgxx_stencil_write_start;
wire [15:0] op_hcompute_lgxx_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_lgxy_stencil_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write [0:0];
wire [15:0] op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0];
wire op_hcompute_lgxy_stencil_1_exe_start_out;
wire [15:0] op_hcompute_lgxy_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U1007_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U1007_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U881_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U881_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U899_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U899_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U917_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U917_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U935_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U935_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U953_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U953_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U971_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U971_d [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_U989_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_U989_d [2:0];
wire op_hcompute_lgxy_stencil_1_read_start;
wire op_hcompute_lgxy_stencil_1_write_start;
wire [15:0] op_hcompute_lgxy_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_exe_start_out;
wire [15:0] op_hcompute_lgxy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_d [2:0];
wire op_hcompute_lgxy_stencil_port_controller_U809_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_U809_d [2:0];
wire op_hcompute_lgxy_stencil_port_controller_U827_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_U827_d [2:0];
wire op_hcompute_lgxy_stencil_port_controller_U845_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_U845_d [2:0];
wire op_hcompute_lgxy_stencil_port_controller_U863_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_U863_d [2:0];
wire op_hcompute_lgxy_stencil_read_start;
wire op_hcompute_lgxy_stencil_write_start;
wire [15:0] op_hcompute_lgxy_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_lgyy_stencil_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write [0:0];
wire [15:0] op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0];
wire op_hcompute_lgyy_stencil_1_exe_start_out;
wire [15:0] op_hcompute_lgyy_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1205_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1205_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1223_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1223_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1241_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1241_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1259_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1259_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1277_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1277_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1295_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1295_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1313_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1313_d [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_U1331_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_U1331_d [2:0];
wire op_hcompute_lgyy_stencil_1_read_start;
wire op_hcompute_lgyy_stencil_1_write_start;
wire [15:0] op_hcompute_lgyy_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_exe_start_out;
wire [15:0] op_hcompute_lgyy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_d [2:0];
wire op_hcompute_lgyy_stencil_port_controller_U1133_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_U1133_d [2:0];
wire op_hcompute_lgyy_stencil_port_controller_U1151_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_U1151_d [2:0];
wire op_hcompute_lgyy_stencil_port_controller_U1169_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_U1169_d [2:0];
wire op_hcompute_lgyy_stencil_port_controller_U1187_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_U1187_d [2:0];
wire op_hcompute_lgyy_stencil_read_start;
wire op_hcompute_lgyy_stencil_write_start;
wire [15:0] op_hcompute_lgyy_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write [0:0];
wire op_hcompute_lxx_stencil_exe_start_out;
wire [15:0] op_hcompute_lxx_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lxx_stencil_port_controller_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U233_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U233_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U251_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U251_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U269_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U269_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U287_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U287_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U305_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U305_d [2:0];
wire op_hcompute_lxx_stencil_port_controller_U323_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_U323_d [2:0];
wire op_hcompute_lxx_stencil_read_start;
wire op_hcompute_lxx_stencil_write_start;
wire [15:0] op_hcompute_lxx_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write [0:0];
wire op_hcompute_lxy_stencil_exe_start_out;
wire [15:0] op_hcompute_lxy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lxy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U665_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U665_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U683_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U683_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U701_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U701_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U719_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U719_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U737_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U737_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U755_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U755_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U773_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U773_d [2:0];
wire op_hcompute_lxy_stencil_port_controller_U791_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_U791_d [2:0];
wire op_hcompute_lxy_stencil_read_start;
wire op_hcompute_lxy_stencil_write_start;
wire [15:0] op_hcompute_lxy_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write [0:0];
wire op_hcompute_lyy_stencil_exe_start_out;
wire [15:0] op_hcompute_lyy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lyy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1025_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1025_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1043_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1043_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1061_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1061_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1079_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1079_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1097_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1097_d [2:0];
wire op_hcompute_lyy_stencil_port_controller_U1115_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_U1115_d [2:0];
wire op_hcompute_lyy_stencil_read_start;
wire op_hcompute_lyy_stencil_write_start;
wire [15:0] op_hcompute_lyy_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0];
wire op_hcompute_padded16_global_wrapper_stencil_exe_start_out;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_read_start;
wire op_hcompute_padded16_global_wrapper_stencil_write_start;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0];
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2103 (
    .in(padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0]),
    .clk(clk),
    .out(_U2103_out)
);
wire [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars [2:0];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars[2] = op_hcompute_cim_output_stencil_write_start_control_vars_out[2];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars[1] = op_hcompute_cim_output_stencil_write_start_control_vars_out[1];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars[0] = op_hcompute_cim_output_stencil_write_start_control_vars_out[0];
wire [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write[0] = op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write[0];
wire [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
cim_output_stencil_ub cim_output_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_cim_output_stencil_write_wen(op_hcompute_cim_output_stencil_write_start),
    .op_hcompute_cim_output_stencil_write_ctrl_vars(cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars),
    .op_hcompute_cim_output_stencil_write(cim_output_stencil_op_hcompute_cim_output_stencil_write),
    .op_hcompute_hw_output_stencil_read_ren(op_hcompute_hw_output_stencil_read_start),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(cim_output_stencil_op_hcompute_hw_output_stencil_read)
);
wire [15:0] cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars [2:0];
assign cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars[2] = op_hcompute_cim_output_stencil_port_controller_d[2];
assign cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars[1] = op_hcompute_cim_output_stencil_port_controller_d[1];
assign cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars[0] = op_hcompute_cim_output_stencil_port_controller_d[0];
wire [15:0] cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars [2:0];
assign cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars[2] = op_hcompute_cim_stencil_write_start_control_vars_out[2];
assign cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars[1] = op_hcompute_cim_stencil_write_start_control_vars_out[1];
assign cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars[0] = op_hcompute_cim_stencil_write_start_control_vars_out[0];
wire [15:0] cim_stencil_op_hcompute_cim_stencil_write [0:0];
assign cim_stencil_op_hcompute_cim_stencil_write[0] = op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write[0];
cim_stencil_ub cim_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_cim_output_stencil_read_ren(op_hcompute_cim_output_stencil_read_start),
    .op_hcompute_cim_output_stencil_read_ctrl_vars(cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars),
    .op_hcompute_cim_output_stencil_read(cim_stencil_op_hcompute_cim_output_stencil_read),
    .op_hcompute_cim_stencil_write_wen(op_hcompute_cim_stencil_write_start),
    .op_hcompute_cim_stencil_write_ctrl_vars(cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars),
    .op_hcompute_cim_stencil_write(cim_stencil_op_hcompute_cim_stencil_write)
);
wire [15:0] grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars [2:0];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars[2] = op_hcompute_grad_x_stencil_write_start_control_vars_out[2];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars[1] = op_hcompute_grad_x_stencil_write_start_control_vars_out[1];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars[0] = op_hcompute_grad_x_stencil_write_start_control_vars_out[0];
wire [15:0] grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write[0] = op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write[0];
wire [15:0] grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars [2:0];
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars[2] = op_hcompute_lxx_stencil_port_controller_d[2];
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars[1] = op_hcompute_lxx_stencil_port_controller_d[1];
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars[0] = op_hcompute_lxx_stencil_port_controller_d[0];
wire [15:0] grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars [2:0];
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[0] = op_hcompute_lxy_stencil_port_controller_d[0];
grad_x_stencil_ub grad_x_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_grad_x_stencil_write_wen(op_hcompute_grad_x_stencil_write_start),
    .op_hcompute_grad_x_stencil_write_ctrl_vars(grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars),
    .op_hcompute_grad_x_stencil_write(grad_x_stencil_op_hcompute_grad_x_stencil_write),
    .op_hcompute_lxx_stencil_read_ren(op_hcompute_lxx_stencil_read_start),
    .op_hcompute_lxx_stencil_read_ctrl_vars(grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars),
    .op_hcompute_lxx_stencil_read(grad_x_stencil_op_hcompute_lxx_stencil_read),
    .op_hcompute_lxy_stencil_read_ren(op_hcompute_lxy_stencil_read_start),
    .op_hcompute_lxy_stencil_read_ctrl_vars(grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars),
    .op_hcompute_lxy_stencil_read(grad_x_stencil_op_hcompute_lxy_stencil_read)
);
wire [15:0] grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars [2:0];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars[2] = op_hcompute_grad_y_stencil_write_start_control_vars_out[2];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars[1] = op_hcompute_grad_y_stencil_write_start_control_vars_out[1];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars[0] = op_hcompute_grad_y_stencil_write_start_control_vars_out[0];
wire [15:0] grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write[0] = op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write[0];
wire [15:0] grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars [2:0];
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[0] = op_hcompute_lxy_stencil_port_controller_d[0];
wire [15:0] grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars [2:0];
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars[2] = op_hcompute_lyy_stencil_port_controller_d[2];
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars[1] = op_hcompute_lyy_stencil_port_controller_d[1];
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars[0] = op_hcompute_lyy_stencil_port_controller_d[0];
grad_y_stencil_ub grad_y_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_grad_y_stencil_write_wen(op_hcompute_grad_y_stencil_write_start),
    .op_hcompute_grad_y_stencil_write_ctrl_vars(grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars),
    .op_hcompute_grad_y_stencil_write(grad_y_stencil_op_hcompute_grad_y_stencil_write),
    .op_hcompute_lxy_stencil_read_ren(op_hcompute_lxy_stencil_read_start),
    .op_hcompute_lxy_stencil_read_ctrl_vars(grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars),
    .op_hcompute_lxy_stencil_read(grad_y_stencil_op_hcompute_lxy_stencil_read),
    .op_hcompute_lyy_stencil_read_ren(op_hcompute_lyy_stencil_read_start),
    .op_hcompute_lyy_stencil_read_ctrl_vars(grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars),
    .op_hcompute_lyy_stencil_read(grad_y_stencil_op_hcompute_lyy_stencil_read)
);
wire [15:0] lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
assign lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars[0] = op_hcompute_cim_stencil_port_controller_d[0];
wire [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars [2:0];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars[2] = op_hcompute_lgxx_stencil_1_write_start_control_vars_out[2];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars[1] = op_hcompute_lgxx_stencil_1_write_start_control_vars_out[1];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars[0] = op_hcompute_lgxx_stencil_1_write_start_control_vars_out[0];
wire [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0] = op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0];
lgxx_stencil_ub lgxx_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_cim_stencil_read_ren(op_hcompute_cim_stencil_read_start),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgxx_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxx_stencil_1_write_wen(op_hcompute_lgxx_stencil_1_write_start),
    .op_hcompute_lgxx_stencil_1_write_ctrl_vars(lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_write(lgxx_stencil_op_hcompute_lgxx_stencil_1_write)
);
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars [2:0];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars[2] = op_hcompute_lgxx_stencil_write_start_control_vars_out[2];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars[1] = op_hcompute_lgxx_stencil_write_start_control_vars_out[1];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars[0] = op_hcompute_lgxx_stencil_write_start_control_vars_out[0];
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write [0:0];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write[0] = op_hcompute_lgxx_stencil_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write[0];
lgxx_stencil_clkwrk_dsa0_ub lgxx_stencil_clkwrk_dsa0 (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_lgxx_stencil_1_read_ren(op_hcompute_lgxx_stencil_1_read_start),
    .op_hcompute_lgxx_stencil_1_read_ctrl_vars(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_read(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read),
    .op_hcompute_lgxx_stencil_write_wen(op_hcompute_lgxx_stencil_write_start),
    .op_hcompute_lgxx_stencil_write_ctrl_vars(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars),
    .op_hcompute_lgxx_stencil_write(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write)
);
wire [15:0] lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
assign lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[0] = op_hcompute_cim_stencil_port_controller_d[0];
wire [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars [2:0];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars[2] = op_hcompute_lgxy_stencil_1_write_start_control_vars_out[2];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars[1] = op_hcompute_lgxy_stencil_1_write_start_control_vars_out[1];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars[0] = op_hcompute_lgxy_stencil_1_write_start_control_vars_out[0];
wire [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0] = op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0];
lgxy_stencil_ub lgxy_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_cim_stencil_read_ren(op_hcompute_cim_stencil_read_start),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgxy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxy_stencil_1_write_wen(op_hcompute_lgxy_stencil_1_write_start),
    .op_hcompute_lgxy_stencil_1_write_ctrl_vars(lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_write(lgxy_stencil_op_hcompute_lgxy_stencil_1_write)
);
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars [2:0];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars[2] = op_hcompute_lgxy_stencil_write_start_control_vars_out[2];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars[1] = op_hcompute_lgxy_stencil_write_start_control_vars_out[1];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars[0] = op_hcompute_lgxy_stencil_write_start_control_vars_out[0];
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write [0:0];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write[0] = op_hcompute_lgxy_stencil_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write[0];
lgxy_stencil_clkwrk_dsa1_ub lgxy_stencil_clkwrk_dsa1 (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_lgxy_stencil_1_read_ren(op_hcompute_lgxy_stencil_1_read_start),
    .op_hcompute_lgxy_stencil_1_read_ctrl_vars(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_read(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read),
    .op_hcompute_lgxy_stencil_write_wen(op_hcompute_lgxy_stencil_write_start),
    .op_hcompute_lgxy_stencil_write_ctrl_vars(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars),
    .op_hcompute_lgxy_stencil_write(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write)
);
wire [15:0] lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
assign lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[0] = op_hcompute_cim_stencil_port_controller_d[0];
wire [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars [2:0];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars[2] = op_hcompute_lgyy_stencil_1_write_start_control_vars_out[2];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars[1] = op_hcompute_lgyy_stencil_1_write_start_control_vars_out[1];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars[0] = op_hcompute_lgyy_stencil_1_write_start_control_vars_out[0];
wire [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0] = op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0];
lgyy_stencil_ub lgyy_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_cim_stencil_read_ren(op_hcompute_cim_stencil_read_start),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgyy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgyy_stencil_1_write_wen(op_hcompute_lgyy_stencil_1_write_start),
    .op_hcompute_lgyy_stencil_1_write_ctrl_vars(lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_write(lgyy_stencil_op_hcompute_lgyy_stencil_1_write)
);
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars [2:0];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars[2] = op_hcompute_lgyy_stencil_write_start_control_vars_out[2];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars[1] = op_hcompute_lgyy_stencil_write_start_control_vars_out[1];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars[0] = op_hcompute_lgyy_stencil_write_start_control_vars_out[0];
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write [0:0];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write[0] = op_hcompute_lgyy_stencil_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write[0];
lgyy_stencil_clkwrk_dsa2_ub lgyy_stencil_clkwrk_dsa2 (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_lgyy_stencil_1_read_ren(op_hcompute_lgyy_stencil_1_read_start),
    .op_hcompute_lgyy_stencil_1_read_ctrl_vars(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_read(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read),
    .op_hcompute_lgyy_stencil_write_wen(op_hcompute_lgyy_stencil_write_start),
    .op_hcompute_lgyy_stencil_write_ctrl_vars(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars),
    .op_hcompute_lgyy_stencil_write(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write)
);
wire [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0];
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
wire [15:0] lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars [2:0];
assign lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars[2] = op_hcompute_lxx_stencil_write_start_control_vars_out[2];
assign lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars[1] = op_hcompute_lxx_stencil_write_start_control_vars_out[1];
assign lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars[0] = op_hcompute_lxx_stencil_write_start_control_vars_out[0];
wire [15:0] lxx_stencil_op_hcompute_lxx_stencil_write [0:0];
assign lxx_stencil_op_hcompute_lxx_stencil_write[0] = op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write[0];
lxx_stencil_ub lxx_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_lgxx_stencil_1_read_ren(op_hcompute_lgxx_stencil_1_read_start),
    .op_hcompute_lgxx_stencil_1_read_ctrl_vars(lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_read(lxx_stencil_op_hcompute_lgxx_stencil_1_read),
    .op_hcompute_lxx_stencil_write_wen(op_hcompute_lxx_stencil_write_start),
    .op_hcompute_lxx_stencil_write_ctrl_vars(lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars),
    .op_hcompute_lxx_stencil_write(lxx_stencil_op_hcompute_lxx_stencil_write)
);
wire [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0];
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
wire [15:0] lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars [2:0];
assign lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars[2] = op_hcompute_lxy_stencil_write_start_control_vars_out[2];
assign lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars[1] = op_hcompute_lxy_stencil_write_start_control_vars_out[1];
assign lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars[0] = op_hcompute_lxy_stencil_write_start_control_vars_out[0];
wire [15:0] lxy_stencil_op_hcompute_lxy_stencil_write [0:0];
assign lxy_stencil_op_hcompute_lxy_stencil_write[0] = op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write[0];
lxy_stencil_ub lxy_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_lgxy_stencil_1_read_ren(op_hcompute_lgxy_stencil_1_read_start),
    .op_hcompute_lgxy_stencil_1_read_ctrl_vars(lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_read(lxy_stencil_op_hcompute_lgxy_stencil_1_read),
    .op_hcompute_lxy_stencil_write_wen(op_hcompute_lxy_stencil_write_start),
    .op_hcompute_lxy_stencil_write_ctrl_vars(lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars),
    .op_hcompute_lxy_stencil_write(lxy_stencil_op_hcompute_lxy_stencil_write)
);
wire [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0];
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
wire [15:0] lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars [2:0];
assign lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars[2] = op_hcompute_lyy_stencil_write_start_control_vars_out[2];
assign lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars[1] = op_hcompute_lyy_stencil_write_start_control_vars_out[1];
assign lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars[0] = op_hcompute_lyy_stencil_write_start_control_vars_out[0];
wire [15:0] lyy_stencil_op_hcompute_lyy_stencil_write [0:0];
assign lyy_stencil_op_hcompute_lyy_stencil_write[0] = op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write[0];
lyy_stencil_ub lyy_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_lgyy_stencil_1_read_ren(op_hcompute_lgyy_stencil_1_read_start),
    .op_hcompute_lgyy_stencil_1_read_ctrl_vars(lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_read(lyy_stencil_op_hcompute_lgyy_stencil_1_read),
    .op_hcompute_lyy_stencil_write_wen(op_hcompute_lyy_stencil_write_start),
    .op_hcompute_lyy_stencil_write_ctrl_vars(lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars),
    .op_hcompute_lyy_stencil_write(lyy_stencil_op_hcompute_lyy_stencil_write)
);
wire [15:0] op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read [8:0];
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
    .clk(clk),
    .cim_stencil_op_hcompute_cim_output_stencil_read(op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read),
    .cim_output_stencil_op_hcompute_cim_output_stencil_write(op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_cim_output_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_cim_output_stencil_port_controller_valid),
    .out(op_hcompute_cim_output_stencil_exe_start_out)
);
wire [15:0] op_hcompute_cim_output_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_cim_output_stencil_exe_start_control_vars_in[2] = op_hcompute_cim_output_stencil_port_controller_d[2];
assign op_hcompute_cim_output_stencil_exe_start_control_vars_in[1] = op_hcompute_cim_output_stencil_port_controller_d[1];
assign op_hcompute_cim_output_stencil_exe_start_control_vars_in[0] = op_hcompute_cim_output_stencil_port_controller_d[0];
array_delay_U2074 op_hcompute_cim_output_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_cim_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_cim_output_stencil_exe_start_control_vars_out)
);
affine_controller__U2053 op_hcompute_cim_output_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_d)
);
affine_controller__U1512 op_hcompute_cim_output_stencil_port_controller_U1529 (
    .clk(clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1529_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1529_d)
);
affine_controller__U1530 op_hcompute_cim_output_stencil_port_controller_U1547 (
    .clk(clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1547_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1547_d)
);
affine_controller__U1548 op_hcompute_cim_output_stencil_port_controller_U1565 (
    .clk(clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1565_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1565_d)
);
affine_controller__U1566 op_hcompute_cim_output_stencil_port_controller_U1583 (
    .clk(clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1583_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1583_d)
);
affine_controller__U1584 op_hcompute_cim_output_stencil_port_controller_U1601 (
    .clk(clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1601_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1601_d)
);
affine_controller__U1602 op_hcompute_cim_output_stencil_port_controller_U1619 (
    .clk(clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_U1619_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_U1619_d)
);
assign op_hcompute_cim_output_stencil_read_start = op_hcompute_cim_output_stencil_port_controller_valid;
assign op_hcompute_cim_output_stencil_write_start = op_hcompute_cim_output_stencil_exe_start_out;
wire [15:0] op_hcompute_cim_output_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_cim_output_stencil_write_start_control_vars_in[2] = op_hcompute_cim_output_stencil_port_controller_d[2];
assign op_hcompute_cim_output_stencil_write_start_control_vars_in[1] = op_hcompute_cim_output_stencil_port_controller_d[1];
assign op_hcompute_cim_output_stencil_write_start_control_vars_in[0] = op_hcompute_cim_output_stencil_port_controller_d[0];
array_delay_U2070 op_hcompute_cim_output_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_cim_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_cim_output_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_cim_stencil_lgxx_stencil_op_hcompute_cim_stencil_read [0:0];
assign op_hcompute_cim_stencil_lgxx_stencil_op_hcompute_cim_stencil_read[0] = lgxx_stencil_op_hcompute_cim_stencil_read[0];
wire [15:0] op_hcompute_cim_stencil_lgxy_stencil_op_hcompute_cim_stencil_read [0:0];
assign op_hcompute_cim_stencil_lgxy_stencil_op_hcompute_cim_stencil_read[0] = lgxy_stencil_op_hcompute_cim_stencil_read[0];
wire [15:0] op_hcompute_cim_stencil_lgyy_stencil_op_hcompute_cim_stencil_read [0:0];
assign op_hcompute_cim_stencil_lgyy_stencil_op_hcompute_cim_stencil_read[0] = lgyy_stencil_op_hcompute_cim_stencil_read[0];
cu_op_hcompute_cim_stencil op_hcompute_cim_stencil (
    .clk(clk),
    .lgxx_stencil_op_hcompute_cim_stencil_read(op_hcompute_cim_stencil_lgxx_stencil_op_hcompute_cim_stencil_read),
    .lgxy_stencil_op_hcompute_cim_stencil_read(op_hcompute_cim_stencil_lgxy_stencil_op_hcompute_cim_stencil_read),
    .lgyy_stencil_op_hcompute_cim_stencil_read(op_hcompute_cim_stencil_lgyy_stencil_op_hcompute_cim_stencil_read),
    .cim_stencil_op_hcompute_cim_stencil_write(op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_cim_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_cim_stencil_port_controller_valid),
    .out(op_hcompute_cim_stencil_exe_start_out)
);
wire [15:0] op_hcompute_cim_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_cim_stencil_exe_start_control_vars_in[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign op_hcompute_cim_stencil_exe_start_control_vars_in[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign op_hcompute_cim_stencil_exe_start_control_vars_in[0] = op_hcompute_cim_stencil_port_controller_d[0];
array_delay_U2049 op_hcompute_cim_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_cim_stencil_exe_start_control_vars_in),
    .out(op_hcompute_cim_stencil_exe_start_control_vars_out)
);
affine_controller__U2028 op_hcompute_cim_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_cim_stencil_port_controller_valid),
    .d(op_hcompute_cim_stencil_port_controller_d)
);
affine_controller__U1332 op_hcompute_cim_stencil_port_controller_U1349 (
    .clk(clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1349_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1349_d)
);
affine_controller__U1350 op_hcompute_cim_stencil_port_controller_U1367 (
    .clk(clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1367_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1367_d)
);
affine_controller__U1368 op_hcompute_cim_stencil_port_controller_U1385 (
    .clk(clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1385_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1385_d)
);
affine_controller__U1386 op_hcompute_cim_stencil_port_controller_U1403 (
    .clk(clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1403_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1403_d)
);
affine_controller__U1404 op_hcompute_cim_stencil_port_controller_U1421 (
    .clk(clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1421_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1421_d)
);
affine_controller__U1422 op_hcompute_cim_stencil_port_controller_U1439 (
    .clk(clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1439_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1439_d)
);
affine_controller__U1440 op_hcompute_cim_stencil_port_controller_U1457 (
    .clk(clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1457_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1457_d)
);
affine_controller__U1458 op_hcompute_cim_stencil_port_controller_U1475 (
    .clk(clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1475_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1475_d)
);
affine_controller__U1476 op_hcompute_cim_stencil_port_controller_U1493 (
    .clk(clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1493_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1493_d)
);
affine_controller__U1494 op_hcompute_cim_stencil_port_controller_U1511 (
    .clk(clk),
    .valid(op_hcompute_cim_stencil_port_controller_U1511_valid),
    .d(op_hcompute_cim_stencil_port_controller_U1511_d)
);
assign op_hcompute_cim_stencil_read_start = op_hcompute_cim_stencil_port_controller_valid;
assign op_hcompute_cim_stencil_write_start = op_hcompute_cim_stencil_exe_start_out;
wire [15:0] op_hcompute_cim_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_cim_stencil_write_start_control_vars_in[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign op_hcompute_cim_stencil_write_start_control_vars_in[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign op_hcompute_cim_stencil_write_start_control_vars_in[0] = op_hcompute_cim_stencil_port_controller_d[0];
array_delay_U2045 op_hcompute_cim_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_cim_stencil_write_start_control_vars_in),
    .out(op_hcompute_cim_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[5] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[5];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[4] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[4];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[3] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[3];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[2] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[2];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[1] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[1];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[0] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[0];
cu_op_hcompute_grad_x_stencil op_hcompute_grad_x_stencil (
    .clk(clk),
    .padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read(op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read),
    .grad_x_stencil_op_hcompute_grad_x_stencil_write(op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_grad_x_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_grad_x_stencil_port_controller_valid),
    .out(op_hcompute_grad_x_stencil_exe_start_out)
);
wire [15:0] op_hcompute_grad_x_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_grad_x_stencil_exe_start_control_vars_in[2] = op_hcompute_grad_x_stencil_port_controller_d[2];
assign op_hcompute_grad_x_stencil_exe_start_control_vars_in[1] = op_hcompute_grad_x_stencil_port_controller_d[1];
assign op_hcompute_grad_x_stencil_exe_start_control_vars_in[0] = op_hcompute_grad_x_stencil_port_controller_d[0];
array_delay_U1774 op_hcompute_grad_x_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_grad_x_stencil_exe_start_control_vars_in),
    .out(op_hcompute_grad_x_stencil_exe_start_control_vars_out)
);
affine_controller__U1753 op_hcompute_grad_x_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_d)
);
affine_controller__U108 op_hcompute_grad_x_stencil_port_controller_U125 (
    .clk(clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U125_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U125_d)
);
affine_controller__U126 op_hcompute_grad_x_stencil_port_controller_U143 (
    .clk(clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U143_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U143_d)
);
affine_controller__U144 op_hcompute_grad_x_stencil_port_controller_U161 (
    .clk(clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U161_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U161_d)
);
affine_controller__U162 op_hcompute_grad_x_stencil_port_controller_U179 (
    .clk(clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U179_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U179_d)
);
affine_controller__U180 op_hcompute_grad_x_stencil_port_controller_U197 (
    .clk(clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U197_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U197_d)
);
affine_controller__U198 op_hcompute_grad_x_stencil_port_controller_U215 (
    .clk(clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_U215_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_U215_d)
);
assign op_hcompute_grad_x_stencil_read_start = op_hcompute_grad_x_stencil_port_controller_valid;
assign op_hcompute_grad_x_stencil_write_start = op_hcompute_grad_x_stencil_exe_start_out;
wire [15:0] op_hcompute_grad_x_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_grad_x_stencil_write_start_control_vars_in[2] = op_hcompute_grad_x_stencil_port_controller_d[2];
assign op_hcompute_grad_x_stencil_write_start_control_vars_in[1] = op_hcompute_grad_x_stencil_port_controller_d[1];
assign op_hcompute_grad_x_stencil_write_start_control_vars_in[0] = op_hcompute_grad_x_stencil_port_controller_d[0];
array_delay_U1770 op_hcompute_grad_x_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_grad_x_stencil_write_start_control_vars_in),
    .out(op_hcompute_grad_x_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[5] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[5];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[4] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[4];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[3] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[3];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[2] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[2];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[1] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[1];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[0] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[0];
cu_op_hcompute_grad_y_stencil op_hcompute_grad_y_stencil (
    .clk(clk),
    .padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read(op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read),
    .grad_y_stencil_op_hcompute_grad_y_stencil_write(op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_grad_y_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_grad_y_stencil_port_controller_valid),
    .out(op_hcompute_grad_y_stencil_exe_start_out)
);
wire [15:0] op_hcompute_grad_y_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_grad_y_stencil_exe_start_control_vars_in[2] = op_hcompute_grad_y_stencil_port_controller_d[2];
assign op_hcompute_grad_y_stencil_exe_start_control_vars_in[1] = op_hcompute_grad_y_stencil_port_controller_d[1];
assign op_hcompute_grad_y_stencil_exe_start_control_vars_in[0] = op_hcompute_grad_y_stencil_port_controller_d[0];
array_delay_U1874 op_hcompute_grad_y_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_grad_y_stencil_exe_start_control_vars_in),
    .out(op_hcompute_grad_y_stencil_exe_start_control_vars_out)
);
affine_controller__U1853 op_hcompute_grad_y_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_d)
);
affine_controller__U540 op_hcompute_grad_y_stencil_port_controller_U557 (
    .clk(clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U557_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U557_d)
);
affine_controller__U558 op_hcompute_grad_y_stencil_port_controller_U575 (
    .clk(clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U575_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U575_d)
);
affine_controller__U576 op_hcompute_grad_y_stencil_port_controller_U593 (
    .clk(clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U593_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U593_d)
);
affine_controller__U594 op_hcompute_grad_y_stencil_port_controller_U611 (
    .clk(clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U611_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U611_d)
);
affine_controller__U612 op_hcompute_grad_y_stencil_port_controller_U629 (
    .clk(clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U629_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U629_d)
);
affine_controller__U630 op_hcompute_grad_y_stencil_port_controller_U647 (
    .clk(clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_U647_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_U647_d)
);
assign op_hcompute_grad_y_stencil_read_start = op_hcompute_grad_y_stencil_port_controller_valid;
assign op_hcompute_grad_y_stencil_write_start = op_hcompute_grad_y_stencil_exe_start_out;
wire [15:0] op_hcompute_grad_y_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_grad_y_stencil_write_start_control_vars_in[2] = op_hcompute_grad_y_stencil_port_controller_d[2];
assign op_hcompute_grad_y_stencil_write_start_control_vars_in[1] = op_hcompute_grad_y_stencil_port_controller_d[1];
assign op_hcompute_grad_y_stencil_write_start_control_vars_in[0] = op_hcompute_grad_y_stencil_port_controller_d[0];
array_delay_U1870 op_hcompute_grad_y_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_grad_y_stencil_write_start_control_vars_in),
    .out(op_hcompute_grad_y_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0];
assign op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read[0] = cim_output_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(clk),
    .cim_output_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_output_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_hw_output_stencil_port_controller_valid),
    .out(op_hcompute_hw_output_stencil_exe_start_out)
);
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U2099 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
affine_controller__U2078 op_hcompute_hw_output_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
affine_controller__U1620 op_hcompute_hw_output_stencil_port_controller_U1637 (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1637_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1637_d)
);
affine_controller__U1638 op_hcompute_hw_output_stencil_port_controller_U1655 (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1655_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1655_d)
);
affine_controller__U1656 op_hcompute_hw_output_stencil_port_controller_U1673 (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1673_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1673_d)
);
affine_controller__U1674 op_hcompute_hw_output_stencil_port_controller_U1691 (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1691_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1691_d)
);
affine_controller__U1692 op_hcompute_hw_output_stencil_port_controller_U1709 (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1709_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1709_d)
);
affine_controller__U1710 op_hcompute_hw_output_stencil_port_controller_U1727 (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1727_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1727_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start = op_hcompute_hw_output_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U2095 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
cu_op_hcompute_lgxx_stencil op_hcompute_lgxx_stencil (
    .clk(clk),
    .lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write(op_hcompute_lgxx_stencil_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write)
);
wire [15:0] op_hcompute_lgxx_stencil_1_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read [0:0];
assign op_hcompute_lgxx_stencil_1_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read[0] = lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read[0];
wire [15:0] op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0];
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
    .clk(clk),
    .lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read(op_hcompute_lgxx_stencil_1_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read),
    .lxx_stencil_op_hcompute_lgxx_stencil_1_read(op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read),
    .lgxx_stencil_op_hcompute_lgxx_stencil_1_write(op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxx_stencil_1_exe_start (
    .clk(clk),
    .in(op_hcompute_lgxx_stencil_1_port_controller_valid),
    .out(op_hcompute_lgxx_stencil_1_exe_start_out)
);
wire [15:0] op_hcompute_lgxx_stencil_1_exe_start_control_vars_in [2:0];
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_in[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_in[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_in[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
array_delay_U1849 op_hcompute_lgxx_stencil_1_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lgxx_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_1_exe_start_control_vars_out)
);
affine_controller__U1828 op_hcompute_lgxx_stencil_1_port_controller (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_d)
);
affine_controller__U396 op_hcompute_lgxx_stencil_1_port_controller_U413 (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U413_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U413_d)
);
affine_controller__U414 op_hcompute_lgxx_stencil_1_port_controller_U431 (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U431_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U431_d)
);
affine_controller__U432 op_hcompute_lgxx_stencil_1_port_controller_U449 (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U449_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U449_d)
);
affine_controller__U450 op_hcompute_lgxx_stencil_1_port_controller_U467 (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U467_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U467_d)
);
affine_controller__U468 op_hcompute_lgxx_stencil_1_port_controller_U485 (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U485_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U485_d)
);
affine_controller__U486 op_hcompute_lgxx_stencil_1_port_controller_U503 (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U503_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U503_d)
);
affine_controller__U504 op_hcompute_lgxx_stencil_1_port_controller_U521 (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U521_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U521_d)
);
affine_controller__U522 op_hcompute_lgxx_stencil_1_port_controller_U539 (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_U539_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_U539_d)
);
assign op_hcompute_lgxx_stencil_1_read_start = op_hcompute_lgxx_stencil_1_port_controller_valid;
assign op_hcompute_lgxx_stencil_1_write_start = op_hcompute_lgxx_stencil_1_exe_start_out;
wire [15:0] op_hcompute_lgxx_stencil_1_write_start_control_vars_in [2:0];
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_in[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_in[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_in[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
array_delay_U1845 op_hcompute_lgxx_stencil_1_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lgxx_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_1_write_start_control_vars_out)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxx_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_lgxx_stencil_port_controller_valid),
    .out(op_hcompute_lgxx_stencil_exe_start_out)
);
wire [15:0] op_hcompute_lgxx_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_lgxx_stencil_exe_start_control_vars_in[2] = op_hcompute_lgxx_stencil_port_controller_d[2];
assign op_hcompute_lgxx_stencil_exe_start_control_vars_in[1] = op_hcompute_lgxx_stencil_port_controller_d[1];
assign op_hcompute_lgxx_stencil_exe_start_control_vars_in[0] = op_hcompute_lgxx_stencil_port_controller_d[0];
array_delay_U1824 op_hcompute_lgxx_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lgxx_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_exe_start_control_vars_out)
);
affine_controller__U1803 op_hcompute_lgxx_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_d)
);
affine_controller__U324 op_hcompute_lgxx_stencil_port_controller_U341 (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_U341_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_U341_d)
);
affine_controller__U342 op_hcompute_lgxx_stencil_port_controller_U359 (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_U359_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_U359_d)
);
affine_controller__U360 op_hcompute_lgxx_stencil_port_controller_U377 (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_U377_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_U377_d)
);
affine_controller__U378 op_hcompute_lgxx_stencil_port_controller_U395 (
    .clk(clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_U395_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_U395_d)
);
assign op_hcompute_lgxx_stencil_read_start = op_hcompute_lgxx_stencil_port_controller_valid;
assign op_hcompute_lgxx_stencil_write_start = op_hcompute_lgxx_stencil_exe_start_out;
wire [15:0] op_hcompute_lgxx_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_lgxx_stencil_write_start_control_vars_in[2] = op_hcompute_lgxx_stencil_port_controller_d[2];
assign op_hcompute_lgxx_stencil_write_start_control_vars_in[1] = op_hcompute_lgxx_stencil_port_controller_d[1];
assign op_hcompute_lgxx_stencil_write_start_control_vars_in[0] = op_hcompute_lgxx_stencil_port_controller_d[0];
array_delay_U1820 op_hcompute_lgxx_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lgxx_stencil_write_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_write_start_control_vars_out)
);
cu_op_hcompute_lgxy_stencil op_hcompute_lgxy_stencil (
    .clk(clk),
    .lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write(op_hcompute_lgxy_stencil_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write)
);
wire [15:0] op_hcompute_lgxy_stencil_1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read [0:0];
assign op_hcompute_lgxy_stencil_1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read[0] = lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read[0];
wire [15:0] op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0];
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
    .clk(clk),
    .lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read(op_hcompute_lgxy_stencil_1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read),
    .lxy_stencil_op_hcompute_lgxy_stencil_1_read(op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read),
    .lgxy_stencil_op_hcompute_lgxy_stencil_1_write(op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxy_stencil_1_exe_start (
    .clk(clk),
    .in(op_hcompute_lgxy_stencil_1_port_controller_valid),
    .out(op_hcompute_lgxy_stencil_1_exe_start_out)
);
wire [15:0] op_hcompute_lgxy_stencil_1_exe_start_control_vars_in [2:0];
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_in[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_in[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_in[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
array_delay_U1949 op_hcompute_lgxy_stencil_1_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lgxy_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_1_exe_start_control_vars_out)
);
affine_controller__U1928 op_hcompute_lgxy_stencil_1_port_controller (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_d)
);
affine_controller__U990 op_hcompute_lgxy_stencil_1_port_controller_U1007 (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U1007_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U1007_d)
);
affine_controller__U864 op_hcompute_lgxy_stencil_1_port_controller_U881 (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U881_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U881_d)
);
affine_controller__U882 op_hcompute_lgxy_stencil_1_port_controller_U899 (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U899_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U899_d)
);
affine_controller__U900 op_hcompute_lgxy_stencil_1_port_controller_U917 (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U917_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U917_d)
);
affine_controller__U918 op_hcompute_lgxy_stencil_1_port_controller_U935 (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U935_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U935_d)
);
affine_controller__U936 op_hcompute_lgxy_stencil_1_port_controller_U953 (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U953_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U953_d)
);
affine_controller__U954 op_hcompute_lgxy_stencil_1_port_controller_U971 (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U971_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U971_d)
);
affine_controller__U972 op_hcompute_lgxy_stencil_1_port_controller_U989 (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_U989_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_U989_d)
);
assign op_hcompute_lgxy_stencil_1_read_start = op_hcompute_lgxy_stencil_1_port_controller_valid;
assign op_hcompute_lgxy_stencil_1_write_start = op_hcompute_lgxy_stencil_1_exe_start_out;
wire [15:0] op_hcompute_lgxy_stencil_1_write_start_control_vars_in [2:0];
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_in[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_in[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_in[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
array_delay_U1945 op_hcompute_lgxy_stencil_1_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lgxy_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_1_write_start_control_vars_out)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxy_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_lgxy_stencil_port_controller_valid),
    .out(op_hcompute_lgxy_stencil_exe_start_out)
);
wire [15:0] op_hcompute_lgxy_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_lgxy_stencil_exe_start_control_vars_in[2] = op_hcompute_lgxy_stencil_port_controller_d[2];
assign op_hcompute_lgxy_stencil_exe_start_control_vars_in[1] = op_hcompute_lgxy_stencil_port_controller_d[1];
assign op_hcompute_lgxy_stencil_exe_start_control_vars_in[0] = op_hcompute_lgxy_stencil_port_controller_d[0];
array_delay_U1924 op_hcompute_lgxy_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lgxy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_exe_start_control_vars_out)
);
affine_controller__U1903 op_hcompute_lgxy_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_d)
);
affine_controller__U792 op_hcompute_lgxy_stencil_port_controller_U809 (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_U809_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_U809_d)
);
affine_controller__U810 op_hcompute_lgxy_stencil_port_controller_U827 (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_U827_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_U827_d)
);
affine_controller__U828 op_hcompute_lgxy_stencil_port_controller_U845 (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_U845_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_U845_d)
);
affine_controller__U846 op_hcompute_lgxy_stencil_port_controller_U863 (
    .clk(clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_U863_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_U863_d)
);
assign op_hcompute_lgxy_stencil_read_start = op_hcompute_lgxy_stencil_port_controller_valid;
assign op_hcompute_lgxy_stencil_write_start = op_hcompute_lgxy_stencil_exe_start_out;
wire [15:0] op_hcompute_lgxy_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_lgxy_stencil_write_start_control_vars_in[2] = op_hcompute_lgxy_stencil_port_controller_d[2];
assign op_hcompute_lgxy_stencil_write_start_control_vars_in[1] = op_hcompute_lgxy_stencil_port_controller_d[1];
assign op_hcompute_lgxy_stencil_write_start_control_vars_in[0] = op_hcompute_lgxy_stencil_port_controller_d[0];
array_delay_U1920 op_hcompute_lgxy_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lgxy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_write_start_control_vars_out)
);
cu_op_hcompute_lgyy_stencil op_hcompute_lgyy_stencil (
    .clk(clk),
    .lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write(op_hcompute_lgyy_stencil_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write)
);
wire [15:0] op_hcompute_lgyy_stencil_1_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read [0:0];
assign op_hcompute_lgyy_stencil_1_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read[0] = lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read[0];
wire [15:0] op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0];
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
    .clk(clk),
    .lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read(op_hcompute_lgyy_stencil_1_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read),
    .lyy_stencil_op_hcompute_lgyy_stencil_1_read(op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read),
    .lgyy_stencil_op_hcompute_lgyy_stencil_1_write(op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgyy_stencil_1_exe_start (
    .clk(clk),
    .in(op_hcompute_lgyy_stencil_1_port_controller_valid),
    .out(op_hcompute_lgyy_stencil_1_exe_start_out)
);
wire [15:0] op_hcompute_lgyy_stencil_1_exe_start_control_vars_in [2:0];
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_in[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_in[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_in[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
array_delay_U2024 op_hcompute_lgyy_stencil_1_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lgyy_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_1_exe_start_control_vars_out)
);
affine_controller__U2003 op_hcompute_lgyy_stencil_1_port_controller (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_d)
);
affine_controller__U1188 op_hcompute_lgyy_stencil_1_port_controller_U1205 (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1205_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1205_d)
);
affine_controller__U1206 op_hcompute_lgyy_stencil_1_port_controller_U1223 (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1223_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1223_d)
);
affine_controller__U1224 op_hcompute_lgyy_stencil_1_port_controller_U1241 (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1241_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1241_d)
);
affine_controller__U1242 op_hcompute_lgyy_stencil_1_port_controller_U1259 (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1259_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1259_d)
);
affine_controller__U1260 op_hcompute_lgyy_stencil_1_port_controller_U1277 (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1277_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1277_d)
);
affine_controller__U1278 op_hcompute_lgyy_stencil_1_port_controller_U1295 (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1295_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1295_d)
);
affine_controller__U1296 op_hcompute_lgyy_stencil_1_port_controller_U1313 (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1313_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1313_d)
);
affine_controller__U1314 op_hcompute_lgyy_stencil_1_port_controller_U1331 (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_U1331_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_U1331_d)
);
assign op_hcompute_lgyy_stencil_1_read_start = op_hcompute_lgyy_stencil_1_port_controller_valid;
assign op_hcompute_lgyy_stencil_1_write_start = op_hcompute_lgyy_stencil_1_exe_start_out;
wire [15:0] op_hcompute_lgyy_stencil_1_write_start_control_vars_in [2:0];
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_in[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_in[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_in[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
array_delay_U2020 op_hcompute_lgyy_stencil_1_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lgyy_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_1_write_start_control_vars_out)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgyy_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_lgyy_stencil_port_controller_valid),
    .out(op_hcompute_lgyy_stencil_exe_start_out)
);
wire [15:0] op_hcompute_lgyy_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_lgyy_stencil_exe_start_control_vars_in[2] = op_hcompute_lgyy_stencil_port_controller_d[2];
assign op_hcompute_lgyy_stencil_exe_start_control_vars_in[1] = op_hcompute_lgyy_stencil_port_controller_d[1];
assign op_hcompute_lgyy_stencil_exe_start_control_vars_in[0] = op_hcompute_lgyy_stencil_port_controller_d[0];
array_delay_U1999 op_hcompute_lgyy_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lgyy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_exe_start_control_vars_out)
);
affine_controller__U1978 op_hcompute_lgyy_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_d)
);
affine_controller__U1116 op_hcompute_lgyy_stencil_port_controller_U1133 (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_U1133_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_U1133_d)
);
affine_controller__U1134 op_hcompute_lgyy_stencil_port_controller_U1151 (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_U1151_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_U1151_d)
);
affine_controller__U1152 op_hcompute_lgyy_stencil_port_controller_U1169 (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_U1169_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_U1169_d)
);
affine_controller__U1170 op_hcompute_lgyy_stencil_port_controller_U1187 (
    .clk(clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_U1187_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_U1187_d)
);
assign op_hcompute_lgyy_stencil_read_start = op_hcompute_lgyy_stencil_port_controller_valid;
assign op_hcompute_lgyy_stencil_write_start = op_hcompute_lgyy_stencil_exe_start_out;
wire [15:0] op_hcompute_lgyy_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_lgyy_stencil_write_start_control_vars_in[2] = op_hcompute_lgyy_stencil_port_controller_d[2];
assign op_hcompute_lgyy_stencil_write_start_control_vars_in[1] = op_hcompute_lgyy_stencil_port_controller_d[1];
assign op_hcompute_lgyy_stencil_write_start_control_vars_in[0] = op_hcompute_lgyy_stencil_port_controller_d[0];
array_delay_U1995 op_hcompute_lgyy_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lgyy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read [0:0];
assign op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read[0] = grad_x_stencil_op_hcompute_lxx_stencil_read[0];
cu_op_hcompute_lxx_stencil op_hcompute_lxx_stencil (
    .clk(clk),
    .grad_x_stencil_op_hcompute_lxx_stencil_read(op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read),
    .lxx_stencil_op_hcompute_lxx_stencil_write(op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lxx_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_lxx_stencil_port_controller_valid),
    .out(op_hcompute_lxx_stencil_exe_start_out)
);
wire [15:0] op_hcompute_lxx_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_lxx_stencil_exe_start_control_vars_in[2] = op_hcompute_lxx_stencil_port_controller_d[2];
assign op_hcompute_lxx_stencil_exe_start_control_vars_in[1] = op_hcompute_lxx_stencil_port_controller_d[1];
assign op_hcompute_lxx_stencil_exe_start_control_vars_in[0] = op_hcompute_lxx_stencil_port_controller_d[0];
array_delay_U1799 op_hcompute_lxx_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lxx_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lxx_stencil_exe_start_control_vars_out)
);
affine_controller__U1778 op_hcompute_lxx_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_lxx_stencil_port_controller_valid),
    .d(op_hcompute_lxx_stencil_port_controller_d)
);
affine_controller__U216 op_hcompute_lxx_stencil_port_controller_U233 (
    .clk(clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U233_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U233_d)
);
affine_controller__U234 op_hcompute_lxx_stencil_port_controller_U251 (
    .clk(clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U251_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U251_d)
);
affine_controller__U252 op_hcompute_lxx_stencil_port_controller_U269 (
    .clk(clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U269_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U269_d)
);
affine_controller__U270 op_hcompute_lxx_stencil_port_controller_U287 (
    .clk(clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U287_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U287_d)
);
affine_controller__U288 op_hcompute_lxx_stencil_port_controller_U305 (
    .clk(clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U305_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U305_d)
);
affine_controller__U306 op_hcompute_lxx_stencil_port_controller_U323 (
    .clk(clk),
    .valid(op_hcompute_lxx_stencil_port_controller_U323_valid),
    .d(op_hcompute_lxx_stencil_port_controller_U323_d)
);
assign op_hcompute_lxx_stencil_read_start = op_hcompute_lxx_stencil_port_controller_valid;
assign op_hcompute_lxx_stencil_write_start = op_hcompute_lxx_stencil_exe_start_out;
wire [15:0] op_hcompute_lxx_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_lxx_stencil_write_start_control_vars_in[2] = op_hcompute_lxx_stencil_port_controller_d[2];
assign op_hcompute_lxx_stencil_write_start_control_vars_in[1] = op_hcompute_lxx_stencil_port_controller_d[1];
assign op_hcompute_lxx_stencil_write_start_control_vars_in[0] = op_hcompute_lxx_stencil_port_controller_d[0];
array_delay_U1795 op_hcompute_lxx_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lxx_stencil_write_start_control_vars_in),
    .out(op_hcompute_lxx_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_lxy_stencil_grad_x_stencil_op_hcompute_lxy_stencil_read [0:0];
assign op_hcompute_lxy_stencil_grad_x_stencil_op_hcompute_lxy_stencil_read[0] = grad_x_stencil_op_hcompute_lxy_stencil_read[0];
wire [15:0] op_hcompute_lxy_stencil_grad_y_stencil_op_hcompute_lxy_stencil_read [0:0];
assign op_hcompute_lxy_stencil_grad_y_stencil_op_hcompute_lxy_stencil_read[0] = grad_y_stencil_op_hcompute_lxy_stencil_read[0];
cu_op_hcompute_lxy_stencil op_hcompute_lxy_stencil (
    .clk(clk),
    .grad_x_stencil_op_hcompute_lxy_stencil_read(op_hcompute_lxy_stencil_grad_x_stencil_op_hcompute_lxy_stencil_read),
    .grad_y_stencil_op_hcompute_lxy_stencil_read(op_hcompute_lxy_stencil_grad_y_stencil_op_hcompute_lxy_stencil_read),
    .lxy_stencil_op_hcompute_lxy_stencil_write(op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lxy_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_lxy_stencil_port_controller_valid),
    .out(op_hcompute_lxy_stencil_exe_start_out)
);
wire [15:0] op_hcompute_lxy_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_lxy_stencil_exe_start_control_vars_in[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign op_hcompute_lxy_stencil_exe_start_control_vars_in[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign op_hcompute_lxy_stencil_exe_start_control_vars_in[0] = op_hcompute_lxy_stencil_port_controller_d[0];
array_delay_U1899 op_hcompute_lxy_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lxy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lxy_stencil_exe_start_control_vars_out)
);
affine_controller__U1878 op_hcompute_lxy_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_lxy_stencil_port_controller_valid),
    .d(op_hcompute_lxy_stencil_port_controller_d)
);
affine_controller__U648 op_hcompute_lxy_stencil_port_controller_U665 (
    .clk(clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U665_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U665_d)
);
affine_controller__U666 op_hcompute_lxy_stencil_port_controller_U683 (
    .clk(clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U683_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U683_d)
);
affine_controller__U684 op_hcompute_lxy_stencil_port_controller_U701 (
    .clk(clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U701_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U701_d)
);
affine_controller__U702 op_hcompute_lxy_stencil_port_controller_U719 (
    .clk(clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U719_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U719_d)
);
affine_controller__U720 op_hcompute_lxy_stencil_port_controller_U737 (
    .clk(clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U737_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U737_d)
);
affine_controller__U738 op_hcompute_lxy_stencil_port_controller_U755 (
    .clk(clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U755_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U755_d)
);
affine_controller__U756 op_hcompute_lxy_stencil_port_controller_U773 (
    .clk(clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U773_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U773_d)
);
affine_controller__U774 op_hcompute_lxy_stencil_port_controller_U791 (
    .clk(clk),
    .valid(op_hcompute_lxy_stencil_port_controller_U791_valid),
    .d(op_hcompute_lxy_stencil_port_controller_U791_d)
);
assign op_hcompute_lxy_stencil_read_start = op_hcompute_lxy_stencil_port_controller_valid;
assign op_hcompute_lxy_stencil_write_start = op_hcompute_lxy_stencil_exe_start_out;
wire [15:0] op_hcompute_lxy_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_lxy_stencil_write_start_control_vars_in[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign op_hcompute_lxy_stencil_write_start_control_vars_in[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign op_hcompute_lxy_stencil_write_start_control_vars_in[0] = op_hcompute_lxy_stencil_port_controller_d[0];
array_delay_U1895 op_hcompute_lxy_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lxy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lxy_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read [0:0];
assign op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read[0] = grad_y_stencil_op_hcompute_lyy_stencil_read[0];
cu_op_hcompute_lyy_stencil op_hcompute_lyy_stencil (
    .clk(clk),
    .grad_y_stencil_op_hcompute_lyy_stencil_read(op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read),
    .lyy_stencil_op_hcompute_lyy_stencil_write(op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lyy_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_lyy_stencil_port_controller_valid),
    .out(op_hcompute_lyy_stencil_exe_start_out)
);
wire [15:0] op_hcompute_lyy_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_lyy_stencil_exe_start_control_vars_in[2] = op_hcompute_lyy_stencil_port_controller_d[2];
assign op_hcompute_lyy_stencil_exe_start_control_vars_in[1] = op_hcompute_lyy_stencil_port_controller_d[1];
assign op_hcompute_lyy_stencil_exe_start_control_vars_in[0] = op_hcompute_lyy_stencil_port_controller_d[0];
array_delay_U1974 op_hcompute_lyy_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lyy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lyy_stencil_exe_start_control_vars_out)
);
affine_controller__U1953 op_hcompute_lyy_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_lyy_stencil_port_controller_valid),
    .d(op_hcompute_lyy_stencil_port_controller_d)
);
affine_controller__U1008 op_hcompute_lyy_stencil_port_controller_U1025 (
    .clk(clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1025_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1025_d)
);
affine_controller__U1026 op_hcompute_lyy_stencil_port_controller_U1043 (
    .clk(clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1043_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1043_d)
);
affine_controller__U1044 op_hcompute_lyy_stencil_port_controller_U1061 (
    .clk(clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1061_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1061_d)
);
affine_controller__U1062 op_hcompute_lyy_stencil_port_controller_U1079 (
    .clk(clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1079_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1079_d)
);
affine_controller__U1080 op_hcompute_lyy_stencil_port_controller_U1097 (
    .clk(clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1097_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1097_d)
);
affine_controller__U1098 op_hcompute_lyy_stencil_port_controller_U1115 (
    .clk(clk),
    .valid(op_hcompute_lyy_stencil_port_controller_U1115_valid),
    .d(op_hcompute_lyy_stencil_port_controller_U1115_d)
);
assign op_hcompute_lyy_stencil_read_start = op_hcompute_lyy_stencil_port_controller_valid;
assign op_hcompute_lyy_stencil_write_start = op_hcompute_lyy_stencil_exe_start_out;
wire [15:0] op_hcompute_lyy_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_lyy_stencil_write_start_control_vars_in[2] = op_hcompute_lyy_stencil_port_controller_d[2];
assign op_hcompute_lyy_stencil_write_start_control_vars_in[1] = op_hcompute_lyy_stencil_port_controller_d[1];
assign op_hcompute_lyy_stencil_write_start_control_vars_in[0] = op_hcompute_lyy_stencil_port_controller_d[0];
array_delay_U1970 op_hcompute_lyy_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_lyy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lyy_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0];
assign op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0] = _U2103_out;
cu_op_hcompute_padded16_global_wrapper_stencil op_hcompute_padded16_global_wrapper_stencil (
    .clk(clk),
    .padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read(op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read),
    .padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write(op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_padded16_global_wrapper_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_padded16_global_wrapper_stencil_port_controller_valid),
    .out(op_hcompute_padded16_global_wrapper_stencil_exe_start_out)
);
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in[2] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in[1] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in[0] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[0];
array_delay_U1749 op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_out)
);
affine_controller__U1728 op_hcompute_padded16_global_wrapper_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_d)
);
affine_controller__U90 op_hcompute_padded16_global_wrapper_stencil_port_controller_U107 (
    .clk(clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U107_d)
);
affine_controller__U0 op_hcompute_padded16_global_wrapper_stencil_port_controller_U17 (
    .clk(clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U17_d)
);
affine_controller__U18 op_hcompute_padded16_global_wrapper_stencil_port_controller_U35 (
    .clk(clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U35_d)
);
affine_controller__U36 op_hcompute_padded16_global_wrapper_stencil_port_controller_U53 (
    .clk(clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U53_d)
);
affine_controller__U54 op_hcompute_padded16_global_wrapper_stencil_port_controller_U71 (
    .clk(clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U71_d)
);
affine_controller__U72 op_hcompute_padded16_global_wrapper_stencil_port_controller_U89 (
    .clk(clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_U89_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_read_start = op_hcompute_padded16_global_wrapper_stencil_port_controller_valid;
assign op_hcompute_padded16_global_wrapper_stencil_write_start = op_hcompute_padded16_global_wrapper_stencil_exe_start_out;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[0];
array_delay_U1745 op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in),
    .out(op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out)
);
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars [2:0];
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars[2] = op_hcompute_grad_x_stencil_port_controller_d[2];
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars[1] = op_hcompute_grad_x_stencil_port_controller_d[1];
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars[0] = op_hcompute_grad_x_stencil_port_controller_d[0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars [2:0];
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars[2] = op_hcompute_grad_y_stencil_port_controller_d[2];
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars[1] = op_hcompute_grad_y_stencil_port_controller_d[1];
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars[0] = op_hcompute_grad_y_stencil_port_controller_d[0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars [2:0];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out[2];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out[1];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out[0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0] = op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0];
padded16_global_wrapper_stencil_ub padded16_global_wrapper_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_grad_x_stencil_read_ren(op_hcompute_grad_x_stencil_read_start),
    .op_hcompute_grad_x_stencil_read_ctrl_vars(padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars),
    .op_hcompute_grad_x_stencil_read(padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read),
    .op_hcompute_grad_y_stencil_read_ren(op_hcompute_grad_y_stencil_read_start),
    .op_hcompute_grad_y_stencil_read_ctrl_vars(padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars),
    .op_hcompute_grad_y_stencil_read(padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read),
    .op_hcompute_padded16_global_wrapper_stencil_write_wen(op_hcompute_padded16_global_wrapper_stencil_write_start),
    .op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_padded16_global_wrapper_stencil_write(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_valid = op_hcompute_padded16_global_wrapper_stencil_read_start;
endmodule

