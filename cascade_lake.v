// Module `ub` defined externally
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
wire [15:0] d_reg__U22_out;
wire [15:0] d_reg__U23_out;
wire [15:0] d_reg__U24_out;
wire [15:0] d_reg__U25_out;
wire [15:0] d_reg__U26_out;
wire [15:0] d_reg__U27_out;
wire [15:0] ub_buf2_conv_12_to_buf2_output_3_dataout_0;
wire [15:0] ub_buf2_conv_12_to_buf2_output_3_dataout_1;
wire [15:0] ub_buf2_conv_12_to_buf2_output_3_chainin_0_const_in_out;
wire ub_buf2_conv_12_to_buf2_output_3_clk_en_const_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U22 (
    .in(conv_write[0]),
    .clk(clk),
    .out(d_reg__U22_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U23 (
    .in(d_reg__U22_out),
    .clk(clk),
    .out(d_reg__U23_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U24 (
    .in(ub_buf2_conv_12_to_buf2_output_3_dataout_1),
    .clk(clk),
    .out(d_reg__U24_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U25 (
    .in(d_reg__U24_out),
    .clk(clk),
    .out(d_reg__U25_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U26 (
    .in(ub_buf2_conv_12_to_buf2_output_3_dataout_0),
    .clk(clk),
    .out(d_reg__U26_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U27 (
    .in(d_reg__U26_out),
    .clk(clk),
    .out(d_reg__U27_out)
);
cwlib_ub__confignull__input_num1__output_num2__width16 ub_buf2_conv_12_to_buf2_output_3 (
    .rst_n(reset),
    .clk_en(ub_buf2_conv_12_to_buf2_output_3_clk_en_const_out),
    .clk(clk),
    .datain_0(conv_write[0]),
    .chainin_0(ub_buf2_conv_12_to_buf2_output_3_chainin_0_const_in_out),
    .dataout_0(ub_buf2_conv_12_to_buf2_output_3_dataout_0),
    .dataout_1(ub_buf2_conv_12_to_buf2_output_3_dataout_1)
);
assign ub_buf2_conv_12_to_buf2_output_3_chainin_0_const_in_out = 16'h0000;
assign ub_buf2_conv_12_to_buf2_output_3_clk_en_const_out = 1'b1;
assign output_read[8] = conv_write[0];
assign output_read[7] = d_reg__U22_out;
assign output_read[6] = d_reg__U23_out;
assign output_read[5] = ub_buf2_conv_12_to_buf2_output_3_dataout_1;
assign output_read[4] = d_reg__U24_out;
assign output_read[3] = d_reg__U25_out;
assign output_read[2] = ub_buf2_conv_12_to_buf2_output_3_dataout_0;
assign output_read[1] = d_reg__U26_out;
assign output_read[0] = d_reg__U27_out;
endmodule

module buf1_ub (
    input clk,
    input reset,
    output [15:0] conv_read [8:0],
    input [15:0] input_write [0:0]
);
wire [15:0] d_reg__U16_out;
wire [15:0] d_reg__U17_out;
wire [15:0] d_reg__U18_out;
wire [15:0] d_reg__U19_out;
wire [15:0] d_reg__U20_out;
wire [15:0] d_reg__U21_out;
wire [15:0] ub_buf1_input_10_to_buf1_conv_15_dataout_0;
wire [15:0] ub_buf1_input_10_to_buf1_conv_15_dataout_1;
wire [15:0] ub_buf1_input_10_to_buf1_conv_15_chainin_0_const_in_out;
wire ub_buf1_input_10_to_buf1_conv_15_clk_en_const_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U16 (
    .in(input_write[0]),
    .clk(clk),
    .out(d_reg__U16_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U17 (
    .in(d_reg__U16_out),
    .clk(clk),
    .out(d_reg__U17_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U18 (
    .in(ub_buf1_input_10_to_buf1_conv_15_dataout_1),
    .clk(clk),
    .out(d_reg__U18_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U19 (
    .in(d_reg__U18_out),
    .clk(clk),
    .out(d_reg__U19_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U20 (
    .in(ub_buf1_input_10_to_buf1_conv_15_dataout_0),
    .clk(clk),
    .out(d_reg__U20_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U21 (
    .in(d_reg__U20_out),
    .clk(clk),
    .out(d_reg__U21_out)
);
cwlib_ub__confignull__input_num1__output_num2__width16 ub_buf1_input_10_to_buf1_conv_15 (
    .rst_n(reset),
    .clk_en(ub_buf1_input_10_to_buf1_conv_15_clk_en_const_out),
    .clk(clk),
    .datain_0(input_write[0]),
    .chainin_0(ub_buf1_input_10_to_buf1_conv_15_chainin_0_const_in_out),
    .dataout_0(ub_buf1_input_10_to_buf1_conv_15_dataout_0),
    .dataout_1(ub_buf1_input_10_to_buf1_conv_15_dataout_1)
);
assign ub_buf1_input_10_to_buf1_conv_15_chainin_0_const_in_out = 16'h0000;
assign ub_buf1_input_10_to_buf1_conv_15_clk_en_const_out = 1'b1;
assign conv_read[8] = input_write[0];
assign conv_read[7] = d_reg__U16_out;
assign conv_read[6] = d_reg__U17_out;
assign conv_read[5] = ub_buf1_input_10_to_buf1_conv_15_dataout_1;
assign conv_read[4] = d_reg__U18_out;
assign conv_read[3] = d_reg__U19_out;
assign conv_read[2] = ub_buf1_input_10_to_buf1_conv_15_dataout_0;
assign conv_read[1] = d_reg__U20_out;
assign conv_read[0] = d_reg__U21_out;
endmodule

module cascade_lake (
    input clk,
    input reset,
    output in_input_read_valid,
    input [15:0] in_input_read [0:0],
    output out_output_write_en,
    output [15:0] out_output_write [0:0]
);
wire [15:0] _U28_out;
wire [15:0] buf1_conv_read [8:0];
wire [15:0] buf2_output_read [8:0];
wire [15:0] conv_buf2_conv_write [0:0];
wire [15:0] input_buf1_input_write [0:0];
wire [15:0] output_out_output_write [0:0];
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U28 (
    .in(in_input_read[0]),
    .clk(clk),
    .out(_U28_out)
);
wire [15:0] buf1_input_write [0:0];
assign buf1_input_write[0] = input_buf1_input_write[0];
buf1_ub buf1 (
    .clk(clk),
    .reset(reset),
    .conv_read(buf1_conv_read),
    .input_write(buf1_input_write)
);
wire [15:0] buf2_conv_write [0:0];
assign buf2_conv_write[0] = conv_buf2_conv_write[0];
buf2_ub buf2 (
    .clk(clk),
    .reset(reset),
    .conv_write(buf2_conv_write),
    .output_read(buf2_output_read)
);
wire [15:0] conv_buf1_conv_read [8:0];
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
    .clk(clk),
    .buf1_conv_read(conv_buf1_conv_read),
    .buf2_conv_write(conv_buf2_conv_write)
);
wire [15:0] input_in_input_read [0:0];
assign input_in_input_read[0] = _U28_out;
cu_input input (
    .clk(clk),
    .in_input_read(input_in_input_read),
    .buf1_input_write(input_buf1_input_write)
);
wire [15:0] output_buf2_output_read [8:0];
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
    .clk(clk),
    .buf2_output_read(output_buf2_output_read),
    .out_output_write(output_out_output_write)
);
assign in_input_read_valid = 1'b0;
assign out_output_write_en = 1'b0;
assign out_output_write[0] = output_out_output_write[0];
endmodule

