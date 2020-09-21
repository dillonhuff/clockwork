// Module `memtile_long_delay__U219` defined externally
// Module `memtile_long_delay__U211` defined externally
// Module `memtile_long_delay__U173` defined externally
// Module `memtile_long_delay__U165` defined externally
module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_conv2_stencil [0:0]
);
assign out_hw_output_stencil = in0_conv2_stencil[0];
endmodule

module hcompute_hw_input_global_wrapper_stencil (
    output [15:0] out_hw_input_global_wrapper_stencil,
    input [15:0] in0_hw_input_stencil [0:0]
);
assign out_hw_input_global_wrapper_stencil = in0_hw_input_stencil[0];
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] conv2_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_conv2_stencil [0:0];
assign inner_compute_in0_conv2_stencil[0] = conv2_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_conv2_stencil(inner_compute_in0_conv2_stencil)
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

module delay__U224 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U225_in;
wire _U225_clk;
assign _U225_in = wdata;
assign _U225_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U225 (
    .in(_U225_in),
    .clk(_U225_clk),
    .out(rdata)
);
endmodule

module delay__U221 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U222_in;
wire _U222_clk;
assign _U222_in = wdata;
assign _U222_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U222 (
    .in(_U222_in),
    .clk(_U222_clk),
    .out(rdata)
);
endmodule

module delay__U216 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U217_in;
wire _U217_clk;
assign _U217_in = wdata;
assign _U217_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U217 (
    .in(_U217_in),
    .clk(_U217_clk),
    .out(rdata)
);
endmodule

module delay__U213 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U214_in;
wire _U214_clk;
assign _U214_in = wdata;
assign _U214_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U214 (
    .in(_U214_in),
    .clk(_U214_clk),
    .out(rdata)
);
endmodule

module delay__U208 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U209_in;
wire _U209_clk;
assign _U209_in = wdata;
assign _U209_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U209 (
    .in(_U209_in),
    .clk(_U209_clk),
    .out(rdata)
);
endmodule

module delay__U205 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U206_in;
wire _U206_clk;
assign _U206_in = wdata;
assign _U206_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U206 (
    .in(_U206_in),
    .clk(_U206_clk),
    .out(rdata)
);
endmodule

module delay__U197 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U198_in;
wire _U198_clk;
wire [15:0] _U198_out;
wire [15:0] _U199_in;
wire _U199_clk;
wire [15:0] _U199_out;
wire [15:0] _U200_in;
wire _U200_clk;
wire [15:0] _U200_out;
wire [15:0] _U201_in;
wire _U201_clk;
wire [15:0] _U201_out;
wire [15:0] _U202_in;
wire _U202_clk;
wire [15:0] _U202_out;
wire [15:0] _U203_in;
wire _U203_clk;
assign _U198_in = wdata;
assign _U198_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U198 (
    .in(_U198_in),
    .clk(_U198_clk),
    .out(_U198_out)
);
assign _U199_in = _U198_out;
assign _U199_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U199 (
    .in(_U199_in),
    .clk(_U199_clk),
    .out(_U199_out)
);
assign _U200_in = _U199_out;
assign _U200_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U200 (
    .in(_U200_in),
    .clk(_U200_clk),
    .out(_U200_out)
);
assign _U201_in = _U200_out;
assign _U201_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U201 (
    .in(_U201_in),
    .clk(_U201_clk),
    .out(_U201_out)
);
assign _U202_in = _U201_out;
assign _U202_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U202 (
    .in(_U202_in),
    .clk(_U202_clk),
    .out(_U202_out)
);
assign _U203_in = _U202_out;
assign _U203_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U203 (
    .in(_U203_in),
    .clk(_U203_clk),
    .out(rdata)
);
endmodule

module hw_input_global_wrapper_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_conv1_stencil_1_read_ren,
    input [15:0] op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_conv1_stencil_1_read [8:0],
    input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0]
);
wire delay_sr_U204_clk;
wire [15:0] delay_sr_U204_wdata;
wire [15:0] delay_sr_U204_rdata;
wire delay_sr_U204_rst_n;
wire delay_sr_U204_flush;
wire delay_sr_U207_clk;
wire [15:0] delay_sr_U207_wdata;
wire [15:0] delay_sr_U207_rdata;
wire delay_sr_U207_rst_n;
wire delay_sr_U207_flush;
wire delay_sr_U210_clk;
wire [15:0] delay_sr_U210_wdata;
wire [15:0] delay_sr_U210_rdata;
wire delay_sr_U210_rst_n;
wire delay_sr_U210_flush;
wire delay_sr_U212_clk;
wire [15:0] delay_sr_U212_wdata;
wire [15:0] delay_sr_U212_rdata;
wire delay_sr_U212_rst_n;
wire delay_sr_U212_flush;
wire delay_sr_U215_clk;
wire [15:0] delay_sr_U215_wdata;
wire [15:0] delay_sr_U215_rdata;
wire delay_sr_U215_rst_n;
wire delay_sr_U215_flush;
wire delay_sr_U218_clk;
wire [15:0] delay_sr_U218_wdata;
wire [15:0] delay_sr_U218_rdata;
wire delay_sr_U218_rst_n;
wire delay_sr_U218_flush;
wire delay_sr_U220_clk;
wire [15:0] delay_sr_U220_wdata;
wire [15:0] delay_sr_U220_rdata;
wire delay_sr_U220_rst_n;
wire delay_sr_U220_flush;
wire delay_sr_U223_clk;
wire [15:0] delay_sr_U223_wdata;
wire [15:0] delay_sr_U223_rdata;
wire delay_sr_U223_rst_n;
wire delay_sr_U223_flush;
wire delay_sr_U226_clk;
wire [15:0] delay_sr_U226_wdata;
wire [15:0] delay_sr_U226_rdata;
wire delay_sr_U226_rst_n;
wire delay_sr_U226_flush;
assign delay_sr_U204_clk = clk;
assign delay_sr_U204_wdata = op_hcompute_hw_input_global_wrapper_stencil_write[0];
assign delay_sr_U204_rst_n = rst_n;
assign delay_sr_U204_flush = flush;
delay__U197 delay_sr_U204 (
    .clk(delay_sr_U204_clk),
    .wdata(delay_sr_U204_wdata),
    .rdata(delay_sr_U204_rdata),
    .rst_n(delay_sr_U204_rst_n),
    .flush(delay_sr_U204_flush)
);
assign delay_sr_U207_clk = clk;
assign delay_sr_U207_wdata = delay_sr_U204_rdata;
assign delay_sr_U207_rst_n = rst_n;
assign delay_sr_U207_flush = flush;
delay__U205 delay_sr_U207 (
    .clk(delay_sr_U207_clk),
    .wdata(delay_sr_U207_wdata),
    .rdata(delay_sr_U207_rdata),
    .rst_n(delay_sr_U207_rst_n),
    .flush(delay_sr_U207_flush)
);
assign delay_sr_U210_clk = clk;
assign delay_sr_U210_wdata = delay_sr_U207_rdata;
assign delay_sr_U210_rst_n = rst_n;
assign delay_sr_U210_flush = flush;
delay__U208 delay_sr_U210 (
    .clk(delay_sr_U210_clk),
    .wdata(delay_sr_U210_wdata),
    .rdata(delay_sr_U210_rdata),
    .rst_n(delay_sr_U210_rst_n),
    .flush(delay_sr_U210_flush)
);
assign delay_sr_U212_clk = clk;
assign delay_sr_U212_wdata = delay_sr_U210_rdata;
assign delay_sr_U212_rst_n = rst_n;
assign delay_sr_U212_flush = flush;
memtile_long_delay__U211 delay_sr_U212 (
    .clk(delay_sr_U212_clk),
    .wdata(delay_sr_U212_wdata),
    .rdata(delay_sr_U212_rdata),
    .rst_n(delay_sr_U212_rst_n),
    .flush(delay_sr_U212_flush)
);
assign delay_sr_U215_clk = clk;
assign delay_sr_U215_wdata = delay_sr_U212_rdata;
assign delay_sr_U215_rst_n = rst_n;
assign delay_sr_U215_flush = flush;
delay__U213 delay_sr_U215 (
    .clk(delay_sr_U215_clk),
    .wdata(delay_sr_U215_wdata),
    .rdata(delay_sr_U215_rdata),
    .rst_n(delay_sr_U215_rst_n),
    .flush(delay_sr_U215_flush)
);
assign delay_sr_U218_clk = clk;
assign delay_sr_U218_wdata = delay_sr_U215_rdata;
assign delay_sr_U218_rst_n = rst_n;
assign delay_sr_U218_flush = flush;
delay__U216 delay_sr_U218 (
    .clk(delay_sr_U218_clk),
    .wdata(delay_sr_U218_wdata),
    .rdata(delay_sr_U218_rdata),
    .rst_n(delay_sr_U218_rst_n),
    .flush(delay_sr_U218_flush)
);
assign delay_sr_U220_clk = clk;
assign delay_sr_U220_wdata = delay_sr_U218_rdata;
assign delay_sr_U220_rst_n = rst_n;
assign delay_sr_U220_flush = flush;
memtile_long_delay__U219 delay_sr_U220 (
    .clk(delay_sr_U220_clk),
    .wdata(delay_sr_U220_wdata),
    .rdata(delay_sr_U220_rdata),
    .rst_n(delay_sr_U220_rst_n),
    .flush(delay_sr_U220_flush)
);
assign delay_sr_U223_clk = clk;
assign delay_sr_U223_wdata = delay_sr_U220_rdata;
assign delay_sr_U223_rst_n = rst_n;
assign delay_sr_U223_flush = flush;
delay__U221 delay_sr_U223 (
    .clk(delay_sr_U223_clk),
    .wdata(delay_sr_U223_wdata),
    .rdata(delay_sr_U223_rdata),
    .rst_n(delay_sr_U223_rst_n),
    .flush(delay_sr_U223_flush)
);
assign delay_sr_U226_clk = clk;
assign delay_sr_U226_wdata = delay_sr_U223_rdata;
assign delay_sr_U226_rst_n = rst_n;
assign delay_sr_U226_flush = flush;
delay__U224 delay_sr_U226 (
    .clk(delay_sr_U226_clk),
    .wdata(delay_sr_U226_wdata),
    .rdata(delay_sr_U226_rdata),
    .rst_n(delay_sr_U226_rst_n),
    .flush(delay_sr_U226_flush)
);
assign op_hcompute_conv1_stencil_1_read[8] = delay_sr_U212_rdata;
assign op_hcompute_conv1_stencil_1_read[7] = delay_sr_U204_rdata;
assign op_hcompute_conv1_stencil_1_read[6] = delay_sr_U220_rdata;
assign op_hcompute_conv1_stencil_1_read[5] = delay_sr_U207_rdata;
assign op_hcompute_conv1_stencil_1_read[4] = delay_sr_U215_rdata;
assign op_hcompute_conv1_stencil_1_read[3] = delay_sr_U223_rdata;
assign op_hcompute_conv1_stencil_1_read[2] = delay_sr_U210_rdata;
assign op_hcompute_conv1_stencil_1_read[1] = delay_sr_U218_rdata;
assign op_hcompute_conv1_stencil_1_read[0] = delay_sr_U226_rdata;
endmodule

