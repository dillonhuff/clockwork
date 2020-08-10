module mult_stencil_op_hcompute_mult_stencil_2_broadcast (
    input [15:0] in,
    input en,
    output valid,
    output [15:0] mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5
);
assign valid = en;
assign mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5 = in;
endmodule

module mult_stencil_op_hcompute_hw_output_stencil_5_select (
    input clk,
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    input [15:0] d_3,
    input [15:0] mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5,
    output [15:0] out
);
assign out = mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5;
endmodule

module hw_input_stencil_op_hcompute_mult_stencil_3_select (
    input clk,
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    input [15:0] d_3,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3,
    output [15:0] out
);
assign out = hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3;
endmodule

module hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast (
    input [15:0] in,
    input en,
    output valid,
    output [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3
);
assign valid = en;
assign hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3 = in;
endmodule

module hcompute_hw_output_stencil (
    input [15:0] in0_mult_stencil_0,
    output [15:0] out_hw_output_stencil
);
assign out_hw_output_stencil = in0_mult_stencil_0;
endmodule

module hcompute_hw_input_stencil (
    input [15:0] in0_input_copy_stencil_0,
    output [15:0] out_hw_input_stencil
);
assign out_hw_input_stencil = in0_input_copy_stencil_0;
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write_0,
    input [15:0] mult_stencil_op_hcompute_hw_output_stencil_read_0
);
wire [15:0] inner_compute_out_hw_output_stencil;
hcompute_hw_output_stencil inner_compute (
    .in0_mult_stencil_0(mult_stencil_op_hcompute_hw_output_stencil_read_0),
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_0 = inner_compute_out_hw_output_stencil;
endmodule

module cu_op_hcompute_hw_input_stencil (
    input clk,
    output [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write_0,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read_0
);
wire [15:0] inner_compute_out_hw_input_stencil;
hcompute_hw_input_stencil inner_compute (
    .in0_input_copy_stencil_0(input_copy_stencil_op_hcompute_hw_input_stencil_read_0),
    .out_hw_input_stencil(inner_compute_out_hw_input_stencil)
);
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_0 = inner_compute_out_hw_input_stencil;
endmodule

module coreir_sub #(
    parameter width = 1
) (
    input [width-1:0] in0,
    input [width-1:0] in1,
    output [width-1:0] out
);
  assign out = in0 - in1;
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
wire [15:0] reg0_out;
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(clk),
    .in(in),
    .out(reg0_out)
);
assign out = reg0_out;
endmodule

module delay__U86 (
    input clk,
    input [15:0] wdata,
    input wen,
    output [15:0] rdata
);
wire [15:0] _U87_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U87 (
    .in(wdata),
    .clk(clk),
    .out(_U87_out)
);
assign rdata = _U87_out;
endmodule

module mult_stencil_ub (
    input clk,
    output [15:0] op_hcompute_hw_output_stencil_read_0,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars_0,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars_1,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars_2,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars_3,
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_mult_stencil_write_0,
    input [15:0] op_hcompute_mult_stencil_write_ctrl_vars_0,
    input [15:0] op_hcompute_mult_stencil_write_ctrl_vars_1,
    input [15:0] op_hcompute_mult_stencil_write_ctrl_vars_2,
    input [15:0] op_hcompute_mult_stencil_write_ctrl_vars_3,
    input op_hcompute_mult_stencil_write_wen
);
wire [15:0] mult_stencil_op_hcompute_hw_output_stencil_5_select_out;
wire mult_stencil_op_hcompute_mult_stencil_2_broadcast_valid;
wire [15:0] mult_stencil_op_hcompute_mult_stencil_2_broadcast_mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5;
wire [15:0] mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_rdata;
mult_stencil_op_hcompute_hw_output_stencil_5_select mult_stencil_op_hcompute_hw_output_stencil_5_select (
    .clk(clk),
    .d_0(op_hcompute_hw_output_stencil_read_ctrl_vars_0),
    .d_1(op_hcompute_hw_output_stencil_read_ctrl_vars_1),
    .d_2(op_hcompute_hw_output_stencil_read_ctrl_vars_2),
    .d_3(op_hcompute_hw_output_stencil_read_ctrl_vars_3),
    .mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5(mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_rdata),
    .out(mult_stencil_op_hcompute_hw_output_stencil_5_select_out)
);
mult_stencil_op_hcompute_mult_stencil_2_broadcast mult_stencil_op_hcompute_mult_stencil_2_broadcast (
    .in(op_hcompute_mult_stencil_write_0),
    .en(op_hcompute_mult_stencil_write_wen),
    .valid(mult_stencil_op_hcompute_mult_stencil_2_broadcast_valid),
    .mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5(mult_stencil_op_hcompute_mult_stencil_2_broadcast_mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5)
);
delay__U86 mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5 (
    .clk(clk),
    .wdata(mult_stencil_op_hcompute_mult_stencil_2_broadcast_mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5),
    .wen(mult_stencil_op_hcompute_mult_stencil_2_broadcast_valid),
    .rdata(mult_stencil_op_hcompute_mult_stencil_2_to_mult_stencil_op_hcompute_hw_output_stencil_5_rdata)
);
assign op_hcompute_hw_output_stencil_read_0 = mult_stencil_op_hcompute_hw_output_stencil_5_select_out;
endmodule

module delay__U84 (
    input clk,
    input [15:0] wdata,
    input wen,
    output [15:0] rdata
);
wire [15:0] _U85_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U85 (
    .in(wdata),
    .clk(clk),
    .out(_U85_out)
);
assign rdata = _U85_out;
endmodule

module hw_input_stencil_ub (
    input clk,
    input [15:0] op_hcompute_hw_input_stencil_write_0,
    input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars_0,
    input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars_1,
    input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars_2,
    input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars_3,
    input op_hcompute_hw_input_stencil_write_wen,
    output [15:0] op_hcompute_mult_stencil_read_0,
    input [15:0] op_hcompute_mult_stencil_read_ctrl_vars_0,
    input [15:0] op_hcompute_mult_stencil_read_ctrl_vars_1,
    input [15:0] op_hcompute_mult_stencil_read_ctrl_vars_2,
    input [15:0] op_hcompute_mult_stencil_read_ctrl_vars_3,
    input op_hcompute_mult_stencil_read_ren
);
wire hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast_valid;
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast_hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3;
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_rdata;
wire [15:0] hw_input_stencil_op_hcompute_mult_stencil_3_select_out;
hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast (
    .in(op_hcompute_hw_input_stencil_write_0),
    .en(op_hcompute_hw_input_stencil_write_wen),
    .valid(hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast_valid),
    .hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3(hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast_hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3)
);
delay__U84 hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3 (
    .clk(clk),
    .wdata(hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast_hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3),
    .wen(hw_input_stencil_op_hcompute_hw_input_stencil_0_broadcast_valid),
    .rdata(hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_rdata)
);
hw_input_stencil_op_hcompute_mult_stencil_3_select hw_input_stencil_op_hcompute_mult_stencil_3_select (
    .clk(clk),
    .d_0(op_hcompute_mult_stencil_read_ctrl_vars_0),
    .d_1(op_hcompute_mult_stencil_read_ctrl_vars_1),
    .d_2(op_hcompute_mult_stencil_read_ctrl_vars_2),
    .d_3(op_hcompute_mult_stencil_read_ctrl_vars_3),
    .hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3(hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_mult_stencil_3_rdata),
    .out(hw_input_stencil_op_hcompute_mult_stencil_3_select_out)
);
assign op_hcompute_mult_stencil_read_0 = hw_input_stencil_op_hcompute_mult_stencil_3_select_out;
endmodule

