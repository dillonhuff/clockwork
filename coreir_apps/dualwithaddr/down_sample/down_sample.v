module hcompute_hw_input_stencil (
    output [15:0] out_hw_input_stencil,
    input [15:0] in0_input_copy_stencil [0:0]
);
assign out_hw_input_stencil = in0_input_copy_stencil[0];
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

module delay__U160 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U161_in;
wire _U161_clk;
wire [15:0] _U161_out;
wire [15:0] _U162_in;
wire _U162_clk;
wire [15:0] _U162_out;
wire [15:0] _U163_in;
wire _U163_clk;
wire [15:0] _U163_out;
wire [15:0] _U164_in;
wire _U164_clk;
wire [15:0] _U164_out;
wire [15:0] _U165_in;
wire _U165_clk;
wire [15:0] _U165_out;
wire [15:0] _U166_in;
wire _U166_clk;
wire [15:0] _U166_out;
wire [15:0] _U167_in;
wire _U167_clk;
wire [15:0] _U167_out;
wire [15:0] _U168_in;
wire _U168_clk;
wire [15:0] _U168_out;
wire [15:0] _U169_in;
wire _U169_clk;
wire [15:0] _U169_out;
wire [15:0] _U170_in;
wire _U170_clk;
wire [15:0] _U170_out;
wire [15:0] _U171_in;
wire _U171_clk;
wire [15:0] _U171_out;
wire [15:0] _U172_in;
wire _U172_clk;
wire [15:0] _U172_out;
wire [15:0] _U173_in;
wire _U173_clk;
wire [15:0] _U173_out;
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
assign _U161_in = wdata;
assign _U161_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U161 (
    .in(_U161_in),
    .clk(_U161_clk),
    .out(_U161_out)
);
assign _U162_in = _U161_out;
assign _U162_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U162 (
    .in(_U162_in),
    .clk(_U162_clk),
    .out(_U162_out)
);
assign _U163_in = _U162_out;
assign _U163_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U163 (
    .in(_U163_in),
    .clk(_U163_clk),
    .out(_U163_out)
);
assign _U164_in = _U163_out;
assign _U164_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U164 (
    .in(_U164_in),
    .clk(_U164_clk),
    .out(_U164_out)
);
assign _U165_in = _U164_out;
assign _U165_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U165 (
    .in(_U165_in),
    .clk(_U165_clk),
    .out(_U165_out)
);
assign _U166_in = _U165_out;
assign _U166_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U166 (
    .in(_U166_in),
    .clk(_U166_clk),
    .out(_U166_out)
);
assign _U167_in = _U166_out;
assign _U167_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U167 (
    .in(_U167_in),
    .clk(_U167_clk),
    .out(_U167_out)
);
assign _U168_in = _U167_out;
assign _U168_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U168 (
    .in(_U168_in),
    .clk(_U168_clk),
    .out(_U168_out)
);
assign _U169_in = _U168_out;
assign _U169_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U169 (
    .in(_U169_in),
    .clk(_U169_clk),
    .out(_U169_out)
);
assign _U170_in = _U169_out;
assign _U170_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U170 (
    .in(_U170_in),
    .clk(_U170_clk),
    .out(_U170_out)
);
assign _U171_in = _U170_out;
assign _U171_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U171 (
    .in(_U171_in),
    .clk(_U171_clk),
    .out(_U171_out)
);
assign _U172_in = _U171_out;
assign _U172_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U172 (
    .in(_U172_in),
    .clk(_U172_clk),
    .out(_U172_out)
);
assign _U173_in = _U172_out;
assign _U173_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U173 (
    .in(_U173_in),
    .clk(_U173_clk),
    .out(_U173_out)
);
assign _U174_in = _U173_out;
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
    .out(rdata)
);
endmodule

