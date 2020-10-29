// Module `Mem` defined externally
module cu_input (
    input clk,
    input [15:0] in_input_read [0:0],
    output [15:0] buf1_input_write [0:0]
);
assign buf1_input_write[0] = in_input_read[0];
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

module cu_output (
    input clk,
    input [15:0] buf2_output_read [8:0],
    output [15:0] out_output_write [0:0]
);
assign out_output_write[0] = 16'((16'((16'((16'((16'((16'((16'((16'(buf2_output_read[0] + buf2_output_read[1])) + buf2_output_read[2])) + buf2_output_read[3])) + buf2_output_read[4])) + buf2_output_read[5])) + buf2_output_read[6])) + buf2_output_read[7])) + buf2_output_read[8]);
endmodule

module cu_conv (
    input clk,
    input [15:0] buf1_conv_read [8:0],
    output [15:0] buf2_conv_write [0:0]
);
assign buf2_conv_write[0] = 16'((16'((16'((16'((16'((16'((16'((16'(buf1_conv_read[0] + buf1_conv_read[1])) + buf1_conv_read[2])) + buf1_conv_read[3])) + buf1_conv_read[4])) + buf1_conv_read[5])) + buf1_conv_read[6])) + buf1_conv_read[7])) + buf1_conv_read[8]);
endmodule

module buf2_ub (
    input clk,
    input reset,
    input [15:0] conv_write [0:0],
    output [15:0] output_read [8:0]
);
wire [15:0] d_reg__U22_in;
wire d_reg__U22_clk;
wire [15:0] d_reg__U22_out;
wire [15:0] d_reg__U23_in;
wire d_reg__U23_clk;
wire [15:0] d_reg__U23_out;
wire [15:0] d_reg__U24_in;
wire d_reg__U24_clk;
wire [15:0] d_reg__U24_out;
wire [15:0] d_reg__U25_in;
wire d_reg__U25_clk;
wire [15:0] d_reg__U25_out;
wire [15:0] d_reg__U26_in;
wire d_reg__U26_clk;
wire [15:0] d_reg__U26_out;
wire [15:0] d_reg__U27_in;
wire d_reg__U27_clk;
wire [15:0] d_reg__U27_out;
wire ub_buf2_conv_12_to_buf2_output_3_rst_n;
wire ub_buf2_conv_12_to_buf2_output_3_clk_en;
wire ub_buf2_conv_12_to_buf2_output_3_clk;
wire [15:0] ub_buf2_conv_12_to_buf2_output_3_data_in_0;
wire [15:0] ub_buf2_conv_12_to_buf2_output_3_data_out_0;
wire [15:0] ub_buf2_conv_12_to_buf2_output_3_data_out_1;
wire ub_buf2_conv_12_to_buf2_output_3_flush;
assign d_reg__U22_in = conv_write[0];
assign d_reg__U22_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U22 (
    .in(d_reg__U22_in),
    .clk(d_reg__U22_clk),
    .out(d_reg__U22_out)
);
assign d_reg__U23_in = d_reg__U22_out;
assign d_reg__U23_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U23 (
    .in(d_reg__U23_in),
    .clk(d_reg__U23_clk),
    .out(d_reg__U23_out)
);
assign d_reg__U24_in = ub_buf2_conv_12_to_buf2_output_3_data_out_1;
assign d_reg__U24_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U24 (
    .in(d_reg__U24_in),
    .clk(d_reg__U24_clk),
    .out(d_reg__U24_out)
);
assign d_reg__U25_in = d_reg__U24_out;
assign d_reg__U25_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U25 (
    .in(d_reg__U25_in),
    .clk(d_reg__U25_clk),
    .out(d_reg__U25_out)
);
assign d_reg__U26_in = ub_buf2_conv_12_to_buf2_output_3_data_out_0;
assign d_reg__U26_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U26 (
    .in(d_reg__U26_in),
    .clk(d_reg__U26_clk),
    .out(d_reg__U26_out)
);
assign d_reg__U27_in = d_reg__U26_out;
assign d_reg__U27_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U27 (
    .in(d_reg__U27_in),
    .clk(d_reg__U27_clk),
    .out(d_reg__U27_out)
);
assign ub_buf2_conv_12_to_buf2_output_3_rst_n = 1'b0;
assign ub_buf2_conv_12_to_buf2_output_3_clk_en = 1'b1;
assign ub_buf2_conv_12_to_buf2_output_3_clk = clk;
assign ub_buf2_conv_12_to_buf2_output_3_data_in_0 = conv_write[0];
assign ub_buf2_conv_12_to_buf2_output_3_flush = reset;
cwlib_Mem__confignull__has_flushTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__num_input1__num_output2__width16 #(
    .mode("lake")
) ub_buf2_conv_12_to_buf2_output_3 (
    .rst_n(ub_buf2_conv_12_to_buf2_output_3_rst_n),
    .clk_en(ub_buf2_conv_12_to_buf2_output_3_clk_en),
    .clk(ub_buf2_conv_12_to_buf2_output_3_clk),
    .data_in_0(ub_buf2_conv_12_to_buf2_output_3_data_in_0),
    .data_out_0(ub_buf2_conv_12_to_buf2_output_3_data_out_0),
    .data_out_1(ub_buf2_conv_12_to_buf2_output_3_data_out_1),
    .flush(ub_buf2_conv_12_to_buf2_output_3_flush)
);
assign output_read[8] = conv_write[0];
assign output_read[7] = d_reg__U22_out;
assign output_read[6] = d_reg__U23_out;
assign output_read[5] = ub_buf2_conv_12_to_buf2_output_3_data_out_1;
assign output_read[4] = d_reg__U24_out;
assign output_read[3] = d_reg__U25_out;
assign output_read[2] = ub_buf2_conv_12_to_buf2_output_3_data_out_0;
assign output_read[1] = d_reg__U26_out;
assign output_read[0] = d_reg__U27_out;
endmodule

