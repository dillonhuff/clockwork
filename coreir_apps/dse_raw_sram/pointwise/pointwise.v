module hcompute_hw_output_stencil_mapped (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_mult_stencil [0:0]
);
assign out_hw_output_stencil = in0_mult_stencil[0];
endmodule

module hcompute_hw_input_global_wrapper_stencil_mapped (
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
hcompute_hw_output_stencil_mapped inner_compute (
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
hcompute_hw_input_global_wrapper_stencil_mapped inner_compute (
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

module delay__U80 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U81_in;
wire _U81_clk;
wire [15:0] _U81_out;
wire [15:0] _U82_in;
wire _U82_clk;
wire [15:0] _U82_out;
wire [15:0] _U83_in;
wire _U83_clk;
wire [15:0] _U83_out;
wire [15:0] _U84_in;
wire _U84_clk;
assign _U81_in = wdata;
assign _U81_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U81 (
    .in(_U81_in),
    .clk(_U81_clk),
    .out(_U81_out)
);
assign _U82_in = _U81_out;
assign _U82_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U82 (
    .in(_U82_in),
    .clk(_U82_clk),
    .out(_U82_out)
);
assign _U83_in = _U82_out;
assign _U83_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U83 (
    .in(_U83_in),
    .clk(_U83_clk),
    .out(_U83_out)
);
assign _U84_in = _U83_out;
assign _U84_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U84 (
    .in(_U84_in),
    .clk(_U84_clk),
    .out(rdata)
);
endmodule

module mult_stencil_ub (
    input clk,
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0],
    input op_hcompute_mult_stencil_write_wen,
    input [15:0] op_hcompute_mult_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_mult_stencil_write [0:0]
);
wire delay_sr_U85_clk;
wire [15:0] delay_sr_U85_wdata;
wire [15:0] delay_sr_U85_rdata;
assign delay_sr_U85_clk = clk;
assign delay_sr_U85_wdata = op_hcompute_mult_stencil_write[0];
delay__U80 delay_sr_U85 (
    .clk(delay_sr_U85_clk),
    .wdata(delay_sr_U85_wdata),
    .rdata(delay_sr_U85_rdata)
);
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U85_rdata;
endmodule

module delay__U75 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U76_in;
wire _U76_clk;
wire [15:0] _U76_out;
wire [15:0] _U77_in;
wire _U77_clk;
wire [15:0] _U77_out;
wire [15:0] _U78_in;
wire _U78_clk;
assign _U76_in = wdata;
assign _U76_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U76 (
    .in(_U76_in),
    .clk(_U76_clk),
    .out(_U76_out)
);
assign _U77_in = _U76_out;
assign _U77_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U77 (
    .in(_U77_in),
    .clk(_U77_clk),
    .out(_U77_out)
);
assign _U78_in = _U77_out;
assign _U78_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U78 (
    .in(_U78_in),
    .clk(_U78_clk),
    .out(rdata)
);
endmodule

module hw_input_global_wrapper_stencil_ub (
    input clk,
    input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0],
    input op_hcompute_mult_stencil_read_ren,
    input [15:0] op_hcompute_mult_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_mult_stencil_read [0:0]
);
wire delay_sr_U79_clk;
wire [15:0] delay_sr_U79_wdata;
wire [15:0] delay_sr_U79_rdata;
assign delay_sr_U79_clk = clk;
assign delay_sr_U79_wdata = op_hcompute_hw_input_global_wrapper_stencil_write[0];
delay__U75 delay_sr_U79 (
    .clk(delay_sr_U79_clk),
    .wdata(delay_sr_U79_wdata),
    .rdata(delay_sr_U79_rdata)
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
wire [15:0] _U72_in;
wire _U72_clk;
wire [15:0] _U72_out;
wire [15:0] _U73_in;
wire _U73_clk;
wire [15:0] _U73_out;
wire [15:0] _U74_in;
wire _U74_clk;
wire [15:0] _U74_out;
assign _U72_in = in[0];
assign _U72_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U72 (
    .in(_U72_in),
    .clk(_U72_clk),
    .out(_U72_out)
);
assign _U73_in = in[1];
assign _U73_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U73 (
    .in(_U73_in),
    .clk(_U73_clk),
    .out(_U73_out)
);
assign _U74_in = in[2];
assign _U74_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U74 (
    .in(_U74_in),
    .clk(_U74_clk),
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
wire [15:0] _U68_in;
wire _U68_clk;
wire [15:0] _U68_out;
wire [15:0] _U69_in;
wire _U69_clk;
wire [15:0] _U69_out;
wire [15:0] _U70_in;
wire _U70_clk;
wire [15:0] _U70_out;
assign _U68_in = in[0];
assign _U68_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U68 (
    .in(_U68_in),
    .clk(_U68_clk),
    .out(_U68_out)
);
assign _U69_in = in[1];
assign _U69_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U69 (
    .in(_U69_in),
    .clk(_U69_clk),
    .out(_U69_out)
);
assign _U70_in = in[2];
assign _U70_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U70 (
    .in(_U70_in),
    .clk(_U70_clk),
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
wire [15:0] _U47_in;
wire _U47_clk;
wire [15:0] _U47_out;
wire [15:0] _U48_in;
wire _U48_clk;
wire [15:0] _U48_out;
wire [15:0] _U49_in;
wire _U49_clk;
wire [15:0] _U49_out;
assign _U47_in = in[0];
assign _U47_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U47 (
    .in(_U47_in),
    .clk(_U47_clk),
    .out(_U47_out)
);
assign _U48_in = in[1];
assign _U48_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U48 (
    .in(_U48_in),
    .clk(_U48_clk),
    .out(_U48_out)
);
assign _U49_in = in[2];
assign _U49_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U49 (
    .in(_U49_in),
    .clk(_U49_clk),
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
wire [15:0] _U43_in;
wire _U43_clk;
wire [15:0] _U43_out;
wire [15:0] _U44_in;
wire _U44_clk;
wire [15:0] _U44_out;
wire [15:0] _U45_in;
wire _U45_clk;
wire [15:0] _U45_out;
assign _U43_in = in[0];
assign _U43_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U43 (
    .in(_U43_in),
    .clk(_U43_clk),
    .out(_U43_out)
);
assign _U44_in = in[1];
assign _U44_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U44 (
    .in(_U44_in),
    .clk(_U44_clk),
    .out(_U44_out)
);
assign _U45_in = in[2];
assign _U45_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U45 (
    .in(_U45_in),
    .clk(_U45_clk),
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
wire [15:0] _U22_in;
wire _U22_clk;
wire [15:0] _U22_out;
wire [15:0] _U23_in;
wire _U23_clk;
wire [15:0] _U23_out;
wire [15:0] _U24_in;
wire _U24_clk;
wire [15:0] _U24_out;
assign _U22_in = in[0];
assign _U22_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U22 (
    .in(_U22_in),
    .clk(_U22_clk),
    .out(_U22_out)
);
assign _U23_in = in[1];
assign _U23_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U23 (
    .in(_U23_in),
    .clk(_U23_clk),
    .out(_U23_out)
);
assign _U24_in = in[2];
assign _U24_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U24 (
    .in(_U24_in),
    .clk(_U24_clk),
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
wire [15:0] _U18_in;
wire _U18_clk;
wire [15:0] _U18_out;
wire [15:0] _U19_in;
wire _U19_clk;
wire [15:0] _U19_out;
wire [15:0] _U20_in;
wire _U20_clk;
wire [15:0] _U20_out;
assign _U18_in = in[0];
assign _U18_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U18 (
    .in(_U18_in),
    .clk(_U18_clk),
    .out(_U18_out)
);
assign _U19_in = in[1];
assign _U19_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U19 (
    .in(_U19_in),
    .clk(_U19_clk),
    .out(_U19_out)
);
assign _U20_in = in[2];
assign _U20_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U20 (
    .in(_U20_in),
    .clk(_U20_clk),
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
wire [15:0] affine_func_d [2:0];
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
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U51 affine_func (
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
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
wire [15:0] affine_func_d [2:0];
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
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U26 affine_func (
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
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
wire [15:0] affine_func_d [2:0];
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
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module PE_wrapped_comb (
    input [19:0] inst,
    input [15:0] inputs0,
    input [15:0] inputs1,
    input clk_en,
    input [15:0] self_PE_O,
    output [19:0] O0,
    output [31:0] O1,
    output O2,
    output [15:0] O3
);
assign O0 = inst;
assign O1 = {inputs1[15:0],inputs0[15:0]};
assign O2 = clk_en;
assign O3 = self_PE_O;
endmodule

module Mux2xOutUInt32 (
    input [31:0] I0,
    input [31:0] I1,
    input S,
    output [31:0] O
);
reg [31:0] coreir_commonlib_mux2x32_inst0_out;
always @(*) begin
if (S == 0) begin
    coreir_commonlib_mux2x32_inst0_out = I0;
end else begin
    coreir_commonlib_mux2x32_inst0_out = I1;
end
end

assign O = coreir_commonlib_mux2x32_inst0_out;
endmodule

module Mux2xOutUInt16 (
    input [15:0] I0,
    input [15:0] I1,
    input S,
    output [15:0] O
);
reg [15:0] coreir_commonlib_mux2x16_inst0_out;
always @(*) begin
if (S == 0) begin
    coreir_commonlib_mux2x16_inst0_out = I0;
end else begin
    coreir_commonlib_mux2x16_inst0_out = I1;
end
end

assign O = coreir_commonlib_mux2x16_inst0_out;
endmodule

module PE_comb (
    input [19:0] inst,
    input [31:0] inputs,
    input clk_en,
    input [15:0] self_modules_0_O,
    output [0:0] O0,
    output [0:0] O1,
    output [15:0] O2,
    output [15:0] O3,
    output [15:0] O4
);
wire [15:0] Mux2xOutUInt16_inst0_I0;
wire [15:0] Mux2xOutUInt16_inst0_I1;
wire Mux2xOutUInt16_inst0_S;
wire [15:0] Mux2xOutUInt16_inst0_O;
wire [15:0] Mux2xOutUInt16_inst1_I0;
wire [15:0] Mux2xOutUInt16_inst1_I1;
wire Mux2xOutUInt16_inst1_S;
wire [15:0] Mux2xOutUInt16_inst2_I0;
wire [15:0] Mux2xOutUInt16_inst2_I1;
wire Mux2xOutUInt16_inst2_S;
wire [15:0] Mux2xOutUInt16_inst2_O;
wire [15:0] Mux2xOutUInt16_inst3_I0;
wire [15:0] Mux2xOutUInt16_inst3_I1;
wire Mux2xOutUInt16_inst3_S;
assign Mux2xOutUInt16_inst0_I0 = inst[16:1];
assign Mux2xOutUInt16_inst0_I1 = inst[16:1];
assign Mux2xOutUInt16_inst0_S = inst[17] == 1'h0;
Mux2xOutUInt16 Mux2xOutUInt16_inst0 (
    .I0(Mux2xOutUInt16_inst0_I0),
    .I1(Mux2xOutUInt16_inst0_I1),
    .S(Mux2xOutUInt16_inst0_S),
    .O(Mux2xOutUInt16_inst0_O)
);
assign Mux2xOutUInt16_inst1_I0 = Mux2xOutUInt16_inst0_O;
assign Mux2xOutUInt16_inst1_I1 = inputs[31:16];
assign Mux2xOutUInt16_inst1_S = inst[17] == 1'h1;
Mux2xOutUInt16 Mux2xOutUInt16_inst1 (
    .I0(Mux2xOutUInt16_inst1_I0),
    .I1(Mux2xOutUInt16_inst1_I1),
    .S(Mux2xOutUInt16_inst1_S),
    .O(O3)
);
assign Mux2xOutUInt16_inst2_I0 = inst[16:1];
assign Mux2xOutUInt16_inst2_I1 = inst[16:1];
assign Mux2xOutUInt16_inst2_S = inst[18] == 1'h0;
Mux2xOutUInt16 Mux2xOutUInt16_inst2 (
    .I0(Mux2xOutUInt16_inst2_I0),
    .I1(Mux2xOutUInt16_inst2_I1),
    .S(Mux2xOutUInt16_inst2_S),
    .O(Mux2xOutUInt16_inst2_O)
);
assign Mux2xOutUInt16_inst3_I0 = Mux2xOutUInt16_inst2_O;
assign Mux2xOutUInt16_inst3_I1 = self_modules_0_O;
assign Mux2xOutUInt16_inst3_S = inst[18] == 1'h1;
Mux2xOutUInt16 Mux2xOutUInt16_inst3 (
    .I0(Mux2xOutUInt16_inst3_I0),
    .I1(Mux2xOutUInt16_inst3_I1),
    .S(Mux2xOutUInt16_inst3_S),
    .O(O4)
);
assign O0[0] = inst[0];
assign O1[0] = inst[19];
assign O2 = inputs[15:0];
endmodule

module MUL_comb (
    input [0:0] instr,
    input [0:0] signed_,
    input [15:0] a,
    input [15:0] b,
    output [15:0] O
);
wire [15:0] Mux2xOutUInt16_inst0_I0;
wire [15:0] Mux2xOutUInt16_inst0_I1;
wire Mux2xOutUInt16_inst0_S;
wire [31:0] Mux2xOutUInt32_inst0_I0;
wire [31:0] Mux2xOutUInt32_inst0_I1;
wire Mux2xOutUInt32_inst0_S;
wire [31:0] Mux2xOutUInt32_inst0_O;
wire [31:0] Mux2xOutUInt32_inst1_I0;
wire [31:0] Mux2xOutUInt32_inst1_I1;
wire Mux2xOutUInt32_inst1_S;
wire [31:0] Mux2xOutUInt32_inst1_O;
wire [31:0] magma_Bits_32_mul_inst0_out;
assign Mux2xOutUInt16_inst0_I0 = magma_Bits_32_mul_inst0_out[31:16];
assign Mux2xOutUInt16_inst0_I1 = magma_Bits_32_mul_inst0_out[15:0];
assign Mux2xOutUInt16_inst0_S = instr == 1'h0;
Mux2xOutUInt16 Mux2xOutUInt16_inst0 (
    .I0(Mux2xOutUInt16_inst0_I0),
    .I1(Mux2xOutUInt16_inst0_I1),
    .S(Mux2xOutUInt16_inst0_S),
    .O(O)
);
assign Mux2xOutUInt32_inst0_I0 = {1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,a[15:0]};
assign Mux2xOutUInt32_inst0_I1 = {a[15],a[15],a[15],a[15],a[15],a[15],a[15],a[15],a[15],a[15],a[15],a[15],a[15],a[15],a[15],a[15],a[15:0]};
assign Mux2xOutUInt32_inst0_S = signed_ == 1'h1;
Mux2xOutUInt32 Mux2xOutUInt32_inst0 (
    .I0(Mux2xOutUInt32_inst0_I0),
    .I1(Mux2xOutUInt32_inst0_I1),
    .S(Mux2xOutUInt32_inst0_S),
    .O(Mux2xOutUInt32_inst0_O)
);
assign Mux2xOutUInt32_inst1_I0 = {1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,b[15:0]};
assign Mux2xOutUInt32_inst1_I1 = {b[15],b[15],b[15],b[15],b[15],b[15],b[15],b[15],b[15],b[15],b[15],b[15],b[15],b[15],b[15],b[15],b[15:0]};
assign Mux2xOutUInt32_inst1_S = signed_ == 1'h1;
Mux2xOutUInt32 Mux2xOutUInt32_inst1 (
    .I0(Mux2xOutUInt32_inst1_I0),
    .I1(Mux2xOutUInt32_inst1_I1),
    .S(Mux2xOutUInt32_inst1_S),
    .O(Mux2xOutUInt32_inst1_O)
);
assign magma_Bits_32_mul_inst0_out = 32'(Mux2xOutUInt32_inst0_O * Mux2xOutUInt32_inst1_O);
endmodule

module MUL (
    input [0:0] instr,
    input [0:0] signed_,
    input [15:0] a,
    input [15:0] b,
    input CLK,
    input ASYNCRESET,
    output [15:0] O
);
wire [0:0] MUL_comb_inst0_instr;
wire [0:0] MUL_comb_inst0_signed_;
wire [15:0] MUL_comb_inst0_a;
wire [15:0] MUL_comb_inst0_b;
assign MUL_comb_inst0_instr = instr;
assign MUL_comb_inst0_signed_ = signed_;
assign MUL_comb_inst0_a = a;
assign MUL_comb_inst0_b = b;
MUL_comb MUL_comb_inst0 (
    .instr(MUL_comb_inst0_instr),
    .signed_(MUL_comb_inst0_signed_),
    .a(MUL_comb_inst0_a),
    .b(MUL_comb_inst0_b),
    .O(O)
);
endmodule

module PE (
    input [19:0] inst,
    input [31:0] inputs,
    input clk_en,
    input CLK,
    input ASYNCRESET,
    output [15:0] O
);
wire [0:0] MUL_inst0_instr;
wire [0:0] MUL_inst0_signed_;
wire [15:0] MUL_inst0_a;
wire [15:0] MUL_inst0_b;
wire MUL_inst0_CLK;
wire MUL_inst0_ASYNCRESET;
wire [15:0] MUL_inst0_O;
wire [19:0] PE_comb_inst0_inst;
wire [31:0] PE_comb_inst0_inputs;
wire PE_comb_inst0_clk_en;
wire [15:0] PE_comb_inst0_self_modules_0_O;
wire [0:0] PE_comb_inst0_O0;
wire [0:0] PE_comb_inst0_O1;
wire [15:0] PE_comb_inst0_O2;
wire [15:0] PE_comb_inst0_O3;
assign MUL_inst0_instr = PE_comb_inst0_O0;
assign MUL_inst0_signed_ = PE_comb_inst0_O1;
assign MUL_inst0_a = PE_comb_inst0_O2;
assign MUL_inst0_b = PE_comb_inst0_O3;
assign MUL_inst0_CLK = CLK;
assign MUL_inst0_ASYNCRESET = ASYNCRESET;
MUL MUL_inst0 (
    .instr(MUL_inst0_instr),
    .signed_(MUL_inst0_signed_),
    .a(MUL_inst0_a),
    .b(MUL_inst0_b),
    .CLK(MUL_inst0_CLK),
    .ASYNCRESET(MUL_inst0_ASYNCRESET),
    .O(MUL_inst0_O)
);
assign PE_comb_inst0_inst = inst;
assign PE_comb_inst0_inputs = inputs;
assign PE_comb_inst0_clk_en = clk_en;
assign PE_comb_inst0_self_modules_0_O = MUL_inst0_O;
PE_comb PE_comb_inst0 (
    .inst(PE_comb_inst0_inst),
    .inputs(PE_comb_inst0_inputs),
    .clk_en(PE_comb_inst0_clk_en),
    .self_modules_0_O(PE_comb_inst0_self_modules_0_O),
    .O0(PE_comb_inst0_O0),
    .O1(PE_comb_inst0_O1),
    .O2(PE_comb_inst0_O2),
    .O3(PE_comb_inst0_O3),
    .O4(O)
);
endmodule

module PE_wrapped (
    input [19:0] inst,
    input [15:0] inputs0,
    input [15:0] inputs1,
    input clk_en,
    input CLK,
    input ASYNCRESET,
    output [15:0] O
);
wire [19:0] PE_inst0_inst;
wire [31:0] PE_inst0_inputs;
wire PE_inst0_clk_en;
wire PE_inst0_CLK;
wire PE_inst0_ASYNCRESET;
wire [15:0] PE_inst0_O;
wire [19:0] PE_wrapped_comb_inst0_inst;
wire [15:0] PE_wrapped_comb_inst0_inputs0;
wire [15:0] PE_wrapped_comb_inst0_inputs1;
wire PE_wrapped_comb_inst0_clk_en;
wire [15:0] PE_wrapped_comb_inst0_self_PE_O;
wire [19:0] PE_wrapped_comb_inst0_O0;
wire [31:0] PE_wrapped_comb_inst0_O1;
wire PE_wrapped_comb_inst0_O2;
assign PE_inst0_inst = PE_wrapped_comb_inst0_O0;
assign PE_inst0_inputs = PE_wrapped_comb_inst0_O1;
assign PE_inst0_clk_en = PE_wrapped_comb_inst0_O2;
assign PE_inst0_CLK = CLK;
assign PE_inst0_ASYNCRESET = ASYNCRESET;
PE PE_inst0 (
    .inst(PE_inst0_inst),
    .inputs(PE_inst0_inputs),
    .clk_en(PE_inst0_clk_en),
    .CLK(PE_inst0_CLK),
    .ASYNCRESET(PE_inst0_ASYNCRESET),
    .O(PE_inst0_O)
);
assign PE_wrapped_comb_inst0_inst = inst;
assign PE_wrapped_comb_inst0_inputs0 = inputs0;
assign PE_wrapped_comb_inst0_inputs1 = inputs1;
assign PE_wrapped_comb_inst0_clk_en = clk_en;
assign PE_wrapped_comb_inst0_self_PE_O = PE_inst0_O;
PE_wrapped_comb PE_wrapped_comb_inst0 (
    .inst(PE_wrapped_comb_inst0_inst),
    .inputs0(PE_wrapped_comb_inst0_inputs0),
    .inputs1(PE_wrapped_comb_inst0_inputs1),
    .clk_en(PE_wrapped_comb_inst0_clk_en),
    .self_PE_O(PE_wrapped_comb_inst0_self_PE_O),
    .O0(PE_wrapped_comb_inst0_O0),
    .O1(PE_wrapped_comb_inst0_O1),
    .O2(PE_wrapped_comb_inst0_O2),
    .O3(O)
);
endmodule

module WrappedPE_wrapped (
    input [19:0] inst,
    input [15:0] inputs0,
    input [15:0] inputs1,
    input clk_en,
    input CLK,
    input ASYNCRESET,
    output [15:0] O
);
wire [19:0] PE_wrapped_inst0_inst;
wire [15:0] PE_wrapped_inst0_inputs0;
wire [15:0] PE_wrapped_inst0_inputs1;
wire PE_wrapped_inst0_clk_en;
wire PE_wrapped_inst0_CLK;
wire PE_wrapped_inst0_ASYNCRESET;
assign PE_wrapped_inst0_inst = inst;
assign PE_wrapped_inst0_inputs0 = inputs0;
assign PE_wrapped_inst0_inputs1 = inputs1;
assign PE_wrapped_inst0_clk_en = clk_en;
assign PE_wrapped_inst0_CLK = CLK;
assign PE_wrapped_inst0_ASYNCRESET = ASYNCRESET;
PE_wrapped PE_wrapped_inst0 (
    .inst(PE_wrapped_inst0_inst),
    .inputs0(PE_wrapped_inst0_inputs0),
    .inputs1(PE_wrapped_inst0_inputs1),
    .clk_en(PE_wrapped_inst0_clk_en),
    .CLK(PE_wrapped_inst0_CLK),
    .ASYNCRESET(PE_wrapped_inst0_ASYNCRESET),
    .O(O)
);
endmodule

module hcompute_mult_stencil_mapped (
    input clk,
    input arst,
    input [15:0] in0_hw_input_global_wrapper_stencil [0:0],
    output [15:0] out_mult_stencil
);
wire [19:0] i139937675093520_i139937675601168_inst;
wire [15:0] i139937675093520_i139937675601168_inputs0;
wire [15:0] i139937675093520_i139937675601168_inputs1;
wire i139937675093520_i139937675601168_clk_en;
wire i139937675093520_i139937675601168_CLK;
wire i139937675093520_i139937675601168_ASYNCRESET;
assign i139937675093520_i139937675601168_inst = 20'h40004;
assign i139937675093520_i139937675601168_inputs0 = in0_hw_input_global_wrapper_stencil[0];
assign i139937675093520_i139937675601168_inputs1 = 16'h0000;
assign i139937675093520_i139937675601168_clk_en = 1'b0;
assign i139937675093520_i139937675601168_CLK = clk;
assign i139937675093520_i139937675601168_ASYNCRESET = arst;
WrappedPE_wrapped i139937675093520_i139937675601168 (
    .inst(i139937675093520_i139937675601168_inst),
    .inputs0(i139937675093520_i139937675601168_inputs0),
    .inputs1(i139937675093520_i139937675601168_inputs1),
    .clk_en(i139937675093520_i139937675601168_clk_en),
    .CLK(i139937675093520_i139937675601168_CLK),
    .ASYNCRESET(i139937675093520_i139937675601168_ASYNCRESET),
    .O(out_mult_stencil)
);
endmodule

module cu_op_hcompute_mult_stencil (
    input arst,
    input clk,
    input [15:0] hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read [0:0],
    output [15:0] mult_stencil_op_hcompute_mult_stencil_write [0:0]
);
wire inner_compute_clk;
wire inner_compute_arst;
wire [15:0] inner_compute_in0_hw_input_global_wrapper_stencil [0:0];
wire [15:0] inner_compute_out_mult_stencil;
assign inner_compute_clk = clk;
assign inner_compute_arst = arst;
assign inner_compute_in0_hw_input_global_wrapper_stencil[0] = hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read[0];
hcompute_mult_stencil_mapped inner_compute (
    .clk(inner_compute_clk),
    .arst(inner_compute_arst),
    .in0_hw_input_global_wrapper_stencil(inner_compute_in0_hw_input_global_wrapper_stencil),
    .out_mult_stencil(inner_compute_out_mult_stencil)
);
assign mult_stencil_op_hcompute_mult_stencil_write[0] = inner_compute_out_mult_stencil;
endmodule

module pointwise (
    input arst,
    input clk,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en
);
wire [15:0] _U86_in;
wire _U86_clk;
wire [15:0] _U86_out;
wire hw_input_global_wrapper_stencil_clk;
wire hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ren;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read [0:0];
wire mult_stencil_clk;
wire mult_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] mult_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire mult_stencil_op_hcompute_mult_stencil_write_wen;
wire [15:0] mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars [2:0];
wire [15:0] mult_stencil_op_hcompute_mult_stencil_write [0:0];
wire op_hcompute_hw_input_global_wrapper_stencil_clk;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_in;
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_read_start;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_mult_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_clk;
wire op_hcompute_hw_output_stencil_exe_start_in;
wire op_hcompute_hw_output_stencil_exe_start_out;
wire op_hcompute_hw_output_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_port_controller_clk;
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start;
wire op_hcompute_hw_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_mult_stencil_arst;
wire op_hcompute_mult_stencil_clk;
wire [15:0] op_hcompute_mult_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read [0:0];
wire [15:0] op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write [0:0];
wire op_hcompute_mult_stencil_exe_start_clk;
wire op_hcompute_mult_stencil_exe_start_in;
wire op_hcompute_mult_stencil_exe_start_out;
wire op_hcompute_mult_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_mult_stencil_port_controller_clk;
wire op_hcompute_mult_stencil_port_controller_valid;
wire [15:0] op_hcompute_mult_stencil_port_controller_d [2:0];
wire op_hcompute_mult_stencil_read_start;
wire op_hcompute_mult_stencil_write_start;
wire op_hcompute_mult_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_out [2:0];
assign _U86_in = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
assign _U86_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U86 (
    .in(_U86_in),
    .clk(_U86_clk),
    .out(_U86_out)
);
assign hw_input_global_wrapper_stencil_clk = clk;
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen = op_hcompute_hw_input_global_wrapper_stencil_write_start;
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[2];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[1];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0];
assign hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ren = op_hcompute_mult_stencil_read_start;
assign hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars[2] = op_hcompute_mult_stencil_port_controller_d[2];
assign hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars[1] = op_hcompute_mult_stencil_port_controller_d[1];
assign hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars[0] = op_hcompute_mult_stencil_port_controller_d[0];
hw_input_global_wrapper_stencil_ub hw_input_global_wrapper_stencil (
    .clk(hw_input_global_wrapper_stencil_clk),
    .op_hcompute_hw_input_global_wrapper_stencil_write_wen(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen),
    .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_global_wrapper_stencil_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write),
    .op_hcompute_mult_stencil_read_ren(hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ren),
    .op_hcompute_mult_stencil_read_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars),
    .op_hcompute_mult_stencil_read(hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read)
);
assign mult_stencil_clk = clk;
assign mult_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
assign mult_stencil_op_hcompute_mult_stencil_write_wen = op_hcompute_mult_stencil_write_start;
assign mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars[2] = op_hcompute_mult_stencil_write_start_control_vars_out[2];
assign mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars[1] = op_hcompute_mult_stencil_write_start_control_vars_out[1];
assign mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars[0] = op_hcompute_mult_stencil_write_start_control_vars_out[0];
assign mult_stencil_op_hcompute_mult_stencil_write[0] = op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write[0];
mult_stencil_ub mult_stencil (
    .clk(mult_stencil_clk),
    .op_hcompute_hw_output_stencil_read_ren(mult_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(mult_stencil_op_hcompute_hw_output_stencil_read),
    .op_hcompute_mult_stencil_write_wen(mult_stencil_op_hcompute_mult_stencil_write_wen),
    .op_hcompute_mult_stencil_write_ctrl_vars(mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars),
    .op_hcompute_mult_stencil_write(mult_stencil_op_hcompute_mult_stencil_write)
);
assign op_hcompute_hw_input_global_wrapper_stencil_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] = _U86_out;
cu_op_hcompute_hw_input_global_wrapper_stencil op_hcompute_hw_input_global_wrapper_stencil (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_clk),
    .hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read(op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read),
    .hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write(op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write)
);
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_in = op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_input_global_wrapper_stencil_exe_start (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_exe_start_clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U21 op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk = clk;
affine_controller__U0 op_hcompute_hw_input_global_wrapper_stencil_port_controller (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_read_start = op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start = op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U17 op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_mult_stencil_op_hcompute_hw_output_stencil_read[0] = mult_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .mult_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_mult_stencil_op_hcompute_hw_output_stencil_read),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write)
);
assign op_hcompute_hw_output_stencil_exe_start_clk = clk;
assign op_hcompute_hw_output_stencil_exe_start_in = op_hcompute_hw_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_output_stencil_exe_start (
    .clk(op_hcompute_hw_output_stencil_exe_start_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_in),
    .out(op_hcompute_hw_output_stencil_exe_start_out)
);
assign op_hcompute_hw_output_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U71 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U50 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start = op_hcompute_hw_output_stencil_exe_start_out;
assign op_hcompute_hw_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U67 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign op_hcompute_mult_stencil_arst = arst;
assign op_hcompute_mult_stencil_clk = clk;
assign op_hcompute_mult_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read[0] = hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read[0];
cu_op_hcompute_mult_stencil op_hcompute_mult_stencil (
    .arst(op_hcompute_mult_stencil_arst),
    .clk(op_hcompute_mult_stencil_clk),
    .hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read(op_hcompute_mult_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read),
    .mult_stencil_op_hcompute_mult_stencil_write(op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write)
);
assign op_hcompute_mult_stencil_exe_start_clk = clk;
assign op_hcompute_mult_stencil_exe_start_in = op_hcompute_mult_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_mult_stencil_exe_start (
    .clk(op_hcompute_mult_stencil_exe_start_clk),
    .in(op_hcompute_mult_stencil_exe_start_in),
    .out(op_hcompute_mult_stencil_exe_start_out)
);
assign op_hcompute_mult_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_mult_stencil_exe_start_control_vars_in[2] = op_hcompute_mult_stencil_port_controller_d[2];
assign op_hcompute_mult_stencil_exe_start_control_vars_in[1] = op_hcompute_mult_stencil_port_controller_d[1];
assign op_hcompute_mult_stencil_exe_start_control_vars_in[0] = op_hcompute_mult_stencil_port_controller_d[0];
array_delay_U46 op_hcompute_mult_stencil_exe_start_control_vars (
    .clk(op_hcompute_mult_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_mult_stencil_exe_start_control_vars_in),
    .out(op_hcompute_mult_stencil_exe_start_control_vars_out)
);
assign op_hcompute_mult_stencil_port_controller_clk = clk;
affine_controller__U25 op_hcompute_mult_stencil_port_controller (
    .clk(op_hcompute_mult_stencil_port_controller_clk),
    .valid(op_hcompute_mult_stencil_port_controller_valid),
    .d(op_hcompute_mult_stencil_port_controller_d)
);
assign op_hcompute_mult_stencil_read_start = op_hcompute_mult_stencil_port_controller_valid;
assign op_hcompute_mult_stencil_write_start = op_hcompute_mult_stencil_exe_start_out;
assign op_hcompute_mult_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_mult_stencil_write_start_control_vars_in[2] = op_hcompute_mult_stencil_port_controller_d[2];
assign op_hcompute_mult_stencil_write_start_control_vars_in[1] = op_hcompute_mult_stencil_port_controller_d[1];
assign op_hcompute_mult_stencil_write_start_control_vars_in[0] = op_hcompute_mult_stencil_port_controller_d[0];
array_delay_U42 op_hcompute_mult_stencil_write_start_control_vars (
    .clk(op_hcompute_mult_stencil_write_start_control_vars_clk),
    .in(op_hcompute_mult_stencil_write_start_control_vars_in),
    .out(op_hcompute_mult_stencil_write_start_control_vars_out)
);
assign hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid = op_hcompute_hw_input_global_wrapper_stencil_read_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
endmodule

