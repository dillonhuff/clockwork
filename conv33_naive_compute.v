// Module `ub` defined externally
module cu_input (
    input clk,
    input [15:0] in_inst_input_read [0:0],
    output [15:0] buf_inst_input_write [0:0]
);
assign buf_inst_input_write[0] = in_inst_input_read[0];
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
    input [15:0] buf_inst_output_read [8:0],
    output [15:0] out_inst_output_write [0:0]
);
assign out_inst_output_write[0] = 16'((16'((16'((16'((16'((16'((16'((16'(buf_inst_output_read[0] + buf_inst_output_read[1])) + buf_inst_output_read[2])) + buf_inst_output_read[3])) + buf_inst_output_read[4])) + buf_inst_output_read[5])) + buf_inst_output_read[6])) + buf_inst_output_read[7])) + buf_inst_output_read[8]);
endmodule

module buf_inst_ub (
    input clk,
    input reset,
    input [15:0] input_write [0:0],
    output [15:0] output_read [8:0]
);
wire [15:0] d_reg__U10_in;
wire d_reg__U10_clk;
wire [15:0] d_reg__U10_out;
wire [15:0] d_reg__U11_in;
wire d_reg__U11_clk;
wire [15:0] d_reg__U11_out;
wire [15:0] d_reg__U12_in;
wire d_reg__U12_clk;
wire [15:0] d_reg__U12_out;
wire [15:0] d_reg__U13_in;
wire d_reg__U13_clk;
wire [15:0] d_reg__U13_out;
wire [15:0] d_reg__U8_in;
wire d_reg__U8_clk;
wire [15:0] d_reg__U8_out;
wire [15:0] d_reg__U9_in;
wire d_reg__U9_clk;
wire [15:0] d_reg__U9_out;
wire ub_buf_inst_input_10_to_buf_inst_output_3_rst_n;
wire ub_buf_inst_input_10_to_buf_inst_output_3_clk_en;
wire ub_buf_inst_input_10_to_buf_inst_output_3_clk;
wire [15:0] ub_buf_inst_input_10_to_buf_inst_output_3_datain_0;
wire [15:0] ub_buf_inst_input_10_to_buf_inst_output_3_chainin_0;
wire [15:0] ub_buf_inst_input_10_to_buf_inst_output_3_dataout_0;
wire [15:0] ub_buf_inst_input_10_to_buf_inst_output_3_dataout_1;
assign d_reg__U10_in = ub_buf_inst_input_10_to_buf_inst_output_3_dataout_1;
assign d_reg__U10_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U10 (
    .in(d_reg__U10_in),
    .clk(d_reg__U10_clk),
    .out(d_reg__U10_out)
);
assign d_reg__U11_in = d_reg__U10_out;
assign d_reg__U11_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U11 (
    .in(d_reg__U11_in),
    .clk(d_reg__U11_clk),
    .out(d_reg__U11_out)
);
assign d_reg__U12_in = ub_buf_inst_input_10_to_buf_inst_output_3_dataout_0;
assign d_reg__U12_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U12 (
    .in(d_reg__U12_in),
    .clk(d_reg__U12_clk),
    .out(d_reg__U12_out)
);
assign d_reg__U13_in = d_reg__U12_out;
assign d_reg__U13_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U13 (
    .in(d_reg__U13_in),
    .clk(d_reg__U13_clk),
    .out(d_reg__U13_out)
);
assign d_reg__U8_in = input_write[0];
assign d_reg__U8_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U8 (
    .in(d_reg__U8_in),
    .clk(d_reg__U8_clk),
    .out(d_reg__U8_out)
);
assign d_reg__U9_in = d_reg__U8_out;
assign d_reg__U9_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U9 (
    .in(d_reg__U9_in),
    .clk(d_reg__U9_clk),
    .out(d_reg__U9_out)
);
assign ub_buf_inst_input_10_to_buf_inst_output_3_rst_n = reset;
assign ub_buf_inst_input_10_to_buf_inst_output_3_clk_en = 1'b1;
assign ub_buf_inst_input_10_to_buf_inst_output_3_clk = clk;
assign ub_buf_inst_input_10_to_buf_inst_output_3_datain_0 = input_write[0];
assign ub_buf_inst_input_10_to_buf_inst_output_3_chainin_0 = 16'h0000;
cwlib_ub__confignull__input_num1__output_num2__width16 ub_buf_inst_input_10_to_buf_inst_output_3 (
    .rst_n(ub_buf_inst_input_10_to_buf_inst_output_3_rst_n),
    .clk_en(ub_buf_inst_input_10_to_buf_inst_output_3_clk_en),
    .clk(ub_buf_inst_input_10_to_buf_inst_output_3_clk),
    .datain_0(ub_buf_inst_input_10_to_buf_inst_output_3_datain_0),
    .chainin_0(ub_buf_inst_input_10_to_buf_inst_output_3_chainin_0),
    .dataout_0(ub_buf_inst_input_10_to_buf_inst_output_3_dataout_0),
    .dataout_1(ub_buf_inst_input_10_to_buf_inst_output_3_dataout_1)
);
assign output_read[8] = input_write[0];
assign output_read[7] = d_reg__U8_out;
assign output_read[6] = d_reg__U9_out;
assign output_read[5] = ub_buf_inst_input_10_to_buf_inst_output_3_dataout_1;
assign output_read[4] = d_reg__U10_out;
assign output_read[3] = d_reg__U11_out;
assign output_read[2] = ub_buf_inst_input_10_to_buf_inst_output_3_dataout_0;
assign output_read[1] = d_reg__U12_out;
assign output_read[0] = d_reg__U13_out;
endmodule

