// Module `ub` defined externally
module cu_input (
    output [15:0] buf_inst_input_write_0,
    input clk,
    input [15:0] in_inst_input_read_0
);
assign buf_inst_input_write_0 = in_inst_input_read_0;
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
    input [15:0] buf_inst_output_read_0,
    input [15:0] buf_inst_output_read_1,
    input [15:0] buf_inst_output_read_2,
    input [15:0] buf_inst_output_read_3,
    input [15:0] buf_inst_output_read_4,
    input [15:0] buf_inst_output_read_5,
    input [15:0] buf_inst_output_read_6,
    input [15:0] buf_inst_output_read_7,
    input [15:0] buf_inst_output_read_8,
    input clk,
    output [15:0] out_inst_output_write_0
);
assign out_inst_output_write_0 = 16'((16'((16'((16'((16'((16'((16'((16'(buf_inst_output_read_0 + buf_inst_output_read_1)) + buf_inst_output_read_2)) + buf_inst_output_read_3)) + buf_inst_output_read_4)) + buf_inst_output_read_5)) + buf_inst_output_read_6)) + buf_inst_output_read_7)) + buf_inst_output_read_8);
endmodule

module buf_inst_ub (
    input clk,
    input [15:0] input_write_0,
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
) d_reg__U10 (
    .in(output_read_5),
    .clk(clk),
    .out(output_read_4)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U11 (
    .in(output_read_4),
    .clk(clk),
    .out(output_read_3)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U12 (
    .in(output_read_2),
    .clk(clk),
    .out(output_read_1)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U13 (
    .in(output_read_1),
    .clk(clk),
    .out(output_read_0)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U8 (
    .in(input_write_0),
    .clk(clk),
    .out(output_read_7)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U9 (
    .in(output_read_7),
    .clk(clk),
    .out(output_read_6)
);
cwlib_ub__confignull__input_num1__output_num2__width16 ub_buf_inst_input_10_to_buf_inst_output_3 (
    .rst_n(reset),
    .clk_en(1'b1),
    .clk(clk),
    .datain_0(input_write_0),
    .dataout_0(output_read_2),
    .dataout_1(output_read_5)
);
assign output_read_8 = input_write_0;
endmodule

module conv33_naive_compute (
    input clk,
    input [15:0] in_inst_input_read_0,
    output [15:0] out_inst_output_write_0,
    input reset
);
wire [15:0] _U14_out;
wire [15:0] buf_inst_output_read_0;
wire [15:0] buf_inst_output_read_1;
wire [15:0] buf_inst_output_read_2;
wire [15:0] buf_inst_output_read_3;
wire [15:0] buf_inst_output_read_4;
wire [15:0] buf_inst_output_read_5;
wire [15:0] buf_inst_output_read_6;
wire [15:0] buf_inst_output_read_7;
wire [15:0] buf_inst_output_read_8;
wire [15:0] input_buf_inst_input_write_0;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U14 (
    .in(in_inst_input_read_0),
    .clk(clk),
    .out(_U14_out)
);
buf_inst_ub buf_inst (
    .clk(clk),
    .input_write_0(input_buf_inst_input_write_0),
    .output_read_0(buf_inst_output_read_0),
    .output_read_1(buf_inst_output_read_1),
    .output_read_2(buf_inst_output_read_2),
    .output_read_3(buf_inst_output_read_3),
    .output_read_4(buf_inst_output_read_4),
    .output_read_5(buf_inst_output_read_5),
    .output_read_6(buf_inst_output_read_6),
    .output_read_7(buf_inst_output_read_7),
    .output_read_8(buf_inst_output_read_8),
    .reset(reset)
);
cu_input input (
    .buf_inst_input_write_0(input_buf_inst_input_write_0),
    .clk(clk),
    .in_inst_input_read_0(_U14_out)
);
cu_output output (
    .buf_inst_output_read_0(buf_inst_output_read_0),
    .buf_inst_output_read_1(buf_inst_output_read_1),
    .buf_inst_output_read_2(buf_inst_output_read_2),
    .buf_inst_output_read_3(buf_inst_output_read_3),
    .buf_inst_output_read_4(buf_inst_output_read_4),
    .buf_inst_output_read_5(buf_inst_output_read_5),
    .buf_inst_output_read_6(buf_inst_output_read_6),
    .buf_inst_output_read_7(buf_inst_output_read_7),
    .buf_inst_output_read_8(buf_inst_output_read_8),
    .clk(clk),
    .out_inst_output_write_0(out_inst_output_write_0)
);
endmodule

