// Module `hw_input_stencil_ub` defined externally
// Module `avg_pool_stencil_ub` defined externally
// Module `avg_pool_stencil_clkwrk_dsa0_ub` defined externally
module op_hcompute_hw_output_stencil_write_start_pt__U690 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_write_start_control_vars_pt__U691 (
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
assign out[3] = in[3];
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_output_stencil_read_start_pt__U686 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_read_start_control_vars_pt__U687 (
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
assign out[3] = in[3];
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_output_stencil_exe_start_pt__U688 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_exe_start_control_vars_pt__U689 (
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
assign out[3] = in[3];
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_stencil_write_start_pt__U603 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_stencil_write_start_control_vars_pt__U604 (
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
assign out[3] = in[3];
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_stencil_read_start_pt__U599 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_stencil_read_start_control_vars_pt__U600 (
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
assign out[3] = in[3];
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_stencil_exe_start_pt__U601 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_stencil_exe_start_control_vars_pt__U602 (
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
assign out[3] = in[3];
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_avg_pool_stencil_write_start_pt__U632 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_avg_pool_stencil_write_start_control_vars_pt__U633 (
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
assign out[3] = in[3];
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_avg_pool_stencil_read_start_pt__U628 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_avg_pool_stencil_read_start_control_vars_pt__U629 (
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
assign out[3] = in[3];
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_avg_pool_stencil_exe_start_pt__U630 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_avg_pool_stencil_exe_start_control_vars_pt__U631 (
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
assign out[3] = in[3];
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_avg_pool_stencil_1_write_start_pt__U661 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_avg_pool_stencil_1_write_start_control_vars_pt__U662 (
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
assign out[3] = in[3];
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_avg_pool_stencil_1_read_start_pt__U657 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_avg_pool_stencil_1_read_start_control_vars_pt__U658 (
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
assign out[3] = in[3];
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_avg_pool_stencil_1_exe_start_pt__U659 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_avg_pool_stencil_1_exe_start_control_vars_pt__U660 (
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
assign out[3] = in[3];
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module hcompute_hw_input_stencil (
    output [15:0] out_hw_input_stencil,
    input [15:0] in0_input_copy_stencil [0:0]
);
assign out_hw_input_stencil = in0_input_copy_stencil[0];
endmodule

module cu_op_hcompute_hw_input_stencil (
    input clk,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0],
    output [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_input_stencil;
wire [15:0] inner_compute_in0_input_copy_stencil [0:0];
assign inner_compute_in0_input_copy_stencil[0] = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
hcompute_hw_input_stencil inner_compute (
    .out_hw_input_stencil(inner_compute_out_hw_input_stencil),
    .in0_input_copy_stencil(inner_compute_in0_input_copy_stencil)
);
assign hw_input_stencil_op_hcompute_hw_input_stencil_write[0] = inner_compute_out_hw_input_stencil;
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

module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_avg_pool_stencil [0:0]
);
assign out_hw_output_stencil = in0_avg_pool_stencil[0] >> 16'h0002;
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] avg_pool_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_avg_pool_stencil [0:0];
assign inner_compute_in0_avg_pool_stencil[0] = avg_pool_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_avg_pool_stencil(inner_compute_in0_avg_pool_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module hcompute_avg_pool_stencil (
    output [15:0] out_avg_pool_stencil
);
assign out_avg_pool_stencil = 16'h0000;
endmodule

module cu_op_hcompute_avg_pool_stencil (
    input clk,
    output [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write [0:0]
);
wire [15:0] inner_compute_out_avg_pool_stencil;
hcompute_avg_pool_stencil inner_compute (
    .out_avg_pool_stencil(inner_compute_out_avg_pool_stencil)
);
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write[0] = inner_compute_out_avg_pool_stencil;
endmodule

module hcompute_avg_pool_stencil_1 (
    output [15:0] out_avg_pool_stencil,
    input [15:0] in0_avg_pool_stencil [0:0],
    input [15:0] in1_hw_input_stencil [3:0]
);
assign out_avg_pool_stencil = 16'(in1_hw_input_stencil[0] + (16'(in0_avg_pool_stencil[0] + (16'(in1_hw_input_stencil[1] + (16'(in1_hw_input_stencil[2] + in1_hw_input_stencil[3])))))));
endmodule

module cu_op_hcompute_avg_pool_stencil_1 (
    input clk,
    input [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read [0:0],
    input [15:0] hw_input_stencil_op_hcompute_avg_pool_stencil_1_read [3:0],
    output [15:0] avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_avg_pool_stencil;
wire [15:0] inner_compute_in0_avg_pool_stencil [0:0];
wire [15:0] inner_compute_in1_hw_input_stencil [3:0];
assign inner_compute_in0_avg_pool_stencil[0] = avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read[0];
assign inner_compute_in1_hw_input_stencil[3] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[3];
assign inner_compute_in1_hw_input_stencil[2] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[2];
assign inner_compute_in1_hw_input_stencil[1] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[1];
assign inner_compute_in1_hw_input_stencil[0] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[0];
hcompute_avg_pool_stencil_1 inner_compute (
    .out_avg_pool_stencil(inner_compute_out_avg_pool_stencil),
    .in0_avg_pool_stencil(inner_compute_in0_avg_pool_stencil),
    .in1_hw_input_stencil(inner_compute_in1_hw_input_stencil)
);
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write[0] = inner_compute_out_avg_pool_stencil;
endmodule

module aff__U97 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
endmodule

module affine_controller__U96 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U97 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U73 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
endmodule

module affine_controller__U72 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U664 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U663 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U664 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U635 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0044);
endmodule

module affine_controller__U634 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U635 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U606 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0043);
endmodule

module affine_controller__U605 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U606 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U577 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
endmodule

module affine_controller__U576 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U553 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U552 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U553 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U529 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U528 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U529 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U505 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U504 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U49 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
endmodule

module affine_controller__U48 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U49 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U481 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U480 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U481 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U457 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U456 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U457 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U433 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U432 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U409 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U408 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U409 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U385 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0044);
endmodule

module affine_controller__U384 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U385 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U361 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0044);
endmodule

module affine_controller__U360 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U337 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0044);
endmodule

module affine_controller__U336 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U337 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U313 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0044);
endmodule

module affine_controller__U312 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U313 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U289 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0044);
endmodule

module affine_controller__U288 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U265 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0044);
endmodule

module affine_controller__U264 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U265 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U25 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
endmodule

module affine_controller__U24 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U25 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U241 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0044);
endmodule

module affine_controller__U240 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U241 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U217 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0044);
endmodule

module affine_controller__U216 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U193 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0043);
endmodule

