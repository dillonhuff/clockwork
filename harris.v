// Module `Mem` defined externally
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

module padded16_global_wrapper_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_grad_x_stencil_read [5:0],
    output [15:0] op_hcompute_grad_y_stencil_read [5:0],
    input [15:0] op_hcompute_padded16_global_wrapper_stencil_write [0:0]
);
wire [15:0] d_reg__U24_in;
wire d_reg__U24_clk;
wire [15:0] d_reg__U24_out;
wire [15:0] d_reg__U25_in;
wire d_reg__U25_clk;
wire [15:0] d_reg__U25_out;
wire [15:0] d_reg__U26_in;
wire d_reg__U26_clk;
wire [15:0] d_reg__U26_out;
wire [15:0] d_reg__U27_in;
wire d_reg__U27_clk;
wire [15:0] d_reg__U27_out;
wire [15:0] d_reg__U28_in;
wire d_reg__U28_clk;
wire [15:0] d_reg__U28_out;
wire [15:0] d_reg__U29_in;
wire d_reg__U29_clk;
wire [15:0] d_reg__U29_out;
wire ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_rst_n;
wire ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_clk_en;
wire ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_clk;
wire [15:0] ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_data_in_0;
wire [15:0] ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_data_out_0;
wire [15:0] ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_data_out_1;
wire ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_flush;
assign d_reg__U24_in = ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_data_out_1;
assign d_reg__U24_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U24 (
    .in(d_reg__U24_in),
    .clk(d_reg__U24_clk),
    .out(d_reg__U24_out)
);
assign d_reg__U25_in = d_reg__U24_out;
assign d_reg__U25_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U25 (
    .in(d_reg__U25_in),
    .clk(d_reg__U25_clk),
    .out(d_reg__U25_out)
);
assign d_reg__U26_in = op_hcompute_padded16_global_wrapper_stencil_write[0];
assign d_reg__U26_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U26 (
    .in(d_reg__U26_in),
    .clk(d_reg__U26_clk),
    .out(d_reg__U26_out)
);
assign d_reg__U27_in = d_reg__U26_out;
assign d_reg__U27_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U27 (
    .in(d_reg__U27_in),
    .clk(d_reg__U27_clk),
    .out(d_reg__U27_out)
);
assign d_reg__U28_in = ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_data_out_0;
assign d_reg__U28_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U28 (
    .in(d_reg__U28_in),
    .clk(d_reg__U28_clk),
    .out(d_reg__U28_out)
);
assign d_reg__U29_in = d_reg__U28_out;
assign d_reg__U29_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U29 (
    .in(d_reg__U29_in),
    .clk(d_reg__U29_clk),
    .out(d_reg__U29_out)
);
assign ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_rst_n = 1'b0;
assign ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_clk_en = 1'b1;
assign ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_clk = clk;
assign ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_data_in_0 = op_hcompute_padded16_global_wrapper_stencil_write[0];
assign ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_flush = reset;
cwlib_Mem__confignull__has_flushTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__num_input1__num_output2__width16 #(
    .mode("lake")
) ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49 (
    .rst_n(ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_rst_n),
    .clk_en(ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_clk_en),
    .clk(ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_clk),
    .data_in_0(ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_data_in_0),
    .data_out_0(ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_data_out_0),
    .data_out_1(ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_data_out_1),
    .flush(ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_flush)
);
assign op_hcompute_grad_x_stencil_read[5] = d_reg__U27_out;
assign op_hcompute_grad_x_stencil_read[4] = d_reg__U25_out;
assign op_hcompute_grad_x_stencil_read[3] = d_reg__U29_out;
assign op_hcompute_grad_x_stencil_read[2] = ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_data_out_1;
assign op_hcompute_grad_x_stencil_read[1] = op_hcompute_padded16_global_wrapper_stencil_write[0];
assign op_hcompute_grad_x_stencil_read[0] = ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_data_out_0;
assign op_hcompute_grad_y_stencil_read[5] = op_hcompute_padded16_global_wrapper_stencil_write[0];
assign op_hcompute_grad_y_stencil_read[4] = d_reg__U26_out;
assign op_hcompute_grad_y_stencil_read[3] = d_reg__U27_out;
assign op_hcompute_grad_y_stencil_read[2] = ub_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_49_data_out_0;
assign op_hcompute_grad_y_stencil_read[1] = d_reg__U28_out;
assign op_hcompute_grad_y_stencil_read[0] = d_reg__U29_out;
endmodule

