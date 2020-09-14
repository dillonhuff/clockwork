// Module `ub` defined externally
module lgyy_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_cim_stencil_read [0:0],
    input [15:0] op_hcompute_lgyy_stencil_1_write [0:0]
);
assign op_hcompute_cim_stencil_read[0] = op_hcompute_lgyy_stencil_1_write[0];
endmodule

module lgxy_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_cim_stencil_read [0:0],
    input [15:0] op_hcompute_lgxy_stencil_1_write [0:0]
);
assign op_hcompute_cim_stencil_read[0] = op_hcompute_lgxy_stencil_1_write[0];
endmodule

module lgxx_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_cim_stencil_read [0:0],
    input [15:0] op_hcompute_lgxx_stencil_1_write [0:0]
);
assign op_hcompute_cim_stencil_read[0] = op_hcompute_lgxx_stencil_1_write[0];
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

module grad_y_stencil_ub (
    input clk,
    input reset,
    input [15:0] op_hcompute_grad_y_stencil_write [0:0],
    output [15:0] op_hcompute_lxy_stencil_read [0:0],
    output [15:0] op_hcompute_lyy_stencil_read [0:0]
);
assign op_hcompute_lxy_stencil_read[0] = op_hcompute_grad_y_stencil_write[0];
assign op_hcompute_lyy_stencil_read[0] = op_hcompute_grad_y_stencil_write[0];
endmodule

module grad_x_stencil_ub (
    input clk,
    input reset,
    input [15:0] op_hcompute_grad_x_stencil_write [0:0],
    output [15:0] op_hcompute_lxx_stencil_read [0:0],
    output [15:0] op_hcompute_lxy_stencil_read [0:0]
);
assign op_hcompute_lxx_stencil_read[0] = op_hcompute_grad_x_stencil_write[0];
assign op_hcompute_lxy_stencil_read[0] = op_hcompute_grad_x_stencil_write[0];
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
    input [15:0] in1_lyy_stencil [8:0]
);
assign out_lgyy_stencil = 16'(in1_lyy_stencil[0] + (16'(in1_lyy_stencil[1] + (16'(in1_lyy_stencil[2] + (16'(in1_lyy_stencil[3] + (16'(in1_lyy_stencil[4] + (16'(in1_lyy_stencil[5] + (16'(in1_lyy_stencil[6] + (16'(in1_lyy_stencil[7] + in1_lyy_stencil[8])))))))))))))));
endmodule

module cu_op_hcompute_lgyy_stencil_1 (
    input clk,
    input [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0],
    output [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_lgyy_stencil;
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
    .in1_lyy_stencil(inner_compute_in1_lyy_stencil)
);
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0] = inner_compute_out_lgyy_stencil;
endmodule

module hcompute_lgxy_stencil_1 (
    output [15:0] out_lgxy_stencil,
    input [15:0] in1_lxy_stencil [8:0]
);
assign out_lgxy_stencil = 16'(in1_lxy_stencil[0] + (16'(in1_lxy_stencil[1] + (16'(in1_lxy_stencil[2] + (16'(in1_lxy_stencil[3] + (16'(in1_lxy_stencil[4] + (16'(in1_lxy_stencil[5] + (16'(in1_lxy_stencil[6] + (16'(in1_lxy_stencil[7] + in1_lxy_stencil[8])))))))))))))));
endmodule

module cu_op_hcompute_lgxy_stencil_1 (
    input clk,
    input [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0],
    output [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_lgxy_stencil;
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
    .in1_lxy_stencil(inner_compute_in1_lxy_stencil)
);
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0] = inner_compute_out_lgxy_stencil;
endmodule

module hcompute_lgxx_stencil_1 (
    output [15:0] out_lgxx_stencil,
    input [15:0] in1_lxx_stencil [8:0]
);
assign out_lgxx_stencil = 16'(in1_lxx_stencil[0] + (16'(in1_lxx_stencil[1] + (16'(in1_lxx_stencil[2] + (16'(in1_lxx_stencil[3] + (16'(in1_lxx_stencil[4] + (16'(in1_lxx_stencil[5] + (16'(in1_lxx_stencil[6] + (16'(in1_lxx_stencil[7] + in1_lxx_stencil[8])))))))))))))));
endmodule

