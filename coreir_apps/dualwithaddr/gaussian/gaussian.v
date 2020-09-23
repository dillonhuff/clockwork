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

module delay__U173 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U174_in;
wire _U174_clk;
wire [15:0] _U174_out;
wire [15:0] _U175_in;
wire _U175_clk;
wire [15:0] _U175_out;
wire [15:0] _U176_in;
wire _U176_clk;
wire [15:0] _U176_out;
wire [15:0] _U177_in;
wire _U177_clk;
wire [15:0] _U177_out;
wire [15:0] _U178_in;
wire _U178_clk;
wire [15:0] _U178_out;
wire [15:0] _U179_in;
wire _U179_clk;
wire [15:0] _U179_out;
wire [15:0] _U180_in;
wire _U180_clk;
wire [15:0] _U180_out;
wire [15:0] _U181_in;
wire _U181_clk;
wire [15:0] _U181_out;
wire [15:0] _U182_in;
wire _U182_clk;
wire [15:0] _U182_out;
wire [15:0] _U183_in;
wire _U183_clk;
wire [15:0] _U183_out;
wire [15:0] _U184_in;
wire _U184_clk;
wire [15:0] _U184_out;
wire [15:0] _U185_in;
wire _U185_clk;
wire [15:0] _U185_out;
wire [15:0] _U186_in;
wire _U186_clk;
wire [15:0] _U186_out;
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
wire [15:0] _U190_out;
wire [15:0] _U191_in;
wire _U191_clk;
wire [15:0] _U191_out;
wire [15:0] _U192_in;
wire _U192_clk;
wire [15:0] _U192_out;
wire [15:0] _U193_in;
wire _U193_clk;
wire [15:0] _U193_out;
wire [15:0] _U194_in;
wire _U194_clk;
wire [15:0] _U194_out;
wire [15:0] _U195_in;
wire _U195_clk;
wire [15:0] _U195_out;
wire [15:0] _U196_in;
wire _U196_clk;
wire [15:0] _U196_out;
wire [15:0] _U197_in;
wire _U197_clk;
wire [15:0] _U197_out;
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
wire [15:0] _U203_out;
wire [15:0] _U204_in;
wire _U204_clk;
wire [15:0] _U204_out;
wire [15:0] _U205_in;
wire _U205_clk;
wire [15:0] _U205_out;
wire [15:0] _U206_in;
wire _U206_clk;
wire [15:0] _U206_out;
wire [15:0] _U207_in;
wire _U207_clk;
wire [15:0] _U207_out;
wire [15:0] _U208_in;
wire _U208_clk;
wire [15:0] _U208_out;
wire [15:0] _U209_in;
wire _U209_clk;
wire [15:0] _U209_out;
wire [15:0] _U210_in;
wire _U210_clk;
wire [15:0] _U210_out;
wire [15:0] _U211_in;
wire _U211_clk;
wire [15:0] _U211_out;
wire [15:0] _U212_in;
wire _U212_clk;
wire [15:0] _U212_out;
wire [15:0] _U213_in;
wire _U213_clk;
wire [15:0] _U213_out;
wire [15:0] _U214_in;
wire _U214_clk;
wire [15:0] _U214_out;
wire [15:0] _U215_in;
wire _U215_clk;
wire [15:0] _U215_out;
wire [15:0] _U216_in;
wire _U216_clk;
wire [15:0] _U216_out;
wire [15:0] _U217_in;
wire _U217_clk;
wire [15:0] _U217_out;
wire [15:0] _U218_in;
wire _U218_clk;
wire [15:0] _U218_out;
wire [15:0] _U219_in;
wire _U219_clk;
wire [15:0] _U219_out;
wire [15:0] _U220_in;
wire _U220_clk;
wire [15:0] _U220_out;
wire [15:0] _U221_in;
wire _U221_clk;
wire [15:0] _U221_out;
wire [15:0] _U222_in;
wire _U222_clk;
wire [15:0] _U222_out;
wire [15:0] _U223_in;
wire _U223_clk;
wire [15:0] _U223_out;
wire [15:0] _U224_in;
wire _U224_clk;
wire [15:0] _U224_out;
wire [15:0] _U225_in;
wire _U225_clk;
wire [15:0] _U225_out;
wire [15:0] _U226_in;
wire _U226_clk;
wire [15:0] _U226_out;
wire [15:0] _U227_in;
wire _U227_clk;
wire [15:0] _U227_out;
wire [15:0] _U228_in;
wire _U228_clk;
wire [15:0] _U228_out;
wire [15:0] _U229_in;
wire _U229_clk;
wire [15:0] _U229_out;
wire [15:0] _U230_in;
wire _U230_clk;
wire [15:0] _U230_out;
wire [15:0] _U231_in;
wire _U231_clk;
wire [15:0] _U231_out;
wire [15:0] _U232_in;
wire _U232_clk;
wire [15:0] _U232_out;
wire [15:0] _U233_in;
wire _U233_clk;
wire [15:0] _U233_out;
wire [15:0] _U234_in;
wire _U234_clk;
wire [15:0] _U234_out;
wire [15:0] _U235_in;
wire _U235_clk;
assign _U174_in = wdata;
assign _U174_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U174 (
    .in(_U174_in),
    .clk(_U174_clk),
    .out(_U174_out)
);
assign _U175_in = _U174_out;
assign _U175_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U175 (
    .in(_U175_in),
    .clk(_U175_clk),
    .out(_U175_out)
);
assign _U176_in = _U175_out;
assign _U176_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U176 (
    .in(_U176_in),
    .clk(_U176_clk),
    .out(_U176_out)
);
assign _U177_in = _U176_out;
assign _U177_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U177 (
    .in(_U177_in),
    .clk(_U177_clk),
    .out(_U177_out)
);
assign _U178_in = _U177_out;
assign _U178_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U178 (
    .in(_U178_in),
    .clk(_U178_clk),
    .out(_U178_out)
);
assign _U179_in = _U178_out;
assign _U179_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U179 (
    .in(_U179_in),
    .clk(_U179_clk),
    .out(_U179_out)
);
assign _U180_in = _U179_out;
assign _U180_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U180 (
    .in(_U180_in),
    .clk(_U180_clk),
    .out(_U180_out)
);
assign _U181_in = _U180_out;
assign _U181_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U181 (
    .in(_U181_in),
    .clk(_U181_clk),
    .out(_U181_out)
);
assign _U182_in = _U181_out;
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
    .out(_U184_out)
);
assign _U185_in = _U184_out;
assign _U185_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U185 (
    .in(_U185_in),
    .clk(_U185_clk),
    .out(_U185_out)
);
assign _U186_in = _U185_out;
assign _U186_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U186 (
    .in(_U186_in),
    .clk(_U186_clk),
    .out(_U186_out)
);
assign _U187_in = _U186_out;
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
    .out(_U190_out)
);
assign _U191_in = _U190_out;
assign _U191_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U191 (
    .in(_U191_in),
    .clk(_U191_clk),
    .out(_U191_out)
);
assign _U192_in = _U191_out;
assign _U192_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U192 (
    .in(_U192_in),
    .clk(_U192_clk),
    .out(_U192_out)
);
assign _U193_in = _U192_out;
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
    .out(_U195_out)
);
assign _U196_in = _U195_out;
assign _U196_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U196 (
    .in(_U196_in),
    .clk(_U196_clk),
    .out(_U196_out)
);
assign _U197_in = _U196_out;
assign _U197_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U197 (
    .in(_U197_in),
    .clk(_U197_clk),
    .out(_U197_out)
);
assign _U198_in = _U197_out;
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
    .out(_U203_out)
);
assign _U204_in = _U203_out;
assign _U204_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U204 (
    .in(_U204_in),
    .clk(_U204_clk),
    .out(_U204_out)
);
assign _U205_in = _U204_out;
assign _U205_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U205 (
    .in(_U205_in),
    .clk(_U205_clk),
    .out(_U205_out)
);
assign _U206_in = _U205_out;
assign _U206_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U206 (
    .in(_U206_in),
    .clk(_U206_clk),
    .out(_U206_out)
);
assign _U207_in = _U206_out;
assign _U207_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U207 (
    .in(_U207_in),
    .clk(_U207_clk),
    .out(_U207_out)
);
assign _U208_in = _U207_out;
assign _U208_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U208 (
    .in(_U208_in),
    .clk(_U208_clk),
    .out(_U208_out)
);
assign _U209_in = _U208_out;
assign _U209_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U209 (
    .in(_U209_in),
    .clk(_U209_clk),
    .out(_U209_out)
);
assign _U210_in = _U209_out;
assign _U210_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U210 (
    .in(_U210_in),
    .clk(_U210_clk),
    .out(_U210_out)
);
assign _U211_in = _U210_out;
assign _U211_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U211 (
    .in(_U211_in),
    .clk(_U211_clk),
    .out(_U211_out)
);
assign _U212_in = _U211_out;
assign _U212_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U212 (
    .in(_U212_in),
    .clk(_U212_clk),
    .out(_U212_out)
);
assign _U213_in = _U212_out;
assign _U213_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U213 (
    .in(_U213_in),
    .clk(_U213_clk),
    .out(_U213_out)
);
assign _U214_in = _U213_out;
assign _U214_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U214 (
    .in(_U214_in),
    .clk(_U214_clk),
    .out(_U214_out)
);
assign _U215_in = _U214_out;
assign _U215_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U215 (
    .in(_U215_in),
    .clk(_U215_clk),
    .out(_U215_out)
);
assign _U216_in = _U215_out;
assign _U216_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U216 (
    .in(_U216_in),
    .clk(_U216_clk),
    .out(_U216_out)
);
assign _U217_in = _U216_out;
assign _U217_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U217 (
    .in(_U217_in),
    .clk(_U217_clk),
    .out(_U217_out)
);
assign _U218_in = _U217_out;
assign _U218_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U218 (
    .in(_U218_in),
    .clk(_U218_clk),
    .out(_U218_out)
);
assign _U219_in = _U218_out;
assign _U219_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U219 (
    .in(_U219_in),
    .clk(_U219_clk),
    .out(_U219_out)
);
assign _U220_in = _U219_out;
assign _U220_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U220 (
    .in(_U220_in),
    .clk(_U220_clk),
    .out(_U220_out)
);
assign _U221_in = _U220_out;
assign _U221_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U221 (
    .in(_U221_in),
    .clk(_U221_clk),
    .out(_U221_out)
);
assign _U222_in = _U221_out;
assign _U222_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U222 (
    .in(_U222_in),
    .clk(_U222_clk),
    .out(_U222_out)
);
assign _U223_in = _U222_out;
assign _U223_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U223 (
    .in(_U223_in),
    .clk(_U223_clk),
    .out(_U223_out)
);
assign _U224_in = _U223_out;
assign _U224_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U224 (
    .in(_U224_in),
    .clk(_U224_clk),
    .out(_U224_out)
);
assign _U225_in = _U224_out;
assign _U225_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U225 (
    .in(_U225_in),
    .clk(_U225_clk),
    .out(_U225_out)
);
assign _U226_in = _U225_out;
assign _U226_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U226 (
    .in(_U226_in),
    .clk(_U226_clk),
    .out(_U226_out)
);
assign _U227_in = _U226_out;
assign _U227_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U227 (
    .in(_U227_in),
    .clk(_U227_clk),
    .out(_U227_out)
);
assign _U228_in = _U227_out;
assign _U228_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U228 (
    .in(_U228_in),
    .clk(_U228_clk),
    .out(_U228_out)
);
assign _U229_in = _U228_out;
assign _U229_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U229 (
    .in(_U229_in),
    .clk(_U229_clk),
    .out(_U229_out)
);
assign _U230_in = _U229_out;
assign _U230_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U230 (
    .in(_U230_in),
    .clk(_U230_clk),
    .out(_U230_out)
);
assign _U231_in = _U230_out;
assign _U231_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U231 (
    .in(_U231_in),
    .clk(_U231_clk),
    .out(_U231_out)
);
assign _U232_in = _U231_out;
assign _U232_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U232 (
    .in(_U232_in),
    .clk(_U232_clk),
    .out(_U232_out)
);
assign _U233_in = _U232_out;
assign _U233_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U233 (
    .in(_U233_in),
    .clk(_U233_clk),
    .out(_U233_out)
);
assign _U234_in = _U233_out;
assign _U234_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U234 (
    .in(_U234_in),
    .clk(_U234_clk),
    .out(_U234_out)
);
assign _U235_in = _U234_out;
assign _U235_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U235 (
    .in(_U235_in),
    .clk(_U235_clk),
    .out(rdata)
);
endmodule