module delay__U192 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U193_in;
wire _U193_clk;
wire [15:0] _U193_out;
wire [15:0] _U194_in;
wire _U194_clk;
wire [15:0] _U194_out;
wire [15:0] _U195_in;
wire _U195_clk;
assign _U193_in = wdata;
assign _U193_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U193 (
    .in(_U193_in),
    .clk(_U193_clk),
    .out(_U193_out)
);
assign _U194_in = _U193_out;
assign _U194_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U194 (
    .in(_U194_in),
    .clk(_U194_clk),
    .out(_U194_out)
);
assign _U195_in = _U194_out;
assign _U195_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U195 (
    .in(_U195_in),
    .clk(_U195_clk),
    .out(rdata)
);
endmodule

module delay__U186 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U187_in;
wire _U187_clk;
wire [15:0] _U187_out;
wire [15:0] _U188_in;
wire _U188_clk;
wire [15:0] _U188_out;
wire [15:0] _U189_in;
wire _U189_clk;
wire [15:0] _U189_out;
wire [15:0] _U190_in;
wire _U190_clk;
assign _U187_in = wdata;
assign _U187_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U187 (
    .in(_U187_in),
    .clk(_U187_clk),
    .out(_U187_out)
);
assign _U188_in = _U187_out;
assign _U188_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U188 (
    .in(_U188_in),
    .clk(_U188_clk),
    .out(_U188_out)
);
assign _U189_in = _U188_out;
assign _U189_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U189 (
    .in(_U189_in),
    .clk(_U189_clk),
    .out(_U189_out)
);
assign _U190_in = _U189_out;
assign _U190_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U190 (
    .in(_U190_in),
    .clk(_U190_clk),
    .out(rdata)
);
endmodule

module delay__U181 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U182_in;
wire _U182_clk;
wire [15:0] _U182_out;
wire [15:0] _U183_in;
wire _U183_clk;
wire [15:0] _U183_out;
wire [15:0] _U184_in;
wire _U184_clk;
assign _U182_in = wdata;
assign _U182_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U182 (
    .in(_U182_in),
    .clk(_U182_clk),
    .out(_U182_out)
);
assign _U183_in = _U182_out;
assign _U183_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U183 (
    .in(_U183_in),
    .clk(_U183_clk),
    .out(_U183_out)
);
assign _U184_in = _U183_out;
assign _U184_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U184 (
    .in(_U184_in),
    .clk(_U184_clk),
    .out(rdata)
);
endmodule

module delay__U178 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U179_in;
wire _U179_clk;
assign _U179_in = wdata;
assign _U179_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U179 (
    .in(_U179_in),
    .clk(_U179_clk),
    .out(rdata)
);
endmodule

module delay__U175 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U176_in;
wire _U176_clk;
assign _U176_in = wdata;
assign _U176_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U176 (
    .in(_U176_in),
    .clk(_U176_clk),
    .out(rdata)
);
endmodule

module delay__U170 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U171_in;
wire _U171_clk;
assign _U171_in = wdata;
assign _U171_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U171 (
    .in(_U171_in),
    .clk(_U171_clk),
    .out(rdata)
);
endmodule

module delay__U167 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U168_in;
wire _U168_clk;
assign _U168_in = wdata;
assign _U168_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U168 (
    .in(_U168_in),
    .clk(_U168_clk),
    .out(rdata)
);
endmodule

module delay__U162 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U163_in;
wire _U163_clk;
assign _U163_in = wdata;
assign _U163_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U163 (
    .in(_U163_in),
    .clk(_U163_clk),
    .out(rdata)
);
endmodule

module delay__U159 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U160_in;
wire _U160_clk;
assign _U160_in = wdata;
assign _U160_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U160 (
    .in(_U160_in),
    .clk(_U160_clk),
    .out(rdata)
);
endmodule