module lyy_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_lgyy_stencil_1_read [8:0],
    input [15:0] op_hcompute_lyy_stencil_write [0:0]
);
wire [15:0] d_reg__U18_in;
wire d_reg__U18_clk;
wire [15:0] d_reg__U18_out;
wire [15:0] d_reg__U19_in;
wire d_reg__U19_clk;
wire [15:0] d_reg__U19_out;
wire [15:0] d_reg__U20_in;
wire d_reg__U20_clk;
wire [15:0] d_reg__U20_out;
wire [15:0] d_reg__U21_in;
wire d_reg__U21_clk;
wire [15:0] d_reg__U21_out;
wire [15:0] d_reg__U22_in;
wire d_reg__U22_clk;
wire [15:0] d_reg__U22_out;
wire [15:0] d_reg__U23_in;
wire d_reg__U23_clk;
wire [15:0] d_reg__U23_out;
wire ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_rst_n;
wire ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_clk_en;
wire ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_clk;
wire [15:0] ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_data_in_0;
wire [15:0] ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_data_out_0;
wire [15:0] ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_data_out_1;
wire ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_flush;
assign d_reg__U18_in = op_hcompute_lyy_stencil_write[0];
assign d_reg__U18_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U18 (
    .in(d_reg__U18_in),
    .clk(d_reg__U18_clk),
    .out(d_reg__U18_out)
);
assign d_reg__U19_in = d_reg__U18_out;
assign d_reg__U19_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U19 (
    .in(d_reg__U19_in),
    .clk(d_reg__U19_clk),
    .out(d_reg__U19_out)
);
assign d_reg__U20_in = ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_data_out_1;
assign d_reg__U20_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U20 (
    .in(d_reg__U20_in),
    .clk(d_reg__U20_clk),
    .out(d_reg__U20_out)
);
assign d_reg__U21_in = d_reg__U20_out;
assign d_reg__U21_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U21 (
    .in(d_reg__U21_in),
    .clk(d_reg__U21_clk),
    .out(d_reg__U21_out)
);
assign d_reg__U22_in = ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_data_out_0;
assign d_reg__U22_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U22 (
    .in(d_reg__U22_in),
    .clk(d_reg__U22_clk),
    .out(d_reg__U22_out)
);
assign d_reg__U23_in = d_reg__U22_out;
assign d_reg__U23_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U23 (
    .in(d_reg__U23_in),
    .clk(d_reg__U23_clk),
    .out(d_reg__U23_out)
);
assign ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_rst_n = 1'b0;
assign ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_clk_en = 1'b1;
assign ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_clk = clk;
assign ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_data_in_0 = op_hcompute_lyy_stencil_write[0];
assign ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_flush = reset;
cwlib_Mem__confignull__has_flushTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__num_input1__num_output2__width16 #(
    .mode("lake")
) ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12 (
    .rst_n(ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_rst_n),
    .clk_en(ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_clk_en),
    .clk(ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_clk),
    .data_in_0(ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_data_in_0),
    .data_out_0(ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_data_out_0),
    .data_out_1(ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_data_out_1),
    .flush(ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_flush)
);
assign op_hcompute_lgyy_stencil_1_read[8] = op_hcompute_lyy_stencil_write[0];
assign op_hcompute_lgyy_stencil_1_read[7] = d_reg__U18_out;
assign op_hcompute_lgyy_stencil_1_read[6] = d_reg__U19_out;
assign op_hcompute_lgyy_stencil_1_read[5] = ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_data_out_1;
assign op_hcompute_lgyy_stencil_1_read[4] = d_reg__U20_out;
assign op_hcompute_lgyy_stencil_1_read[3] = d_reg__U21_out;
assign op_hcompute_lgyy_stencil_1_read[2] = ub_lyy_stencil_op_hcompute_lyy_stencil_2_to_lyy_stencil_op_hcompute_lgyy_stencil_1_12_data_out_0;
assign op_hcompute_lgyy_stencil_1_read[1] = d_reg__U22_out;
assign op_hcompute_lgyy_stencil_1_read[0] = d_reg__U23_out;
endmodule