module delay_tile__delay62 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire delay_mod_clk;
wire delay_mod_rst_n;
wire delay_mod_flush;
wire [15:0] delay_mod_wdata;
assign delay_mod_clk = clk;
assign delay_mod_rst_n = rst_n;
assign delay_mod_flush = flush;
assign delay_mod_wdata = wdata;
delay__U173 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U164 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U156 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module delay__U169 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U170_in;
wire _U170_clk;
assign _U170_in = wdata;
assign _U170_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U170 (
    .in(_U170_in),
    .clk(_U170_clk),
    .out(rdata)
);
endmodule

module delay__U166 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U167_in;
wire _U167_clk;
assign _U167_in = wdata;
assign _U167_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U167 (
    .in(_U167_in),
    .clk(_U167_clk),
    .out(rdata)
);
endmodule

module delay__U161 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U162_in;
wire _U162_clk;
assign _U162_in = wdata;
assign _U162_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U162 (
    .in(_U162_in),
    .clk(_U162_clk),
    .out(rdata)
);
endmodule

module delay__U158 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U159_in;
wire _U159_clk;
assign _U159_in = wdata;
assign _U159_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U159 (
    .in(_U159_in),
    .clk(_U159_clk),
    .out(rdata)
);
endmodule

module delay__U153 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U154_in;
wire _U154_clk;
assign _U154_in = wdata;
assign _U154_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U154 (
    .in(_U154_in),
    .clk(_U154_clk),
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
assign _U151_in = wdata;
assign _U151_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U151 (
    .in(_U151_in),
    .clk(_U151_clk),
    .out(rdata)
);
endmodule

module delay__U142 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
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
wire [15:0] _U146_in;
wire _U146_clk;
wire [15:0] _U146_out;
wire [15:0] _U147_in;
wire _U147_clk;
wire [15:0] _U147_out;
wire [15:0] _U148_in;
wire _U148_clk;
assign _U143_in = wdata;
assign _U143_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U143 (
    .in(_U143_in),
    .clk(_U143_clk),
    .out(_U143_out)
);
assign _U144_in = _U143_out;
assign _U144_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U144 (
    .in(_U144_in),
    .clk(_U144_clk),
    .out(_U144_out)
);
assign _U145_in = _U144_out;
assign _U145_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U145 (
    .in(_U145_in),
    .clk(_U145_clk),
    .out(_U145_out)
);
assign _U146_in = _U145_out;
assign _U146_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U146 (
    .in(_U146_in),
    .clk(_U146_clk),
    .out(_U146_out)
);
assign _U147_in = _U146_out;
assign _U147_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U147 (
    .in(_U147_in),
    .clk(_U147_clk),
    .out(_U147_out)
);
assign _U148_in = _U147_out;
assign _U148_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U148 (
    .in(_U148_in),
    .clk(_U148_clk),
    .out(rdata)
);
endmodule

module hw_input_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_blur_unnormalized_stencil_1_read_ren,
    input [15:0] op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_blur_unnormalized_stencil_1_read [8:0],
    input op_hcompute_hw_input_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_hw_input_stencil_write [0:0]
);
wire delay_sr_U149_clk;
wire [15:0] delay_sr_U149_wdata;
wire [15:0] delay_sr_U149_rdata;
wire delay_sr_U149_rst_n;
wire delay_sr_U149_flush;
wire delay_sr_U152_clk;
wire [15:0] delay_sr_U152_wdata;
wire [15:0] delay_sr_U152_rdata;
wire delay_sr_U152_rst_n;
wire delay_sr_U152_flush;
wire delay_sr_U155_clk;
wire [15:0] delay_sr_U155_wdata;
wire [15:0] delay_sr_U155_rdata;
wire delay_sr_U155_rst_n;
wire delay_sr_U155_flush;
wire delay_sr_U157_clk;
wire [15:0] delay_sr_U157_wdata;
wire [15:0] delay_sr_U157_rdata;
wire delay_sr_U157_rst_n;
wire delay_sr_U157_flush;
wire delay_sr_U160_clk;
wire [15:0] delay_sr_U160_wdata;
wire [15:0] delay_sr_U160_rdata;
wire delay_sr_U160_rst_n;
wire delay_sr_U160_flush;
wire delay_sr_U163_clk;
wire [15:0] delay_sr_U163_wdata;
wire [15:0] delay_sr_U163_rdata;
wire delay_sr_U163_rst_n;
wire delay_sr_U163_flush;
wire delay_sr_U165_clk;
wire [15:0] delay_sr_U165_wdata;
wire [15:0] delay_sr_U165_rdata;
wire delay_sr_U165_rst_n;
wire delay_sr_U165_flush;
wire delay_sr_U168_clk;
wire [15:0] delay_sr_U168_wdata;
wire [15:0] delay_sr_U168_rdata;
wire delay_sr_U168_rst_n;
wire delay_sr_U168_flush;
wire delay_sr_U171_clk;
wire [15:0] delay_sr_U171_wdata;
wire [15:0] delay_sr_U171_rdata;
wire delay_sr_U171_rst_n;
wire delay_sr_U171_flush;
assign delay_sr_U149_clk = clk;
assign delay_sr_U149_wdata = op_hcompute_hw_input_stencil_write[0];
assign delay_sr_U149_rst_n = rst_n;
assign delay_sr_U149_flush = flush;
delay__U142 delay_sr_U149 (
    .clk(delay_sr_U149_clk),
    .wdata(delay_sr_U149_wdata),
    .rdata(delay_sr_U149_rdata),
    .rst_n(delay_sr_U149_rst_n),
    .flush(delay_sr_U149_flush)
);
assign delay_sr_U152_clk = clk;
assign delay_sr_U152_wdata = delay_sr_U149_rdata;
assign delay_sr_U152_rst_n = rst_n;
assign delay_sr_U152_flush = flush;
delay__U150 delay_sr_U152 (
    .clk(delay_sr_U152_clk),
    .wdata(delay_sr_U152_wdata),
    .rdata(delay_sr_U152_rdata),
    .rst_n(delay_sr_U152_rst_n),
    .flush(delay_sr_U152_flush)
);
assign delay_sr_U155_clk = clk;
assign delay_sr_U155_wdata = delay_sr_U152_rdata;
assign delay_sr_U155_rst_n = rst_n;
assign delay_sr_U155_flush = flush;
delay__U153 delay_sr_U155 (
    .clk(delay_sr_U155_clk),
    .wdata(delay_sr_U155_wdata),
    .rdata(delay_sr_U155_rdata),
    .rst_n(delay_sr_U155_rst_n),
    .flush(delay_sr_U155_flush)
);
assign delay_sr_U157_clk = clk;
assign delay_sr_U157_wdata = delay_sr_U155_rdata;
assign delay_sr_U157_rst_n = rst_n;
assign delay_sr_U157_flush = flush;
memtile_long_delay__U156 delay_sr_U157 (
    .clk(delay_sr_U157_clk),
    .wdata(delay_sr_U157_wdata),
    .rdata(delay_sr_U157_rdata),
    .rst_n(delay_sr_U157_rst_n),
    .flush(delay_sr_U157_flush)
);
assign delay_sr_U160_clk = clk;
assign delay_sr_U160_wdata = delay_sr_U157_rdata;
assign delay_sr_U160_rst_n = rst_n;
assign delay_sr_U160_flush = flush;
delay__U158 delay_sr_U160 (
    .clk(delay_sr_U160_clk),
    .wdata(delay_sr_U160_wdata),
    .rdata(delay_sr_U160_rdata),
    .rst_n(delay_sr_U160_rst_n),
    .flush(delay_sr_U160_flush)
);
assign delay_sr_U163_clk = clk;
assign delay_sr_U163_wdata = delay_sr_U160_rdata;
assign delay_sr_U163_rst_n = rst_n;
assign delay_sr_U163_flush = flush;
delay__U161 delay_sr_U163 (
    .clk(delay_sr_U163_clk),
    .wdata(delay_sr_U163_wdata),
    .rdata(delay_sr_U163_rdata),
    .rst_n(delay_sr_U163_rst_n),
    .flush(delay_sr_U163_flush)
);
assign delay_sr_U165_clk = clk;
assign delay_sr_U165_wdata = delay_sr_U163_rdata;
assign delay_sr_U165_rst_n = rst_n;
assign delay_sr_U165_flush = flush;
memtile_long_delay__U164 delay_sr_U165 (
    .clk(delay_sr_U165_clk),
    .wdata(delay_sr_U165_wdata),
    .rdata(delay_sr_U165_rdata),
    .rst_n(delay_sr_U165_rst_n),
    .flush(delay_sr_U165_flush)
);
assign delay_sr_U168_clk = clk;
assign delay_sr_U168_wdata = delay_sr_U165_rdata;
assign delay_sr_U168_rst_n = rst_n;
assign delay_sr_U168_flush = flush;
delay__U166 delay_sr_U168 (
    .clk(delay_sr_U168_clk),
    .wdata(delay_sr_U168_wdata),
    .rdata(delay_sr_U168_rdata),
    .rst_n(delay_sr_U168_rst_n),
    .flush(delay_sr_U168_flush)
);
assign delay_sr_U171_clk = clk;
assign delay_sr_U171_wdata = delay_sr_U168_rdata;
assign delay_sr_U171_rst_n = rst_n;
assign delay_sr_U171_flush = flush;
delay__U169 delay_sr_U171 (
    .clk(delay_sr_U171_clk),
    .wdata(delay_sr_U171_wdata),
    .rdata(delay_sr_U171_rdata),
    .rst_n(delay_sr_U171_rst_n),
    .flush(delay_sr_U171_flush)
);
assign op_hcompute_blur_unnormalized_stencil_1_read[8] = delay_sr_U152_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[7] = delay_sr_U149_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[6] = delay_sr_U155_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[5] = delay_sr_U157_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[4] = delay_sr_U160_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[3] = delay_sr_U163_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[2] = delay_sr_U165_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[1] = delay_sr_U168_rdata;
assign op_hcompute_blur_unnormalized_stencil_1_read[0] = delay_sr_U171_rdata;
endmodule

