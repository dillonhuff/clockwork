// Module `memtile_long_delay__U39` defined externally
// Module `memtile_long_delay__U31` defined externally
module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_blur_stencil [0:0]
);
assign out_hw_output_stencil = in0_blur_stencil[0];
endmodule

module hcompute_hw_input_stencil (
    output [15:0] out_hw_input_stencil,
    input [15:0] in0_input_copy_stencil [0:0]
);
assign out_hw_input_stencil = in0_input_copy_stencil[0];
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] blur_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_blur_stencil [0:0];
assign inner_compute_in0_blur_stencil[0] = blur_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_blur_stencil(inner_compute_in0_blur_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
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

module delay__U6 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U10_in;
wire _U10_clk;
wire [15:0] _U7_in;
wire _U7_clk;
wire [15:0] _U7_out;
wire [15:0] _U8_in;
wire _U8_clk;
wire [15:0] _U8_out;
wire [15:0] _U9_in;
wire _U9_clk;
wire [15:0] _U9_out;
assign _U10_in = _U9_out;
assign _U10_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U10 (
    .in(_U10_in),
    .clk(_U10_clk),
    .out(rdata)
);
assign _U7_in = wdata;
assign _U7_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U7 (
    .in(_U7_in),
    .clk(_U7_clk),
    .out(_U7_out)
);
assign _U8_in = _U7_out;
assign _U8_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U8 (
    .in(_U8_in),
    .clk(_U8_clk),
    .out(_U8_out)
);
assign _U9_in = _U8_out;
assign _U9_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U9 (
    .in(_U9_in),
    .clk(_U9_clk),
    .out(_U9_out)
);
endmodule

module delay__U44 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U45_in;
wire _U45_clk;
assign _U45_in = wdata;
assign _U45_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U45 (
    .in(_U45_in),
    .clk(_U45_clk),
    .out(rdata)
);
endmodule

module delay__U41 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U42_in;
wire _U42_clk;
assign _U42_in = wdata;
assign _U42_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U42 (
    .in(_U42_in),
    .clk(_U42_clk),
    .out(rdata)
);
endmodule

module delay__U36 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U37_in;
wire _U37_clk;
assign _U37_in = wdata;
assign _U37_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U37 (
    .in(_U37_in),
    .clk(_U37_clk),
    .out(rdata)
);
endmodule

module delay__U33 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U34_in;
wire _U34_clk;
assign _U34_in = wdata;
assign _U34_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U34 (
    .in(_U34_in),
    .clk(_U34_clk),
    .out(rdata)
);
endmodule

module delay__U28 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U29_in;
wire _U29_clk;
assign _U29_in = wdata;
assign _U29_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U29 (
    .in(_U29_in),
    .clk(_U29_clk),
    .out(rdata)
);
endmodule

module delay__U25 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U26_in;
wire _U26_clk;
assign _U26_in = wdata;
assign _U26_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U26 (
    .in(_U26_in),
    .clk(_U26_clk),
    .out(rdata)
);
endmodule

module delay__U17 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
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
wire [15:0] _U21_in;
wire _U21_clk;
wire [15:0] _U21_out;
wire [15:0] _U22_in;
wire _U22_clk;
wire [15:0] _U22_out;
wire [15:0] _U23_in;
wire _U23_clk;
assign _U18_in = wdata;
assign _U18_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U18 (
    .in(_U18_in),
    .clk(_U18_clk),
    .out(_U18_out)
);
assign _U19_in = _U18_out;
assign _U19_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U19 (
    .in(_U19_in),
    .clk(_U19_clk),
    .out(_U19_out)
);
assign _U20_in = _U19_out;
assign _U20_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U20 (
    .in(_U20_in),
    .clk(_U20_clk),
    .out(_U20_out)
);
assign _U21_in = _U20_out;
assign _U21_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U21 (
    .in(_U21_in),
    .clk(_U21_clk),
    .out(_U21_out)
);
assign _U22_in = _U21_out;
assign _U22_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U22 (
    .in(_U22_in),
    .clk(_U22_clk),
    .out(_U22_out)
);
assign _U23_in = _U22_out;
assign _U23_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U23 (
    .in(_U23_in),
    .clk(_U23_clk),
    .out(rdata)
);
endmodule

module hw_input_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    output [15:0] op_hcompute_blur_unnormalized_stencil_1_read [8:0],
    input [15:0] op_hcompute_hw_input_stencil_write [0:0]
);
wire delay_sr_U24_clk;
wire [15:0] delay_sr_U24_wdata;
wire [15:0] delay_sr_U24_rdata;
wire delay_sr_U24_rst_n;
wire delay_sr_U24_flush;
wire delay_sr_U27_clk;
wire [15:0] delay_sr_U27_wdata;
wire [15:0] delay_sr_U27_rdata;
wire delay_sr_U27_rst_n;
wire delay_sr_U27_flush;
wire delay_sr_U30_clk;
wire [15:0] delay_sr_U30_wdata;
wire [15:0] delay_sr_U30_rdata;
wire delay_sr_U30_rst_n;
wire delay_sr_U30_flush;
wire delay_sr_U32_clk;
wire [15:0] delay_sr_U32_wdata;
wire [15:0] delay_sr_U32_rdata;
wire delay_sr_U32_rst_n;
wire delay_sr_U32_flush;
wire delay_sr_U35_clk;
wire [15:0] delay_sr_U35_wdata;
wire [15:0] delay_sr_U35_rdata;
wire delay_sr_U35_rst_n;
wire delay_sr_U35_flush;
wire delay_sr_U38_clk;
wire [15:0] delay_sr_U38_wdata;
wire [15:0] delay_sr_U38_rdata;
wire delay_sr_U38_rst_n;
wire delay_sr_U38_flush;
wire delay_sr_U40_clk;
wire [15:0] delay_sr_U40_wdata;
wire [15:0] delay_sr_U40_rdata;
wire delay_sr_U40_rst_n;
wire delay_sr_U40_flush;
wire delay_sr_U43_clk;
wire [15:0] delay_sr_U43_wdata;
wire [15:0] delay_sr_U43_rdata;
wire delay_sr_U43_rst_n;
wire delay_sr_U43_flush;
wire delay_sr_U46_clk;
wire [15:0] delay_sr_U46_wdata;
wire [15:0] delay_sr_U46_rdata;
wire delay_sr_U46_rst_n;
wire delay_sr_U46_flush;
assign delay_sr_U24_clk = clk;
assign delay_sr_U24_wdata = op_hcompute_hw_input_stencil_write[0];
assign delay_sr_U24_rst_n = rst_n;
assign delay_sr_U24_flush = flush;
delay__U17 delay_sr_U24 (
    .clk(delay_sr_U24_clk),
    .wdata(delay_sr_U24_wdata),
    .rdata(delay_sr_U24_rdata),
    .rst_n(delay_sr_U24_rst_n),
    .flush(delay_sr_U24_flush)
);
assign delay_sr_U27_clk = clk;
assign delay_sr_U27_wdata = delay_sr_U24_rdata;
assign delay_sr_U27_rst_n = rst_n;
assign delay_sr_U27_flush = flush;
delay__U25 delay_sr_U27 (
    .clk(delay_sr_U27_clk),
    .wdata(delay_sr_U27_wdata),
    .rdata(delay_sr_U27_rdata),
    .rst_n(delay_sr_U27_rst_n),
    .flush(delay_sr_U27_flush)
);
assign delay_sr_U30_clk = clk;
assign delay_sr_U30_wdata = delay_sr_U27_rdata;
assign delay_sr_U30_rst_n = rst_n;
assign delay_sr_U30_flush = flush;
delay__U28 delay_sr_U30 (
    .clk(delay_sr_U30_clk),
    .wdata(delay_sr_U30_wdata),
    .rdata(delay_sr_U30_rdata),
    .rst_n(delay_sr_U30_rst_n),
    .flush(delay_sr_U30_flush)
);
assign delay_sr_U32_clk = clk;
assign delay_sr_U32_wdata = delay_sr_U30_rdata;
assign delay_sr_U32_rst_n = rst_n;
assign delay_sr_U32_flush = flush;
memtile_long_delay__U31 delay_sr_U32 (
    .clk(delay_sr_U32_clk),
    .wdata(delay_sr_U32_wdata),
    .rdata(delay_sr_U32_rdata),
    .rst_n(delay_sr_U32_rst_n),
    .flush(delay_sr_U32_flush)
);
assign delay_sr_U35_clk = clk;
assign delay_sr_U35_wdata = delay_sr_U32_rdata;
assign delay_sr_U35_rst_n = rst_n;
assign delay_sr_U35_flush = flush;
delay__U33 delay_sr_U35 (
    .clk(delay_sr_U35_clk),
    .wdata(delay_sr_U35_wdata),
    .rdata(delay_sr_U35_rdata),
    .rst_n(delay_sr_U35_rst_n),
    .flush(delay_sr_U35_flush)
);
assign delay_sr_U38_clk = clk;
assign delay_sr_U38_wdata = delay_sr_U35_rdata;
assign delay_sr_U38_rst_n = rst_n;
assign delay_sr_U38_flush = flush;
delay__U36 delay_sr_U38 (
    .clk(delay_sr_U38_clk),
    .wdata(delay_sr_U38_wdata),
    .rdata(delay_sr_U38_rdata),
    .rst_n(delay_sr_U38_rst_n),
    .flush(delay_sr_U38_flush)
);
assign delay_sr_U40_clk = clk;
assign delay_sr_U40_wdata = delay_sr_U38_rdata;
assign delay_sr_U40_rst_n = rst_n;
assign delay_sr_U40_flush = flush;
memtile_long_delay__U39 delay_sr_U40 (
    .clk(delay_sr_U40_clk),
    .wdata(delay_sr_U40_wdata),
    .rdata(delay_sr_U40_rdata),
    .rst_n(delay_sr_U40_rst_n),
    .flush(delay_sr_U40_flush)
);
assign delay_sr_U43_clk = clk;
assign delay_sr_U43_wdata = delay_sr_U40_rdata;
assign delay_sr_U43_rst_n = rst_n;
assign delay_sr_U43_flush = flush;
delay__U41 delay_sr_U43 (
    .clk(delay_sr_U43_clk),
    .wdata(delay_sr_U43_wdata),
    .rdata(delay_sr_U43_rdata),
    .rst_n(delay_sr_U43_rst_n),
    .flush(delay_sr_U43_flush)
);
assign delay_sr_U46_clk = clk;
assign delay_sr_U46_wdata = delay_sr_U43_rdata;
assign delay_sr_U46_rst_n = rst_n;
assign delay_sr_U46_flush = flush;
delay__U44 delay_sr_U46 (
    .clk(delay_sr_U46_clk),
    .wdata(delay_sr_U46_wdata),
    .rdata(delay_sr_U46_rdata),
    .rst_n(delay_sr_U46_rst_n),
    .flush(delay_sr_U46_flush)
);
assign op_hcompute_blur_unnormalized_stencil_1_read[8] = delay_sr_U27_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[7] = delay_sr_U24_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[6] = delay_sr_U30_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[5] = delay_sr_U32_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[4] = delay_sr_U35_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[3] = delay_sr_U38_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[2] = delay_sr_U40_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[1] = delay_sr_U43_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[0] = delay_sr_U46_rdata;
endmodule