module lxy_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_lgxy_stencil_1_read [8:0],
    input [15:0] op_hcompute_lxy_stencil_write [0:0]
);
wire [15:0] d_reg__U12_in;
wire d_reg__U12_clk;
wire [15:0] d_reg__U12_out;
wire [15:0] d_reg__U13_in;
wire d_reg__U13_clk;
wire [15:0] d_reg__U13_out;
wire [15:0] d_reg__U14_in;
wire d_reg__U14_clk;
wire [15:0] d_reg__U14_out;
wire [15:0] d_reg__U15_in;
wire d_reg__U15_clk;
wire [15:0] d_reg__U15_out;
wire [15:0] d_reg__U16_in;
wire d_reg__U16_clk;
wire [15:0] d_reg__U16_out;
wire [15:0] d_reg__U17_in;
wire d_reg__U17_clk;
wire [15:0] d_reg__U17_out;
wire ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_rst_n;
wire ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_clk_en;
wire ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_clk;
wire [15:0] ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_data_in_0;
wire [15:0] ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_data_out_0;
wire [15:0] ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_data_out_1;
wire ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_flush;
assign d_reg__U12_in = op_hcompute_lxy_stencil_write[0];
assign d_reg__U12_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U12 (
    .in(d_reg__U12_in),
    .clk(d_reg__U12_clk),
    .out(d_reg__U12_out)
);
assign d_reg__U13_in = d_reg__U12_out;
assign d_reg__U13_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U13 (
    .in(d_reg__U13_in),
    .clk(d_reg__U13_clk),
    .out(d_reg__U13_out)
);
assign d_reg__U14_in = ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_data_out_1;
assign d_reg__U14_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U14 (
    .in(d_reg__U14_in),
    .clk(d_reg__U14_clk),
    .out(d_reg__U14_out)
);
assign d_reg__U15_in = d_reg__U14_out;
assign d_reg__U15_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U15 (
    .in(d_reg__U15_in),
    .clk(d_reg__U15_clk),
    .out(d_reg__U15_out)
);
assign d_reg__U16_in = ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_data_out_0;
assign d_reg__U16_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U16 (
    .in(d_reg__U16_in),
    .clk(d_reg__U16_clk),
    .out(d_reg__U16_out)
);
assign d_reg__U17_in = d_reg__U16_out;
assign d_reg__U17_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U17 (
    .in(d_reg__U17_in),
    .clk(d_reg__U17_clk),
    .out(d_reg__U17_out)
);
assign ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_rst_n = 1'b0;
assign ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_clk_en = 1'b1;
assign ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_clk = clk;
assign ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_data_in_0 = op_hcompute_lxy_stencil_write[0];
assign ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_flush = reset;
cwlib_Mem__confignull__has_flushTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__num_input1__num_output2__width16 #(
    .mode("lake")
) ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22 (
    .rst_n(ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_rst_n),
    .clk_en(ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_clk_en),
    .clk(ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_clk),
    .data_in_0(ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_data_in_0),
    .data_out_0(ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_data_out_0),
    .data_out_1(ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_data_out_1),
    .flush(ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_flush)
);
assign op_hcompute_lgxy_stencil_1_read[8] = op_hcompute_lxy_stencil_write[0];
assign op_hcompute_lgxy_stencil_1_read[7] = d_reg__U12_out;
assign op_hcompute_lgxy_stencil_1_read[6] = d_reg__U13_out;
assign op_hcompute_lgxy_stencil_1_read[5] = ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_data_out_1;
assign op_hcompute_lgxy_stencil_1_read[4] = d_reg__U14_out;
assign op_hcompute_lgxy_stencil_1_read[3] = d_reg__U15_out;
assign op_hcompute_lgxy_stencil_1_read[2] = ub_lxy_stencil_op_hcompute_lxy_stencil_4_to_lxy_stencil_op_hcompute_lgxy_stencil_1_22_data_out_0;
assign op_hcompute_lgxy_stencil_1_read[1] = d_reg__U16_out;
assign op_hcompute_lgxy_stencil_1_read[0] = d_reg__U17_out;
endmodule