module buf1_ub (
    input clk,
    input reset,
    output [15:0] conv_read [8:0],
    input [15:0] input_write [0:0]
);
wire [15:0] d_reg__U16_in;
wire d_reg__U16_clk;
wire [15:0] d_reg__U16_out;
wire [15:0] d_reg__U17_in;
wire d_reg__U17_clk;
wire [15:0] d_reg__U17_out;
wire [15:0] d_reg__U18_in;
wire d_reg__U18_clk;
wire [15:0] d_reg__U18_out;
wire [15:0] d_reg__U19_in;
wire d_reg__U19_clk;
wire [15:0] d_reg__U19_out;
wire [15:0] d_reg__U20_in;
wire d_reg__U20_clk;
wire [15:0] d_reg__U20_out;
wire [15:0] d_reg__U21_in;
wire d_reg__U21_clk;
wire [15:0] d_reg__U21_out;
wire ub_buf1_input_10_to_buf1_conv_15_rst_n;
wire ub_buf1_input_10_to_buf1_conv_15_clk_en;
wire ub_buf1_input_10_to_buf1_conv_15_clk;
wire [15:0] ub_buf1_input_10_to_buf1_conv_15_data_in_0;
wire [15:0] ub_buf1_input_10_to_buf1_conv_15_data_out_0;
wire [15:0] ub_buf1_input_10_to_buf1_conv_15_data_out_1;
wire ub_buf1_input_10_to_buf1_conv_15_flush;
assign d_reg__U16_in = input_write[0];
assign d_reg__U16_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U16 (
    .in(d_reg__U16_in),
    .clk(d_reg__U16_clk),
    .out(d_reg__U16_out)
);
assign d_reg__U17_in = d_reg__U16_out;
assign d_reg__U17_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U17 (
    .in(d_reg__U17_in),
    .clk(d_reg__U17_clk),
    .out(d_reg__U17_out)
);
assign d_reg__U18_in = ub_buf1_input_10_to_buf1_conv_15_data_out_1;
assign d_reg__U18_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U18 (
    .in(d_reg__U18_in),
    .clk(d_reg__U18_clk),
    .out(d_reg__U18_out)
);
assign d_reg__U19_in = d_reg__U18_out;
assign d_reg__U19_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U19 (
    .in(d_reg__U19_in),
    .clk(d_reg__U19_clk),
    .out(d_reg__U19_out)
);
assign d_reg__U20_in = ub_buf1_input_10_to_buf1_conv_15_data_out_0;
assign d_reg__U20_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U20 (
    .in(d_reg__U20_in),
    .clk(d_reg__U20_clk),
    .out(d_reg__U20_out)
);
assign d_reg__U21_in = d_reg__U20_out;
assign d_reg__U21_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U21 (
    .in(d_reg__U21_in),
    .clk(d_reg__U21_clk),
    .out(d_reg__U21_out)
);
assign ub_buf1_input_10_to_buf1_conv_15_rst_n = 1'b0;
assign ub_buf1_input_10_to_buf1_conv_15_clk_en = 1'b1;
assign ub_buf1_input_10_to_buf1_conv_15_clk = clk;
assign ub_buf1_input_10_to_buf1_conv_15_data_in_0 = input_write[0];
assign ub_buf1_input_10_to_buf1_conv_15_flush = reset;
cwlib_Mem__confignull__has_flushTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__num_input1__num_output2__width16 #(
    .mode("lake")
) ub_buf1_input_10_to_buf1_conv_15 (
    .rst_n(ub_buf1_input_10_to_buf1_conv_15_rst_n),
    .clk_en(ub_buf1_input_10_to_buf1_conv_15_clk_en),
    .clk(ub_buf1_input_10_to_buf1_conv_15_clk),
    .data_in_0(ub_buf1_input_10_to_buf1_conv_15_data_in_0),
    .data_out_0(ub_buf1_input_10_to_buf1_conv_15_data_out_0),
    .data_out_1(ub_buf1_input_10_to_buf1_conv_15_data_out_1),
    .flush(ub_buf1_input_10_to_buf1_conv_15_flush)
);
assign conv_read[8] = input_write[0];
assign conv_read[7] = d_reg__U16_out;
assign conv_read[6] = d_reg__U17_out;
assign conv_read[5] = ub_buf1_input_10_to_buf1_conv_15_data_out_1;
assign conv_read[4] = d_reg__U18_out;
assign conv_read[3] = d_reg__U19_out;
assign conv_read[2] = ub_buf1_input_10_to_buf1_conv_15_data_out_0;
assign conv_read[1] = d_reg__U20_out;
assign conv_read[0] = d_reg__U21_out;
endmodule