module delay_tile__delay63 (
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
delay__U160 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U154 (
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
delay_tile__delay63 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module delay__U156 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U157_in;
wire _U157_clk;
assign _U157_in = wdata;
assign _U157_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U157 (
    .in(_U157_in),
    .clk(_U157_clk),
    .out(rdata)
);
endmodule

module delay__U151 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U152_in;
wire _U152_clk;
assign _U152_in = wdata;
assign _U152_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U152 (
    .in(_U152_in),
    .clk(_U152_clk),
    .out(rdata)
);
endmodule

module delay__U143 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
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
wire [15:0] _U148_out;
wire [15:0] _U149_in;
wire _U149_clk;
assign _U144_in = wdata;
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
    .out(_U148_out)
);
assign _U149_in = _U148_out;
assign _U149_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U149 (
    .in(_U149_in),
    .clk(_U149_clk),
    .out(rdata)
);
endmodule

module hw_input_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_avg_pool_stencil_1_read_ren,
    input [15:0] op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0],
    output [15:0] op_hcompute_avg_pool_stencil_1_read [3:0],
    input op_hcompute_hw_input_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars [3:0],
    input [15:0] op_hcompute_hw_input_stencil_write [0:0]
);
wire delay_sr_U150_clk;
wire [15:0] delay_sr_U150_wdata;
wire [15:0] delay_sr_U150_rdata;
wire delay_sr_U150_rst_n;
wire delay_sr_U150_flush;
wire delay_sr_U153_clk;
wire [15:0] delay_sr_U153_wdata;
wire [15:0] delay_sr_U153_rdata;
wire delay_sr_U153_rst_n;
wire delay_sr_U153_flush;
wire delay_sr_U155_clk;
wire [15:0] delay_sr_U155_wdata;
wire [15:0] delay_sr_U155_rdata;
wire delay_sr_U155_rst_n;
wire delay_sr_U155_flush;
wire delay_sr_U158_clk;
wire [15:0] delay_sr_U158_wdata;
wire [15:0] delay_sr_U158_rdata;
wire delay_sr_U158_rst_n;
wire delay_sr_U158_flush;
assign delay_sr_U150_clk = clk;
assign delay_sr_U150_wdata = op_hcompute_hw_input_stencil_write[0];
assign delay_sr_U150_rst_n = rst_n;
assign delay_sr_U150_flush = flush;
delay__U143 delay_sr_U150 (
    .clk(delay_sr_U150_clk),
    .wdata(delay_sr_U150_wdata),
    .rdata(delay_sr_U150_rdata),
    .rst_n(delay_sr_U150_rst_n),
    .flush(delay_sr_U150_flush)
);
assign delay_sr_U153_clk = clk;
assign delay_sr_U153_wdata = delay_sr_U150_rdata;
assign delay_sr_U153_rst_n = rst_n;
assign delay_sr_U153_flush = flush;
delay__U151 delay_sr_U153 (
    .clk(delay_sr_U153_clk),
    .wdata(delay_sr_U153_wdata),
    .rdata(delay_sr_U153_rdata),
    .rst_n(delay_sr_U153_rst_n),
    .flush(delay_sr_U153_flush)
);
assign delay_sr_U155_clk = clk;
assign delay_sr_U155_wdata = delay_sr_U153_rdata;
assign delay_sr_U155_rst_n = rst_n;
assign delay_sr_U155_flush = flush;
memtile_long_delay__U154 delay_sr_U155 (
    .clk(delay_sr_U155_clk),
    .wdata(delay_sr_U155_wdata),
    .rdata(delay_sr_U155_rdata),
    .rst_n(delay_sr_U155_rst_n),
    .flush(delay_sr_U155_flush)
);
assign delay_sr_U158_clk = clk;
assign delay_sr_U158_wdata = delay_sr_U155_rdata;
assign delay_sr_U158_rst_n = rst_n;
assign delay_sr_U158_flush = flush;
delay__U156 delay_sr_U158 (
    .clk(delay_sr_U158_clk),
    .wdata(delay_sr_U158_wdata),
    .rdata(delay_sr_U158_rdata),
    .rst_n(delay_sr_U158_rst_n),
    .flush(delay_sr_U158_flush)
);
assign op_hcompute_avg_pool_stencil_1_read[3] = delay_sr_U153_rdata;
assign op_hcompute_avg_pool_stencil_1_read[2] = delay_sr_U150_rdata;
assign op_hcompute_avg_pool_stencil_1_read[1] = delay_sr_U155_rdata;
assign op_hcompute_avg_pool_stencil_1_read[0] = delay_sr_U158_rdata;
endmodule

module delay__U138 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U139_in;
wire _U139_clk;
wire [15:0] _U139_out;
wire [15:0] _U140_in;
wire _U140_clk;
wire [15:0] _U140_out;
wire [15:0] _U141_in;
wire _U141_clk;
assign _U139_in = wdata;
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
    .out(_U140_out)
);
assign _U141_in = _U140_out;
assign _U141_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U141 (
    .in(_U141_in),
    .clk(_U141_clk),
    .out(rdata)
);
endmodule