module lxx_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_lgxx_stencil_1_read [8:0],
    input [15:0] op_hcompute_lxx_stencil_write [0:0]
);
wire [15:0] d_reg__U10_in;
wire d_reg__U10_clk;
wire [15:0] d_reg__U10_out;
wire [15:0] d_reg__U11_in;
wire d_reg__U11_clk;
wire [15:0] d_reg__U11_out;
wire [15:0] d_reg__U6_in;
wire d_reg__U6_clk;
wire [15:0] d_reg__U6_out;
wire [15:0] d_reg__U7_in;
wire d_reg__U7_clk;
wire [15:0] d_reg__U7_out;
wire [15:0] d_reg__U8_in;
wire d_reg__U8_clk;
wire [15:0] d_reg__U8_out;
wire [15:0] d_reg__U9_in;
wire d_reg__U9_clk;
wire [15:0] d_reg__U9_out;
wire ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_rst_n;
wire ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_clk_en;
wire ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_clk;
wire [15:0] ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_data_in_0;
wire [15:0] ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_data_out_0;
wire [15:0] ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_data_out_1;
wire ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_flush;
assign d_reg__U10_in = ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_data_out_0;
assign d_reg__U10_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U10 (
    .in(d_reg__U10_in),
    .clk(d_reg__U10_clk),
    .out(d_reg__U10_out)
);
assign d_reg__U11_in = d_reg__U10_out;
assign d_reg__U11_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U11 (
    .in(d_reg__U11_in),
    .clk(d_reg__U11_clk),
    .out(d_reg__U11_out)
);
assign d_reg__U6_in = op_hcompute_lxx_stencil_write[0];
assign d_reg__U6_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U6 (
    .in(d_reg__U6_in),
    .clk(d_reg__U6_clk),
    .out(d_reg__U6_out)
);
assign d_reg__U7_in = d_reg__U6_out;
assign d_reg__U7_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U7 (
    .in(d_reg__U7_in),
    .clk(d_reg__U7_clk),
    .out(d_reg__U7_out)
);
assign d_reg__U8_in = ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_data_out_1;
assign d_reg__U8_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U8 (
    .in(d_reg__U8_in),
    .clk(d_reg__U8_clk),
    .out(d_reg__U8_out)
);
assign d_reg__U9_in = d_reg__U8_out;
assign d_reg__U9_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U9 (
    .in(d_reg__U9_in),
    .clk(d_reg__U9_clk),
    .out(d_reg__U9_out)
);
assign ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_rst_n = 1'b0;
assign ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_clk_en = 1'b1;
assign ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_clk = clk;
assign ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_data_in_0 = op_hcompute_lxx_stencil_write[0];
assign ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_flush = reset;
cwlib_Mem__confignull__has_flushTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__num_input1__num_output2__width16 #(
    .mode("lake")
) ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32 (
    .rst_n(ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_rst_n),
    .clk_en(ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_clk_en),
    .clk(ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_clk),
    .data_in_0(ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_data_in_0),
    .data_out_0(ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_data_out_0),
    .data_out_1(ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_data_out_1),
    .flush(ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_flush)
);
assign op_hcompute_lgxx_stencil_1_read[8] = op_hcompute_lxx_stencil_write[0];
assign op_hcompute_lgxx_stencil_1_read[7] = d_reg__U6_out;
assign op_hcompute_lgxx_stencil_1_read[6] = d_reg__U7_out;
assign op_hcompute_lgxx_stencil_1_read[5] = ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_data_out_1;
assign op_hcompute_lgxx_stencil_1_read[4] = d_reg__U8_out;
assign op_hcompute_lgxx_stencil_1_read[3] = d_reg__U9_out;
assign op_hcompute_lgxx_stencil_1_read[2] = ub_lxx_stencil_op_hcompute_lxx_stencil_7_to_lxx_stencil_op_hcompute_lgxx_stencil_1_32_data_out_0;
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

