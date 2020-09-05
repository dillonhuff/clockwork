// Module `inner_sram__U343` defined externally
// Module `inner_sram__U304` defined externally
// Module `inner_sram__U235` defined externally
// Module `inner_sram__U196` defined externally
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

module delay__U348 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U349_in;
wire _U349_clk;
assign _U349_in = wdata;
assign _U349_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U349 (
    .in(_U349_in),
    .clk(_U349_clk),
    .out(rdata)
);
endmodule

module delay__U345 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U346_in;
wire _U346_clk;
assign _U346_in = wdata;
assign _U346_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U346 (
    .in(_U346_in),
    .clk(_U346_clk),
    .out(rdata)
);
endmodule

module delay__U309 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U310_in;
wire _U310_clk;
assign _U310_in = wdata;
assign _U310_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U310 (
    .in(_U310_in),
    .clk(_U310_clk),
    .out(rdata)
);
endmodule

module delay__U306 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U307_in;
wire _U307_clk;
assign _U307_in = wdata;
assign _U307_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U307 (
    .in(_U307_in),
    .clk(_U307_clk),
    .out(rdata)
);
endmodule

module delay__U270 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U271_in;
wire _U271_clk;
assign _U271_in = wdata;
assign _U271_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U271 (
    .in(_U271_in),
    .clk(_U271_clk),
    .out(rdata)
);
endmodule

module delay__U267 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U268_in;
wire _U268_clk;
assign _U268_in = wdata;
assign _U268_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U268 (
    .in(_U268_in),
    .clk(_U268_clk),
    .out(rdata)
);
endmodule

module delay__U259 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U260_in;
wire _U260_clk;
wire [15:0] _U260_out;
wire [15:0] _U261_in;
wire _U261_clk;
wire [15:0] _U261_out;
wire [15:0] _U262_in;
wire _U262_clk;
wire [15:0] _U262_out;
wire [15:0] _U263_in;
wire _U263_clk;
wire [15:0] _U263_out;
wire [15:0] _U264_in;
wire _U264_clk;
wire [15:0] _U264_out;
wire [15:0] _U265_in;
wire _U265_clk;
assign _U260_in = wdata;
assign _U260_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U260 (
    .in(_U260_in),
    .clk(_U260_clk),
    .out(_U260_out)
);
assign _U261_in = _U260_out;
assign _U261_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U261 (
    .in(_U261_in),
    .clk(_U261_clk),
    .out(_U261_out)
);
assign _U262_in = _U261_out;
assign _U262_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U262 (
    .in(_U262_in),
    .clk(_U262_clk),
    .out(_U262_out)
);
assign _U263_in = _U262_out;
assign _U263_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U263 (
    .in(_U263_in),
    .clk(_U263_clk),
    .out(_U263_out)
);
assign _U264_in = _U263_out;
assign _U264_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U264 (
    .in(_U264_in),
    .clk(_U264_clk),
    .out(_U264_out)
);
assign _U265_in = _U264_out;
assign _U265_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U265 (
    .in(_U265_in),
    .clk(_U265_clk),
    .out(rdata)
);
endmodule

module delay__U254 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U255_in;
wire _U255_clk;
wire [15:0] _U255_out;
wire [15:0] _U256_in;
wire _U256_clk;
wire [15:0] _U256_out;
wire [15:0] _U257_in;
wire _U257_clk;
assign _U255_in = wdata;
assign _U255_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U255 (
    .in(_U255_in),
    .clk(_U255_clk),
    .out(_U255_out)
);
assign _U256_in = _U255_out;
assign _U256_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U256 (
    .in(_U256_in),
    .clk(_U256_clk),
    .out(_U256_out)
);
assign _U257_in = _U256_out;
assign _U257_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U257 (
    .in(_U257_in),
    .clk(_U257_clk),
    .out(rdata)
);
endmodule

module delay__U248 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U249_in;
wire _U249_clk;
wire [15:0] _U249_out;
wire [15:0] _U250_in;
wire _U250_clk;
wire [15:0] _U250_out;
wire [15:0] _U251_in;
wire _U251_clk;
wire [15:0] _U251_out;
wire [15:0] _U252_in;
wire _U252_clk;
assign _U249_in = wdata;
assign _U249_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U249 (
    .in(_U249_in),
    .clk(_U249_clk),
    .out(_U249_out)
);
assign _U250_in = _U249_out;
assign _U250_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U250 (
    .in(_U250_in),
    .clk(_U250_clk),
    .out(_U250_out)
);
assign _U251_in = _U250_out;
assign _U251_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U251 (
    .in(_U251_in),
    .clk(_U251_clk),
    .out(_U251_out)
);
assign _U252_in = _U251_out;
assign _U252_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U252 (
    .in(_U252_in),
    .clk(_U252_clk),
    .out(rdata)
);
endmodule