module delay__U132 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U133_in;
wire _U133_clk;
wire [15:0] _U133_out;
wire [15:0] _U134_in;
wire _U134_clk;
wire [15:0] _U134_out;
wire [15:0] _U135_in;
wire _U135_clk;
wire [15:0] _U135_out;
wire [15:0] _U136_in;
wire _U136_clk;
assign _U133_in = wdata;
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
    .out(_U135_out)
);
assign _U136_in = _U135_out;
assign _U136_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U136 (
    .in(_U136_in),
    .clk(_U136_clk),
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

module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_avg_pool_stencil [0:0]
);
assign out_hw_output_stencil = in0_avg_pool_stencil[0] >> 16'h0002;
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] avg_pool_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_avg_pool_stencil [0:0];
assign inner_compute_in0_avg_pool_stencil[0] = avg_pool_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_avg_pool_stencil(inner_compute_in0_avg_pool_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module hcompute_avg_pool_stencil (
    output [15:0] out_avg_pool_stencil
);
assign out_avg_pool_stencil = 16'h0000;
endmodule

module cu_op_hcompute_avg_pool_stencil (
    input clk,
    output [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write [0:0]
);
wire [15:0] inner_compute_out_avg_pool_stencil;
hcompute_avg_pool_stencil inner_compute (
    .out_avg_pool_stencil(inner_compute_out_avg_pool_stencil)
);
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write[0] = inner_compute_out_avg_pool_stencil;
endmodule

module hcompute_avg_pool_stencil_1 (
    output [15:0] out_avg_pool_stencil,
    input [15:0] in0_avg_pool_stencil [0:0],
    input [15:0] in1_hw_input_stencil [3:0]
);
assign out_avg_pool_stencil = 16'(in1_hw_input_stencil[0] + (16'(in0_avg_pool_stencil[0] + (16'(in1_hw_input_stencil[1] + (16'(in1_hw_input_stencil[2] + in1_hw_input_stencil[3])))))));
endmodule

