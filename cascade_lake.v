// Module `ub` defined externally
module cu_input (
    output [15:0] buf1_input_write_0,
    input clk,
    input [15:0] in_input_read_0
);
assign buf1_input_write_0 = in_input_read_0;
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
    input [15:0] buf2_output_read_0,
    input [15:0] buf2_output_read_1,
    input [15:0] buf2_output_read_2,
    input [15:0] buf2_output_read_3,
    input [15:0] buf2_output_read_4,
    input [15:0] buf2_output_read_5,
    input [15:0] buf2_output_read_6,
    input [15:0] buf2_output_read_7,
    input [15:0] buf2_output_read_8,
    input clk,
    output [15:0] out_output_write_0
);
assign out_output_write_0 = 16'((16'((16'((16'((16'((16'((16'((16'(buf2_output_read_0 + buf2_output_read_1)) + buf2_output_read_2)) + buf2_output_read_3)) + buf2_output_read_4)) + buf2_output_read_5)) + buf2_output_read_6)) + buf2_output_read_7)) + buf2_output_read_8);
endmodule

module cu_conv (
    input [15:0] buf1_conv_read_0,
    input [15:0] buf1_conv_read_1,
    input [15:0] buf1_conv_read_2,
    input [15:0] buf1_conv_read_3,
    input [15:0] buf1_conv_read_4,
    input [15:0] buf1_conv_read_5,
    input [15:0] buf1_conv_read_6,
    input [15:0] buf1_conv_read_7,
    input [15:0] buf1_conv_read_8,
    output [15:0] buf2_conv_write_0,
    input clk
);
assign buf2_conv_write_0 = 16'((16'((16'((16'((16'((16'((16'((16'(buf1_conv_read_0 + buf1_conv_read_1)) + buf1_conv_read_2)) + buf1_conv_read_3)) + buf1_conv_read_4)) + buf1_conv_read_5)) + buf1_conv_read_6)) + buf1_conv_read_7)) + buf1_conv_read_8);
endmodule

