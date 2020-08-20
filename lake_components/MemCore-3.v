module coreir_wrap (
    input in,
    output out
);
  assign out = in;
endmodule

module coreir_slice #(
    parameter hi = 1,
    parameter lo = 0,
    parameter width = 1
) (
    input [width-1:0] in,
    output [hi-lo-1:0] out
);
  assign out = in[hi-1:lo];
endmodule

module coreir_reg_arst #(
    parameter width = 1,
    parameter arst_posedge = 1,
    parameter clk_posedge = 1,
    parameter init = 1
) (
    input clk,
    input arst,
    input [width-1:0] in,
    output [width-1:0] out
);
  reg [width-1:0] outReg;
  wire real_rst;
  assign real_rst = arst_posedge ? arst : ~arst;
  wire real_clk;
  assign real_clk = clk_posedge ? clk : ~clk;
  always @(posedge real_clk, posedge real_rst) begin
    if (real_rst) outReg <= init;
    else outReg <= in;
  end
  assign out = outReg;
endmodule

module coreir_orr #(
    parameter width = 1
) (
    input [width-1:0] in,
    output out
);
  assign out = |in;
endmodule

module coreir_or #(
    parameter width = 1
) (
    input [width-1:0] in0,
    input [width-1:0] in1,
    output [width-1:0] out
);
  assign out = in0 | in1;
endmodule

module coreir_not #(
    parameter width = 1
) (
    input [width-1:0] in,
    output [width-1:0] out
);
  assign out = ~in;
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

module commonlib_muxn__N2__width4 (
    input [3:0] in_data_0,
    input [3:0] in_data_1,
    input [0:0] in_sel,
    output [3:0] out
);
wire [3:0] _join_out;
coreir_mux #(
    .width(4)
) _join (
    .in0(in_data_0),
    .in1(in_data_1),
    .sel(in_sel[0]),
    .out(_join_out)
);
assign out = _join_out;
endmodule

module commonlib_muxn__N2__width32 (
    input [31:0] in_data_0,
    input [31:0] in_data_1,
    input [0:0] in_sel,
    output [31:0] out
);
wire [31:0] _join_out;
coreir_mux #(
    .width(32)
) _join (
    .in0(in_data_0),
    .in1(in_data_1),
    .sel(in_sel[0]),
    .out(_join_out)
);
assign out = _join_out;
endmodule

module commonlib_muxn__N4__width32 (
    input [31:0] in_data_0,
    input [31:0] in_data_1,
    input [31:0] in_data_2,
    input [31:0] in_data_3,
    input [1:0] in_sel,
    output [31:0] out
);
wire [31:0] _join_out;
wire [31:0] muxN_0_out;
wire [31:0] muxN_1_out;
wire [0:0] sel_slice0_out;
wire [0:0] sel_slice1_out;
coreir_mux #(
    .width(32)
) _join (
    .in0(muxN_0_out),
    .in1(muxN_1_out),
    .sel(in_sel[1]),
    .out(_join_out)
);
commonlib_muxn__N2__width32 muxN_0 (
    .in_data_0(in_data_0),
    .in_data_1(in_data_1),
    .in_sel(sel_slice0_out),
    .out(muxN_0_out)
);
commonlib_muxn__N2__width32 muxN_1 (
    .in_data_0(in_data_2),
    .in_data_1(in_data_3),
    .in_sel(sel_slice1_out),
    .out(muxN_1_out)
);
coreir_slice #(
    .hi(1),
    .lo(0),
    .width(2)
) sel_slice0 (
    .in(in_sel),
    .out(sel_slice0_out)
);
coreir_slice #(
    .hi(1),
    .lo(0),
    .width(2)
) sel_slice1 (
    .in(in_sel),
    .out(sel_slice1_out)
);
assign out = _join_out;
endmodule

module commonlib_muxn__N8__width32 (
    input [31:0] in_data_0,
    input [31:0] in_data_1,
    input [31:0] in_data_2,
    input [31:0] in_data_3,
    input [31:0] in_data_4,
    input [31:0] in_data_5,
    input [31:0] in_data_6,
    input [31:0] in_data_7,
    input [2:0] in_sel,
    output [31:0] out
);
wire [31:0] _join_out;
wire [31:0] muxN_0_out;
wire [31:0] muxN_1_out;
wire [1:0] sel_slice0_out;
wire [1:0] sel_slice1_out;
coreir_mux #(
    .width(32)
) _join (
    .in0(muxN_0_out),
    .in1(muxN_1_out),
    .sel(in_sel[2]),
    .out(_join_out)
);
commonlib_muxn__N4__width32 muxN_0 (
    .in_data_0(in_data_0),
    .in_data_1(in_data_1),
    .in_data_2(in_data_2),
    .in_data_3(in_data_3),
    .in_sel(sel_slice0_out),
    .out(muxN_0_out)
);
commonlib_muxn__N4__width32 muxN_1 (
    .in_data_0(in_data_4),
    .in_data_1(in_data_5),
    .in_data_2(in_data_6),
    .in_data_3(in_data_7),
    .in_sel(sel_slice1_out),
    .out(muxN_1_out)
);
coreir_slice #(
    .hi(2),
    .lo(0),
    .width(3)
) sel_slice0 (
    .in(in_sel),
    .out(sel_slice0_out)
);
coreir_slice #(
    .hi(2),
    .lo(0),
    .width(3)
) sel_slice1 (
    .in(in_sel),
    .out(sel_slice1_out)
);
assign out = _join_out;
endmodule

module commonlib_muxn__N2__width2 (
    input [1:0] in_data_0,
    input [1:0] in_data_1,
    input [0:0] in_sel,
    output [1:0] out
);
wire [1:0] _join_out;
coreir_mux #(
    .width(2)
) _join (
    .in0(in_data_0),
    .in1(in_data_1),
    .sel(in_sel[0]),
    .out(_join_out)
);
assign out = _join_out;
endmodule

module commonlib_muxn__N2__width16 (
    input [15:0] in_data_0,
    input [15:0] in_data_1,
    input [0:0] in_sel,
    output [15:0] out
);
wire [15:0] _join_out;
coreir_mux #(
    .width(16)
) _join (
    .in0(in_data_0),
    .in1(in_data_1),
    .sel(in_sel[0]),
    .out(_join_out)
);
assign out = _join_out;
endmodule

module commonlib_muxn__N2__width1 (
    input [0:0] in_data_0,
    input [0:0] in_data_1,
    input [0:0] in_sel,
    output [0:0] out
);
wire [0:0] _join_out;
coreir_mux #(
    .width(1)
) _join (
    .in0(in_data_0),
    .in1(in_data_1),
    .sel(in_sel[0]),
    .out(_join_out)
);
assign out = _join_out;
endmodule

module commonlib_muxn__N16__width32 (
    input [31:0] in_data_0,
    input [31:0] in_data_1,
    input [31:0] in_data_10,
    input [31:0] in_data_11,
    input [31:0] in_data_12,
    input [31:0] in_data_13,
    input [31:0] in_data_14,
    input [31:0] in_data_15,
    input [31:0] in_data_2,
    input [31:0] in_data_3,
    input [31:0] in_data_4,
    input [31:0] in_data_5,
    input [31:0] in_data_6,
    input [31:0] in_data_7,
    input [31:0] in_data_8,
    input [31:0] in_data_9,
    input [3:0] in_sel,
    output [31:0] out
);
wire [31:0] _join_out;
wire [31:0] muxN_0_out;
wire [31:0] muxN_1_out;
wire [2:0] sel_slice0_out;
wire [2:0] sel_slice1_out;
coreir_mux #(
    .width(32)
) _join (
    .in0(muxN_0_out),
    .in1(muxN_1_out),
    .sel(in_sel[3]),
    .out(_join_out)
);
commonlib_muxn__N8__width32 muxN_0 (
    .in_data_0(in_data_0),
    .in_data_1(in_data_1),
    .in_data_2(in_data_2),
    .in_data_3(in_data_3),
    .in_data_4(in_data_4),
    .in_data_5(in_data_5),
    .in_data_6(in_data_6),
    .in_data_7(in_data_7),
    .in_sel(sel_slice0_out),
    .out(muxN_0_out)
);
commonlib_muxn__N8__width32 muxN_1 (
    .in_data_0(in_data_8),
    .in_data_1(in_data_9),
    .in_data_2(in_data_10),
    .in_data_3(in_data_11),
    .in_data_4(in_data_12),
    .in_data_5(in_data_13),
    .in_data_6(in_data_14),
    .in_data_7(in_data_15),
    .in_sel(sel_slice1_out),
    .out(muxN_1_out)
);
coreir_slice #(
    .hi(3),
    .lo(0),
    .width(4)
) sel_slice0 (
    .in(in_sel),
    .out(sel_slice0_out)
);
coreir_slice #(
    .hi(3),
    .lo(0),
    .width(4)
) sel_slice1 (
    .in(in_sel),
    .out(sel_slice1_out)
);
assign out = _join_out;
endmodule

module commonlib_muxn__N32__width32 (
    input [31:0] in_data_0,
    input [31:0] in_data_1,
    input [31:0] in_data_10,
    input [31:0] in_data_11,
    input [31:0] in_data_12,
    input [31:0] in_data_13,
    input [31:0] in_data_14,
    input [31:0] in_data_15,
    input [31:0] in_data_16,
    input [31:0] in_data_17,
    input [31:0] in_data_18,
    input [31:0] in_data_19,
    input [31:0] in_data_2,
    input [31:0] in_data_20,
    input [31:0] in_data_21,
    input [31:0] in_data_22,
    input [31:0] in_data_23,
    input [31:0] in_data_24,
    input [31:0] in_data_25,
    input [31:0] in_data_26,
    input [31:0] in_data_27,
    input [31:0] in_data_28,
    input [31:0] in_data_29,
    input [31:0] in_data_3,
    input [31:0] in_data_30,
    input [31:0] in_data_31,
    input [31:0] in_data_4,
    input [31:0] in_data_5,
    input [31:0] in_data_6,
    input [31:0] in_data_7,
    input [31:0] in_data_8,
    input [31:0] in_data_9,
    input [4:0] in_sel,
    output [31:0] out
);
wire [31:0] _join_out;
wire [31:0] muxN_0_out;
wire [31:0] muxN_1_out;
wire [3:0] sel_slice0_out;
wire [3:0] sel_slice1_out;
coreir_mux #(
    .width(32)
) _join (
    .in0(muxN_0_out),
    .in1(muxN_1_out),
    .sel(in_sel[4]),
    .out(_join_out)
);
commonlib_muxn__N16__width32 muxN_0 (
    .in_data_0(in_data_0),
    .in_data_1(in_data_1),
    .in_data_10(in_data_10),
    .in_data_11(in_data_11),
    .in_data_12(in_data_12),
    .in_data_13(in_data_13),
    .in_data_14(in_data_14),
    .in_data_15(in_data_15),
    .in_data_2(in_data_2),
    .in_data_3(in_data_3),
    .in_data_4(in_data_4),
    .in_data_5(in_data_5),
    .in_data_6(in_data_6),
    .in_data_7(in_data_7),
    .in_data_8(in_data_8),
    .in_data_9(in_data_9),
    .in_sel(sel_slice0_out),
    .out(muxN_0_out)
);
commonlib_muxn__N16__width32 muxN_1 (
    .in_data_0(in_data_16),
    .in_data_1(in_data_17),
    .in_data_10(in_data_26),
    .in_data_11(in_data_27),
    .in_data_12(in_data_28),
    .in_data_13(in_data_29),
    .in_data_14(in_data_30),
    .in_data_15(in_data_31),
    .in_data_2(in_data_18),
    .in_data_3(in_data_19),
    .in_data_4(in_data_20),
    .in_data_5(in_data_21),
    .in_data_6(in_data_22),
    .in_data_7(in_data_23),
    .in_data_8(in_data_24),
    .in_data_9(in_data_25),
    .in_sel(sel_slice1_out),
    .out(muxN_1_out)
);
coreir_slice #(
    .hi(4),
    .lo(0),
    .width(5)
) sel_slice0 (
    .in(in_sel),
    .out(sel_slice0_out)
);
coreir_slice #(
    .hi(4),
    .lo(0),
    .width(5)
) sel_slice1 (
    .in(in_sel),
    .out(sel_slice1_out)
);
assign out = _join_out;
endmodule

module commonlib_muxn__N24__width32 (
    input [31:0] in_data_0,
    input [31:0] in_data_1,
    input [31:0] in_data_10,
    input [31:0] in_data_11,
    input [31:0] in_data_12,
    input [31:0] in_data_13,
    input [31:0] in_data_14,
    input [31:0] in_data_15,
    input [31:0] in_data_16,
    input [31:0] in_data_17,
    input [31:0] in_data_18,
    input [31:0] in_data_19,
    input [31:0] in_data_2,
    input [31:0] in_data_20,
    input [31:0] in_data_21,
    input [31:0] in_data_22,
    input [31:0] in_data_23,
    input [31:0] in_data_3,
    input [31:0] in_data_4,
    input [31:0] in_data_5,
    input [31:0] in_data_6,
    input [31:0] in_data_7,
    input [31:0] in_data_8,
    input [31:0] in_data_9,
    input [4:0] in_sel,
    output [31:0] out
);
wire [31:0] _join_out;
wire [31:0] muxN_0_out;
wire [31:0] muxN_1_out;
wire [3:0] sel_slice0_out;
wire [2:0] sel_slice1_out;
coreir_mux #(
    .width(32)
) _join (
    .in0(muxN_0_out),
    .in1(muxN_1_out),
    .sel(in_sel[4]),
    .out(_join_out)
);
commonlib_muxn__N16__width32 muxN_0 (
    .in_data_0(in_data_0),
    .in_data_1(in_data_1),
    .in_data_10(in_data_10),
    .in_data_11(in_data_11),
    .in_data_12(in_data_12),
    .in_data_13(in_data_13),
    .in_data_14(in_data_14),
    .in_data_15(in_data_15),
    .in_data_2(in_data_2),
    .in_data_3(in_data_3),
    .in_data_4(in_data_4),
    .in_data_5(in_data_5),
    .in_data_6(in_data_6),
    .in_data_7(in_data_7),
    .in_data_8(in_data_8),
    .in_data_9(in_data_9),
    .in_sel(sel_slice0_out),
    .out(muxN_0_out)
);
commonlib_muxn__N8__width32 muxN_1 (
    .in_data_0(in_data_16),
    .in_data_1(in_data_17),
    .in_data_2(in_data_18),
    .in_data_3(in_data_19),
    .in_data_4(in_data_20),
    .in_data_5(in_data_21),
    .in_data_6(in_data_22),
    .in_data_7(in_data_23),
    .in_sel(sel_slice1_out),
    .out(muxN_1_out)
);
coreir_slice #(
    .hi(4),
    .lo(0),
    .width(5)
) sel_slice0 (
    .in(in_sel),
    .out(sel_slice0_out)
);
coreir_slice #(
    .hi(3),
    .lo(0),
    .width(5)
) sel_slice1 (
    .in(in_sel),
    .out(sel_slice1_out)
);
assign out = _join_out;
endmodule