module coreir_mux #(
    parameter width = 1
) (
    input [width-1:0] in0,
    input [width-1:0] in1,
    input sel,
    output [width-1:0] out
);
  assign out = sel ? in1 : in0;
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
wire [15:0] reg0_out;
coreir_mux #(
    .width(16)
) enMux (
    .in0(reg0_out),
    .in1(in),
    .sel(en),
    .out(enMux_out)
);
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(clk),
    .in(enMux_out),
    .out(reg0_out)
);
assign out = reg0_out;
endmodule

module coreir_mul #(
    parameter width = 1
) (
    input [width-1:0] in0,
    input [width-1:0] in1,
    output [width-1:0] out
);
  assign out = in0 * in1;
endmodule

module coreir_eq #(
    parameter width = 1
) (
    input [width-1:0] in0,
    input [width-1:0] in1,
    output out
);
  assign out = in0 == in1;
endmodule

module coreir_const #(
    parameter width = 1,
    parameter value = 1
) (
    output [width-1:0] out
);
  assign out = value;
endmodule

module hcompute_mult_stencil (
    input [15:0] in0_hw_input_stencil_0,
    output [15:0] out_mult_stencil
);
wire [15:0] const2__259_out;
wire [15:0] mul_hw_input_stencil_1_259_260_out;
coreir_const #(
    .value(16'h0002),
    .width(16)
) const2__259 (
    .out(const2__259_out)
);
coreir_mul #(
    .width(16)
) mul_hw_input_stencil_1_259_260 (
    .in0(in0_hw_input_stencil_0),
    .in1(const2__259_out),
    .out(mul_hw_input_stencil_1_259_260_out)
);
assign out_mult_stencil = mul_hw_input_stencil_1_259_260_out;
endmodule

module cu_op_hcompute_mult_stencil (
    input clk,
    input [15:0] hw_input_stencil_op_hcompute_mult_stencil_read_0,
    output [15:0] mult_stencil_op_hcompute_mult_stencil_write_0
);
wire [15:0] inner_compute_out_mult_stencil;
hcompute_mult_stencil inner_compute (
    .in0_hw_input_stencil_0(hw_input_stencil_op_hcompute_mult_stencil_read_0),
    .out_mult_stencil(inner_compute_out_mult_stencil)
);
assign mult_stencil_op_hcompute_mult_stencil_write_0 = inner_compute_out_mult_stencil;
endmodule

module coreir_add #(
    parameter width = 1
) (
    input [width-1:0] in0,
    input [width-1:0] in1,
    output [width-1:0] out
);
  assign out = in0 + in1;
endmodule

module corebit_wire (
    input in,
    output out
);
  assign out = in;
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

module corebit_const #(
    parameter value = 1
) (
    output out
);
  assign out = value;
endmodule

module corebit_and (
    input in0,
    input in1,
    output out
);
  assign out = in0 & in1;
endmodule