module cu_op_hcompute_lgxx_stencil_1 (
    input clk,
    input [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0],
    output [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_lgxx_stencil;
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

module padded16_global_wrapper_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_grad_x_stencil_read [5:0],
    output [15:0] op_hcompute_grad_y_stencil_read [5:0],
    input [15:0] op_hcompute_padded16_global_wrapper_stencil_write [0:0]
);
wire [15:0] d_reg__U24_out;
wire [15:0] d_reg__U25_out;
wire [15:0] d_reg__U26_out;
wire [15:0] d_reg__U27_out;
wire [15:0] d_reg__U28_out;
wire [15:0] d_reg__U29_out;
wire [15:0] ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_dataout_0;
wire [15:0] ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_dataout_1;
wire [15:0] ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_chainin_0_const_in_out;
wire ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_clk_en_const_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U24 (
    .in(ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_dataout_1),
    .clk(clk),
    .out(d_reg__U24_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U25 (
    .in(d_reg__U24_out),
    .clk(clk),
    .out(d_reg__U25_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U26 (
    .in(op_hcompute_padded16_global_wrapper_stencil_write[0]),
    .clk(clk),
    .out(d_reg__U26_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U27 (
    .in(d_reg__U26_out),
    .clk(clk),
    .out(d_reg__U27_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U28 (
    .in(ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_dataout_0),
    .clk(clk),
    .out(d_reg__U28_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U29 (
    .in(d_reg__U28_out),
    .clk(clk),
    .out(d_reg__U29_out)
);
cwlib_ub__confignull__input_num1__output_num2__width16 ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49 (
    .rst_n(reset),
    .clk_en(ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_clk_en_const_out),
    .clk(clk),
    .datain_0(op_hcompute_padded16_global_wrapper_stencil_write[0]),
    .chainin_0(ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_chainin_0_const_in_out),
    .dataout_0(ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_dataout_0),
    .dataout_1(ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_dataout_1)
);
assign ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_chainin_0_const_in_out = 16'h0000;
assign ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_clk_en_const_out = 1'b1;
assign op_hcompute_grad_x_stencil_read[5] = d_reg__U27_out;
assign op_hcompute_grad_x_stencil_read[4] = d_reg__U25_out;
assign op_hcompute_grad_x_stencil_read[3] = d_reg__U29_out;
assign op_hcompute_grad_x_stencil_read[2] = ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_dataout_1;
assign op_hcompute_grad_x_stencil_read[1] = op_hcompute_padded16_global_wrapper_stencil_write[0];
assign op_hcompute_grad_x_stencil_read[0] = ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_dataout_0;
assign op_hcompute_grad_y_stencil_read[5] = op_hcompute_padded16_global_wrapper_stencil_write[0];
assign op_hcompute_grad_y_stencil_read[4] = d_reg__U26_out;
assign op_hcompute_grad_y_stencil_read[3] = d_reg__U27_out;
assign op_hcompute_grad_y_stencil_read[2] = ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_dataout_0;
assign op_hcompute_grad_y_stencil_read[1] = d_reg__U28_out;
assign op_hcompute_grad_y_stencil_read[0] = d_reg__U29_out;
endmodule

module lyy_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_lgyy_stencil_1_read [8:0],
    input [15:0] op_hcompute_lyy_stencil_write [0:0]
);
wire [15:0] d_reg__U18_out;
wire [15:0] d_reg__U19_out;
wire [15:0] d_reg__U20_out;
wire [15:0] d_reg__U21_out;
wire [15:0] d_reg__U22_out;
wire [15:0] d_reg__U23_out;
wire [15:0] ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_dataout_0;
wire [15:0] ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_dataout_1;
wire [15:0] ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_chainin_0_const_in_out;
wire ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_clk_en_const_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U18 (
    .in(op_hcompute_lyy_stencil_write[0]),
    .clk(clk),
    .out(d_reg__U18_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U19 (
    .in(d_reg__U18_out),
    .clk(clk),
    .out(d_reg__U19_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U20 (
    .in(ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_dataout_1),
    .clk(clk),
    .out(d_reg__U20_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U21 (
    .in(d_reg__U20_out),
    .clk(clk),
    .out(d_reg__U21_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U22 (
    .in(ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_dataout_0),
    .clk(clk),
    .out(d_reg__U22_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U23 (
    .in(d_reg__U22_out),
    .clk(clk),
    .out(d_reg__U23_out)
);
cwlib_ub__confignull__input_num1__output_num2__width16 ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12 (
    .rst_n(reset),
    .clk_en(ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_clk_en_const_out),
    .clk(clk),
    .datain_0(op_hcompute_lyy_stencil_write[0]),
    .chainin_0(ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_chainin_0_const_in_out),
    .dataout_0(ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_dataout_0),
    .dataout_1(ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_dataout_1)
);
assign ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_chainin_0_const_in_out = 16'h0000;
assign ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_clk_en_const_out = 1'b1;
assign op_hcompute_lgyy_stencil_1_read[8] = op_hcompute_lyy_stencil_write[0];
assign op_hcompute_lgyy_stencil_1_read[7] = d_reg__U18_out;
assign op_hcompute_lgyy_stencil_1_read[6] = d_reg__U19_out;
assign op_hcompute_lgyy_stencil_1_read[5] = ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_dataout_1;
assign op_hcompute_lgyy_stencil_1_read[4] = d_reg__U20_out;
assign op_hcompute_lgyy_stencil_1_read[3] = d_reg__U21_out;
assign op_hcompute_lgyy_stencil_1_read[2] = ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_dataout_0;
assign op_hcompute_lgyy_stencil_1_read[1] = d_reg__U22_out;
assign op_hcompute_lgyy_stencil_1_read[0] = d_reg__U23_out;
endmodule

module lxy_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_lgxy_stencil_1_read [8:0],
    input [15:0] op_hcompute_lxy_stencil_write [0:0]
);
wire [15:0] d_reg__U12_out;
wire [15:0] d_reg__U13_out;
wire [15:0] d_reg__U14_out;
wire [15:0] d_reg__U15_out;
wire [15:0] d_reg__U16_out;
wire [15:0] d_reg__U17_out;
wire [15:0] ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_dataout_0;
wire [15:0] ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_dataout_1;
wire [15:0] ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_chainin_0_const_in_out;
wire ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_clk_en_const_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U12 (
    .in(op_hcompute_lxy_stencil_write[0]),
    .clk(clk),
    .out(d_reg__U12_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U13 (
    .in(d_reg__U12_out),
    .clk(clk),
    .out(d_reg__U13_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U14 (
    .in(ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_dataout_1),
    .clk(clk),
    .out(d_reg__U14_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U15 (
    .in(d_reg__U14_out),
    .clk(clk),
    .out(d_reg__U15_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U16 (
    .in(ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_dataout_0),
    .clk(clk),
    .out(d_reg__U16_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U17 (
    .in(d_reg__U16_out),
    .clk(clk),
    .out(d_reg__U17_out)
);
cwlib_ub__confignull__input_num1__output_num2__width16 ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22 (
    .rst_n(reset),
    .clk_en(ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_clk_en_const_out),
    .clk(clk),
    .datain_0(op_hcompute_lxy_stencil_write[0]),
    .chainin_0(ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_chainin_0_const_in_out),
    .dataout_0(ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_dataout_0),
    .dataout_1(ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_dataout_1)
);
assign ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_chainin_0_const_in_out = 16'h0000;
assign ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_clk_en_const_out = 1'b1;
assign op_hcompute_lgxy_stencil_1_read[8] = op_hcompute_lxy_stencil_write[0];
assign op_hcompute_lgxy_stencil_1_read[7] = d_reg__U12_out;
assign op_hcompute_lgxy_stencil_1_read[6] = d_reg__U13_out;
assign op_hcompute_lgxy_stencil_1_read[5] = ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_dataout_1;
assign op_hcompute_lgxy_stencil_1_read[4] = d_reg__U14_out;
assign op_hcompute_lgxy_stencil_1_read[3] = d_reg__U15_out;
assign op_hcompute_lgxy_stencil_1_read[2] = ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_dataout_0;
assign op_hcompute_lgxy_stencil_1_read[1] = d_reg__U16_out;
assign op_hcompute_lgxy_stencil_1_read[0] = d_reg__U17_out;
endmodule

module lxx_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_lgxx_stencil_1_read [8:0],
    input [15:0] op_hcompute_lxx_stencil_write [0:0]
);
wire [15:0] d_reg__U10_out;
wire [15:0] d_reg__U11_out;
wire [15:0] d_reg__U6_out;
wire [15:0] d_reg__U7_out;
wire [15:0] d_reg__U8_out;
wire [15:0] d_reg__U9_out;
wire [15:0] ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_dataout_0;
wire [15:0] ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_dataout_1;
wire [15:0] ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_chainin_0_const_in_out;
wire ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_clk_en_const_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U10 (
    .in(ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_dataout_0),
    .clk(clk),
    .out(d_reg__U10_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U11 (
    .in(d_reg__U10_out),
    .clk(clk),
    .out(d_reg__U11_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U6 (
    .in(op_hcompute_lxx_stencil_write[0]),
    .clk(clk),
    .out(d_reg__U6_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U7 (
    .in(d_reg__U6_out),
    .clk(clk),
    .out(d_reg__U7_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U8 (
    .in(ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_dataout_1),
    .clk(clk),
    .out(d_reg__U8_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U9 (
    .in(d_reg__U8_out),
    .clk(clk),
    .out(d_reg__U9_out)
);
cwlib_ub__confignull__input_num1__output_num2__width16 ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32 (
    .rst_n(reset),
    .clk_en(ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_clk_en_const_out),
    .clk(clk),
    .datain_0(op_hcompute_lxx_stencil_write[0]),
    .chainin_0(ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_chainin_0_const_in_out),
    .dataout_0(ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_dataout_0),
    .dataout_1(ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_dataout_1)
);
assign ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_chainin_0_const_in_out = 16'h0000;
assign ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_clk_en_const_out = 1'b1;
assign op_hcompute_lgxx_stencil_1_read[8] = op_hcompute_lxx_stencil_write[0];
assign op_hcompute_lgxx_stencil_1_read[7] = d_reg__U6_out;
assign op_hcompute_lgxx_stencil_1_read[6] = d_reg__U7_out;
assign op_hcompute_lgxx_stencil_1_read[5] = ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_dataout_1;
assign op_hcompute_lgxx_stencil_1_read[4] = d_reg__U8_out;
assign op_hcompute_lgxx_stencil_1_read[3] = d_reg__U9_out;
assign op_hcompute_lgxx_stencil_1_read[2] = ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_dataout_0;
assign op_hcompute_lgxx_stencil_1_read[1] = d_reg__U10_out;
assign op_hcompute_lgxx_stencil_1_read[0] = d_reg__U11_out;
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
wire [15:0] const_n255__383_out;
wire [15:0] const_p255__381_out;
wire [15:0] smin_380_381_382_out;
wire [15:0] sub_379_padded16_global_wrapper_stencil_12_380_out;
assign const_n255__383_out = 16'hff01;
assign const_p255__381_out = 16'h00ff;
commonlib_smax__width16 smax_382_383_384 (
    .in0(smin_380_381_382_out),
    .in1(const_n255__383_out),
    .out(out_grad_y_stencil)
);
commonlib_smin__width16 smin_380_381_382 (
    .in0(sub_379_padded16_global_wrapper_stencil_12_380_out),
    .in1(const_p255__381_out),
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
wire [15:0] const_n255__283_out;
wire [15:0] const_p255__281_out;
wire [15:0] smin_280_281_282_out;
wire [15:0] sub_279_padded16_global_wrapper_stencil_6_280_out;
assign const_n255__283_out = 16'hff01;
assign const_p255__281_out = 16'h00ff;
commonlib_smax__width16 smax_282_283_284 (
    .in0(smin_280_281_282_out),
    .in1(const_n255__283_out),
    .out(out_grad_x_stencil)
);
commonlib_smin__width16 smin_280_281_282 (
    .in0(sub_279_padded16_global_wrapper_stencil_6_280_out),
    .in1(const_p255__281_out),
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

module cim_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_cim_output_stencil_read [8:0],
    input [15:0] op_hcompute_cim_stencil_write [0:0]
);
wire [15:0] d_reg__U0_out;
wire [15:0] d_reg__U1_out;
wire [15:0] d_reg__U2_out;
wire [15:0] d_reg__U3_out;
wire [15:0] d_reg__U4_out;
wire [15:0] d_reg__U5_out;
wire [15:0] ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_dataout_0;
wire [15:0] ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_dataout_1;
wire [15:0] ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_chainin_0_const_in_out;
wire ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_clk_en_const_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U0 (
    .in(op_hcompute_cim_stencil_write[0]),
    .clk(clk),
    .out(d_reg__U0_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U1 (
    .in(d_reg__U0_out),
    .clk(clk),
    .out(d_reg__U1_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U2 (
    .in(ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_dataout_1),
    .clk(clk),
    .out(d_reg__U2_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U3 (
    .in(d_reg__U2_out),
    .clk(clk),
    .out(d_reg__U3_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U4 (
    .in(ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_dataout_0),
    .clk(clk),
    .out(d_reg__U4_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U5 (
    .in(d_reg__U4_out),
    .clk(clk),
    .out(d_reg__U5_out)
);
cwlib_ub__confignull__input_num1__output_num2__width16 ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63 (
    .rst_n(reset),
    .clk_en(ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_clk_en_const_out),
    .clk(clk),
    .datain_0(op_hcompute_cim_stencil_write[0]),
    .chainin_0(ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_chainin_0_const_in_out),
    .dataout_0(ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_dataout_0),
    .dataout_1(ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_dataout_1)
);
assign ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_chainin_0_const_in_out = 16'h0000;
assign ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_clk_en_const_out = 1'b1;
assign op_hcompute_cim_output_stencil_read[8] = op_hcompute_cim_stencil_write[0];
assign op_hcompute_cim_output_stencil_read[7] = d_reg__U0_out;
assign op_hcompute_cim_output_stencil_read[6] = d_reg__U1_out;
assign op_hcompute_cim_output_stencil_read[5] = ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_dataout_1;
assign op_hcompute_cim_output_stencil_read[4] = d_reg__U3_out;
assign op_hcompute_cim_output_stencil_read[3] = ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_dataout_0;
assign op_hcompute_cim_output_stencil_read[2] = d_reg__U4_out;
assign op_hcompute_cim_output_stencil_read[1] = d_reg__U2_out;
assign op_hcompute_cim_output_stencil_read[0] = d_reg__U5_out;
endmodule

module cim_output_stencil_ub (
    input clk,
    input reset,
    input [15:0] op_hcompute_cim_output_stencil_write [0:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
assign op_hcompute_hw_output_stencil_read[0] = op_hcompute_cim_output_stencil_write[0];
endmodule

module harris (
    input clk,
    input reset,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    output padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_valid,
    input [15:0] padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0]
);
wire [15:0] _U30_out;
wire [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] cim_stencil_op_hcompute_cim_output_stencil_read [8:0];
wire [15:0] grad_x_stencil_op_hcompute_lxx_stencil_read [0:0];
wire [15:0] grad_x_stencil_op_hcompute_lxy_stencil_read [0:0];
wire [15:0] grad_y_stencil_op_hcompute_lxy_stencil_read [0:0];
wire [15:0] grad_y_stencil_op_hcompute_lyy_stencil_read [0:0];
wire [15:0] lgxx_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] lgxy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] lgyy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0];
wire [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0];
wire [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0];
wire [15:0] op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0];
wire [15:0] op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write [0:0];
wire [15:0] op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0];
wire [15:0] op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire [15:0] op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0];
wire [15:0] op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0];
wire [15:0] op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0];
wire [15:0] op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write [0:0];
wire [15:0] op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write [0:0];
wire [15:0] op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write [0:0];
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0];
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U30 (
    .in(padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0]),
    .clk(clk),
    .out(_U30_out)
);
wire [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write[0] = op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write[0];
cim_output_stencil_ub cim_output_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_cim_output_stencil_write(cim_output_stencil_op_hcompute_cim_output_stencil_write),
    .op_hcompute_hw_output_stencil_read(cim_output_stencil_op_hcompute_hw_output_stencil_read)
);
wire [15:0] cim_stencil_op_hcompute_cim_stencil_write [0:0];
assign cim_stencil_op_hcompute_cim_stencil_write[0] = op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write[0];
cim_stencil_ub cim_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_cim_output_stencil_read(cim_stencil_op_hcompute_cim_output_stencil_read),
    .op_hcompute_cim_stencil_write(cim_stencil_op_hcompute_cim_stencil_write)
);
wire [15:0] grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write[0] = op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write[0];
grad_x_stencil_ub grad_x_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_grad_x_stencil_write(grad_x_stencil_op_hcompute_grad_x_stencil_write),
    .op_hcompute_lxx_stencil_read(grad_x_stencil_op_hcompute_lxx_stencil_read),
    .op_hcompute_lxy_stencil_read(grad_x_stencil_op_hcompute_lxy_stencil_read)
);
wire [15:0] grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write[0] = op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write[0];
grad_y_stencil_ub grad_y_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_grad_y_stencil_write(grad_y_stencil_op_hcompute_grad_y_stencil_write),
    .op_hcompute_lxy_stencil_read(grad_y_stencil_op_hcompute_lxy_stencil_read),
    .op_hcompute_lyy_stencil_read(grad_y_stencil_op_hcompute_lyy_stencil_read)
);
wire [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0] = op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0];
lgxx_stencil_ub lgxx_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_cim_stencil_read(lgxx_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxx_stencil_1_write(lgxx_stencil_op_hcompute_lgxx_stencil_1_write)
);
wire [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0] = op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0];
lgxy_stencil_ub lgxy_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_cim_stencil_read(lgxy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxy_stencil_1_write(lgxy_stencil_op_hcompute_lgxy_stencil_1_write)
);
wire [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0] = op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0];
lgyy_stencil_ub lgyy_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_cim_stencil_read(lgyy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgyy_stencil_1_write(lgyy_stencil_op_hcompute_lgyy_stencil_1_write)
);
wire [15:0] lxx_stencil_op_hcompute_lxx_stencil_write [0:0];
assign lxx_stencil_op_hcompute_lxx_stencil_write[0] = op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write[0];
lxx_stencil_ub lxx_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_lgxx_stencil_1_read(lxx_stencil_op_hcompute_lgxx_stencil_1_read),
    .op_hcompute_lxx_stencil_write(lxx_stencil_op_hcompute_lxx_stencil_write)
);
wire [15:0] lxy_stencil_op_hcompute_lxy_stencil_write [0:0];
assign lxy_stencil_op_hcompute_lxy_stencil_write[0] = op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write[0];
lxy_stencil_ub lxy_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_lgxy_stencil_1_read(lxy_stencil_op_hcompute_lgxy_stencil_1_read),
    .op_hcompute_lxy_stencil_write(lxy_stencil_op_hcompute_lxy_stencil_write)
);
wire [15:0] lyy_stencil_op_hcompute_lyy_stencil_write [0:0];
assign lyy_stencil_op_hcompute_lyy_stencil_write[0] = op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write[0];
lyy_stencil_ub lyy_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_lgyy_stencil_1_read(lyy_stencil_op_hcompute_lgyy_stencil_1_read),
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
wire [15:0] op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0];
assign op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read[0] = cim_output_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(clk),
    .cim_output_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write)
);
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
    .lxx_stencil_op_hcompute_lgxx_stencil_1_read(op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read),
    .lgxx_stencil_op_hcompute_lgxx_stencil_1_write(op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write)
);
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
    .lxy_stencil_op_hcompute_lgxy_stencil_1_read(op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read),
    .lgxy_stencil_op_hcompute_lgxy_stencil_1_write(op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write)
);
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
    .lyy_stencil_op_hcompute_lgyy_stencil_1_read(op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read),
    .lgyy_stencil_op_hcompute_lgyy_stencil_1_write(op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write)
);
wire [15:0] op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read [0:0];
assign op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read[0] = grad_x_stencil_op_hcompute_lxx_stencil_read[0];
cu_op_hcompute_lxx_stencil op_hcompute_lxx_stencil (
    .clk(clk),
    .grad_x_stencil_op_hcompute_lxx_stencil_read(op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read),
    .lxx_stencil_op_hcompute_lxx_stencil_write(op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write)
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
wire [15:0] op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read [0:0];
assign op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read[0] = grad_y_stencil_op_hcompute_lyy_stencil_read[0];
cu_op_hcompute_lyy_stencil op_hcompute_lyy_stencil (
    .clk(clk),
    .grad_y_stencil_op_hcompute_lyy_stencil_read(op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read),
    .lyy_stencil_op_hcompute_lyy_stencil_write(op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write)
);
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0];
assign op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0] = _U30_out;
cu_op_hcompute_padded16_global_wrapper_stencil op_hcompute_padded16_global_wrapper_stencil (
    .clk(clk),
    .padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read(op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read),
    .padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write(op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write)
);
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0] = op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0];
padded16_global_wrapper_stencil_ub padded16_global_wrapper_stencil (
    .clk(clk),
    .reset(reset),
    .op_hcompute_grad_x_stencil_read(padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read),
    .op_hcompute_grad_y_stencil_read(padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read),
    .op_hcompute_padded16_global_wrapper_stencil_write(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = 1'b0;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_valid = 1'b0;
endmodule