module buf2_ub (
    input clk,
    input [15:0] conv_write_0,
    output [15:0] output_read_0,
    output [15:0] output_read_1,
    output [15:0] output_read_2,
    output [15:0] output_read_3,
    output [15:0] output_read_4,
    output [15:0] output_read_5,
    output [15:0] output_read_6,
    output [15:0] output_read_7,
    output [15:0] output_read_8,
    input reset
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U22 (
    .in(conv_write_0),
    .clk(clk),
    .out(output_read_7)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U23 (
    .in(output_read_7),
    .clk(clk),
    .out(output_read_6)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U24 (
    .in(output_read_5),
    .clk(clk),
    .out(output_read_4)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U25 (
    .in(output_read_4),
    .clk(clk),
    .out(output_read_3)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U26 (
    .in(output_read_2),
    .clk(clk),
    .out(output_read_1)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U27 (
    .in(output_read_1),
    .clk(clk),
    .out(output_read_0)
);
cwlib_ub__confignull__input_num1__output_num2__width16 ub_buf2_conv_12_to_buf2_output_3 (
    .rst_n(reset),
    .clk_en(1'b1),
    .clk(clk),
    .datain_0(conv_write_0),
    .dataout_0(output_read_2),
    .dataout_1(output_read_5)
);
assign output_read_8 = conv_write_0;
endmodule

module buf1_ub (
    input clk,
    output [15:0] conv_read_0,
    output [15:0] conv_read_1,
    output [15:0] conv_read_2,
    output [15:0] conv_read_3,
    output [15:0] conv_read_4,
    output [15:0] conv_read_5,
    output [15:0] conv_read_6,
    output [15:0] conv_read_7,
    output [15:0] conv_read_8,
    input [15:0] input_write_0,
    input reset
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U16 (
    .in(input_write_0),
    .clk(clk),
    .out(conv_read_7)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U17 (
    .in(conv_read_7),
    .clk(clk),
    .out(conv_read_6)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U18 (
    .in(conv_read_5),
    .clk(clk),
    .out(conv_read_4)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U19 (
    .in(conv_read_4),
    .clk(clk),
    .out(conv_read_3)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U20 (
    .in(conv_read_2),
    .clk(clk),
    .out(conv_read_1)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U21 (
    .in(conv_read_1),
    .clk(clk),
    .out(conv_read_0)
);
cwlib_ub__confignull__input_num1__output_num2__width16 ub_buf1_input_10_to_buf1_conv_15 (
    .rst_n(reset),
    .clk_en(1'b1),
    .clk(clk),
    .datain_0(input_write_0),
    .dataout_0(conv_read_2),
    .dataout_1(conv_read_5)
);
assign conv_read_8 = input_write_0;
endmodule

module cascade_lake (
    input clk,
    input [15:0] in_input_read_0,
    output [15:0] out_output_write_0,
    input reset
);
wire [15:0] _U28_out;
wire [15:0] buf1_conv_read_0;
wire [15:0] buf1_conv_read_1;
wire [15:0] buf1_conv_read_2;
wire [15:0] buf1_conv_read_3;
wire [15:0] buf1_conv_read_4;
wire [15:0] buf1_conv_read_5;
wire [15:0] buf1_conv_read_6;
wire [15:0] buf1_conv_read_7;
wire [15:0] buf1_conv_read_8;
wire [15:0] buf2_output_read_0;
wire [15:0] buf2_output_read_1;
wire [15:0] buf2_output_read_2;
wire [15:0] buf2_output_read_3;
wire [15:0] buf2_output_read_4;
wire [15:0] buf2_output_read_5;
wire [15:0] buf2_output_read_6;
wire [15:0] buf2_output_read_7;
wire [15:0] buf2_output_read_8;
wire [15:0] conv_buf2_conv_write_0;
wire [15:0] input_buf1_input_write_0;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U28 (
    .in(in_input_read_0),
    .clk(clk),
    .out(_U28_out)
);
buf1_ub buf1 (
    .clk(clk),
    .conv_read_0(buf1_conv_read_0),
    .conv_read_1(buf1_conv_read_1),
    .conv_read_2(buf1_conv_read_2),
    .conv_read_3(buf1_conv_read_3),
    .conv_read_4(buf1_conv_read_4),
    .conv_read_5(buf1_conv_read_5),
    .conv_read_6(buf1_conv_read_6),
    .conv_read_7(buf1_conv_read_7),
    .conv_read_8(buf1_conv_read_8),
    .input_write_0(input_buf1_input_write_0),
    .reset(reset)
);
buf2_ub buf2 (
    .clk(clk),
    .conv_write_0(conv_buf2_conv_write_0),
    .output_read_0(buf2_output_read_0),
    .output_read_1(buf2_output_read_1),
    .output_read_2(buf2_output_read_2),
    .output_read_3(buf2_output_read_3),
    .output_read_4(buf2_output_read_4),
    .output_read_5(buf2_output_read_5),
    .output_read_6(buf2_output_read_6),
    .output_read_7(buf2_output_read_7),
    .output_read_8(buf2_output_read_8),
    .reset(reset)
);
cu_conv conv (
    .buf1_conv_read_0(buf1_conv_read_0),
    .buf1_conv_read_1(buf1_conv_read_1),
    .buf1_conv_read_2(buf1_conv_read_2),
    .buf1_conv_read_3(buf1_conv_read_3),
    .buf1_conv_read_4(buf1_conv_read_4),
    .buf1_conv_read_5(buf1_conv_read_5),
    .buf1_conv_read_6(buf1_conv_read_6),
    .buf1_conv_read_7(buf1_conv_read_7),
    .buf1_conv_read_8(buf1_conv_read_8),
    .buf2_conv_write_0(conv_buf2_conv_write_0),
    .clk(clk)
);
cu_input input (
    .buf1_input_write_0(input_buf1_input_write_0),
    .clk(clk),
    .in_input_read_0(_U28_out)
);
cu_output output (
    .buf2_output_read_0(buf2_output_read_0),
    .buf2_output_read_1(buf2_output_read_1),
    .buf2_output_read_2(buf2_output_read_2),
    .buf2_output_read_3(buf2_output_read_3),
    .buf2_output_read_4(buf2_output_read_4),
    .buf2_output_read_5(buf2_output_read_5),
    .buf2_output_read_6(buf2_output_read_6),
    .buf2_output_read_7(buf2_output_read_7),
    .buf2_output_read_8(buf2_output_read_8),
    .clk(clk),
    .out_output_write_0(out_output_write_0)
);
endmodule