module commonlib_muxn__N56__width32 (
    input [31:0] in_data_0,
    input [31:0] in_data_1,
    input [31:0] in_data_10,
    input [31:0] in_data_11,
    input [31:0] in_data_12,
    input [31:0] in_data_13,
    input [31:0] in_data_14,
    input [31:0] in_data_15,
    input [31:0] in_data_16,
    input [31:0] in_data_17,
    input [31:0] in_data_18,
    input [31:0] in_data_19,
    input [31:0] in_data_2,
    input [31:0] in_data_20,
    input [31:0] in_data_21,
    input [31:0] in_data_22,
    input [31:0] in_data_23,
    input [31:0] in_data_24,
    input [31:0] in_data_25,
    input [31:0] in_data_26,
    input [31:0] in_data_27,
    input [31:0] in_data_28,
    input [31:0] in_data_29,
    input [31:0] in_data_3,
    input [31:0] in_data_30,
    input [31:0] in_data_31,
    input [31:0] in_data_32,
    input [31:0] in_data_33,
    input [31:0] in_data_34,
    input [31:0] in_data_35,
    input [31:0] in_data_36,
    input [31:0] in_data_37,
    input [31:0] in_data_38,
    input [31:0] in_data_39,
    input [31:0] in_data_4,
    input [31:0] in_data_40,
    input [31:0] in_data_41,
    input [31:0] in_data_42,
    input [31:0] in_data_43,
    input [31:0] in_data_44,
    input [31:0] in_data_45,
    input [31:0] in_data_46,
    input [31:0] in_data_47,
    input [31:0] in_data_48,
    input [31:0] in_data_49,
    input [31:0] in_data_5,
    input [31:0] in_data_50,
    input [31:0] in_data_51,
    input [31:0] in_data_52,
    input [31:0] in_data_53,
    input [31:0] in_data_54,
    input [31:0] in_data_55,
    input [31:0] in_data_6,
    input [31:0] in_data_7,
    input [31:0] in_data_8,
    input [31:0] in_data_9,
    input [5:0] in_sel,
    output [31:0] out
);
wire [31:0] _join_out;
wire [31:0] muxN_0_out;
wire [31:0] muxN_1_out;
wire [4:0] sel_slice0_out;
wire [4:0] sel_slice1_out;
coreir_mux #(
    .width(32)
) _join (
    .in0(muxN_0_out),
    .in1(muxN_1_out),
    .sel(in_sel[5]),
    .out(_join_out)
);
commonlib_muxn__N32__width32 muxN_0 (
    .in_data_0(in_data_0),
    .in_data_1(in_data_1),
    .in_data_10(in_data_10),
    .in_data_11(in_data_11),
    .in_data_12(in_data_12),
    .in_data_13(in_data_13),
    .in_data_14(in_data_14),
    .in_data_15(in_data_15),
    .in_data_16(in_data_16),
    .in_data_17(in_data_17),
    .in_data_18(in_data_18),
    .in_data_19(in_data_19),
    .in_data_2(in_data_2),
    .in_data_20(in_data_20),
    .in_data_21(in_data_21),
    .in_data_22(in_data_22),
    .in_data_23(in_data_23),
    .in_data_24(in_data_24),
    .in_data_25(in_data_25),
    .in_data_26(in_data_26),
    .in_data_27(in_data_27),
    .in_data_28(in_data_28),
    .in_data_29(in_data_29),
    .in_data_3(in_data_3),
    .in_data_30(in_data_30),
    .in_data_31(in_data_31),
    .in_data_4(in_data_4),
    .in_data_5(in_data_5),
    .in_data_6(in_data_6),
    .in_data_7(in_data_7),
    .in_data_8(in_data_8),
    .in_data_9(in_data_9),
    .in_sel(sel_slice0_out),
    .out(muxN_0_out)
);
commonlib_muxn__N24__width32 muxN_1 (
    .in_data_0(in_data_32),
    .in_data_1(in_data_33),
    .in_data_10(in_data_42),
    .in_data_11(in_data_43),
    .in_data_12(in_data_44),
    .in_data_13(in_data_45),
    .in_data_14(in_data_46),
    .in_data_15(in_data_47),
    .in_data_16(in_data_48),
    .in_data_17(in_data_49),
    .in_data_18(in_data_50),
    .in_data_19(in_data_51),
    .in_data_2(in_data_34),
    .in_data_20(in_data_52),
    .in_data_21(in_data_53),
    .in_data_22(in_data_54),
    .in_data_23(in_data_55),
    .in_data_3(in_data_35),
    .in_data_4(in_data_36),
    .in_data_5(in_data_37),
    .in_data_6(in_data_38),
    .in_data_7(in_data_39),
    .in_data_8(in_data_40),
    .in_data_9(in_data_41),
    .in_sel(sel_slice1_out),
    .out(muxN_1_out)
);
coreir_slice #(
    .hi(5),
    .lo(0),
    .width(6)
) sel_slice0 (
    .in(in_sel),
    .out(sel_slice0_out)
);
coreir_slice #(
    .hi(5),
    .lo(0),
    .width(6)
) sel_slice1 (
    .in(in_sel),
    .out(sel_slice1_out)
);
assign out = _join_out;
endmodule

module ZextWrapper_4_32 (
    input [3:0] I,
    output [31:0] O
);
wire bit_const_0_None_out;
corebit_const #(
    .value(1'b0)
) bit_const_0_None (
    .out(bit_const_0_None_out)
);
assign O = {bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,I[3],I[2],I[1],I[0]};
endmodule

module ZextWrapper_2_32 (
    input [1:0] I,
    output [31:0] O
);
wire bit_const_0_None_out;
corebit_const #(
    .value(1'b0)
) bit_const_0_None (
    .out(bit_const_0_None_out)
);
assign O = {bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,I[1],I[0]};
endmodule

module ZextWrapper_1_32 (
    input [0:0] I,
    output [31:0] O
);
wire bit_const_0_None_out;
corebit_const #(
    .value(1'b0)
) bit_const_0_None (
    .out(bit_const_0_None_out)
);
assign O = {bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,I[0]};
endmodule

module ZextWrapper_16_32 (
    input [15:0] I,
    output [31:0] O
);
wire bit_const_0_None_out;
corebit_const #(
    .value(1'b0)
) bit_const_0_None (
    .out(bit_const_0_None_out)
);
assign O = {bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,bit_const_0_None_out,I[15],I[14],I[13],I[12],I[11],I[10],I[9],I[8],I[7],I[6],I[5],I[4],I[3],I[2],I[1],I[0]};
endmodule

module Or1x1 (
    input [0:0] I0,
    output [0:0] O
);
wire orr_inst0_out;
coreir_orr #(
    .width(1)
) orr_inst0 (
    .in(I0),
    .out(orr_inst0_out)
);
assign O = orr_inst0_out;
endmodule

module Mux56x32 (
    input [31:0] I0,
    input [31:0] I1,
    input [31:0] I2,
    input [31:0] I3,
    input [31:0] I4,
    input [31:0] I5,
    input [31:0] I6,
    input [31:0] I7,
    input [31:0] I8,
    input [31:0] I9,
    input [31:0] I10,
    input [31:0] I11,
    input [31:0] I12,
    input [31:0] I13,
    input [31:0] I14,
    input [31:0] I15,
    input [31:0] I16,
    input [31:0] I17,
    input [31:0] I18,
    input [31:0] I19,
    input [31:0] I20,
    input [31:0] I21,
    input [31:0] I22,
    input [31:0] I23,
    input [31:0] I24,
    input [31:0] I25,
    input [31:0] I26,
    input [31:0] I27,
    input [31:0] I28,
    input [31:0] I29,
    input [31:0] I30,
    input [31:0] I31,
    input [31:0] I32,
    input [31:0] I33,
    input [31:0] I34,
    input [31:0] I35,
    input [31:0] I36,
    input [31:0] I37,
    input [31:0] I38,
    input [31:0] I39,
    input [31:0] I40,
    input [31:0] I41,
    input [31:0] I42,
    input [31:0] I43,
    input [31:0] I44,
    input [31:0] I45,
    input [31:0] I46,
    input [31:0] I47,
    input [31:0] I48,
    input [31:0] I49,
    input [31:0] I50,
    input [31:0] I51,
    input [31:0] I52,
    input [31:0] I53,
    input [31:0] I54,
    input [31:0] I55,
    input [5:0] S,
    output [31:0] O
);
wire [31:0] coreir_commonlib_mux56x32_inst0_out;
commonlib_muxn__N56__width32 coreir_commonlib_mux56x32_inst0 (
    .in_data_0(I0),
    .in_data_1(I1),
    .in_data_10(I10),
    .in_data_11(I11),
    .in_data_12(I12),
    .in_data_13(I13),
    .in_data_14(I14),
    .in_data_15(I15),
    .in_data_16(I16),
    .in_data_17(I17),
    .in_data_18(I18),
    .in_data_19(I19),
    .in_data_2(I2),
    .in_data_20(I20),
    .in_data_21(I21),
    .in_data_22(I22),
    .in_data_23(I23),
    .in_data_24(I24),
    .in_data_25(I25),
    .in_data_26(I26),
    .in_data_27(I27),
    .in_data_28(I28),
    .in_data_29(I29),
    .in_data_3(I3),
    .in_data_30(I30),
    .in_data_31(I31),
    .in_data_32(I32),
    .in_data_33(I33),
    .in_data_34(I34),
    .in_data_35(I35),
    .in_data_36(I36),
    .in_data_37(I37),
    .in_data_38(I38),
    .in_data_39(I39),
    .in_data_4(I4),
    .in_data_40(I40),
    .in_data_41(I41),
    .in_data_42(I42),
    .in_data_43(I43),
    .in_data_44(I44),
    .in_data_45(I45),
    .in_data_46(I46),
    .in_data_47(I47),
    .in_data_48(I48),
    .in_data_49(I49),
    .in_data_5(I5),
    .in_data_50(I50),
    .in_data_51(I51),
    .in_data_52(I52),
    .in_data_53(I53),
    .in_data_54(I54),
    .in_data_55(I55),
    .in_data_6(I6),
    .in_data_7(I7),
    .in_data_8(I8),
    .in_data_9(I9),
    .in_sel(S),
    .out(coreir_commonlib_mux56x32_inst0_out)
);
assign O = coreir_commonlib_mux56x32_inst0_out;
endmodule

module MuxWrapper_56_32 (
    input [31:0] I_0,
    input [31:0] I_1,
    input [31:0] I_10,
    input [31:0] I_11,
    input [31:0] I_12,
    input [31:0] I_13,
    input [31:0] I_14,
    input [31:0] I_15,
    input [31:0] I_16,
    input [31:0] I_17,
    input [31:0] I_18,
    input [31:0] I_19,
    input [31:0] I_2,
    input [31:0] I_20,
    input [31:0] I_21,
    input [31:0] I_22,
    input [31:0] I_23,
    input [31:0] I_24,
    input [31:0] I_25,
    input [31:0] I_26,
    input [31:0] I_27,
    input [31:0] I_28,
    input [31:0] I_29,
    input [31:0] I_3,
    input [31:0] I_30,
    input [31:0] I_31,
    input [31:0] I_32,
    input [31:0] I_33,
    input [31:0] I_34,
    input [31:0] I_35,
    input [31:0] I_36,
    input [31:0] I_37,
    input [31:0] I_38,
    input [31:0] I_39,
    input [31:0] I_4,
    input [31:0] I_40,
    input [31:0] I_41,
    input [31:0] I_42,
    input [31:0] I_43,
    input [31:0] I_44,
    input [31:0] I_45,
    input [31:0] I_46,
    input [31:0] I_47,
    input [31:0] I_48,
    input [31:0] I_49,
    input [31:0] I_5,
    input [31:0] I_50,
    input [31:0] I_51,
    input [31:0] I_52,
    input [31:0] I_53,
    input [31:0] I_54,
    input [31:0] I_55,
    input [31:0] I_6,
    input [31:0] I_7,
    input [31:0] I_8,
    input [31:0] I_9,
    output [31:0] O,
    input [5:0] S
);
wire [31:0] Mux56x32_inst0_O;
Mux56x32 Mux56x32_inst0 (
    .I0(I_0),
    .I1(I_1),
    .I2(I_2),
    .I3(I_3),
    .I4(I_4),
    .I5(I_5),
    .I6(I_6),
    .I7(I_7),
    .I8(I_8),
    .I9(I_9),
    .I10(I_10),
    .I11(I_11),
    .I12(I_12),
    .I13(I_13),
    .I14(I_14),
    .I15(I_15),
    .I16(I_16),
    .I17(I_17),
    .I18(I_18),
    .I19(I_19),
    .I20(I_20),
    .I21(I_21),
    .I22(I_22),
    .I23(I_23),
    .I24(I_24),
    .I25(I_25),
    .I26(I_26),
    .I27(I_27),
    .I28(I_28),
    .I29(I_29),
    .I30(I_30),
    .I31(I_31),
    .I32(I_32),
    .I33(I_33),
    .I34(I_34),
    .I35(I_35),
    .I36(I_36),
    .I37(I_37),
    .I38(I_38),
    .I39(I_39),
    .I40(I_40),
    .I41(I_41),
    .I42(I_42),
    .I43(I_43),
    .I44(I_44),
    .I45(I_45),
    .I46(I_46),
    .I47(I_47),
    .I48(I_48),
    .I49(I_49),
    .I50(I_50),
    .I51(I_51),
    .I52(I_52),
    .I53(I_53),
    .I54(I_54),
    .I55(I_55),
    .S(S),
    .O(Mux56x32_inst0_O)
);
assign O = Mux56x32_inst0_O;
endmodule