module cim_stencil_ub (
    input clk,
    input reset,
    output [15:0] op_hcompute_cim_output_stencil_read [8:0],
    input [15:0] op_hcompute_cim_stencil_write [0:0]
);
wire [15:0] d_reg__U0_in;
wire d_reg__U0_clk;
wire [15:0] d_reg__U0_out;
wire [15:0] d_reg__U1_in;
wire d_reg__U1_clk;
wire [15:0] d_reg__U1_out;
wire [15:0] d_reg__U2_in;
wire d_reg__U2_clk;
wire [15:0] d_reg__U2_out;
wire [15:0] d_reg__U3_in;
wire d_reg__U3_clk;
wire [15:0] d_reg__U3_out;
wire [15:0] d_reg__U4_in;
wire d_reg__U4_clk;
wire [15:0] d_reg__U4_out;
wire [15:0] d_reg__U5_in;
wire d_reg__U5_clk;
wire [15:0] d_reg__U5_out;
wire ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_rst_n;
wire ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_clk_en;
wire ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_clk;
wire [15:0] ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_data_in_0;
wire [15:0] ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_data_out_0;
wire [15:0] ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_data_out_1;
wire ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_flush;
assign d_reg__U0_in = op_hcompute_cim_stencil_write[0];
assign d_reg__U0_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U0 (
    .in(d_reg__U0_in),
    .clk(d_reg__U0_clk),
    .out(d_reg__U0_out)
);
assign d_reg__U1_in = d_reg__U0_out;
assign d_reg__U1_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U1 (
    .in(d_reg__U1_in),
    .clk(d_reg__U1_clk),
    .out(d_reg__U1_out)
);
assign d_reg__U2_in = ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_data_out_1;
assign d_reg__U2_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U2 (
    .in(d_reg__U2_in),
    .clk(d_reg__U2_clk),
    .out(d_reg__U2_out)
);
assign d_reg__U3_in = d_reg__U2_out;
assign d_reg__U3_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U3 (
    .in(d_reg__U3_in),
    .clk(d_reg__U3_clk),
    .out(d_reg__U3_out)
);
assign d_reg__U4_in = ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_data_out_0;
assign d_reg__U4_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U4 (
    .in(d_reg__U4_in),
    .clk(d_reg__U4_clk),
    .out(d_reg__U4_out)
);
assign d_reg__U5_in = d_reg__U4_out;
assign d_reg__U5_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U5 (
    .in(d_reg__U5_in),
    .clk(d_reg__U5_clk),
    .out(d_reg__U5_out)
);
assign ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_rst_n = 1'b0;
assign ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_clk_en = 1'b1;
assign ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_clk = clk;
assign ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_data_in_0 = op_hcompute_cim_stencil_write[0];
assign ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_flush = reset;
cwlib_Mem__confignull__has_flushTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__num_input1__num_output2__width16 #(
    .mode("lake")
) ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63 (
    .rst_n(ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_rst_n),
    .clk_en(ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_clk_en),
    .clk(ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_clk),
    .data_in_0(ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_data_in_0),
    .data_out_0(ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_data_out_0),
    .data_out_1(ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_data_out_1),
    .flush(ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_flush)
);
assign op_hcompute_cim_output_stencil_read[8] = op_hcompute_cim_stencil_write[0];
assign op_hcompute_cim_output_stencil_read[7] = d_reg__U0_out;
assign op_hcompute_cim_output_stencil_read[6] = d_reg__U1_out;
assign op_hcompute_cim_output_stencil_read[5] = ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_data_out_1;
assign op_hcompute_cim_output_stencil_read[4] = d_reg__U3_out;
assign op_hcompute_cim_output_stencil_read[3] = ub_cim_stencil_op_hcompute_cim_stencil_55_to_cim_stencil_op_hcompute_cim_output_stencil_63_data_out_0;
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
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_valid,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    output padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_en,
    input [15:0] padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0]
);
wire cim_output_stencil_clk;
wire cim_output_stencil_reset;
wire [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0];
wire [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire cim_stencil_clk;
wire cim_stencil_reset;
wire [15:0] cim_stencil_op_hcompute_cim_output_stencil_read [8:0];
wire [15:0] cim_stencil_op_hcompute_cim_stencil_write [0:0];
wire grad_x_stencil_clk;
wire grad_x_stencil_reset;
wire [15:0] grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0];
wire [15:0] grad_x_stencil_op_hcompute_lxx_stencil_read [0:0];
wire [15:0] grad_x_stencil_op_hcompute_lxy_stencil_read [0:0];
wire grad_y_stencil_clk;
wire grad_y_stencil_reset;
wire [15:0] grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0];
wire [15:0] grad_y_stencil_op_hcompute_lxy_stencil_read [0:0];
wire [15:0] grad_y_stencil_op_hcompute_lyy_stencil_read [0:0];
wire lgxx_stencil_clk;
wire lgxx_stencil_reset;
wire [15:0] lgxx_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0];
wire lgxy_stencil_clk;
wire lgxy_stencil_reset;
wire [15:0] lgxy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0];
wire lgyy_stencil_clk;
wire lgyy_stencil_reset;
wire [15:0] lgyy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0];
wire lxx_stencil_clk;
wire lxx_stencil_reset;
wire [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0];
wire [15:0] lxx_stencil_op_hcompute_lxx_stencil_write [0:0];
wire lxy_stencil_clk;
wire lxy_stencil_reset;
wire [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0];
wire [15:0] lxy_stencil_op_hcompute_lxy_stencil_write [0:0];
wire lyy_stencil_clk;
wire lyy_stencil_reset;
wire [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0];
wire [15:0] lyy_stencil_op_hcompute_lyy_stencil_write [0:0];
wire op_hcompute_cim_output_stencil_clk;
wire [15:0] op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read [8:0];
wire [15:0] op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0];
wire op_hcompute_cim_stencil_clk;
wire [15:0] op_hcompute_cim_stencil_lgxx_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] op_hcompute_cim_stencil_lgxy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] op_hcompute_cim_stencil_lgyy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write [0:0];
wire op_hcompute_grad_x_stencil_clk;
wire [15:0] op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0];
wire [15:0] op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0];
wire op_hcompute_grad_y_stencil_clk;
wire [15:0] op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0];
wire [15:0] op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_lgxx_stencil_1_clk;
wire [15:0] op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0];
wire [15:0] op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0];
wire op_hcompute_lgxy_stencil_1_clk;
wire [15:0] op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0];
wire [15:0] op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0];
wire op_hcompute_lgyy_stencil_1_clk;
wire [15:0] op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0];
wire [15:0] op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0];
wire op_hcompute_lxx_stencil_clk;
wire [15:0] op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read [0:0];
wire [15:0] op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write [0:0];
wire op_hcompute_lxy_stencil_clk;
wire [15:0] op_hcompute_lxy_stencil_grad_x_stencil_op_hcompute_lxy_stencil_read [0:0];
wire [15:0] op_hcompute_lxy_stencil_grad_y_stencil_op_hcompute_lxy_stencil_read [0:0];
wire [15:0] op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write [0:0];
wire op_hcompute_lyy_stencil_clk;
wire [15:0] op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read [0:0];
wire [15:0] op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write [0:0];
wire op_hcompute_padded16_global_wrapper_stencil_clk;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0];
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0];
wire padded16_global_wrapper_stencil_clk;
wire padded16_global_wrapper_stencil_reset;
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0];
assign cim_output_stencil_clk = clk;
assign cim_output_stencil_reset = reset;
assign cim_output_stencil_op_hcompute_cim_output_stencil_write[0] = op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write[0];
cim_output_stencil_ub cim_output_stencil (
    .clk(cim_output_stencil_clk),
    .reset(cim_output_stencil_reset),
    .op_hcompute_cim_output_stencil_write(cim_output_stencil_op_hcompute_cim_output_stencil_write),
    .op_hcompute_hw_output_stencil_read(cim_output_stencil_op_hcompute_hw_output_stencil_read)
);
assign cim_stencil_clk = clk;
assign cim_stencil_reset = reset;
assign cim_stencil_op_hcompute_cim_stencil_write[0] = op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write[0];
cim_stencil_ub cim_stencil (
    .clk(cim_stencil_clk),
    .reset(cim_stencil_reset),
    .op_hcompute_cim_output_stencil_read(cim_stencil_op_hcompute_cim_output_stencil_read),
    .op_hcompute_cim_stencil_write(cim_stencil_op_hcompute_cim_stencil_write)
);
assign grad_x_stencil_clk = clk;
assign grad_x_stencil_reset = reset;
assign grad_x_stencil_op_hcompute_grad_x_stencil_write[0] = op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write[0];
grad_x_stencil_ub grad_x_stencil (
    .clk(grad_x_stencil_clk),
    .reset(grad_x_stencil_reset),
    .op_hcompute_grad_x_stencil_write(grad_x_stencil_op_hcompute_grad_x_stencil_write),
    .op_hcompute_lxx_stencil_read(grad_x_stencil_op_hcompute_lxx_stencil_read),
    .op_hcompute_lxy_stencil_read(grad_x_stencil_op_hcompute_lxy_stencil_read)
);
assign grad_y_stencil_clk = clk;
assign grad_y_stencil_reset = reset;
assign grad_y_stencil_op_hcompute_grad_y_stencil_write[0] = op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write[0];
grad_y_stencil_ub grad_y_stencil (
    .clk(grad_y_stencil_clk),
    .reset(grad_y_stencil_reset),
    .op_hcompute_grad_y_stencil_write(grad_y_stencil_op_hcompute_grad_y_stencil_write),
    .op_hcompute_lxy_stencil_read(grad_y_stencil_op_hcompute_lxy_stencil_read),
    .op_hcompute_lyy_stencil_read(grad_y_stencil_op_hcompute_lyy_stencil_read)
);
assign lgxx_stencil_clk = clk;
assign lgxx_stencil_reset = reset;
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0] = op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0];
lgxx_stencil_ub lgxx_stencil (
    .clk(lgxx_stencil_clk),
    .reset(lgxx_stencil_reset),
    .op_hcompute_cim_stencil_read(lgxx_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxx_stencil_1_write(lgxx_stencil_op_hcompute_lgxx_stencil_1_write)
);
assign lgxy_stencil_clk = clk;
assign lgxy_stencil_reset = reset;
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0] = op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0];
lgxy_stencil_ub lgxy_stencil (
    .clk(lgxy_stencil_clk),
    .reset(lgxy_stencil_reset),
    .op_hcompute_cim_stencil_read(lgxy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxy_stencil_1_write(lgxy_stencil_op_hcompute_lgxy_stencil_1_write)
);
assign lgyy_stencil_clk = clk;
assign lgyy_stencil_reset = reset;
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0] = op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0];
lgyy_stencil_ub lgyy_stencil (
    .clk(lgyy_stencil_clk),
    .reset(lgyy_stencil_reset),
    .op_hcompute_cim_stencil_read(lgyy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgyy_stencil_1_write(lgyy_stencil_op_hcompute_lgyy_stencil_1_write)
);
assign lxx_stencil_clk = clk;
assign lxx_stencil_reset = reset;
assign lxx_stencil_op_hcompute_lxx_stencil_write[0] = op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write[0];
lxx_stencil_ub lxx_stencil (
    .clk(lxx_stencil_clk),
    .reset(lxx_stencil_reset),
    .op_hcompute_lgxx_stencil_1_read(lxx_stencil_op_hcompute_lgxx_stencil_1_read),
    .op_hcompute_lxx_stencil_write(lxx_stencil_op_hcompute_lxx_stencil_write)
);
assign lxy_stencil_clk = clk;
assign lxy_stencil_reset = reset;
assign lxy_stencil_op_hcompute_lxy_stencil_write[0] = op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write[0];
lxy_stencil_ub lxy_stencil (
    .clk(lxy_stencil_clk),
    .reset(lxy_stencil_reset),
    .op_hcompute_lgxy_stencil_1_read(lxy_stencil_op_hcompute_lgxy_stencil_1_read),
    .op_hcompute_lxy_stencil_write(lxy_stencil_op_hcompute_lxy_stencil_write)
);
assign lyy_stencil_clk = clk;
assign lyy_stencil_reset = reset;
assign lyy_stencil_op_hcompute_lyy_stencil_write[0] = op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write[0];
lyy_stencil_ub lyy_stencil (
    .clk(lyy_stencil_clk),
    .reset(lyy_stencil_reset),
    .op_hcompute_lgyy_stencil_1_read(lyy_stencil_op_hcompute_lgyy_stencil_1_read),
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
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read[0] = cim_output_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .cim_output_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write)
);
assign op_hcompute_lgxx_stencil_1_clk = clk;
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
    .lxx_stencil_op_hcompute_lgxx_stencil_1_read(op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read),
    .lgxx_stencil_op_hcompute_lgxx_stencil_1_write(op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write)
);
assign op_hcompute_lgxy_stencil_1_clk = clk;
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
    .lxy_stencil_op_hcompute_lgxy_stencil_1_read(op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read),
    .lgxy_stencil_op_hcompute_lgxy_stencil_1_write(op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write)
);
assign op_hcompute_lgyy_stencil_1_clk = clk;
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
    .lyy_stencil_op_hcompute_lgyy_stencil_1_read(op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read),
    .lgyy_stencil_op_hcompute_lgyy_stencil_1_write(op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write)
);
assign op_hcompute_lxx_stencil_clk = clk;
assign op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read[0] = grad_x_stencil_op_hcompute_lxx_stencil_read[0];
cu_op_hcompute_lxx_stencil op_hcompute_lxx_stencil (
    .clk(op_hcompute_lxx_stencil_clk),
    .grad_x_stencil_op_hcompute_lxx_stencil_read(op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read),
    .lxx_stencil_op_hcompute_lxx_stencil_write(op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write)
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
assign op_hcompute_lyy_stencil_clk = clk;
assign op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read[0] = grad_y_stencil_op_hcompute_lyy_stencil_read[0];
cu_op_hcompute_lyy_stencil op_hcompute_lyy_stencil (
    .clk(op_hcompute_lyy_stencil_clk),
    .grad_y_stencil_op_hcompute_lyy_stencil_read(op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read),
    .lyy_stencil_op_hcompute_lyy_stencil_write(op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write)
);
assign op_hcompute_padded16_global_wrapper_stencil_clk = clk;
assign op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0] = padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0];
cu_op_hcompute_padded16_global_wrapper_stencil op_hcompute_padded16_global_wrapper_stencil (
    .clk(op_hcompute_padded16_global_wrapper_stencil_clk),
    .padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read(op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read),
    .padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write(op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write)
);
assign padded16_global_wrapper_stencil_clk = clk;
assign padded16_global_wrapper_stencil_reset = reset;
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0] = op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0];
padded16_global_wrapper_stencil_ub padded16_global_wrapper_stencil (
    .clk(padded16_global_wrapper_stencil_clk),
    .reset(padded16_global_wrapper_stencil_reset),
    .op_hcompute_grad_x_stencil_read(padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read),
    .op_hcompute_grad_y_stencil_read(padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read),
    .op_hcompute_padded16_global_wrapper_stencil_write(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_valid = 1'b0;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_en = 1'b0;
endmodule