module delay__U243 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U244_in;
wire _U244_clk;
wire [15:0] _U244_out;
wire [15:0] _U245_in;
wire _U245_clk;
wire [15:0] _U245_out;
wire [15:0] _U246_in;
wire _U246_clk;
assign _U244_in = wdata;
assign _U244_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U244 (
    .in(_U244_in),
    .clk(_U244_clk),
    .out(_U244_out)
);
assign _U245_in = _U244_out;
assign _U245_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U245 (
    .in(_U245_in),
    .clk(_U245_clk),
    .out(_U245_out)
);
assign _U246_in = _U245_out;
assign _U246_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U246 (
    .in(_U246_in),
    .clk(_U246_clk),
    .out(rdata)
);
endmodule

module delay__U240 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U241_in;
wire _U241_clk;
assign _U241_in = wdata;
assign _U241_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U241 (
    .in(_U241_in),
    .clk(_U241_clk),
    .out(rdata)
);
endmodule

module delay__U237 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U238_in;
wire _U238_clk;
assign _U238_in = wdata;
assign _U238_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U238 (
    .in(_U238_in),
    .clk(_U238_clk),
    .out(rdata)
);
endmodule

module delay__U201 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U202_in;
wire _U202_clk;
assign _U202_in = wdata;
assign _U202_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U202 (
    .in(_U202_in),
    .clk(_U202_clk),
    .out(rdata)
);
endmodule

module delay__U198 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U199_in;
wire _U199_clk;
assign _U199_in = wdata;
assign _U199_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U199 (
    .in(_U199_in),
    .clk(_U199_clk),
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
    input rst_n,
    input flush,
    input op_hcompute_conv2_stencil_1_write_wen,
    input [15:0] op_hcompute_conv2_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_conv2_stencil_1_write [0:0],
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
wire delay_sr_U253_clk;
wire [15:0] delay_sr_U253_wdata;
wire [15:0] delay_sr_U253_rdata;
wire delay_sr_U253_rst_n;
wire delay_sr_U253_flush;
assign delay_sr_U253_clk = clk;
assign delay_sr_U253_wdata = op_hcompute_conv2_stencil_1_write[0];
assign delay_sr_U253_rst_n = rst_n;
assign delay_sr_U253_flush = flush;
delay__U248 delay_sr_U253 (
    .clk(delay_sr_U253_clk),
    .wdata(delay_sr_U253_wdata),
    .rdata(delay_sr_U253_rdata),
    .rst_n(delay_sr_U253_rst_n),
    .flush(delay_sr_U253_flush)
);
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U253_rdata;
endmodule

module conv2_stencil_clkwrk_dsa1_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_conv2_stencil_1_read_ren,
    input [15:0] op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_conv2_stencil_1_read [0:0],
    input op_hcompute_conv2_stencil_write_wen,
    input [15:0] op_hcompute_conv2_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_conv2_stencil_write [0:0]
);
wire delay_sr_U258_clk;
wire [15:0] delay_sr_U258_wdata;
wire [15:0] delay_sr_U258_rdata;
wire delay_sr_U258_rst_n;
wire delay_sr_U258_flush;
assign delay_sr_U258_clk = clk;
assign delay_sr_U258_wdata = op_hcompute_conv2_stencil_write[0];
assign delay_sr_U258_rst_n = rst_n;
assign delay_sr_U258_flush = flush;
delay__U254 delay_sr_U258 (
    .clk(delay_sr_U258_clk),
    .wdata(delay_sr_U258_wdata),
    .rdata(delay_sr_U258_rdata),
    .rst_n(delay_sr_U258_rst_n),
    .flush(delay_sr_U258_flush)
);
assign op_hcompute_conv2_stencil_1_read[0] = delay_sr_U258_rdata;
endmodule

module conv1_stencil_clkwrk_dsa0_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_conv1_stencil_1_read_ren,
    input [15:0] op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_conv1_stencil_1_read [0:0],
    input op_hcompute_conv1_stencil_write_wen,
    input [15:0] op_hcompute_conv1_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_conv1_stencil_write [0:0]
);
wire delay_sr_U247_clk;
wire [15:0] delay_sr_U247_wdata;
wire [15:0] delay_sr_U247_rdata;
wire delay_sr_U247_rst_n;
wire delay_sr_U247_flush;
assign delay_sr_U247_clk = clk;
assign delay_sr_U247_wdata = op_hcompute_conv1_stencil_write[0];
assign delay_sr_U247_rst_n = rst_n;
assign delay_sr_U247_flush = flush;
delay__U243 delay_sr_U247 (
    .clk(delay_sr_U247_clk),
    .wdata(delay_sr_U247_wdata),
    .rdata(delay_sr_U247_rdata),
    .rst_n(delay_sr_U247_rst_n),
    .flush(delay_sr_U247_flush)
);
assign op_hcompute_conv1_stencil_1_read[0] = delay_sr_U247_rdata;
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

