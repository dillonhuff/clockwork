// Module `cgralib_SIPO_reg__ID_U371__data_width16__depth2` defined externally
// Module `cgralib_SIPO_reg__ID_U328__data_width16__depth2` defined externally
// Module `cgralib_SIPO_reg__ID_U285__data_width16__depth2` defined externally
// Module `cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U331__data_width16__idx_width16` defined externally
// Module `cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U288__data_width16__idx_width16` defined externally
// Module `cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U245__data_width16__idx_width16` defined externally
// Module `cgralib_Buffet__IDconv_stencil_clkwrk_dsa0_0__data_width16__idx_width16` defined externally
// Module `cgralib_Buffet__IDconv_stencil_0__data_width16__idx_width16` defined externally
module update_drain_fork_mod_conv_stencil_clkwrk_dsa0_BANK_0 (
    input ready_in_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5,
    output valid_out_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5,
    input valid_in,
    output ready_out,
    input rst_n
);
assign valid_out_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5 = valid_in;
assign ready_out = ready_in_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5;
endmodule

module update_drain_fork_mod_conv_stencil_BANK_0 (
    input ready_in_conv_stencil_op_hcompute_hw_output_stencil_1,
    output valid_out_conv_stencil_op_hcompute_hw_output_stencil_1,
    input valid_in,
    output ready_out,
    input rst_n
);
assign valid_out_conv_stencil_op_hcompute_hw_output_stencil_1 = valid_in;
assign ready_out = ready_in_conv_stencil_op_hcompute_hw_output_stencil_1;
endmodule

module ready_and_mod_op_hcompute_hw_output_stencil (
    input ready_in_conv_stencil,
    output ready_out
);
assign ready_out = ready_in_conv_stencil;
endmodule

module ready_and_mod_op_hcompute_hw_input_global_wrapper_stencil (
    input ready_in_hw_input_stencil,
    output ready_out
);
assign ready_out = ready_in_hw_input_stencil;
endmodule

module op_hcompute_hw_output_stencil_write_start_pt__U126 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_write_start_control_vars_pt__U127 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_output_stencil_read_start_pt__U122 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_read_start_control_vars_pt__U123 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_output_stencil_read_ready_pt__U121 (
    output in,
    input out
);
assign in = out;
endmodule

module op_hcompute_hw_output_stencil_exe_start_pt__U124 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_exe_start_control_vars_pt__U125 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_write_start_pt__U39 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_pt__U40 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_read_start_pt__U35 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_pt__U36 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_read_ready_pt__U34 (
    output in,
    input out
);
assign in = out;
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_exe_start_pt__U37 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_pt__U38 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_conv_stencil_write_start_pt__U68 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv_stencil_write_start_control_vars_pt__U69 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_conv_stencil_read_start_pt__U64 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv_stencil_read_start_control_vars_pt__U65 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_conv_stencil_read_ready_pt__U63 (
    output in,
    input out
);
assign in = out;
endmodule

module op_hcompute_conv_stencil_exe_start_pt__U66 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv_stencil_exe_start_control_vars_pt__U67 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_conv_stencil_1_write_start_pt__U97 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv_stencil_1_write_start_control_vars_pt__U98 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_conv_stencil_1_read_start_pt__U93 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv_stencil_1_read_start_control_vars_pt__U94 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_conv_stencil_1_read_ready_pt__U92 (
    output in,
    input out
);
assign in = out;
endmodule

module op_hcompute_conv_stencil_1_exe_start_pt__U95 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv_stencil_1_exe_start_control_vars_pt__U96 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_conv_stencil [0:0]
);
assign out_hw_output_stencil = in0_conv_stencil[0];
endmodule

module hcompute_hw_input_global_wrapper_stencil (
    output [15:0] out_hw_input_global_wrapper_stencil,
    input [15:0] in0_hw_input_stencil [0:0]
);
assign out_hw_input_global_wrapper_stencil = in0_hw_input_stencil[0];
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

module hcompute_conv_stencil (
    output [15:0] out_conv_stencil
);
assign out_conv_stencil = 16'h0000;
endmodule

