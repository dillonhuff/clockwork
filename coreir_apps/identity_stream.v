module in_buf_st_3_select (
    input clk,
    input [15:0] d_0,
    input [15:0] d_1,
    input [15:0] in_buf_ld_0_to_in_buf_st_3,
    output [15:0] out
);
assign out = in_buf_ld_0_to_in_buf_st_3;
endmodule

module in_buf_ld_0_broadcast (
    input [15:0] in,
    input en,
    output valid,
    output [15:0] in_buf_ld_0_to_in_buf_st_3
);
assign valid = en;
assign in_buf_ld_0_to_in_buf_st_3 = in;
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

module cu_st (
    input clk,
    input [15:0] in_buf_st_read_0,
    output [15:0] out_st_write_0
);
wire [15:0] slice__U25_out;
coreir_slice #(
    .hi(16),
    .lo(0),
    .width(16)
) slice__U25 (
    .in(in_buf_st_read_0),
    .out(slice__U25_out)
);
assign out_st_write_0 = slice__U25_out;
endmodule

module cu_ld (
    input clk,
    output [15:0] in_buf_ld_write_0,
    input [15:0] in_ld_read_0
);
wire [15:0] slice__U12_out;
coreir_slice #(
    .hi(16),
    .lo(0),
    .width(16)
) slice__U12 (
    .in(in_ld_read_0),
    .out(slice__U12_out)
);
assign in_buf_ld_write_0 = slice__U12_out;
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

module coreir_mem #(
    parameter has_init = 1'b0,
    parameter depth = 1,
    parameter width = 1
) (
    input clk,
    input [width-1:0] wdata,
    input [$clog2(depth)-1:0] waddr,
    input wen,
    output [width-1:0] rdata,
    input [$clog2(depth)-1:0] raddr
);
  reg [width-1:0] data[depth-1:0];
  always @(posedge clk) begin
    if (wen) begin
      data[waddr] <= wdata;
    end
  end
  assign rdata = data[raddr];
endmodule

module ram__U26 (
    input clk,
    input [15:0] wdata,
    input [15:0] waddr,
    input wen,
    output [15:0] rdata,
    input [15:0] raddr,
    input ren
);
wire [15:0] mem_rdata;
wire [3:0] raddr_slice_out;
wire [15:0] readreg_out;
wire [3:0] waddr_slice_out;
coreir_mem #(
    .depth(10),
    .has_init(1'b0),
    .width(16)
) mem (
    .clk(clk),
    .wdata(wdata),
    .waddr(waddr_slice_out),
    .wen(wen),
    .rdata(mem_rdata),
    .raddr(raddr_slice_out)
);
coreir_slice #(
    .hi(4),
    .lo(0),
    .width(16)
) raddr_slice (
    .in(raddr),
    .out(raddr_slice_out)
);
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) readreg (
    .in(mem_rdata),
    .clk(clk),
    .out(readreg_out),
    .en(ren)
);
coreir_slice #(
    .hi(4),
    .lo(0),
    .width(16)
) waddr_slice (
    .in(waddr),
    .out(waddr_slice_out)
);
assign rdata = readreg_out;
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