module delay__U12 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U13_in;
wire _U13_clk;
wire [15:0] _U13_out;
wire [15:0] _U14_in;
wire _U14_clk;
wire [15:0] _U14_out;
wire [15:0] _U15_in;
wire _U15_clk;
assign _U13_in = wdata;
assign _U13_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U13 (
    .in(_U13_in),
    .clk(_U13_clk),
    .out(_U13_out)
);
assign _U14_in = _U13_out;
assign _U14_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U14 (
    .in(_U14_in),
    .clk(_U14_clk),
    .out(_U14_out)
);
assign _U15_in = _U14_out;
assign _U15_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U15 (
    .in(_U15_in),
    .clk(_U15_clk),
    .out(rdata)
);
endmodule

module delay__U0 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1_in;
wire _U1_clk;
wire [15:0] _U1_out;
wire [15:0] _U2_in;
wire _U2_clk;
wire [15:0] _U2_out;
wire [15:0] _U3_in;
wire _U3_clk;
wire [15:0] _U3_out;
wire [15:0] _U4_in;
wire _U4_clk;
assign _U1_in = wdata;
assign _U1_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1 (
    .in(_U1_in),
    .clk(_U1_clk),
    .out(_U1_out)
);
assign _U2_in = _U1_out;
assign _U2_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2 (
    .in(_U2_in),
    .clk(_U2_clk),
    .out(_U2_out)
);
assign _U3_in = _U2_out;
assign _U3_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U3 (
    .in(_U3_in),
    .clk(_U3_clk),
    .out(_U3_out)
);
assign _U4_in = _U3_out;
assign _U4_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U4 (
    .in(_U4_in),
    .clk(_U4_clk),
    .out(rdata)
);
endmodule