module cu_op_hcompute_avg_pool_stencil_1 (
    input clk,
    input [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read [0:0],
    input [15:0] hw_input_stencil_op_hcompute_avg_pool_stencil_1_read [3:0],
    output [15:0] avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_avg_pool_stencil;
wire [15:0] inner_compute_in0_avg_pool_stencil [0:0];
wire [15:0] inner_compute_in1_hw_input_stencil [3:0];
assign inner_compute_in0_avg_pool_stencil[0] = avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read[0];
assign inner_compute_in1_hw_input_stencil[3] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[3];
assign inner_compute_in1_hw_input_stencil[2] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[2];
assign inner_compute_in1_hw_input_stencil[1] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[1];
assign inner_compute_in1_hw_input_stencil[0] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[0];
hcompute_avg_pool_stencil_1 inner_compute (
    .out_avg_pool_stencil(inner_compute_out_avg_pool_stencil),
    .in0_avg_pool_stencil(inner_compute_in0_avg_pool_stencil),
    .in1_hw_input_stencil(inner_compute_in1_hw_input_stencil)
);
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write[0] = inner_compute_out_avg_pool_stencil;
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

module avg_pool_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_avg_pool_stencil_1_write_wen,
    input [15:0] op_hcompute_avg_pool_stencil_1_write_ctrl_vars [3:0],
    input [15:0] op_hcompute_avg_pool_stencil_1_write [0:0],
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [3:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
wire delay_sr_U137_clk;
wire [15:0] delay_sr_U137_wdata;
wire [15:0] delay_sr_U137_rdata;
wire delay_sr_U137_rst_n;
wire delay_sr_U137_flush;
assign delay_sr_U137_clk = clk;
assign delay_sr_U137_wdata = op_hcompute_avg_pool_stencil_1_write[0];
assign delay_sr_U137_rst_n = rst_n;
assign delay_sr_U137_flush = flush;
delay__U132 delay_sr_U137 (
    .clk(delay_sr_U137_clk),
    .wdata(delay_sr_U137_wdata),
    .rdata(delay_sr_U137_rdata),
    .rst_n(delay_sr_U137_rst_n),
    .flush(delay_sr_U137_flush)
);
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U137_rdata;
endmodule

module avg_pool_stencil_clkwrk_dsa0_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_avg_pool_stencil_1_read_ren,
    input [15:0] op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0],
    output [15:0] op_hcompute_avg_pool_stencil_1_read [0:0],
    input op_hcompute_avg_pool_stencil_write_wen,
    input [15:0] op_hcompute_avg_pool_stencil_write_ctrl_vars [3:0],
    input [15:0] op_hcompute_avg_pool_stencil_write [0:0]
);
wire delay_sr_U142_clk;
wire [15:0] delay_sr_U142_wdata;
wire [15:0] delay_sr_U142_rdata;
wire delay_sr_U142_rst_n;
wire delay_sr_U142_flush;
assign delay_sr_U142_clk = clk;
assign delay_sr_U142_wdata = op_hcompute_avg_pool_stencil_write[0];
assign delay_sr_U142_rst_n = rst_n;
assign delay_sr_U142_flush = flush;
delay__U138 delay_sr_U142 (
    .clk(delay_sr_U142_clk),
    .wdata(delay_sr_U142_wdata),
    .rdata(delay_sr_U142_rdata),
    .rst_n(delay_sr_U142_rst_n),
    .flush(delay_sr_U142_flush)
);
assign op_hcompute_avg_pool_stencil_1_read[0] = delay_sr_U142_rdata;
endmodule

module array_delay_U94 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U95_in;
wire _U95_clk;
wire [15:0] _U95_out;
wire [15:0] _U96_in;
wire _U96_clk;
wire [15:0] _U96_out;
wire [15:0] _U97_in;
wire _U97_clk;
wire [15:0] _U97_out;
wire [15:0] _U98_in;
wire _U98_clk;
wire [15:0] _U98_out;
assign _U95_in = in[0];
assign _U95_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U95 (
    .in(_U95_in),
    .clk(_U95_clk),
    .out(_U95_out)
);
assign _U96_in = in[1];
assign _U96_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U96 (
    .in(_U96_in),
    .clk(_U96_clk),
    .out(_U96_out)
);
assign _U97_in = in[2];
assign _U97_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U97 (
    .in(_U97_in),
    .clk(_U97_clk),
    .out(_U97_out)
);
assign _U98_in = in[3];
assign _U98_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U98 (
    .in(_U98_in),
    .clk(_U98_clk),
    .out(_U98_out)
);
assign out[3] = _U98_out;
assign out[2] = _U97_out;
assign out[1] = _U96_out;
assign out[0] = _U95_out;
endmodule

module array_delay_U89 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U90_in;
wire _U90_clk;
wire [15:0] _U90_out;
wire [15:0] _U91_in;
wire _U91_clk;
wire [15:0] _U91_out;
wire [15:0] _U92_in;
wire _U92_clk;
wire [15:0] _U92_out;
wire [15:0] _U93_in;
wire _U93_clk;
wire [15:0] _U93_out;
assign _U90_in = in[0];
assign _U90_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U90 (
    .in(_U90_in),
    .clk(_U90_clk),
    .out(_U90_out)
);
assign _U91_in = in[1];
assign _U91_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U91 (
    .in(_U91_in),
    .clk(_U91_clk),
    .out(_U91_out)
);
assign _U92_in = in[2];
assign _U92_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U92 (
    .in(_U92_in),
    .clk(_U92_clk),
    .out(_U92_out)
);
assign _U93_in = in[3];
assign _U93_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U93 (
    .in(_U93_in),
    .clk(_U93_clk),
    .out(_U93_out)
);
assign out[3] = _U93_out;
assign out[2] = _U92_out;
assign out[1] = _U91_out;
assign out[0] = _U90_out;
endmodule

module array_delay_U61 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U62_in;
wire _U62_clk;
wire [15:0] _U62_out;
wire [15:0] _U63_in;
wire _U63_clk;
wire [15:0] _U63_out;
wire [15:0] _U64_in;
wire _U64_clk;
wire [15:0] _U64_out;
wire [15:0] _U65_in;
wire _U65_clk;
wire [15:0] _U65_out;
assign _U62_in = in[0];
assign _U62_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U62 (
    .in(_U62_in),
    .clk(_U62_clk),
    .out(_U62_out)
);
assign _U63_in = in[1];
assign _U63_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U63 (
    .in(_U63_in),
    .clk(_U63_clk),
    .out(_U63_out)
);
assign _U64_in = in[2];
assign _U64_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U64 (
    .in(_U64_in),
    .clk(_U64_clk),
    .out(_U64_out)
);
assign _U65_in = in[3];
assign _U65_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U65 (
    .in(_U65_in),
    .clk(_U65_clk),
    .out(_U65_out)
);
assign out[3] = _U65_out;
assign out[2] = _U64_out;
assign out[1] = _U63_out;
assign out[0] = _U62_out;
endmodule

module array_delay_U56 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U57_in;
wire _U57_clk;
wire [15:0] _U57_out;
wire [15:0] _U58_in;
wire _U58_clk;
wire [15:0] _U58_out;
wire [15:0] _U59_in;
wire _U59_clk;
wire [15:0] _U59_out;
wire [15:0] _U60_in;
wire _U60_clk;
wire [15:0] _U60_out;
assign _U57_in = in[0];
assign _U57_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U57 (
    .in(_U57_in),
    .clk(_U57_clk),
    .out(_U57_out)
);
assign _U58_in = in[1];
assign _U58_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U58 (
    .in(_U58_in),
    .clk(_U58_clk),
    .out(_U58_out)
);
assign _U59_in = in[2];
assign _U59_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U59 (
    .in(_U59_in),
    .clk(_U59_clk),
    .out(_U59_out)
);
assign _U60_in = in[3];
assign _U60_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U60 (
    .in(_U60_in),
    .clk(_U60_clk),
    .out(_U60_out)
);
assign out[3] = _U60_out;
assign out[2] = _U59_out;
assign out[1] = _U58_out;
assign out[0] = _U57_out;
endmodule

module array_delay_U28 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U29_in;
wire _U29_clk;
wire [15:0] _U29_out;
wire [15:0] _U30_in;
wire _U30_clk;
wire [15:0] _U30_out;
wire [15:0] _U31_in;
wire _U31_clk;
wire [15:0] _U31_out;
wire [15:0] _U32_in;
wire _U32_clk;
wire [15:0] _U32_out;
assign _U29_in = in[0];
assign _U29_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U29 (
    .in(_U29_in),
    .clk(_U29_clk),
    .out(_U29_out)
);
assign _U30_in = in[1];
assign _U30_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U30 (
    .in(_U30_in),
    .clk(_U30_clk),
    .out(_U30_out)
);
assign _U31_in = in[2];
assign _U31_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U31 (
    .in(_U31_in),
    .clk(_U31_clk),
    .out(_U31_out)
);
assign _U32_in = in[3];
assign _U32_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U32 (
    .in(_U32_in),
    .clk(_U32_clk),
    .out(_U32_out)
);
assign out[3] = _U32_out;
assign out[2] = _U31_out;
assign out[1] = _U30_out;
assign out[0] = _U29_out;
endmodule

module array_delay_U23 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U24_in;
wire _U24_clk;
wire [15:0] _U24_out;
wire [15:0] _U25_in;
wire _U25_clk;
wire [15:0] _U25_out;
wire [15:0] _U26_in;
wire _U26_clk;
wire [15:0] _U26_out;
wire [15:0] _U27_in;
wire _U27_clk;
wire [15:0] _U27_out;
assign _U24_in = in[0];
assign _U24_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U24 (
    .in(_U24_in),
    .clk(_U24_clk),
    .out(_U24_out)
);
assign _U25_in = in[1];
assign _U25_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U25 (
    .in(_U25_in),
    .clk(_U25_clk),
    .out(_U25_out)
);
assign _U26_in = in[2];
assign _U26_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U26 (
    .in(_U26_in),
    .clk(_U26_clk),
    .out(_U26_out)
);
assign _U27_in = in[3];
assign _U27_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U27 (
    .in(_U27_in),
    .clk(_U27_clk),
    .out(_U27_out)
);
assign out[3] = _U27_out;
assign out[2] = _U26_out;
assign out[1] = _U25_out;
assign out[0] = _U24_out;
endmodule

module array_delay_U127 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U128_in;
wire _U128_clk;
wire [15:0] _U128_out;
wire [15:0] _U129_in;
wire _U129_clk;
wire [15:0] _U129_out;
wire [15:0] _U130_in;
wire _U130_clk;
wire [15:0] _U130_out;
wire [15:0] _U131_in;
wire _U131_clk;
wire [15:0] _U131_out;
assign _U128_in = in[0];
assign _U128_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U128 (
    .in(_U128_in),
    .clk(_U128_clk),
    .out(_U128_out)
);
assign _U129_in = in[1];
assign _U129_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U129 (
    .in(_U129_in),
    .clk(_U129_clk),
    .out(_U129_out)
);
assign _U130_in = in[2];
assign _U130_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U130 (
    .in(_U130_in),
    .clk(_U130_clk),
    .out(_U130_out)
);
assign _U131_in = in[3];
assign _U131_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U131 (
    .in(_U131_in),
    .clk(_U131_clk),
    .out(_U131_out)
);
assign out[3] = _U131_out;
assign out[2] = _U130_out;
assign out[1] = _U129_out;
assign out[0] = _U128_out;
endmodule

module array_delay_U122 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U123_in;
wire _U123_clk;
wire [15:0] _U123_out;
wire [15:0] _U124_in;
wire _U124_clk;
wire [15:0] _U124_out;
wire [15:0] _U125_in;
wire _U125_clk;
wire [15:0] _U125_out;
wire [15:0] _U126_in;
wire _U126_clk;
wire [15:0] _U126_out;
assign _U123_in = in[0];
assign _U123_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U123 (
    .in(_U123_in),
    .clk(_U123_clk),
    .out(_U123_out)
);
assign _U124_in = in[1];
assign _U124_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U124 (
    .in(_U124_in),
    .clk(_U124_clk),
    .out(_U124_out)
);
assign _U125_in = in[2];
assign _U125_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U125 (
    .in(_U125_in),
    .clk(_U125_clk),
    .out(_U125_out)
);
assign _U126_in = in[3];
assign _U126_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U126 (
    .in(_U126_in),
    .clk(_U126_clk),
    .out(_U126_out)
);
assign out[3] = _U126_out;
assign out[2] = _U125_out;
assign out[1] = _U124_out;
assign out[0] = _U123_out;
endmodule

module aff__U67 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0048);
endmodule

