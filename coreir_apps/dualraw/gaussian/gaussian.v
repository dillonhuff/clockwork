// Module `inner_sram__U62` defined externally
// Module `inner_sram__U101` defined externally
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

module delay__U67 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U68_in;
wire _U68_clk;
assign _U68_in = wdata;
assign _U68_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U68 (
    .in(_U68_in),
    .clk(_U68_clk),
    .out(rdata)
);
endmodule

module delay__U64 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U65_in;
wire _U65_clk;
assign _U65_in = wdata;
assign _U65_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U65 (
    .in(_U65_in),
    .clk(_U65_clk),
    .out(rdata)
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

module delay__U106 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U107_in;
wire _U107_clk;
assign _U107_in = wdata;
assign _U107_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U107 (
    .in(_U107_in),
    .clk(_U107_clk),
    .out(rdata)
);
endmodule

module delay__U103 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U104_in;
wire _U104_clk;
assign _U104_in = wdata;
assign _U104_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U104 (
    .in(_U104_in),
    .clk(_U104_clk),
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

module aff__U95 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U87 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U86 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U87 affine_func (
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
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U80 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U72 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U71 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U72 affine_func (
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
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U70 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U100_out;
wire [15:0] addrgen__U100_d [0:0];
wire [15:0] addrgen__U85_out;
wire [15:0] addrgen__U85_d [0:0];
wire ctrl__U79_clk;
wire ctrl__U79_valid;
wire [15:0] ctrl__U79_d [0:0];
wire ctrl__U94_clk;
wire ctrl__U94_valid;
wire [15:0] ctrl__U94_d [0:0];
wire inner_sram__U101_bank_clk;
wire inner_sram__U101_bank_rst_n;
wire inner_sram__U101_bank_flush;
wire inner_sram__U101_bank_ren_in;
wire inner_sram__U101_bank_wen_in;
wire [15:0] inner_sram__U101_bank_waddr;
wire [15:0] inner_sram__U101_bank_raddr;
wire [15:0] inner_sram__U101_bank_wdata;
assign addrgen__U100_d[0] = ctrl__U94_d[0];
aff__U95 addrgen__U100 (
    .out(addrgen__U100_out),
    .d(addrgen__U100_d)
);
assign addrgen__U85_d[0] = ctrl__U79_d[0];
aff__U80 addrgen__U85 (
    .out(addrgen__U85_out),
    .d(addrgen__U85_d)
);
assign ctrl__U79_clk = clk;
affine_controller__U71 ctrl__U79 (
    .clk(ctrl__U79_clk),
    .valid(ctrl__U79_valid),
    .d(ctrl__U79_d)
);
assign ctrl__U94_clk = clk;
affine_controller__U86 ctrl__U94 (
    .clk(ctrl__U94_clk),
    .valid(ctrl__U94_valid),
    .d(ctrl__U94_d)
);
assign inner_sram__U101_bank_clk = clk;
assign inner_sram__U101_bank_rst_n = rst_n;
assign inner_sram__U101_bank_flush = flush;
assign inner_sram__U101_bank_ren_in = ctrl__U94_valid;
assign inner_sram__U101_bank_wen_in = ctrl__U79_valid;
assign inner_sram__U101_bank_waddr = addrgen__U85_out;
assign inner_sram__U101_bank_raddr = addrgen__U100_out;
assign inner_sram__U101_bank_wdata = wdata;
inner_sram__U101 inner_sram__U101_bank (
    .clk(inner_sram__U101_bank_clk),
    .rst_n(inner_sram__U101_bank_rst_n),
    .flush(inner_sram__U101_bank_flush),
    .ren_in(inner_sram__U101_bank_ren_in),
    .wen_in(inner_sram__U101_bank_wen_in),
    .waddr(inner_sram__U101_bank_waddr),
    .raddr(inner_sram__U101_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U101_bank_wdata)
);
endmodule

module aff__U56 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U48 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U47 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U48 affine_func (
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
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U41 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U33 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U32 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U33 affine_func (
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
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U31 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U46_out;
wire [15:0] addrgen__U46_d [0:0];
wire [15:0] addrgen__U61_out;
wire [15:0] addrgen__U61_d [0:0];
wire ctrl__U40_clk;
wire ctrl__U40_valid;
wire [15:0] ctrl__U40_d [0:0];
wire ctrl__U55_clk;
wire ctrl__U55_valid;
wire [15:0] ctrl__U55_d [0:0];
wire inner_sram__U62_bank_clk;
wire inner_sram__U62_bank_rst_n;
wire inner_sram__U62_bank_flush;
wire inner_sram__U62_bank_ren_in;
wire inner_sram__U62_bank_wen_in;
wire [15:0] inner_sram__U62_bank_waddr;
wire [15:0] inner_sram__U62_bank_raddr;
wire [15:0] inner_sram__U62_bank_wdata;
assign addrgen__U46_d[0] = ctrl__U40_d[0];
aff__U41 addrgen__U46 (
    .out(addrgen__U46_out),
    .d(addrgen__U46_d)
);
assign addrgen__U61_d[0] = ctrl__U55_d[0];
aff__U56 addrgen__U61 (
    .out(addrgen__U61_out),
    .d(addrgen__U61_d)
);
assign ctrl__U40_clk = clk;
affine_controller__U32 ctrl__U40 (
    .clk(ctrl__U40_clk),
    .valid(ctrl__U40_valid),
    .d(ctrl__U40_d)
);
assign ctrl__U55_clk = clk;
affine_controller__U47 ctrl__U55 (
    .clk(ctrl__U55_clk),
    .valid(ctrl__U55_valid),
    .d(ctrl__U55_d)
);
assign inner_sram__U62_bank_clk = clk;
assign inner_sram__U62_bank_rst_n = rst_n;
assign inner_sram__U62_bank_flush = flush;
assign inner_sram__U62_bank_ren_in = ctrl__U55_valid;
assign inner_sram__U62_bank_wen_in = ctrl__U40_valid;
assign inner_sram__U62_bank_waddr = addrgen__U46_out;
assign inner_sram__U62_bank_raddr = addrgen__U61_out;
assign inner_sram__U62_bank_wdata = wdata;
inner_sram__U62 inner_sram__U62_bank (
    .clk(inner_sram__U62_bank_clk),
    .rst_n(inner_sram__U62_bank_rst_n),
    .flush(inner_sram__U62_bank_flush),
    .ren_in(inner_sram__U62_bank_ren_in),
    .wen_in(inner_sram__U62_bank_wen_in),
    .waddr(inner_sram__U62_bank_waddr),
    .raddr(inner_sram__U62_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U62_bank_wdata)
);
endmodule

module hw_input_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    output [15:0] op_hcompute_blur_unnormalized_stencil_1_read [8:0],
    input [15:0] op_hcompute_hw_input_stencil_write [0:0]
);
wire delay_sr_U102_clk;
wire [15:0] delay_sr_U102_wdata;
wire [15:0] delay_sr_U102_rdata;
wire delay_sr_U102_rst_n;
wire delay_sr_U102_flush;
wire delay_sr_U105_clk;
wire [15:0] delay_sr_U105_wdata;
wire [15:0] delay_sr_U105_rdata;
wire delay_sr_U105_rst_n;
wire delay_sr_U105_flush;
wire delay_sr_U108_clk;
wire [15:0] delay_sr_U108_wdata;
wire [15:0] delay_sr_U108_rdata;
wire delay_sr_U108_rst_n;
wire delay_sr_U108_flush;
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
wire delay_sr_U63_clk;
wire [15:0] delay_sr_U63_wdata;
wire [15:0] delay_sr_U63_rdata;
wire delay_sr_U63_rst_n;
wire delay_sr_U63_flush;
wire delay_sr_U66_clk;
wire [15:0] delay_sr_U66_wdata;
wire [15:0] delay_sr_U66_rdata;
wire delay_sr_U66_rst_n;
wire delay_sr_U66_flush;
wire delay_sr_U69_clk;
wire [15:0] delay_sr_U69_wdata;
wire [15:0] delay_sr_U69_rdata;
wire delay_sr_U69_rst_n;
wire delay_sr_U69_flush;
assign delay_sr_U102_clk = clk;
assign delay_sr_U102_wdata = delay_sr_U69_rdata;
assign delay_sr_U102_rst_n = rst_n;
assign delay_sr_U102_flush = flush;
memtile_long_delay__U70 delay_sr_U102 (
    .clk(delay_sr_U102_clk),
    .wdata(delay_sr_U102_wdata),
    .rdata(delay_sr_U102_rdata),
    .rst_n(delay_sr_U102_rst_n),
    .flush(delay_sr_U102_flush)
);
assign delay_sr_U105_clk = clk;
assign delay_sr_U105_wdata = delay_sr_U102_rdata;
assign delay_sr_U105_rst_n = rst_n;
assign delay_sr_U105_flush = flush;
delay__U103 delay_sr_U105 (
    .clk(delay_sr_U105_clk),
    .wdata(delay_sr_U105_wdata),
    .rdata(delay_sr_U105_rdata),
    .rst_n(delay_sr_U105_rst_n),
    .flush(delay_sr_U105_flush)
);
assign delay_sr_U108_clk = clk;
assign delay_sr_U108_wdata = delay_sr_U105_rdata;
assign delay_sr_U108_rst_n = rst_n;
assign delay_sr_U108_flush = flush;
delay__U106 delay_sr_U108 (
    .clk(delay_sr_U108_clk),
    .wdata(delay_sr_U108_wdata),
    .rdata(delay_sr_U108_rdata),
    .rst_n(delay_sr_U108_rst_n),
    .flush(delay_sr_U108_flush)
);
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
assign delay_sr_U63_clk = clk;
assign delay_sr_U63_wdata = delay_sr_U30_rdata;
assign delay_sr_U63_rst_n = rst_n;
assign delay_sr_U63_flush = flush;
memtile_long_delay__U31 delay_sr_U63 (
    .clk(delay_sr_U63_clk),
    .wdata(delay_sr_U63_wdata),
    .rdata(delay_sr_U63_rdata),
    .rst_n(delay_sr_U63_rst_n),
    .flush(delay_sr_U63_flush)
);
assign delay_sr_U66_clk = clk;
assign delay_sr_U66_wdata = delay_sr_U63_rdata;
assign delay_sr_U66_rst_n = rst_n;
assign delay_sr_U66_flush = flush;
delay__U64 delay_sr_U66 (
    .clk(delay_sr_U66_clk),
    .wdata(delay_sr_U66_wdata),
    .rdata(delay_sr_U66_rdata),
    .rst_n(delay_sr_U66_rst_n),
    .flush(delay_sr_U66_flush)
);
assign delay_sr_U69_clk = clk;
assign delay_sr_U69_wdata = delay_sr_U66_rdata;
assign delay_sr_U69_rst_n = rst_n;
assign delay_sr_U69_flush = flush;
delay__U67 delay_sr_U69 (
    .clk(delay_sr_U69_clk),
    .wdata(delay_sr_U69_wdata),
    .rdata(delay_sr_U69_rdata),
    .rst_n(delay_sr_U69_rst_n),
    .flush(delay_sr_U69_flush)
);
assign op_hcompute_blur_unnormalized_stencil_1_read[8] = delay_sr_U27_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[7] = delay_sr_U24_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[6] = delay_sr_U30_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[5] = delay_sr_U63_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[4] = delay_sr_U66_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[3] = delay_sr_U69_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[2] = delay_sr_U102_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[1] = delay_sr_U105_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[0] = delay_sr_U108_rdata;
endmodule

module gaussian (
    input clk,
    input rst_n,
    input flush,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0]
);
wire [15:0] _U109_in;
wire _U109_clk;
wire [15:0] _U109_out;
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
assign _U109_in = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
assign _U109_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U109 (
    .in(_U109_in),
    .clk(_U109_clk),
    .out(_U109_out)
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
assign op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read[0] = _U109_out;
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