module cascade_lake (
    input clk,
    input reset,
    output in_input_read_en,
    input [15:0] in_input_read [0:0],
    output out_output_write_valid,
    output [15:0] out_output_write [0:0]
);
wire buf1_clk;
wire buf1_reset;
wire [15:0] buf1_conv_read [8:0];
wire [15:0] buf1_input_write [0:0];
wire buf2_clk;
wire buf2_reset;
wire [15:0] buf2_conv_write [0:0];
wire [15:0] buf2_output_read [8:0];
wire conv_clk;
wire [15:0] conv_buf1_conv_read [8:0];
wire [15:0] conv_buf2_conv_write [0:0];
wire input_clk;
wire [15:0] input_in_input_read [0:0];
wire [15:0] input_buf1_input_write [0:0];
wire output_clk;
wire [15:0] output_buf2_output_read [8:0];
wire [15:0] output_out_output_write [0:0];
assign buf1_clk = clk;
assign buf1_reset = reset;
assign buf1_input_write[0] = input_buf1_input_write[0];
buf1_ub buf1 (
    .clk(buf1_clk),
    .reset(buf1_reset),
    .conv_read(buf1_conv_read),
    .input_write(buf1_input_write)
);
assign buf2_clk = clk;
assign buf2_reset = reset;
assign buf2_conv_write[0] = conv_buf2_conv_write[0];
buf2_ub buf2 (
    .clk(buf2_clk),
    .reset(buf2_reset),
    .conv_write(buf2_conv_write),
    .output_read(buf2_output_read)
);
assign conv_clk = clk;
assign conv_buf1_conv_read[8] = buf1_conv_read[8];
assign conv_buf1_conv_read[7] = buf1_conv_read[7];
assign conv_buf1_conv_read[6] = buf1_conv_read[6];
assign conv_buf1_conv_read[5] = buf1_conv_read[5];
assign conv_buf1_conv_read[4] = buf1_conv_read[4];
assign conv_buf1_conv_read[3] = buf1_conv_read[3];
assign conv_buf1_conv_read[2] = buf1_conv_read[2];
assign conv_buf1_conv_read[1] = buf1_conv_read[1];
assign conv_buf1_conv_read[0] = buf1_conv_read[0];
cu_conv conv (
    .clk(conv_clk),
    .buf1_conv_read(conv_buf1_conv_read),
    .buf2_conv_write(conv_buf2_conv_write)
);
assign input_clk = clk;
assign input_in_input_read[0] = in_input_read[0];
cu_input input (
    .clk(input_clk),
    .in_input_read(input_in_input_read),
    .buf1_input_write(input_buf1_input_write)
);
assign output_clk = clk;
assign output_buf2_output_read[8] = buf2_output_read[8];
assign output_buf2_output_read[7] = buf2_output_read[7];
assign output_buf2_output_read[6] = buf2_output_read[6];
assign output_buf2_output_read[5] = buf2_output_read[5];
assign output_buf2_output_read[4] = buf2_output_read[4];
assign output_buf2_output_read[3] = buf2_output_read[3];
assign output_buf2_output_read[2] = buf2_output_read[2];
assign output_buf2_output_read[1] = buf2_output_read[1];
assign output_buf2_output_read[0] = buf2_output_read[0];
cu_output output (
    .clk(output_clk),
    .buf2_output_read(output_buf2_output_read),
    .out_output_write(output_out_output_write)
);
assign in_input_read_en = 1'b0;
assign out_output_write_valid = 1'b0;
assign out_output_write[0] = output_out_output_write[0];
endmodule

