// Module `cgralib_SIPO_reg__ID_U335__data_width16__depth2` defined externally
// Module `cgralib_SIPO_reg__ID_U298__data_width16__depth2` defined externally
// Module `cgralib_SIPO_reg__ID_U261__data_width16__depth2` defined externally
// Module `cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U301__data_width16__idx_width16` defined externally
// Module `cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U264__data_width16__idx_width16` defined externally
// Module `cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U227__data_width16__idx_width16` defined externally
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

module op_hcompute_hw_output_stencil_write_start_pt__U114 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_write_start_control_vars_pt__U115 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_output_stencil_read_start_pt__U110 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_read_start_control_vars_pt__U111 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_output_stencil_read_ready_pt__U109 (
    output in,
    input out
);
assign in = out;
endmodule

module op_hcompute_hw_output_stencil_exe_start_pt__U112 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_exe_start_control_vars_pt__U113 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_write_start_pt__U36 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_pt__U37 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_read_start_pt__U32 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_pt__U33 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_read_ready_pt__U31 (
    output in,
    input out
);
assign in = out;
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_exe_start_pt__U34 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_pt__U35 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_conv_stencil_write_start_pt__U62 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv_stencil_write_start_control_vars_pt__U63 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_conv_stencil_read_start_pt__U58 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv_stencil_read_start_control_vars_pt__U59 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_conv_stencil_read_ready_pt__U57 (
    output in,
    input out
);
assign in = out;
endmodule

module op_hcompute_conv_stencil_exe_start_pt__U60 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv_stencil_exe_start_control_vars_pt__U61 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_conv_stencil_1_write_start_pt__U88 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv_stencil_1_write_start_control_vars_pt__U89 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_conv_stencil_1_read_start_pt__U84 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv_stencil_1_read_start_control_vars_pt__U85 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_conv_stencil_1_read_ready_pt__U83 (
    output in,
    input out
);
assign in = out;
endmodule

module op_hcompute_conv_stencil_1_exe_start_pt__U86 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv_stencil_1_exe_start_control_vars_pt__U87 (
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

module flow_ctrl__U146 (
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

module flow_ctrl__U131 (
    input valid_in_0,
    output ready_in_0,
    output valid_out_0,
    input ready_out_0
);
assign ready_in_0 = 1'b1 & ready_out_0;
assign valid_out_0 = valid_in_0;
endmodule

module flow_ctrl__U116 (
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

module aff__U91 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U90 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U105_out;
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
assign and_all__U105_out = cmp_time_out & ready;
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
    .en(and_all__U105_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U105_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U105_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U105_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U65 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0085);
endmodule

module affine_controller__U64 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U79_out;
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
aff__U65 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign and_all__U79_out = cmp_time_out & ready;
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
    .en(and_all__U79_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U79_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U79_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U79_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U39 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0084);
endmodule

module affine_controller__U38 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U53_out;
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
aff__U39 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign and_all__U53_out = cmp_time_out & ready;
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
    .en(and_all__U53_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U53_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U53_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U53_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U322 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0000);
endmodule

module aff__U303 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0002);
endmodule

module affine_controller__U302 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U317_out;
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
aff__U303 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign and_all__U317_out = cmp_time_out & ready;
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
    .en(and_all__U317_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U317_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U317_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U317_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U285 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0080);
endmodule

module aff__U266 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0002);
endmodule

module affine_controller__U265 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U280_out;
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
aff__U266 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign and_all__U280_out = cmp_time_out & ready;
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
    .en(and_all__U280_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U280_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U280_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U280_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U248 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0040);
endmodule

module aff__U229 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0002);
endmodule