module array_delay_U9 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    output [15:0] out_0,
    output [15:0] out_1
);
wire [15:0] _U10_out;
wire [15:0] _U11_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U10 (
    .in(in_0),
    .clk(clk),
    .out(_U10_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U11 (
    .in(in_1),
    .clk(clk),
    .out(_U11_out)
);
assign out_0 = _U10_out;
assign out_1 = _U11_out;
endmodule

module array_delay_U22 (
    input clk,
    input [15:0] in_0,
    input [15:0] in_1,
    output [15:0] out_0,
    output [15:0] out_1
);
wire [15:0] _U23_out;
wire [15:0] _U24_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U23 (
    .in(in_0),
    .clk(clk),
    .out(_U23_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U24 (
    .in(in_1),
    .clk(clk),
    .out(_U24_out)
);
assign out_0 = _U23_out;
assign out_1 = _U24_out;
endmodule

module aff__U32 (
    input [15:0] d_0,
    input [15:0] d_1,
    output [15:0] out
);
wire [15:0] add_all__U35_out;
wire [15:0] add_all__U36_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U33_out;
wire [15:0] mul_d1__U34_out;
coreir_add #(
    .width(16)
) add_all__U35 (
    .in0(mul_d0__U33_out),
    .in1(mul_d1__U34_out),
    .out(add_all__U35_out)
);
coreir_add #(
    .width(16)
) add_all__U36 (
    .in0(add_all__U35_out),
    .in1(const_term_out),
    .out(add_all__U36_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) const_term (
    .out(const_term_out)
);
coreir_mul #(
    .width(16)
) mul_d0__U33 (
    .in0(coeff_0_out),
    .in1(d_0),
    .out(mul_d0__U33_out)
);
coreir_mul #(
    .width(16)
) mul_d1__U34 (
    .in0(coeff_1_out),
    .in1(d_1),
    .out(mul_d1__U34_out)
);
assign out = add_all__U36_out;
endmodule

module aff__U27 (
    input [15:0] d_0,
    input [15:0] d_1,
    output [15:0] out
);
wire [15:0] add_all__U30_out;
wire [15:0] add_all__U31_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U28_out;
wire [15:0] mul_d1__U29_out;
coreir_add #(
    .width(16)
) add_all__U30 (
    .in0(mul_d0__U28_out),
    .in1(mul_d1__U29_out),
    .out(add_all__U30_out)
);
coreir_add #(
    .width(16)
) add_all__U31 (
    .in0(add_all__U30_out),
    .in1(const_term_out),
    .out(add_all__U31_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) const_term (
    .out(const_term_out)
);
coreir_mul #(
    .width(16)
) mul_d0__U28 (
    .in0(coeff_0_out),
    .in1(d_0),
    .out(mul_d0__U28_out)
);
coreir_mul #(
    .width(16)
) mul_d1__U29 (
    .in0(coeff_1_out),
    .in1(d_1),
    .out(mul_d1__U29_out)
);
assign out = add_all__U31_out;
endmodule

module in_buf_ub (
    input clk,
    input [15:0] ld_write_0,
    input [15:0] ld_write_ctrl_vars_0,
    input [15:0] ld_write_ctrl_vars_1,
    input ld_write_wen,
    output [15:0] st_read_0,
    input [15:0] st_read_ctrl_vars_0,
    input [15:0] st_read_ctrl_vars_1,
    input st_read_ren
);
wire in_buf_ld_0_broadcast_valid;
wire [15:0] in_buf_ld_0_broadcast_in_buf_ld_0_to_in_buf_st_3;
wire [15:0] in_buf_ld_0_to_in_buf_st_3_rdata;
wire [15:0] in_buf_ld_0_to_in_buf_st_3_read_addrgen_out;
wire [15:0] in_buf_ld_0_to_in_buf_st_3_write_addrgen_out;
wire [15:0] in_buf_st_3_select_out;
in_buf_ld_0_broadcast in_buf_ld_0_broadcast (
    .in(ld_write_0),
    .en(ld_write_wen),
    .valid(in_buf_ld_0_broadcast_valid),
    .in_buf_ld_0_to_in_buf_st_3(in_buf_ld_0_broadcast_in_buf_ld_0_to_in_buf_st_3)
);
ram__U26 in_buf_ld_0_to_in_buf_st_3 (
    .clk(clk),
    .wdata(in_buf_ld_0_broadcast_in_buf_ld_0_to_in_buf_st_3),
    .waddr(in_buf_ld_0_to_in_buf_st_3_write_addrgen_out),
    .wen(in_buf_ld_0_broadcast_valid),
    .rdata(in_buf_ld_0_to_in_buf_st_3_rdata),
    .raddr(in_buf_ld_0_to_in_buf_st_3_read_addrgen_out),
    .ren(st_read_ren)
);
aff__U27 in_buf_ld_0_to_in_buf_st_3_read_addrgen (
    .d_0(st_read_ctrl_vars_0),
    .d_1(st_read_ctrl_vars_1),
    .out(in_buf_ld_0_to_in_buf_st_3_read_addrgen_out)
);
aff__U32 in_buf_ld_0_to_in_buf_st_3_write_addrgen (
    .d_0(ld_write_ctrl_vars_0),
    .d_1(ld_write_ctrl_vars_1),
    .out(in_buf_ld_0_to_in_buf_st_3_write_addrgen_out)
);
in_buf_st_3_select in_buf_st_3_select (
    .clk(clk),
    .d_0(st_read_ctrl_vars_0),
    .d_1(st_read_ctrl_vars_1),
    .in_buf_ld_0_to_in_buf_st_3(in_buf_ld_0_to_in_buf_st_3_rdata),
    .out(in_buf_st_3_select_out)
);
assign st_read_0 = in_buf_st_3_select_out;
endmodule

