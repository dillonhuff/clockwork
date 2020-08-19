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
wire [15:0] d_reg__U10_out;
wire [15:0] d_reg__U11_out;
wire [15:0] d_reg__U12_out;
wire [15:0] d_reg__U13_out;
wire [15:0] d_reg__U8_out;
wire [15:0] d_reg__U9_out;
wire [15:0] ub_buf_inst_input_10_to_buf_inst_output_3_dataout_0;
wire [15:0] ub_buf_inst_input_10_to_buf_inst_output_3_dataout_1;
wire ub_buf_inst_input_10_to_buf_inst_output_3_clk_en_const_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U10 (
    .in(ub_buf_inst_input_10_to_buf_inst_output_3_dataout_1),
    .clk(clk),
    .out(d_reg__U10_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U11 (
    .in(d_reg__U10_out),
    .clk(clk),
    .out(d_reg__U11_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U12 (
    .in(ub_buf_inst_input_10_to_buf_inst_output_3_dataout_0),
    .clk(clk),
    .out(d_reg__U12_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U13 (
    .in(d_reg__U12_out),
    .clk(clk),
    .out(d_reg__U13_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U8 (
    .in(input_write[0]),
    .clk(clk),
    .out(d_reg__U8_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) d_reg__U9 (
    .in(d_reg__U8_out),
    .clk(clk),
    .out(d_reg__U9_out)
);
cwlib_ub__confignull__input_num1__output_num2__width16 ub_buf_inst_input_10_to_buf_inst_output_3 (
    .rst_n(reset),
    .clk_en(ub_buf_inst_input_10_to_buf_inst_output_3_clk_en_const_out),
    .clk(clk),
    .datain_0(input_write[0]),
    .dataout_0(ub_buf_inst_input_10_to_buf_inst_output_3_dataout_0),
    .dataout_1(ub_buf_inst_input_10_to_buf_inst_output_3_dataout_1)
);
assign ub_buf_inst_input_10_to_buf_inst_output_3_clk_en_const_out = 1'b1;
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
    input [15:0] in_inst_input_read [0:0],
    output [15:0] out_inst_output_write [0:0]
);
wire [15:0] _U14_out;
wire [15:0] buf_inst_output_read [8:0];
wire [15:0] input_buf_inst_input_write [0:0];
wire [15:0] output_out_inst_output_write [0:0];
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U14 (
    .in(in_inst_input_read[0]),
    .clk(clk),
    .out(_U14_out)
);
wire [15:0] buf_inst_input_write [0:0];
assign buf_inst_input_write[0] = input_buf_inst_input_write[0];
buf_inst_ub buf_inst (
    .clk(clk),
    .reset(reset),
    .input_write(buf_inst_input_write),
    .output_read(buf_inst_output_read)
);
wire [15:0] input_in_inst_input_read [0:0];
assign input_in_inst_input_read[0] = _U14_out;
cu_input input (
    .clk(clk),
    .in_inst_input_read(input_in_inst_input_read),
    .buf_inst_input_write(input_buf_inst_input_write)
);
wire [15:0] output_buf_inst_output_read [8:0];
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
    .clk(clk),
    .buf_inst_output_read(output_buf_inst_output_read),
    .out_inst_output_write(output_out_inst_output_write)
);
assign out_inst_output_write[0] = output_out_inst_output_write[0];
endmodule