module delay__U150 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U151_in;
wire _U151_clk;
wire [15:0] _U151_out;
wire [15:0] _U152_in;
wire _U152_clk;
wire [15:0] _U152_out;
wire [15:0] _U153_in;
wire _U153_clk;
wire [15:0] _U153_out;
wire [15:0] _U154_in;
wire _U154_clk;
wire [15:0] _U154_out;
wire [15:0] _U155_in;
wire _U155_clk;
wire [15:0] _U155_out;
wire [15:0] _U156_in;
wire _U156_clk;
wire [15:0] _U156_out;
wire [15:0] _U157_in;
wire _U157_clk;
assign _U151_in = wdata;
assign _U151_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U151 (
    .in(_U151_in),
    .clk(_U151_clk),
    .out(_U151_out)
);
assign _U152_in = _U151_out;
assign _U152_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U152 (
    .in(_U152_in),
    .clk(_U152_clk),
    .out(_U152_out)
);
assign _U153_in = _U152_out;
assign _U153_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U153 (
    .in(_U153_in),
    .clk(_U153_clk),
    .out(_U153_out)
);
assign _U154_in = _U153_out;
assign _U154_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U154 (
    .in(_U154_in),
    .clk(_U154_clk),
    .out(_U154_out)
);
assign _U155_in = _U154_out;
assign _U155_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U155 (
    .in(_U155_in),
    .clk(_U155_clk),
    .out(_U155_out)
);
assign _U156_in = _U155_out;
assign _U156_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U156 (
    .in(_U156_in),
    .clk(_U156_clk),
    .out(_U156_out)
);
assign _U157_in = _U156_out;
assign _U157_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U157 (
    .in(_U157_in),
    .clk(_U157_clk),
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

module hcompute_conv2_stencil (
    output [15:0] out_conv2_stencil
);
assign out_conv2_stencil = 16'h0000;
endmodule

module cu_op_hcompute_conv2_stencil (
    input clk,
    output [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write [0:0]
);
wire [15:0] inner_compute_out_conv2_stencil;
hcompute_conv2_stencil inner_compute (
    .out_conv2_stencil(inner_compute_out_conv2_stencil)
);
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write[0] = inner_compute_out_conv2_stencil;
endmodule

module hcompute_conv1_stencil (
    output [15:0] out_conv1_stencil
);
assign out_conv1_stencil = 16'h0000;
endmodule

module cu_op_hcompute_conv1_stencil (
    input clk,
    output [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write [0:0]
);
wire [15:0] inner_compute_out_conv1_stencil;
hcompute_conv1_stencil inner_compute (
    .out_conv1_stencil(inner_compute_out_conv1_stencil)
);
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write[0] = inner_compute_out_conv1_stencil;
endmodule

module hcompute_conv2_stencil_1 (
    output [15:0] out_conv2_stencil,
    input [15:0] in0_conv1_stencil [8:0],
    input [15:0] in1_conv2_stencil [0:0]
);
assign out_conv2_stencil = 16'((16'(in0_conv1_stencil[1] * 16'h0021)) + (16'(in1_conv2_stencil[0] + (16'((16'((16'(in0_conv1_stencil[2] * 16'h0002)) + (16'(in0_conv1_stencil[3] + (16'((16'(in0_conv1_stencil[4] * 16'h0002)) + (16'((16'(in0_conv1_stencil[5] * 16'h0004)) + (16'((16'(in0_conv1_stencil[6] * 16'h0002)) + (16'(in0_conv1_stencil[7] + (16'(in0_conv1_stencil[8] + (16'(in0_conv1_stencil[0] * 16'h0002)))))))))))))))) * 16'h0021)))));
endmodule