module hcompute_blur_unnormalized_stencil (
    output [15:0] out_blur_unnormalized_stencil
);
assign out_blur_unnormalized_stencil = 16'h0000;
endmodule

module cu_op_hcompute_blur_unnormalized_stencil (
    input clk,
    output [15:0] blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write [0:0]
);
wire [15:0] inner_compute_out_blur_unnormalized_stencil;
hcompute_blur_unnormalized_stencil inner_compute (
    .out_blur_unnormalized_stencil(inner_compute_out_blur_unnormalized_stencil)
);
assign blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write[0] = inner_compute_out_blur_unnormalized_stencil;
endmodule

module hcompute_blur_stencil (
    output [15:0] out_blur_stencil,
    input [15:0] in0_blur_unnormalized_stencil [0:0]
);
assign out_blur_stencil = in0_blur_unnormalized_stencil[0] >> 16'h0008;
endmodule

module cu_op_hcompute_blur_stencil (
    input clk,
    input [15:0] blur_unnormalized_stencil_op_hcompute_blur_stencil_read [0:0],
    output [15:0] blur_stencil_op_hcompute_blur_stencil_write [0:0]
);
wire [15:0] inner_compute_out_blur_stencil;
wire [15:0] inner_compute_in0_blur_unnormalized_stencil [0:0];
assign inner_compute_in0_blur_unnormalized_stencil[0] = blur_unnormalized_stencil_op_hcompute_blur_stencil_read[0];
hcompute_blur_stencil inner_compute (
    .out_blur_stencil(inner_compute_out_blur_stencil),
    .in0_blur_unnormalized_stencil(inner_compute_in0_blur_unnormalized_stencil)
);
assign blur_stencil_op_hcompute_blur_stencil_write[0] = inner_compute_out_blur_stencil;
endmodule