module aff__U14 (
    input [15:0] d_0,
    input [15:0] d_1,
    output [15:0] out
);
wire [15:0] add_all__U17_out;
wire [15:0] add_all__U18_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U15_out;
wire [15:0] mul_d1__U16_out;
coreir_add #(
    .width(16)
) add_all__U17 (
    .in0(mul_d0__U15_out),
    .in1(mul_d1__U16_out),
    .out(add_all__U17_out)
);
coreir_add #(
    .width(16)
) add_all__U18 (
    .in0(add_all__U17_out),
    .in1(const_term_out),
    .out(add_all__U18_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
);
coreir_const #(
    .value(16'h0002),
    .width(16)
) const_term (
    .out(const_term_out)
);
coreir_mul #(
    .width(16)
) mul_d0__U15 (
    .in0(coeff_0_out),
    .in1(d_0),
    .out(mul_d0__U15_out)
);
coreir_mul #(
    .width(16)
) mul_d1__U16 (
    .in0(coeff_1_out),
    .in1(d_1),
    .out(mul_d1__U16_out)
);
assign out = add_all__U18_out;
endmodule

module affine_controller__U13 (
    input clk,
    output [15:0] d_0,
    output [15:0] d_1,
    output valid
);
wire [15:0] _U19_out;
wire [15:0] _U20_out;
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire d_0_am__U21_out;
wire d_0_at_max_out;
wire [15:0] d_0_inc_out;
wire [15:0] d_0_max_out;
wire [15:0] d_0_min_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_next_value_at_max_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_inc_out;
wire [15:0] d_1_max_out;
wire [15:0] d_1_min_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_next_value_at_max_out;
wire [15:0] d_1_reg_out;
wire [15:0] inc_time_out;
wire [15:0] time_diff_out;
wire true_out;
coreir_const #(
    .value(16'h0001),
    .width(16)
) _U19 (
    .out(_U19_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) _U20 (
    .out(_U20_out)
);
aff__U14 affine_func (
    .d_0(d_0_reg_out),
    .d_1(d_1_reg_out),
    .out(affine_func_out)
);
coreir_eq #(
    .width(16)
) cmp_time (
    .in0(time_diff_out),
    .in1(_U20_out),
    .out(cmp_time_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
corebit_and d_0_am__U21 (
    .in0(true_out),
    .in1(d_1_at_max_out),
    .out(d_0_am__U21_out)
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
    .in1(_U19_out),
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
    .sel(d_0_am__U21_out),
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
    .in1(_U19_out),
    .out(d_1_inc_out)
);
coreir_const #(
    .value(16'h0009),
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
    .sel(true_out),
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
coreir_add #(
    .width(16)
) inc_time (
    .in0(cycle_time_out),
    .in1(_U19_out),
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
assign valid = cmp_time_out;
endmodule

module aff__U1 (
    input [15:0] d_0,
    input [15:0] d_1,
    output [15:0] out
);
wire [15:0] add_all__U4_out;
wire [15:0] add_all__U5_out;
wire [15:0] coeff_0_out;
wire [15:0] coeff_1_out;
wire [15:0] const_term_out;
wire [15:0] mul_d0__U2_out;
wire [15:0] mul_d1__U3_out;
coreir_add #(
    .width(16)
) add_all__U4 (
    .in0(mul_d0__U2_out),
    .in1(mul_d1__U3_out),
    .out(add_all__U4_out)
);
coreir_add #(
    .width(16)
) add_all__U5 (
    .in0(add_all__U4_out),
    .in1(const_term_out),
    .out(add_all__U5_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) coeff_0 (
    .out(coeff_0_out)
);
coreir_const #(
    .value(16'h0001),
    .width(16)
) coeff_1 (
    .out(coeff_1_out)
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
assign out = add_all__U5_out;
endmodule

module affine_controller__U0 (
    input clk,
    output [15:0] d_0,
    output [15:0] d_1,
    output valid
);
wire [15:0] _U6_out;
wire [15:0] _U7_out;
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire d_0_am__U8_out;
wire d_0_at_max_out;
wire [15:0] d_0_inc_out;
wire [15:0] d_0_max_out;
wire [15:0] d_0_min_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_next_value_at_max_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_inc_out;
wire [15:0] d_1_max_out;
wire [15:0] d_1_min_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_next_value_at_max_out;
wire [15:0] d_1_reg_out;
wire [15:0] inc_time_out;
wire [15:0] time_diff_out;
wire true_out;
coreir_const #(
    .value(16'h0001),
    .width(16)
) _U6 (
    .out(_U6_out)
);
coreir_const #(
    .value(16'h0000),
    .width(16)
) _U7 (
    .out(_U7_out)
);
aff__U1 affine_func (
    .d_0(d_0_reg_out),
    .d_1(d_1_reg_out),
    .out(affine_func_out)
);
coreir_eq #(
    .width(16)
) cmp_time (
    .in0(time_diff_out),
    .in1(_U7_out),
    .out(cmp_time_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
corebit_and d_0_am__U8 (
    .in0(true_out),
    .in1(d_1_at_max_out),
    .out(d_0_am__U8_out)
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
    .in1(_U6_out),
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
    .sel(d_0_am__U8_out),
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
    .in1(_U6_out),
    .out(d_1_inc_out)
);
coreir_const #(
    .value(16'h0009),
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
    .sel(true_out),
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
coreir_add #(
    .width(16)
) inc_time (
    .in0(cycle_time_out),
    .in1(_U6_out),
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
assign valid = cmp_time_out;
endmodule

module identity_stream (
    input clk,
    input [15:0] in_ld_read_0,
    output in_ld_read_valid,
    output [15:0] out_st_write_0,
    output out_st_write_en
);
wire [15:0] _U37_out;
wire [15:0] in_buf_st_read_0;
wire [15:0] ld_in_buf_ld_write_0;
wire ld_exe_start_out;
wire [15:0] ld_port_controller_d_0;
wire [15:0] ld_port_controller_d_1;
wire ld_port_controller_valid;
wire ld_read_start_out;
wire ld_write_start_out;
wire [15:0] ld_write_start_control_vars_out_0;
wire [15:0] ld_write_start_control_vars_out_1;
wire [15:0] st_out_st_write_0;
wire st_exe_start_out;
wire [15:0] st_port_controller_d_0;
wire [15:0] st_port_controller_d_1;
wire st_port_controller_valid;
wire st_read_start_out;
wire st_write_start_out;
wire [15:0] st_write_start_control_vars_out_0;
wire [15:0] st_write_start_control_vars_out_1;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U37 (
    .in(in_ld_read_0),
    .clk(clk),
    .out(_U37_out)
);
in_buf_ub in_buf (
    .clk(clk),
    .ld_write_0(ld_in_buf_ld_write_0),
    .ld_write_ctrl_vars_0(ld_write_start_control_vars_out_0),
    .ld_write_ctrl_vars_1(ld_write_start_control_vars_out_1),
    .ld_write_wen(ld_write_start_out),
    .st_read_0(in_buf_st_read_0),
    .st_read_ctrl_vars_0(st_port_controller_d_0),
    .st_read_ctrl_vars_1(st_port_controller_d_1),
    .st_read_ren(st_read_start_out)
);
cu_ld ld (
    .clk(clk),
    .in_buf_ld_write_0(ld_in_buf_ld_write_0),
    .in_ld_read_0(_U37_out)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) ld_exe_start (
    .clk(clk),
    .in(ld_port_controller_valid),
    .out(ld_exe_start_out)
);
affine_controller__U0 ld_port_controller (
    .clk(clk),
    .d_0(ld_port_controller_d_0),
    .d_1(ld_port_controller_d_1),
    .valid(ld_port_controller_valid)
);
corebit_wire ld_read_start (
    .in(ld_port_controller_valid),
    .out(ld_read_start_out)
);
corebit_wire ld_write_start (
    .in(ld_exe_start_out),
    .out(ld_write_start_out)
);
array_delay_U9 ld_write_start_control_vars (
    .clk(clk),
    .in_0(ld_port_controller_d_0),
    .in_1(ld_port_controller_d_1),
    .out_0(ld_write_start_control_vars_out_0),
    .out_1(ld_write_start_control_vars_out_1)
);
cu_st st (
    .clk(clk),
    .in_buf_st_read_0(in_buf_st_read_0),
    .out_st_write_0(st_out_st_write_0)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) st_exe_start (
    .clk(clk),
    .in(st_port_controller_valid),
    .out(st_exe_start_out)
);
affine_controller__U13 st_port_controller (
    .clk(clk),
    .d_0(st_port_controller_d_0),
    .d_1(st_port_controller_d_1),
    .valid(st_port_controller_valid)
);
corebit_wire st_read_start (
    .in(st_port_controller_valid),
    .out(st_read_start_out)
);
corebit_wire st_write_start (
    .in(st_exe_start_out),
    .out(st_write_start_out)
);
array_delay_U22 st_write_start_control_vars (
    .clk(clk),
    .in_0(st_port_controller_d_0),
    .in_1(st_port_controller_d_1),
    .out_0(st_write_start_control_vars_out_0),
    .out_1(st_write_start_control_vars_out_1)
);
assign in_ld_read_valid = ld_read_start_out;
assign out_st_write_0 = st_out_st_write_0;
assign out_st_write_en = st_write_start_out;
endmodule