module affine_controller__U228 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U243_out;
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
aff__U229 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign and_all__U243_out = cmp_time_out & ready;
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
    .en(and_all__U243_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U243_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U243_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U243_out;
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
wire and_all__U263_out;
wire and_all__U300_out;
wire and_all__U337_out;
wire ctrl__U247_valid;
wire [15:0] ctrl__U247_d [2:0];
wire ctrl__U284_valid;
wire [15:0] ctrl__U284_d [2:0];
wire ctrl__U321_valid;
wire [15:0] ctrl__U321_d [2:0];
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
wire [15:0] inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U259_out;
wire [15:0] inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U296_out;
wire [15:0] inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U333_out;
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
assign and_all__U263_out = (hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_9_ready_net & hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_ready_net) & hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_10_ready_net;
assign and_all__U300_out = (hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_ready_net & hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_12_ready_net) & hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_14_ready_net;
assign and_all__U337_out = (hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_6_ready_net & hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_ready_net) & hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_7_ready_net;
affine_controller__U228 ctrl__U247 (
    .clk(clk),
    .valid(ctrl__U247_valid),
    .d(ctrl__U247_d),
    .ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_read_idx_ready)
);
affine_controller__U265 ctrl__U284 (
    .clk(clk),
    .valid(ctrl__U284_valid),
    .d(ctrl__U284_d),
    .ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_read_idx_ready)
);
affine_controller__U302 ctrl__U321 (
    .clk(clk),
    .valid(ctrl__U321_valid),
    .d(ctrl__U321_d),
    .ready(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_idx_ready)
);
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_10_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_out_data[1];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_10_ready_net = op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_4;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_10_valid_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_valid_out;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_out_data[0];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_ready_net = op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_5;
cgralib_SIPO_reg__ID_U261__data_width16__depth2 hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr (
    .rst_n(rst_n),
    .clk(clk),
    .in_data(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_net),
    .valid_in(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_valid_net),
    .ready_in(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_ready_in),
    .out_data(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_out_data),
    .valid_out(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_valid_out),
    .ready_out(and_all__U263_out)
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
cgralib_SIPO_reg__ID_U298__data_width16__depth2 hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr (
    .rst_n(rst_n),
    .clk(clk),
    .in_data(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_net),
    .valid_in(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_valid_net),
    .ready_in(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_ready_in),
    .out_data(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_out_data),
    .valid_out(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_valid_out),
    .ready_out(and_all__U300_out)
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
cgralib_SIPO_reg__ID_U335__data_width16__depth2 hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr (
    .rst_n(rst_n),
    .clk(clk),
    .in_data(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_net),
    .valid_in(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_valid_net),
    .ready_in(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_ready_in),
    .out_data(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_out_data),
    .valid_out(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_valid_out),
    .ready_out(and_all__U337_out)
);
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_net = row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_data;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_ready_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_ready_in;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_valid_net = row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_data_valid;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_valid_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_valid_out;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_9_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_out_data[2];
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_9_ready_net = op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_3;
assign hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_9_valid_net = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_valid_out;
wire [15:0] inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U259_d [2:0];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U259_d[2] = ctrl__U247_d[2];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U259_d[1] = ctrl__U247_d[1];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U259_d[0] = ctrl__U247_d[0];
aff__U248 inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U259 (
    .out(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U259_out),
    .d(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U259_d)
);
wire [15:0] inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U296_d [2:0];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U296_d[2] = ctrl__U284_d[2];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U296_d[1] = ctrl__U284_d[1];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U296_d[0] = ctrl__U284_d[0];
aff__U285 inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U296 (
    .out(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U296_out),
    .d(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U296_d)
);
wire [15:0] inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U333_d [2:0];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U333_d[2] = ctrl__U321_d[2];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U333_d[1] = ctrl__U321_d[1];
assign inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U333_d[0] = ctrl__U321_d[0];
aff__U322 inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U333 (
    .out(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U333_out),
    .d(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U333_d)
);
flow_ctrl__U146 op_hcompute_conv_stencil_1_read_flow_ctrl (
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
cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U227__data_width16__idx_width16 row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11 (
    .nreset_i(rst_n),
    .clk(clk),
    .read_data(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_read_data),
    .read_data_valid(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_read_data_valid),
    .read_data_ready(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_11_sr_ready_net),
    .read_idx(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U259_out),
    .read_idx_valid(ctrl__U247_valid),
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
cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U264__data_width16__idx_width16 row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13 (
    .nreset_i(rst_n),
    .clk(clk),
    .read_data(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_read_data),
    .read_data_valid(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_read_data_valid),
    .read_data_ready(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_13_sr_ready_net),
    .read_idx(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U296_out),
    .read_idx_valid(ctrl__U284_valid),
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
cgralib_Buffet__IDhw_input_global_wrapper_stencil_sr__U301__data_width16__idx_width16 row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8 (
    .nreset_i(rst_n),
    .clk(clk),
    .read_data(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_data),
    .read_data_valid(row_buf_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_read_data_valid),
    .read_data_ready(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_8_sr_ready_net),
    .read_idx(inner_bank_offsethw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_U333_out),
    .read_idx_valid(ctrl__U321_valid),
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

module aff__U134 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h003e * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0000);
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
wire [15:0] inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U145_out;
wire op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_0;
cgralib_Buffet__IDconv_stencil_clkwrk_dsa0_0__data_width16__idx_width16 bank_0 (
    .nreset_i(rst_n),
    .clk(clk),
    .read_data(bank_0_read_data),
    .read_data_valid(bank_0_read_data_valid),
    .read_data_ready(conv_stencil_clkwrk_dsa0_Bank0_read_ctrl_fork_ready_out),
    .read_idx(inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U145_out),
    .read_idx_valid(op_hcompute_conv_stencil_1_read_ren),
    .read_idx_ready(op_hcompute_conv_stencil_1_read_rready),
    .update_data(op_hcompute_conv_stencil_write[0]),
    .update_data_valid(1'b0),
    .update_data_ready(bank_0_update_data_ready),
    .update_idx(inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U145_out),
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
wire [15:0] inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U145_d [2:0];
assign inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U145_d[2] = op_hcompute_conv_stencil_1_read_ctrl_vars[2];
assign inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U145_d[1] = op_hcompute_conv_stencil_1_read_ctrl_vars[1];
assign inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U145_d[0] = op_hcompute_conv_stencil_1_read_ctrl_vars[0];
aff__U134 inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U145 (
    .out(inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U145_out),
    .d(inner_bank_offsetconv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_U145_d)
);
flow_ctrl__U131 op_hcompute_conv_stencil_1_read_flow_ctrl (
    .valid_in_0(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_valid_net),
    .ready_in_0(op_hcompute_conv_stencil_1_read_flow_ctrl_ready_in_0),
    .valid_out_0(op_hcompute_conv_stencil_1_read_data_valid),
    .ready_out_0(op_hcompute_conv_stencil_1_read_data_ready)
);
assign op_hcompute_conv_stencil_1_read[0] = conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_5_net;
endmodule

module aff__U13 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0002);
endmodule

module affine_controller__U12 (
    input clk,
    output valid,
    output [15:0] d [2:0],
    input ready
);
wire [15:0] affine_func_out;
wire and_all__U27_out;
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
    .out(affine_func_out),
    .d(affine_func_d)
);
assign and_all__U27_out = cmp_time_out & ready;
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
    .en(and_all__U27_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(and_all__U27_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(and_all__U27_out)
);
assign inc_time_out = 16'(cycle_time_out + (cmp_time_out & (~ ready) ? 16'h0000 : 16'h0001));
assign valid = and_all__U27_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U119 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h003e * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0000);
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
wire [15:0] inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U130_out;
wire op_hcompute_hw_output_stencil_read_flow_ctrl_ready_in_0;
cgralib_Buffet__IDconv_stencil_0__data_width16__idx_width16 bank_0 (
    .nreset_i(rst_n),
    .clk(clk),
    .read_data(bank_0_read_data),
    .read_data_valid(bank_0_read_data_valid),
    .read_data_ready(conv_stencil_Bank0_read_ctrl_fork_ready_out),
    .read_idx(inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U130_out),
    .read_idx_valid(op_hcompute_hw_output_stencil_read_ren),
    .read_idx_ready(op_hcompute_hw_output_stencil_read_rready),
    .update_data(op_hcompute_conv_stencil_1_write[0]),
    .update_data_valid(1'b0),
    .update_data_ready(bank_0_update_data_ready),
    .update_idx(inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U130_out),
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
wire [15:0] inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U130_d [2:0];
assign inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U130_d[2] = op_hcompute_hw_output_stencil_read_ctrl_vars[2];
assign inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U130_d[1] = op_hcompute_hw_output_stencil_read_ctrl_vars[1];
assign inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U130_d[0] = op_hcompute_hw_output_stencil_read_ctrl_vars[0];
aff__U119 inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U130 (
    .out(inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U130_out),
    .d(inner_bank_offsetconv_stencil_op_hcompute_hw_output_stencil_1_U130_d)
);
flow_ctrl__U116 op_hcompute_hw_output_stencil_read_flow_ctrl (
    .valid_in_0(conv_stencil_op_hcompute_hw_output_stencil_1_valid_net),
    .ready_in_0(op_hcompute_hw_output_stencil_read_flow_ctrl_ready_in_0),
    .valid_out_0(op_hcompute_hw_output_stencil_read_data_valid),
    .ready_out_0(op_hcompute_hw_output_stencil_read_data_ready)
);
assign op_hcompute_hw_output_stencil_read[0] = conv_stencil_op_hcompute_hw_output_stencil_1_net;
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
op_hcompute_conv_stencil_1_exe_start_pt__U86 op_hcompute_conv_stencil_1_exe_start (
    .in(op_hcompute_conv_stencil_1_port_controller_valid),
    .out(op_hcompute_conv_stencil_1_exe_start_out)
);
wire [15:0] op_hcompute_conv_stencil_1_exe_start_control_vars_in [2:0];
assign op_hcompute_conv_stencil_1_exe_start_control_vars_in[2] = op_hcompute_conv_stencil_1_port_controller_d[2];
assign op_hcompute_conv_stencil_1_exe_start_control_vars_in[1] = op_hcompute_conv_stencil_1_port_controller_d[1];
assign op_hcompute_conv_stencil_1_exe_start_control_vars_in[0] = op_hcompute_conv_stencil_1_port_controller_d[0];
op_hcompute_conv_stencil_1_exe_start_control_vars_pt__U87 op_hcompute_conv_stencil_1_exe_start_control_vars (
    .in(op_hcompute_conv_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_conv_stencil_1_exe_start_control_vars_out)
);
affine_controller__U64 op_hcompute_conv_stencil_1_port_controller (
    .clk(clk),
    .valid(op_hcompute_conv_stencil_1_port_controller_valid),
    .d(op_hcompute_conv_stencil_1_port_controller_d),
    .ready(op_hcompute_conv_stencil_1_read_ready_in)
);
op_hcompute_conv_stencil_1_read_ready_pt__U83 op_hcompute_conv_stencil_1_read_ready (
    .in(op_hcompute_conv_stencil_1_read_ready_in),
    .out(op_hcompute_conv_stencil_1_ready_join_ready_out)
);
op_hcompute_conv_stencil_1_read_start_pt__U84 op_hcompute_conv_stencil_1_read_start (
    .in(op_hcompute_conv_stencil_1_port_controller_valid),
    .out(op_hcompute_conv_stencil_1_read_start_out)
);
wire [15:0] op_hcompute_conv_stencil_1_read_start_control_vars_in [2:0];
assign op_hcompute_conv_stencil_1_read_start_control_vars_in[2] = op_hcompute_conv_stencil_1_port_controller_d[2];
assign op_hcompute_conv_stencil_1_read_start_control_vars_in[1] = op_hcompute_conv_stencil_1_port_controller_d[1];
assign op_hcompute_conv_stencil_1_read_start_control_vars_in[0] = op_hcompute_conv_stencil_1_port_controller_d[0];
op_hcompute_conv_stencil_1_read_start_control_vars_pt__U85 op_hcompute_conv_stencil_1_read_start_control_vars (
    .in(op_hcompute_conv_stencil_1_read_start_control_vars_in),
    .out(op_hcompute_conv_stencil_1_read_start_control_vars_out)
);
ready_and_mod_op_hcompute_conv_stencil_1 op_hcompute_conv_stencil_1_ready_join (
    .ready_in_conv_stencil_clkwrk_dsa0(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_rready),
    .ready_in_hw_input_global_wrapper_stencil(hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_1_read_rready),
    .ready_out(op_hcompute_conv_stencil_1_ready_join_ready_out)
);
op_hcompute_conv_stencil_1_write_start_pt__U88 op_hcompute_conv_stencil_1_write_start (
    .in(op_hcompute_conv_stencil_1_port_controller_valid),
    .out(op_hcompute_conv_stencil_1_write_start_out)
);
wire [15:0] op_hcompute_conv_stencil_1_write_start_control_vars_in [2:0];
assign op_hcompute_conv_stencil_1_write_start_control_vars_in[2] = op_hcompute_conv_stencil_1_port_controller_d[2];
assign op_hcompute_conv_stencil_1_write_start_control_vars_in[1] = op_hcompute_conv_stencil_1_port_controller_d[1];
assign op_hcompute_conv_stencil_1_write_start_control_vars_in[0] = op_hcompute_conv_stencil_1_port_controller_d[0];
op_hcompute_conv_stencil_1_write_start_control_vars_pt__U89 op_hcompute_conv_stencil_1_write_start_control_vars (
    .in(op_hcompute_conv_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_conv_stencil_1_write_start_control_vars_out)
);
op_hcompute_conv_stencil_exe_start_pt__U60 op_hcompute_conv_stencil_exe_start (
    .in(op_hcompute_conv_stencil_port_controller_valid),
    .out(op_hcompute_conv_stencil_exe_start_out)
);
wire [15:0] op_hcompute_conv_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_conv_stencil_exe_start_control_vars_in[2] = op_hcompute_conv_stencil_port_controller_d[2];
assign op_hcompute_conv_stencil_exe_start_control_vars_in[1] = op_hcompute_conv_stencil_port_controller_d[1];
assign op_hcompute_conv_stencil_exe_start_control_vars_in[0] = op_hcompute_conv_stencil_port_controller_d[0];
op_hcompute_conv_stencil_exe_start_control_vars_pt__U61 op_hcompute_conv_stencil_exe_start_control_vars (
    .in(op_hcompute_conv_stencil_exe_start_control_vars_in),
    .out(op_hcompute_conv_stencil_exe_start_control_vars_out)
);
affine_controller__U38 op_hcompute_conv_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_conv_stencil_port_controller_valid),
    .d(op_hcompute_conv_stencil_port_controller_d),
    .ready(op_hcompute_conv_stencil_read_ready_in)
);
op_hcompute_conv_stencil_read_ready_pt__U57 op_hcompute_conv_stencil_read_ready (
    .in(op_hcompute_conv_stencil_read_ready_in),
    .out(op_hcompute_conv_stencil_ready_join_ready_out)
);
op_hcompute_conv_stencil_read_start_pt__U58 op_hcompute_conv_stencil_read_start (
    .in(op_hcompute_conv_stencil_port_controller_valid),
    .out(op_hcompute_conv_stencil_read_start_out)
);
wire [15:0] op_hcompute_conv_stencil_read_start_control_vars_in [2:0];
assign op_hcompute_conv_stencil_read_start_control_vars_in[2] = op_hcompute_conv_stencil_port_controller_d[2];
assign op_hcompute_conv_stencil_read_start_control_vars_in[1] = op_hcompute_conv_stencil_port_controller_d[1];
assign op_hcompute_conv_stencil_read_start_control_vars_in[0] = op_hcompute_conv_stencil_port_controller_d[0];
op_hcompute_conv_stencil_read_start_control_vars_pt__U59 op_hcompute_conv_stencil_read_start_control_vars (
    .in(op_hcompute_conv_stencil_read_start_control_vars_in),
    .out(op_hcompute_conv_stencil_read_start_control_vars_out)
);
ready_and_mod_op_hcompute_conv_stencil op_hcompute_conv_stencil_ready_join (
    .ready_out(op_hcompute_conv_stencil_ready_join_ready_out)
);
op_hcompute_conv_stencil_write_start_pt__U62 op_hcompute_conv_stencil_write_start (
    .in(op_hcompute_conv_stencil_port_controller_valid),
    .out(op_hcompute_conv_stencil_write_start_out)
);
wire [15:0] op_hcompute_conv_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_conv_stencil_write_start_control_vars_in[2] = op_hcompute_conv_stencil_port_controller_d[2];
assign op_hcompute_conv_stencil_write_start_control_vars_in[1] = op_hcompute_conv_stencil_port_controller_d[1];
assign op_hcompute_conv_stencil_write_start_control_vars_in[0] = op_hcompute_conv_stencil_port_controller_d[0];
op_hcompute_conv_stencil_write_start_control_vars_pt__U63 op_hcompute_conv_stencil_write_start_control_vars (
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
op_hcompute_hw_input_global_wrapper_stencil_exe_start_pt__U34 op_hcompute_hw_input_global_wrapper_stencil_exe_start (
    .in(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_out)
);
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_pt__U35 op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars (
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out)
);
affine_controller__U12 op_hcompute_hw_input_global_wrapper_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_d),
    .ready(op_hcompute_hw_input_global_wrapper_stencil_read_ready_in)
);
op_hcompute_hw_input_global_wrapper_stencil_read_ready_pt__U31 op_hcompute_hw_input_global_wrapper_stencil_read_ready (
    .in(op_hcompute_hw_input_global_wrapper_stencil_read_ready_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_ready_join_ready_out)
);
op_hcompute_hw_input_global_wrapper_stencil_read_start_pt__U32 op_hcompute_hw_input_global_wrapper_stencil_read_start (
    .in(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .out(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en)
);
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in [2:0];
assign op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_pt__U33 op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars (
    .in(op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_out)
);
ready_and_mod_op_hcompute_hw_input_global_wrapper_stencil op_hcompute_hw_input_global_wrapper_stencil_ready_join (
    .ready_in_hw_input_stencil(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en_ready),
    .ready_out(op_hcompute_hw_input_global_wrapper_stencil_ready_join_ready_out)
);
op_hcompute_hw_input_global_wrapper_stencil_write_start_pt__U36 op_hcompute_hw_input_global_wrapper_stencil_write_start (
    .in(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_out)
);
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_pt__U37 op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars (
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
op_hcompute_hw_output_stencil_exe_start_pt__U112 op_hcompute_hw_output_stencil_exe_start (
    .in(op_hcompute_hw_output_stencil_port_controller_valid),
    .out(op_hcompute_hw_output_stencil_exe_start_out)
);
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
op_hcompute_hw_output_stencil_exe_start_control_vars_pt__U113 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
affine_controller__U90 op_hcompute_hw_output_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d),
    .ready(op_hcompute_hw_output_stencil_read_ready_in)
);
op_hcompute_hw_output_stencil_read_ready_pt__U109 op_hcompute_hw_output_stencil_read_ready (
    .in(op_hcompute_hw_output_stencil_read_ready_in),
    .out(op_hcompute_hw_output_stencil_ready_join_ready_out)
);
op_hcompute_hw_output_stencil_read_start_pt__U110 op_hcompute_hw_output_stencil_read_start (
    .in(op_hcompute_hw_output_stencil_port_controller_valid),
    .out(op_hcompute_hw_output_stencil_read_start_out)
);
wire [15:0] op_hcompute_hw_output_stencil_read_start_control_vars_in [2:0];
assign op_hcompute_hw_output_stencil_read_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_read_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_read_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
op_hcompute_hw_output_stencil_read_start_control_vars_pt__U111 op_hcompute_hw_output_stencil_read_start_control_vars (
    .in(op_hcompute_hw_output_stencil_read_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_read_start_control_vars_out)
);
ready_and_mod_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil_ready_join (
    .ready_in_conv_stencil(conv_stencil_op_hcompute_hw_output_stencil_read_rready),
    .ready_out(op_hcompute_hw_output_stencil_ready_join_ready_out)
);
op_hcompute_hw_output_stencil_write_start_pt__U114 op_hcompute_hw_output_stencil_write_start (
    .in(op_hcompute_hw_output_stencil_port_controller_valid),
    .out(op_hcompute_hw_output_stencil_write_start_out)
);
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
op_hcompute_hw_output_stencil_write_start_control_vars_pt__U115 op_hcompute_hw_output_stencil_write_start_control_vars (
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
endmodule