module hcompute_blur_unnormalized_stencil_1 (
    output [15:0] out_blur_unnormalized_stencil,
    input [15:0] in0_blur_unnormalized_stencil [0:0],
    input [15:0] in1_hw_input_stencil [8:0]
);
assign out_blur_unnormalized_stencil = 16'((16'(in1_hw_input_stencil[0] * 16'h0018)) + (16'(in0_blur_unnormalized_stencil[0] + (16'((16'(in1_hw_input_stencil[1] * 16'h001e)) + (16'((16'(in1_hw_input_stencil[2] * 16'h0018)) + (16'((16'(in1_hw_input_stencil[3] * 16'h001e)) + (16'((16'(in1_hw_input_stencil[4] * 16'h0025)) + (16'((16'(in1_hw_input_stencil[5] * 16'h001e)) + (16'((16'(in1_hw_input_stencil[6] * 16'h0018)) + (16'((16'(in1_hw_input_stencil[7] * 16'h0018)) + (16'(in1_hw_input_stencil[8] * 16'h001e)))))))))))))))))));
endmodule

module cu_op_hcompute_blur_unnormalized_stencil_1 (
    input clk,
    input [15:0] blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read [0:0],
    input [15:0] hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read [8:0],
    output [15:0] blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_blur_unnormalized_stencil;
wire [15:0] inner_compute_in0_blur_unnormalized_stencil [0:0];
wire [15:0] inner_compute_in1_hw_input_stencil [8:0];
assign inner_compute_in0_blur_unnormalized_stencil[0] = blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read[0];
assign inner_compute_in1_hw_input_stencil[8] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[8];
assign inner_compute_in1_hw_input_stencil[7] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[7];
assign inner_compute_in1_hw_input_stencil[6] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[6];
assign inner_compute_in1_hw_input_stencil[5] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[5];
assign inner_compute_in1_hw_input_stencil[4] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[4];
assign inner_compute_in1_hw_input_stencil[3] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[3];
assign inner_compute_in1_hw_input_stencil[2] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[2];
assign inner_compute_in1_hw_input_stencil[1] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[1];
assign inner_compute_in1_hw_input_stencil[0] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[0];
hcompute_blur_unnormalized_stencil_1 inner_compute (
    .out_blur_unnormalized_stencil(inner_compute_out_blur_unnormalized_stencil),
    .in0_blur_unnormalized_stencil(inner_compute_in0_blur_unnormalized_stencil),
    .in1_hw_input_stencil(inner_compute_in1_hw_input_stencil)
);
assign blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write[0] = inner_compute_out_blur_unnormalized_stencil;
endmodule

module blur_unnormalized_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    output [15:0] op_hcompute_blur_stencil_read [0:0],
    input [15:0] op_hcompute_blur_unnormalized_stencil_1_write [0:0]
);
wire delay_sr_U11_clk;
wire [15:0] delay_sr_U11_wdata;
wire [15:0] delay_sr_U11_rdata;
wire delay_sr_U11_rst_n;
wire delay_sr_U11_flush;
assign delay_sr_U11_clk = clk;
assign delay_sr_U11_wdata = op_hcompute_blur_unnormalized_stencil_1_write[0];
assign delay_sr_U11_rst_n = rst_n;
assign delay_sr_U11_flush = flush;
delay__U6 delay_sr_U11 (
    .clk(delay_sr_U11_clk),
    .wdata(delay_sr_U11_wdata),
    .rdata(delay_sr_U11_rdata),
    .rst_n(delay_sr_U11_rst_n),
    .flush(delay_sr_U11_flush)
);
assign op_hcompute_blur_stencil_read[0] = delay_sr_U11_rdata;
endmodule

module blur_unnormalized_stencil_clkwrk_dsa0_ub (
    input clk,
    input rst_n,
    input flush,
    output [15:0] op_hcompute_blur_unnormalized_stencil_1_read [0:0],
    input [15:0] op_hcompute_blur_unnormalized_stencil_write [0:0]
);
wire delay_sr_U16_clk;
wire [15:0] delay_sr_U16_wdata;
wire [15:0] delay_sr_U16_rdata;
wire delay_sr_U16_rst_n;
wire delay_sr_U16_flush;
assign delay_sr_U16_clk = clk;
assign delay_sr_U16_wdata = op_hcompute_blur_unnormalized_stencil_write[0];
assign delay_sr_U16_rst_n = rst_n;
assign delay_sr_U16_flush = flush;
delay__U12 delay_sr_U16 (
    .clk(delay_sr_U16_clk),
    .wdata(delay_sr_U16_wdata),
    .rdata(delay_sr_U16_rdata),
    .rst_n(delay_sr_U16_rst_n),
    .flush(delay_sr_U16_flush)
);
assign op_hcompute_blur_unnormalized_stencil_1_read[0] = delay_sr_U16_rdata;
endmodule

module blur_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input [15:0] op_hcompute_blur_stencil_write [0:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
wire delay_sr_U5_clk;
wire [15:0] delay_sr_U5_wdata;
wire [15:0] delay_sr_U5_rdata;
wire delay_sr_U5_rst_n;
wire delay_sr_U5_flush;
assign delay_sr_U5_clk = clk;
assign delay_sr_U5_wdata = op_hcompute_blur_stencil_write[0];
assign delay_sr_U5_rst_n = rst_n;
assign delay_sr_U5_flush = flush;
delay__U0 delay_sr_U5 (
    .clk(delay_sr_U5_clk),
    .wdata(delay_sr_U5_wdata),
    .rdata(delay_sr_U5_rdata),
    .rst_n(delay_sr_U5_rst_n),
    .flush(delay_sr_U5_flush)
);
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U5_rdata;
endmodule

module gaussian (
    input clk,
    input rst_n,
    input flush,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0]
);
wire [15:0] _U47_in;
wire _U47_clk;
wire [15:0] _U47_out;
wire blur_stencil_clk;
wire blur_stencil_rst_n;
wire blur_stencil_flush;
wire [15:0] blur_stencil_op_hcompute_blur_stencil_write [0:0];
wire [15:0] blur_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire blur_unnormalized_stencil_clk;
wire blur_unnormalized_stencil_rst_n;
wire blur_unnormalized_stencil_flush;
wire [15:0] blur_unnormalized_stencil_op_hcompute_blur_stencil_read [0:0];
wire [15:0] blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write [0:0];
wire blur_unnormalized_stencil_clkwrk_dsa0_clk;
wire blur_unnormalized_stencil_clkwrk_dsa0_rst_n;
wire blur_unnormalized_stencil_clkwrk_dsa0_flush;
wire [15:0] blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read [0:0];
wire [15:0] blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write [0:0];
wire hw_input_stencil_clk;
wire hw_input_stencil_rst_n;
wire hw_input_stencil_flush;
wire [15:0] hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read [8:0];
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire op_hcompute_blur_stencil_clk;
wire [15:0] op_hcompute_blur_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_read [0:0];
wire [15:0] op_hcompute_blur_stencil_blur_stencil_op_hcompute_blur_stencil_write [0:0];
wire op_hcompute_blur_unnormalized_stencil_clk;
wire [15:0] op_hcompute_blur_unnormalized_stencil_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write [0:0];
wire op_hcompute_blur_unnormalized_stencil_1_clk;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read [0:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read [8:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write [0:0];
wire op_hcompute_hw_input_stencil_clk;
wire [15:0] op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0];
wire [15:0] op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_blur_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
assign _U47_in = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
assign _U47_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U47 (
    .in(_U47_in),
    .clk(_U47_clk),
    .out(_U47_out)
);
assign blur_stencil_clk = clk;
assign blur_stencil_rst_n = rst_n;
assign blur_stencil_flush = flush;
assign blur_stencil_op_hcompute_blur_stencil_write[0] = op_hcompute_blur_stencil_blur_stencil_op_hcompute_blur_stencil_write[0];
blur_stencil_ub blur_stencil (
    .clk(blur_stencil_clk),
    .rst_n(blur_stencil_rst_n),
    .flush(blur_stencil_flush),
    .op_hcompute_blur_stencil_write(blur_stencil_op_hcompute_blur_stencil_write),
    .op_hcompute_hw_output_stencil_read(blur_stencil_op_hcompute_hw_output_stencil_read)
);
assign blur_unnormalized_stencil_clk = clk;
assign blur_unnormalized_stencil_rst_n = rst_n;
assign blur_unnormalized_stencil_flush = flush;
assign blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write[0] = op_hcompute_blur_unnormalized_stencil_1_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write[0];
blur_unnormalized_stencil_ub blur_unnormalized_stencil (
    .clk(blur_unnormalized_stencil_clk),
    .rst_n(blur_unnormalized_stencil_rst_n),
    .flush(blur_unnormalized_stencil_flush),
    .op_hcompute_blur_stencil_read(blur_unnormalized_stencil_op_hcompute_blur_stencil_read),
    .op_hcompute_blur_unnormalized_stencil_1_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write)
);
assign blur_unnormalized_stencil_clkwrk_dsa0_clk = clk;
assign blur_unnormalized_stencil_clkwrk_dsa0_rst_n = rst_n;
assign blur_unnormalized_stencil_clkwrk_dsa0_flush = flush;
assign blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write[0] = op_hcompute_blur_unnormalized_stencil_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write[0];
blur_unnormalized_stencil_clkwrk_dsa0_ub blur_unnormalized_stencil_clkwrk_dsa0 (
    .clk(blur_unnormalized_stencil_clkwrk_dsa0_clk),
    .rst_n(blur_unnormalized_stencil_clkwrk_dsa0_rst_n),
    .flush(blur_unnormalized_stencil_clkwrk_dsa0_flush),
    .op_hcompute_blur_unnormalized_stencil_1_read(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read),
    .op_hcompute_blur_unnormalized_stencil_write(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write)
);
assign hw_input_stencil_clk = clk;
assign hw_input_stencil_rst_n = rst_n;
assign hw_input_stencil_flush = flush;
assign hw_input_stencil_op_hcompute_hw_input_stencil_write[0] = op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write[0];
hw_input_stencil_ub hw_input_stencil (
    .clk(hw_input_stencil_clk),
    .rst_n(hw_input_stencil_rst_n),
    .flush(hw_input_stencil_flush),
    .op_hcompute_blur_unnormalized_stencil_1_read(hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read),
    .op_hcompute_hw_input_stencil_write(hw_input_stencil_op_hcompute_hw_input_stencil_write)
);
assign op_hcompute_blur_stencil_clk = clk;
assign op_hcompute_blur_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_read[0] = blur_unnormalized_stencil_op_hcompute_blur_stencil_read[0];
cu_op_hcompute_blur_stencil op_hcompute_blur_stencil (
    .clk(op_hcompute_blur_stencil_clk),
    .blur_unnormalized_stencil_op_hcompute_blur_stencil_read(op_hcompute_blur_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_read),
    .blur_stencil_op_hcompute_blur_stencil_write(op_hcompute_blur_stencil_blur_stencil_op_hcompute_blur_stencil_write)
);
assign op_hcompute_blur_unnormalized_stencil_clk = clk;
cu_op_hcompute_blur_unnormalized_stencil op_hcompute_blur_unnormalized_stencil (
    .clk(op_hcompute_blur_unnormalized_stencil_clk),
    .blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write(op_hcompute_blur_unnormalized_stencil_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write)
);
assign op_hcompute_blur_unnormalized_stencil_1_clk = clk;
assign op_hcompute_blur_unnormalized_stencil_1_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read[0] = blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read[0];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[8] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[8];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[7] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[7];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[6] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[6];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[5] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[5];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[4] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[4];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[3] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[3];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[2] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[2];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[1] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[1];
assign op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[0] = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read[0];
cu_op_hcompute_blur_unnormalized_stencil_1 op_hcompute_blur_unnormalized_stencil_1 (
    .clk(op_hcompute_blur_unnormalized_stencil_1_clk),
    .blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read(op_hcompute_blur_unnormalized_stencil_1_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read),
    .hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read(op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read),
    .blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write(op_hcompute_blur_unnormalized_stencil_1_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write)
);
assign op_hcompute_hw_input_stencil_clk = clk;
assign op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read[0] = _U47_out;
cu_op_hcompute_hw_input_stencil op_hcompute_hw_input_stencil (
    .clk(op_hcompute_hw_input_stencil_clk),
    .input_copy_stencil_op_hcompute_hw_input_stencil_read(op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read),
    .hw_input_stencil_op_hcompute_hw_input_stencil_write(op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_blur_stencil_op_hcompute_hw_output_stencil_read[0] = blur_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .blur_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_blur_stencil_op_hcompute_hw_output_stencil_read),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
endmodule