module Mux2xOutBits4 (
    input [3:0] I0,
    input [3:0] I1,
    input S,
    output [3:0] O
);
wire [3:0] coreir_commonlib_mux2x4_inst0_out;
commonlib_muxn__N2__width4 coreir_commonlib_mux2x4_inst0 (
    .in_data_0(I0),
    .in_data_1(I1),
    .in_sel(S),
    .out(coreir_commonlib_mux2x4_inst0_out)
);
assign O = coreir_commonlib_mux2x4_inst0_out;
endmodule

module Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_4 (
    input [3:0] I,
    output [3:0] O,
    input CLK,
    input CE,
    input ASYNCRESET
);
wire [3:0] enable_mux_O;
wire [3:0] value_out;
Mux2xOutBits4 enable_mux (
    .I0(value_out),
    .I1(I),
    .S(CE),
    .O(enable_mux_O)
);
coreir_reg_arst #(
    .arst_posedge(1'b1),
    .clk_posedge(1'b1),
    .init(4'h0),
    .width(4)
) value (
    .clk(CLK),
    .arst(ASYNCRESET),
    .in(enable_mux_O),
    .out(value_out)
);
assign O = value_out;
endmodule

module Mux2xOutBits2 (
    input [1:0] I0,
    input [1:0] I1,
    input S,
    output [1:0] O
);
wire [1:0] coreir_commonlib_mux2x2_inst0_out;
commonlib_muxn__N2__width2 coreir_commonlib_mux2x2_inst0 (
    .in_data_0(I0),
    .in_data_1(I1),
    .in_sel(S),
    .out(coreir_commonlib_mux2x2_inst0_out)
);
assign O = coreir_commonlib_mux2x2_inst0_out;
endmodule

module Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_2 (
    input [1:0] I,
    output [1:0] O,
    input CLK,
    input CE,
    input ASYNCRESET
);
wire [1:0] enable_mux_O;
wire [1:0] value_out;
Mux2xOutBits2 enable_mux (
    .I0(value_out),
    .I1(I),
    .S(CE),
    .O(enable_mux_O)
);
coreir_reg_arst #(
    .arst_posedge(1'b1),
    .clk_posedge(1'b1),
    .init(2'h0),
    .width(2)
) value (
    .clk(CLK),
    .arst(ASYNCRESET),
    .in(enable_mux_O),
    .out(value_out)
);
assign O = value_out;
endmodule

module Mux2xOutBits16 (
    input [15:0] I0,
    input [15:0] I1,
    input S,
    output [15:0] O
);
wire [15:0] coreir_commonlib_mux2x16_inst0_out;
commonlib_muxn__N2__width16 coreir_commonlib_mux2x16_inst0 (
    .in_data_0(I0),
    .in_data_1(I1),
    .in_sel(S),
    .out(coreir_commonlib_mux2x16_inst0_out)
);
assign O = coreir_commonlib_mux2x16_inst0_out;
endmodule

module Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 (
    input [15:0] I,
    output [15:0] O,
    input CLK,
    input CE,
    input ASYNCRESET
);
wire [15:0] enable_mux_O;
wire [15:0] value_out;
Mux2xOutBits16 enable_mux (
    .I0(value_out),
    .I1(I),
    .S(CE),
    .O(enable_mux_O)
);
coreir_reg_arst #(
    .arst_posedge(1'b1),
    .clk_posedge(1'b1),
    .init(16'h0000),
    .width(16)
) value (
    .clk(CLK),
    .arst(ASYNCRESET),
    .in(enable_mux_O),
    .out(value_out)
);
assign O = value_out;
endmodule

module Mux2xOutBits1 (
    input [0:0] I0,
    input [0:0] I1,
    input S,
    output [0:0] O
);
wire [0:0] coreir_commonlib_mux2x1_inst0_out;
commonlib_muxn__N2__width1 coreir_commonlib_mux2x1_inst0 (
    .in_data_0(I0),
    .in_data_1(I1),
    .in_sel(S),
    .out(coreir_commonlib_mux2x1_inst0_out)
);
assign O = coreir_commonlib_mux2x1_inst0_out;
endmodule

module Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 (
    input [0:0] I,
    output [0:0] O,
    input CLK,
    input CE,
    input ASYNCRESET
);
wire [0:0] enable_mux_O;
wire [0:0] value_out;
Mux2xOutBits1 enable_mux (
    .I0(value_out),
    .I1(I),
    .S(CE),
    .O(enable_mux_O)
);
coreir_reg_arst #(
    .arst_posedge(1'b1),
    .clk_posedge(1'b1),
    .init(1'h0),
    .width(1)
) value (
    .clk(CLK),
    .arst(ASYNCRESET),
    .in(enable_mux_O),
    .out(value_out)
);
assign O = value_out;
endmodule

module Mux2x1 (
    input [0:0] I0,
    input [0:0] I1,
    input S,
    output [0:0] O
);
wire [0:0] coreir_commonlib_mux2x1_inst0_out;
commonlib_muxn__N2__width1 coreir_commonlib_mux2x1_inst0 (
    .in_data_0(I0),
    .in_data_1(I1),
    .in_sel(S),
    .out(coreir_commonlib_mux2x1_inst0_out)
);
assign O = coreir_commonlib_mux2x1_inst0_out;
endmodule

module MuxWrapper_2_1 (
    input [0:0] I_0,
    input [0:0] I_1,
    output [0:0] O,
    input [0:0] S
);
wire [0:0] Mux2x1_inst0_O;
Mux2x1 Mux2x1_inst0 (
    .I0(I_0),
    .I1(I_1),
    .S(S[0]),
    .O(Mux2x1_inst0_O)
);
assign O = Mux2x1_inst0_O;
endmodule

module Chain (
  input logic [0:0] [15:0] chain_data_in,
  output logic [0:0] [15:0] chain_data_out,
  input logic chain_idx_output,
  input logic chain_valid_in,
  output logic chain_valid_out,
  input logic clk_en,
  input logic [0:0] [15:0] curr_tile_data_out,
  input logic curr_tile_valid_out,
  output logic [0:0] [15:0] data_out_tile,
  input logic enable_chain_output,
  input logic flush,
  output logic valid_out_tile
);

logic [0:0][15:0] chain_data_out_inter;
logic chain_valid_out_inter;
always_comb begin
  if (enable_chain_output) begin
    data_out_tile = chain_data_out_inter;
  end
  else data_out_tile = curr_tile_data_out;
end
always_comb begin
  if (enable_chain_output) begin
    if (~(chain_idx_output == 1'h0)) begin
      valid_out_tile = 1'h0;
    end
    else valid_out_tile = chain_valid_out_inter;
  end
  else valid_out_tile = curr_tile_valid_out;
end
always_comb begin
  chain_data_out = chain_data_out_inter;
end
always_comb begin
  if ((chain_idx_output == 1'h0) | (~enable_chain_output)) begin
    chain_valid_out = 1'h0;
  end
  else chain_valid_out = chain_valid_out_inter;
end
always_comb begin
  if (chain_valid_in == 1'h0) begin
    chain_data_out_inter[0] = curr_tile_data_out[0];
    chain_valid_out_inter = curr_tile_valid_out;
  end
  else begin
    chain_data_out_inter[0] = chain_data_in[0];
    chain_valid_out_inter = chain_valid_in;
  end
end
endmodule   // Chain

module LakeTop (
  input logic [0:0] [15:0] addr_in,
  input logic [0:0] [15:0] chain_data_in,
  output logic [0:0] [15:0] chain_data_out,
  input logic chain_idx_input,
  input logic chain_idx_output,
  input logic chain_valid_in,
  output logic chain_valid_out,
  input logic clk,
  input logic clk_en,
  input logic [7:0] config_addr_in,
  input logic [31:0] config_data_in,
  output logic [0:0] [31:0] config_data_out,
  input logic config_en,
  input logic config_read,
  input logic config_write,
  input logic [0:0] [15:0] data_in,
  output logic [0:0] [15:0] data_out,
  input logic enable_chain_input,
  input logic enable_chain_output,
  input logic flush,
  input logic [1:0] mode,
  input logic ren_in,
  input logic rst_n,
  input logic [15:0] strg_ub_sram_read_addr_gen_starting_addr,
  input logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides,
  input logic [3:0] strg_ub_sram_read_loops_dimensionality,
  input logic [5:0] [15:0] strg_ub_sram_read_loops_ranges,
  input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides,
  input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr,
  input logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides,
  input logic [3:0] strg_ub_sram_write_loops_dimensionality,
  input logic [5:0] [15:0] strg_ub_sram_write_loops_ranges,
  input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides,
  input logic tile_en,
  output logic valid_out,
  input logic wen_in
);

logic cfg_seq_clk;
logic [15:0] config_data_in_shrt;
logic [0:0][15:0] config_data_out_shrt;
logic config_seq_clk;
logic config_seq_clk_en;
logic [0:0][15:0] data_out_tile;
logic gclk;
logic [7:0] mem_addr_cfg;
logic [0:0] mem_cen_dp;
logic [0:0] mem_cen_in;
logic [0:0][15:0] mem_data_cfg;
logic [0:0][0:0][0:0][15:0] mem_data_dp;
logic [0:0][0:0][0:0][15:0] mem_data_in;
logic [0:0][0:0][15:0] mem_data_low_pt;
logic [0:0][0:0][0:0][15:0] mem_data_out;
logic mem_ren_cfg;
logic mem_wen_cfg;
logic [0:0] mem_wen_dp;
logic [0:0] mem_wen_in;
logic [0:0][0:0][7:0] rd_mem_addr_dp;
logic [0:0][0:0][7:0] rd_mem_addr_in;
logic rf_0_clk;
logic [0:0][15:0] rf_0_data_in;
logic [0:0][15:0] rf_0_data_out;
logic [7:0] rf_0_rd_addr;
logic rf_0_ren;
logic rf_0_wen;
logic [7:0] rf_0_wr_addr;
logic strg_ub_clk;
logic [0:0] ub_cen_to_mem;
logic [0:0][15:0] ub_data_out;
logic [0:0][0:0][0:0][15:0] ub_data_to_mem;
logic [0:0][0:0][7:0] ub_rd_addr_to_mem;
logic ub_valid_out;
logic [0:0] ub_wen_to_mem;
logic [0:0][0:0][7:0] ub_wr_addr_to_mem;
logic valid_out_tile;
logic [0:0][0:0][7:0] wr_mem_addr_dp;
logic [0:0][0:0][7:0] wr_mem_addr_in;
assign config_data_in_shrt = config_data_in[15:0];
assign config_data_out[0] = 32'(config_data_out_shrt[0]);
assign gclk = clk & tile_en;
assign mem_data_low_pt[0] = mem_data_out[0][0];
assign cfg_seq_clk = gclk;
assign config_seq_clk = cfg_seq_clk;
assign config_seq_clk_en = clk_en | (|config_en);
assign mem_wen_in = (|config_en) ? mem_wen_cfg: mem_wen_dp;
assign mem_cen_in = (|config_en) ? mem_ren_cfg: mem_cen_dp;
assign wr_mem_addr_in[0][0] = (|config_en) ? mem_addr_cfg: wr_mem_addr_dp[0][0];
assign rd_mem_addr_in[0][0] = (|config_en) ? mem_addr_cfg: rd_mem_addr_dp[0][0];
assign mem_data_in[0][0] = (|config_en) ? mem_data_cfg: mem_data_dp[0][0];
assign strg_ub_clk = gclk;
assign mem_data_dp = ub_data_to_mem;
assign mem_wen_dp = ub_wen_to_mem;
assign mem_cen_dp = ub_cen_to_mem;
assign wr_mem_addr_dp = ub_wr_addr_to_mem;
assign rd_mem_addr_dp = ub_rd_addr_to_mem;
assign rf_0_clk = gclk;
assign rf_0_wen = mem_wen_in;
assign rf_0_wr_addr = wr_mem_addr_in[0];
assign rf_0_rd_addr = rd_mem_addr_in[0];
assign rf_0_data_in = mem_data_in[0];
assign mem_data_out[0] = rf_0_data_out;
assign rf_0_ren = mem_cen_dp;
assign data_out_tile[0] = ub_data_out[0];
assign valid_out_tile = ub_valid_out;
storage_config_seq config_seq (
  .addr_out(mem_addr_cfg),
  .clk(config_seq_clk),
  .clk_en(config_seq_clk_en),
  .config_addr_in(config_addr_in),
  .config_data_in(config_data_in_shrt),
  .config_en(config_en),
  .config_rd(config_read),
  .config_wr(config_write),
  .flush(flush),
  .rd_data_out(config_data_out_shrt),
  .rd_data_stg(mem_data_low_pt),
  .ren_out(mem_ren_cfg),
  .rst_n(rst_n),
  .wen_out(mem_wen_cfg),
  .wr_data(mem_data_cfg)
);

strg_ub_thin strg_ub (
  .clk(strg_ub_clk),
  .clk_en(clk_en),
  .data_from_strg(mem_data_out),
  .data_in(data_in),
  .data_out(ub_data_out),
  .data_to_strg(ub_data_to_mem),
  .flush(flush),
  .rd_addr_out(ub_rd_addr_to_mem),
  .ren_to_strg(ub_cen_to_mem),
  .rst_n(rst_n),
  .sram_read_addr_gen_starting_addr(strg_ub_sram_read_addr_gen_starting_addr),
  .sram_read_addr_gen_strides(strg_ub_sram_read_addr_gen_strides),
  .sram_read_loops_dimensionality(strg_ub_sram_read_loops_dimensionality),
  .sram_read_loops_ranges(strg_ub_sram_read_loops_ranges),
  .sram_read_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr),
  .sram_read_sched_gen_sched_addr_gen_strides(strg_ub_sram_read_sched_gen_sched_addr_gen_strides),
  .sram_write_addr_gen_starting_addr(strg_ub_sram_write_addr_gen_starting_addr),
  .sram_write_addr_gen_strides(strg_ub_sram_write_addr_gen_strides),
  .sram_write_loops_dimensionality(strg_ub_sram_write_loops_dimensionality),
  .sram_write_loops_ranges(strg_ub_sram_write_loops_ranges),
  .sram_write_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr),
  .sram_write_sched_gen_sched_addr_gen_strides(strg_ub_sram_write_sched_gen_sched_addr_gen_strides),
  .wen_to_strg(ub_wen_to_mem),
  .wr_addr_out(ub_wr_addr_to_mem)
);

register_file rf_0 (
  .clk(rf_0_clk),
  .clk_en(clk_en),
  .data_in(rf_0_data_in),
  .data_out(rf_0_data_out),
  .flush(flush),
  .rd_addr(rf_0_rd_addr),
  .ren(rf_0_ren),
  .wen(rf_0_wen),
  .wr_addr(rf_0_wr_addr)
);

Chain chain (
  .chain_data_in(chain_data_in),
  .chain_data_out(chain_data_out),
  .chain_idx_output(chain_idx_output),
  .chain_valid_in(chain_valid_in),
  .chain_valid_out(chain_valid_out),
  .clk_en(clk_en),
  .curr_tile_data_out(data_out_tile),
  .curr_tile_valid_out(valid_out_tile),
  .data_out_tile(data_out),
  .enable_chain_output(enable_chain_output),
  .flush(flush),
  .valid_out_tile(valid_out)
);

endmodule   // LakeTop

module LakeTop_W (
  input logic [0:0] [15:0] addr_in,
  input logic [0:0] [15:0] chain_data_in,
  output logic [0:0] [15:0] chain_data_out,
  input logic chain_idx_input,
  input logic chain_idx_output,
  input logic chain_valid_in,
  output logic chain_valid_out,
  input logic clk,
  input logic clk_en,
  input logic [7:0] config_addr_in,
  input logic [31:0] config_data_in,
  output logic [0:0] [31:0] config_data_out,
  input logic config_en,
  input logic config_read,
  input logic config_write,
  input logic [0:0] [15:0] data_in,
  output logic [0:0] [15:0] data_out,
  input logic enable_chain_input,
  input logic enable_chain_output,
  input logic flush,
  input logic [1:0] mode,
  input logic ren_in,
  input logic rst_n,
  input logic [15:0] strg_ub_sram_read_addr_gen_starting_addr,
  input logic [15:0] strg_ub_sram_read_addr_gen_strides_0,
  input logic [15:0] strg_ub_sram_read_addr_gen_strides_1,
  input logic [15:0] strg_ub_sram_read_addr_gen_strides_2,
  input logic [15:0] strg_ub_sram_read_addr_gen_strides_3,
  input logic [15:0] strg_ub_sram_read_addr_gen_strides_4,
  input logic [15:0] strg_ub_sram_read_addr_gen_strides_5,
  input logic [3:0] strg_ub_sram_read_loops_dimensionality,
  input logic [15:0] strg_ub_sram_read_loops_ranges_0,
  input logic [15:0] strg_ub_sram_read_loops_ranges_1,
  input logic [15:0] strg_ub_sram_read_loops_ranges_2,
  input logic [15:0] strg_ub_sram_read_loops_ranges_3,
  input logic [15:0] strg_ub_sram_read_loops_ranges_4,
  input logic [15:0] strg_ub_sram_read_loops_ranges_5,
  input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr,
  input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides_0,
  input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides_1,
  input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides_2,
  input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides_3,
  input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides_4,
  input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides_5,
  input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr,
  input logic [15:0] strg_ub_sram_write_addr_gen_strides_0,
  input logic [15:0] strg_ub_sram_write_addr_gen_strides_1,
  input logic [15:0] strg_ub_sram_write_addr_gen_strides_2,
  input logic [15:0] strg_ub_sram_write_addr_gen_strides_3,
  input logic [15:0] strg_ub_sram_write_addr_gen_strides_4,
  input logic [15:0] strg_ub_sram_write_addr_gen_strides_5,
  input logic [3:0] strg_ub_sram_write_loops_dimensionality,
  input logic [15:0] strg_ub_sram_write_loops_ranges_0,
  input logic [15:0] strg_ub_sram_write_loops_ranges_1,
  input logic [15:0] strg_ub_sram_write_loops_ranges_2,
  input logic [15:0] strg_ub_sram_write_loops_ranges_3,
  input logic [15:0] strg_ub_sram_write_loops_ranges_4,
  input logic [15:0] strg_ub_sram_write_loops_ranges_5,
  input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr,
  input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides_0,
  input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides_1,
  input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides_2,
  input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides_3,
  input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides_4,
  input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides_5,
  input logic tile_en,
  output logic valid_out,
  input logic wen_in
);

logic [5:0][15:0] LakeTop_strg_ub_sram_read_addr_gen_strides;
logic [5:0][15:0] LakeTop_strg_ub_sram_read_loops_ranges;
logic [5:0][15:0] LakeTop_strg_ub_sram_read_sched_gen_sched_addr_gen_strides;
logic [5:0][15:0] LakeTop_strg_ub_sram_write_addr_gen_strides;
logic [5:0][15:0] LakeTop_strg_ub_sram_write_loops_ranges;
logic [5:0][15:0] LakeTop_strg_ub_sram_write_sched_gen_sched_addr_gen_strides;
assign LakeTop_strg_ub_sram_read_addr_gen_strides[0] = strg_ub_sram_read_addr_gen_strides_0;
assign LakeTop_strg_ub_sram_read_addr_gen_strides[1] = strg_ub_sram_read_addr_gen_strides_1;
assign LakeTop_strg_ub_sram_read_addr_gen_strides[2] = strg_ub_sram_read_addr_gen_strides_2;
assign LakeTop_strg_ub_sram_read_addr_gen_strides[3] = strg_ub_sram_read_addr_gen_strides_3;
assign LakeTop_strg_ub_sram_read_addr_gen_strides[4] = strg_ub_sram_read_addr_gen_strides_4;
assign LakeTop_strg_ub_sram_read_addr_gen_strides[5] = strg_ub_sram_read_addr_gen_strides_5;
assign LakeTop_strg_ub_sram_read_loops_ranges[0] = strg_ub_sram_read_loops_ranges_0;
assign LakeTop_strg_ub_sram_read_loops_ranges[1] = strg_ub_sram_read_loops_ranges_1;
assign LakeTop_strg_ub_sram_read_loops_ranges[2] = strg_ub_sram_read_loops_ranges_2;
assign LakeTop_strg_ub_sram_read_loops_ranges[3] = strg_ub_sram_read_loops_ranges_3;
assign LakeTop_strg_ub_sram_read_loops_ranges[4] = strg_ub_sram_read_loops_ranges_4;
assign LakeTop_strg_ub_sram_read_loops_ranges[5] = strg_ub_sram_read_loops_ranges_5;
assign LakeTop_strg_ub_sram_read_sched_gen_sched_addr_gen_strides[0] = strg_ub_sram_read_sched_gen_sched_addr_gen_strides_0;
assign LakeTop_strg_ub_sram_read_sched_gen_sched_addr_gen_strides[1] = strg_ub_sram_read_sched_gen_sched_addr_gen_strides_1;
assign LakeTop_strg_ub_sram_read_sched_gen_sched_addr_gen_strides[2] = strg_ub_sram_read_sched_gen_sched_addr_gen_strides_2;
assign LakeTop_strg_ub_sram_read_sched_gen_sched_addr_gen_strides[3] = strg_ub_sram_read_sched_gen_sched_addr_gen_strides_3;
assign LakeTop_strg_ub_sram_read_sched_gen_sched_addr_gen_strides[4] = strg_ub_sram_read_sched_gen_sched_addr_gen_strides_4;
assign LakeTop_strg_ub_sram_read_sched_gen_sched_addr_gen_strides[5] = strg_ub_sram_read_sched_gen_sched_addr_gen_strides_5;
assign LakeTop_strg_ub_sram_write_addr_gen_strides[0] = strg_ub_sram_write_addr_gen_strides_0;
assign LakeTop_strg_ub_sram_write_addr_gen_strides[1] = strg_ub_sram_write_addr_gen_strides_1;
assign LakeTop_strg_ub_sram_write_addr_gen_strides[2] = strg_ub_sram_write_addr_gen_strides_2;
assign LakeTop_strg_ub_sram_write_addr_gen_strides[3] = strg_ub_sram_write_addr_gen_strides_3;
assign LakeTop_strg_ub_sram_write_addr_gen_strides[4] = strg_ub_sram_write_addr_gen_strides_4;
assign LakeTop_strg_ub_sram_write_addr_gen_strides[5] = strg_ub_sram_write_addr_gen_strides_5;
assign LakeTop_strg_ub_sram_write_loops_ranges[0] = strg_ub_sram_write_loops_ranges_0;
assign LakeTop_strg_ub_sram_write_loops_ranges[1] = strg_ub_sram_write_loops_ranges_1;
assign LakeTop_strg_ub_sram_write_loops_ranges[2] = strg_ub_sram_write_loops_ranges_2;
assign LakeTop_strg_ub_sram_write_loops_ranges[3] = strg_ub_sram_write_loops_ranges_3;
assign LakeTop_strg_ub_sram_write_loops_ranges[4] = strg_ub_sram_write_loops_ranges_4;
assign LakeTop_strg_ub_sram_write_loops_ranges[5] = strg_ub_sram_write_loops_ranges_5;
assign LakeTop_strg_ub_sram_write_sched_gen_sched_addr_gen_strides[0] = strg_ub_sram_write_sched_gen_sched_addr_gen_strides_0;
assign LakeTop_strg_ub_sram_write_sched_gen_sched_addr_gen_strides[1] = strg_ub_sram_write_sched_gen_sched_addr_gen_strides_1;
assign LakeTop_strg_ub_sram_write_sched_gen_sched_addr_gen_strides[2] = strg_ub_sram_write_sched_gen_sched_addr_gen_strides_2;
assign LakeTop_strg_ub_sram_write_sched_gen_sched_addr_gen_strides[3] = strg_ub_sram_write_sched_gen_sched_addr_gen_strides_3;
assign LakeTop_strg_ub_sram_write_sched_gen_sched_addr_gen_strides[4] = strg_ub_sram_write_sched_gen_sched_addr_gen_strides_4;
assign LakeTop_strg_ub_sram_write_sched_gen_sched_addr_gen_strides[5] = strg_ub_sram_write_sched_gen_sched_addr_gen_strides_5;
LakeTop LakeTop (
  .addr_in(addr_in),
  .chain_data_in(chain_data_in),
  .chain_data_out(chain_data_out),
  .chain_idx_input(chain_idx_input),
  .chain_idx_output(chain_idx_output),
  .chain_valid_in(chain_valid_in),
  .chain_valid_out(chain_valid_out),
  .clk(clk),
  .clk_en(clk_en),
  .config_addr_in(config_addr_in),
  .config_data_in(config_data_in),
  .config_data_out(config_data_out),
  .config_en(config_en),
  .config_read(config_read),
  .config_write(config_write),
  .data_in(data_in),
  .data_out(data_out),
  .enable_chain_input(enable_chain_input),
  .enable_chain_output(enable_chain_output),
  .flush(flush),
  .mode(mode),
  .ren_in(ren_in),
  .rst_n(rst_n),
  .strg_ub_sram_read_addr_gen_starting_addr(strg_ub_sram_read_addr_gen_starting_addr),
  .strg_ub_sram_read_addr_gen_strides(LakeTop_strg_ub_sram_read_addr_gen_strides),
  .strg_ub_sram_read_loops_dimensionality(strg_ub_sram_read_loops_dimensionality),
  .strg_ub_sram_read_loops_ranges(LakeTop_strg_ub_sram_read_loops_ranges),
  .strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr),
  .strg_ub_sram_read_sched_gen_sched_addr_gen_strides(LakeTop_strg_ub_sram_read_sched_gen_sched_addr_gen_strides),
  .strg_ub_sram_write_addr_gen_starting_addr(strg_ub_sram_write_addr_gen_starting_addr),
  .strg_ub_sram_write_addr_gen_strides(LakeTop_strg_ub_sram_write_addr_gen_strides),
  .strg_ub_sram_write_loops_dimensionality(strg_ub_sram_write_loops_dimensionality),
  .strg_ub_sram_write_loops_ranges(LakeTop_strg_ub_sram_write_loops_ranges),
  .strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr),
  .strg_ub_sram_write_sched_gen_sched_addr_gen_strides(LakeTop_strg_ub_sram_write_sched_gen_sched_addr_gen_strides),
  .tile_en(tile_en),
  .valid_out(valid_out),
  .wen_in(wen_in)
);

endmodule   // LakeTop_W

module addr_gen_6 (
  output logic [15:0] addr_out,
  input logic clk,
  input logic clk_en,
  input logic flush,
  input logic [2:0] mux_sel,
  input logic rst_n,
  input logic [15:0] starting_addr,
  input logic step,
  input logic [5:0] [15:0] strides
);

logic [15:0] calc_addr;
logic [15:0] current_addr;
logic [15:0] strt_addr;
assign strt_addr = starting_addr;
assign addr_out = calc_addr;
assign calc_addr = strt_addr + current_addr;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    current_addr <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      current_addr <= 16'h0;
    end
    else if (step) begin
      current_addr <= current_addr + strides[mux_sel];
    end
  end
end
endmodule   // addr_gen_6

module for_loop_6 (
  input logic clk,
  input logic clk_en,
  input logic [3:0] dimensionality,
  input logic flush,
  output logic [2:0] mux_sel_out,
  input logic [5:0] [15:0] ranges,
  input logic rst_n,
  input logic step
);

logic [5:0] clear;
logic [5:0][15:0] dim_counter;
logic done;
logic [5:0] inc;
logic [15:0] inced_cnt;
logic [5:0] max_value;
logic maxed_value;
logic [2:0] mux_sel;
assign mux_sel_out = mux_sel;
assign inced_cnt = dim_counter[mux_sel] + 16'h1;
assign maxed_value = (dim_counter[mux_sel] == ranges[mux_sel]) & inc[mux_sel];
always_comb begin
  mux_sel = 3'h0;
  done = 1'h0;
  if (~done) begin
    if (~max_value[0]) begin
      mux_sel = 3'h0;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[1]) begin
      mux_sel = 3'h1;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[2]) begin
      mux_sel = 3'h2;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[3]) begin
      mux_sel = 3'h3;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[4]) begin
      mux_sel = 3'h4;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[5]) begin
      mux_sel = 3'h5;
      done = 1'h1;
    end
  end
end
always_comb begin
  clear[0] = 1'h0;
  if ((mux_sel > 3'h0) & step) begin
    clear[0] = 1'h1;
  end
end
always_comb begin
  inc[0] = 1'h0;
  if ((5'h0 == 5'h0) & step) begin
    inc[0] = 1'h1;
  end
  else if ((mux_sel == 3'h0) & step) begin
    inc[0] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[0] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[0] <= 16'h0;
    end
    else if (clear[0]) begin
      dim_counter[0] <= 16'h0;
    end
    else if (inc[0]) begin
      dim_counter[0] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[0] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[0] <= 1'h0;
    end
    else if (clear[0]) begin
      max_value[0] <= 1'h0;
    end
    else if (inc[0]) begin
      max_value[0] <= maxed_value;
    end
  end
end
always_comb begin
  clear[1] = 1'h0;
  if ((mux_sel > 3'h1) & step) begin
    clear[1] = 1'h1;
  end
end
always_comb begin
  inc[1] = 1'h0;
  if ((5'h1 == 5'h0) & step) begin
    inc[1] = 1'h1;
  end
  else if ((mux_sel == 3'h1) & step) begin
    inc[1] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[1] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[1] <= 16'h0;
    end
    else if (clear[1]) begin
      dim_counter[1] <= 16'h0;
    end
    else if (inc[1]) begin
      dim_counter[1] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[1] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[1] <= 1'h0;
    end
    else if (clear[1]) begin
      max_value[1] <= 1'h0;
    end
    else if (inc[1]) begin
      max_value[1] <= maxed_value;
    end
  end
end
always_comb begin
  clear[2] = 1'h0;
  if ((mux_sel > 3'h2) & step) begin
    clear[2] = 1'h1;
  end
end
always_comb begin
  inc[2] = 1'h0;
  if ((5'h2 == 5'h0) & step) begin
    inc[2] = 1'h1;
  end
  else if ((mux_sel == 3'h2) & step) begin
    inc[2] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[2] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[2] <= 16'h0;
    end
    else if (clear[2]) begin
      dim_counter[2] <= 16'h0;
    end
    else if (inc[2]) begin
      dim_counter[2] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[2] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[2] <= 1'h0;
    end
    else if (clear[2]) begin
      max_value[2] <= 1'h0;
    end
    else if (inc[2]) begin
      max_value[2] <= maxed_value;
    end
  end
end
always_comb begin
  clear[3] = 1'h0;
  if ((mux_sel > 3'h3) & step) begin
    clear[3] = 1'h1;
  end
end
always_comb begin
  inc[3] = 1'h0;
  if ((5'h3 == 5'h0) & step) begin
    inc[3] = 1'h1;
  end
  else if ((mux_sel == 3'h3) & step) begin
    inc[3] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[3] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[3] <= 16'h0;
    end
    else if (clear[3]) begin
      dim_counter[3] <= 16'h0;
    end
    else if (inc[3]) begin
      dim_counter[3] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[3] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[3] <= 1'h0;
    end
    else if (clear[3]) begin
      max_value[3] <= 1'h0;
    end
    else if (inc[3]) begin
      max_value[3] <= maxed_value;
    end
  end
end
always_comb begin
  clear[4] = 1'h0;
  if ((mux_sel > 3'h4) & step) begin
    clear[4] = 1'h1;
  end
end
always_comb begin
  inc[4] = 1'h0;
  if ((5'h4 == 5'h0) & step) begin
    inc[4] = 1'h1;
  end
  else if ((mux_sel == 3'h4) & step) begin
    inc[4] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[4] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[4] <= 16'h0;
    end
    else if (clear[4]) begin
      dim_counter[4] <= 16'h0;
    end
    else if (inc[4]) begin
      dim_counter[4] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[4] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[4] <= 1'h0;
    end
    else if (clear[4]) begin
      max_value[4] <= 1'h0;
    end
    else if (inc[4]) begin
      max_value[4] <= maxed_value;
    end
  end
end
always_comb begin
  clear[5] = 1'h0;
  if ((mux_sel > 3'h5) & step) begin
    clear[5] = 1'h1;
  end
end
always_comb begin
  inc[5] = 1'h0;
  if ((5'h5 == 5'h0) & step) begin
    inc[5] = 1'h1;
  end
  else if ((mux_sel == 3'h5) & step) begin
    inc[5] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[5] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[5] <= 16'h0;
    end
    else if (clear[5]) begin
      dim_counter[5] <= 16'h0;
    end
    else if (inc[5]) begin
      dim_counter[5] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[5] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[5] <= 1'h0;
    end
    else if (clear[5]) begin
      max_value[5] <= 1'h0;
    end
    else if (inc[5]) begin
      max_value[5] <= maxed_value;
    end
  end
end
endmodule   // for_loop_6

module register_file (
  input logic clk,
  input logic clk_en,
  input logic [0:0] [15:0] data_in,
  output logic [0:0] [15:0] data_out,
  input logic flush,
  input logic [7:0] rd_addr,
  input logic ren,
  input logic wen,
  input logic [7:0] wr_addr
);

logic [255:0][0:0][15:0] data_array;

always_ff @(posedge clk) begin
  if (clk_en) begin
    if (wen) begin
      data_array[wr_addr] <= data_in;
    end
  end
end

always_ff @(posedge clk) begin
  if (clk_en) begin
    if (ren) begin
      data_out <= data_array[rd_addr];
    end
  end
end
endmodule   // register_file

module sched_gen_6 (
  input logic clk,
  input logic clk_en,
  input logic [15:0] cycle_count,
  input logic flush,
  input logic [2:0] mux_sel,
  input logic rst_n,
  input logic [15:0] sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] sched_addr_gen_strides,
  output logic valid_output
);

logic [15:0] addr_out;
logic valid_out;
always_comb begin
  if (cycle_count[15:0] == addr_out[15:0]) begin
    valid_out = 1'h1;
  end
  else valid_out = 1'h0;
end
always_comb begin
  valid_output = valid_out;
end
addr_gen_6 sched_addr_gen (
  .addr_out(addr_out),
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(mux_sel),
  .rst_n(rst_n),
  .starting_addr(sched_addr_gen_starting_addr),
  .step(valid_out),
  .strides(sched_addr_gen_strides)
);

endmodule   // sched_gen_6

module storage_config_seq (
  output logic [7:0] addr_out,
  input logic clk,
  input logic clk_en,
  input logic [7:0] config_addr_in,
  input logic [15:0] config_data_in,
  input logic config_en,
  input logic config_rd,
  input logic config_wr,
  input logic flush,
  output logic [0:0] [15:0] rd_data_out,
  input logic [0:0][0:0] [15:0] rd_data_stg,
  output logic ren_out,
  input logic rst_n,
  output logic wen_out,
  output logic [0:0] [15:0] wr_data
);

assign addr_out = config_addr_in[7:0];
assign wr_data[0] = config_data_in;
assign rd_data_out[0] = rd_data_stg[0];
assign wen_out = config_wr;
assign ren_out = config_rd;
endmodule   // storage_config_seq

module strg_ub_thin (
  input logic clk,
  input logic clk_en,
  input logic [15:0] data_from_strg,
  input logic [0:0] [15:0] data_in,
  output logic [0:0] [15:0] data_out,
  output logic [15:0] data_to_strg,
  input logic flush,
  output logic [7:0] rd_addr_out,
  output logic ren_to_strg,
  input logic rst_n,
  input logic [15:0] sram_read_addr_gen_starting_addr,
  input logic [5:0] [15:0] sram_read_addr_gen_strides,
  input logic [3:0] sram_read_loops_dimensionality,
  input logic [5:0] [15:0] sram_read_loops_ranges,
  input logic [15:0] sram_read_sched_gen_sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] sram_read_sched_gen_sched_addr_gen_strides,
  input logic [15:0] sram_write_addr_gen_starting_addr,
  input logic [5:0] [15:0] sram_write_addr_gen_strides,
  input logic [3:0] sram_write_loops_dimensionality,
  input logic [5:0] [15:0] sram_write_loops_ranges,
  input logic [15:0] sram_write_sched_gen_sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] sram_write_sched_gen_sched_addr_gen_strides,
  output logic valid_out,
  output logic wen_to_strg,
  output logic [7:0] wr_addr_out
);

logic [15:0] cycle_count;
logic read;
logic [15:0] read_addr;
logic read_d1;
logic [2:0] sram_read_loops_mux_sel_out;
logic [2:0] sram_write_loops_mux_sel_out;
logic write;
logic [15:0] write_addr;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    cycle_count <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      cycle_count <= 16'h0;
    end
    else cycle_count <= cycle_count + 16'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    read_d1 <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      read_d1 <= 1'h0;
    end
    else read_d1 <= read;
  end
end
assign valid_out = read_d1;
assign wen_to_strg = write;
assign ren_to_strg = read;
assign data_out = data_from_strg;
assign data_to_strg = data_in;
assign wr_addr_out = write_addr[7:0];
assign rd_addr_out = read_addr[7:0];
for_loop_6 sram_write_loops (
  .clk(clk),
  .clk_en(clk_en),
  .dimensionality(sram_write_loops_dimensionality),
  .flush(flush),
  .mux_sel_out(sram_write_loops_mux_sel_out),
  .ranges(sram_write_loops_ranges),
  .rst_n(rst_n),
  .step(write)
);

addr_gen_6 sram_write_addr_gen (
  .addr_out(write_addr),
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(sram_write_loops_mux_sel_out),
  .rst_n(rst_n),
  .starting_addr(sram_write_addr_gen_starting_addr),
  .step(write),
  .strides(sram_write_addr_gen_strides)
);

sched_gen_6 sram_write_sched_gen (
  .clk(clk),
  .clk_en(clk_en),
  .cycle_count(cycle_count),
  .flush(flush),
  .mux_sel(sram_write_loops_mux_sel_out),
  .rst_n(rst_n),
  .sched_addr_gen_starting_addr(sram_write_sched_gen_sched_addr_gen_starting_addr),
  .sched_addr_gen_strides(sram_write_sched_gen_sched_addr_gen_strides),
  .valid_output(write)
);

for_loop_6 sram_read_loops (
  .clk(clk),
  .clk_en(clk_en),
  .dimensionality(sram_read_loops_dimensionality),
  .flush(flush),
  .mux_sel_out(sram_read_loops_mux_sel_out),
  .ranges(sram_read_loops_ranges),
  .rst_n(rst_n),
  .step(read)
);

addr_gen_6 sram_read_addr_gen (
  .addr_out(read_addr),
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(sram_read_loops_mux_sel_out),
  .rst_n(rst_n),
  .starting_addr(sram_read_addr_gen_starting_addr),
  .step(read),
  .strides(sram_read_addr_gen_strides)
);

sched_gen_6 sram_read_sched_gen (
  .clk(clk),
  .clk_en(clk_en),
  .cycle_count(cycle_count),
  .flush(flush),
  .mux_sel(sram_read_loops_mux_sel_out),
  .rst_n(rst_n),
  .sched_addr_gen_starting_addr(sram_read_sched_gen_sched_addr_gen_starting_addr),
  .sched_addr_gen_strides(sram_read_sched_gen_sched_addr_gen_strides),
  .valid_output(read)
);

endmodule   // strg_ub_thin


module ConfigRegister_4_8_32_39 (
    input clk,
    input reset,
    output [3:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [3:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_4_inst0_O;
wire [7:0] const_39_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_4 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_4_inst0 (
    .I({config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_4_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h27),
    .width(8)
) const_39_8 (
    .out(const_39_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_39_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_4_inst0_O;
endmodule

module ConfigRegister_4_8_32_18 (
    input clk,
    input reset,
    output [3:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [3:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_4_inst0_O;
wire [7:0] const_18_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_4 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_4_inst0 (
    .I({config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_4_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h12),
    .width(8)
) const_18_8 (
    .out(const_18_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_18_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_4_inst0_O;
endmodule

module ConfigRegister_2_8_32_8 (
    input clk,
    input reset,
    output [1:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [1:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_2_inst0_O;
wire [7:0] const_8_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_2 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_2_inst0 (
    .I({config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_2_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h08),
    .width(8)
) const_8_8 (
    .out(const_8_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_8_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_2_inst0_O;
endmodule

module ConfigRegister_1_8_32_9 (
    input clk,
    input reset,
    output [0:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [0:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
wire [7:0] const_9_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0 (
    .I(config_data[0]),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h09),
    .width(8)
) const_9_8 (
    .out(const_9_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_9_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
endmodule

module ConfigRegister_1_8_32_7 (
    input clk,
    input reset,
    output [0:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [0:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
wire [7:0] const_7_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0 (
    .I(config_data[0]),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h07),
    .width(8)
) const_7_8 (
    .out(const_7_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_7_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
endmodule

module ConfigRegister_1_8_32_6 (
    input clk,
    input reset,
    output [0:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [0:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
wire [7:0] const_6_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0 (
    .I(config_data[0]),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h06),
    .width(8)
) const_6_8 (
    .out(const_6_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_6_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
endmodule

module ConfigRegister_1_8_32_55 (
    input clk,
    input reset,
    output [0:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [0:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
wire [7:0] const_55_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0 (
    .I(config_data[0]),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h37),
    .width(8)
) const_55_8 (
    .out(const_55_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_55_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
endmodule

module ConfigRegister_1_8_32_54 (
    input clk,
    input reset,
    output [0:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [0:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
wire [7:0] const_54_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0 (
    .I(config_data[0]),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h36),
    .width(8)
) const_54_8 (
    .out(const_54_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_54_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
endmodule

module ConfigRegister_1_8_32_53 (
    input clk,
    input reset,
    output [0:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [0:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
wire [7:0] const_53_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0 (
    .I(config_data[0]),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h35),
    .width(8)
) const_53_8 (
    .out(const_53_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_53_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
endmodule

module ConfigRegister_1_8_32_5 (
    input clk,
    input reset,
    output [0:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [0:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
wire [7:0] const_5_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0 (
    .I(config_data[0]),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h05),
    .width(8)
) const_5_8 (
    .out(const_5_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_5_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
endmodule

module ConfigRegister_1_8_32_4 (
    input clk,
    input reset,
    output [0:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [0:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
wire [7:0] const_4_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0 (
    .I(config_data[0]),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h04),
    .width(8)
) const_4_8 (
    .out(const_4_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_4_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
endmodule

module ConfigRegister_1_8_32_3 (
    input clk,
    input reset,
    output [0:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [0:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
wire [7:0] const_3_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0 (
    .I(config_data[0]),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h03),
    .width(8)
) const_3_8 (
    .out(const_3_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_3_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
endmodule

module ConfigRegister_1_8_32_2 (
    input clk,
    input reset,
    output [0:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [0:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
wire [7:0] const_2_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0 (
    .I(config_data[0]),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h02),
    .width(8)
) const_2_8 (
    .out(const_2_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_2_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
endmodule

module ConfigRegister_1_8_32_10 (
    input clk,
    input reset,
    output [0:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [0:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
wire [7:0] const_10_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0 (
    .I(config_data[0]),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h0a),
    .width(8)
) const_10_8 (
    .out(const_10_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_10_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
endmodule

module ConfigRegister_1_8_32_1 (
    input clk,
    input reset,
    output [0:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [0:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
wire [7:0] const_1_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0 (
    .I(config_data[0]),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h01),
    .width(8)
) const_1_8 (
    .out(const_1_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_1_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
endmodule

module ConfigRegister_1_8_32_0 (
    input clk,
    input reset,
    output [0:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [0:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
wire [7:0] const_0_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0 (
    .I(config_data[0]),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h00),
    .width(8)
) const_0_8 (
    .out(const_0_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_0_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_1_inst0_O;
endmodule

module ConfigRegister_16_8_32_52 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_52_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h34),
    .width(8)
) const_52_8 (
    .out(const_52_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_52_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_51 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_51_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h33),
    .width(8)
) const_51_8 (
    .out(const_51_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_51_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_50 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_50_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h32),
    .width(8)
) const_50_8 (
    .out(const_50_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_50_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_49 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_49_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h31),
    .width(8)
) const_49_8 (
    .out(const_49_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_49_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_48 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_48_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h30),
    .width(8)
) const_48_8 (
    .out(const_48_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_48_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_47 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_47_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h2f),
    .width(8)
) const_47_8 (
    .out(const_47_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_47_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_46 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_46_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h2e),
    .width(8)
) const_46_8 (
    .out(const_46_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_46_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_45 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_45_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h2d),
    .width(8)
) const_45_8 (
    .out(const_45_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_45_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_44 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_44_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h2c),
    .width(8)
) const_44_8 (
    .out(const_44_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_44_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_43 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_43_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h2b),
    .width(8)
) const_43_8 (
    .out(const_43_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_43_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_42 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_42_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h2a),
    .width(8)
) const_42_8 (
    .out(const_42_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_42_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_41 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_41_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h29),
    .width(8)
) const_41_8 (
    .out(const_41_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_41_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_40 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_40_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h28),
    .width(8)
) const_40_8 (
    .out(const_40_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_40_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_38 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_38_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h26),
    .width(8)
) const_38_8 (
    .out(const_38_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_38_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_37 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_37_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h25),
    .width(8)
) const_37_8 (
    .out(const_37_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_37_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_36 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_36_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h24),
    .width(8)
) const_36_8 (
    .out(const_36_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_36_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_35 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_35_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h23),
    .width(8)
) const_35_8 (
    .out(const_35_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_35_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_34 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_34_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h22),
    .width(8)
) const_34_8 (
    .out(const_34_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_34_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_33 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_33_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h21),
    .width(8)
) const_33_8 (
    .out(const_33_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_33_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_32 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_32_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h20),
    .width(8)
) const_32_8 (
    .out(const_32_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_32_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_31 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_31_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h1f),
    .width(8)
) const_31_8 (
    .out(const_31_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_31_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_30 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_30_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h1e),
    .width(8)
) const_30_8 (
    .out(const_30_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_30_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_29 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_29_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h1d),
    .width(8)
) const_29_8 (
    .out(const_29_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_29_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_28 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_28_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h1c),
    .width(8)
) const_28_8 (
    .out(const_28_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_28_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_27 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_27_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h1b),
    .width(8)
) const_27_8 (
    .out(const_27_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_27_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_26 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_26_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h1a),
    .width(8)
) const_26_8 (
    .out(const_26_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_26_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_25 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_25_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h19),
    .width(8)
) const_25_8 (
    .out(const_25_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_25_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_24 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_24_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h18),
    .width(8)
) const_24_8 (
    .out(const_24_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_24_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_23 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_23_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h17),
    .width(8)
) const_23_8 (
    .out(const_23_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_23_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_22 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_22_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h16),
    .width(8)
) const_22_8 (
    .out(const_22_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_22_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_21 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_21_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h15),
    .width(8)
) const_21_8 (
    .out(const_21_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_21_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_20 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_20_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h14),
    .width(8)
) const_20_8 (
    .out(const_20_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_20_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_19 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_19_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h13),
    .width(8)
) const_19_8 (
    .out(const_19_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_19_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_17 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_17_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h11),
    .width(8)
) const_17_8 (
    .out(const_17_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_17_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_16 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_16_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h10),
    .width(8)
) const_16_8 (
    .out(const_16_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_16_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_15 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_15_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h0f),
    .width(8)
) const_15_8 (
    .out(const_15_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_15_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_14 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_14_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h0e),
    .width(8)
) const_14_8 (
    .out(const_14_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_14_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_13 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_13_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h0d),
    .width(8)
) const_13_8 (
    .out(const_13_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_13_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_12 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_12_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h0c),
    .width(8)
) const_12_8 (
    .out(const_12_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_12_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module ConfigRegister_16_8_32_11 (
    input clk,
    input reset,
    output [15:0] O,
    input [7:0] config_addr,
    input [31:0] config_data,
    input config_en
);
wire [15:0] Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
wire [7:0] const_11_8_out;
wire magma_Bit_and_inst0_out;
wire magma_Bits_8_eq_inst0_out;
Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16 Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0 (
    .I({config_data[15],config_data[14],config_data[13],config_data[12],config_data[11],config_data[10],config_data[9],config_data[8],config_data[7],config_data[6],config_data[5],config_data[4],config_data[3],config_data[2],config_data[1],config_data[0]}),
    .O(Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O),
    .CLK(clk),
    .CE(magma_Bit_and_inst0_out),
    .ASYNCRESET(reset)
);
coreir_const #(
    .value(8'h0b),
    .width(8)
) const_11_8 (
    .out(const_11_8_out)
);
corebit_and magma_Bit_and_inst0 (
    .in0(magma_Bits_8_eq_inst0_out),
    .in1(config_en),
    .out(magma_Bit_and_inst0_out)
);
coreir_eq #(
    .width(8)
) magma_Bits_8_eq_inst0 (
    .in0(config_addr),
    .in1(const_11_8_out),
    .out(magma_Bits_8_eq_inst0_out)
);
assign O = Register_has_ce_True_has_reset_False_has_async_reset_True_has_async_resetn_False_type_Bits_n_16_inst0_O;
endmodule

module MemCore (
    input [15:0] addr_in,
    input [15:0] chain_data_in,
    output [15:0] chain_data_out,
    input [0:0] chain_valid_in,
    output [0:0] chain_valid_out,
    input clk,
    input [7:0] config_1_config_addr,
    input [31:0] config_1_config_data,
    input [0:0] config_1_read,
    input [0:0] config_1_write,
    input [7:0] config_config_addr,
    input [31:0] config_config_data,
    input config_en_0,
    input [0:0] config_read,
    input [0:0] config_write,
    input [15:0] data_in,
    output [15:0] data_out,
    input [0:0] flush,
    output [31:0] read_config_data,
    output [31:0] read_config_data_1,
    input [0:0] ren_in,
    input reset,
    input [0:0] stall,
    output [0:0] valid_out,
    input [0:0] wen_in
);
wire [0:0] Invert1_inst0_out;
wire [0:0] Invert1_inst1_out;
wire [0:0] LakeTop_W_inst0_chain_valid_out;
wire [15:0] LakeTop_W_inst0_data_out;
wire [31:0] LakeTop_W_inst0_config_data_out;
wire [15:0] LakeTop_W_inst0_chain_data_out;
wire [0:0] LakeTop_W_inst0_valid_out;
wire [31:0] MuxWrapper_56_32_inst0_O;
wire [0:0] OR_CONFIG_EN_SRAM_0_out;
wire [0:0] OR_CONFIG_RD_SRAM_O;
wire [0:0] OR_CONFIG_WR_SRAM_O;
wire [7:0] OR_config_addr_FEATURE_out;
wire [31:0] OR_config_data_FEATURE_out;
wire [31:0] ZextWrapper_16_32_inst0_O;
wire [31:0] ZextWrapper_16_32_inst1_O;
wire [31:0] ZextWrapper_16_32_inst10_O;
wire [31:0] ZextWrapper_16_32_inst11_O;
wire [31:0] ZextWrapper_16_32_inst12_O;
wire [31:0] ZextWrapper_16_32_inst13_O;
wire [31:0] ZextWrapper_16_32_inst14_O;
wire [31:0] ZextWrapper_16_32_inst15_O;
wire [31:0] ZextWrapper_16_32_inst16_O;
wire [31:0] ZextWrapper_16_32_inst17_O;
wire [31:0] ZextWrapper_16_32_inst18_O;
wire [31:0] ZextWrapper_16_32_inst19_O;
wire [31:0] ZextWrapper_16_32_inst2_O;
wire [31:0] ZextWrapper_16_32_inst20_O;
wire [31:0] ZextWrapper_16_32_inst21_O;
wire [31:0] ZextWrapper_16_32_inst22_O;
wire [31:0] ZextWrapper_16_32_inst23_O;
wire [31:0] ZextWrapper_16_32_inst24_O;
wire [31:0] ZextWrapper_16_32_inst25_O;
wire [31:0] ZextWrapper_16_32_inst26_O;
wire [31:0] ZextWrapper_16_32_inst27_O;
wire [31:0] ZextWrapper_16_32_inst28_O;
wire [31:0] ZextWrapper_16_32_inst29_O;
wire [31:0] ZextWrapper_16_32_inst3_O;
wire [31:0] ZextWrapper_16_32_inst30_O;
wire [31:0] ZextWrapper_16_32_inst31_O;
wire [31:0] ZextWrapper_16_32_inst32_O;
wire [31:0] ZextWrapper_16_32_inst33_O;
wire [31:0] ZextWrapper_16_32_inst34_O;
wire [31:0] ZextWrapper_16_32_inst35_O;
wire [31:0] ZextWrapper_16_32_inst36_O;
wire [31:0] ZextWrapper_16_32_inst37_O;
wire [31:0] ZextWrapper_16_32_inst38_O;
wire [31:0] ZextWrapper_16_32_inst39_O;
wire [31:0] ZextWrapper_16_32_inst4_O;
wire [31:0] ZextWrapper_16_32_inst5_O;
wire [31:0] ZextWrapper_16_32_inst6_O;
wire [31:0] ZextWrapper_16_32_inst7_O;
wire [31:0] ZextWrapper_16_32_inst8_O;
wire [31:0] ZextWrapper_16_32_inst9_O;
wire [31:0] ZextWrapper_1_32_inst0_O;
wire [31:0] ZextWrapper_1_32_inst1_O;
wire [31:0] ZextWrapper_1_32_inst10_O;
wire [31:0] ZextWrapper_1_32_inst11_O;
wire [31:0] ZextWrapper_1_32_inst12_O;
wire [31:0] ZextWrapper_1_32_inst2_O;
wire [31:0] ZextWrapper_1_32_inst3_O;
wire [31:0] ZextWrapper_1_32_inst4_O;
wire [31:0] ZextWrapper_1_32_inst5_O;
wire [31:0] ZextWrapper_1_32_inst6_O;
wire [31:0] ZextWrapper_1_32_inst7_O;
wire [31:0] ZextWrapper_1_32_inst8_O;
wire [31:0] ZextWrapper_1_32_inst9_O;
wire [31:0] ZextWrapper_2_32_inst0_O;
wire [31:0] ZextWrapper_4_32_inst0_O;
wire [31:0] ZextWrapper_4_32_inst1_O;
wire [0:0] chain_idx_input_O;
wire [0:0] chain_idx_output_O;
wire [0:0] chain_valid_in_reg_sel_O;
wire [0:0] chain_valid_in_reg_value_O;
wire [0:0] chain_valid_in_sel_O;
wire coreir_wrapInAsyncReset_inst0_out;
wire coreir_wrapOutAsyncReset_inst0_out;
wire [0:0] enable_chain_input_O;
wire [0:0] enable_chain_output_O;
wire [0:0] flush_reg_sel_O;
wire [0:0] flush_reg_value_O;
wire [0:0] flush_sel_O;
wire [1:0] mode_O;
wire [0:0] ren_in_reg_sel_O;
wire [0:0] ren_in_reg_value_O;
wire [0:0] ren_in_sel_O;
wire [15:0] strg_ub_sram_read_addr_gen_starting_addr_O;
wire [15:0] strg_ub_sram_read_addr_gen_strides_0_O;
wire [15:0] strg_ub_sram_read_addr_gen_strides_1_O;
wire [15:0] strg_ub_sram_read_addr_gen_strides_2_O;
wire [15:0] strg_ub_sram_read_addr_gen_strides_3_O;
wire [15:0] strg_ub_sram_read_addr_gen_strides_4_O;
wire [15:0] strg_ub_sram_read_addr_gen_strides_5_O;
wire [3:0] strg_ub_sram_read_loops_dimensionality_O;
wire [15:0] strg_ub_sram_read_loops_ranges_0_O;
wire [15:0] strg_ub_sram_read_loops_ranges_1_O;
wire [15:0] strg_ub_sram_read_loops_ranges_2_O;
wire [15:0] strg_ub_sram_read_loops_ranges_3_O;
wire [15:0] strg_ub_sram_read_loops_ranges_4_O;
wire [15:0] strg_ub_sram_read_loops_ranges_5_O;
wire [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr_O;
wire [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides_0_O;
wire [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides_1_O;
wire [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides_2_O;
wire [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides_3_O;
wire [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides_4_O;
wire [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides_5_O;
wire [15:0] strg_ub_sram_write_addr_gen_starting_addr_O;
wire [15:0] strg_ub_sram_write_addr_gen_strides_0_O;
wire [15:0] strg_ub_sram_write_addr_gen_strides_1_O;
wire [15:0] strg_ub_sram_write_addr_gen_strides_2_O;
wire [15:0] strg_ub_sram_write_addr_gen_strides_3_O;
wire [15:0] strg_ub_sram_write_addr_gen_strides_4_O;
wire [15:0] strg_ub_sram_write_addr_gen_strides_5_O;
wire [3:0] strg_ub_sram_write_loops_dimensionality_O;
wire [15:0] strg_ub_sram_write_loops_ranges_0_O;
wire [15:0] strg_ub_sram_write_loops_ranges_1_O;
wire [15:0] strg_ub_sram_write_loops_ranges_2_O;
wire [15:0] strg_ub_sram_write_loops_ranges_3_O;
wire [15:0] strg_ub_sram_write_loops_ranges_4_O;
wire [15:0] strg_ub_sram_write_loops_ranges_5_O;
wire [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr_O;
wire [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides_0_O;
wire [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides_1_O;
wire [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides_2_O;
wire [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides_3_O;
wire [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides_4_O;
wire [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides_5_O;
wire [0:0] tile_en_O;
wire [0:0] wen_in_reg_sel_O;
wire [0:0] wen_in_reg_value_O;
wire [0:0] wen_in_sel_O;
coreir_not #(
    .width(1)
) Invert1_inst0 (
    .in(coreir_wrapInAsyncReset_inst0_out),
    .out(Invert1_inst0_out)
);
coreir_not #(
    .width(1)
) Invert1_inst1 (
    .in(stall),
    .out(Invert1_inst1_out)
);
LakeTop_W LakeTop_W_inst0 (
    .data_in(data_in),
    .strg_ub_sram_read_loops_ranges_3(strg_ub_sram_read_loops_ranges_3_O),
    .chain_valid_out(LakeTop_W_inst0_chain_valid_out),
    .strg_ub_sram_write_addr_gen_strides_1(strg_ub_sram_write_addr_gen_strides_1_O),
    .addr_in(addr_in),
    .strg_ub_sram_write_loops_ranges_3(strg_ub_sram_write_loops_ranges_3_O),
    .strg_ub_sram_write_loops_dimensionality(strg_ub_sram_write_loops_dimensionality_O),
    .config_read(OR_CONFIG_WR_SRAM_O),
    .strg_ub_sram_read_addr_gen_strides_0(strg_ub_sram_read_addr_gen_strides_0_O),
    .strg_ub_sram_read_sched_gen_sched_addr_gen_strides_3(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_3_O),
    .chain_idx_output(chain_idx_output_O),
    .clk_en(Invert1_inst1_out),
    .strg_ub_sram_read_addr_gen_strides_4(strg_ub_sram_read_addr_gen_strides_4_O),
    .strg_ub_sram_read_loops_ranges_4(strg_ub_sram_read_loops_ranges_4_O),
    .strg_ub_sram_write_loops_ranges_1(strg_ub_sram_write_loops_ranges_1_O),
    .strg_ub_sram_write_sched_gen_sched_addr_gen_strides_1(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_1_O),
    .data_out(LakeTop_W_inst0_data_out),
    .strg_ub_sram_read_addr_gen_starting_addr(strg_ub_sram_read_addr_gen_starting_addr_O),
    .strg_ub_sram_write_sched_gen_sched_addr_gen_strides_5(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_5_O),
    .strg_ub_sram_write_loops_ranges_0(strg_ub_sram_write_loops_ranges_0_O),
    .strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr_O),
    .strg_ub_sram_read_addr_gen_strides_2(strg_ub_sram_read_addr_gen_strides_2_O),
    .strg_ub_sram_read_addr_gen_strides_1(strg_ub_sram_read_addr_gen_strides_1_O),
    .strg_ub_sram_read_loops_ranges_0(strg_ub_sram_read_loops_ranges_0_O),
    .strg_ub_sram_read_sched_gen_sched_addr_gen_strides_4(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_4_O),
    .strg_ub_sram_read_sched_gen_sched_addr_gen_strides_5(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_5_O),
    .strg_ub_sram_write_loops_ranges_4(strg_ub_sram_write_loops_ranges_4_O),
    .flush(flush_sel_O),
    .strg_ub_sram_read_sched_gen_sched_addr_gen_strides_2(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_2_O),
    .ren_in(ren_in_sel_O),
    .strg_ub_sram_write_addr_gen_strides_0(strg_ub_sram_write_addr_gen_strides_0_O),
    .chain_data_in(chain_data_in),
    .strg_ub_sram_write_addr_gen_starting_addr(strg_ub_sram_write_addr_gen_starting_addr_O),
    .strg_ub_sram_write_addr_gen_strides_3(strg_ub_sram_write_addr_gen_strides_3_O),
    .strg_ub_sram_read_loops_ranges_2(strg_ub_sram_read_loops_ranges_2_O),
    .strg_ub_sram_read_loops_ranges_5(strg_ub_sram_read_loops_ranges_5_O),
    .strg_ub_sram_read_addr_gen_strides_5(strg_ub_sram_read_addr_gen_strides_5_O),
    .tile_en(tile_en_O),
    .strg_ub_sram_read_addr_gen_strides_3(strg_ub_sram_read_addr_gen_strides_3_O),
    .config_data_out(LakeTop_W_inst0_config_data_out),
    .strg_ub_sram_read_sched_gen_sched_addr_gen_strides_1(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_1_O),
    .config_data_in(OR_config_data_FEATURE_out),
    .chain_valid_in(chain_valid_in_sel_O),
    .strg_ub_sram_write_sched_gen_sched_addr_gen_strides_3(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_3_O),
    .config_addr_in(OR_config_addr_FEATURE_out),
    .config_en(config_en_0),
    .config_write(OR_CONFIG_RD_SRAM_O),
    .strg_ub_sram_write_sched_gen_sched_addr_gen_strides_2(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_2_O),
    .enable_chain_input(enable_chain_input_O),
    .strg_ub_sram_read_loops_ranges_1(strg_ub_sram_read_loops_ranges_1_O),
    .clk(clk),
    .strg_ub_sram_write_addr_gen_strides_4(strg_ub_sram_write_addr_gen_strides_4_O),
    .strg_ub_sram_write_loops_ranges_5(strg_ub_sram_write_loops_ranges_5_O),
    .mode(mode_O),
    .strg_ub_sram_write_addr_gen_strides_2(strg_ub_sram_write_addr_gen_strides_2_O),
    .strg_ub_sram_write_addr_gen_strides_5(strg_ub_sram_write_addr_gen_strides_5_O),
    .strg_ub_sram_write_sched_gen_sched_addr_gen_strides_0(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_0_O),
    .chain_data_out(LakeTop_W_inst0_chain_data_out),
    .strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr_O),
    .strg_ub_sram_write_sched_gen_sched_addr_gen_strides_4(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_4_O),
    .strg_ub_sram_write_loops_ranges_2(strg_ub_sram_write_loops_ranges_2_O),
    .chain_idx_input(chain_idx_input_O),
    .rst_n(coreir_wrapOutAsyncReset_inst0_out),
    .valid_out(LakeTop_W_inst0_valid_out),
    .wen_in(wen_in_sel_O),
    .strg_ub_sram_read_loops_dimensionality(strg_ub_sram_read_loops_dimensionality_O),
    .enable_chain_output(enable_chain_output_O),
    .strg_ub_sram_read_sched_gen_sched_addr_gen_strides_0(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_0_O)
);
MuxWrapper_56_32 MuxWrapper_56_32_inst0 (
    .I_0(ZextWrapper_1_32_inst0_O),
    .I_1(ZextWrapper_1_32_inst1_O),
    .I_10(ZextWrapper_1_32_inst9_O),
    .I_11(ZextWrapper_16_32_inst0_O),
    .I_12(ZextWrapper_16_32_inst1_O),
    .I_13(ZextWrapper_16_32_inst2_O),
    .I_14(ZextWrapper_16_32_inst3_O),
    .I_15(ZextWrapper_16_32_inst4_O),
    .I_16(ZextWrapper_16_32_inst5_O),
    .I_17(ZextWrapper_16_32_inst6_O),
    .I_18(ZextWrapper_4_32_inst0_O),
    .I_19(ZextWrapper_16_32_inst7_O),
    .I_2(ZextWrapper_1_32_inst2_O),
    .I_20(ZextWrapper_16_32_inst8_O),
    .I_21(ZextWrapper_16_32_inst9_O),
    .I_22(ZextWrapper_16_32_inst10_O),
    .I_23(ZextWrapper_16_32_inst11_O),
    .I_24(ZextWrapper_16_32_inst12_O),
    .I_25(ZextWrapper_16_32_inst13_O),
    .I_26(ZextWrapper_16_32_inst14_O),
    .I_27(ZextWrapper_16_32_inst15_O),
    .I_28(ZextWrapper_16_32_inst16_O),
    .I_29(ZextWrapper_16_32_inst17_O),
    .I_3(ZextWrapper_1_32_inst3_O),
    .I_30(ZextWrapper_16_32_inst18_O),
    .I_31(ZextWrapper_16_32_inst19_O),
    .I_32(ZextWrapper_16_32_inst20_O),
    .I_33(ZextWrapper_16_32_inst21_O),
    .I_34(ZextWrapper_16_32_inst22_O),
    .I_35(ZextWrapper_16_32_inst23_O),
    .I_36(ZextWrapper_16_32_inst24_O),
    .I_37(ZextWrapper_16_32_inst25_O),
    .I_38(ZextWrapper_16_32_inst26_O),
    .I_39(ZextWrapper_4_32_inst1_O),
    .I_4(ZextWrapper_1_32_inst4_O),
    .I_40(ZextWrapper_16_32_inst27_O),
    .I_41(ZextWrapper_16_32_inst28_O),
    .I_42(ZextWrapper_16_32_inst29_O),
    .I_43(ZextWrapper_16_32_inst30_O),
    .I_44(ZextWrapper_16_32_inst31_O),
    .I_45(ZextWrapper_16_32_inst32_O),
    .I_46(ZextWrapper_16_32_inst33_O),
    .I_47(ZextWrapper_16_32_inst34_O),
    .I_48(ZextWrapper_16_32_inst35_O),
    .I_49(ZextWrapper_16_32_inst36_O),
    .I_5(ZextWrapper_1_32_inst5_O),
    .I_50(ZextWrapper_16_32_inst37_O),
    .I_51(ZextWrapper_16_32_inst38_O),
    .I_52(ZextWrapper_16_32_inst39_O),
    .I_53(ZextWrapper_1_32_inst10_O),
    .I_54(ZextWrapper_1_32_inst11_O),
    .I_55(ZextWrapper_1_32_inst12_O),
    .I_6(ZextWrapper_1_32_inst6_O),
    .I_7(ZextWrapper_1_32_inst7_O),
    .I_8(ZextWrapper_2_32_inst0_O),
    .I_9(ZextWrapper_1_32_inst8_O),
    .O(MuxWrapper_56_32_inst0_O),
    .S({config_config_addr[5],config_config_addr[4],config_config_addr[3],config_config_addr[2],config_config_addr[1],config_config_addr[0]})
);
coreir_or #(
    .width(1)
) OR_CONFIG_EN_SRAM_0 (
    .in0(config_1_write),
    .in1(config_1_read),
    .out(OR_CONFIG_EN_SRAM_0_out)
);
Or1x1 OR_CONFIG_RD_SRAM (
    .I0(config_1_write),
    .O(OR_CONFIG_RD_SRAM_O)
);
Or1x1 OR_CONFIG_WR_SRAM (
    .I0(config_1_read),
    .O(OR_CONFIG_WR_SRAM_O)
);
coreir_or #(
    .width(8)
) OR_config_addr_FEATURE (
    .in0(config_config_addr),
    .in1(config_1_config_addr),
    .out(OR_config_addr_FEATURE_out)
);
coreir_or #(
    .width(32)
) OR_config_data_FEATURE (
    .in0(config_config_data),
    .in1(config_1_config_data),
    .out(OR_config_data_FEATURE_out)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst0 (
    .I(strg_ub_sram_read_addr_gen_starting_addr_O),
    .O(ZextWrapper_16_32_inst0_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst1 (
    .I(strg_ub_sram_read_addr_gen_strides_0_O),
    .O(ZextWrapper_16_32_inst1_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst10 (
    .I(strg_ub_sram_read_loops_ranges_3_O),
    .O(ZextWrapper_16_32_inst10_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst11 (
    .I(strg_ub_sram_read_loops_ranges_4_O),
    .O(ZextWrapper_16_32_inst11_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst12 (
    .I(strg_ub_sram_read_loops_ranges_5_O),
    .O(ZextWrapper_16_32_inst12_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst13 (
    .I(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr_O),
    .O(ZextWrapper_16_32_inst13_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst14 (
    .I(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_0_O),
    .O(ZextWrapper_16_32_inst14_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst15 (
    .I(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_1_O),
    .O(ZextWrapper_16_32_inst15_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst16 (
    .I(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_2_O),
    .O(ZextWrapper_16_32_inst16_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst17 (
    .I(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_3_O),
    .O(ZextWrapper_16_32_inst17_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst18 (
    .I(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_4_O),
    .O(ZextWrapper_16_32_inst18_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst19 (
    .I(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_5_O),
    .O(ZextWrapper_16_32_inst19_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst2 (
    .I(strg_ub_sram_read_addr_gen_strides_1_O),
    .O(ZextWrapper_16_32_inst2_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst20 (
    .I(strg_ub_sram_write_addr_gen_starting_addr_O),
    .O(ZextWrapper_16_32_inst20_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst21 (
    .I(strg_ub_sram_write_addr_gen_strides_0_O),
    .O(ZextWrapper_16_32_inst21_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst22 (
    .I(strg_ub_sram_write_addr_gen_strides_1_O),
    .O(ZextWrapper_16_32_inst22_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst23 (
    .I(strg_ub_sram_write_addr_gen_strides_2_O),
    .O(ZextWrapper_16_32_inst23_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst24 (
    .I(strg_ub_sram_write_addr_gen_strides_3_O),
    .O(ZextWrapper_16_32_inst24_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst25 (
    .I(strg_ub_sram_write_addr_gen_strides_4_O),
    .O(ZextWrapper_16_32_inst25_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst26 (
    .I(strg_ub_sram_write_addr_gen_strides_5_O),
    .O(ZextWrapper_16_32_inst26_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst27 (
    .I(strg_ub_sram_write_loops_ranges_0_O),
    .O(ZextWrapper_16_32_inst27_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst28 (
    .I(strg_ub_sram_write_loops_ranges_1_O),
    .O(ZextWrapper_16_32_inst28_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst29 (
    .I(strg_ub_sram_write_loops_ranges_2_O),
    .O(ZextWrapper_16_32_inst29_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst3 (
    .I(strg_ub_sram_read_addr_gen_strides_2_O),
    .O(ZextWrapper_16_32_inst3_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst30 (
    .I(strg_ub_sram_write_loops_ranges_3_O),
    .O(ZextWrapper_16_32_inst30_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst31 (
    .I(strg_ub_sram_write_loops_ranges_4_O),
    .O(ZextWrapper_16_32_inst31_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst32 (
    .I(strg_ub_sram_write_loops_ranges_5_O),
    .O(ZextWrapper_16_32_inst32_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst33 (
    .I(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr_O),
    .O(ZextWrapper_16_32_inst33_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst34 (
    .I(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_0_O),
    .O(ZextWrapper_16_32_inst34_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst35 (
    .I(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_1_O),
    .O(ZextWrapper_16_32_inst35_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst36 (
    .I(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_2_O),
    .O(ZextWrapper_16_32_inst36_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst37 (
    .I(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_3_O),
    .O(ZextWrapper_16_32_inst37_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst38 (
    .I(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_4_O),
    .O(ZextWrapper_16_32_inst38_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst39 (
    .I(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_5_O),
    .O(ZextWrapper_16_32_inst39_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst4 (
    .I(strg_ub_sram_read_addr_gen_strides_3_O),
    .O(ZextWrapper_16_32_inst4_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst5 (
    .I(strg_ub_sram_read_addr_gen_strides_4_O),
    .O(ZextWrapper_16_32_inst5_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst6 (
    .I(strg_ub_sram_read_addr_gen_strides_5_O),
    .O(ZextWrapper_16_32_inst6_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst7 (
    .I(strg_ub_sram_read_loops_ranges_0_O),
    .O(ZextWrapper_16_32_inst7_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst8 (
    .I(strg_ub_sram_read_loops_ranges_1_O),
    .O(ZextWrapper_16_32_inst8_O)
);
ZextWrapper_16_32 ZextWrapper_16_32_inst9 (
    .I(strg_ub_sram_read_loops_ranges_2_O),
    .O(ZextWrapper_16_32_inst9_O)
);
ZextWrapper_1_32 ZextWrapper_1_32_inst0 (
    .I(chain_idx_input_O),
    .O(ZextWrapper_1_32_inst0_O)
);
ZextWrapper_1_32 ZextWrapper_1_32_inst1 (
    .I(chain_idx_output_O),
    .O(ZextWrapper_1_32_inst1_O)
);
ZextWrapper_1_32 ZextWrapper_1_32_inst10 (
    .I(tile_en_O),
    .O(ZextWrapper_1_32_inst10_O)
);
ZextWrapper_1_32 ZextWrapper_1_32_inst11 (
    .I(wen_in_reg_sel_O),
    .O(ZextWrapper_1_32_inst11_O)
);
ZextWrapper_1_32 ZextWrapper_1_32_inst12 (
    .I(wen_in_reg_value_O),
    .O(ZextWrapper_1_32_inst12_O)
);
ZextWrapper_1_32 ZextWrapper_1_32_inst2 (
    .I(chain_valid_in_reg_sel_O),
    .O(ZextWrapper_1_32_inst2_O)
);
ZextWrapper_1_32 ZextWrapper_1_32_inst3 (
    .I(chain_valid_in_reg_value_O),
    .O(ZextWrapper_1_32_inst3_O)
);
ZextWrapper_1_32 ZextWrapper_1_32_inst4 (
    .I(enable_chain_input_O),
    .O(ZextWrapper_1_32_inst4_O)
);
ZextWrapper_1_32 ZextWrapper_1_32_inst5 (
    .I(enable_chain_output_O),
    .O(ZextWrapper_1_32_inst5_O)
);
ZextWrapper_1_32 ZextWrapper_1_32_inst6 (
    .I(flush_reg_sel_O),
    .O(ZextWrapper_1_32_inst6_O)
);
ZextWrapper_1_32 ZextWrapper_1_32_inst7 (
    .I(flush_reg_value_O),
    .O(ZextWrapper_1_32_inst7_O)
);
ZextWrapper_1_32 ZextWrapper_1_32_inst8 (
    .I(ren_in_reg_sel_O),
    .O(ZextWrapper_1_32_inst8_O)
);
ZextWrapper_1_32 ZextWrapper_1_32_inst9 (
    .I(ren_in_reg_value_O),
    .O(ZextWrapper_1_32_inst9_O)
);
ZextWrapper_2_32 ZextWrapper_2_32_inst0 (
    .I(mode_O),
    .O(ZextWrapper_2_32_inst0_O)
);
ZextWrapper_4_32 ZextWrapper_4_32_inst0 (
    .I(strg_ub_sram_read_loops_dimensionality_O),
    .O(ZextWrapper_4_32_inst0_O)
);
ZextWrapper_4_32 ZextWrapper_4_32_inst1 (
    .I(strg_ub_sram_write_loops_dimensionality_O),
    .O(ZextWrapper_4_32_inst1_O)
);
ConfigRegister_1_8_32_0 chain_idx_input (
    .clk(clk),
    .reset(reset),
    .O(chain_idx_input_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_1_8_32_1 chain_idx_output (
    .clk(clk),
    .reset(reset),
    .O(chain_idx_output_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_1_8_32_2 chain_valid_in_reg_sel (
    .clk(clk),
    .reset(reset),
    .O(chain_valid_in_reg_sel_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_1_8_32_3 chain_valid_in_reg_value (
    .clk(clk),
    .reset(reset),
    .O(chain_valid_in_reg_value_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
MuxWrapper_2_1 chain_valid_in_sel (
    .I_0(chain_valid_in),
    .I_1(chain_valid_in_reg_value_O),
    .O(chain_valid_in_sel_O),
    .S(chain_valid_in_reg_sel_O)
);
coreir_wrap coreir_wrapInAsyncReset_inst0 (
    .in(reset),
    .out(coreir_wrapInAsyncReset_inst0_out)
);
coreir_wrap coreir_wrapOutAsyncReset_inst0 (
    .in(Invert1_inst0_out[0]),
    .out(coreir_wrapOutAsyncReset_inst0_out)
);
ConfigRegister_1_8_32_4 enable_chain_input (
    .clk(clk),
    .reset(reset),
    .O(enable_chain_input_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_1_8_32_5 enable_chain_output (
    .clk(clk),
    .reset(reset),
    .O(enable_chain_output_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_1_8_32_6 flush_reg_sel (
    .clk(clk),
    .reset(reset),
    .O(flush_reg_sel_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_1_8_32_7 flush_reg_value (
    .clk(clk),
    .reset(reset),
    .O(flush_reg_value_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
MuxWrapper_2_1 flush_sel (
    .I_0(flush),
    .I_1(flush_reg_value_O),
    .O(flush_sel_O),
    .S(flush_reg_sel_O)
);
ConfigRegister_2_8_32_8 mode (
    .clk(clk),
    .reset(reset),
    .O(mode_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_1_8_32_9 ren_in_reg_sel (
    .clk(clk),
    .reset(reset),
    .O(ren_in_reg_sel_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_1_8_32_10 ren_in_reg_value (
    .clk(clk),
    .reset(reset),
    .O(ren_in_reg_value_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
MuxWrapper_2_1 ren_in_sel (
    .I_0(ren_in),
    .I_1(ren_in_reg_value_O),
    .O(ren_in_sel_O),
    .S(ren_in_reg_sel_O)
);
ConfigRegister_16_8_32_11 strg_ub_sram_read_addr_gen_starting_addr (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_addr_gen_starting_addr_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_12 strg_ub_sram_read_addr_gen_strides_0 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_addr_gen_strides_0_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_13 strg_ub_sram_read_addr_gen_strides_1 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_addr_gen_strides_1_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_14 strg_ub_sram_read_addr_gen_strides_2 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_addr_gen_strides_2_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_15 strg_ub_sram_read_addr_gen_strides_3 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_addr_gen_strides_3_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_16 strg_ub_sram_read_addr_gen_strides_4 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_addr_gen_strides_4_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_17 strg_ub_sram_read_addr_gen_strides_5 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_addr_gen_strides_5_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_4_8_32_18 strg_ub_sram_read_loops_dimensionality (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_loops_dimensionality_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_19 strg_ub_sram_read_loops_ranges_0 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_loops_ranges_0_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_20 strg_ub_sram_read_loops_ranges_1 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_loops_ranges_1_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_21 strg_ub_sram_read_loops_ranges_2 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_loops_ranges_2_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_22 strg_ub_sram_read_loops_ranges_3 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_loops_ranges_3_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_23 strg_ub_sram_read_loops_ranges_4 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_loops_ranges_4_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_24 strg_ub_sram_read_loops_ranges_5 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_loops_ranges_5_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_25 strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_26 strg_ub_sram_read_sched_gen_sched_addr_gen_strides_0 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_0_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_27 strg_ub_sram_read_sched_gen_sched_addr_gen_strides_1 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_1_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_28 strg_ub_sram_read_sched_gen_sched_addr_gen_strides_2 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_2_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_29 strg_ub_sram_read_sched_gen_sched_addr_gen_strides_3 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_3_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_30 strg_ub_sram_read_sched_gen_sched_addr_gen_strides_4 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_4_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_31 strg_ub_sram_read_sched_gen_sched_addr_gen_strides_5 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_read_sched_gen_sched_addr_gen_strides_5_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_32 strg_ub_sram_write_addr_gen_starting_addr (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_addr_gen_starting_addr_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_33 strg_ub_sram_write_addr_gen_strides_0 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_addr_gen_strides_0_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_34 strg_ub_sram_write_addr_gen_strides_1 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_addr_gen_strides_1_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_35 strg_ub_sram_write_addr_gen_strides_2 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_addr_gen_strides_2_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_36 strg_ub_sram_write_addr_gen_strides_3 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_addr_gen_strides_3_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_37 strg_ub_sram_write_addr_gen_strides_4 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_addr_gen_strides_4_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_38 strg_ub_sram_write_addr_gen_strides_5 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_addr_gen_strides_5_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_4_8_32_39 strg_ub_sram_write_loops_dimensionality (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_loops_dimensionality_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_40 strg_ub_sram_write_loops_ranges_0 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_loops_ranges_0_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_41 strg_ub_sram_write_loops_ranges_1 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_loops_ranges_1_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_42 strg_ub_sram_write_loops_ranges_2 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_loops_ranges_2_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_43 strg_ub_sram_write_loops_ranges_3 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_loops_ranges_3_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_44 strg_ub_sram_write_loops_ranges_4 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_loops_ranges_4_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_45 strg_ub_sram_write_loops_ranges_5 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_loops_ranges_5_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_46 strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_47 strg_ub_sram_write_sched_gen_sched_addr_gen_strides_0 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_0_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_48 strg_ub_sram_write_sched_gen_sched_addr_gen_strides_1 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_1_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_49 strg_ub_sram_write_sched_gen_sched_addr_gen_strides_2 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_2_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_50 strg_ub_sram_write_sched_gen_sched_addr_gen_strides_3 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_3_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_51 strg_ub_sram_write_sched_gen_sched_addr_gen_strides_4 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_4_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_16_8_32_52 strg_ub_sram_write_sched_gen_sched_addr_gen_strides_5 (
    .clk(clk),
    .reset(reset),
    .O(strg_ub_sram_write_sched_gen_sched_addr_gen_strides_5_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_1_8_32_53 tile_en (
    .clk(clk),
    .reset(reset),
    .O(tile_en_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_1_8_32_54 wen_in_reg_sel (
    .clk(clk),
    .reset(reset),
    .O(wen_in_reg_sel_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
ConfigRegister_1_8_32_55 wen_in_reg_value (
    .clk(clk),
    .reset(reset),
    .O(wen_in_reg_value_O),
    .config_addr(config_config_addr),
    .config_data(config_config_data),
    .config_en(config_write[0])
);
MuxWrapper_2_1 wen_in_sel (
    .I_0(wen_in),
    .I_1(wen_in_reg_value_O),
    .O(wen_in_sel_O),
    .S(wen_in_reg_sel_O)
);
assign chain_data_out = LakeTop_W_inst0_chain_data_out;
assign chain_valid_out = LakeTop_W_inst0_chain_valid_out;
assign data_out = LakeTop_W_inst0_data_out;
assign read_config_data = MuxWrapper_56_32_inst0_O;
assign read_config_data_1 = LakeTop_W_inst0_config_data_out;
assign valid_out = LakeTop_W_inst0_valid_out;
endmodule