module array_delay_U79 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    input [15:0] in_2,
    input [15:0] in_3,
    output [15:0] out_0,
    output [15:0] out_1,
    output [15:0] out_2,
    output [15:0] out_3
);
wire [15:0] _U80_out;
wire [15:0] _U81_out;
wire [15:0] _U82_out;
wire [15:0] _U83_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U80 (
    .in(in_0),
    .clk(clk),
    .out(_U80_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U81 (
    .in(in_1),
    .clk(clk),
    .out(_U81_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U82 (
    .in(in_2),
    .clk(clk),
    .out(_U82_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U83 (
    .in(in_3),
    .clk(clk),
    .out(_U83_out)
);
assign out_0 = _U80_out;
assign out_1 = _U81_out;
assign out_2 = _U82_out;
assign out_3 = _U83_out;
endmodule

module array_delay_U74 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    input [15:0] in_2,
    input [15:0] in_3,
    output [15:0] out_0,
    output [15:0] out_1,
    output [15:0] out_2,
    output [15:0] out_3
);
wire [15:0] _U75_out;
wire [15:0] _U76_out;
wire [15:0] _U77_out;
wire [15:0] _U78_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U75 (
    .in(in_0),
    .clk(clk),
    .out(_U75_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U76 (
    .in(in_1),
    .clk(clk),
    .out(_U76_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U77 (
    .in(in_2),
    .clk(clk),
    .out(_U77_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U78 (
    .in(in_3),
    .clk(clk),
    .out(_U78_out)
);
assign out_0 = _U75_out;
assign out_1 = _U76_out;
assign out_2 = _U77_out;
assign out_3 = _U78_out;
endmodule

module array_delay_U51 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    input [15:0] in_2,
    input [15:0] in_3,
    output [15:0] out_0,
    output [15:0] out_1,
    output [15:0] out_2,
    output [15:0] out_3
);
wire [15:0] _U52_out;
wire [15:0] _U53_out;
wire [15:0] _U54_out;
wire [15:0] _U55_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U52 (
    .in(in_0),
    .clk(clk),
    .out(_U52_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U53 (
    .in(in_1),
    .clk(clk),
    .out(_U53_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U54 (
    .in(in_2),
    .clk(clk),
    .out(_U54_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U55 (
    .in(in_3),
    .clk(clk),
    .out(_U55_out)
);
assign out_0 = _U52_out;
assign out_1 = _U53_out;
assign out_2 = _U54_out;
assign out_3 = _U55_out;
endmodule

module array_delay_U46 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    input [15:0] in_2,
    input [15:0] in_3,
    output [15:0] out_0,
    output [15:0] out_1,
    output [15:0] out_2,
    output [15:0] out_3
);
wire [15:0] _U47_out;
wire [15:0] _U48_out;
wire [15:0] _U49_out;
wire [15:0] _U50_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U47 (
    .in(in_0),
    .clk(clk),
    .out(_U47_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U48 (
    .in(in_1),
    .clk(clk),
    .out(_U48_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U49 (
    .in(in_2),
    .clk(clk),
    .out(_U49_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U50 (
    .in(in_3),
    .clk(clk),
    .out(_U50_out)
);
assign out_0 = _U47_out;
assign out_1 = _U48_out;
assign out_2 = _U49_out;
assign out_3 = _U50_out;
endmodule

module array_delay_U23 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    input [15:0] in_2,
    input [15:0] in_3,
    output [15:0] out_0,
    output [15:0] out_1,
    output [15:0] out_2,
    output [15:0] out_3
);
wire [15:0] _U24_out;
wire [15:0] _U25_out;
wire [15:0] _U26_out;
wire [15:0] _U27_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U24 (
    .in(in_0),
    .clk(clk),
    .out(_U24_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U25 (
    .in(in_1),
    .clk(clk),
    .out(_U25_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U26 (
    .in(in_2),
    .clk(clk),
    .out(_U26_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U27 (
    .in(in_3),
    .clk(clk),
    .out(_U27_out)
);
assign out_0 = _U24_out;
assign out_1 = _U25_out;
assign out_2 = _U26_out;
assign out_3 = _U27_out;
endmodule

module array_delay_U18 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    input [15:0] in_2,
    input [15:0] in_3,
    output [15:0] out_0,
    output [15:0] out_1,
    output [15:0] out_2,
    output [15:0] out_3
);
wire [15:0] _U19_out;
wire [15:0] _U20_out;
wire [15:0] _U21_out;
wire [15:0] _U22_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U19 (
    .in(in_0),
    .clk(clk),
    .out(_U19_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U20 (
    .in(in_1),
    .clk(clk),
    .out(_U20_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U21 (
    .in(in_2),
    .clk(clk),
    .out(_U21_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U22 (
    .in(in_3),
    .clk(clk),
    .out(_U22_out)
);
assign out_0 = _U19_out;
assign out_1 = _U20_out;
assign out_2 = _U21_out;
assign out_3 = _U22_out;
endmodule

module aff__U57 (
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    input [15:0] d_3,
    output [15:0] out
);
wire [15:0] add_all__U62_out;
wire [15:0] add_all__U63_out;
wire [15:0] add_all__U64_out;
wire [15:0] add_all__U65_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] coeff_2_out;
wire [15:0] coeff_3_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U58_out;
wire [15:0] mul_d1__U59_out;
wire [15:0] mul_d2__U60_out;
wire [15:0] mul_d3__U61_out;
coreir_add #(
    .width(16)
) add_all__U62 (
    .in0(mul_d0__U58_out),
    .in1(mul_d1__U59_out),
    .out(add_all__U62_out)
);
coreir_add #(
    .width(16)
) add_all__U63 (
    .in0(add_all__U62_out),
    .in1(mul_d2__U60_out),
    .out(add_all__U63_out)
);
coreir_add #(
    .width(16)
) add_all__U64 (
    .in0(add_all__U63_out),
    .in1(mul_d3__U61_out),
    .out(add_all__U64_out)
);
coreir_add #(
    .width(16)
) add_all__U65 (
    .in0(add_all__U64_out),
    .in1(const_term_out),
    .out(add_all__U65_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
);
coreir_const #(
    .value(16'h0040),
    .width(16)
) coeff_2 (
    .out(coeff_2_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_3 (
    .out(coeff_3_out)
);
coreir_const #(
    .value(16'h0003),
    .width(16)
) const_term (
    .out(const_term_out)
);
coreir_mul #(
    .width(16)
) mul_d0__U58 (
    .in0(coeff_0_out),
    .in1(d_0),
    .out(mul_d0__U58_out)
);
coreir_mul #(
    .width(16)
) mul_d1__U59 (
    .in0(coeff_1_out),
    .in1(d_1),
    .out(mul_d1__U59_out)
);
coreir_mul #(
    .width(16)
) mul_d2__U60 (
    .in0(coeff_2_out),
    .in1(d_2),
    .out(mul_d2__U60_out)
);
coreir_mul #(
    .width(16)
) mul_d3__U61 (
    .in0(coeff_3_out),
    .in1(d_3),
    .out(mul_d3__U61_out)
);
assign out = add_all__U65_out;
endmodule

module affine_controller__U56 (
    input clk,
    output [15:0] d_0,
    output [15:0] d_1,
    output [15:0] d_2,
    output [15:0] d_3,
    output valid
);
wire [15:0] _U66_out;
wire [15:0] _U67_out;
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire d_0_am__U68_out;
wire d_0_am__U69_out;
wire d_0_am__U70_out;
wire d_0_at_max_out;
wire [15:0] d_0_inc_out;
wire [15:0] d_0_max_out;
wire [15:0] d_0_min_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_next_value_at_max_out;
wire [15:0] d_0_reg_out;
wire d_1_am__U71_out;
wire d_1_am__U72_out;
wire d_1_at_max_out;
wire [15:0] d_1_inc_out;
wire [15:0] d_1_max_out;
wire [15:0] d_1_min_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_next_value_at_max_out;
wire [15:0] d_1_reg_out;
wire d_2_am__U73_out;
wire d_2_at_max_out;
wire [15:0] d_2_inc_out;
wire [15:0] d_2_max_out;
wire [15:0] d_2_min_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_next_value_at_max_out;
wire [15:0] d_2_reg_out;
wire d_3_at_max_out;
wire [15:0] d_3_inc_out;
wire [15:0] d_3_max_out;
wire [15:0] d_3_min_out;
wire [15:0] d_3_next_value_out;
wire [15:0] d_3_next_value_at_max_out;
wire [15:0] d_3_reg_out;
wire [15:0] inc_time_out;
wire [15:0] time_diff_out;
wire true_out;
coreir_const #(
    .value(16'h0001),
    .width(16)
) _U66 (
    .out(_U66_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) _U67 (
    .out(_U67_out)
);
aff__U57 affine_func (
    .d_0(d_0_reg_out),
    .d_1(d_1_reg_out),
    .d_2(d_2_reg_out),
    .d_3(d_3_reg_out),
    .out(affine_func_out)
);
coreir_eq #(
    .width(16)
) cmp_time (
    .in0(time_diff_out),
    .in1(_U67_out),
    .out(cmp_time_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
corebit_and d_0_am__U68 (
    .in0(true_out),
    .in1(d_1_at_max_out),
    .out(d_0_am__U68_out)
);
corebit_and d_0_am__U69 (
    .in0(d_0_am__U68_out),
    .in1(d_2_at_max_out),
    .out(d_0_am__U69_out)
);
corebit_and d_0_am__U70 (
    .in0(d_0_am__U69_out),
    .in1(d_3_at_max_out),
    .out(d_0_am__U70_out)
);
coreir_eq #(
    .width(16)
) d_0_at_max (
    .in0(d_0_reg_out),
    .in1(d_0_max_out),
    .out(d_0_at_max_out)
);
coreir_add #(
    .width(16)
) d_0_inc (
    .in0(d_0_reg_out),
    .in1(_U66_out),
    .out(d_0_inc_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_0_max (
    .out(d_0_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_0_min (
    .out(d_0_min_out)
);
coreir_mux #(
    .width(16)
) d_0_next_value (
    .in0(d_0_reg_out),
    .in1(d_0_next_value_at_max_out),
    .sel(d_0_am__U70_out),
    .out(d_0_next_value_out)
);
coreir_mux #(
    .width(16)
) d_0_next_value_at_max (
    .in0(d_0_inc_out),
    .in1(d_0_min_out),
    .sel(d_0_at_max_out),
    .out(d_0_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
corebit_and d_1_am__U71 (
    .in0(true_out),
    .in1(d_2_at_max_out),
    .out(d_1_am__U71_out)
);
corebit_and d_1_am__U72 (
    .in0(d_1_am__U71_out),
    .in1(d_3_at_max_out),
    .out(d_1_am__U72_out)
);
coreir_eq #(
    .width(16)
) d_1_at_max (
    .in0(d_1_reg_out),
    .in1(d_1_max_out),
    .out(d_1_at_max_out)
);
coreir_add #(
    .width(16)
) d_1_inc (
    .in0(d_1_reg_out),
    .in1(_U66_out),
    .out(d_1_inc_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_1_max (
    .out(d_1_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_1_min (
    .out(d_1_min_out)
);
coreir_mux #(
    .width(16)
) d_1_next_value (
    .in0(d_1_reg_out),
    .in1(d_1_next_value_at_max_out),
    .sel(d_1_am__U72_out),
    .out(d_1_next_value_out)
);
coreir_mux #(
    .width(16)
) d_1_next_value_at_max (
    .in0(d_1_inc_out),
    .in1(d_1_min_out),
    .sel(d_1_at_max_out),
    .out(d_1_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
corebit_and d_2_am__U73 (
    .in0(true_out),
    .in1(d_3_at_max_out),
    .out(d_2_am__U73_out)
);
coreir_eq #(
    .width(16)
) d_2_at_max (
    .in0(d_2_reg_out),
    .in1(d_2_max_out),
    .out(d_2_at_max_out)
);
coreir_add #(
    .width(16)
) d_2_inc (
    .in0(d_2_reg_out),
    .in1(_U66_out),
    .out(d_2_inc_out)
);
coreir_const #(
    .value(16'h003f),
    .width(16)
) d_2_max (
    .out(d_2_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_2_min (
    .out(d_2_min_out)
);
coreir_mux #(
    .width(16)
) d_2_next_value (
    .in0(d_2_reg_out),
    .in1(d_2_next_value_at_max_out),
    .sel(d_2_am__U73_out),
    .out(d_2_next_value_out)
);
coreir_mux #(
    .width(16)
) d_2_next_value_at_max (
    .in0(d_2_inc_out),
    .in1(d_2_min_out),
    .sel(d_2_at_max_out),
    .out(d_2_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
coreir_eq #(
    .width(16)
) d_3_at_max (
    .in0(d_3_reg_out),
    .in1(d_3_max_out),
    .out(d_3_at_max_out)
);
coreir_add #(
    .width(16)
) d_3_inc (
    .in0(d_3_reg_out),
    .in1(_U66_out),
    .out(d_3_inc_out)
);
coreir_const #(
    .value(16'h003f),
    .width(16)
) d_3_max (
    .out(d_3_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_3_min (
    .out(d_3_min_out)
);
coreir_mux #(
    .width(16)
) d_3_next_value (
    .in0(d_3_reg_out),
    .in1(d_3_next_value_at_max_out),
    .sel(true_out),
    .out(d_3_next_value_out)
);
coreir_mux #(
    .width(16)
) d_3_next_value_at_max (
    .in0(d_3_inc_out),
    .in1(d_3_min_out),
    .sel(d_3_at_max_out),
    .out(d_3_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_next_value_out),
    .clk(clk),
    .out(d_3_reg_out),
    .en(cmp_time_out)
);
coreir_add #(
    .width(16)
) inc_time (
    .in0(cycle_time_out),
    .in1(_U66_out),
    .out(inc_time_out)
);
coreir_sub #(
    .width(16)
) time_diff (
    .in0(affine_func_out),
    .in1(cycle_time_out),
    .out(time_diff_out)
);
corebit_const #(
    .value(1'b1)
) true (
    .out(true_out)
);
assign d_0 = d_0_reg_out;
assign d_1 = d_1_reg_out;
assign d_2 = d_2_reg_out;
assign d_3 = d_3_reg_out;
assign valid = cmp_time_out;
endmodule

module aff__U29 (
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    input [15:0] d_3,
    output [15:0] out
);
wire [15:0] add_all__U34_out;
wire [15:0] add_all__U35_out;
wire [15:0] add_all__U36_out;
wire [15:0] add_all__U37_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] coeff_2_out;
wire [15:0] coeff_3_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U30_out;
wire [15:0] mul_d1__U31_out;
wire [15:0] mul_d2__U32_out;
wire [15:0] mul_d3__U33_out;
coreir_add #(
    .width(16)
) add_all__U34 (
    .in0(mul_d0__U30_out),
    .in1(mul_d1__U31_out),
    .out(add_all__U34_out)
);
coreir_add #(
    .width(16)
) add_all__U35 (
    .in0(add_all__U34_out),
    .in1(mul_d2__U32_out),
    .out(add_all__U35_out)
);
coreir_add #(
    .width(16)
) add_all__U36 (
    .in0(add_all__U35_out),
    .in1(mul_d3__U33_out),
    .out(add_all__U36_out)
);
coreir_add #(
    .width(16)
) add_all__U37 (
    .in0(add_all__U36_out),
    .in1(const_term_out),
    .out(add_all__U37_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
);
coreir_const #(
    .value(16'h0040),
    .width(16)
) coeff_2 (
    .out(coeff_2_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_3 (
    .out(coeff_3_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) const_term (
    .out(const_term_out)
);
coreir_mul #(
    .width(16)
) mul_d0__U30 (
    .in0(coeff_0_out),
    .in1(d_0),
    .out(mul_d0__U30_out)
);
coreir_mul #(
    .width(16)
) mul_d1__U31 (
    .in0(coeff_1_out),
    .in1(d_1),
    .out(mul_d1__U31_out)
);
coreir_mul #(
    .width(16)
) mul_d2__U32 (
    .in0(coeff_2_out),
    .in1(d_2),
    .out(mul_d2__U32_out)
);
coreir_mul #(
    .width(16)
) mul_d3__U33 (
    .in0(coeff_3_out),
    .in1(d_3),
    .out(mul_d3__U33_out)
);
assign out = add_all__U37_out;
endmodule

module affine_controller__U28 (
    input clk,
    output [15:0] d_0,
    output [15:0] d_1,
    output [15:0] d_2,
    output [15:0] d_3,
    output valid
);
wire [15:0] _U38_out;
wire [15:0] _U39_out;
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire d_0_am__U40_out;
wire d_0_am__U41_out;
wire d_0_am__U42_out;
wire d_0_at_max_out;
wire [15:0] d_0_inc_out;
wire [15:0] d_0_max_out;
wire [15:0] d_0_min_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_next_value_at_max_out;
wire [15:0] d_0_reg_out;
wire d_1_am__U43_out;
wire d_1_am__U44_out;
wire d_1_at_max_out;
wire [15:0] d_1_inc_out;
wire [15:0] d_1_max_out;
wire [15:0] d_1_min_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_next_value_at_max_out;
wire [15:0] d_1_reg_out;
wire d_2_am__U45_out;
wire d_2_at_max_out;
wire [15:0] d_2_inc_out;
wire [15:0] d_2_max_out;
wire [15:0] d_2_min_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_next_value_at_max_out;
wire [15:0] d_2_reg_out;
wire d_3_at_max_out;
wire [15:0] d_3_inc_out;
wire [15:0] d_3_max_out;
wire [15:0] d_3_min_out;
wire [15:0] d_3_next_value_out;
wire [15:0] d_3_next_value_at_max_out;
wire [15:0] d_3_reg_out;
wire [15:0] inc_time_out;
wire [15:0] time_diff_out;
wire true_out;
coreir_const #(
    .value(16'h0001),
    .width(16)
) _U38 (
    .out(_U38_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) _U39 (
    .out(_U39_out)
);
aff__U29 affine_func (
    .d_0(d_0_reg_out),
    .d_1(d_1_reg_out),
    .d_2(d_2_reg_out),
    .d_3(d_3_reg_out),
    .out(affine_func_out)
);
coreir_eq #(
    .width(16)
) cmp_time (
    .in0(time_diff_out),
    .in1(_U39_out),
    .out(cmp_time_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
corebit_and d_0_am__U40 (
    .in0(true_out),
    .in1(d_1_at_max_out),
    .out(d_0_am__U40_out)
);
corebit_and d_0_am__U41 (
    .in0(d_0_am__U40_out),
    .in1(d_2_at_max_out),
    .out(d_0_am__U41_out)
);
corebit_and d_0_am__U42 (
    .in0(d_0_am__U41_out),
    .in1(d_3_at_max_out),
    .out(d_0_am__U42_out)
);
coreir_eq #(
    .width(16)
) d_0_at_max (
    .in0(d_0_reg_out),
    .in1(d_0_max_out),
    .out(d_0_at_max_out)
);
coreir_add #(
    .width(16)
) d_0_inc (
    .in0(d_0_reg_out),
    .in1(_U38_out),
    .out(d_0_inc_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_0_max (
    .out(d_0_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_0_min (
    .out(d_0_min_out)
);
coreir_mux #(
    .width(16)
) d_0_next_value (
    .in0(d_0_reg_out),
    .in1(d_0_next_value_at_max_out),
    .sel(d_0_am__U42_out),
    .out(d_0_next_value_out)
);
coreir_mux #(
    .width(16)
) d_0_next_value_at_max (
    .in0(d_0_inc_out),
    .in1(d_0_min_out),
    .sel(d_0_at_max_out),
    .out(d_0_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
corebit_and d_1_am__U43 (
    .in0(true_out),
    .in1(d_2_at_max_out),
    .out(d_1_am__U43_out)
);
corebit_and d_1_am__U44 (
    .in0(d_1_am__U43_out),
    .in1(d_3_at_max_out),
    .out(d_1_am__U44_out)
);
coreir_eq #(
    .width(16)
) d_1_at_max (
    .in0(d_1_reg_out),
    .in1(d_1_max_out),
    .out(d_1_at_max_out)
);
coreir_add #(
    .width(16)
) d_1_inc (
    .in0(d_1_reg_out),
    .in1(_U38_out),
    .out(d_1_inc_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_1_max (
    .out(d_1_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_1_min (
    .out(d_1_min_out)
);
coreir_mux #(
    .width(16)
) d_1_next_value (
    .in0(d_1_reg_out),
    .in1(d_1_next_value_at_max_out),
    .sel(d_1_am__U44_out),
    .out(d_1_next_value_out)
);
coreir_mux #(
    .width(16)
) d_1_next_value_at_max (
    .in0(d_1_inc_out),
    .in1(d_1_min_out),
    .sel(d_1_at_max_out),
    .out(d_1_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
corebit_and d_2_am__U45 (
    .in0(true_out),
    .in1(d_3_at_max_out),
    .out(d_2_am__U45_out)
);
coreir_eq #(
    .width(16)
) d_2_at_max (
    .in0(d_2_reg_out),
    .in1(d_2_max_out),
    .out(d_2_at_max_out)
);
coreir_add #(
    .width(16)
) d_2_inc (
    .in0(d_2_reg_out),
    .in1(_U38_out),
    .out(d_2_inc_out)
);
coreir_const #(
    .value(16'h003f),
    .width(16)
) d_2_max (
    .out(d_2_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_2_min (
    .out(d_2_min_out)
);
coreir_mux #(
    .width(16)
) d_2_next_value (
    .in0(d_2_reg_out),
    .in1(d_2_next_value_at_max_out),
    .sel(d_2_am__U45_out),
    .out(d_2_next_value_out)
);
coreir_mux #(
    .width(16)
) d_2_next_value_at_max (
    .in0(d_2_inc_out),
    .in1(d_2_min_out),
    .sel(d_2_at_max_out),
    .out(d_2_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
coreir_eq #(
    .width(16)
) d_3_at_max (
    .in0(d_3_reg_out),
    .in1(d_3_max_out),
    .out(d_3_at_max_out)
);
coreir_add #(
    .width(16)
) d_3_inc (
    .in0(d_3_reg_out),
    .in1(_U38_out),
    .out(d_3_inc_out)
);
coreir_const #(
    .value(16'h003f),
    .width(16)
) d_3_max (
    .out(d_3_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_3_min (
    .out(d_3_min_out)
);
coreir_mux #(
    .width(16)
) d_3_next_value (
    .in0(d_3_reg_out),
    .in1(d_3_next_value_at_max_out),
    .sel(true_out),
    .out(d_3_next_value_out)
);
coreir_mux #(
    .width(16)
) d_3_next_value_at_max (
    .in0(d_3_inc_out),
    .in1(d_3_min_out),
    .sel(d_3_at_max_out),
    .out(d_3_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_next_value_out),
    .clk(clk),
    .out(d_3_reg_out),
    .en(cmp_time_out)
);
coreir_add #(
    .width(16)
) inc_time (
    .in0(cycle_time_out),
    .in1(_U38_out),
    .out(inc_time_out)
);
coreir_sub #(
    .width(16)
) time_diff (
    .in0(affine_func_out),
    .in1(cycle_time_out),
    .out(time_diff_out)
);
corebit_const #(
    .value(1'b1)
) true (
    .out(true_out)
);
assign d_0 = d_0_reg_out;
assign d_1 = d_1_reg_out;
assign d_2 = d_2_reg_out;
assign d_3 = d_3_reg_out;
assign valid = cmp_time_out;
endmodule

module aff__U1 (
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] d_2,
    input [15:0] d_3,
    output [15:0] out
);
wire [15:0] add_all__U6_out;
wire [15:0] add_all__U7_out;
wire [15:0] add_all__U8_out;
wire [15:0] add_all__U9_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] coeff_2_out;
wire [15:0] coeff_3_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U2_out;
wire [15:0] mul_d1__U3_out;
wire [15:0] mul_d2__U4_out;
wire [15:0] mul_d3__U5_out;
coreir_add #(
    .width(16)
) add_all__U6 (
    .in0(mul_d0__U2_out),
    .in1(mul_d1__U3_out),
    .out(add_all__U6_out)
);
coreir_add #(
    .width(16)
) add_all__U7 (
    .in0(add_all__U6_out),
    .in1(mul_d2__U4_out),
    .out(add_all__U7_out)
);
coreir_add #(
    .width(16)
) add_all__U8 (
    .in0(add_all__U7_out),
    .in1(mul_d3__U5_out),
    .out(add_all__U8_out)
);
coreir_add #(
    .width(16)
) add_all__U9 (
    .in0(add_all__U8_out),
    .in1(const_term_out),
    .out(add_all__U9_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
);
coreir_const #(
    .value(16'h0040),
    .width(16)
) coeff_2 (
    .out(coeff_2_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_3 (
    .out(coeff_3_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) const_term (
    .out(const_term_out)
);
coreir_mul #(
    .width(16)
) mul_d0__U2 (
    .in0(coeff_0_out),
    .in1(d_0),
    .out(mul_d0__U2_out)
);
coreir_mul #(
    .width(16)
) mul_d1__U3 (
    .in0(coeff_1_out),
    .in1(d_1),
    .out(mul_d1__U3_out)
);
coreir_mul #(
    .width(16)
) mul_d2__U4 (
    .in0(coeff_2_out),
    .in1(d_2),
    .out(mul_d2__U4_out)
);
coreir_mul #(
    .width(16)
) mul_d3__U5 (
    .in0(coeff_3_out),
    .in1(d_3),
    .out(mul_d3__U5_out)
);
assign out = add_all__U9_out;
endmodule

module affine_controller__U0 (
    input clk,
    output [15:0] d_0,
    output [15:0] d_1,
    output [15:0] d_2,
    output [15:0] d_3,
    output valid
);
wire [15:0] _U10_out;
wire [15:0] _U11_out;
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire d_0_am__U12_out;
wire d_0_am__U13_out;
wire d_0_am__U14_out;
wire d_0_at_max_out;
wire [15:0] d_0_inc_out;
wire [15:0] d_0_max_out;
wire [15:0] d_0_min_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_next_value_at_max_out;
wire [15:0] d_0_reg_out;
wire d_1_am__U15_out;
wire d_1_am__U16_out;
wire d_1_at_max_out;
wire [15:0] d_1_inc_out;
wire [15:0] d_1_max_out;
wire [15:0] d_1_min_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_next_value_at_max_out;
wire [15:0] d_1_reg_out;
wire d_2_am__U17_out;
wire d_2_at_max_out;
wire [15:0] d_2_inc_out;
wire [15:0] d_2_max_out;
wire [15:0] d_2_min_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_next_value_at_max_out;
wire [15:0] d_2_reg_out;
wire d_3_at_max_out;
wire [15:0] d_3_inc_out;
wire [15:0] d_3_max_out;
wire [15:0] d_3_min_out;
wire [15:0] d_3_next_value_out;
wire [15:0] d_3_next_value_at_max_out;
wire [15:0] d_3_reg_out;
wire [15:0] inc_time_out;
wire [15:0] time_diff_out;
wire true_out;
coreir_const #(
    .value(16'h0001),
    .width(16)
) _U10 (
    .out(_U10_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) _U11 (
    .out(_U11_out)
);
aff__U1 affine_func (
    .d_0(d_0_reg_out),
    .d_1(d_1_reg_out),
    .d_2(d_2_reg_out),
    .d_3(d_3_reg_out),
    .out(affine_func_out)
);
coreir_eq #(
    .width(16)
) cmp_time (
    .in0(time_diff_out),
    .in1(_U11_out),
    .out(cmp_time_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
corebit_and d_0_am__U12 (
    .in0(true_out),
    .in1(d_1_at_max_out),
    .out(d_0_am__U12_out)
);
corebit_and d_0_am__U13 (
    .in0(d_0_am__U12_out),
    .in1(d_2_at_max_out),
    .out(d_0_am__U13_out)
);
corebit_and d_0_am__U14 (
    .in0(d_0_am__U13_out),
    .in1(d_3_at_max_out),
    .out(d_0_am__U14_out)
);
coreir_eq #(
    .width(16)
) d_0_at_max (
    .in0(d_0_reg_out),
    .in1(d_0_max_out),
    .out(d_0_at_max_out)
);
coreir_add #(
    .width(16)
) d_0_inc (
    .in0(d_0_reg_out),
    .in1(_U10_out),
    .out(d_0_inc_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_0_max (
    .out(d_0_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_0_min (
    .out(d_0_min_out)
);
coreir_mux #(
    .width(16)
) d_0_next_value (
    .in0(d_0_reg_out),
    .in1(d_0_next_value_at_max_out),
    .sel(d_0_am__U14_out),
    .out(d_0_next_value_out)
);
coreir_mux #(
    .width(16)
) d_0_next_value_at_max (
    .in0(d_0_inc_out),
    .in1(d_0_min_out),
    .sel(d_0_at_max_out),
    .out(d_0_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
corebit_and d_1_am__U15 (
    .in0(true_out),
    .in1(d_2_at_max_out),
    .out(d_1_am__U15_out)
);
corebit_and d_1_am__U16 (
    .in0(d_1_am__U15_out),
    .in1(d_3_at_max_out),
    .out(d_1_am__U16_out)
);
coreir_eq #(
    .width(16)
) d_1_at_max (
    .in0(d_1_reg_out),
    .in1(d_1_max_out),
    .out(d_1_at_max_out)
);
coreir_add #(
    .width(16)
) d_1_inc (
    .in0(d_1_reg_out),
    .in1(_U10_out),
    .out(d_1_inc_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_1_max (
    .out(d_1_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_1_min (
    .out(d_1_min_out)
);
coreir_mux #(
    .width(16)
) d_1_next_value (
    .in0(d_1_reg_out),
    .in1(d_1_next_value_at_max_out),
    .sel(d_1_am__U16_out),
    .out(d_1_next_value_out)
);
coreir_mux #(
    .width(16)
) d_1_next_value_at_max (
    .in0(d_1_inc_out),
    .in1(d_1_min_out),
    .sel(d_1_at_max_out),
    .out(d_1_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
corebit_and d_2_am__U17 (
    .in0(true_out),
    .in1(d_3_at_max_out),
    .out(d_2_am__U17_out)
);
coreir_eq #(
    .width(16)
) d_2_at_max (
    .in0(d_2_reg_out),
    .in1(d_2_max_out),
    .out(d_2_at_max_out)
);
coreir_add #(
    .width(16)
) d_2_inc (
    .in0(d_2_reg_out),
    .in1(_U10_out),
    .out(d_2_inc_out)
);
coreir_const #(
    .value(16'h003f),
    .width(16)
) d_2_max (
    .out(d_2_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_2_min (
    .out(d_2_min_out)
);
coreir_mux #(
    .width(16)
) d_2_next_value (
    .in0(d_2_reg_out),
    .in1(d_2_next_value_at_max_out),
    .sel(d_2_am__U17_out),
    .out(d_2_next_value_out)
);
coreir_mux #(
    .width(16)
) d_2_next_value_at_max (
    .in0(d_2_inc_out),
    .in1(d_2_min_out),
    .sel(d_2_at_max_out),
    .out(d_2_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
coreir_eq #(
    .width(16)
) d_3_at_max (
    .in0(d_3_reg_out),
    .in1(d_3_max_out),
    .out(d_3_at_max_out)
);
coreir_add #(
    .width(16)
) d_3_inc (
    .in0(d_3_reg_out),
    .in1(_U10_out),
    .out(d_3_inc_out)
);
coreir_const #(
    .value(16'h003f),
    .width(16)
) d_3_max (
    .out(d_3_max_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) d_3_min (
    .out(d_3_min_out)
);
coreir_mux #(
    .width(16)
) d_3_next_value (
    .in0(d_3_reg_out),
    .in1(d_3_next_value_at_max_out),
    .sel(true_out),
    .out(d_3_next_value_out)
);
coreir_mux #(
    .width(16)
) d_3_next_value_at_max (
    .in0(d_3_inc_out),
    .in1(d_3_min_out),
    .sel(d_3_at_max_out),
    .out(d_3_next_value_at_max_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_next_value_out),
    .clk(clk),
    .out(d_3_reg_out),
    .en(cmp_time_out)
);
coreir_add #(
    .width(16)
) inc_time (
    .in0(cycle_time_out),
    .in1(_U10_out),
    .out(inc_time_out)
);
coreir_sub #(
    .width(16)
) time_diff (
    .in0(affine_func_out),
    .in1(cycle_time_out),
    .out(time_diff_out)
);
corebit_const #(
    .value(1'b1)
) true (
    .out(true_out)
);
assign d_0 = d_0_reg_out;
assign d_1 = d_1_reg_out;
assign d_2 = d_2_reg_out;
assign d_3 = d_3_reg_out;
assign valid = cmp_time_out;
endmodule

module pointwise (
    input clk,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write_0,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read_0,
    output input_copy_stencil_op_hcompute_hw_input_stencil_read_valid
);
wire [15:0] _U88_out;
wire [15:0] hw_input_stencil_op_hcompute_mult_stencil_read_0;
wire [15:0] mult_stencil_op_hcompute_hw_output_stencil_read_0;
wire [15:0] op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write_0;
wire op_hcompute_hw_input_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_out_0;
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_out_1;
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_out_2;
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_out_3;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_d_0;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_d_1;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_d_2;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_d_3;
wire op_hcompute_hw_input_stencil_port_controller_valid;
wire op_hcompute_hw_input_stencil_read_start_out;
wire op_hcompute_hw_input_stencil_write_start_out;
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_out_0;
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_out_1;
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_out_2;
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_out_3;
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write_0;
wire op_hcompute_hw_output_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out_0;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out_1;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out_2;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out_3;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d_0;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d_1;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d_2;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d_3;
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire op_hcompute_hw_output_stencil_read_start_out;
wire op_hcompute_hw_output_stencil_write_start_out;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out_0;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out_1;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out_2;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out_3;
wire [15:0] op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write_0;
wire op_hcompute_mult_stencil_exe_start_out;
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_out_0;
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_out_1;
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_out_2;
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_out_3;
wire [15:0] op_hcompute_mult_stencil_port_controller_d_0;
wire [15:0] op_hcompute_mult_stencil_port_controller_d_1;
wire [15:0] op_hcompute_mult_stencil_port_controller_d_2;
wire [15:0] op_hcompute_mult_stencil_port_controller_d_3;
wire op_hcompute_mult_stencil_port_controller_valid;
wire op_hcompute_mult_stencil_read_start_out;
wire op_hcompute_mult_stencil_write_start_out;
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_out_0;
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_out_1;
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_out_2;
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_out_3;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U88 (
    .in(input_copy_stencil_op_hcompute_hw_input_stencil_read_0),
    .clk(clk),
    .out(_U88_out)
);
hw_input_stencil_ub hw_input_stencil (
    .clk(clk),
    .op_hcompute_hw_input_stencil_write_0(op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write_0),
    .op_hcompute_hw_input_stencil_write_ctrl_vars_0(op_hcompute_hw_input_stencil_write_start_control_vars_out_0),
    .op_hcompute_hw_input_stencil_write_ctrl_vars_1(op_hcompute_hw_input_stencil_write_start_control_vars_out_1),
    .op_hcompute_hw_input_stencil_write_ctrl_vars_2(op_hcompute_hw_input_stencil_write_start_control_vars_out_2),
    .op_hcompute_hw_input_stencil_write_ctrl_vars_3(op_hcompute_hw_input_stencil_write_start_control_vars_out_3),
    .op_hcompute_hw_input_stencil_write_wen(op_hcompute_hw_input_stencil_write_start_out),
    .op_hcompute_mult_stencil_read_0(hw_input_stencil_op_hcompute_mult_stencil_read_0),
    .op_hcompute_mult_stencil_read_ctrl_vars_0(op_hcompute_mult_stencil_port_controller_d_0),
    .op_hcompute_mult_stencil_read_ctrl_vars_1(op_hcompute_mult_stencil_port_controller_d_1),
    .op_hcompute_mult_stencil_read_ctrl_vars_2(op_hcompute_mult_stencil_port_controller_d_2),
    .op_hcompute_mult_stencil_read_ctrl_vars_3(op_hcompute_mult_stencil_port_controller_d_3),
    .op_hcompute_mult_stencil_read_ren(op_hcompute_mult_stencil_read_start_out)
);
mult_stencil_ub mult_stencil (
    .clk(clk),
    .op_hcompute_hw_output_stencil_read_0(mult_stencil_op_hcompute_hw_output_stencil_read_0),
    .op_hcompute_hw_output_stencil_read_ctrl_vars_0(op_hcompute_hw_output_stencil_port_controller_d_0),
    .op_hcompute_hw_output_stencil_read_ctrl_vars_1(op_hcompute_hw_output_stencil_port_controller_d_1),
    .op_hcompute_hw_output_stencil_read_ctrl_vars_2(op_hcompute_hw_output_stencil_port_controller_d_2),
    .op_hcompute_hw_output_stencil_read_ctrl_vars_3(op_hcompute_hw_output_stencil_port_controller_d_3),
    .op_hcompute_hw_output_stencil_read_ren(op_hcompute_hw_output_stencil_read_start_out),
    .op_hcompute_mult_stencil_write_0(op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write_0),
    .op_hcompute_mult_stencil_write_ctrl_vars_0(op_hcompute_mult_stencil_write_start_control_vars_out_0),
    .op_hcompute_mult_stencil_write_ctrl_vars_1(op_hcompute_mult_stencil_write_start_control_vars_out_1),
    .op_hcompute_mult_stencil_write_ctrl_vars_2(op_hcompute_mult_stencil_write_start_control_vars_out_2),
    .op_hcompute_mult_stencil_write_ctrl_vars_3(op_hcompute_mult_stencil_write_start_control_vars_out_3),
    .op_hcompute_mult_stencil_write_wen(op_hcompute_mult_stencil_write_start_out)
);
cu_op_hcompute_hw_input_stencil op_hcompute_hw_input_stencil (
    .clk(clk),
    .hw_input_stencil_op_hcompute_hw_input_stencil_write_0(op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write_0),
    .input_copy_stencil_op_hcompute_hw_input_stencil_read_0(_U88_out)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_input_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_hw_input_stencil_port_controller_valid),
    .out(op_hcompute_hw_input_stencil_exe_start_out)
);
array_delay_U23 op_hcompute_hw_input_stencil_exe_start_control_vars (
    .clk(clk),
    .in_0(op_hcompute_hw_input_stencil_port_controller_d_0),
    .in_1(op_hcompute_hw_input_stencil_port_controller_d_1),
    .in_2(op_hcompute_hw_input_stencil_port_controller_d_2),
    .in_3(op_hcompute_hw_input_stencil_port_controller_d_3),
    .out_0(op_hcompute_hw_input_stencil_exe_start_control_vars_out_0),
    .out_1(op_hcompute_hw_input_stencil_exe_start_control_vars_out_1),
    .out_2(op_hcompute_hw_input_stencil_exe_start_control_vars_out_2),
    .out_3(op_hcompute_hw_input_stencil_exe_start_control_vars_out_3)
);
affine_controller__U0 op_hcompute_hw_input_stencil_port_controller (
    .clk(clk),
    .d_0(op_hcompute_hw_input_stencil_port_controller_d_0),
    .d_1(op_hcompute_hw_input_stencil_port_controller_d_1),
    .d_2(op_hcompute_hw_input_stencil_port_controller_d_2),
    .d_3(op_hcompute_hw_input_stencil_port_controller_d_3),
    .valid(op_hcompute_hw_input_stencil_port_controller_valid)
);
corebit_wire op_hcompute_hw_input_stencil_read_start (
    .in(op_hcompute_hw_input_stencil_port_controller_valid),
    .out(op_hcompute_hw_input_stencil_read_start_out)
);
corebit_wire op_hcompute_hw_input_stencil_write_start (
    .in(op_hcompute_hw_input_stencil_exe_start_out),
    .out(op_hcompute_hw_input_stencil_write_start_out)
);
array_delay_U18 op_hcompute_hw_input_stencil_write_start_control_vars (
    .clk(clk),
    .in_0(op_hcompute_hw_input_stencil_port_controller_d_0),
    .in_1(op_hcompute_hw_input_stencil_port_controller_d_1),
    .in_2(op_hcompute_hw_input_stencil_port_controller_d_2),
    .in_3(op_hcompute_hw_input_stencil_port_controller_d_3),
    .out_0(op_hcompute_hw_input_stencil_write_start_control_vars_out_0),
    .out_1(op_hcompute_hw_input_stencil_write_start_control_vars_out_1),
    .out_2(op_hcompute_hw_input_stencil_write_start_control_vars_out_2),
    .out_3(op_hcompute_hw_input_stencil_write_start_control_vars_out_3)
);
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(clk),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write_0(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write_0),
    .mult_stencil_op_hcompute_hw_output_stencil_read_0(mult_stencil_op_hcompute_hw_output_stencil_read_0)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_output_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_hw_output_stencil_port_controller_valid),
    .out(op_hcompute_hw_output_stencil_exe_start_out)
);
array_delay_U79 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(clk),
    .in_0(op_hcompute_hw_output_stencil_port_controller_d_0),
    .in_1(op_hcompute_hw_output_stencil_port_controller_d_1),
    .in_2(op_hcompute_hw_output_stencil_port_controller_d_2),
    .in_3(op_hcompute_hw_output_stencil_port_controller_d_3),
    .out_0(op_hcompute_hw_output_stencil_exe_start_control_vars_out_0),
    .out_1(op_hcompute_hw_output_stencil_exe_start_control_vars_out_1),
    .out_2(op_hcompute_hw_output_stencil_exe_start_control_vars_out_2),
    .out_3(op_hcompute_hw_output_stencil_exe_start_control_vars_out_3)
);
affine_controller__U56 op_hcompute_hw_output_stencil_port_controller (
    .clk(clk),
    .d_0(op_hcompute_hw_output_stencil_port_controller_d_0),
    .d_1(op_hcompute_hw_output_stencil_port_controller_d_1),
    .d_2(op_hcompute_hw_output_stencil_port_controller_d_2),
    .d_3(op_hcompute_hw_output_stencil_port_controller_d_3),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid)
);
corebit_wire op_hcompute_hw_output_stencil_read_start (
    .in(op_hcompute_hw_output_stencil_port_controller_valid),
    .out(op_hcompute_hw_output_stencil_read_start_out)
);
corebit_wire op_hcompute_hw_output_stencil_write_start (
    .in(op_hcompute_hw_output_stencil_exe_start_out),
    .out(op_hcompute_hw_output_stencil_write_start_out)
);
array_delay_U74 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(clk),
    .in_0(op_hcompute_hw_output_stencil_port_controller_d_0),
    .in_1(op_hcompute_hw_output_stencil_port_controller_d_1),
    .in_2(op_hcompute_hw_output_stencil_port_controller_d_2),
    .in_3(op_hcompute_hw_output_stencil_port_controller_d_3),
    .out_0(op_hcompute_hw_output_stencil_write_start_control_vars_out_0),
    .out_1(op_hcompute_hw_output_stencil_write_start_control_vars_out_1),
    .out_2(op_hcompute_hw_output_stencil_write_start_control_vars_out_2),
    .out_3(op_hcompute_hw_output_stencil_write_start_control_vars_out_3)
);
cu_op_hcompute_mult_stencil op_hcompute_mult_stencil (
    .clk(clk),
    .hw_input_stencil_op_hcompute_mult_stencil_read_0(hw_input_stencil_op_hcompute_mult_stencil_read_0),
    .mult_stencil_op_hcompute_mult_stencil_write_0(op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write_0)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_mult_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_mult_stencil_port_controller_valid),
    .out(op_hcompute_mult_stencil_exe_start_out)
);
array_delay_U51 op_hcompute_mult_stencil_exe_start_control_vars (
    .clk(clk),
    .in_0(op_hcompute_mult_stencil_port_controller_d_0),
    .in_1(op_hcompute_mult_stencil_port_controller_d_1),
    .in_2(op_hcompute_mult_stencil_port_controller_d_2),
    .in_3(op_hcompute_mult_stencil_port_controller_d_3),
    .out_0(op_hcompute_mult_stencil_exe_start_control_vars_out_0),
    .out_1(op_hcompute_mult_stencil_exe_start_control_vars_out_1),
    .out_2(op_hcompute_mult_stencil_exe_start_control_vars_out_2),
    .out_3(op_hcompute_mult_stencil_exe_start_control_vars_out_3)
);
affine_controller__U28 op_hcompute_mult_stencil_port_controller (
    .clk(clk),
    .d_0(op_hcompute_mult_stencil_port_controller_d_0),
    .d_1(op_hcompute_mult_stencil_port_controller_d_1),
    .d_2(op_hcompute_mult_stencil_port_controller_d_2),
    .d_3(op_hcompute_mult_stencil_port_controller_d_3),
    .valid(op_hcompute_mult_stencil_port_controller_valid)
);
corebit_wire op_hcompute_mult_stencil_read_start (
    .in(op_hcompute_mult_stencil_port_controller_valid),
    .out(op_hcompute_mult_stencil_read_start_out)
);
corebit_wire op_hcompute_mult_stencil_write_start (
    .in(op_hcompute_mult_stencil_exe_start_out),
    .out(op_hcompute_mult_stencil_write_start_out)
);
array_delay_U46 op_hcompute_mult_stencil_write_start_control_vars (
    .clk(clk),
    .in_0(op_hcompute_mult_stencil_port_controller_d_0),
    .in_1(op_hcompute_mult_stencil_port_controller_d_1),
    .in_2(op_hcompute_mult_stencil_port_controller_d_2),
    .in_3(op_hcompute_mult_stencil_port_controller_d_3),
    .out_0(op_hcompute_mult_stencil_write_start_control_vars_out_0),
    .out_1(op_hcompute_mult_stencil_write_start_control_vars_out_1),
    .out_2(op_hcompute_mult_stencil_write_start_control_vars_out_2),
    .out_3(op_hcompute_mult_stencil_write_start_control_vars_out_3)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_0 = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write_0;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start_out;
assign input_copy_stencil_op_hcompute_hw_input_stencil_read_valid = op_hcompute_hw_input_stencil_read_start_out;
endmodule