module delay__U137 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U138_in;
wire _U138_clk;
wire [15:0] _U138_out;
wire [15:0] _U139_in;
wire _U139_clk;
wire [15:0] _U139_out;
wire [15:0] _U140_in;
wire _U140_clk;
assign _U138_in = wdata;
assign _U138_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U138 (
    .in(_U138_in),
    .clk(_U138_clk),
    .out(_U138_out)
);
assign _U139_in = _U138_out;
assign _U139_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U139 (
    .in(_U139_in),
    .clk(_U139_clk),
    .out(_U139_out)
);
assign _U140_in = _U139_out;
assign _U140_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U140 (
    .in(_U140_in),
    .clk(_U140_clk),
    .out(rdata)
);
endmodule

module delay__U131 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U132_in;
wire _U132_clk;
wire [15:0] _U132_out;
wire [15:0] _U133_in;
wire _U133_clk;
wire [15:0] _U133_out;
wire [15:0] _U134_in;
wire _U134_clk;
wire [15:0] _U134_out;
wire [15:0] _U135_in;
wire _U135_clk;
assign _U132_in = wdata;
assign _U132_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U132 (
    .in(_U132_in),
    .clk(_U132_clk),
    .out(_U132_out)
);
assign _U133_in = _U132_out;
assign _U133_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U133 (
    .in(_U133_in),
    .clk(_U133_clk),
    .out(_U133_out)
);
assign _U134_in = _U133_out;
assign _U134_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U134 (
    .in(_U134_in),
    .clk(_U134_clk),
    .out(_U134_out)
);
assign _U135_in = _U134_out;
assign _U135_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U135 (
    .in(_U135_in),
    .clk(_U135_clk),
    .out(rdata)
);
endmodule