module cu_op_hcompute_conv2_stencil_1 (
    input clk,
    input [15:0] conv1_stencil_op_hcompute_conv2_stencil_1_read [8:0],
    input [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read [0:0],
    output [15:0] conv2_stencil_op_hcompute_conv2_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_conv2_stencil;
wire [15:0] inner_compute_in0_conv1_stencil [8:0];
wire [15:0] inner_compute_in1_conv2_stencil [0:0];
assign inner_compute_in0_conv1_stencil[8] = conv1_stencil_op_hcompute_conv2_stencil_1_read[8];
assign inner_compute_in0_conv1_stencil[7] = conv1_stencil_op_hcompute_conv2_stencil_1_read[7];
assign inner_compute_in0_conv1_stencil[6] = conv1_stencil_op_hcompute_conv2_stencil_1_read[6];
assign inner_compute_in0_conv1_stencil[5] = conv1_stencil_op_hcompute_conv2_stencil_1_read[5];
assign inner_compute_in0_conv1_stencil[4] = conv1_stencil_op_hcompute_conv2_stencil_1_read[4];
assign inner_compute_in0_conv1_stencil[3] = conv1_stencil_op_hcompute_conv2_stencil_1_read[3];
assign inner_compute_in0_conv1_stencil[2] = conv1_stencil_op_hcompute_conv2_stencil_1_read[2];
assign inner_compute_in0_conv1_stencil[1] = conv1_stencil_op_hcompute_conv2_stencil_1_read[1];
assign inner_compute_in0_conv1_stencil[0] = conv1_stencil_op_hcompute_conv2_stencil_1_read[0];
assign inner_compute_in1_conv2_stencil[0] = conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read[0];
hcompute_conv2_stencil_1 inner_compute (
    .out_conv2_stencil(inner_compute_out_conv2_stencil),
    .in0_conv1_stencil(inner_compute_in0_conv1_stencil),
    .in1_conv2_stencil(inner_compute_in1_conv2_stencil)
);
assign conv2_stencil_op_hcompute_conv2_stencil_1_write[0] = inner_compute_out_conv2_stencil;
endmodule

module hcompute_conv1_stencil_1 (
    output [15:0] out_conv1_stencil,
    input [15:0] in0_conv1_stencil [0:0],
    input [15:0] in1_hw_input_global_wrapper_stencil [8:0]
);
assign out_conv1_stencil = 16'(in1_hw_input_global_wrapper_stencil[0] + (16'(in0_conv1_stencil[0] + (16'((16'(in1_hw_input_global_wrapper_stencil[1] * 16'h0002)) + (16'(in1_hw_input_global_wrapper_stencil[2] + (16'((16'(in1_hw_input_global_wrapper_stencil[3] * 16'h0002)) + (16'((16'(in1_hw_input_global_wrapper_stencil[4] * 16'h0004)) + (16'((16'(in1_hw_input_global_wrapper_stencil[5] * 16'h0002)) + (16'(in1_hw_input_global_wrapper_stencil[6] + (16'(in1_hw_input_global_wrapper_stencil[7] + (16'(in1_hw_input_global_wrapper_stencil[8] * 16'h0002)))))))))))))))))));
endmodule

module cu_op_hcompute_conv1_stencil_1 (
    input clk,
    input [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read [0:0],
    input [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read [8:0],
    output [15:0] conv1_stencil_op_hcompute_conv1_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_conv1_stencil;
wire [15:0] inner_compute_in0_conv1_stencil [0:0];
wire [15:0] inner_compute_in1_hw_input_global_wrapper_stencil [8:0];
assign inner_compute_in0_conv1_stencil[0] = conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read[0];
assign inner_compute_in1_hw_input_global_wrapper_stencil[8] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[8];
assign inner_compute_in1_hw_input_global_wrapper_stencil[7] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[7];
assign inner_compute_in1_hw_input_global_wrapper_stencil[6] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[6];
assign inner_compute_in1_hw_input_global_wrapper_stencil[5] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[5];
assign inner_compute_in1_hw_input_global_wrapper_stencil[4] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[4];
assign inner_compute_in1_hw_input_global_wrapper_stencil[3] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[3];
assign inner_compute_in1_hw_input_global_wrapper_stencil[2] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[2];
assign inner_compute_in1_hw_input_global_wrapper_stencil[1] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[1];
assign inner_compute_in1_hw_input_global_wrapper_stencil[0] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[0];
hcompute_conv1_stencil_1 inner_compute (
    .out_conv1_stencil(inner_compute_out_conv1_stencil),
    .in0_conv1_stencil(inner_compute_in0_conv1_stencil),
    .in1_hw_input_global_wrapper_stencil(inner_compute_in1_hw_input_global_wrapper_stencil)
);
assign conv1_stencil_op_hcompute_conv1_stencil_1_write[0] = inner_compute_out_conv1_stencil;
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

module conv2_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_conv2_stencil_1_write_wen,
    input [15:0] op_hcompute_conv2_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_conv2_stencil_1_write [0:0],
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
wire delay_sr_U191_clk;
wire [15:0] delay_sr_U191_wdata;
wire [15:0] delay_sr_U191_rdata;
wire delay_sr_U191_rst_n;
wire delay_sr_U191_flush;
assign delay_sr_U191_clk = clk;
assign delay_sr_U191_wdata = op_hcompute_conv2_stencil_1_write[0];
assign delay_sr_U191_rst_n = rst_n;
assign delay_sr_U191_flush = flush;
delay__U186 delay_sr_U191 (
    .clk(delay_sr_U191_clk),
    .wdata(delay_sr_U191_wdata),
    .rdata(delay_sr_U191_rdata),
    .rst_n(delay_sr_U191_rst_n),
    .flush(delay_sr_U191_flush)
);
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U191_rdata;
endmodule

module conv2_stencil_clkwrk_dsa1_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_conv2_stencil_1_read_ren,
    input [15:0] op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_conv2_stencil_1_read [0:0],
    input op_hcompute_conv2_stencil_write_wen,
    input [15:0] op_hcompute_conv2_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_conv2_stencil_write [0:0]
);
wire delay_sr_U196_clk;
wire [15:0] delay_sr_U196_wdata;
wire [15:0] delay_sr_U196_rdata;
wire delay_sr_U196_rst_n;
wire delay_sr_U196_flush;
assign delay_sr_U196_clk = clk;
assign delay_sr_U196_wdata = op_hcompute_conv2_stencil_write[0];
assign delay_sr_U196_rst_n = rst_n;
assign delay_sr_U196_flush = flush;
delay__U192 delay_sr_U196 (
    .clk(delay_sr_U196_clk),
    .wdata(delay_sr_U196_wdata),
    .rdata(delay_sr_U196_rdata),
    .rst_n(delay_sr_U196_rst_n),
    .flush(delay_sr_U196_flush)
);
assign op_hcompute_conv2_stencil_1_read[0] = delay_sr_U196_rdata;
endmodule

module conv1_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_conv1_stencil_1_write_wen,
    input [15:0] op_hcompute_conv1_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_conv1_stencil_1_write [0:0],
    input op_hcompute_conv2_stencil_1_read_ren,
    input [15:0] op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_conv2_stencil_1_read [8:0]
);
wire delay_sr_U158_clk;
wire [15:0] delay_sr_U158_wdata;
wire [15:0] delay_sr_U158_rdata;
wire delay_sr_U158_rst_n;
wire delay_sr_U158_flush;
wire delay_sr_U161_clk;
wire [15:0] delay_sr_U161_wdata;
wire [15:0] delay_sr_U161_rdata;
wire delay_sr_U161_rst_n;
wire delay_sr_U161_flush;
wire delay_sr_U164_clk;
wire [15:0] delay_sr_U164_wdata;
wire [15:0] delay_sr_U164_rdata;
wire delay_sr_U164_rst_n;
wire delay_sr_U164_flush;
wire delay_sr_U166_clk;
wire [15:0] delay_sr_U166_wdata;
wire [15:0] delay_sr_U166_rdata;
wire delay_sr_U166_rst_n;
wire delay_sr_U166_flush;
wire delay_sr_U169_clk;
wire [15:0] delay_sr_U169_wdata;
wire [15:0] delay_sr_U169_rdata;
wire delay_sr_U169_rst_n;
wire delay_sr_U169_flush;
wire delay_sr_U172_clk;
wire [15:0] delay_sr_U172_wdata;
wire [15:0] delay_sr_U172_rdata;
wire delay_sr_U172_rst_n;
wire delay_sr_U172_flush;
wire delay_sr_U174_clk;
wire [15:0] delay_sr_U174_wdata;
wire [15:0] delay_sr_U174_rdata;
wire delay_sr_U174_rst_n;
wire delay_sr_U174_flush;
wire delay_sr_U177_clk;
wire [15:0] delay_sr_U177_wdata;
wire [15:0] delay_sr_U177_rdata;
wire delay_sr_U177_rst_n;
wire delay_sr_U177_flush;
wire delay_sr_U180_clk;
wire [15:0] delay_sr_U180_wdata;
wire [15:0] delay_sr_U180_rdata;
wire delay_sr_U180_rst_n;
wire delay_sr_U180_flush;
assign delay_sr_U158_clk = clk;
assign delay_sr_U158_wdata = op_hcompute_conv1_stencil_1_write[0];
assign delay_sr_U158_rst_n = rst_n;
assign delay_sr_U158_flush = flush;
delay__U150 delay_sr_U158 (
    .clk(delay_sr_U158_clk),
    .wdata(delay_sr_U158_wdata),
    .rdata(delay_sr_U158_rdata),
    .rst_n(delay_sr_U158_rst_n),
    .flush(delay_sr_U158_flush)
);
assign delay_sr_U161_clk = clk;
assign delay_sr_U161_wdata = delay_sr_U158_rdata;
assign delay_sr_U161_rst_n = rst_n;
assign delay_sr_U161_flush = flush;
delay__U159 delay_sr_U161 (
    .clk(delay_sr_U161_clk),
    .wdata(delay_sr_U161_wdata),
    .rdata(delay_sr_U161_rdata),
    .rst_n(delay_sr_U161_rst_n),
    .flush(delay_sr_U161_flush)
);
assign delay_sr_U164_clk = clk;
assign delay_sr_U164_wdata = delay_sr_U161_rdata;
assign delay_sr_U164_rst_n = rst_n;
assign delay_sr_U164_flush = flush;
delay__U162 delay_sr_U164 (
    .clk(delay_sr_U164_clk),
    .wdata(delay_sr_U164_wdata),
    .rdata(delay_sr_U164_rdata),
    .rst_n(delay_sr_U164_rst_n),
    .flush(delay_sr_U164_flush)
);
assign delay_sr_U166_clk = clk;
assign delay_sr_U166_wdata = delay_sr_U164_rdata;
assign delay_sr_U166_rst_n = rst_n;
assign delay_sr_U166_flush = flush;
memtile_long_delay__U165 delay_sr_U166 (
    .clk(delay_sr_U166_clk),
    .wdata(delay_sr_U166_wdata),
    .rdata(delay_sr_U166_rdata),
    .rst_n(delay_sr_U166_rst_n),
    .flush(delay_sr_U166_flush)
);
assign delay_sr_U169_clk = clk;
assign delay_sr_U169_wdata = delay_sr_U166_rdata;
assign delay_sr_U169_rst_n = rst_n;
assign delay_sr_U169_flush = flush;
delay__U167 delay_sr_U169 (
    .clk(delay_sr_U169_clk),
    .wdata(delay_sr_U169_wdata),
    .rdata(delay_sr_U169_rdata),
    .rst_n(delay_sr_U169_rst_n),
    .flush(delay_sr_U169_flush)
);
assign delay_sr_U172_clk = clk;
assign delay_sr_U172_wdata = delay_sr_U169_rdata;
assign delay_sr_U172_rst_n = rst_n;
assign delay_sr_U172_flush = flush;
delay__U170 delay_sr_U172 (
    .clk(delay_sr_U172_clk),
    .wdata(delay_sr_U172_wdata),
    .rdata(delay_sr_U172_rdata),
    .rst_n(delay_sr_U172_rst_n),
    .flush(delay_sr_U172_flush)
);
assign delay_sr_U174_clk = clk;
assign delay_sr_U174_wdata = delay_sr_U172_rdata;
assign delay_sr_U174_rst_n = rst_n;
assign delay_sr_U174_flush = flush;
memtile_long_delay__U173 delay_sr_U174 (
    .clk(delay_sr_U174_clk),
    .wdata(delay_sr_U174_wdata),
    .rdata(delay_sr_U174_rdata),
    .rst_n(delay_sr_U174_rst_n),
    .flush(delay_sr_U174_flush)
);
assign delay_sr_U177_clk = clk;
assign delay_sr_U177_wdata = delay_sr_U174_rdata;
assign delay_sr_U177_rst_n = rst_n;
assign delay_sr_U177_flush = flush;
delay__U175 delay_sr_U177 (
    .clk(delay_sr_U177_clk),
    .wdata(delay_sr_U177_wdata),
    .rdata(delay_sr_U177_rdata),
    .rst_n(delay_sr_U177_rst_n),
    .flush(delay_sr_U177_flush)
);
assign delay_sr_U180_clk = clk;
assign delay_sr_U180_wdata = delay_sr_U177_rdata;
assign delay_sr_U180_rst_n = rst_n;
assign delay_sr_U180_flush = flush;
delay__U178 delay_sr_U180 (
    .clk(delay_sr_U180_clk),
    .wdata(delay_sr_U180_wdata),
    .rdata(delay_sr_U180_rdata),
    .rst_n(delay_sr_U180_rst_n),
    .flush(delay_sr_U180_flush)
);
assign op_hcompute_conv2_stencil_1_read[8] = delay_sr_U158_rdata;
assign op_hcompute_conv2_stencil_1_read[7] = delay_sr_U164_rdata;
assign op_hcompute_conv2_stencil_1_read[6] = delay_sr_U166_rdata;
assign op_hcompute_conv2_stencil_1_read[5] = delay_sr_U169_rdata;
assign op_hcompute_conv2_stencil_1_read[4] = delay_sr_U172_rdata;
assign op_hcompute_conv2_stencil_1_read[3] = delay_sr_U174_rdata;
assign op_hcompute_conv2_stencil_1_read[2] = delay_sr_U177_rdata;
assign op_hcompute_conv2_stencil_1_read[1] = delay_sr_U180_rdata;
assign op_hcompute_conv2_stencil_1_read[0] = delay_sr_U161_rdata;
endmodule

module conv1_stencil_clkwrk_dsa0_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_conv1_stencil_1_read_ren,
    input [15:0] op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_conv1_stencil_1_read [0:0],
    input op_hcompute_conv1_stencil_write_wen,
    input [15:0] op_hcompute_conv1_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_conv1_stencil_write [0:0]
);
wire delay_sr_U185_clk;
wire [15:0] delay_sr_U185_wdata;
wire [15:0] delay_sr_U185_rdata;
wire delay_sr_U185_rst_n;
wire delay_sr_U185_flush;
assign delay_sr_U185_clk = clk;
assign delay_sr_U185_wdata = op_hcompute_conv1_stencil_write[0];
assign delay_sr_U185_rst_n = rst_n;
assign delay_sr_U185_flush = flush;
delay__U181 delay_sr_U185 (
    .clk(delay_sr_U185_clk),
    .wdata(delay_sr_U185_wdata),
    .rdata(delay_sr_U185_rdata),
    .rst_n(delay_sr_U185_rst_n),
    .flush(delay_sr_U185_flush)
);
assign op_hcompute_conv1_stencil_1_read[0] = delay_sr_U185_rdata;
endmodule

module array_delay_U96 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U97_in;
wire _U97_clk;
wire [15:0] _U97_out;
wire [15:0] _U98_in;
wire _U98_clk;
wire [15:0] _U98_out;
wire [15:0] _U99_in;
wire _U99_clk;
wire [15:0] _U99_out;
assign _U97_in = in[0];
assign _U97_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U97 (
    .in(_U97_in),
    .clk(_U97_clk),
    .out(_U97_out)
);
assign _U98_in = in[1];
assign _U98_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U98 (
    .in(_U98_in),
    .clk(_U98_clk),
    .out(_U98_out)
);
assign _U99_in = in[2];
assign _U99_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U99 (
    .in(_U99_in),
    .clk(_U99_clk),
    .out(_U99_out)
);
assign out[2] = _U99_out;
assign out[1] = _U98_out;
assign out[0] = _U97_out;
endmodule

module array_delay_U92 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U93_in;
wire _U93_clk;
wire [15:0] _U93_out;
wire [15:0] _U94_in;
wire _U94_clk;
wire [15:0] _U94_out;
wire [15:0] _U95_in;
wire _U95_clk;
wire [15:0] _U95_out;
assign _U93_in = in[0];
assign _U93_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U93 (
    .in(_U93_in),
    .clk(_U93_clk),
    .out(_U93_out)
);
assign _U94_in = in[1];
assign _U94_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U94 (
    .in(_U94_in),
    .clk(_U94_clk),
    .out(_U94_out)
);
assign _U95_in = in[2];
assign _U95_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U95 (
    .in(_U95_in),
    .clk(_U95_clk),
    .out(_U95_out)
);
assign out[2] = _U95_out;
assign out[1] = _U94_out;
assign out[0] = _U93_out;
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

module array_delay_U146 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U147_in;
wire _U147_clk;
wire [15:0] _U147_out;
wire [15:0] _U148_in;
wire _U148_clk;
wire [15:0] _U148_out;
wire [15:0] _U149_in;
wire _U149_clk;
wire [15:0] _U149_out;
assign _U147_in = in[0];
assign _U147_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U147 (
    .in(_U147_in),
    .clk(_U147_clk),
    .out(_U147_out)
);
assign _U148_in = in[1];
assign _U148_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U148 (
    .in(_U148_in),
    .clk(_U148_clk),
    .out(_U148_out)
);
assign _U149_in = in[2];
assign _U149_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U149 (
    .in(_U149_in),
    .clk(_U149_clk),
    .out(_U149_out)
);
assign out[2] = _U149_out;
assign out[1] = _U148_out;
assign out[0] = _U147_out;
endmodule

module array_delay_U142 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U143_in;
wire _U143_clk;
wire [15:0] _U143_out;
wire [15:0] _U144_in;
wire _U144_clk;
wire [15:0] _U144_out;
wire [15:0] _U145_in;
wire _U145_clk;
wire [15:0] _U145_out;
assign _U143_in = in[0];
assign _U143_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U143 (
    .in(_U143_in),
    .clk(_U143_clk),
    .out(_U143_out)
);
assign _U144_in = in[1];
assign _U144_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U144 (
    .in(_U144_in),
    .clk(_U144_clk),
    .out(_U144_out)
);
assign _U145_in = in[2];
assign _U145_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U145 (
    .in(_U145_in),
    .clk(_U145_clk),
    .out(_U145_out)
);
assign out[2] = _U145_out;
assign out[1] = _U144_out;
assign out[0] = _U143_out;
endmodule

module array_delay_U121 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U122_in;
wire _U122_clk;
wire [15:0] _U122_out;
wire [15:0] _U123_in;
wire _U123_clk;
wire [15:0] _U123_out;
wire [15:0] _U124_in;
wire _U124_clk;
wire [15:0] _U124_out;
assign _U122_in = in[0];
assign _U122_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U122 (
    .in(_U122_in),
    .clk(_U122_clk),
    .out(_U122_out)
);
assign _U123_in = in[1];
assign _U123_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U123 (
    .in(_U123_in),
    .clk(_U123_clk),
    .out(_U123_out)
);
assign _U124_in = in[2];
assign _U124_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U124 (
    .in(_U124_in),
    .clk(_U124_clk),
    .out(_U124_out)
);
assign out[2] = _U124_out;
assign out[1] = _U123_out;
assign out[0] = _U122_out;
endmodule

module array_delay_U117 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U118_in;
wire _U118_clk;
wire [15:0] _U118_out;
wire [15:0] _U119_in;
wire _U119_clk;
wire [15:0] _U119_out;
wire [15:0] _U120_in;
wire _U120_clk;
wire [15:0] _U120_out;
assign _U118_in = in[0];
assign _U118_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U118 (
    .in(_U118_in),
    .clk(_U118_clk),
    .out(_U118_out)
);
assign _U119_in = in[1];
assign _U119_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U119 (
    .in(_U119_in),
    .clk(_U119_clk),
    .out(_U119_out)
);
assign _U120_in = in[2];
assign _U120_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U120 (
    .in(_U120_in),
    .clk(_U120_clk),
    .out(_U120_out)
);
assign out[2] = _U120_out;
assign out[1] = _U119_out;
assign out[0] = _U118_out;
endmodule

module aff__U76 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h010f);
endmodule

module affine_controller__U75 (
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
aff__U76 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U51 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U126 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U125 (
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
aff__U126 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U101 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U100 (
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
aff__U101 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module cascade (
    input clk,
    input rst_n,
    input flush,
    output hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] _U227_in;
wire _U227_clk;
wire [15:0] _U227_out;
wire conv1_stencil_clk;
wire conv1_stencil_flush;
wire conv1_stencil_rst_n;
wire conv1_stencil_op_hcompute_conv1_stencil_1_write_wen;
wire [15:0] conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars [2:0];
wire [15:0] conv1_stencil_op_hcompute_conv1_stencil_1_write [0:0];
wire conv1_stencil_op_hcompute_conv2_stencil_1_read_ren;
wire [15:0] conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0];
wire [15:0] conv1_stencil_op_hcompute_conv2_stencil_1_read [8:0];
wire conv1_stencil_clkwrk_dsa0_clk;
wire conv1_stencil_clkwrk_dsa0_flush;
wire conv1_stencil_clkwrk_dsa0_rst_n;
wire conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ren;
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0];
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read [0:0];
wire conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_wen;
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars [2:0];
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write [0:0];
wire conv2_stencil_clk;
wire conv2_stencil_flush;
wire conv2_stencil_rst_n;
wire conv2_stencil_op_hcompute_conv2_stencil_1_write_wen;
wire [15:0] conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars [2:0];
wire [15:0] conv2_stencil_op_hcompute_conv2_stencil_1_write [0:0];
wire conv2_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] conv2_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire conv2_stencil_clkwrk_dsa1_clk;
wire conv2_stencil_clkwrk_dsa1_flush;
wire conv2_stencil_clkwrk_dsa1_rst_n;
wire conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ren;
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0];
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read [0:0];
wire conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_wen;
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars [2:0];
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write [0:0];
wire hw_input_global_wrapper_stencil_clk;
wire hw_input_global_wrapper_stencil_flush;
wire hw_input_global_wrapper_stencil_rst_n;
wire hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ren;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read [8:0];
wire hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire op_hcompute_conv1_stencil_clk;
wire [15:0] op_hcompute_conv1_stencil_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write [0:0];
wire op_hcompute_conv1_stencil_1_clk;
wire [15:0] op_hcompute_conv1_stencil_1_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read [0:0];
wire [15:0] op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read [8:0];
wire [15:0] op_hcompute_conv1_stencil_1_conv1_stencil_op_hcompute_conv1_stencil_1_write [0:0];
wire op_hcompute_conv1_stencil_1_exe_start_clk;
wire op_hcompute_conv1_stencil_1_exe_start_in;
wire op_hcompute_conv1_stencil_1_exe_start_out;
wire op_hcompute_conv1_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_conv1_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv1_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_clk;
wire op_hcompute_conv1_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_d [2:0];
wire op_hcompute_conv1_stencil_1_read_start;
wire op_hcompute_conv1_stencil_1_write_start;
wire op_hcompute_conv1_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_conv1_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv1_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_conv1_stencil_exe_start_clk;
wire op_hcompute_conv1_stencil_exe_start_in;
wire op_hcompute_conv1_stencil_exe_start_out;
wire op_hcompute_conv1_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_conv1_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv1_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_conv1_stencil_port_controller_clk;
wire op_hcompute_conv1_stencil_port_controller_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_d [2:0];
wire op_hcompute_conv1_stencil_read_start;
wire op_hcompute_conv1_stencil_write_start;
wire op_hcompute_conv1_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_conv1_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv1_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_clk;
wire [15:0] op_hcompute_conv2_stencil_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write [0:0];
wire op_hcompute_conv2_stencil_1_clk;
wire [15:0] op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read [8:0];
wire [15:0] op_hcompute_conv2_stencil_1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read [0:0];
wire [15:0] op_hcompute_conv2_stencil_1_conv2_stencil_op_hcompute_conv2_stencil_1_write [0:0];
wire op_hcompute_conv2_stencil_1_exe_start_clk;
wire op_hcompute_conv2_stencil_1_exe_start_in;
wire op_hcompute_conv2_stencil_1_exe_start_out;
wire op_hcompute_conv2_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_conv2_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv2_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_clk;
wire op_hcompute_conv2_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_d [2:0];
wire op_hcompute_conv2_stencil_1_read_start;
wire op_hcompute_conv2_stencil_1_write_start;
wire op_hcompute_conv2_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_conv2_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv2_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_exe_start_clk;
wire op_hcompute_conv2_stencil_exe_start_in;
wire op_hcompute_conv2_stencil_exe_start_out;
wire op_hcompute_conv2_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_conv2_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv2_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_port_controller_clk;
wire op_hcompute_conv2_stencil_port_controller_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_d [2:0];
wire op_hcompute_conv2_stencil_read_start;
wire op_hcompute_conv2_stencil_write_start;
wire op_hcompute_conv2_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_conv2_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv2_stencil_write_start_control_vars_out [2:0];
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
wire [15:0] op_hcompute_hw_output_stencil_conv2_stencil_op_hcompute_hw_output_stencil_read [0:0];
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
assign _U227_in = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
assign _U227_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U227 (
    .in(_U227_in),
    .clk(_U227_clk),
    .out(_U227_out)
);
assign conv1_stencil_clk = clk;
assign conv1_stencil_flush = flush;
assign conv1_stencil_rst_n = rst_n;
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_wen = op_hcompute_conv1_stencil_1_write_start;
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars[2] = op_hcompute_conv1_stencil_1_write_start_control_vars_out[2];
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars[1] = op_hcompute_conv1_stencil_1_write_start_control_vars_out[1];
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars[0] = op_hcompute_conv1_stencil_1_write_start_control_vars_out[0];
assign conv1_stencil_op_hcompute_conv1_stencil_1_write[0] = op_hcompute_conv1_stencil_1_conv1_stencil_op_hcompute_conv1_stencil_1_write[0];
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ren = op_hcompute_conv2_stencil_1_read_start;
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
conv1_stencil_ub conv1_stencil (
    .clk(conv1_stencil_clk),
    .flush(conv1_stencil_flush),
    .rst_n(conv1_stencil_rst_n),
    .op_hcompute_conv1_stencil_1_write_wen(conv1_stencil_op_hcompute_conv1_stencil_1_write_wen),
    .op_hcompute_conv1_stencil_1_write_ctrl_vars(conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars),
    .op_hcompute_conv1_stencil_1_write(conv1_stencil_op_hcompute_conv1_stencil_1_write),
    .op_hcompute_conv2_stencil_1_read_ren(conv1_stencil_op_hcompute_conv2_stencil_1_read_ren),
    .op_hcompute_conv2_stencil_1_read_ctrl_vars(conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars),
    .op_hcompute_conv2_stencil_1_read(conv1_stencil_op_hcompute_conv2_stencil_1_read)
);
assign conv1_stencil_clkwrk_dsa0_clk = clk;
assign conv1_stencil_clkwrk_dsa0_flush = flush;
assign conv1_stencil_clkwrk_dsa0_rst_n = rst_n;
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ren = op_hcompute_conv1_stencil_1_read_start;
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_wen = op_hcompute_conv1_stencil_write_start;
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars[2] = op_hcompute_conv1_stencil_write_start_control_vars_out[2];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars[1] = op_hcompute_conv1_stencil_write_start_control_vars_out[1];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars[0] = op_hcompute_conv1_stencil_write_start_control_vars_out[0];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write[0] = op_hcompute_conv1_stencil_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write[0];
conv1_stencil_clkwrk_dsa0_ub conv1_stencil_clkwrk_dsa0 (
    .clk(conv1_stencil_clkwrk_dsa0_clk),
    .flush(conv1_stencil_clkwrk_dsa0_flush),
    .rst_n(conv1_stencil_clkwrk_dsa0_rst_n),
    .op_hcompute_conv1_stencil_1_read_ren(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ren),
    .op_hcompute_conv1_stencil_1_read_ctrl_vars(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars),
    .op_hcompute_conv1_stencil_1_read(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read),
    .op_hcompute_conv1_stencil_write_wen(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_wen),
    .op_hcompute_conv1_stencil_write_ctrl_vars(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars),
    .op_hcompute_conv1_stencil_write(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write)
);
assign conv2_stencil_clk = clk;
assign conv2_stencil_flush = flush;
assign conv2_stencil_rst_n = rst_n;
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_wen = op_hcompute_conv2_stencil_1_write_start;
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars[2] = op_hcompute_conv2_stencil_1_write_start_control_vars_out[2];
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars[1] = op_hcompute_conv2_stencil_1_write_start_control_vars_out[1];
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars[0] = op_hcompute_conv2_stencil_1_write_start_control_vars_out[0];
assign conv2_stencil_op_hcompute_conv2_stencil_1_write[0] = op_hcompute_conv2_stencil_1_conv2_stencil_op_hcompute_conv2_stencil_1_write[0];
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
conv2_stencil_ub conv2_stencil (
    .clk(conv2_stencil_clk),
    .flush(conv2_stencil_flush),
    .rst_n(conv2_stencil_rst_n),
    .op_hcompute_conv2_stencil_1_write_wen(conv2_stencil_op_hcompute_conv2_stencil_1_write_wen),
    .op_hcompute_conv2_stencil_1_write_ctrl_vars(conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars),
    .op_hcompute_conv2_stencil_1_write(conv2_stencil_op_hcompute_conv2_stencil_1_write),
    .op_hcompute_hw_output_stencil_read_ren(conv2_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(conv2_stencil_op_hcompute_hw_output_stencil_read)
);
assign conv2_stencil_clkwrk_dsa1_clk = clk;
assign conv2_stencil_clkwrk_dsa1_flush = flush;
assign conv2_stencil_clkwrk_dsa1_rst_n = rst_n;
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ren = op_hcompute_conv2_stencil_1_read_start;
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_wen = op_hcompute_conv2_stencil_write_start;
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars[2] = op_hcompute_conv2_stencil_write_start_control_vars_out[2];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars[1] = op_hcompute_conv2_stencil_write_start_control_vars_out[1];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars[0] = op_hcompute_conv2_stencil_write_start_control_vars_out[0];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write[0] = op_hcompute_conv2_stencil_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write[0];
conv2_stencil_clkwrk_dsa1_ub conv2_stencil_clkwrk_dsa1 (
    .clk(conv2_stencil_clkwrk_dsa1_clk),
    .flush(conv2_stencil_clkwrk_dsa1_flush),
    .rst_n(conv2_stencil_clkwrk_dsa1_rst_n),
    .op_hcompute_conv2_stencil_1_read_ren(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ren),
    .op_hcompute_conv2_stencil_1_read_ctrl_vars(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars),
    .op_hcompute_conv2_stencil_1_read(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read),
    .op_hcompute_conv2_stencil_write_wen(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_wen),
    .op_hcompute_conv2_stencil_write_ctrl_vars(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars),
    .op_hcompute_conv2_stencil_write(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write)
);
assign hw_input_global_wrapper_stencil_clk = clk;
assign hw_input_global_wrapper_stencil_flush = flush;
assign hw_input_global_wrapper_stencil_rst_n = rst_n;
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ren = op_hcompute_conv1_stencil_1_read_start;
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen = op_hcompute_hw_input_global_wrapper_stencil_write_start;
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[2];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[1];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0];
hw_input_global_wrapper_stencil_ub hw_input_global_wrapper_stencil (
    .clk(hw_input_global_wrapper_stencil_clk),
    .flush(hw_input_global_wrapper_stencil_flush),
    .rst_n(hw_input_global_wrapper_stencil_rst_n),
    .op_hcompute_conv1_stencil_1_read_ren(hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ren),
    .op_hcompute_conv1_stencil_1_read_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars),
    .op_hcompute_conv1_stencil_1_read(hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read),
    .op_hcompute_hw_input_global_wrapper_stencil_write_wen(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen),
    .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_global_wrapper_stencil_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write)
);
assign op_hcompute_conv1_stencil_clk = clk;
cu_op_hcompute_conv1_stencil op_hcompute_conv1_stencil (
    .clk(op_hcompute_conv1_stencil_clk),
    .conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write(op_hcompute_conv1_stencil_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write)
);
assign op_hcompute_conv1_stencil_1_clk = clk;
assign op_hcompute_conv1_stencil_1_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read[0] = conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read[0];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[8] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[8];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[7] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[7];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[6] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[6];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[5] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[5];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[4] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[4];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[3] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[3];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[2] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[2];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[1] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[1];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[0] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[0];
cu_op_hcompute_conv1_stencil_1 op_hcompute_conv1_stencil_1 (
    .clk(op_hcompute_conv1_stencil_1_clk),
    .conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read(op_hcompute_conv1_stencil_1_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read),
    .hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read(op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read),
    .conv1_stencil_op_hcompute_conv1_stencil_1_write(op_hcompute_conv1_stencil_1_conv1_stencil_op_hcompute_conv1_stencil_1_write)
);
assign op_hcompute_conv1_stencil_1_exe_start_clk = clk;
assign op_hcompute_conv1_stencil_1_exe_start_in = op_hcompute_conv1_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv1_stencil_1_exe_start (
    .clk(op_hcompute_conv1_stencil_1_exe_start_clk),
    .in(op_hcompute_conv1_stencil_1_exe_start_in),
    .out(op_hcompute_conv1_stencil_1_exe_start_out)
);
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_in[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_in[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_in[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
array_delay_U71 op_hcompute_conv1_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_conv1_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_conv1_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_conv1_stencil_1_port_controller_clk = clk;
affine_controller__U50 op_hcompute_conv1_stencil_1_port_controller (
    .clk(op_hcompute_conv1_stencil_1_port_controller_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_d)
);
assign op_hcompute_conv1_stencil_1_read_start = op_hcompute_conv1_stencil_1_port_controller_valid;
assign op_hcompute_conv1_stencil_1_write_start = op_hcompute_conv1_stencil_1_exe_start_out;
assign op_hcompute_conv1_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_conv1_stencil_1_write_start_control_vars_in[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign op_hcompute_conv1_stencil_1_write_start_control_vars_in[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign op_hcompute_conv1_stencil_1_write_start_control_vars_in[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
array_delay_U67 op_hcompute_conv1_stencil_1_write_start_control_vars (
    .clk(op_hcompute_conv1_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_conv1_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_conv1_stencil_exe_start_clk = clk;
assign op_hcompute_conv1_stencil_exe_start_in = op_hcompute_conv1_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv1_stencil_exe_start (
    .clk(op_hcompute_conv1_stencil_exe_start_clk),
    .in(op_hcompute_conv1_stencil_exe_start_in),
    .out(op_hcompute_conv1_stencil_exe_start_out)
);
assign op_hcompute_conv1_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_conv1_stencil_exe_start_control_vars_in[2] = op_hcompute_conv1_stencil_port_controller_d[2];
assign op_hcompute_conv1_stencil_exe_start_control_vars_in[1] = op_hcompute_conv1_stencil_port_controller_d[1];
assign op_hcompute_conv1_stencil_exe_start_control_vars_in[0] = op_hcompute_conv1_stencil_port_controller_d[0];
array_delay_U46 op_hcompute_conv1_stencil_exe_start_control_vars (
    .clk(op_hcompute_conv1_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_conv1_stencil_exe_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_exe_start_control_vars_out)
);
assign op_hcompute_conv1_stencil_port_controller_clk = clk;
affine_controller__U25 op_hcompute_conv1_stencil_port_controller (
    .clk(op_hcompute_conv1_stencil_port_controller_clk),
    .valid(op_hcompute_conv1_stencil_port_controller_valid),
    .d(op_hcompute_conv1_stencil_port_controller_d)
);
assign op_hcompute_conv1_stencil_read_start = op_hcompute_conv1_stencil_port_controller_valid;
assign op_hcompute_conv1_stencil_write_start = op_hcompute_conv1_stencil_exe_start_out;
assign op_hcompute_conv1_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_conv1_stencil_write_start_control_vars_in[2] = op_hcompute_conv1_stencil_port_controller_d[2];
assign op_hcompute_conv1_stencil_write_start_control_vars_in[1] = op_hcompute_conv1_stencil_port_controller_d[1];
assign op_hcompute_conv1_stencil_write_start_control_vars_in[0] = op_hcompute_conv1_stencil_port_controller_d[0];
array_delay_U42 op_hcompute_conv1_stencil_write_start_control_vars (
    .clk(op_hcompute_conv1_stencil_write_start_control_vars_clk),
    .in(op_hcompute_conv1_stencil_write_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_write_start_control_vars_out)
);
assign op_hcompute_conv2_stencil_clk = clk;
cu_op_hcompute_conv2_stencil op_hcompute_conv2_stencil (
    .clk(op_hcompute_conv2_stencil_clk),
    .conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write(op_hcompute_conv2_stencil_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write)
);
assign op_hcompute_conv2_stencil_1_clk = clk;
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[8] = conv1_stencil_op_hcompute_conv2_stencil_1_read[8];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[7] = conv1_stencil_op_hcompute_conv2_stencil_1_read[7];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[6] = conv1_stencil_op_hcompute_conv2_stencil_1_read[6];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[5] = conv1_stencil_op_hcompute_conv2_stencil_1_read[5];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[4] = conv1_stencil_op_hcompute_conv2_stencil_1_read[4];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[3] = conv1_stencil_op_hcompute_conv2_stencil_1_read[3];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[2] = conv1_stencil_op_hcompute_conv2_stencil_1_read[2];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[1] = conv1_stencil_op_hcompute_conv2_stencil_1_read[1];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[0] = conv1_stencil_op_hcompute_conv2_stencil_1_read[0];
assign op_hcompute_conv2_stencil_1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read[0] = conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read[0];
cu_op_hcompute_conv2_stencil_1 op_hcompute_conv2_stencil_1 (
    .clk(op_hcompute_conv2_stencil_1_clk),
    .conv1_stencil_op_hcompute_conv2_stencil_1_read(op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read),
    .conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read(op_hcompute_conv2_stencil_1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read),
    .conv2_stencil_op_hcompute_conv2_stencil_1_write(op_hcompute_conv2_stencil_1_conv2_stencil_op_hcompute_conv2_stencil_1_write)
);
assign op_hcompute_conv2_stencil_1_exe_start_clk = clk;
assign op_hcompute_conv2_stencil_1_exe_start_in = op_hcompute_conv2_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv2_stencil_1_exe_start (
    .clk(op_hcompute_conv2_stencil_1_exe_start_clk),
    .in(op_hcompute_conv2_stencil_1_exe_start_in),
    .out(op_hcompute_conv2_stencil_1_exe_start_out)
);
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_in[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_in[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_in[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
array_delay_U121 op_hcompute_conv2_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_conv2_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_conv2_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_conv2_stencil_1_port_controller_clk = clk;
affine_controller__U100 op_hcompute_conv2_stencil_1_port_controller (
    .clk(op_hcompute_conv2_stencil_1_port_controller_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_d)
);
assign op_hcompute_conv2_stencil_1_read_start = op_hcompute_conv2_stencil_1_port_controller_valid;
assign op_hcompute_conv2_stencil_1_write_start = op_hcompute_conv2_stencil_1_exe_start_out;
assign op_hcompute_conv2_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_conv2_stencil_1_write_start_control_vars_in[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign op_hcompute_conv2_stencil_1_write_start_control_vars_in[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign op_hcompute_conv2_stencil_1_write_start_control_vars_in[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
array_delay_U117 op_hcompute_conv2_stencil_1_write_start_control_vars (
    .clk(op_hcompute_conv2_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_conv2_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_conv2_stencil_exe_start_clk = clk;
assign op_hcompute_conv2_stencil_exe_start_in = op_hcompute_conv2_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv2_stencil_exe_start (
    .clk(op_hcompute_conv2_stencil_exe_start_clk),
    .in(op_hcompute_conv2_stencil_exe_start_in),
    .out(op_hcompute_conv2_stencil_exe_start_out)
);
assign op_hcompute_conv2_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_conv2_stencil_exe_start_control_vars_in[2] = op_hcompute_conv2_stencil_port_controller_d[2];
assign op_hcompute_conv2_stencil_exe_start_control_vars_in[1] = op_hcompute_conv2_stencil_port_controller_d[1];
assign op_hcompute_conv2_stencil_exe_start_control_vars_in[0] = op_hcompute_conv2_stencil_port_controller_d[0];
array_delay_U96 op_hcompute_conv2_stencil_exe_start_control_vars (
    .clk(op_hcompute_conv2_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_conv2_stencil_exe_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_exe_start_control_vars_out)
);
assign op_hcompute_conv2_stencil_port_controller_clk = clk;
affine_controller__U75 op_hcompute_conv2_stencil_port_controller (
    .clk(op_hcompute_conv2_stencil_port_controller_clk),
    .valid(op_hcompute_conv2_stencil_port_controller_valid),
    .d(op_hcompute_conv2_stencil_port_controller_d)
);
assign op_hcompute_conv2_stencil_read_start = op_hcompute_conv2_stencil_port_controller_valid;
assign op_hcompute_conv2_stencil_write_start = op_hcompute_conv2_stencil_exe_start_out;
assign op_hcompute_conv2_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_conv2_stencil_write_start_control_vars_in[2] = op_hcompute_conv2_stencil_port_controller_d[2];
assign op_hcompute_conv2_stencil_write_start_control_vars_in[1] = op_hcompute_conv2_stencil_port_controller_d[1];
assign op_hcompute_conv2_stencil_write_start_control_vars_in[0] = op_hcompute_conv2_stencil_port_controller_d[0];
array_delay_U92 op_hcompute_conv2_stencil_write_start_control_vars (
    .clk(op_hcompute_conv2_stencil_write_start_control_vars_clk),
    .in(op_hcompute_conv2_stencil_write_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] = _U227_out;
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
assign op_hcompute_hw_output_stencil_conv2_stencil_op_hcompute_hw_output_stencil_read[0] = conv2_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .conv2_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_conv2_stencil_op_hcompute_hw_output_stencil_read),
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
array_delay_U146 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U125 op_hcompute_hw_output_stencil_port_controller (
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
array_delay_U142 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid = op_hcompute_hw_input_global_wrapper_stencil_read_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
endmodule

