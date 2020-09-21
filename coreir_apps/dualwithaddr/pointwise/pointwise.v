module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_mult_stencil [0:0]
);
assign out_hw_output_stencil = in0_mult_stencil[0];
endmodule

module hcompute_hw_input_global_wrapper_stencil (
    output [15:0] out_hw_input_global_wrapper_stencil,
    input [15:0] in0_hw_input_stencil [0:0]
);
assign out_hw_input_global_wrapper_stencil = in0_hw_input_stencil[0];
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] mult_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_mult_stencil [0:0];
assign inner_compute_in0_mult_stencil[0] = mult_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_mult_stencil(inner_compute_in0_mult_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module cu_op_hcompute_hw_input_global_wrapper_stencil (
    input clk,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_input_global_wrapper_stencil;
wire [15:0] inner_compute_in0_hw_input_stencil [0:0];
assign inner_compute_in0_hw_input_stencil[0] = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
hcompute_hw_input_global_wrapper_stencil inner_compute (
    .out_hw_input_global_wrapper_stencil(inner_compute_out_hw_input_global_wrapper_stencil),
    .in0_hw_input_stencil(inner_compute_in0_hw_input_stencil)
);
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = inner_compute_out_hw_input_global_wrapper_stencil;
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

module delay__U80 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U81_out;
wire [15:0] _U82_out;
wire [15:0] _U83_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U81 (
    .in(wdata),
    .clk(clk),
    .out(_U81_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U82 (
    .in(_U81_out),
    .clk(clk),
    .out(_U82_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U83 (
    .in(_U82_out),
    .clk(clk),
    .out(_U83_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U84 (
    .in(_U83_out),
    .clk(clk),
    .out(rdata)
);
endmodule

module mult_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0],
    input op_hcompute_mult_stencil_write_wen,
    input [15:0] op_hcompute_mult_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_mult_stencil_write [0:0]
);
wire [15:0] delay_sr_U85_rdata;
delay__U80 delay_sr_U85 (
    .clk(clk),
    .wdata(op_hcompute_mult_stencil_write[0]),
    .rdata(delay_sr_U85_rdata),
    .rst_n(rst_n),
    .flush(flush)
);
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U85_rdata;
endmodule

module delay__U75 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U76_out;
wire [15:0] _U77_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U76 (
    .in(wdata),
    .clk(clk),
    .out(_U76_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U77 (
    .in(_U76_out),
    .clk(clk),
    .out(_U77_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U78 (
    .in(_U77_out),
    .clk(clk),
    .out(rdata)
);
endmodule

module hw_input_global_wrapper_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0],
    input op_hcompute_mult_stencil_read_ren,
    input [15:0] op_hcompute_mult_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_mult_stencil_read [0:0]
);
wire [15:0] delay_sr_U79_rdata;
delay__U75 delay_sr_U79 (
    .clk(clk),
    .wdata(op_hcompute_hw_input_global_wrapper_stencil_write[0]),
    .rdata(delay_sr_U79_rdata),
    .rst_n(rst_n),
    .flush(flush)
);
assign op_hcompute_mult_stencil_read[0] = delay_sr_U79_rdata;
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

module hcompute_mult_stencil (
    output [15:0] out_mult_stencil,
    input [15:0] in0_hw_input_global_wrapper_stencil [0:0]
);
assign out_mult_stencil = 16'(in0_hw_input_global_wrapper_stencil[0] * 16'h0002);
endmodule

module cu_op_hcompute_mult_stencil (
    input clk,
    input [15:0] hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read [0:0],
    output [15:0] mult_stencil_op_hcompute_mult_stencil_write [0:0]
);
wire [15:0] inner_compute_out_mult_stencil;
wire [15:0] inner_compute_in0_hw_input_global_wrapper_stencil [0:0];
assign inner_compute_in0_hw_input_global_wrapper_stencil[0] = hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read[0];
hcompute_mult_stencil inner_compute (
    .out_mult_stencil(inner_compute_out_mult_stencil),
    .in0_hw_input_global_wrapper_stencil(inner_compute_in0_hw_input_global_wrapper_stencil)
);
assign mult_stencil_op_hcompute_mult_stencil_write[0] = inner_compute_out_mult_stencil;
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

module array_delay_U71 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U72_out;
wire [15:0] _U73_out;
wire [15:0] _U74_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U72 (
    .in(in[0]),
    .clk(clk),
    .out(_U72_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U73 (
    .in(in[1]),
    .clk(clk),
    .out(_U73_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U74 (
    .in(in[2]),
    .clk(clk),
    .out(_U74_out)
);
assign out[2] = _U74_out;
assign out[1] = _U73_out;
assign out[0] = _U72_out;
endmodule

module array_delay_U67 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U68_out;
wire [15:0] _U69_out;
wire [15:0] _U70_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U68 (
    .in(in[0]),
    .clk(clk),
    .out(_U68_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U69 (
    .in(in[1]),
    .clk(clk),
    .out(_U69_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U70 (
    .in(in[2]),
    .clk(clk),
    .out(_U70_out)
);
assign out[2] = _U70_out;
assign out[1] = _U69_out;
assign out[0] = _U68_out;
endmodule

module array_delay_U46 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U47_out;
wire [15:0] _U48_out;
wire [15:0] _U49_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U47 (
    .in(in[0]),
    .clk(clk),
    .out(_U47_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U48 (
    .in(in[1]),
    .clk(clk),
    .out(_U48_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U49 (
    .in(in[2]),
    .clk(clk),
    .out(_U49_out)
);
assign out[2] = _U49_out;
assign out[1] = _U48_out;
assign out[0] = _U47_out;
endmodule

module array_delay_U42 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U43_out;
wire [15:0] _U44_out;
wire [15:0] _U45_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U43 (
    .in(in[0]),
    .clk(clk),
    .out(_U43_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U44 (
    .in(in[1]),
    .clk(clk),
    .out(_U44_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U45 (
    .in(in[2]),
    .clk(clk),
    .out(_U45_out)
);
assign out[2] = _U45_out;
assign out[1] = _U44_out;
assign out[0] = _U43_out;
endmodule

module array_delay_U21 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U22_out;
wire [15:0] _U23_out;
wire [15:0] _U24_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U22 (
    .in(in[0]),
    .clk(clk),
    .out(_U22_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U23 (
    .in(in[1]),
    .clk(clk),
    .out(_U23_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U24 (
    .in(in[2]),
    .clk(clk),
    .out(_U24_out)
);
assign out[2] = _U24_out;
assign out[1] = _U23_out;
assign out[0] = _U22_out;
endmodule

module array_delay_U17 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U18_out;
wire [15:0] _U19_out;
wire [15:0] _U20_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U18 (
    .in(in[0]),
    .clk(clk),
    .out(_U18_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U19 (
    .in(in[1]),
    .clk(clk),
    .out(_U19_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U20 (
    .in(in[2]),
    .clk(clk),
    .out(_U20_out)
);
assign out[2] = _U20_out;
assign out[1] = _U19_out;
assign out[0] = _U18_out;
endmodule

module aff__U51 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
endmodule

module affine_controller__U50 (
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
aff__U51 affine_func (
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

module aff__U26 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0004);
endmodule

module affine_controller__U25 (
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
aff__U26 affine_func (
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

module aff__U1 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
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

module pointwise (
    input clk,
    input rst_n,
    input flush,
    output hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] _U86_out;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read [0:0];
wire [15:0] mult_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_read_start;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write [0:0];
wire op_hcompute_mult_stencil_exe_start_out;
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_mult_stencil_port_controller_valid;
wire [15:0] op_hcompute_mult_stencil_port_controller_d [2:0];
wire op_hcompute_mult_stencil_read_start;
wire op_hcompute_mult_stencil_write_start;
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_out [2:0];
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U86 (
    .in(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0]),
    .clk(clk),
    .out(_U86_out)
);
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[2];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[1];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars [2:0];
assign hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars[2] = op_hcompute_mult_stencil_port_controller_d[2];
assign hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars[1] = op_hcompute_mult_stencil_port_controller_d[1];
assign hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars[0] = op_hcompute_mult_stencil_port_controller_d[0];
hw_input_global_wrapper_stencil_ub hw_input_global_wrapper_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_hw_input_global_wrapper_stencil_write_wen(op_hcompute_hw_input_global_wrapper_stencil_write_start),
    .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_global_wrapper_stencil_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write),
    .op_hcompute_mult_stencil_read_ren(op_hcompute_mult_stencil_read_start),
    .op_hcompute_mult_stencil_read_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars),
    .op_hcompute_mult_stencil_read(hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read)
);
wire [15:0] mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
assign mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
wire [15:0] mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars [2:0];
assign mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars[2] = op_hcompute_mult_stencil_write_start_control_vars_out[2];
assign mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars[1] = op_hcompute_mult_stencil_write_start_control_vars_out[1];
assign mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars[0] = op_hcompute_mult_stencil_write_start_control_vars_out[0];
wire [15:0] mult_stencil_op_hcompute_mult_stencil_write [0:0];
assign mult_stencil_op_hcompute_mult_stencil_write[0] = op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write[0];
mult_stencil_ub mult_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_hw_output_stencil_read_ren(op_hcompute_hw_output_stencil_read_start),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(mult_stencil_op_hcompute_hw_output_stencil_read),
    .op_hcompute_mult_stencil_write_wen(op_hcompute_mult_stencil_write_start),
    .op_hcompute_mult_stencil_write_ctrl_vars(mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars),
    .op_hcompute_mult_stencil_write(mult_stencil_op_hcompute_mult_stencil_write)
);
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0];
assign op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] = _U86_out;
cu_op_hcompute_hw_input_global_wrapper_stencil op_hcompute_hw_input_global_wrapper_stencil (
    .clk(clk),
    .hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read(op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read),
    .hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write(op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_input_global_wrapper_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_out)
);
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U21 op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out)
);
affine_controller__U0 op_hcompute_hw_input_global_wrapper_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_read_start = op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start = op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U17 op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_hw_output_stencil_mult_stencil_op_hcompute_hw_output_stencil_read [0:0];
assign op_hcompute_hw_output_stencil_mult_stencil_op_hcompute_hw_output_stencil_read[0] = mult_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(clk),
    .mult_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_mult_stencil_op_hcompute_hw_output_stencil_read),
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
array_delay_U71 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
affine_controller__U50 op_hcompute_hw_output_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start = op_hcompute_hw_output_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U67 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_mult_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read [0:0];
assign op_hcompute_mult_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read[0] = hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read[0];
cu_op_hcompute_mult_stencil op_hcompute_mult_stencil (
    .clk(clk),
    .hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read(op_hcompute_mult_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read),
    .mult_stencil_op_hcompute_mult_stencil_write(op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_mult_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_mult_stencil_port_controller_valid),
    .out(op_hcompute_mult_stencil_exe_start_out)
);
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_mult_stencil_exe_start_control_vars_in[2] = op_hcompute_mult_stencil_port_controller_d[2];
assign op_hcompute_mult_stencil_exe_start_control_vars_in[1] = op_hcompute_mult_stencil_port_controller_d[1];
assign op_hcompute_mult_stencil_exe_start_control_vars_in[0] = op_hcompute_mult_stencil_port_controller_d[0];
array_delay_U46 op_hcompute_mult_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_mult_stencil_exe_start_control_vars_in),
    .out(op_hcompute_mult_stencil_exe_start_control_vars_out)
);
affine_controller__U25 op_hcompute_mult_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_mult_stencil_port_controller_valid),
    .d(op_hcompute_mult_stencil_port_controller_d)
);
assign op_hcompute_mult_stencil_read_start = op_hcompute_mult_stencil_port_controller_valid;
assign op_hcompute_mult_stencil_write_start = op_hcompute_mult_stencil_exe_start_out;
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_mult_stencil_write_start_control_vars_in[2] = op_hcompute_mult_stencil_port_controller_d[2];
assign op_hcompute_mult_stencil_write_start_control_vars_in[1] = op_hcompute_mult_stencil_port_controller_d[1];
assign op_hcompute_mult_stencil_write_start_control_vars_in[0] = op_hcompute_mult_stencil_port_controller_d[0];
array_delay_U42 op_hcompute_mult_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_mult_stencil_write_start_control_vars_in),
    .out(op_hcompute_mult_stencil_write_start_control_vars_out)
);
assign hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid = op_hcompute_hw_input_global_wrapper_stencil_read_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
endmodule