module delay__U125 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U126_in;
wire _U126_clk;
wire [15:0] _U126_out;
wire [15:0] _U127_in;
wire _U127_clk;
wire [15:0] _U127_out;
wire [15:0] _U128_in;
wire _U128_clk;
wire [15:0] _U128_out;
wire [15:0] _U129_in;
wire _U129_clk;
assign _U126_in = wdata;
assign _U126_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U126 (
    .in(_U126_in),
    .clk(_U126_clk),
    .out(_U126_out)
);
assign _U127_in = _U126_out;
assign _U127_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U127 (
    .in(_U127_in),
    .clk(_U127_clk),
    .out(_U127_out)
);
assign _U128_in = _U127_out;
assign _U128_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U128 (
    .in(_U128_in),
    .clk(_U128_clk),
    .out(_U128_out)
);
assign _U129_in = _U128_out;
assign _U129_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U129 (
    .in(_U129_in),
    .clk(_U129_clk),
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

module blur_unnormalized_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_blur_stencil_read_ren,
    input [15:0] op_hcompute_blur_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_blur_stencil_read [0:0],
    input op_hcompute_blur_unnormalized_stencil_1_write_wen,
    input [15:0] op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_blur_unnormalized_stencil_1_write [0:0]
);
wire delay_sr_U136_clk;
wire [15:0] delay_sr_U136_wdata;
wire [15:0] delay_sr_U136_rdata;
wire delay_sr_U136_rst_n;
wire delay_sr_U136_flush;
assign delay_sr_U136_clk = clk;
assign delay_sr_U136_wdata = op_hcompute_blur_unnormalized_stencil_1_write[0];
assign delay_sr_U136_rst_n = rst_n;
assign delay_sr_U136_flush = flush;
delay__U131 delay_sr_U136 (
    .clk(delay_sr_U136_clk),
    .wdata(delay_sr_U136_wdata),
    .rdata(delay_sr_U136_rdata),
    .rst_n(delay_sr_U136_rst_n),
    .flush(delay_sr_U136_flush)
);
assign op_hcompute_blur_stencil_read[0] = delay_sr_U136_rdata;
endmodule