module affine_controller__U66 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U67 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U34 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U33 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U34 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U100 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h004c);
endmodule

module affine_controller__U99 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U100 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
endmodule

module affine_controller__U0 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module down_sample (
    input clk,
    input rst_n,
    input flush,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    output input_copy_stencil_op_hcompute_hw_input_stencil_read_valid,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0]
);
wire [15:0] _U159_in;
wire _U159_clk;
wire [15:0] _U159_out;
wire avg_pool_stencil_clk;
wire avg_pool_stencil_flush;
wire avg_pool_stencil_rst_n;
wire avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_wen;
wire [15:0] avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write [0:0];
wire avg_pool_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire avg_pool_stencil_clkwrk_dsa0_clk;
wire avg_pool_stencil_clkwrk_dsa0_flush;
wire avg_pool_stencil_clkwrk_dsa0_rst_n;
wire avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ren;
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read [0:0];
wire avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_wen;
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write [0:0];
wire hw_input_stencil_clk;
wire hw_input_stencil_flush;
wire hw_input_stencil_rst_n;
wire hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ren;
wire [15:0] hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0];
wire [15:0] hw_input_stencil_op_hcompute_avg_pool_stencil_1_read [3:0];
wire hw_input_stencil_op_hcompute_hw_input_stencil_write_wen;
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars [3:0];
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire op_hcompute_avg_pool_stencil_clk;
wire [15:0] op_hcompute_avg_pool_stencil_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write [0:0];
wire op_hcompute_avg_pool_stencil_1_clk;
wire [15:0] op_hcompute_avg_pool_stencil_1_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read [0:0];
wire [15:0] op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_1_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write [0:0];
wire op_hcompute_avg_pool_stencil_1_exe_start_clk;
wire op_hcompute_avg_pool_stencil_1_exe_start_in;
wire op_hcompute_avg_pool_stencil_1_exe_start_out;
wire op_hcompute_avg_pool_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_1_exe_start_control_vars_out [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_d [3:0];
wire op_hcompute_avg_pool_stencil_1_read_start;
wire op_hcompute_avg_pool_stencil_1_write_start;
wire op_hcompute_avg_pool_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_avg_pool_stencil_1_write_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_1_write_start_control_vars_out [3:0];
wire op_hcompute_avg_pool_stencil_exe_start_clk;
wire op_hcompute_avg_pool_stencil_exe_start_in;
wire op_hcompute_avg_pool_stencil_exe_start_out;
wire op_hcompute_avg_pool_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_avg_pool_stencil_exe_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_exe_start_control_vars_out [3:0];
wire op_hcompute_avg_pool_stencil_port_controller_clk;
wire op_hcompute_avg_pool_stencil_port_controller_valid;
wire [15:0] op_hcompute_avg_pool_stencil_port_controller_d [3:0];
wire op_hcompute_avg_pool_stencil_read_start;
wire op_hcompute_avg_pool_stencil_write_start;
wire op_hcompute_avg_pool_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_avg_pool_stencil_write_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_write_start_control_vars_out [3:0];
wire op_hcompute_hw_input_stencil_clk;
wire [15:0] op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0];
wire [15:0] op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire op_hcompute_hw_input_stencil_exe_start_clk;
wire op_hcompute_hw_input_stencil_exe_start_in;
wire op_hcompute_hw_input_stencil_exe_start_out;
wire op_hcompute_hw_input_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_out [3:0];
wire op_hcompute_hw_input_stencil_port_controller_clk;
wire op_hcompute_hw_input_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_d [3:0];
wire op_hcompute_hw_input_stencil_read_start;
wire op_hcompute_hw_input_stencil_write_start;
wire op_hcompute_hw_input_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_out [3:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_clk;
wire op_hcompute_hw_output_stencil_exe_start_in;
wire op_hcompute_hw_output_stencil_exe_start_out;
wire op_hcompute_hw_output_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [3:0];
wire op_hcompute_hw_output_stencil_port_controller_clk;
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [3:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start;
wire op_hcompute_hw_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [3:0];
assign _U159_in = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
assign _U159_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U159 (
    .in(_U159_in),
    .clk(_U159_clk),
    .out(_U159_out)
);
assign avg_pool_stencil_clk = clk;
assign avg_pool_stencil_flush = flush;
assign avg_pool_stencil_rst_n = rst_n;
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_wen = op_hcompute_avg_pool_stencil_1_write_start;
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3] = op_hcompute_avg_pool_stencil_1_write_start_control_vars_out[3];
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] = op_hcompute_avg_pool_stencil_1_write_start_control_vars_out[2];
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] = op_hcompute_avg_pool_stencil_1_write_start_control_vars_out[1];
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars[0] = op_hcompute_avg_pool_stencil_1_write_start_control_vars_out[0];
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write[0] = op_hcompute_avg_pool_stencil_1_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write[0];
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[3] = op_hcompute_hw_output_stencil_port_controller_d[3];
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
avg_pool_stencil_ub avg_pool_stencil (
    .clk(avg_pool_stencil_clk),
    .flush(avg_pool_stencil_flush),
    .rst_n(avg_pool_stencil_rst_n),
    .op_hcompute_avg_pool_stencil_1_write_wen(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_wen),
    .op_hcompute_avg_pool_stencil_1_write_ctrl_vars(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars),
    .op_hcompute_avg_pool_stencil_1_write(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write),
    .op_hcompute_hw_output_stencil_read_ren(avg_pool_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(avg_pool_stencil_op_hcompute_hw_output_stencil_read)
);
assign avg_pool_stencil_clkwrk_dsa0_clk = clk;
assign avg_pool_stencil_clkwrk_dsa0_flush = flush;
assign avg_pool_stencil_clkwrk_dsa0_rst_n = rst_n;
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ren = op_hcompute_avg_pool_stencil_1_read_start;
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_wen = op_hcompute_avg_pool_stencil_write_start;
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[3] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[3];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[2] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[2];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[1] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[1];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[0] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[0];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write[0] = op_hcompute_avg_pool_stencil_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write[0];
avg_pool_stencil_clkwrk_dsa0_ub avg_pool_stencil_clkwrk_dsa0 (
    .clk(avg_pool_stencil_clkwrk_dsa0_clk),
    .flush(avg_pool_stencil_clkwrk_dsa0_flush),
    .rst_n(avg_pool_stencil_clkwrk_dsa0_rst_n),
    .op_hcompute_avg_pool_stencil_1_read_ren(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ren),
    .op_hcompute_avg_pool_stencil_1_read_ctrl_vars(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars),
    .op_hcompute_avg_pool_stencil_1_read(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read),
    .op_hcompute_avg_pool_stencil_write_wen(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_wen),
    .op_hcompute_avg_pool_stencil_write_ctrl_vars(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars),
    .op_hcompute_avg_pool_stencil_write(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write)
);
assign hw_input_stencil_clk = clk;
assign hw_input_stencil_flush = flush;
assign hw_input_stencil_rst_n = rst_n;
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ren = op_hcompute_avg_pool_stencil_1_read_start;
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_wen = op_hcompute_hw_input_stencil_write_start;
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[3] = op_hcompute_hw_input_stencil_write_start_control_vars_out[3];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_stencil_write_start_control_vars_out[2];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_stencil_write_start_control_vars_out[1];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_stencil_write_start_control_vars_out[0];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write[0] = op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write[0];
hw_input_stencil_ub hw_input_stencil (
    .clk(hw_input_stencil_clk),
    .flush(hw_input_stencil_flush),
    .rst_n(hw_input_stencil_rst_n),
    .op_hcompute_avg_pool_stencil_1_read_ren(hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ren),
    .op_hcompute_avg_pool_stencil_1_read_ctrl_vars(hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars),
    .op_hcompute_avg_pool_stencil_1_read(hw_input_stencil_op_hcompute_avg_pool_stencil_1_read),
    .op_hcompute_hw_input_stencil_write_wen(hw_input_stencil_op_hcompute_hw_input_stencil_write_wen),
    .op_hcompute_hw_input_stencil_write_ctrl_vars(hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_stencil_write(hw_input_stencil_op_hcompute_hw_input_stencil_write)
);
assign op_hcompute_avg_pool_stencil_clk = clk;
cu_op_hcompute_avg_pool_stencil op_hcompute_avg_pool_stencil (
    .clk(op_hcompute_avg_pool_stencil_clk),
    .avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write(op_hcompute_avg_pool_stencil_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write)
);
assign op_hcompute_avg_pool_stencil_1_clk = clk;
assign op_hcompute_avg_pool_stencil_1_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read[0] = avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read[0];
assign op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[3] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[3];
assign op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[2] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[2];
assign op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[1] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[1];
assign op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[0] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[0];
cu_op_hcompute_avg_pool_stencil_1 op_hcompute_avg_pool_stencil_1 (
    .clk(op_hcompute_avg_pool_stencil_1_clk),
    .avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read(op_hcompute_avg_pool_stencil_1_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read),
    .hw_input_stencil_op_hcompute_avg_pool_stencil_1_read(op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read),
    .avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write(op_hcompute_avg_pool_stencil_1_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write)
);
assign op_hcompute_avg_pool_stencil_1_exe_start_clk = clk;
assign op_hcompute_avg_pool_stencil_1_exe_start_in = op_hcompute_avg_pool_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_avg_pool_stencil_1_exe_start (
    .clk(op_hcompute_avg_pool_stencil_1_exe_start_clk),
    .in(op_hcompute_avg_pool_stencil_1_exe_start_in),
    .out(op_hcompute_avg_pool_stencil_1_exe_start_out)
);
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
array_delay_U94 op_hcompute_avg_pool_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_avg_pool_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_clk = clk;
affine_controller__U66 op_hcompute_avg_pool_stencil_1_port_controller (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_d)
);
assign op_hcompute_avg_pool_stencil_1_read_start = op_hcompute_avg_pool_stencil_1_port_controller_valid;
assign op_hcompute_avg_pool_stencil_1_write_start = op_hcompute_avg_pool_stencil_1_exe_start_out;
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
array_delay_U89 op_hcompute_avg_pool_stencil_1_write_start_control_vars (
    .clk(op_hcompute_avg_pool_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_avg_pool_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_avg_pool_stencil_exe_start_clk = clk;
assign op_hcompute_avg_pool_stencil_exe_start_in = op_hcompute_avg_pool_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_avg_pool_stencil_exe_start (
    .clk(op_hcompute_avg_pool_stencil_exe_start_clk),
    .in(op_hcompute_avg_pool_stencil_exe_start_in),
    .out(op_hcompute_avg_pool_stencil_exe_start_out)
);
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_port_controller_d[0];
array_delay_U61 op_hcompute_avg_pool_stencil_exe_start_control_vars (
    .clk(op_hcompute_avg_pool_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_avg_pool_stencil_exe_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_exe_start_control_vars_out)
);
assign op_hcompute_avg_pool_stencil_port_controller_clk = clk;
affine_controller__U33 op_hcompute_avg_pool_stencil_port_controller (
    .clk(op_hcompute_avg_pool_stencil_port_controller_clk),
    .valid(op_hcompute_avg_pool_stencil_port_controller_valid),
    .d(op_hcompute_avg_pool_stencil_port_controller_d)
);
assign op_hcompute_avg_pool_stencil_read_start = op_hcompute_avg_pool_stencil_port_controller_valid;
assign op_hcompute_avg_pool_stencil_write_start = op_hcompute_avg_pool_stencil_exe_start_out;
assign op_hcompute_avg_pool_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_port_controller_d[0];
array_delay_U56 op_hcompute_avg_pool_stencil_write_start_control_vars (
    .clk(op_hcompute_avg_pool_stencil_write_start_control_vars_clk),
    .in(op_hcompute_avg_pool_stencil_write_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_input_stencil_clk = clk;
assign op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read[0] = _U159_out;
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
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[3] = op_hcompute_hw_input_stencil_port_controller_d[3];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
array_delay_U28 op_hcompute_hw_input_stencil_exe_start_control_vars (
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
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[3] = op_hcompute_hw_input_stencil_port_controller_d[3];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
array_delay_U23 op_hcompute_hw_input_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_input_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_input_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_read[0] = avg_pool_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .avg_pool_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_read),
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
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[3] = op_hcompute_hw_output_stencil_port_controller_d[3];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U127 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U99 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start = op_hcompute_hw_output_stencil_exe_start_out;
assign op_hcompute_hw_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[3] = op_hcompute_hw_output_stencil_port_controller_d[3];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U122 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign input_copy_stencil_op_hcompute_hw_input_stencil_read_valid = op_hcompute_hw_input_stencil_read_start;
endmodule