module conv33_naive_compute (
    input clk,
    input reset,
    output in_inst_input_read_valid,
    input [15:0] in_inst_input_read [0:0],
    output out_inst_output_write_en,
    output [15:0] out_inst_output_write [0:0]
);
wire [15:0] _U14_in;
wire _U14_clk;
wire [15:0] _U14_out;
wire buf_inst_clk;
wire buf_inst_reset;
wire [15:0] buf_inst_input_write [0:0];
wire [15:0] buf_inst_output_read [8:0];
wire input_clk;
wire [15:0] input_in_inst_input_read [0:0];
wire [15:0] input_buf_inst_input_write [0:0];
wire output_clk;
wire [15:0] output_buf_inst_output_read [8:0];
wire [15:0] output_out_inst_output_write [0:0];
assign _U14_in = in_inst_input_read[0];
assign _U14_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U14 (
    .in(_U14_in),
    .clk(_U14_clk),
    .out(_U14_out)
);
assign buf_inst_clk = clk;
assign buf_inst_reset = reset;
assign buf_inst_input_write[0] = input_buf_inst_input_write[0];
buf_inst_ub buf_inst (
    .clk(buf_inst_clk),
    .reset(buf_inst_reset),
    .input_write(buf_inst_input_write),
    .output_read(buf_inst_output_read)
);
assign input_clk = clk;
assign input_in_inst_input_read[0] = _U14_out;
cu_input input (
    .clk(input_clk),
    .in_inst_input_read(input_in_inst_input_read),
    .buf_inst_input_write(input_buf_inst_input_write)
);
assign output_clk = clk;
assign output_buf_inst_output_read[8] = buf_inst_output_read[8];
assign output_buf_inst_output_read[7] = buf_inst_output_read[7];
assign output_buf_inst_output_read[6] = buf_inst_output_read[6];
assign output_buf_inst_output_read[5] = buf_inst_output_read[5];
assign output_buf_inst_output_read[4] = buf_inst_output_read[4];
assign output_buf_inst_output_read[3] = buf_inst_output_read[3];
assign output_buf_inst_output_read[2] = buf_inst_output_read[2];
assign output_buf_inst_output_read[1] = buf_inst_output_read[1];
assign output_buf_inst_output_read[0] = buf_inst_output_read[0];
cu_output output (
    .clk(output_clk),
    .buf_inst_output_read(output_buf_inst_output_read),
    .out_inst_output_write(output_out_inst_output_write)
);
assign in_inst_input_read_valid = 1'b0;
assign out_inst_output_write_en = 1'b0;
assign out_inst_output_write[0] = output_out_inst_output_write[0];
endmodule