module hcompute_conv_stencil_1 (
    output [15:0] out_conv_stencil,
    input [15:0] in0_conv_stencil [0:0],
    input [15:0] in1_hw_input_global_wrapper_stencil [8:0]
);
assign out_conv_stencil = 16'((16'(in1_hw_input_global_wrapper_stencil[0] * 16'h000b)) + (16'(in0_conv_stencil[0] + (16'((16'(in1_hw_input_global_wrapper_stencil[1] * 16'h000e)) + (16'((16'(in1_hw_input_global_wrapper_stencil[2] * 16'h0011)) + (16'((16'(in1_hw_input_global_wrapper_stencil[3] * 16'h000c)) + (16'((16'(in1_hw_input_global_wrapper_stencil[4] * 16'h0000)) + (16'((16'(in1_hw_input_global_wrapper_stencil[5] * 16'h0012)) + (16'((16'(in1_hw_input_global_wrapper_stencil[6] * 16'h000d)) + (16'((16'(in1_hw_input_global_wrapper_stencil[7] * 16'h0013)) + (16'(in1_hw_input_global_wrapper_stencil[8] * 16'h0010)))))))))))))))))));
endmodule

module ready_and_mod_op_hcompute_conv_stencil (
    output ready_out
);
assign ready_out = 1'b1;
endmodule

module flow_ctrl__U3 (
    output valid_out_0,
    input ready_out_0
);
assign valid_out_0 = 1'b1;
endmodule

module cu_op_hcompute_conv_stencil (
    input clk,
    output [15:0] conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write [0:0],
    input conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_ready,
    output conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_valid
);
wire [15:0] inner_compute_out_conv_stencil;
hcompute_conv_stencil inner_compute (
    .out_conv_stencil(inner_compute_out_conv_stencil)
);
flow_ctrl__U3 op_hcompute_conv_stencil_flow_ctrl (
    .valid_out_0(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_valid),
    .ready_out_0(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_ready)
);
assign conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write[0] = inner_compute_out_conv_stencil;
endmodule

module ready_and_mod_op_hcompute_conv_stencil_1 (
    input ready_in_conv_stencil_clkwrk_dsa0,
    input ready_in_hw_input_global_wrapper_stencil,
    output ready_out
);
assign ready_out = ready_in_conv_stencil_clkwrk_dsa0 & ready_in_hw_input_global_wrapper_stencil;
endmodule

module flow_ctrl__U9 (
    input valid_in_0,
    output ready_in_0,
    output valid_out_0,
    input ready_out_0
);
assign ready_in_0 = 1'b1 & ready_out_0;
assign valid_out_0 = valid_in_0;
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] conv_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output conv_stencil_op_hcompute_hw_output_stencil_read_ready,
    input conv_stencil_op_hcompute_hw_output_stencil_read_valid,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    input hw_output_stencil_op_hcompute_hw_output_stencil_write_ready,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_valid
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_conv_stencil [0:0];
assign inner_compute_in0_conv_stencil[0] = conv_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_conv_stencil(inner_compute_in0_conv_stencil)
);
flow_ctrl__U9 op_hcompute_hw_output_stencil_flow_ctrl (
    .valid_in_0(conv_stencil_op_hcompute_hw_output_stencil_read_valid),
    .ready_in_0(conv_stencil_op_hcompute_hw_output_stencil_read_ready),
    .valid_out_0(hw_output_stencil_op_hcompute_hw_output_stencil_write_valid),
    .ready_out_0(hw_output_stencil_op_hcompute_hw_output_stencil_write_ready)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module flow_ctrl__U5 (
    input valid_in_0,
    output ready_in_0,
    input valid_in_1,
    output ready_in_1,
    output valid_out_0,
    input ready_out_0
);
assign ready_in_0 = valid_in_1 & ready_out_0;
assign ready_in_1 = valid_in_0 & ready_out_0;
assign valid_out_0 = valid_in_0 & valid_in_1;
endmodule

module cu_op_hcompute_conv_stencil_1 (
    input clk,
    input [15:0] conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read [0:0],
    output conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_ready,
    input conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_valid,
    input [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read [8:0],
    output hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_ready,
    input hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_valid,
    output [15:0] conv_stencil_op_hcompute_conv_stencil_1_write [0:0],
    input conv_stencil_op_hcompute_conv_stencil_1_write_ready,
    output conv_stencil_op_hcompute_conv_stencil_1_write_valid
);
wire [15:0] inner_compute_out_conv_stencil;
wire [15:0] inner_compute_in0_conv_stencil [0:0];
assign inner_compute_in0_conv_stencil[0] = conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read[0];
wire [15:0] inner_compute_in1_hw_input_global_wrapper_stencil [8:0];
assign inner_compute_in1_hw_input_global_wrapper_stencil[8] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[8];
assign inner_compute_in1_hw_input_global_wrapper_stencil[7] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[7];
assign inner_compute_in1_hw_input_global_wrapper_stencil[6] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[6];
assign inner_compute_in1_hw_input_global_wrapper_stencil[5] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[5];
assign inner_compute_in1_hw_input_global_wrapper_stencil[4] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[4];
assign inner_compute_in1_hw_input_global_wrapper_stencil[3] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[3];
assign inner_compute_in1_hw_input_global_wrapper_stencil[2] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[2];
assign inner_compute_in1_hw_input_global_wrapper_stencil[1] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[1];
assign inner_compute_in1_hw_input_global_wrapper_stencil[0] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[0];
hcompute_conv_stencil_1 inner_compute (
    .out_conv_stencil(inner_compute_out_conv_stencil),
    .in0_conv_stencil(inner_compute_in0_conv_stencil),
    .in1_hw_input_global_wrapper_stencil(inner_compute_in1_hw_input_global_wrapper_stencil)
);
flow_ctrl__U5 op_hcompute_conv_stencil_1_flow_ctrl (
    .valid_in_0(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_valid),
    .ready_in_0(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_ready),
    .valid_in_1(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_valid),
    .ready_in_1(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_ready),
    .valid_out_0(conv_stencil_op_hcompute_conv_stencil_1_write_valid),
    .ready_out_0(conv_stencil_op_hcompute_conv_stencil_1_write_ready)
);
assign conv_stencil_op_hcompute_conv_stencil_1_write[0] = inner_compute_out_conv_stencil;
endmodule

module flow_ctrl__U164 (
    input valid_in_0,
    output ready_in_0,
    input valid_in_1,
    output ready_in_1,
    input valid_in_2,
    output ready_in_2,
    input valid_in_3,
    output ready_in_3,
    input valid_in_4,
    output ready_in_4,
    input valid_in_5,
    output ready_in_5,
    input valid_in_6,
    output ready_in_6,
    input valid_in_7,
    output ready_in_7,
    input valid_in_8,
    output ready_in_8,
    output valid_out_0,
    input ready_out_0
);
assign ready_in_0 = (((((((valid_in_1 & valid_in_2) & valid_in_3) & valid_in_4) & valid_in_5) & valid_in_6) & valid_in_7) & valid_in_8) & ready_out_0;
assign ready_in_1 = (((((((valid_in_0 & valid_in_2) & valid_in_3) & valid_in_4) & valid_in_5) & valid_in_6) & valid_in_7) & valid_in_8) & ready_out_0;
assign ready_in_2 = (((((((valid_in_0 & valid_in_1) & valid_in_3) & valid_in_4) & valid_in_5) & valid_in_6) & valid_in_7) & valid_in_8) & ready_out_0;
assign ready_in_3 = (((((((valid_in_0 & valid_in_1) & valid_in_2) & valid_in_4) & valid_in_5) & valid_in_6) & valid_in_7) & valid_in_8) & ready_out_0;
assign ready_in_4 = (((((((valid_in_0 & valid_in_1) & valid_in_2) & valid_in_3) & valid_in_5) & valid_in_6) & valid_in_7) & valid_in_8) & ready_out_0;
assign ready_in_5 = (((((((valid_in_0 & valid_in_1) & valid_in_2) & valid_in_3) & valid_in_4) & valid_in_6) & valid_in_7) & valid_in_8) & ready_out_0;
assign ready_in_6 = (((((((valid_in_0 & valid_in_1) & valid_in_2) & valid_in_3) & valid_in_4) & valid_in_5) & valid_in_7) & valid_in_8) & ready_out_0;
assign ready_in_7 = (((((((valid_in_0 & valid_in_1) & valid_in_2) & valid_in_3) & valid_in_4) & valid_in_5) & valid_in_6) & valid_in_8) & ready_out_0;
assign ready_in_8 = (((((((valid_in_0 & valid_in_1) & valid_in_2) & valid_in_3) & valid_in_4) & valid_in_5) & valid_in_6) & valid_in_7) & ready_out_0;
assign valid_out_0 = (((((((valid_in_0 & valid_in_1) & valid_in_2) & valid_in_3) & valid_in_4) & valid_in_5) & valid_in_6) & valid_in_7) & valid_in_8;
endmodule

module flow_ctrl__U146 (
    input valid_in_0,
    output ready_in_0,
    output valid_out_0,
    input ready_out_0
);
assign ready_in_0 = 1'b1 & ready_out_0;
assign valid_out_0 = valid_in_0;
endmodule

module flow_ctrl__U128 (
    input valid_in_0,
    output ready_in_0,
    output valid_out_0,
    input ready_out_0
);
assign ready_in_0 = 1'b1 & ready_out_0;
assign valid_out_0 = valid_in_0;
endmodule

module flow_ctrl__U0 (
    input valid_in_0,
    output ready_in_0,
    output valid_out_0,
    input ready_out_0
);
assign ready_in_0 = 1'b1 & ready_out_0;
assign valid_out_0 = valid_in_0;
endmodule

module cu_op_hcompute_hw_input_global_wrapper_stencil (
    input clk,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_ready,
    input hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid,
    output [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0],
    input hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ready,
    output hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_valid
);
wire [15:0] inner_compute_out_hw_input_global_wrapper_stencil;
wire [15:0] inner_compute_in0_hw_input_stencil [0:0];
assign inner_compute_in0_hw_input_stencil[0] = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
hcompute_hw_input_global_wrapper_stencil inner_compute (
    .out_hw_input_global_wrapper_stencil(inner_compute_out_hw_input_global_wrapper_stencil),
    .in0_hw_input_stencil(inner_compute_in0_hw_input_stencil)
);
flow_ctrl__U0 op_hcompute_hw_input_global_wrapper_stencil_flow_ctrl (
    .valid_in_0(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid),
    .ready_in_0(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_ready),
    .valid_out_0(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_valid),
    .ready_out_0(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ready)
);
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = inner_compute_out_hw_input_global_wrapper_stencil;
endmodule

module aff__U71 (
    input clk,
    input [15:0] d [2:0],
    output [15:0] out
);
wire [15:0] coeff_U73_out;
wire [15:0] coeff_U76_out;
wire [15:0] coeff_U79_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U73 (
    .in(16'h0000),
    .clk(clk),
    .out(coeff_U73_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U76 (
    .in(16'h0040),
    .clk(clk),
    .out(coeff_U76_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U79 (
    .in(16'h0001),
    .clk(clk),
    .out(coeff_U79_out)
);
assign out = 16'((16'((16'((16'(coeff_U73_out * d[0])) + (16'(coeff_U76_out * d[1])))) + (16'(coeff_U79_out * d[2])))) + 16'h0085);
endmodule

module affine_controller__U70 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U88_out;
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
aff__U71 affine_func (
    .clk(clk),
    .d(affine_func_d),
    .out(affine_func_out)
);
assign and_all__U88_out = cmp_time_out & ready;
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
    .en(and_all__U88_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U88_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U88_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U88_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U42 (
    input clk,
    input [15:0] d [2:0],
    output [15:0] out
);
wire [15:0] coeff_U44_out;
wire [15:0] coeff_U47_out;
wire [15:0] coeff_U50_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U44 (
    .in(16'h0000),
    .clk(clk),
    .out(coeff_U44_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U47 (
    .in(16'h0040),
    .clk(clk),
    .out(coeff_U47_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U50 (
    .in(16'h0001),
    .clk(clk),
    .out(coeff_U50_out)
);
assign out = 16'((16'((16'((16'(coeff_U44_out * d[0])) + (16'(coeff_U47_out * d[1])))) + (16'(coeff_U50_out * d[2])))) + 16'h0084);
endmodule

module affine_controller__U41 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U59_out;
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
aff__U42 affine_func (
    .clk(clk),
    .d(affine_func_d),
    .out(affine_func_out)
);
assign and_all__U59_out = cmp_time_out & ready;
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
    .en(and_all__U59_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U59_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U59_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U59_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U355 (
    input clk,
    input [15:0] d [2:0],
    output [15:0] out
);
wire [15:0] coeff_U357_out;
wire [15:0] coeff_U360_out;
wire [15:0] coeff_U363_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U357 (
    .in(16'h0000),
    .clk(clk),
    .out(coeff_U357_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U360 (
    .in(16'h0040),
    .clk(clk),
    .out(coeff_U360_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U363 (
    .in(16'h0001),
    .clk(clk),
    .out(coeff_U363_out)
);
assign out = 16'((16'((16'((16'(coeff_U357_out * d[0])) + (16'(coeff_U360_out * d[1])))) + (16'(coeff_U363_out * d[2])))) + 16'h0000);
endmodule

module aff__U333 (
    input clk,
    input [15:0] d [2:0],
    output [15:0] out
);
wire [15:0] coeff_U335_out;
wire [15:0] coeff_U338_out;
wire [15:0] coeff_U341_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U335 (
    .in(16'h0000),
    .clk(clk),
    .out(coeff_U335_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U338 (
    .in(16'h0040),
    .clk(clk),
    .out(coeff_U338_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U341 (
    .in(16'h0001),
    .clk(clk),
    .out(coeff_U341_out)
);
assign out = 16'((16'((16'((16'(coeff_U335_out * d[0])) + (16'(coeff_U338_out * d[1])))) + (16'(coeff_U341_out * d[2])))) + 16'h0002);
endmodule

module affine_controller__U332 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U350_out;
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
aff__U333 affine_func (
    .clk(clk),
    .d(affine_func_d),
    .out(affine_func_out)
);
assign and_all__U350_out = cmp_time_out & ready;
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
    .en(and_all__U350_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U350_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U350_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U350_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U312 (
    input clk,
    input [15:0] d [2:0],
    output [15:0] out
);
wire [15:0] coeff_U314_out;
wire [15:0] coeff_U317_out;
wire [15:0] coeff_U320_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U314 (
    .in(16'h0000),
    .clk(clk),
    .out(coeff_U314_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U317 (
    .in(16'h0040),
    .clk(clk),
    .out(coeff_U317_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U320 (
    .in(16'h0001),
    .clk(clk),
    .out(coeff_U320_out)
);
assign out = 16'((16'((16'((16'(coeff_U314_out * d[0])) + (16'(coeff_U317_out * d[1])))) + (16'(coeff_U320_out * d[2])))) + 16'h0080);
endmodule

module aff__U290 (
    input clk,
    input [15:0] d [2:0],
    output [15:0] out
);
wire [15:0] coeff_U292_out;
wire [15:0] coeff_U295_out;
wire [15:0] coeff_U298_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U292 (
    .in(16'h0000),
    .clk(clk),
    .out(coeff_U292_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U295 (
    .in(16'h0040),
    .clk(clk),
    .out(coeff_U295_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U298 (
    .in(16'h0001),
    .clk(clk),
    .out(coeff_U298_out)
);
assign out = 16'((16'((16'((16'(coeff_U292_out * d[0])) + (16'(coeff_U295_out * d[1])))) + (16'(coeff_U298_out * d[2])))) + 16'h0002);
endmodule

module affine_controller__U289 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U307_out;
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
aff__U290 affine_func (
    .clk(clk),
    .d(affine_func_d),
    .out(affine_func_out)
);
assign and_all__U307_out = cmp_time_out & ready;
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
    .en(and_all__U307_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U307_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U307_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U307_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U269 (
    input clk,
    input [15:0] d [2:0],
    output [15:0] out
);
wire [15:0] coeff_U271_out;
wire [15:0] coeff_U274_out;
wire [15:0] coeff_U277_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U271 (
    .in(16'h0000),
    .clk(clk),
    .out(coeff_U271_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U274 (
    .in(16'h0040),
    .clk(clk),
    .out(coeff_U274_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U277 (
    .in(16'h0001),
    .clk(clk),
    .out(coeff_U277_out)
);
assign out = 16'((16'((16'((16'(coeff_U271_out * d[0])) + (16'(coeff_U274_out * d[1])))) + (16'(coeff_U277_out * d[2])))) + 16'h0040);
endmodule

module aff__U247 (
    input clk,
    input [15:0] d [2:0],
    output [15:0] out
);
wire [15:0] coeff_U249_out;
wire [15:0] coeff_U252_out;
wire [15:0] coeff_U255_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U249 (
    .in(16'h0000),
    .clk(clk),
    .out(coeff_U249_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U252 (
    .in(16'h0040),
    .clk(clk),
    .out(coeff_U252_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U255 (
    .in(16'h0001),
    .clk(clk),
    .out(coeff_U255_out)
);
assign out = 16'((16'((16'((16'(coeff_U249_out * d[0])) + (16'(coeff_U252_out * d[1])))) + (16'(coeff_U255_out * d[2])))) + 16'h0002);
endmodule

module affine_controller__U246 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U264_out;
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
aff__U247 affine_func (
    .clk(clk),
    .d(affine_func_d),
    .out(affine_func_out)
);
assign and_all__U264_out = cmp_time_out & ready;
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
    .en(and_all__U264_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U264_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U264_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U264_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module hw_input_global_wrapper_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_conv_stencil_1_read_ren,
    input [15:0] op_hcompute_conv_stencil_1_read_ctrl_vars [2:0],
    output op_hcompute_conv_stencil_1_read_rready,
    input op_hcompute_conv_stencil_1_read_data_ready,
    output op_hcompute_conv_stencil_1_read_data_valid,
    output [15:0] op_hcompute_conv_stencil_1_read [8:0],
    input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0],
    output op_hcompute_hw_input_global_wrapper_stencil_write_data_ready,
    input op_hcompute_hw_input_global_wrapper_stencil_write_data_valid
);
wire and_all__U287_out;
wire and_all__U330_out;
wire and_all__U373_out;
wire ctrl__U268_valid;
wire [15:0] ctrl__U268_d [2:0];
wire ctrl__U311_valid;
wire [15:0] ctrl__U311_d [2:0];
wire ctrl__U354_valid;
wire [15:0] ctrl__U354_d [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_10_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_10_ready_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_10_valid_net;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_ready_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_ready_in;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_out_data [2:0];
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_valid_out;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_ready_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_valid_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_valid_net;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_12_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_12_ready_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_12_valid_net;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_ready_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_ready_in;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_out_data [2:0];
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_valid_out;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_ready_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_valid_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_valid_net;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_14_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_14_ready_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_14_valid_net;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_6_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_6_ready_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_6_valid_net;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_7_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_7_ready_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_7_valid_net;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_ready_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_ready_in;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_out_data [2:0];
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_valid_out;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_ready_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_valid_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_valid_net;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_9_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_9_ready_net;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_9_valid_net;
wire [15:0] inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U283_out;
wire [15:0] inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U326_out;
wire [15:0] inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U369_out;
wire op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_0;
wire op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_1;
wire op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_2;
wire op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_3;
wire op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_4;
wire op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_5;
wire op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_6;
wire op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_7;
wire op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_8;
wire [15:0] row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_read_data;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_read_data_valid;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_read_idx_ready;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_update_data_ready;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_update_idx_ready;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_push_data_ready;
wire [15:0] row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_read_data;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_read_data_valid;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_read_idx_ready;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_update_data_ready;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_update_idx_ready;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_push_data_ready;
wire [15:0] row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_data;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_data_valid;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_idx_ready;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_update_data_ready;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_update_idx_ready;
wire row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_push_data_ready;
assign and_all__U287_out = (hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_9_ready_net & hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_ready_net) & hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_10_ready_net;
assign and_all__U330_out = (hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_ready_net & hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_12_ready_net) & hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_14_ready_net;
assign and_all__U373_out = (hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_6_ready_net & hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_ready_net) & hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_7_ready_net;
affine_controller__U246 ctrl__U268 (
    .clk(clk),
    .valid(ctrl__U268_valid),
    .d(ctrl__U268_d),
    .ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_read_idx_ready)
);
affine_controller__U289 ctrl__U311 (
    .clk(clk),
    .valid(ctrl__U311_valid),
    .d(ctrl__U311_d),
    .ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_read_idx_ready)
);
affine_controller__U332 ctrl__U354 (
    .clk(clk),
    .valid(ctrl__U354_valid),
    .d(ctrl__U354_d),
    .ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_idx_ready)
);
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_10_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_out_data[1];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_10_ready_net = op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_4;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_10_valid_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_valid_out;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_out_data[0];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_ready_net = op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_5;
cgralib_SIPO_reg__ID_U285__data_width16__depth2 hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr (
    .rst_n(rst_n),
    .clk(clk),
    .in_data(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_net),
    .valid_in(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_valid_net),
    .ready_in(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_ready_in),
    .out_data(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_out_data),
    .valid_out(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_valid_out),
    .ready_out(and_all__U287_out)
);
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_net = row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_read_data;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_ready_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_ready_in;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_valid_net = row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_read_data_valid;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_valid_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_valid_out;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_12_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_out_data[2];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_12_ready_net = op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_6;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_12_valid_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_valid_out;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_out_data[0];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_ready_net = op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_7;
cgralib_SIPO_reg__ID_U328__data_width16__depth2 hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr (
    .rst_n(rst_n),
    .clk(clk),
    .in_data(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_net),
    .valid_in(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_valid_net),
    .ready_in(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_ready_in),
    .out_data(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_out_data),
    .valid_out(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_valid_out),
    .ready_out(and_all__U330_out)
);
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_net = row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_read_data;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_ready_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_ready_in;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_valid_net = row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_read_data_valid;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_valid_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_valid_out;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_14_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_out_data[1];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_14_ready_net = op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_8;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_14_valid_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_valid_out;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_6_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_out_data[2];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_6_ready_net = op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_0;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_6_valid_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_valid_out;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_7_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_out_data[1];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_7_ready_net = op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_1;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_7_valid_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_valid_out;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_out_data[0];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_ready_net = op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_2;
cgralib_SIPO_reg__ID_U371__data_width16__depth2 hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr (
    .rst_n(rst_n),
    .clk(clk),
    .in_data(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_net),
    .valid_in(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_valid_net),
    .ready_in(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_ready_in),
    .out_data(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_out_data),
    .valid_out(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_valid_out),
    .ready_out(and_all__U373_out)
);
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_net = row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_data;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_ready_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_ready_in;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_valid_net = row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_data_valid;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_valid_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_valid_out;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_9_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_out_data[2];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_9_ready_net = op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_3;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_9_valid_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_valid_out;
wire [15:0] inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U283_d [2:0];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U283_d[2] = ctrl__U268_d[2];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U283_d[1] = ctrl__U268_d[1];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U283_d[0] = ctrl__U268_d[0];
aff__U269 inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U283 (
    .clk(clk),
    .d(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U283_d),
    .out(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U283_out)
);
wire [15:0] inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U326_d [2:0];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U326_d[2] = ctrl__U311_d[2];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U326_d[1] = ctrl__U311_d[1];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U326_d[0] = ctrl__U311_d[0];
aff__U312 inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U326 (
    .clk(clk),
    .d(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U326_d),
    .out(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U326_out)
);
wire [15:0] inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U369_d [2:0];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U369_d[2] = ctrl__U354_d[2];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U369_d[1] = ctrl__U354_d[1];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U369_d[0] = ctrl__U354_d[0];
aff__U355 inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U369 (
    .clk(clk),
    .d(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U369_d),
    .out(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U369_out)
);
flow_ctrl__U164 op_hcompute_conv_stencil_1_read_flow_ctrl (
    .valid_in_0(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_6_valid_net),
    .ready_in_0(op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_0),
    .valid_in_1(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_7_valid_net),
    .ready_in_1(op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_1),
    .valid_in_2(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_valid_net),
    .ready_in_2(op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_2),
    .valid_in_3(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_9_valid_net),
    .ready_in_3(op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_3),
    .valid_in_4(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_10_valid_net),
    .ready_in_4(op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_4),
    .valid_in_5(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_valid_net),
    .ready_in_5(op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_5),
    .valid_in_6(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_12_valid_net),
    .ready_in_6(op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_6),
    .valid_in_7(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_valid_net),
    .ready_in_7(op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_7),
    .valid_in_8(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_14_valid_net),
    .ready_in_8(op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_8),
    .valid_out_0(op_hcompute_conv_stencil_1_read_data_valid),
    .ready_out_0(op_hcompute_conv_stencil_1_read_data_ready)
);
cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U245__data_width16__idx_width16 row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11 (
    .nreset_i(rst_n),
    .clk(clk),
    .read_data(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_read_data),
    .read_data_valid(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_read_data_valid),
    .read_data_ready(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_ready_net),
    .read_idx(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U283_out),
    .read_idx_valid(ctrl__U268_valid),
    .read_idx_ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_read_idx_ready),
    .update_data(16'h0000),
    .update_data_valid(1'b0),
    .update_data_ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_update_data_ready),
    .update_idx(16'h0000),
    .update_idx_valid(1'b0),
    .update_idx_ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_update_idx_ready),
    .read_will_update(1'b0),
    .push_data(op_hcompute_hw_input_global_wrapper_stencil_write[0]),
    .push_data_valid(op_hcompute_hw_input_global_wrapper_stencil_write_data_valid),
    .push_data_ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_push_data_ready)
);
cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U288__data_width16__idx_width16 row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13 (
    .nreset_i(rst_n),
    .clk(clk),
    .read_data(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_read_data),
    .read_data_valid(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_read_data_valid),
    .read_data_ready(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_ready_net),
    .read_idx(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U326_out),
    .read_idx_valid(ctrl__U311_valid),
    .read_idx_ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_read_idx_ready),
    .update_data(16'h0000),
    .update_data_valid(1'b0),
    .update_data_ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_update_data_ready),
    .update_idx(16'h0000),
    .update_idx_valid(1'b0),
    .update_idx_ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_update_idx_ready),
    .read_will_update(1'b0),
    .push_data(op_hcompute_hw_input_global_wrapper_stencil_write[0]),
    .push_data_valid(op_hcompute_hw_input_global_wrapper_stencil_write_data_valid),
    .push_data_ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_push_data_ready)
);
cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U331__data_width16__idx_width16 row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8 (
    .nreset_i(rst_n),
    .clk(clk),
    .read_data(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_data),
    .read_data_valid(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_data_valid),
    .read_data_ready(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_ready_net),
    .read_idx(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U369_out),
    .read_idx_valid(ctrl__U354_valid),
    .read_idx_ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_idx_ready),
    .update_data(16'h0000),
    .update_data_valid(1'b0),
    .update_data_ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_update_data_ready),
    .update_idx(16'h0000),
    .update_idx_valid(1'b0),
    .update_idx_ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_update_idx_ready),
    .read_will_update(1'b0),
    .push_data(op_hcompute_hw_input_global_wrapper_stencil_write[0]),
    .push_data_valid(op_hcompute_hw_input_global_wrapper_stencil_write_data_valid),
    .push_data_ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_push_data_ready)
);
assign op_hcompute_conv_stencil_1_read_rready = 1'b1;
assign op_hcompute_conv_stencil_1_read[8] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_14_net;
assign op_hcompute_conv_stencil_1_read[7] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_net;
assign op_hcompute_conv_stencil_1_read[6] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_12_net;
assign op_hcompute_conv_stencil_1_read[5] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_net;
assign op_hcompute_conv_stencil_1_read[4] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_10_net;
assign op_hcompute_conv_stencil_1_read[3] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_9_net;
assign op_hcompute_conv_stencil_1_read[2] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_net;
assign op_hcompute_conv_stencil_1_read[1] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_7_net;
assign op_hcompute_conv_stencil_1_read[0] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_6_net;
assign op_hcompute_hw_input_global_wrapper_stencil_write_data_ready = (row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_push_data_ready & row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_push_data_ready) & row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_push_data_ready;
endmodule

module aff__U149 (
    input clk,
    input [15:0] d [2:0],
    output [15:0] out
);
wire [15:0] coeff_U151_out;
wire [15:0] coeff_U154_out;
wire [15:0] coeff_U157_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U151 (
    .in(16'h0000),
    .clk(clk),
    .out(coeff_U151_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U154 (
    .in(16'h003e),
    .clk(clk),
    .out(coeff_U154_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U157 (
    .in(16'h0001),
    .clk(clk),
    .out(coeff_U157_out)
);
assign out = 16'((16'((16'((16'(coeff_U151_out * d[0])) + (16'(coeff_U154_out * d[1])))) + (16'(coeff_U157_out * d[2])))) + 16'h0000);
endmodule

module conv_stencil_clkwrk_dsa0_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_conv_stencil_1_read_ren,
    input [15:0] op_hcompute_conv_stencil_1_read_ctrl_vars [2:0],
    output op_hcompute_conv_stencil_1_read_rready,
    input op_hcompute_conv_stencil_1_read_data_ready,
    output op_hcompute_conv_stencil_1_read_data_valid,
    output [15:0] op_hcompute_conv_stencil_1_read [0:0],
    input op_hcompute_conv_stencil_write_wen,
    input [15:0] op_hcompute_conv_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_conv_stencil_write [0:0],
    output op_hcompute_conv_stencil_write_data_ready,
    input op_hcompute_conv_stencil_write_data_valid
);
wire [15:0] bank_0_read_data;
wire bank_0_read_data_valid;
wire bank_0_update_data_ready;
wire bank_0_update_idx_ready;
wire conv_stencil_clkwrk_dsa0_Bank0_read_ctrl_fork_valid_out_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5;
wire conv_stencil_clkwrk_dsa0_Bank0_read_ctrl_fork_ready_out;
wire [15:0] conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_net;
wire conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_ready_net;
wire conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_valid_net;
wire [15:0] inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U163_out;
wire op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_0;
cgralib_Buffet__IDconv_stencil_clkwrk_dsa0_0__data_width16__idx_width16 bank_0 (
    .nreset_i(rst_n),
    .clk(clk),
    .read_data(bank_0_read_data),
    .read_data_valid(bank_0_read_data_valid),
    .read_data_ready(conv_stencil_clkwrk_dsa0_Bank0_read_ctrl_fork_ready_out),
    .read_idx(inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U163_out),
    .read_idx_valid(op_hcompute_conv_stencil_1_read_ren),
    .read_idx_ready(op_hcompute_conv_stencil_1_read_rready),
    .update_data(op_hcompute_conv_stencil_write[0]),
    .update_data_valid(1'b0),
    .update_data_ready(bank_0_update_data_ready),
    .update_idx(inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U163_out),
    .update_idx_valid(op_hcompute_conv_stencil_1_read_ren),
    .update_idx_ready(bank_0_update_idx_ready),
    .read_will_update(1'b0),
    .push_data(op_hcompute_conv_stencil_write[0]),
    .push_data_valid(op_hcompute_conv_stencil_write_wen),
    .push_data_ready(op_hcompute_conv_stencil_write_data_ready)
);
update_drain_fork_mod_conv_stencil_clkwrk_dsa0_BANK_0 conv_stencil_clkwrk_dsa0_Bank0_read_ctrl_fork (
    .ready_in_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_ready_net),
    .valid_out_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5(conv_stencil_clkwrk_dsa0_Bank0_read_ctrl_fork_valid_out_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5),
    .valid_in(bank_0_read_data_valid),
    .ready_out(conv_stencil_clkwrk_dsa0_Bank0_read_ctrl_fork_ready_out),
    .rst_n(rst_n)
);
assign conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_net = bank_0_read_data;
assign conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_ready_net = op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_0;
assign conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_valid_net = conv_stencil_clkwrk_dsa0_Bank0_read_ctrl_fork_valid_out_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5;
wire [15:0] inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U163_d [2:0];
assign inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U163_d[2] = op_hcompute_conv_stencil_1_read_ctrl_vars[2];
assign inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U163_d[1] = op_hcompute_conv_stencil_1_read_ctrl_vars[1];
assign inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U163_d[0] = op_hcompute_conv_stencil_1_read_ctrl_vars[0];
aff__U149 inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U163 (
    .clk(clk),
    .d(inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U163_d),
    .out(inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U163_out)
);
flow_ctrl__U146 op_hcompute_conv_stencil_1_read_flow_ctrl (
    .valid_in_0(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_valid_net),
    .ready_in_0(op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_0),
    .valid_out_0(op_hcompute_conv_stencil_1_read_data_valid),
    .ready_out_0(op_hcompute_conv_stencil_1_read_data_ready)
);
assign op_hcompute_conv_stencil_1_read[0] = conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_net;
endmodule

module aff__U131 (
    input clk,
    input [15:0] d [2:0],
    output [15:0] out
);
wire [15:0] coeff_U133_out;
wire [15:0] coeff_U136_out;
wire [15:0] coeff_U139_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U133 (
    .in(16'h0000),
    .clk(clk),
    .out(coeff_U133_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U136 (
    .in(16'h003e),
    .clk(clk),
    .out(coeff_U136_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U139 (
    .in(16'h0001),
    .clk(clk),
    .out(coeff_U139_out)
);
assign out = 16'((16'((16'((16'(coeff_U133_out * d[0])) + (16'(coeff_U136_out * d[1])))) + (16'(coeff_U139_out * d[2])))) + 16'h0000);
endmodule

module conv_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_conv_stencil_1_write_wen,
    input [15:0] op_hcompute_conv_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_conv_stencil_1_write [0:0],
    output op_hcompute_conv_stencil_1_write_data_ready,
    input op_hcompute_conv_stencil_1_write_data_valid,
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0],
    output op_hcompute_hw_output_stencil_read_rready,
    input op_hcompute_hw_output_stencil_read_data_ready,
    output op_hcompute_hw_output_stencil_read_data_valid,
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
wire [15:0] bank_0_read_data;
wire bank_0_read_data_valid;
wire bank_0_update_data_ready;
wire bank_0_update_idx_ready;
wire conv_stencil_Bank0_read_ctrl_fork_valid_out_conv_stencil_op_hcompute_hw_output_stencil_1;
wire conv_stencil_Bank0_read_ctrl_fork_ready_out;
wire [15:0] conv_stencil_op_hcompute_hw_output_stencil_1_net;
wire conv_stencil_op_hcompute_hw_output_stencil_1_ready_net;
wire conv_stencil_op_hcompute_hw_output_stencil_1_valid_net;
wire [15:0] inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U145_out;
wire op_hcompute_hw_output_stencil_read_flow_ctrl_ready_in_0;
cgralib_Buffet__IDconv_stencil_0__data_width16__idx_width16 bank_0 (
    .nreset_i(rst_n),
    .clk(clk),
    .read_data(bank_0_read_data),
    .read_data_valid(bank_0_read_data_valid),
    .read_data_ready(conv_stencil_Bank0_read_ctrl_fork_ready_out),
    .read_idx(inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U145_out),
    .read_idx_valid(op_hcompute_hw_output_stencil_read_ren),
    .read_idx_ready(op_hcompute_hw_output_stencil_read_rready),
    .update_data(op_hcompute_conv_stencil_1_write[0]),
    .update_data_valid(1'b0),
    .update_data_ready(bank_0_update_data_ready),
    .update_idx(inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U145_out),
    .update_idx_valid(op_hcompute_hw_output_stencil_read_ren),
    .update_idx_ready(bank_0_update_idx_ready),
    .read_will_update(1'b0),
    .push_data(op_hcompute_conv_stencil_1_write[0]),
    .push_data_valid(op_hcompute_conv_stencil_1_write_data_valid),
    .push_data_ready(op_hcompute_conv_stencil_1_write_data_ready)
);
update_drain_fork_mod_conv_stencil_BANK_0 conv_stencil_Bank0_read_ctrl_fork (
    .ready_in_conv_stencil_op_hcompute_hw_output_stencil_1(conv_stencil_op_hcompute_hw_output_stencil_1_ready_net),
    .valid_out_conv_stencil_op_hcompute_hw_output_stencil_1(conv_stencil_Bank0_read_ctrl_fork_valid_out_conv_stencil_op_hcompute_hw_output_stencil_1),
    .valid_in(bank_0_read_data_valid),
    .ready_out(conv_stencil_Bank0_read_ctrl_fork_ready_out),
    .rst_n(rst_n)
);
assign conv_stencil_op_hcompute_hw_output_stencil_1_net = bank_0_read_data;
assign conv_stencil_op_hcompute_hw_output_stencil_1_ready_net = op_hcompute_hw_output_stencil_read_flow_ctrl_ready_in_0;
assign conv_stencil_op_hcompute_hw_output_stencil_1_valid_net = conv_stencil_Bank0_read_ctrl_fork_valid_out_conv_stencil_op_hcompute_hw_output_stencil_1;
wire [15:0] inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U145_d [2:0];
assign inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U145_d[2] = op_hcompute_hw_output_stencil_read_ctrl_vars[2];
assign inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U145_d[1] = op_hcompute_hw_output_stencil_read_ctrl_vars[1];
assign inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U145_d[0] = op_hcompute_hw_output_stencil_read_ctrl_vars[0];
aff__U131 inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U145 (
    .clk(clk),
    .d(inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U145_d),
    .out(inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U145_out)
);
flow_ctrl__U128 op_hcompute_hw_output_stencil_read_flow_ctrl (
    .valid_in_0(conv_stencil_op_hcompute_hw_output_stencil_1_valid_net),
    .ready_in_0(op_hcompute_hw_output_stencil_read_flow_ctrl_ready_in_0),
    .valid_out_0(op_hcompute_hw_output_stencil_read_data_valid),
    .ready_out_0(op_hcompute_hw_output_stencil_read_data_ready)
);
assign op_hcompute_hw_output_stencil_read[0] = conv_stencil_op_hcompute_hw_output_stencil_1_net;
endmodule

module aff__U13 (
    input clk,
    input [15:0] d [2:0],
    output [15:0] out
);
wire [15:0] coeff_U15_out;
wire [15:0] coeff_U18_out;
wire [15:0] coeff_U21_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U15 (
    .in(16'h0000),
    .clk(clk),
    .out(coeff_U15_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U18 (
    .in(16'h0040),
    .clk(clk),
    .out(coeff_U18_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U21 (
    .in(16'h0001),
    .clk(clk),
    .out(coeff_U21_out)
);
assign out = 16'((16'((16'((16'(coeff_U15_out * d[0])) + (16'(coeff_U18_out * d[1])))) + (16'(coeff_U21_out * d[2])))) + 16'h0002);
endmodule

module affine_controller__U12 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U30_out;
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
aff__U13 affine_func (
    .clk(clk),
    .d(affine_func_d),
    .out(affine_func_out)
);
assign and_all__U30_out = cmp_time_out & ready;
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
    .en(and_all__U30_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U30_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U30_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U30_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U100 (
    input clk,
    input [15:0] d [2:0],
    output [15:0] out
);
wire [15:0] coeff_U102_out;
wire [15:0] coeff_U105_out;
wire [15:0] coeff_U108_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U102 (
    .in(16'h0000),
    .clk(clk),
    .out(coeff_U102_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U105 (
    .in(16'h0040),
    .clk(clk),
    .out(coeff_U105_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) coeff_U108 (
    .in(16'h0001),
    .clk(clk),
    .out(coeff_U108_out)
);
assign out = 16'((16'((16'((16'(coeff_U102_out * d[0])) + (16'(coeff_U105_out * d[1])))) + (16'(coeff_U108_out * d[2])))) + 16'h0086);
endmodule

module affine_controller__U99 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U117_out;
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
aff__U100 affine_func (
    .clk(clk),
    .d(affine_func_d),
    .out(affine_func_out)
);
assign and_all__U117_out = cmp_time_out & ready;
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
    .en(and_all__U117_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U117_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U117_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U117_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module conv_3_3_buffet (
    input clk,
    input rst_n,
    input flush,
    output hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    input hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid,
    output hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_ready,
    input hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en_ready,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_valid,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    input hw_output_stencil_op_hcompute_hw_output_stencil_write_ready
);
wire conv_stencil_op_hcompute_conv_stencil_1_write_data_ready;
wire conv_stencil_op_hcompute_hw_output_stencil_read_rready;
wire conv_stencil_op_hcompute_hw_output_stencil_read_data_valid;
wire [15:0] conv_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_rready;
wire conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_data_valid;
wire [15:0] conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read [0:0];
wire conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_data_ready;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_rready;
wire hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_data_valid;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read [8:0];
wire hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_data_ready;
wire [15:0] op_hcompute_conv_stencil_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write [0:0];
wire op_hcompute_conv_stencil_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_valid;
wire op_hcompute_conv_stencil_1_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_ready;
wire op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_ready;
wire [15:0] op_hcompute_conv_stencil_1_conv_stencil_op_hcompute_conv_stencil_1_write [0:0];
wire op_hcompute_conv_stencil_1_conv_stencil_op_hcompute_conv_stencil_1_write_valid;
wire op_hcompute_conv_stencil_1_exe_start_out;
wire [15:0] op_hcompute_conv_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_conv_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_conv_stencil_1_port_controller_d [2:0];
wire op_hcompute_conv_stencil_1_read_ready_in;
wire op_hcompute_conv_stencil_1_read_start_out;
wire [15:0] op_hcompute_conv_stencil_1_read_start_control_vars_out [2:0];
wire op_hcompute_conv_stencil_1_ready_join_ready_out;
wire op_hcompute_conv_stencil_1_write_start_out;
wire [15:0] op_hcompute_conv_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_conv_stencil_exe_start_out;
wire [15:0] op_hcompute_conv_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_conv_stencil_port_controller_valid;
wire [15:0] op_hcompute_conv_stencil_port_controller_d [2:0];
wire op_hcompute_conv_stencil_read_ready_in;
wire op_hcompute_conv_stencil_read_start_out;
wire [15:0] op_hcompute_conv_stencil_read_start_control_vars_out [2:0];
wire op_hcompute_conv_stencil_ready_join_ready_out;
wire op_hcompute_conv_stencil_write_start_out;
wire [15:0] op_hcompute_conv_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_valid;
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_read_ready_in;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_out [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_ready_join_ready_out;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start_out;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_conv_stencil_op_hcompute_hw_output_stencil_read_ready;
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_read_ready_in;
wire op_hcompute_hw_output_stencil_read_start_out;
wire [15:0] op_hcompute_hw_output_stencil_read_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_ready_join_ready_out;
wire op_hcompute_hw_output_stencil_write_start_out;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
wire [15:0] conv_stencil_op_hcompute_conv_stencil_1_write_ctrl_vars [2:0];
assign conv_stencil_op_hcompute_conv_stencil_1_write_ctrl_vars[2] = op_hcompute_conv_stencil_1_write_start_control_vars_out[2];
assign conv_stencil_op_hcompute_conv_stencil_1_write_ctrl_vars[1] = op_hcompute_conv_stencil_1_write_start_control_vars_out[1];
assign conv_stencil_op_hcompute_conv_stencil_1_write_ctrl_vars[0] = op_hcompute_conv_stencil_1_write_start_control_vars_out[0];
wire [15:0] conv_stencil_op_hcompute_conv_stencil_1_write [0:0];
assign conv_stencil_op_hcompute_conv_stencil_1_write[0] = op_hcompute_conv_stencil_1_conv_stencil_op_hcompute_conv_stencil_1_write[0];
wire [15:0] conv_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
assign conv_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign conv_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign conv_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
conv_stencil_ub conv_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_conv_stencil_1_write_wen(op_hcompute_conv_stencil_1_write_start_out),
    .op_hcompute_conv_stencil_1_write_ctrl_vars(conv_stencil_op_hcompute_conv_stencil_1_write_ctrl_vars),
    .op_hcompute_conv_stencil_1_write(conv_stencil_op_hcompute_conv_stencil_1_write),
    .op_hcompute_conv_stencil_1_write_data_ready(conv_stencil_op_hcompute_conv_stencil_1_write_data_ready),
    .op_hcompute_conv_stencil_1_write_data_valid(op_hcompute_conv_stencil_1_conv_stencil_op_hcompute_conv_stencil_1_write_valid),
    .op_hcompute_hw_output_stencil_read_ren(op_hcompute_hw_output_stencil_read_start_out),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(conv_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read_rready(conv_stencil_op_hcompute_hw_output_stencil_read_rready),
    .op_hcompute_hw_output_stencil_read_data_ready(op_hcompute_hw_output_stencil_conv_stencil_op_hcompute_hw_output_stencil_read_ready),
    .op_hcompute_hw_output_stencil_read_data_valid(conv_stencil_op_hcompute_hw_output_stencil_read_data_valid),
    .op_hcompute_hw_output_stencil_read(conv_stencil_op_hcompute_hw_output_stencil_read)
);
wire [15:0] conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_ctrl_vars [2:0];
assign conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_ctrl_vars[2] = op_hcompute_conv_stencil_1_port_controller_d[2];
assign conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_ctrl_vars[1] = op_hcompute_conv_stencil_1_port_controller_d[1];
assign conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_ctrl_vars[0] = op_hcompute_conv_stencil_1_port_controller_d[0];
wire [15:0] conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_ctrl_vars [2:0];
assign conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_ctrl_vars[2] = op_hcompute_conv_stencil_write_start_control_vars_out[2];
assign conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_ctrl_vars[1] = op_hcompute_conv_stencil_write_start_control_vars_out[1];
assign conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_ctrl_vars[0] = op_hcompute_conv_stencil_write_start_control_vars_out[0];
wire [15:0] conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write [0:0];
assign conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write[0] = op_hcompute_conv_stencil_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write[0];
conv_stencil_clkwrk_dsa0_ub conv_stencil_clkwrk_dsa0 (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_conv_stencil_1_read_ren(op_hcompute_conv_stencil_1_read_start_out),
    .op_hcompute_conv_stencil_1_read_ctrl_vars(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_ctrl_vars),
    .op_hcompute_conv_stencil_1_read_rready(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_rready),
    .op_hcompute_conv_stencil_1_read_data_ready(op_hcompute_conv_stencil_1_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_ready),
    .op_hcompute_conv_stencil_1_read_data_valid(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_data_valid),
    .op_hcompute_conv_stencil_1_read(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read),
    .op_hcompute_conv_stencil_write_wen(op_hcompute_conv_stencil_write_start_out),
    .op_hcompute_conv_stencil_write_ctrl_vars(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_ctrl_vars),
    .op_hcompute_conv_stencil_write(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write),
    .op_hcompute_conv_stencil_write_data_ready(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_data_ready),
    .op_hcompute_conv_stencil_write_data_valid(op_hcompute_conv_stencil_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_valid)
);
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_ctrl_vars [2:0];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_ctrl_vars[2] = op_hcompute_conv_stencil_1_port_controller_d[2];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_ctrl_vars[1] = op_hcompute_conv_stencil_1_port_controller_d[1];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_ctrl_vars[0] = op_hcompute_conv_stencil_1_port_controller_d[0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[2];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[1];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0];
hw_input_global_wrapper_stencil_ub hw_input_global_wrapper_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_conv_stencil_1_read_ren(op_hcompute_conv_stencil_1_read_start_out),
    .op_hcompute_conv_stencil_1_read_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_ctrl_vars),
    .op_hcompute_conv_stencil_1_read_rready(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_rready),
    .op_hcompute_conv_stencil_1_read_data_ready(op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_ready),
    .op_hcompute_conv_stencil_1_read_data_valid(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_data_valid),
    .op_hcompute_conv_stencil_1_read(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read),
    .op_hcompute_hw_input_global_wrapper_stencil_write_wen(op_hcompute_hw_input_global_wrapper_stencil_write_start_out),
    .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_global_wrapper_stencil_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write),
    .op_hcompute_hw_input_global_wrapper_stencil_write_data_ready(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_data_ready),
    .op_hcompute_hw_input_global_wrapper_stencil_write_data_valid(op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_valid)
);
cu_op_hcompute_conv_stencil op_hcompute_conv_stencil (
    .clk(clk),
    .conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write(op_hcompute_conv_stencil_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write),
    .conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_ready(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_data_ready),
    .conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_valid(op_hcompute_conv_stencil_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_valid)
);
wire [15:0] op_hcompute_conv_stencil_1_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read [0:0];
assign op_hcompute_conv_stencil_1_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read[0] = conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read[0];
wire [15:0] op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read [8:0];
assign op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[8] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[8];
assign op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[7] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[7];
assign op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[6] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[6];
assign op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[5] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[5];
assign op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[4] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[4];
assign op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[3] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[3];
assign op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[2] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[2];
assign op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[1] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[1];
assign op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[0] = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read[0];
cu_op_hcompute_conv_stencil_1 op_hcompute_conv_stencil_1 (
    .clk(clk),
    .conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read(op_hcompute_conv_stencil_1_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read),
    .conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_ready(op_hcompute_conv_stencil_1_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_ready),
    .conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_valid(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_data_valid),
    .hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read(op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read),
    .hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_ready(op_hcompute_conv_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_ready),
    .hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_valid(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_data_valid),
    .conv_stencil_op_hcompute_conv_stencil_1_write(op_hcompute_conv_stencil_1_conv_stencil_op_hcompute_conv_stencil_1_write),
    .conv_stencil_op_hcompute_conv_stencil_1_write_ready(conv_stencil_op_hcompute_conv_stencil_1_write_data_ready),
    .conv_stencil_op_hcompute_conv_stencil_1_write_valid(op_hcompute_conv_stencil_1_conv_stencil_op_hcompute_conv_stencil_1_write_valid)
);
op_hcompute_conv_stencil_1_exe_start_pt__U95 op_hcompute_conv_stencil_1_exe_start (
    .in(op_hcompute_conv_stencil_1_port_controller_valid),
    .out(op_hcompute_conv_stencil_1_exe_start_out)
);
wire [15:0] op_hcompute_conv_stencil_1_exe_start_control_vars_in [2:0];
assign op_hcompute_conv_stencil_1_exe_start_control_vars_in[2] = op_hcompute_conv_stencil_1_port_controller_d[2];
assign op_hcompute_conv_stencil_1_exe_start_control_vars_in[1] = op_hcompute_conv_stencil_1_port_controller_d[1];
assign op_hcompute_conv_stencil_1_exe_start_control_vars_in[0] = op_hcompute_conv_stencil_1_port_controller_d[0];
op_hcompute_conv_stencil_1_exe_start_control_vars_pt__U96 op_hcompute_conv_stencil_1_exe_start_control_vars (
    .in(op_hcompute_conv_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_conv_stencil_1_exe_start_control_vars_out)
);
affine_controller__U70 op_hcompute_conv_stencil_1_port_controller (
    .clk(clk),
    .valid(op_hcompute_conv_stencil_1_port_controller_valid),
    .d(op_hcompute_conv_stencil_1_port_controller_d),
    .ready(op_hcompute_conv_stencil_1_read_ready_in)
);
op_hcompute_conv_stencil_1_read_ready_pt__U92 op_hcompute_conv_stencil_1_read_ready (
    .in(op_hcompute_conv_stencil_1_read_ready_in),
    .out(op_hcompute_conv_stencil_1_ready_join_ready_out)
);
op_hcompute_conv_stencil_1_read_start_pt__U93 op_hcompute_conv_stencil_1_read_start (
    .in(op_hcompute_conv_stencil_1_port_controller_valid),
    .out(op_hcompute_conv_stencil_1_read_start_out)
);
wire [15:0] op_hcompute_conv_stencil_1_read_start_control_vars_in [2:0];
assign op_hcompute_conv_stencil_1_read_start_control_vars_in[2] = op_hcompute_conv_stencil_1_port_controller_d[2];
assign op_hcompute_conv_stencil_1_read_start_control_vars_in[1] = op_hcompute_conv_stencil_1_port_controller_d[1];
assign op_hcompute_conv_stencil_1_read_start_control_vars_in[0] = op_hcompute_conv_stencil_1_port_controller_d[0];
op_hcompute_conv_stencil_1_read_start_control_vars_pt__U94 op_hcompute_conv_stencil_1_read_start_control_vars (
    .in(op_hcompute_conv_stencil_1_read_start_control_vars_in),
    .out(op_hcompute_conv_stencil_1_read_start_control_vars_out)
);
ready_and_mod_op_hcompute_conv_stencil_1 op_hcompute_conv_stencil_1_ready_join (
    .ready_in_conv_stencil_clkwrk_dsa0(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_rready),
    .ready_in_hw_input_global_wrapper_stencil(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_rready),
    .ready_out(op_hcompute_conv_stencil_1_ready_join_ready_out)
);
op_hcompute_conv_stencil_1_write_start_pt__U97 op_hcompute_conv_stencil_1_write_start (
    .in(op_hcompute_conv_stencil_1_port_controller_valid),
    .out(op_hcompute_conv_stencil_1_write_start_out)
);
wire [15:0] op_hcompute_conv_stencil_1_write_start_control_vars_in [2:0];
assign op_hcompute_conv_stencil_1_write_start_control_vars_in[2] = op_hcompute_conv_stencil_1_port_controller_d[2];
assign op_hcompute_conv_stencil_1_write_start_control_vars_in[1] = op_hcompute_conv_stencil_1_port_controller_d[1];
assign op_hcompute_conv_stencil_1_write_start_control_vars_in[0] = op_hcompute_conv_stencil_1_port_controller_d[0];
op_hcompute_conv_stencil_1_write_start_control_vars_pt__U98 op_hcompute_conv_stencil_1_write_start_control_vars (
    .in(op_hcompute_conv_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_conv_stencil_1_write_start_control_vars_out)
);
op_hcompute_conv_stencil_exe_start_pt__U66 op_hcompute_conv_stencil_exe_start (
    .in(op_hcompute_conv_stencil_port_controller_valid),
    .out(op_hcompute_conv_stencil_exe_start_out)
);
wire [15:0] op_hcompute_conv_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_conv_stencil_exe_start_control_vars_in[2] = op_hcompute_conv_stencil_port_controller_d[2];
assign op_hcompute_conv_stencil_exe_start_control_vars_in[1] = op_hcompute_conv_stencil_port_controller_d[1];
assign op_hcompute_conv_stencil_exe_start_control_vars_in[0] = op_hcompute_conv_stencil_port_controller_d[0];
op_hcompute_conv_stencil_exe_start_control_vars_pt__U67 op_hcompute_conv_stencil_exe_start_control_vars (
    .in(op_hcompute_conv_stencil_exe_start_control_vars_in),
    .out(op_hcompute_conv_stencil_exe_start_control_vars_out)
);
affine_controller__U41 op_hcompute_conv_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_conv_stencil_port_controller_valid),
    .d(op_hcompute_conv_stencil_port_controller_d),
    .ready(op_hcompute_conv_stencil_read_ready_in)
);
op_hcompute_conv_stencil_read_ready_pt__U63 op_hcompute_conv_stencil_read_ready (
    .in(op_hcompute_conv_stencil_read_ready_in),
    .out(op_hcompute_conv_stencil_ready_join_ready_out)
);
op_hcompute_conv_stencil_read_start_pt__U64 op_hcompute_conv_stencil_read_start (
    .in(op_hcompute_conv_stencil_port_controller_valid),
    .out(op_hcompute_conv_stencil_read_start_out)
);
wire [15:0] op_hcompute_conv_stencil_read_start_control_vars_in [2:0];
assign op_hcompute_conv_stencil_read_start_control_vars_in[2] = op_hcompute_conv_stencil_port_controller_d[2];
assign op_hcompute_conv_stencil_read_start_control_vars_in[1] = op_hcompute_conv_stencil_port_controller_d[1];
assign op_hcompute_conv_stencil_read_start_control_vars_in[0] = op_hcompute_conv_stencil_port_controller_d[0];
op_hcompute_conv_stencil_read_start_control_vars_pt__U65 op_hcompute_conv_stencil_read_start_control_vars (
    .in(op_hcompute_conv_stencil_read_start_control_vars_in),
    .out(op_hcompute_conv_stencil_read_start_control_vars_out)
);
ready_and_mod_op_hcompute_conv_stencil op_hcompute_conv_stencil_ready_join (
    .ready_out(op_hcompute_conv_stencil_ready_join_ready_out)
);
op_hcompute_conv_stencil_write_start_pt__U68 op_hcompute_conv_stencil_write_start (
    .in(op_hcompute_conv_stencil_port_controller_valid),
    .out(op_hcompute_conv_stencil_write_start_out)
);
wire [15:0] op_hcompute_conv_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_conv_stencil_write_start_control_vars_in[2] = op_hcompute_conv_stencil_port_controller_d[2];
assign op_hcompute_conv_stencil_write_start_control_vars_in[1] = op_hcompute_conv_stencil_port_controller_d[1];
assign op_hcompute_conv_stencil_write_start_control_vars_in[0] = op_hcompute_conv_stencil_port_controller_d[0];
op_hcompute_conv_stencil_write_start_control_vars_pt__U69 op_hcompute_conv_stencil_write_start_control_vars (
    .in(op_hcompute_conv_stencil_write_start_control_vars_in),
    .out(op_hcompute_conv_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0];
assign op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
cu_op_hcompute_hw_input_global_wrapper_stencil op_hcompute_hw_input_global_wrapper_stencil (
    .clk(clk),
    .hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read(op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read),
    .hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_ready(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_ready),
    .hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid),
    .hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write(op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write),
    .hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ready(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_data_ready),
    .hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_valid(op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_valid)
);
op_hcompute_hw_input_global_wrapper_stencil_exe_start_pt__U37 op_hcompute_hw_input_global_wrapper_stencil_exe_start (
    .in(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_out)
);
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_pt__U38 op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars (
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out)
);
affine_controller__U12 op_hcompute_hw_input_global_wrapper_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_d),
    .ready(op_hcompute_hw_input_global_wrapper_stencil_read_ready_in)
);
op_hcompute_hw_input_global_wrapper_stencil_read_ready_pt__U34 op_hcompute_hw_input_global_wrapper_stencil_read_ready (
    .in(op_hcompute_hw_input_global_wrapper_stencil_read_ready_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_ready_join_ready_out)
);
op_hcompute_hw_input_global_wrapper_stencil_read_start_pt__U35 op_hcompute_hw_input_global_wrapper_stencil_read_start (
    .in(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .out(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en)
);
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in [2:0];
assign op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_pt__U36 op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars (
    .in(op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_out)
);
ready_and_mod_op_hcompute_hw_input_global_wrapper_stencil op_hcompute_hw_input_global_wrapper_stencil_ready_join (
    .ready_in_hw_input_stencil(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en_ready),
    .ready_out(op_hcompute_hw_input_global_wrapper_stencil_ready_join_ready_out)
);
op_hcompute_hw_input_global_wrapper_stencil_write_start_pt__U39 op_hcompute_hw_input_global_wrapper_stencil_write_start (
    .in(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_out)
);
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_pt__U40 op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars (
    .in(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_hw_output_stencil_conv_stencil_op_hcompute_hw_output_stencil_read [0:0];
assign op_hcompute_hw_output_stencil_conv_stencil_op_hcompute_hw_output_stencil_read[0] = conv_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(clk),
    .conv_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_conv_stencil_op_hcompute_hw_output_stencil_read),
    .conv_stencil_op_hcompute_hw_output_stencil_read_ready(op_hcompute_hw_output_stencil_conv_stencil_op_hcompute_hw_output_stencil_read_ready),
    .conv_stencil_op_hcompute_hw_output_stencil_read_valid(conv_stencil_op_hcompute_hw_output_stencil_read_data_valid),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write_ready(hw_output_stencil_op_hcompute_hw_output_stencil_write_ready),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write_valid(hw_output_stencil_op_hcompute_hw_output_stencil_write_valid)
);
op_hcompute_hw_output_stencil_exe_start_pt__U124 op_hcompute_hw_output_stencil_exe_start (
    .in(op_hcompute_hw_output_stencil_port_controller_valid),
    .out(op_hcompute_hw_output_stencil_exe_start_out)
);
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
op_hcompute_hw_output_stencil_exe_start_control_vars_pt__U125 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
affine_controller__U99 op_hcompute_hw_output_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d),
    .ready(op_hcompute_hw_output_stencil_read_ready_in)
);
op_hcompute_hw_output_stencil_read_ready_pt__U121 op_hcompute_hw_output_stencil_read_ready (
    .in(op_hcompute_hw_output_stencil_read_ready_in),
    .out(op_hcompute_hw_output_stencil_ready_join_ready_out)
);
op_hcompute_hw_output_stencil_read_start_pt__U122 op_hcompute_hw_output_stencil_read_start (
    .in(op_hcompute_hw_output_stencil_port_controller_valid),
    .out(op_hcompute_hw_output_stencil_read_start_out)
);
wire [15:0] op_hcompute_hw_output_stencil_read_start_control_vars_in [2:0];
assign op_hcompute_hw_output_stencil_read_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_read_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_read_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
op_hcompute_hw_output_stencil_read_start_control_vars_pt__U123 op_hcompute_hw_output_stencil_read_start_control_vars (
    .in(op_hcompute_hw_output_stencil_read_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_read_start_control_vars_out)
);
ready_and_mod_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil_ready_join (
    .ready_in_conv_stencil(conv_stencil_op_hcompute_hw_output_stencil_read_rready),
    .ready_out(op_hcompute_hw_output_stencil_ready_join_ready_out)
);
op_hcompute_hw_output_stencil_write_start_pt__U126 op_hcompute_hw_output_stencil_write_start (
    .in(op_hcompute_hw_output_stencil_port_controller_valid),
    .out(op_hcompute_hw_output_stencil_write_start_out)
);
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
op_hcompute_hw_output_stencil_write_start_control_vars_pt__U127 op_hcompute_hw_output_stencil_write_start_control_vars (
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
endmodule