module aff__U337 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U329 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U328 (
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
aff__U329 affine_func (
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

module aff__U322 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U314 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U313 (
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
aff__U314 affine_func (
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

module memtile_long_delay__U312 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U327_out;
wire [15:0] addrgen__U327_d [0:0];
wire [15:0] addrgen__U342_out;
wire [15:0] addrgen__U342_d [0:0];
wire ctrl__U321_clk;
wire ctrl__U321_valid;
wire [15:0] ctrl__U321_d [0:0];
wire ctrl__U336_clk;
wire ctrl__U336_valid;
wire [15:0] ctrl__U336_d [0:0];
wire inner_sram__U343_bank_clk;
wire inner_sram__U343_bank_rst_n;
wire inner_sram__U343_bank_flush;
wire inner_sram__U343_bank_ren_in;
wire inner_sram__U343_bank_wen_in;
wire [15:0] inner_sram__U343_bank_waddr;
wire [15:0] inner_sram__U343_bank_raddr;
wire [15:0] inner_sram__U343_bank_wdata;
assign addrgen__U327_d[0] = ctrl__U321_d[0];
aff__U322 addrgen__U327 (
    .out(addrgen__U327_out),
    .d(addrgen__U327_d)
);
assign addrgen__U342_d[0] = ctrl__U336_d[0];
aff__U337 addrgen__U342 (
    .out(addrgen__U342_out),
    .d(addrgen__U342_d)
);
assign ctrl__U321_clk = clk;
affine_controller__U313 ctrl__U321 (
    .clk(ctrl__U321_clk),
    .valid(ctrl__U321_valid),
    .d(ctrl__U321_d)
);
assign ctrl__U336_clk = clk;
affine_controller__U328 ctrl__U336 (
    .clk(ctrl__U336_clk),
    .valid(ctrl__U336_valid),
    .d(ctrl__U336_d)
);
assign inner_sram__U343_bank_clk = clk;
assign inner_sram__U343_bank_rst_n = rst_n;
assign inner_sram__U343_bank_flush = flush;
assign inner_sram__U343_bank_ren_in = ctrl__U336_valid;
assign inner_sram__U343_bank_wen_in = ctrl__U321_valid;
assign inner_sram__U343_bank_waddr = addrgen__U327_out;
assign inner_sram__U343_bank_raddr = addrgen__U342_out;
assign inner_sram__U343_bank_wdata = wdata;
inner_sram__U343 inner_sram__U343_bank (
    .clk(inner_sram__U343_bank_clk),
    .rst_n(inner_sram__U343_bank_rst_n),
    .flush(inner_sram__U343_bank_flush),
    .ren_in(inner_sram__U343_bank_ren_in),
    .wen_in(inner_sram__U343_bank_wen_in),
    .waddr(inner_sram__U343_bank_waddr),
    .raddr(inner_sram__U343_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U343_bank_wdata)
);
endmodule

module aff__U298 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U290 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U289 (
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
aff__U290 affine_func (
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

module aff__U283 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U275 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U274 (
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
aff__U275 affine_func (
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

module memtile_long_delay__U273 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U288_out;
wire [15:0] addrgen__U288_d [0:0];
wire [15:0] addrgen__U303_out;
wire [15:0] addrgen__U303_d [0:0];
wire ctrl__U282_clk;
wire ctrl__U282_valid;
wire [15:0] ctrl__U282_d [0:0];
wire ctrl__U297_clk;
wire ctrl__U297_valid;
wire [15:0] ctrl__U297_d [0:0];
wire inner_sram__U304_bank_clk;
wire inner_sram__U304_bank_rst_n;
wire inner_sram__U304_bank_flush;
wire inner_sram__U304_bank_ren_in;
wire inner_sram__U304_bank_wen_in;
wire [15:0] inner_sram__U304_bank_waddr;
wire [15:0] inner_sram__U304_bank_raddr;
wire [15:0] inner_sram__U304_bank_wdata;
assign addrgen__U288_d[0] = ctrl__U282_d[0];
aff__U283 addrgen__U288 (
    .out(addrgen__U288_out),
    .d(addrgen__U288_d)
);
assign addrgen__U303_d[0] = ctrl__U297_d[0];
aff__U298 addrgen__U303 (
    .out(addrgen__U303_out),
    .d(addrgen__U303_d)
);
assign ctrl__U282_clk = clk;
affine_controller__U274 ctrl__U282 (
    .clk(ctrl__U282_clk),
    .valid(ctrl__U282_valid),
    .d(ctrl__U282_d)
);
assign ctrl__U297_clk = clk;
affine_controller__U289 ctrl__U297 (
    .clk(ctrl__U297_clk),
    .valid(ctrl__U297_valid),
    .d(ctrl__U297_d)
);
assign inner_sram__U304_bank_clk = clk;
assign inner_sram__U304_bank_rst_n = rst_n;
assign inner_sram__U304_bank_flush = flush;
assign inner_sram__U304_bank_ren_in = ctrl__U297_valid;
assign inner_sram__U304_bank_wen_in = ctrl__U282_valid;
assign inner_sram__U304_bank_waddr = addrgen__U288_out;
assign inner_sram__U304_bank_raddr = addrgen__U303_out;
assign inner_sram__U304_bank_wdata = wdata;
inner_sram__U304 inner_sram__U304_bank (
    .clk(inner_sram__U304_bank_clk),
    .rst_n(inner_sram__U304_bank_rst_n),
    .flush(inner_sram__U304_bank_flush),
    .ren_in(inner_sram__U304_bank_ren_in),
    .wen_in(inner_sram__U304_bank_wen_in),
    .waddr(inner_sram__U304_bank_waddr),
    .raddr(inner_sram__U304_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U304_bank_wdata)
);
endmodule

module hw_input_global_wrapper_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_conv1_stencil_1_read_ren,
    input [15:0] op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_conv1_stencil_1_read [8:0],
    input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0]
);
wire delay_sr_U266_clk;
wire [15:0] delay_sr_U266_wdata;
wire [15:0] delay_sr_U266_rdata;
wire delay_sr_U266_rst_n;
wire delay_sr_U266_flush;
wire delay_sr_U269_clk;
wire [15:0] delay_sr_U269_wdata;
wire [15:0] delay_sr_U269_rdata;
wire delay_sr_U269_rst_n;
wire delay_sr_U269_flush;
wire delay_sr_U272_clk;
wire [15:0] delay_sr_U272_wdata;
wire [15:0] delay_sr_U272_rdata;
wire delay_sr_U272_rst_n;
wire delay_sr_U272_flush;
wire delay_sr_U305_clk;
wire [15:0] delay_sr_U305_wdata;
wire [15:0] delay_sr_U305_rdata;
wire delay_sr_U305_rst_n;
wire delay_sr_U305_flush;
wire delay_sr_U308_clk;
wire [15:0] delay_sr_U308_wdata;
wire [15:0] delay_sr_U308_rdata;
wire delay_sr_U308_rst_n;
wire delay_sr_U308_flush;
wire delay_sr_U311_clk;
wire [15:0] delay_sr_U311_wdata;
wire [15:0] delay_sr_U311_rdata;
wire delay_sr_U311_rst_n;
wire delay_sr_U311_flush;
wire delay_sr_U344_clk;
wire [15:0] delay_sr_U344_wdata;
wire [15:0] delay_sr_U344_rdata;
wire delay_sr_U344_rst_n;
wire delay_sr_U344_flush;
wire delay_sr_U347_clk;
wire [15:0] delay_sr_U347_wdata;
wire [15:0] delay_sr_U347_rdata;
wire delay_sr_U347_rst_n;
wire delay_sr_U347_flush;
wire delay_sr_U350_clk;
wire [15:0] delay_sr_U350_wdata;
wire [15:0] delay_sr_U350_rdata;
wire delay_sr_U350_rst_n;
wire delay_sr_U350_flush;
assign delay_sr_U266_clk = clk;
assign delay_sr_U266_wdata = op_hcompute_hw_input_global_wrapper_stencil_write[0];
assign delay_sr_U266_rst_n = rst_n;
assign delay_sr_U266_flush = flush;
delay__U259 delay_sr_U266 (
    .clk(delay_sr_U266_clk),
    .wdata(delay_sr_U266_wdata),
    .rdata(delay_sr_U266_rdata),
    .rst_n(delay_sr_U266_rst_n),
    .flush(delay_sr_U266_flush)
);
assign delay_sr_U269_clk = clk;
assign delay_sr_U269_wdata = delay_sr_U266_rdata;
assign delay_sr_U269_rst_n = rst_n;
assign delay_sr_U269_flush = flush;
delay__U267 delay_sr_U269 (
    .clk(delay_sr_U269_clk),
    .wdata(delay_sr_U269_wdata),
    .rdata(delay_sr_U269_rdata),
    .rst_n(delay_sr_U269_rst_n),
    .flush(delay_sr_U269_flush)
);
assign delay_sr_U272_clk = clk;
assign delay_sr_U272_wdata = delay_sr_U269_rdata;
assign delay_sr_U272_rst_n = rst_n;
assign delay_sr_U272_flush = flush;
delay__U270 delay_sr_U272 (
    .clk(delay_sr_U272_clk),
    .wdata(delay_sr_U272_wdata),
    .rdata(delay_sr_U272_rdata),
    .rst_n(delay_sr_U272_rst_n),
    .flush(delay_sr_U272_flush)
);
assign delay_sr_U305_clk = clk;
assign delay_sr_U305_wdata = delay_sr_U272_rdata;
assign delay_sr_U305_rst_n = rst_n;
assign delay_sr_U305_flush = flush;
memtile_long_delay__U273 delay_sr_U305 (
    .clk(delay_sr_U305_clk),
    .wdata(delay_sr_U305_wdata),
    .rdata(delay_sr_U305_rdata),
    .rst_n(delay_sr_U305_rst_n),
    .flush(delay_sr_U305_flush)
);
assign delay_sr_U308_clk = clk;
assign delay_sr_U308_wdata = delay_sr_U305_rdata;
assign delay_sr_U308_rst_n = rst_n;
assign delay_sr_U308_flush = flush;
delay__U306 delay_sr_U308 (
    .clk(delay_sr_U308_clk),
    .wdata(delay_sr_U308_wdata),
    .rdata(delay_sr_U308_rdata),
    .rst_n(delay_sr_U308_rst_n),
    .flush(delay_sr_U308_flush)
);
assign delay_sr_U311_clk = clk;
assign delay_sr_U311_wdata = delay_sr_U308_rdata;
assign delay_sr_U311_rst_n = rst_n;
assign delay_sr_U311_flush = flush;
delay__U309 delay_sr_U311 (
    .clk(delay_sr_U311_clk),
    .wdata(delay_sr_U311_wdata),
    .rdata(delay_sr_U311_rdata),
    .rst_n(delay_sr_U311_rst_n),
    .flush(delay_sr_U311_flush)
);
assign delay_sr_U344_clk = clk;
assign delay_sr_U344_wdata = delay_sr_U311_rdata;
assign delay_sr_U344_rst_n = rst_n;
assign delay_sr_U344_flush = flush;
memtile_long_delay__U312 delay_sr_U344 (
    .clk(delay_sr_U344_clk),
    .wdata(delay_sr_U344_wdata),
    .rdata(delay_sr_U344_rdata),
    .rst_n(delay_sr_U344_rst_n),
    .flush(delay_sr_U344_flush)
);
assign delay_sr_U347_clk = clk;
assign delay_sr_U347_wdata = delay_sr_U344_rdata;
assign delay_sr_U347_rst_n = rst_n;
assign delay_sr_U347_flush = flush;
delay__U345 delay_sr_U347 (
    .clk(delay_sr_U347_clk),
    .wdata(delay_sr_U347_wdata),
    .rdata(delay_sr_U347_rdata),
    .rst_n(delay_sr_U347_rst_n),
    .flush(delay_sr_U347_flush)
);
assign delay_sr_U350_clk = clk;
assign delay_sr_U350_wdata = delay_sr_U347_rdata;
assign delay_sr_U350_rst_n = rst_n;
assign delay_sr_U350_flush = flush;
delay__U348 delay_sr_U350 (
    .clk(delay_sr_U350_clk),
    .wdata(delay_sr_U350_wdata),
    .rdata(delay_sr_U350_rdata),
    .rst_n(delay_sr_U350_rst_n),
    .flush(delay_sr_U350_flush)
);
assign op_hcompute_conv1_stencil_1_read[8] = delay_sr_U305_rdata;
assign op_hcompute_conv1_stencil_1_read[7] = delay_sr_U266_rdata;
assign op_hcompute_conv1_stencil_1_read[6] = delay_sr_U344_rdata;
assign op_hcompute_conv1_stencil_1_read[5] = delay_sr_U269_rdata;
assign op_hcompute_conv1_stencil_1_read[4] = delay_sr_U308_rdata;
assign op_hcompute_conv1_stencil_1_read[3] = delay_sr_U347_rdata;
assign op_hcompute_conv1_stencil_1_read[2] = delay_sr_U272_rdata;
assign op_hcompute_conv1_stencil_1_read[1] = delay_sr_U311_rdata;
assign op_hcompute_conv1_stencil_1_read[0] = delay_sr_U350_rdata;
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

module aff__U229 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U221 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U220 (
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
aff__U221 affine_func (
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

module aff__U214 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U206 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U205 (
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
aff__U206 affine_func (
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

module memtile_long_delay__U204 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U219_out;
wire [15:0] addrgen__U219_d [0:0];
wire [15:0] addrgen__U234_out;
wire [15:0] addrgen__U234_d [0:0];
wire ctrl__U213_clk;
wire ctrl__U213_valid;
wire [15:0] ctrl__U213_d [0:0];
wire ctrl__U228_clk;
wire ctrl__U228_valid;
wire [15:0] ctrl__U228_d [0:0];
wire inner_sram__U235_bank_clk;
wire inner_sram__U235_bank_rst_n;
wire inner_sram__U235_bank_flush;
wire inner_sram__U235_bank_ren_in;
wire inner_sram__U235_bank_wen_in;
wire [15:0] inner_sram__U235_bank_waddr;
wire [15:0] inner_sram__U235_bank_raddr;
wire [15:0] inner_sram__U235_bank_wdata;
assign addrgen__U219_d[0] = ctrl__U213_d[0];
aff__U214 addrgen__U219 (
    .out(addrgen__U219_out),
    .d(addrgen__U219_d)
);
assign addrgen__U234_d[0] = ctrl__U228_d[0];
aff__U229 addrgen__U234 (
    .out(addrgen__U234_out),
    .d(addrgen__U234_d)
);
assign ctrl__U213_clk = clk;
affine_controller__U205 ctrl__U213 (
    .clk(ctrl__U213_clk),
    .valid(ctrl__U213_valid),
    .d(ctrl__U213_d)
);
assign ctrl__U228_clk = clk;
affine_controller__U220 ctrl__U228 (
    .clk(ctrl__U228_clk),
    .valid(ctrl__U228_valid),
    .d(ctrl__U228_d)
);
assign inner_sram__U235_bank_clk = clk;
assign inner_sram__U235_bank_rst_n = rst_n;
assign inner_sram__U235_bank_flush = flush;
assign inner_sram__U235_bank_ren_in = ctrl__U228_valid;
assign inner_sram__U235_bank_wen_in = ctrl__U213_valid;
assign inner_sram__U235_bank_waddr = addrgen__U219_out;
assign inner_sram__U235_bank_raddr = addrgen__U234_out;
assign inner_sram__U235_bank_wdata = wdata;
inner_sram__U235 inner_sram__U235_bank (
    .clk(inner_sram__U235_bank_clk),
    .rst_n(inner_sram__U235_bank_rst_n),
    .flush(inner_sram__U235_bank_flush),
    .ren_in(inner_sram__U235_bank_ren_in),
    .wen_in(inner_sram__U235_bank_wen_in),
    .waddr(inner_sram__U235_bank_waddr),
    .raddr(inner_sram__U235_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U235_bank_wdata)
);
endmodule

module aff__U190 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U182 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U181 (
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
aff__U182 affine_func (
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

module aff__U175 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U167 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U166 (
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
aff__U167 affine_func (
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

module memtile_long_delay__U165 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U180_out;
wire [15:0] addrgen__U180_d [0:0];
wire [15:0] addrgen__U195_out;
wire [15:0] addrgen__U195_d [0:0];
wire ctrl__U174_clk;
wire ctrl__U174_valid;
wire [15:0] ctrl__U174_d [0:0];
wire ctrl__U189_clk;
wire ctrl__U189_valid;
wire [15:0] ctrl__U189_d [0:0];
wire inner_sram__U196_bank_clk;
wire inner_sram__U196_bank_rst_n;
wire inner_sram__U196_bank_flush;
wire inner_sram__U196_bank_ren_in;
wire inner_sram__U196_bank_wen_in;
wire [15:0] inner_sram__U196_bank_waddr;
wire [15:0] inner_sram__U196_bank_raddr;
wire [15:0] inner_sram__U196_bank_wdata;
assign addrgen__U180_d[0] = ctrl__U174_d[0];
aff__U175 addrgen__U180 (
    .out(addrgen__U180_out),
    .d(addrgen__U180_d)
);
assign addrgen__U195_d[0] = ctrl__U189_d[0];
aff__U190 addrgen__U195 (
    .out(addrgen__U195_out),
    .d(addrgen__U195_d)
);
assign ctrl__U174_clk = clk;
affine_controller__U166 ctrl__U174 (
    .clk(ctrl__U174_clk),
    .valid(ctrl__U174_valid),
    .d(ctrl__U174_d)
);
assign ctrl__U189_clk = clk;
affine_controller__U181 ctrl__U189 (
    .clk(ctrl__U189_clk),
    .valid(ctrl__U189_valid),
    .d(ctrl__U189_d)
);
assign inner_sram__U196_bank_clk = clk;
assign inner_sram__U196_bank_rst_n = rst_n;
assign inner_sram__U196_bank_flush = flush;
assign inner_sram__U196_bank_ren_in = ctrl__U189_valid;
assign inner_sram__U196_bank_wen_in = ctrl__U174_valid;
assign inner_sram__U196_bank_waddr = addrgen__U180_out;
assign inner_sram__U196_bank_raddr = addrgen__U195_out;
assign inner_sram__U196_bank_wdata = wdata;
inner_sram__U196 inner_sram__U196_bank (
    .clk(inner_sram__U196_bank_clk),
    .rst_n(inner_sram__U196_bank_rst_n),
    .flush(inner_sram__U196_bank_flush),
    .ren_in(inner_sram__U196_bank_ren_in),
    .wen_in(inner_sram__U196_bank_wen_in),
    .waddr(inner_sram__U196_bank_waddr),
    .raddr(inner_sram__U196_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U196_bank_wdata)
);
endmodule

module conv1_stencil_ub (
    input clk,
    input rst_n,
    input flush,
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
wire delay_sr_U197_clk;
wire [15:0] delay_sr_U197_wdata;
wire [15:0] delay_sr_U197_rdata;
wire delay_sr_U197_rst_n;
wire delay_sr_U197_flush;
wire delay_sr_U200_clk;
wire [15:0] delay_sr_U200_wdata;
wire [15:0] delay_sr_U200_rdata;
wire delay_sr_U200_rst_n;
wire delay_sr_U200_flush;
wire delay_sr_U203_clk;
wire [15:0] delay_sr_U203_wdata;
wire [15:0] delay_sr_U203_rdata;
wire delay_sr_U203_rst_n;
wire delay_sr_U203_flush;
wire delay_sr_U236_clk;
wire [15:0] delay_sr_U236_wdata;
wire [15:0] delay_sr_U236_rdata;
wire delay_sr_U236_rst_n;
wire delay_sr_U236_flush;
wire delay_sr_U239_clk;
wire [15:0] delay_sr_U239_wdata;
wire [15:0] delay_sr_U239_rdata;
wire delay_sr_U239_rst_n;
wire delay_sr_U239_flush;
wire delay_sr_U242_clk;
wire [15:0] delay_sr_U242_wdata;
wire [15:0] delay_sr_U242_rdata;
wire delay_sr_U242_rst_n;
wire delay_sr_U242_flush;
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
assign delay_sr_U197_clk = clk;
assign delay_sr_U197_wdata = delay_sr_U164_rdata;
assign delay_sr_U197_rst_n = rst_n;
assign delay_sr_U197_flush = flush;
memtile_long_delay__U165 delay_sr_U197 (
    .clk(delay_sr_U197_clk),
    .wdata(delay_sr_U197_wdata),
    .rdata(delay_sr_U197_rdata),
    .rst_n(delay_sr_U197_rst_n),
    .flush(delay_sr_U197_flush)
);
assign delay_sr_U200_clk = clk;
assign delay_sr_U200_wdata = delay_sr_U197_rdata;
assign delay_sr_U200_rst_n = rst_n;
assign delay_sr_U200_flush = flush;
delay__U198 delay_sr_U200 (
    .clk(delay_sr_U200_clk),
    .wdata(delay_sr_U200_wdata),
    .rdata(delay_sr_U200_rdata),
    .rst_n(delay_sr_U200_rst_n),
    .flush(delay_sr_U200_flush)
);
assign delay_sr_U203_clk = clk;
assign delay_sr_U203_wdata = delay_sr_U200_rdata;
assign delay_sr_U203_rst_n = rst_n;
assign delay_sr_U203_flush = flush;
delay__U201 delay_sr_U203 (
    .clk(delay_sr_U203_clk),
    .wdata(delay_sr_U203_wdata),
    .rdata(delay_sr_U203_rdata),
    .rst_n(delay_sr_U203_rst_n),
    .flush(delay_sr_U203_flush)
);
assign delay_sr_U236_clk = clk;
assign delay_sr_U236_wdata = delay_sr_U203_rdata;
assign delay_sr_U236_rst_n = rst_n;
assign delay_sr_U236_flush = flush;
memtile_long_delay__U204 delay_sr_U236 (
    .clk(delay_sr_U236_clk),
    .wdata(delay_sr_U236_wdata),
    .rdata(delay_sr_U236_rdata),
    .rst_n(delay_sr_U236_rst_n),
    .flush(delay_sr_U236_flush)
);
assign delay_sr_U239_clk = clk;
assign delay_sr_U239_wdata = delay_sr_U236_rdata;
assign delay_sr_U239_rst_n = rst_n;
assign delay_sr_U239_flush = flush;
delay__U237 delay_sr_U239 (
    .clk(delay_sr_U239_clk),
    .wdata(delay_sr_U239_wdata),
    .rdata(delay_sr_U239_rdata),
    .rst_n(delay_sr_U239_rst_n),
    .flush(delay_sr_U239_flush)
);
assign delay_sr_U242_clk = clk;
assign delay_sr_U242_wdata = delay_sr_U239_rdata;
assign delay_sr_U242_rst_n = rst_n;
assign delay_sr_U242_flush = flush;
delay__U240 delay_sr_U242 (
    .clk(delay_sr_U242_clk),
    .wdata(delay_sr_U242_wdata),
    .rdata(delay_sr_U242_rdata),
    .rst_n(delay_sr_U242_rst_n),
    .flush(delay_sr_U242_flush)
);
assign op_hcompute_conv2_stencil_1_read[8] = delay_sr_U158_rdata;
assign op_hcompute_conv2_stencil_1_read[7] = delay_sr_U164_rdata;
assign op_hcompute_conv2_stencil_1_read[6] = delay_sr_U197_rdata;
assign op_hcompute_conv2_stencil_1_read[5] = delay_sr_U200_rdata;
assign op_hcompute_conv2_stencil_1_read[4] = delay_sr_U203_rdata;
assign op_hcompute_conv2_stencil_1_read[3] = delay_sr_U236_rdata;
assign op_hcompute_conv2_stencil_1_read[2] = delay_sr_U239_rdata;
assign op_hcompute_conv2_stencil_1_read[1] = delay_sr_U242_rdata;
assign op_hcompute_conv2_stencil_1_read[0] = delay_sr_U161_rdata;
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
wire [15:0] _U351_in;
wire _U351_clk;
wire [15:0] _U351_out;
wire conv1_stencil_clk;
wire conv1_stencil_rst_n;
wire conv1_stencil_flush;
wire conv1_stencil_op_hcompute_conv1_stencil_1_write_wen;
wire [15:0] conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars [2:0];
wire [15:0] conv1_stencil_op_hcompute_conv1_stencil_1_write [0:0];
wire conv1_stencil_op_hcompute_conv2_stencil_1_read_ren;
wire [15:0] conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0];
wire [15:0] conv1_stencil_op_hcompute_conv2_stencil_1_read [8:0];
wire conv1_stencil_clkwrk_dsa0_clk;
wire conv1_stencil_clkwrk_dsa0_rst_n;
wire conv1_stencil_clkwrk_dsa0_flush;
wire conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ren;
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0];
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read [0:0];
wire conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_wen;
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars [2:0];
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write [0:0];
wire conv2_stencil_clk;
wire conv2_stencil_rst_n;
wire conv2_stencil_flush;
wire conv2_stencil_op_hcompute_conv2_stencil_1_write_wen;
wire [15:0] conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars [2:0];
wire [15:0] conv2_stencil_op_hcompute_conv2_stencil_1_write [0:0];
wire conv2_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] conv2_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire conv2_stencil_clkwrk_dsa1_clk;
wire conv2_stencil_clkwrk_dsa1_rst_n;
wire conv2_stencil_clkwrk_dsa1_flush;
wire conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ren;
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0];
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read [0:0];
wire conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_wen;
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars [2:0];
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write [0:0];
wire hw_input_global_wrapper_stencil_clk;
wire hw_input_global_wrapper_stencil_rst_n;
wire hw_input_global_wrapper_stencil_flush;
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
assign _U351_in = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
assign _U351_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U351 (
    .in(_U351_in),
    .clk(_U351_clk),
    .out(_U351_out)
);
assign conv1_stencil_clk = clk;
assign conv1_stencil_rst_n = rst_n;
assign conv1_stencil_flush = flush;
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
    .rst_n(conv1_stencil_rst_n),
    .flush(conv1_stencil_flush),
    .op_hcompute_conv1_stencil_1_write_wen(conv1_stencil_op_hcompute_conv1_stencil_1_write_wen),
    .op_hcompute_conv1_stencil_1_write_ctrl_vars(conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars),
    .op_hcompute_conv1_stencil_1_write(conv1_stencil_op_hcompute_conv1_stencil_1_write),
    .op_hcompute_conv2_stencil_1_read_ren(conv1_stencil_op_hcompute_conv2_stencil_1_read_ren),
    .op_hcompute_conv2_stencil_1_read_ctrl_vars(conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars),
    .op_hcompute_conv2_stencil_1_read(conv1_stencil_op_hcompute_conv2_stencil_1_read)
);
assign conv1_stencil_clkwrk_dsa0_clk = clk;
assign conv1_stencil_clkwrk_dsa0_rst_n = rst_n;
assign conv1_stencil_clkwrk_dsa0_flush = flush;
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
    .rst_n(conv1_stencil_clkwrk_dsa0_rst_n),
    .flush(conv1_stencil_clkwrk_dsa0_flush),
    .op_hcompute_conv1_stencil_1_read_ren(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ren),
    .op_hcompute_conv1_stencil_1_read_ctrl_vars(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars),
    .op_hcompute_conv1_stencil_1_read(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read),
    .op_hcompute_conv1_stencil_write_wen(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_wen),
    .op_hcompute_conv1_stencil_write_ctrl_vars(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars),
    .op_hcompute_conv1_stencil_write(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write)
);
assign conv2_stencil_clk = clk;
assign conv2_stencil_rst_n = rst_n;
assign conv2_stencil_flush = flush;
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
    .rst_n(conv2_stencil_rst_n),
    .flush(conv2_stencil_flush),
    .op_hcompute_conv2_stencil_1_write_wen(conv2_stencil_op_hcompute_conv2_stencil_1_write_wen),
    .op_hcompute_conv2_stencil_1_write_ctrl_vars(conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars),
    .op_hcompute_conv2_stencil_1_write(conv2_stencil_op_hcompute_conv2_stencil_1_write),
    .op_hcompute_hw_output_stencil_read_ren(conv2_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(conv2_stencil_op_hcompute_hw_output_stencil_read)
);
assign conv2_stencil_clkwrk_dsa1_clk = clk;
assign conv2_stencil_clkwrk_dsa1_rst_n = rst_n;
assign conv2_stencil_clkwrk_dsa1_flush = flush;
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
    .rst_n(conv2_stencil_clkwrk_dsa1_rst_n),
    .flush(conv2_stencil_clkwrk_dsa1_flush),
    .op_hcompute_conv2_stencil_1_read_ren(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ren),
    .op_hcompute_conv2_stencil_1_read_ctrl_vars(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars),
    .op_hcompute_conv2_stencil_1_read(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read),
    .op_hcompute_conv2_stencil_write_wen(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_wen),
    .op_hcompute_conv2_stencil_write_ctrl_vars(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars),
    .op_hcompute_conv2_stencil_write(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write)
);
assign hw_input_global_wrapper_stencil_clk = clk;
assign hw_input_global_wrapper_stencil_rst_n = rst_n;
assign hw_input_global_wrapper_stencil_flush = flush;
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
    .rst_n(hw_input_global_wrapper_stencil_rst_n),
    .flush(hw_input_global_wrapper_stencil_flush),
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
assign op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] = _U351_out;
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