module blur_unnormalized_stencil_clkwrk_dsa0_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_blur_unnormalized_stencil_1_read_ren,
    input [15:0] op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_blur_unnormalized_stencil_1_read [0:0],
    input op_hcompute_blur_unnormalized_stencil_write_wen,
    input [15:0] op_hcompute_blur_unnormalized_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_blur_unnormalized_stencil_write [0:0]
);
wire delay_sr_U141_clk;
wire [15:0] delay_sr_U141_wdata;
wire [15:0] delay_sr_U141_rdata;
wire delay_sr_U141_rst_n;
wire delay_sr_U141_flush;
assign delay_sr_U141_clk = clk;
assign delay_sr_U141_wdata = op_hcompute_blur_unnormalized_stencil_write[0];
assign delay_sr_U141_rst_n = rst_n;
assign delay_sr_U141_flush = flush;
delay__U137 delay_sr_U141 (
    .clk(delay_sr_U141_clk),
    .wdata(delay_sr_U141_wdata),
    .rdata(delay_sr_U141_rdata),
    .rst_n(delay_sr_U141_rst_n),
    .flush(delay_sr_U141_flush)
);
assign op_hcompute_blur_unnormalized_stencil_1_read[0] = delay_sr_U141_rdata;
endmodule

module blur_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_blur_stencil_write_wen,
    input [15:0] op_hcompute_blur_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_blur_stencil_write [0:0],
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
wire delay_sr_U130_clk;
wire [15:0] delay_sr_U130_wdata;
wire [15:0] delay_sr_U130_rdata;
wire delay_sr_U130_rst_n;
wire delay_sr_U130_flush;
assign delay_sr_U130_clk = clk;
assign delay_sr_U130_wdata = op_hcompute_blur_stencil_write[0];
assign delay_sr_U130_rst_n = rst_n;
assign delay_sr_U130_flush = flush;
delay__U125 delay_sr_U130 (
    .clk(delay_sr_U130_clk),
    .wdata(delay_sr_U130_wdata),
    .rdata(delay_sr_U130_rdata),
    .rst_n(delay_sr_U130_rst_n),
    .flush(delay_sr_U130_flush)
);
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U130_rdata;
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
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008d);
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

module aff__U101 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0091);
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