module affine_controller__U192 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U193 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U169 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0043);
endmodule

module affine_controller__U168 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U169 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U145 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0043);
endmodule

module affine_controller__U144 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U121 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0002);
endmodule

module affine_controller__U120 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U121 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
endmodule

module affine_controller__U0 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module down_sample (
    input clk,
    input rst_n,
    input flush,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    output input_copy_stencil_op_hcompute_hw_input_stencil_read_valid,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0]
);
wire avg_pool_stencil_clk;
wire avg_pool_stencil_flush;
wire avg_pool_stencil_rst_n;
wire avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_wen;
wire [15:0] avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write [0:0];
wire avg_pool_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire avg_pool_stencil_clkwrk_dsa0_clk;
wire avg_pool_stencil_clkwrk_dsa0_flush;
wire avg_pool_stencil_clkwrk_dsa0_rst_n;
wire avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ren;
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read [0:0];
wire avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_wen;
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write [0:0];
wire hw_input_stencil_clk;
wire hw_input_stencil_flush;
wire hw_input_stencil_rst_n;
wire hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ren;
wire [15:0] hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0];
wire [15:0] hw_input_stencil_op_hcompute_avg_pool_stencil_1_read [3:0];
wire hw_input_stencil_op_hcompute_hw_input_stencil_write_wen;
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars [3:0];
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire op_hcompute_avg_pool_stencil_clk;
wire [15:0] op_hcompute_avg_pool_stencil_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write [0:0];
wire op_hcompute_avg_pool_stencil_1_clk;
wire [15:0] op_hcompute_avg_pool_stencil_1_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read [0:0];
wire [15:0] op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_1_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write [0:0];
wire op_hcompute_avg_pool_stencil_1_exe_start_in;
wire op_hcompute_avg_pool_stencil_1_exe_start_out;
wire [15:0] op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_1_exe_start_control_vars_out [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U263_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U263_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U263_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U287_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U287_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U287_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U311_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U311_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U311_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U335_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U335_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U335_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U359_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U359_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U359_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U383_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U383_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U383_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U407_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U407_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U407_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U431_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U431_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U431_d [3:0];
wire op_hcompute_avg_pool_stencil_1_read_start_in;
wire op_hcompute_avg_pool_stencil_1_read_start_out;
wire [15:0] op_hcompute_avg_pool_stencil_1_read_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_1_read_start_control_vars_out [3:0];
wire op_hcompute_avg_pool_stencil_1_write_start_in;
wire op_hcompute_avg_pool_stencil_1_write_start_out;
wire [15:0] op_hcompute_avg_pool_stencil_1_write_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_1_write_start_control_vars_out [3:0];
wire op_hcompute_avg_pool_stencil_exe_start_in;
wire op_hcompute_avg_pool_stencil_exe_start_out;
wire [15:0] op_hcompute_avg_pool_stencil_exe_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_exe_start_control_vars_out [3:0];
wire op_hcompute_avg_pool_stencil_port_controller_clk;
wire op_hcompute_avg_pool_stencil_port_controller_valid;
wire [15:0] op_hcompute_avg_pool_stencil_port_controller_d [3:0];
wire op_hcompute_avg_pool_stencil_port_controller_U167_clk;
wire op_hcompute_avg_pool_stencil_port_controller_U167_valid;
wire [15:0] op_hcompute_avg_pool_stencil_port_controller_U167_d [3:0];
wire op_hcompute_avg_pool_stencil_port_controller_U191_clk;
wire op_hcompute_avg_pool_stencil_port_controller_U191_valid;
wire [15:0] op_hcompute_avg_pool_stencil_port_controller_U191_d [3:0];
wire op_hcompute_avg_pool_stencil_port_controller_U215_clk;
wire op_hcompute_avg_pool_stencil_port_controller_U215_valid;
wire [15:0] op_hcompute_avg_pool_stencil_port_controller_U215_d [3:0];
wire op_hcompute_avg_pool_stencil_port_controller_U239_clk;
wire op_hcompute_avg_pool_stencil_port_controller_U239_valid;
wire [15:0] op_hcompute_avg_pool_stencil_port_controller_U239_d [3:0];
wire op_hcompute_avg_pool_stencil_read_start_in;
wire op_hcompute_avg_pool_stencil_read_start_out;
wire [15:0] op_hcompute_avg_pool_stencil_read_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_read_start_control_vars_out [3:0];
wire op_hcompute_avg_pool_stencil_write_start_in;
wire op_hcompute_avg_pool_stencil_write_start_out;
wire [15:0] op_hcompute_avg_pool_stencil_write_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_write_start_control_vars_out [3:0];
wire op_hcompute_hw_input_stencil_clk;
wire [15:0] op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0];
wire [15:0] op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire op_hcompute_hw_input_stencil_exe_start_in;
wire op_hcompute_hw_input_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_out [3:0];
wire op_hcompute_hw_input_stencil_port_controller_clk;
wire op_hcompute_hw_input_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_d [3:0];
wire op_hcompute_hw_input_stencil_port_controller_U119_clk;
wire op_hcompute_hw_input_stencil_port_controller_U119_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U119_d [3:0];
wire op_hcompute_hw_input_stencil_port_controller_U143_clk;
wire op_hcompute_hw_input_stencil_port_controller_U143_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U143_d [3:0];
wire op_hcompute_hw_input_stencil_port_controller_U23_clk;
wire op_hcompute_hw_input_stencil_port_controller_U23_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U23_d [3:0];
wire op_hcompute_hw_input_stencil_port_controller_U47_clk;
wire op_hcompute_hw_input_stencil_port_controller_U47_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U47_d [3:0];
wire op_hcompute_hw_input_stencil_port_controller_U71_clk;
wire op_hcompute_hw_input_stencil_port_controller_U71_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U71_d [3:0];
wire op_hcompute_hw_input_stencil_port_controller_U95_clk;
wire op_hcompute_hw_input_stencil_port_controller_U95_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U95_d [3:0];
wire op_hcompute_hw_input_stencil_read_start_in;
wire [15:0] op_hcompute_hw_input_stencil_read_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_input_stencil_read_start_control_vars_out [3:0];
wire op_hcompute_hw_input_stencil_write_start_in;
wire op_hcompute_hw_input_stencil_write_start_out;
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_out [3:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_in;
wire op_hcompute_hw_output_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [3:0];
wire op_hcompute_hw_output_stencil_port_controller_clk;
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [3:0];
wire op_hcompute_hw_output_stencil_port_controller_U455_clk;
wire op_hcompute_hw_output_stencil_port_controller_U455_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U455_d [3:0];
wire op_hcompute_hw_output_stencil_port_controller_U479_clk;
wire op_hcompute_hw_output_stencil_port_controller_U479_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U479_d [3:0];
wire op_hcompute_hw_output_stencil_port_controller_U503_clk;
wire op_hcompute_hw_output_stencil_port_controller_U503_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U503_d [3:0];
wire op_hcompute_hw_output_stencil_port_controller_U527_clk;
wire op_hcompute_hw_output_stencil_port_controller_U527_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U527_d [3:0];
wire op_hcompute_hw_output_stencil_port_controller_U551_clk;
wire op_hcompute_hw_output_stencil_port_controller_U551_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U551_d [3:0];
wire op_hcompute_hw_output_stencil_port_controller_U575_clk;
wire op_hcompute_hw_output_stencil_port_controller_U575_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U575_d [3:0];
wire op_hcompute_hw_output_stencil_read_start_in;
wire op_hcompute_hw_output_stencil_read_start_out;
wire [15:0] op_hcompute_hw_output_stencil_read_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_output_stencil_read_start_control_vars_out [3:0];
wire op_hcompute_hw_output_stencil_write_start_in;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [3:0];
assign avg_pool_stencil_clk = clk;
assign avg_pool_stencil_flush = flush;
assign avg_pool_stencil_rst_n = rst_n;
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_wen = op_hcompute_avg_pool_stencil_1_write_start_out;
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3] = op_hcompute_avg_pool_stencil_1_write_start_control_vars_out[3];
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] = op_hcompute_avg_pool_stencil_1_write_start_control_vars_out[2];
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] = op_hcompute_avg_pool_stencil_1_write_start_control_vars_out[1];
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars[0] = op_hcompute_avg_pool_stencil_1_write_start_control_vars_out[0];
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write[0] = op_hcompute_avg_pool_stencil_1_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write[0];
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start_out;
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[3] = op_hcompute_hw_output_stencil_port_controller_d[3];
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
avg_pool_stencil_ub avg_pool_stencil (
    .clk(avg_pool_stencil_clk),
    .flush(avg_pool_stencil_flush),
    .rst_n(avg_pool_stencil_rst_n),
    .op_hcompute_avg_pool_stencil_1_write_wen(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_wen),
    .op_hcompute_avg_pool_stencil_1_write_ctrl_vars(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars),
    .op_hcompute_avg_pool_stencil_1_write(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write),
    .op_hcompute_hw_output_stencil_read_ren(avg_pool_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(avg_pool_stencil_op_hcompute_hw_output_stencil_read)
);
assign avg_pool_stencil_clkwrk_dsa0_clk = clk;
assign avg_pool_stencil_clkwrk_dsa0_flush = flush;
assign avg_pool_stencil_clkwrk_dsa0_rst_n = rst_n;
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ren = op_hcompute_avg_pool_stencil_1_read_start_out;
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_wen = op_hcompute_avg_pool_stencil_write_start_out;
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[3] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[3];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[2] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[2];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[1] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[1];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[0] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[0];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write[0] = op_hcompute_avg_pool_stencil_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write[0];
avg_pool_stencil_clkwrk_dsa0_ub avg_pool_stencil_clkwrk_dsa0 (
    .clk(avg_pool_stencil_clkwrk_dsa0_clk),
    .flush(avg_pool_stencil_clkwrk_dsa0_flush),
    .rst_n(avg_pool_stencil_clkwrk_dsa0_rst_n),
    .op_hcompute_avg_pool_stencil_1_read_ren(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ren),
    .op_hcompute_avg_pool_stencil_1_read_ctrl_vars(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars),
    .op_hcompute_avg_pool_stencil_1_read(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read),
    .op_hcompute_avg_pool_stencil_write_wen(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_wen),
    .op_hcompute_avg_pool_stencil_write_ctrl_vars(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars),
    .op_hcompute_avg_pool_stencil_write(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write)
);
assign hw_input_stencil_clk = clk;
assign hw_input_stencil_flush = flush;
assign hw_input_stencil_rst_n = rst_n;
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ren = op_hcompute_avg_pool_stencil_1_read_start_out;
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_wen = op_hcompute_hw_input_stencil_write_start_out;
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[3] = op_hcompute_hw_input_stencil_write_start_control_vars_out[3];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_stencil_write_start_control_vars_out[2];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_stencil_write_start_control_vars_out[1];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_stencil_write_start_control_vars_out[0];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write[0] = op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write[0];
hw_input_stencil_ub hw_input_stencil (
    .clk(hw_input_stencil_clk),
    .flush(hw_input_stencil_flush),
    .rst_n(hw_input_stencil_rst_n),
    .op_hcompute_avg_pool_stencil_1_read_ren(hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ren),
    .op_hcompute_avg_pool_stencil_1_read_ctrl_vars(hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars),
    .op_hcompute_avg_pool_stencil_1_read(hw_input_stencil_op_hcompute_avg_pool_stencil_1_read),
    .op_hcompute_hw_input_stencil_write_wen(hw_input_stencil_op_hcompute_hw_input_stencil_write_wen),
    .op_hcompute_hw_input_stencil_write_ctrl_vars(hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_stencil_write(hw_input_stencil_op_hcompute_hw_input_stencil_write)
);
assign op_hcompute_avg_pool_stencil_clk = clk;
cu_op_hcompute_avg_pool_stencil op_hcompute_avg_pool_stencil (
    .clk(op_hcompute_avg_pool_stencil_clk),
    .avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write(op_hcompute_avg_pool_stencil_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write)
);
assign op_hcompute_avg_pool_stencil_1_clk = clk;
assign op_hcompute_avg_pool_stencil_1_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read[0] = avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read[0];
assign op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[3] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[3];
assign op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[2] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[2];
assign op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[1] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[1];
assign op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[0] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[0];
cu_op_hcompute_avg_pool_stencil_1 op_hcompute_avg_pool_stencil_1 (
    .clk(op_hcompute_avg_pool_stencil_1_clk),
    .avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read(op_hcompute_avg_pool_stencil_1_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read),
    .hw_input_stencil_op_hcompute_avg_pool_stencil_1_read(op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read),
    .avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write(op_hcompute_avg_pool_stencil_1_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write)
);
assign op_hcompute_avg_pool_stencil_1_exe_start_in = op_hcompute_avg_pool_stencil_1_port_controller_valid;
op_hcompute_avg_pool_stencil_1_exe_start_pt__U659 op_hcompute_avg_pool_stencil_1_exe_start (
    .in(op_hcompute_avg_pool_stencil_1_exe_start_in),
    .out(op_hcompute_avg_pool_stencil_1_exe_start_out)
);
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
op_hcompute_avg_pool_stencil_1_exe_start_control_vars_pt__U660 op_hcompute_avg_pool_stencil_1_exe_start_control_vars (
    .in(op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_clk = clk;
affine_controller__U634 op_hcompute_avg_pool_stencil_1_port_controller (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U263_clk = clk;
affine_controller__U240 op_hcompute_avg_pool_stencil_1_port_controller_U263 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U263_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U263_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U263_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U287_clk = clk;
affine_controller__U264 op_hcompute_avg_pool_stencil_1_port_controller_U287 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U287_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U287_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U287_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U311_clk = clk;
affine_controller__U288 op_hcompute_avg_pool_stencil_1_port_controller_U311 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U311_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U311_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U311_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U335_clk = clk;
affine_controller__U312 op_hcompute_avg_pool_stencil_1_port_controller_U335 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U335_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U335_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U335_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U359_clk = clk;
affine_controller__U336 op_hcompute_avg_pool_stencil_1_port_controller_U359 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U359_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U359_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U359_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U383_clk = clk;
affine_controller__U360 op_hcompute_avg_pool_stencil_1_port_controller_U383 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U383_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U383_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U383_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U407_clk = clk;
affine_controller__U384 op_hcompute_avg_pool_stencil_1_port_controller_U407 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U407_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U407_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U407_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U431_clk = clk;
affine_controller__U408 op_hcompute_avg_pool_stencil_1_port_controller_U431 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U431_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U431_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U431_d)
);
assign op_hcompute_avg_pool_stencil_1_read_start_in = op_hcompute_avg_pool_stencil_1_port_controller_valid;
op_hcompute_avg_pool_stencil_1_read_start_pt__U657 op_hcompute_avg_pool_stencil_1_read_start (
    .in(op_hcompute_avg_pool_stencil_1_read_start_in),
    .out(op_hcompute_avg_pool_stencil_1_read_start_out)
);
assign op_hcompute_avg_pool_stencil_1_read_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_1_read_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_1_read_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_1_read_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
op_hcompute_avg_pool_stencil_1_read_start_control_vars_pt__U658 op_hcompute_avg_pool_stencil_1_read_start_control_vars (
    .in(op_hcompute_avg_pool_stencil_1_read_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_1_read_start_control_vars_out)
);
assign op_hcompute_avg_pool_stencil_1_write_start_in = op_hcompute_avg_pool_stencil_1_port_controller_valid;
op_hcompute_avg_pool_stencil_1_write_start_pt__U661 op_hcompute_avg_pool_stencil_1_write_start (
    .in(op_hcompute_avg_pool_stencil_1_write_start_in),
    .out(op_hcompute_avg_pool_stencil_1_write_start_out)
);
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
op_hcompute_avg_pool_stencil_1_write_start_control_vars_pt__U662 op_hcompute_avg_pool_stencil_1_write_start_control_vars (
    .in(op_hcompute_avg_pool_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_avg_pool_stencil_exe_start_in = op_hcompute_avg_pool_stencil_port_controller_valid;
op_hcompute_avg_pool_stencil_exe_start_pt__U630 op_hcompute_avg_pool_stencil_exe_start (
    .in(op_hcompute_avg_pool_stencil_exe_start_in),
    .out(op_hcompute_avg_pool_stencil_exe_start_out)
);
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_port_controller_d[0];
op_hcompute_avg_pool_stencil_exe_start_control_vars_pt__U631 op_hcompute_avg_pool_stencil_exe_start_control_vars (
    .in(op_hcompute_avg_pool_stencil_exe_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_exe_start_control_vars_out)
);
assign op_hcompute_avg_pool_stencil_port_controller_clk = clk;
affine_controller__U605 op_hcompute_avg_pool_stencil_port_controller (
    .clk(op_hcompute_avg_pool_stencil_port_controller_clk),
    .valid(op_hcompute_avg_pool_stencil_port_controller_valid),
    .d(op_hcompute_avg_pool_stencil_port_controller_d)
);
assign op_hcompute_avg_pool_stencil_port_controller_U167_clk = clk;
affine_controller__U144 op_hcompute_avg_pool_stencil_port_controller_U167 (
    .clk(op_hcompute_avg_pool_stencil_port_controller_U167_clk),
    .valid(op_hcompute_avg_pool_stencil_port_controller_U167_valid),
    .d(op_hcompute_avg_pool_stencil_port_controller_U167_d)
);
assign op_hcompute_avg_pool_stencil_port_controller_U191_clk = clk;
affine_controller__U168 op_hcompute_avg_pool_stencil_port_controller_U191 (
    .clk(op_hcompute_avg_pool_stencil_port_controller_U191_clk),
    .valid(op_hcompute_avg_pool_stencil_port_controller_U191_valid),
    .d(op_hcompute_avg_pool_stencil_port_controller_U191_d)
);
assign op_hcompute_avg_pool_stencil_port_controller_U215_clk = clk;
affine_controller__U192 op_hcompute_avg_pool_stencil_port_controller_U215 (
    .clk(op_hcompute_avg_pool_stencil_port_controller_U215_clk),
    .valid(op_hcompute_avg_pool_stencil_port_controller_U215_valid),
    .d(op_hcompute_avg_pool_stencil_port_controller_U215_d)
);
assign op_hcompute_avg_pool_stencil_port_controller_U239_clk = clk;
affine_controller__U216 op_hcompute_avg_pool_stencil_port_controller_U239 (
    .clk(op_hcompute_avg_pool_stencil_port_controller_U239_clk),
    .valid(op_hcompute_avg_pool_stencil_port_controller_U239_valid),
    .d(op_hcompute_avg_pool_stencil_port_controller_U239_d)
);
assign op_hcompute_avg_pool_stencil_read_start_in = op_hcompute_avg_pool_stencil_port_controller_valid;
op_hcompute_avg_pool_stencil_read_start_pt__U628 op_hcompute_avg_pool_stencil_read_start (
    .in(op_hcompute_avg_pool_stencil_read_start_in),
    .out(op_hcompute_avg_pool_stencil_read_start_out)
);
assign op_hcompute_avg_pool_stencil_read_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_read_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_read_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_read_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_port_controller_d[0];
op_hcompute_avg_pool_stencil_read_start_control_vars_pt__U629 op_hcompute_avg_pool_stencil_read_start_control_vars (
    .in(op_hcompute_avg_pool_stencil_read_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_read_start_control_vars_out)
);
assign op_hcompute_avg_pool_stencil_write_start_in = op_hcompute_avg_pool_stencil_port_controller_valid;
op_hcompute_avg_pool_stencil_write_start_pt__U632 op_hcompute_avg_pool_stencil_write_start (
    .in(op_hcompute_avg_pool_stencil_write_start_in),
    .out(op_hcompute_avg_pool_stencil_write_start_out)
);
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_port_controller_d[0];
op_hcompute_avg_pool_stencil_write_start_control_vars_pt__U633 op_hcompute_avg_pool_stencil_write_start_control_vars (
    .in(op_hcompute_avg_pool_stencil_write_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_input_stencil_clk = clk;
assign op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read[0] = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
cu_op_hcompute_hw_input_stencil op_hcompute_hw_input_stencil (
    .clk(op_hcompute_hw_input_stencil_clk),
    .input_copy_stencil_op_hcompute_hw_input_stencil_read(op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read),
    .hw_input_stencil_op_hcompute_hw_input_stencil_write(op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write)
);
assign op_hcompute_hw_input_stencil_exe_start_in = op_hcompute_hw_input_stencil_port_controller_valid;
op_hcompute_hw_input_stencil_exe_start_pt__U601 op_hcompute_hw_input_stencil_exe_start (
    .in(op_hcompute_hw_input_stencil_exe_start_in),
    .out(op_hcompute_hw_input_stencil_exe_start_out)
);
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[3] = op_hcompute_hw_input_stencil_port_controller_d[3];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
op_hcompute_hw_input_stencil_exe_start_control_vars_pt__U602 op_hcompute_hw_input_stencil_exe_start_control_vars (
    .in(op_hcompute_hw_input_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_input_stencil_port_controller_clk = clk;
affine_controller__U576 op_hcompute_hw_input_stencil_port_controller (
    .clk(op_hcompute_hw_input_stencil_port_controller_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U119_clk = clk;
affine_controller__U96 op_hcompute_hw_input_stencil_port_controller_U119 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U119_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U119_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U119_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U143_clk = clk;
affine_controller__U120 op_hcompute_hw_input_stencil_port_controller_U143 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U143_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U143_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U143_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U23_clk = clk;
affine_controller__U0 op_hcompute_hw_input_stencil_port_controller_U23 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U23_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U23_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U23_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U47_clk = clk;
affine_controller__U24 op_hcompute_hw_input_stencil_port_controller_U47 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U47_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U47_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U47_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U71_clk = clk;
affine_controller__U48 op_hcompute_hw_input_stencil_port_controller_U71 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U71_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U71_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U71_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U95_clk = clk;
affine_controller__U72 op_hcompute_hw_input_stencil_port_controller_U95 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U95_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U95_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U95_d)
);
assign op_hcompute_hw_input_stencil_read_start_in = op_hcompute_hw_input_stencil_port_controller_valid;
op_hcompute_hw_input_stencil_read_start_pt__U599 op_hcompute_hw_input_stencil_read_start (
    .in(op_hcompute_hw_input_stencil_read_start_in),
    .out(input_copy_stencil_op_hcompute_hw_input_stencil_read_valid)
);
assign op_hcompute_hw_input_stencil_read_start_control_vars_in[3] = op_hcompute_hw_input_stencil_port_controller_d[3];
assign op_hcompute_hw_input_stencil_read_start_control_vars_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign op_hcompute_hw_input_stencil_read_start_control_vars_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign op_hcompute_hw_input_stencil_read_start_control_vars_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
op_hcompute_hw_input_stencil_read_start_control_vars_pt__U600 op_hcompute_hw_input_stencil_read_start_control_vars (
    .in(op_hcompute_hw_input_stencil_read_start_control_vars_in),
    .out(op_hcompute_hw_input_stencil_read_start_control_vars_out)
);
assign op_hcompute_hw_input_stencil_write_start_in = op_hcompute_hw_input_stencil_port_controller_valid;
op_hcompute_hw_input_stencil_write_start_pt__U603 op_hcompute_hw_input_stencil_write_start (
    .in(op_hcompute_hw_input_stencil_write_start_in),
    .out(op_hcompute_hw_input_stencil_write_start_out)
);
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[3] = op_hcompute_hw_input_stencil_port_controller_d[3];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
op_hcompute_hw_input_stencil_write_start_control_vars_pt__U604 op_hcompute_hw_input_stencil_write_start_control_vars (
    .in(op_hcompute_hw_input_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_read[0] = avg_pool_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .avg_pool_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_read),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write)
);
assign op_hcompute_hw_output_stencil_exe_start_in = op_hcompute_hw_output_stencil_port_controller_valid;
op_hcompute_hw_output_stencil_exe_start_pt__U688 op_hcompute_hw_output_stencil_exe_start (
    .in(op_hcompute_hw_output_stencil_exe_start_in),
    .out(op_hcompute_hw_output_stencil_exe_start_out)
);
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[3] = op_hcompute_hw_output_stencil_port_controller_d[3];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
op_hcompute_hw_output_stencil_exe_start_control_vars_pt__U689 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U663 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U455_clk = clk;
affine_controller__U432 op_hcompute_hw_output_stencil_port_controller_U455 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U455_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U455_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U455_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U479_clk = clk;
affine_controller__U456 op_hcompute_hw_output_stencil_port_controller_U479 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U479_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U479_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U479_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U503_clk = clk;
affine_controller__U480 op_hcompute_hw_output_stencil_port_controller_U503 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U503_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U503_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U503_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U527_clk = clk;
affine_controller__U504 op_hcompute_hw_output_stencil_port_controller_U527 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U527_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U527_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U527_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U551_clk = clk;
affine_controller__U528 op_hcompute_hw_output_stencil_port_controller_U551 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U551_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U551_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U551_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U575_clk = clk;
affine_controller__U552 op_hcompute_hw_output_stencil_port_controller_U575 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U575_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U575_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U575_d)
);
assign op_hcompute_hw_output_stencil_read_start_in = op_hcompute_hw_output_stencil_port_controller_valid;
op_hcompute_hw_output_stencil_read_start_pt__U686 op_hcompute_hw_output_stencil_read_start (
    .in(op_hcompute_hw_output_stencil_read_start_in),
    .out(op_hcompute_hw_output_stencil_read_start_out)
);
assign op_hcompute_hw_output_stencil_read_start_control_vars_in[3] = op_hcompute_hw_output_stencil_port_controller_d[3];
assign op_hcompute_hw_output_stencil_read_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_read_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_read_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
op_hcompute_hw_output_stencil_read_start_control_vars_pt__U687 op_hcompute_hw_output_stencil_read_start_control_vars (
    .in(op_hcompute_hw_output_stencil_read_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_read_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_write_start_in = op_hcompute_hw_output_stencil_port_controller_valid;
op_hcompute_hw_output_stencil_write_start_pt__U690 op_hcompute_hw_output_stencil_write_start (
    .in(op_hcompute_hw_output_stencil_write_start_in),
    .out(hw_output_stencil_op_hcompute_hw_output_stencil_write_en)
);
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[3] = op_hcompute_hw_output_stencil_port_controller_d[3];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
op_hcompute_hw_output_stencil_write_start_control_vars_pt__U691 op_hcompute_hw_output_stencil_write_start_control_vars (
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
endmodule