module gaussian (
    input clk,
    input rst_n,
    input flush,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    output input_copy_stencil_op_hcompute_hw_input_stencil_read_valid,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0]
);
wire [15:0] _U172_in;
wire _U172_clk;
wire [15:0] _U172_out;
wire blur_stencil_clk;
wire blur_stencil_flush;
wire blur_stencil_rst_n;
wire blur_stencil_op_hcompute_blur_stencil_write_wen;
wire [15:0] blur_stencil_op_hcompute_blur_stencil_write_ctrl_vars [2:0];
wire [15:0] blur_stencil_op_hcompute_blur_stencil_write [0:0];
wire blur_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] blur_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] blur_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire blur_unnormalized_stencil_clk;
wire blur_unnormalized_stencil_flush;
wire blur_unnormalized_stencil_rst_n;
wire blur_unnormalized_stencil_op_hcompute_blur_stencil_read_ren;
wire [15:0] blur_unnormalized_stencil_op_hcompute_blur_stencil_read_ctrl_vars [2:0];
wire [15:0] blur_unnormalized_stencil_op_hcompute_blur_stencil_read [0:0];
wire blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_wen;
wire [15:0] blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars [2:0];
wire [15:0] blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write [0:0];
wire blur_unnormalized_stencil_clkwrk_dsa0_clk;
wire blur_unnormalized_stencil_clkwrk_dsa0_flush;
wire blur_unnormalized_stencil_clkwrk_dsa0_rst_n;
wire blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read_ren;
wire [15:0] blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars [2:0];
wire [15:0] blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read [0:0];
wire blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_wen;
wire [15:0] blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_ctrl_vars [2:0];
wire [15:0] blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write [0:0];
wire hw_input_stencil_clk;
wire hw_input_stencil_flush;
wire hw_input_stencil_rst_n;
wire hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_ren;
wire [15:0] hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars [2:0];
wire [15:0] hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read [8:0];
wire hw_input_stencil_op_hcompute_hw_input_stencil_write_wen;
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars [2:0];
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire op_hcompute_blur_stencil_clk;
wire [15:0] op_hcompute_blur_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_read [0:0];
wire [15:0] op_hcompute_blur_stencil_blur_stencil_op_hcompute_blur_stencil_write [0:0];
wire op_hcompute_blur_stencil_exe_start_clk;
wire op_hcompute_blur_stencil_exe_start_in;
wire op_hcompute_blur_stencil_exe_start_out;
wire op_hcompute_blur_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_blur_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_blur_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_blur_stencil_port_controller_clk;
wire op_hcompute_blur_stencil_port_controller_valid;
wire [15:0] op_hcompute_blur_stencil_port_controller_d [2:0];
wire op_hcompute_blur_stencil_read_start;
wire op_hcompute_blur_stencil_write_start;
wire op_hcompute_blur_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_blur_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_blur_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_blur_unnormalized_stencil_clk;
wire [15:0] op_hcompute_blur_unnormalized_stencil_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write [0:0];
wire op_hcompute_blur_unnormalized_stencil_1_clk;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read [0:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read [8:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write [0:0];
wire op_hcompute_blur_unnormalized_stencil_1_exe_start_clk;
wire op_hcompute_blur_unnormalized_stencil_1_exe_start_in;
wire op_hcompute_blur_unnormalized_stencil_1_exe_start_out;
wire op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_clk;
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_port_controller_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_1_read_start;
wire op_hcompute_blur_unnormalized_stencil_1_write_start;
wire op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_blur_unnormalized_stencil_exe_start_clk;
wire op_hcompute_blur_unnormalized_stencil_exe_start_in;
wire op_hcompute_blur_unnormalized_stencil_exe_start_out;
wire op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_blur_unnormalized_stencil_port_controller_clk;
wire op_hcompute_blur_unnormalized_stencil_port_controller_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_port_controller_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_read_start;
wire op_hcompute_blur_unnormalized_stencil_write_start;
wire op_hcompute_blur_unnormalized_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_blur_unnormalized_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_input_stencil_clk;
wire [15:0] op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0];
wire [15:0] op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire op_hcompute_hw_input_stencil_exe_start_clk;
wire op_hcompute_hw_input_stencil_exe_start_in;
wire op_hcompute_hw_input_stencil_exe_start_out;
wire op_hcompute_hw_input_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_input_stencil_port_controller_clk;
wire op_hcompute_hw_input_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_d [2:0];
wire op_hcompute_hw_input_stencil_read_start;
wire op_hcompute_hw_input_stencil_write_start;
wire op_hcompute_hw_input_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_blur_stencil_op_hcompute_hw_output_stencil_read [0:0];
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
assign _U172_in = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
assign _U172_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U172 (
    .in(_U172_in),
    .clk(_U172_clk),
    .out(_U172_out)
);
assign blur_stencil_clk = clk;
assign blur_stencil_flush = flush;
assign blur_stencil_rst_n = rst_n;
assign blur_stencil_op_hcompute_blur_stencil_write_wen = op_hcompute_blur_stencil_write_start;
assign blur_stencil_op_hcompute_blur_stencil_write_ctrl_vars[2] = op_hcompute_blur_stencil_write_start_control_vars_out[2];
assign blur_stencil_op_hcompute_blur_stencil_write_ctrl_vars[1] = op_hcompute_blur_stencil_write_start_control_vars_out[1];
assign blur_stencil_op_hcompute_blur_stencil_write_ctrl_vars[0] = op_hcompute_blur_stencil_write_start_control_vars_out[0];
assign blur_stencil_op_hcompute_blur_stencil_write[0] = op_hcompute_blur_stencil_blur_stencil_op_hcompute_blur_stencil_write[0];
assign blur_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign blur_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign blur_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign blur_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
blur_stencil_ub blur_stencil (
    .clk(blur_stencil_clk),
    .flush(blur_stencil_flush),
    .rst_n(blur_stencil_rst_n),
    .op_hcompute_blur_stencil_write_wen(blur_stencil_op_hcompute_blur_stencil_write_wen),
    .op_hcompute_blur_stencil_write_ctrl_vars(blur_stencil_op_hcompute_blur_stencil_write_ctrl_vars),
    .op_hcompute_blur_stencil_write(blur_stencil_op_hcompute_blur_stencil_write),
    .op_hcompute_hw_output_stencil_read_ren(blur_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(blur_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(blur_stencil_op_hcompute_hw_output_stencil_read)
);
assign blur_unnormalized_stencil_clk = clk;
assign blur_unnormalized_stencil_flush = flush;
assign blur_unnormalized_stencil_rst_n = rst_n;
assign blur_unnormalized_stencil_op_hcompute_blur_stencil_read_ren = op_hcompute_blur_stencil_read_start;
assign blur_unnormalized_stencil_op_hcompute_blur_stencil_read_ctrl_vars[2] = op_hcompute_blur_stencil_port_controller_d[2];
assign blur_unnormalized_stencil_op_hcompute_blur_stencil_read_ctrl_vars[1] = op_hcompute_blur_stencil_port_controller_d[1];
assign blur_unnormalized_stencil_op_hcompute_blur_stencil_read_ctrl_vars[0] = op_hcompute_blur_stencil_port_controller_d[0];
assign blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_wen = op_hcompute_blur_unnormalized_stencil_1_write_start;
assign blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[2] = op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_out[2];
assign blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[1] = op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_out[1];
assign blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[0] = op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_out[0];
assign blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write[0] = op_hcompute_blur_unnormalized_stencil_1_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write[0];
blur_unnormalized_stencil_ub blur_unnormalized_stencil (
    .clk(blur_unnormalized_stencil_clk),
    .flush(blur_unnormalized_stencil_flush),
    .rst_n(blur_unnormalized_stencil_rst_n),
    .op_hcompute_blur_stencil_read_ren(blur_unnormalized_stencil_op_hcompute_blur_stencil_read_ren),
    .op_hcompute_blur_stencil_read_ctrl_vars(blur_unnormalized_stencil_op_hcompute_blur_stencil_read_ctrl_vars),
    .op_hcompute_blur_stencil_read(blur_unnormalized_stencil_op_hcompute_blur_stencil_read),
    .op_hcompute_blur_unnormalized_stencil_1_write_wen(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_wen),
    .op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars),
    .op_hcompute_blur_unnormalized_stencil_1_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write)
);
assign blur_unnormalized_stencil_clkwrk_dsa0_clk = clk;
assign blur_unnormalized_stencil_clkwrk_dsa0_flush = flush;
assign blur_unnormalized_stencil_clkwrk_dsa0_rst_n = rst_n;
assign blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read_ren = op_hcompute_blur_unnormalized_stencil_1_read_start;
assign blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[2];
assign blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[1];
assign blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[0];
assign blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_wen = op_hcompute_blur_unnormalized_stencil_write_start;
assign blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[2] = op_hcompute_blur_unnormalized_stencil_write_start_control_vars_out[2];
assign blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[1] = op_hcompute_blur_unnormalized_stencil_write_start_control_vars_out[1];
assign blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[0] = op_hcompute_blur_unnormalized_stencil_write_start_control_vars_out[0];
assign blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write[0] = op_hcompute_blur_unnormalized_stencil_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write[0];
blur_unnormalized_stencil_clkwrk_dsa0_ub blur_unnormalized_stencil_clkwrk_dsa0 (
    .clk(blur_unnormalized_stencil_clkwrk_dsa0_clk),
    .flush(blur_unnormalized_stencil_clkwrk_dsa0_flush),
    .rst_n(blur_unnormalized_stencil_clkwrk_dsa0_rst_n),
    .op_hcompute_blur_unnormalized_stencil_1_read_ren(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read_ren),
    .op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars),
    .op_hcompute_blur_unnormalized_stencil_1_read(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read),
    .op_hcompute_blur_unnormalized_stencil_write_wen(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_wen),
    .op_hcompute_blur_unnormalized_stencil_write_ctrl_vars(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_ctrl_vars),
    .op_hcompute_blur_unnormalized_stencil_write(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write)
);
assign hw_input_stencil_clk = clk;
assign hw_input_stencil_flush = flush;
assign hw_input_stencil_rst_n = rst_n;
assign hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_ren = op_hcompute_blur_unnormalized_stencil_1_read_start;
assign hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[2];
assign hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[1];
assign hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[0];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_wen = op_hcompute_hw_input_stencil_write_start;
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_stencil_write_start_control_vars_out[2];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_stencil_write_start_control_vars_out[1];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_stencil_write_start_control_vars_out[0];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write[0] = op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write[0];
hw_input_stencil_ub hw_input_stencil (
    .clk(hw_input_stencil_clk),
    .flush(hw_input_stencil_flush),
    .rst_n(hw_input_stencil_rst_n),
    .op_hcompute_blur_unnormalized_stencil_1_read_ren(hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_ren),
    .op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars(hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars),
    .op_hcompute_blur_unnormalized_stencil_1_read(hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read),
    .op_hcompute_hw_input_stencil_write_wen(hw_input_stencil_op_hcompute_hw_input_stencil_write_wen),
    .op_hcompute_hw_input_stencil_write_ctrl_vars(hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_stencil_write(hw_input_stencil_op_hcompute_hw_input_stencil_write)
);
assign op_hcompute_blur_stencil_clk = clk;
assign op_hcompute_blur_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_read[0] = blur_unnormalized_stencil_op_hcompute_blur_stencil_read[0];
cu_op_hcompute_blur_stencil op_hcompute_blur_stencil (
    .clk(op_hcompute_blur_stencil_clk),
    .blur_unnormalized_stencil_op_hcompute_blur_stencil_read(op_hcompute_blur_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_read),
    .blur_stencil_op_hcompute_blur_stencil_write(op_hcompute_blur_stencil_blur_stencil_op_hcompute_blur_stencil_write)
);
assign op_hcompute_blur_stencil_exe_start_clk = clk;
assign op_hcompute_blur_stencil_exe_start_in = op_hcompute_blur_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_blur_stencil_exe_start (
    .clk(op_hcompute_blur_stencil_exe_start_clk),
    .in(op_hcompute_blur_stencil_exe_start_in),
    .out(op_hcompute_blur_stencil_exe_start_out)
);
assign op_hcompute_blur_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_blur_stencil_exe_start_control_vars_in[2] = op_hcompute_blur_stencil_port_controller_d[2];
assign op_hcompute_blur_stencil_exe_start_control_vars_in[1] = op_hcompute_blur_stencil_port_controller_d[1];
assign op_hcompute_blur_stencil_exe_start_control_vars_in[0] = op_hcompute_blur_stencil_port_controller_d[0];
array_delay_U96 op_hcompute_blur_stencil_exe_start_control_vars (
    .clk(op_hcompute_blur_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_blur_stencil_exe_start_control_vars_in),
    .out(op_hcompute_blur_stencil_exe_start_control_vars_out)
);
assign op_hcompute_blur_stencil_port_controller_clk = clk;
affine_controller__U75 op_hcompute_blur_stencil_port_controller (
    .clk(op_hcompute_blur_stencil_port_controller_clk),
    .valid(op_hcompute_blur_stencil_port_controller_valid),
    .d(op_hcompute_blur_stencil_port_controller_d)
);
assign op_hcompute_blur_stencil_read_start = op_hcompute_blur_stencil_port_controller_valid;
assign op_hcompute_blur_stencil_write_start = op_hcompute_blur_stencil_exe_start_out;
assign op_hcompute_blur_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_blur_stencil_write_start_control_vars_in[2] = op_hcompute_blur_stencil_port_controller_d[2];
assign op_hcompute_blur_stencil_write_start_control_vars_in[1] = op_hcompute_blur_stencil_port_controller_d[1];
assign op_hcompute_blur_stencil_write_start_control_vars_in[0] = op_hcompute_blur_stencil_port_controller_d[0];
array_delay_U92 op_hcompute_blur_stencil_write_start_control_vars (
    .clk(op_hcompute_blur_stencil_write_start_control_vars_clk),
    .in(op_hcompute_blur_stencil_write_start_control_vars_in),
    .out(op_hcompute_blur_stencil_write_start_control_vars_out)
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
assign op_hcompute_blur_unnormalized_stencil_1_exe_start_clk = clk;
assign op_hcompute_blur_unnormalized_stencil_1_exe_start_in = op_hcompute_blur_unnormalized_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_blur_unnormalized_stencil_1_exe_start (
    .clk(op_hcompute_blur_unnormalized_stencil_1_exe_start_clk),
    .in(op_hcompute_blur_unnormalized_stencil_1_exe_start_in),
    .out(op_hcompute_blur_unnormalized_stencil_1_exe_start_out)
);
assign op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_in[2] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[2];
assign op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_in[1] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[1];
assign op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_in[0] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[0];
array_delay_U71 op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_blur_unnormalized_stencil_1_port_controller_clk = clk;
affine_controller__U50 op_hcompute_blur_unnormalized_stencil_1_port_controller (
    .clk(op_hcompute_blur_unnormalized_stencil_1_port_controller_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_1_port_controller_valid),
    .d(op_hcompute_blur_unnormalized_stencil_1_port_controller_d)
);
assign op_hcompute_blur_unnormalized_stencil_1_read_start = op_hcompute_blur_unnormalized_stencil_1_port_controller_valid;
assign op_hcompute_blur_unnormalized_stencil_1_write_start = op_hcompute_blur_unnormalized_stencil_1_exe_start_out;
assign op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_in[2] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[2];
assign op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_in[1] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[1];
assign op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_in[0] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[0];
array_delay_U67 op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars (
    .clk(op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_blur_unnormalized_stencil_exe_start_clk = clk;
assign op_hcompute_blur_unnormalized_stencil_exe_start_in = op_hcompute_blur_unnormalized_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_blur_unnormalized_stencil_exe_start (
    .clk(op_hcompute_blur_unnormalized_stencil_exe_start_clk),
    .in(op_hcompute_blur_unnormalized_stencil_exe_start_in),
    .out(op_hcompute_blur_unnormalized_stencil_exe_start_out)
);
assign op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_in[2] = op_hcompute_blur_unnormalized_stencil_port_controller_d[2];
assign op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_in[1] = op_hcompute_blur_unnormalized_stencil_port_controller_d[1];
assign op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_in[0] = op_hcompute_blur_unnormalized_stencil_port_controller_d[0];
array_delay_U46 op_hcompute_blur_unnormalized_stencil_exe_start_control_vars (
    .clk(op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_in),
    .out(op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_out)
);
assign op_hcompute_blur_unnormalized_stencil_port_controller_clk = clk;
affine_controller__U25 op_hcompute_blur_unnormalized_stencil_port_controller (
    .clk(op_hcompute_blur_unnormalized_stencil_port_controller_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_port_controller_valid),
    .d(op_hcompute_blur_unnormalized_stencil_port_controller_d)
);
assign op_hcompute_blur_unnormalized_stencil_read_start = op_hcompute_blur_unnormalized_stencil_port_controller_valid;
assign op_hcompute_blur_unnormalized_stencil_write_start = op_hcompute_blur_unnormalized_stencil_exe_start_out;
assign op_hcompute_blur_unnormalized_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_blur_unnormalized_stencil_write_start_control_vars_in[2] = op_hcompute_blur_unnormalized_stencil_port_controller_d[2];
assign op_hcompute_blur_unnormalized_stencil_write_start_control_vars_in[1] = op_hcompute_blur_unnormalized_stencil_port_controller_d[1];
assign op_hcompute_blur_unnormalized_stencil_write_start_control_vars_in[0] = op_hcompute_blur_unnormalized_stencil_port_controller_d[0];
array_delay_U42 op_hcompute_blur_unnormalized_stencil_write_start_control_vars (
    .clk(op_hcompute_blur_unnormalized_stencil_write_start_control_vars_clk),
    .in(op_hcompute_blur_unnormalized_stencil_write_start_control_vars_in),
    .out(op_hcompute_blur_unnormalized_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_input_stencil_clk = clk;
assign op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read[0] = _U172_out;
cu_op_hcompute_hw_input_stencil op_hcompute_hw_input_stencil (
    .clk(op_hcompute_hw_input_stencil_clk),
    .input_copy_stencil_op_hcompute_hw_input_stencil_read(op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read),
    .hw_input_stencil_op_hcompute_hw_input_stencil_write(op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write)
);
assign op_hcompute_hw_input_stencil_exe_start_clk = clk;
assign op_hcompute_hw_input_stencil_exe_start_in = op_hcompute_hw_input_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_input_stencil_exe_start (
    .clk(op_hcompute_hw_input_stencil_exe_start_clk),
    .in(op_hcompute_hw_input_stencil_exe_start_in),
    .out(op_hcompute_hw_input_stencil_exe_start_out)
);
assign op_hcompute_hw_input_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
array_delay_U21 op_hcompute_hw_input_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_input_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_input_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_input_stencil_port_controller_clk = clk;
affine_controller__U0 op_hcompute_hw_input_stencil_port_controller (
    .clk(op_hcompute_hw_input_stencil_port_controller_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_d)
);
assign op_hcompute_hw_input_stencil_read_start = op_hcompute_hw_input_stencil_port_controller_valid;
assign op_hcompute_hw_input_stencil_write_start = op_hcompute_hw_input_stencil_exe_start_out;
assign op_hcompute_hw_input_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
array_delay_U17 op_hcompute_hw_input_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_input_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_input_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_blur_stencil_op_hcompute_hw_output_stencil_read[0] = blur_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .blur_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_blur_stencil_op_hcompute_hw_output_stencil_read),
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
array_delay_U121 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U100 op_hcompute_hw_output_stencil_port_controller (
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
array_delay_U117 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign input_copy_stencil_op_hcompute_hw_input_stencil_read_valid = op_hcompute_hw_input_stencil_read_start;
endmodule

