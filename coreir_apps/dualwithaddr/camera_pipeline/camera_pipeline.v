module hcompute_hw_output_stencil_2 (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_curved_stencil [0:0]
);
assign out_hw_output_stencil = in0_curved_stencil[0];
endmodule

module hcompute_hw_output_stencil_1 (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_curved_stencil [0:0]
);
assign out_hw_output_stencil = in0_curved_stencil[0];
endmodule

module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_curved_stencil [0:0]
);
assign out_hw_output_stencil = in0_curved_stencil[0];
endmodule

module hcompute_hw_input_global_wrapper_stencil (
    output [15:0] out_hw_input_global_wrapper_stencil,
    input [15:0] in0_hw_input_stencil [0:0]
);
assign out_hw_input_global_wrapper_stencil = in0_hw_input_stencil[0];
endmodule

module cu_op_hcompute_hw_output_stencil_2 (
    input clk,
    input [15:0] curved_stencil_op_hcompute_hw_output_stencil_2_read [0:0],
    output [15:0] hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_curved_stencil [0:0];
assign inner_compute_in0_curved_stencil[0] = curved_stencil_op_hcompute_hw_output_stencil_2_read[0];
hcompute_hw_output_stencil_2 inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_curved_stencil(inner_compute_in0_curved_stencil)
);
assign hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module cu_op_hcompute_hw_output_stencil_1 (
    input clk,
    input [15:0] curved_stencil_op_hcompute_hw_output_stencil_1_read [0:0],
    output [15:0] hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_curved_stencil [0:0];
assign inner_compute_in0_curved_stencil[0] = curved_stencil_op_hcompute_hw_output_stencil_1_read[0];
hcompute_hw_output_stencil_1 inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_curved_stencil(inner_compute_in0_curved_stencil)
);
assign hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] curved_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_curved_stencil [0:0];
assign inner_compute_in0_curved_stencil[0] = curved_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_curved_stencil(inner_compute_in0_curved_stencil)
);
assign hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
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

module delay__U2206 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U2207_in;
wire _U2207_clk;
wire [15:0] _U2207_out;
wire [15:0] _U2208_in;
wire _U2208_clk;
wire [15:0] _U2208_out;
wire [15:0] _U2209_in;
wire _U2209_clk;
wire [15:0] _U2209_out;
wire [15:0] _U2210_in;
wire _U2210_clk;
wire [15:0] _U2210_out;
wire [15:0] _U2211_in;
wire _U2211_clk;
wire [15:0] _U2211_out;
wire [15:0] _U2212_in;
wire _U2212_clk;
wire [15:0] _U2212_out;
wire [15:0] _U2213_in;
wire _U2213_clk;
wire [15:0] _U2213_out;
wire [15:0] _U2214_in;
wire _U2214_clk;
wire [15:0] _U2214_out;
wire [15:0] _U2215_in;
wire _U2215_clk;
wire [15:0] _U2215_out;
wire [15:0] _U2216_in;
wire _U2216_clk;
wire [15:0] _U2216_out;
wire [15:0] _U2217_in;
wire _U2217_clk;
wire [15:0] _U2217_out;
wire [15:0] _U2218_in;
wire _U2218_clk;
wire [15:0] _U2218_out;
wire [15:0] _U2219_in;
wire _U2219_clk;
wire [15:0] _U2219_out;
wire [15:0] _U2220_in;
wire _U2220_clk;
wire [15:0] _U2220_out;
wire [15:0] _U2221_in;
wire _U2221_clk;
wire [15:0] _U2221_out;
wire [15:0] _U2222_in;
wire _U2222_clk;
wire [15:0] _U2222_out;
wire [15:0] _U2223_in;
wire _U2223_clk;
wire [15:0] _U2223_out;
wire [15:0] _U2224_in;
wire _U2224_clk;
wire [15:0] _U2224_out;
wire [15:0] _U2225_in;
wire _U2225_clk;
wire [15:0] _U2225_out;
wire [15:0] _U2226_in;
wire _U2226_clk;
wire [15:0] _U2226_out;
wire [15:0] _U2227_in;
wire _U2227_clk;
wire [15:0] _U2227_out;
wire [15:0] _U2228_in;
wire _U2228_clk;
wire [15:0] _U2228_out;
wire [15:0] _U2229_in;
wire _U2229_clk;
wire [15:0] _U2229_out;
wire [15:0] _U2230_in;
wire _U2230_clk;
wire [15:0] _U2230_out;
wire [15:0] _U2231_in;
wire _U2231_clk;
wire [15:0] _U2231_out;
wire [15:0] _U2232_in;
wire _U2232_clk;
wire [15:0] _U2232_out;
wire [15:0] _U2233_in;
wire _U2233_clk;
wire [15:0] _U2233_out;
wire [15:0] _U2234_in;
wire _U2234_clk;
wire [15:0] _U2234_out;
wire [15:0] _U2235_in;
wire _U2235_clk;
wire [15:0] _U2235_out;
wire [15:0] _U2236_in;
wire _U2236_clk;
wire [15:0] _U2236_out;
wire [15:0] _U2237_in;
wire _U2237_clk;
wire [15:0] _U2237_out;
wire [15:0] _U2238_in;
wire _U2238_clk;
wire [15:0] _U2238_out;
wire [15:0] _U2239_in;
wire _U2239_clk;
wire [15:0] _U2239_out;
wire [15:0] _U2240_in;
wire _U2240_clk;
wire [15:0] _U2240_out;
wire [15:0] _U2241_in;
wire _U2241_clk;
wire [15:0] _U2241_out;
wire [15:0] _U2242_in;
wire _U2242_clk;
wire [15:0] _U2242_out;
wire [15:0] _U2243_in;
wire _U2243_clk;
wire [15:0] _U2243_out;
wire [15:0] _U2244_in;
wire _U2244_clk;
wire [15:0] _U2244_out;
wire [15:0] _U2245_in;
wire _U2245_clk;
wire [15:0] _U2245_out;
wire [15:0] _U2246_in;
wire _U2246_clk;
wire [15:0] _U2246_out;
wire [15:0] _U2247_in;
wire _U2247_clk;
wire [15:0] _U2247_out;
wire [15:0] _U2248_in;
wire _U2248_clk;
wire [15:0] _U2248_out;
wire [15:0] _U2249_in;
wire _U2249_clk;
wire [15:0] _U2249_out;
wire [15:0] _U2250_in;
wire _U2250_clk;
wire [15:0] _U2250_out;
wire [15:0] _U2251_in;
wire _U2251_clk;
wire [15:0] _U2251_out;
wire [15:0] _U2252_in;
wire _U2252_clk;
wire [15:0] _U2252_out;
wire [15:0] _U2253_in;
wire _U2253_clk;
wire [15:0] _U2253_out;
wire [15:0] _U2254_in;
wire _U2254_clk;
wire [15:0] _U2254_out;
wire [15:0] _U2255_in;
wire _U2255_clk;
wire [15:0] _U2255_out;
wire [15:0] _U2256_in;
wire _U2256_clk;
wire [15:0] _U2256_out;
wire [15:0] _U2257_in;
wire _U2257_clk;
wire [15:0] _U2257_out;
wire [15:0] _U2258_in;
wire _U2258_clk;
wire [15:0] _U2258_out;
wire [15:0] _U2259_in;
wire _U2259_clk;
wire [15:0] _U2259_out;
wire [15:0] _U2260_in;
wire _U2260_clk;
assign _U2207_in = wdata;
assign _U2207_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2207 (
    .in(_U2207_in),
    .clk(_U2207_clk),
    .out(_U2207_out)
);
assign _U2208_in = _U2207_out;
assign _U2208_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2208 (
    .in(_U2208_in),
    .clk(_U2208_clk),
    .out(_U2208_out)
);
assign _U2209_in = _U2208_out;
assign _U2209_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2209 (
    .in(_U2209_in),
    .clk(_U2209_clk),
    .out(_U2209_out)
);
assign _U2210_in = _U2209_out;
assign _U2210_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2210 (
    .in(_U2210_in),
    .clk(_U2210_clk),
    .out(_U2210_out)
);
assign _U2211_in = _U2210_out;
assign _U2211_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2211 (
    .in(_U2211_in),
    .clk(_U2211_clk),
    .out(_U2211_out)
);
assign _U2212_in = _U2211_out;
assign _U2212_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2212 (
    .in(_U2212_in),
    .clk(_U2212_clk),
    .out(_U2212_out)
);
assign _U2213_in = _U2212_out;
assign _U2213_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2213 (
    .in(_U2213_in),
    .clk(_U2213_clk),
    .out(_U2213_out)
);
assign _U2214_in = _U2213_out;
assign _U2214_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2214 (
    .in(_U2214_in),
    .clk(_U2214_clk),
    .out(_U2214_out)
);
assign _U2215_in = _U2214_out;
assign _U2215_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2215 (
    .in(_U2215_in),
    .clk(_U2215_clk),
    .out(_U2215_out)
);
assign _U2216_in = _U2215_out;
assign _U2216_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2216 (
    .in(_U2216_in),
    .clk(_U2216_clk),
    .out(_U2216_out)
);
assign _U2217_in = _U2216_out;
assign _U2217_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2217 (
    .in(_U2217_in),
    .clk(_U2217_clk),
    .out(_U2217_out)
);
assign _U2218_in = _U2217_out;
assign _U2218_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2218 (
    .in(_U2218_in),
    .clk(_U2218_clk),
    .out(_U2218_out)
);
assign _U2219_in = _U2218_out;
assign _U2219_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2219 (
    .in(_U2219_in),
    .clk(_U2219_clk),
    .out(_U2219_out)
);
assign _U2220_in = _U2219_out;
assign _U2220_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2220 (
    .in(_U2220_in),
    .clk(_U2220_clk),
    .out(_U2220_out)
);
assign _U2221_in = _U2220_out;
assign _U2221_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2221 (
    .in(_U2221_in),
    .clk(_U2221_clk),
    .out(_U2221_out)
);
assign _U2222_in = _U2221_out;
assign _U2222_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2222 (
    .in(_U2222_in),
    .clk(_U2222_clk),
    .out(_U2222_out)
);
assign _U2223_in = _U2222_out;
assign _U2223_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2223 (
    .in(_U2223_in),
    .clk(_U2223_clk),
    .out(_U2223_out)
);
assign _U2224_in = _U2223_out;
assign _U2224_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2224 (
    .in(_U2224_in),
    .clk(_U2224_clk),
    .out(_U2224_out)
);
assign _U2225_in = _U2224_out;
assign _U2225_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2225 (
    .in(_U2225_in),
    .clk(_U2225_clk),
    .out(_U2225_out)
);
assign _U2226_in = _U2225_out;
assign _U2226_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2226 (
    .in(_U2226_in),
    .clk(_U2226_clk),
    .out(_U2226_out)
);
assign _U2227_in = _U2226_out;
assign _U2227_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2227 (
    .in(_U2227_in),
    .clk(_U2227_clk),
    .out(_U2227_out)
);
assign _U2228_in = _U2227_out;
assign _U2228_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2228 (
    .in(_U2228_in),
    .clk(_U2228_clk),
    .out(_U2228_out)
);
assign _U2229_in = _U2228_out;
assign _U2229_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2229 (
    .in(_U2229_in),
    .clk(_U2229_clk),
    .out(_U2229_out)
);
assign _U2230_in = _U2229_out;
assign _U2230_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2230 (
    .in(_U2230_in),
    .clk(_U2230_clk),
    .out(_U2230_out)
);
assign _U2231_in = _U2230_out;
assign _U2231_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2231 (
    .in(_U2231_in),
    .clk(_U2231_clk),
    .out(_U2231_out)
);
assign _U2232_in = _U2231_out;
assign _U2232_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2232 (
    .in(_U2232_in),
    .clk(_U2232_clk),
    .out(_U2232_out)
);
assign _U2233_in = _U2232_out;
assign _U2233_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2233 (
    .in(_U2233_in),
    .clk(_U2233_clk),
    .out(_U2233_out)
);
assign _U2234_in = _U2233_out;
assign _U2234_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2234 (
    .in(_U2234_in),
    .clk(_U2234_clk),
    .out(_U2234_out)
);
assign _U2235_in = _U2234_out;
assign _U2235_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2235 (
    .in(_U2235_in),
    .clk(_U2235_clk),
    .out(_U2235_out)
);
assign _U2236_in = _U2235_out;
assign _U2236_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2236 (
    .in(_U2236_in),
    .clk(_U2236_clk),
    .out(_U2236_out)
);
assign _U2237_in = _U2236_out;
assign _U2237_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2237 (
    .in(_U2237_in),
    .clk(_U2237_clk),
    .out(_U2237_out)
);
assign _U2238_in = _U2237_out;
assign _U2238_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2238 (
    .in(_U2238_in),
    .clk(_U2238_clk),
    .out(_U2238_out)
);
assign _U2239_in = _U2238_out;
assign _U2239_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2239 (
    .in(_U2239_in),
    .clk(_U2239_clk),
    .out(_U2239_out)
);
assign _U2240_in = _U2239_out;
assign _U2240_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2240 (
    .in(_U2240_in),
    .clk(_U2240_clk),
    .out(_U2240_out)
);
assign _U2241_in = _U2240_out;
assign _U2241_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2241 (
    .in(_U2241_in),
    .clk(_U2241_clk),
    .out(_U2241_out)
);
assign _U2242_in = _U2241_out;
assign _U2242_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2242 (
    .in(_U2242_in),
    .clk(_U2242_clk),
    .out(_U2242_out)
);
assign _U2243_in = _U2242_out;
assign _U2243_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2243 (
    .in(_U2243_in),
    .clk(_U2243_clk),
    .out(_U2243_out)
);
assign _U2244_in = _U2243_out;
assign _U2244_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2244 (
    .in(_U2244_in),
    .clk(_U2244_clk),
    .out(_U2244_out)
);
assign _U2245_in = _U2244_out;
assign _U2245_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2245 (
    .in(_U2245_in),
    .clk(_U2245_clk),
    .out(_U2245_out)
);
assign _U2246_in = _U2245_out;
assign _U2246_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2246 (
    .in(_U2246_in),
    .clk(_U2246_clk),
    .out(_U2246_out)
);
assign _U2247_in = _U2246_out;
assign _U2247_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2247 (
    .in(_U2247_in),
    .clk(_U2247_clk),
    .out(_U2247_out)
);
assign _U2248_in = _U2247_out;
assign _U2248_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2248 (
    .in(_U2248_in),
    .clk(_U2248_clk),
    .out(_U2248_out)
);
assign _U2249_in = _U2248_out;
assign _U2249_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2249 (
    .in(_U2249_in),
    .clk(_U2249_clk),
    .out(_U2249_out)
);
assign _U2250_in = _U2249_out;
assign _U2250_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2250 (
    .in(_U2250_in),
    .clk(_U2250_clk),
    .out(_U2250_out)
);
assign _U2251_in = _U2250_out;
assign _U2251_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2251 (
    .in(_U2251_in),
    .clk(_U2251_clk),
    .out(_U2251_out)
);
assign _U2252_in = _U2251_out;
assign _U2252_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2252 (
    .in(_U2252_in),
    .clk(_U2252_clk),
    .out(_U2252_out)
);
assign _U2253_in = _U2252_out;
assign _U2253_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2253 (
    .in(_U2253_in),
    .clk(_U2253_clk),
    .out(_U2253_out)
);
assign _U2254_in = _U2253_out;
assign _U2254_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2254 (
    .in(_U2254_in),
    .clk(_U2254_clk),
    .out(_U2254_out)
);
assign _U2255_in = _U2254_out;
assign _U2255_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2255 (
    .in(_U2255_in),
    .clk(_U2255_clk),
    .out(_U2255_out)
);
assign _U2256_in = _U2255_out;
assign _U2256_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2256 (
    .in(_U2256_in),
    .clk(_U2256_clk),
    .out(_U2256_out)
);
assign _U2257_in = _U2256_out;
assign _U2257_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2257 (
    .in(_U2257_in),
    .clk(_U2257_clk),
    .out(_U2257_out)
);
assign _U2258_in = _U2257_out;
assign _U2258_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2258 (
    .in(_U2258_in),
    .clk(_U2258_clk),
    .out(_U2258_out)
);
assign _U2259_in = _U2258_out;
assign _U2259_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2259 (
    .in(_U2259_in),
    .clk(_U2259_clk),
    .out(_U2259_out)
);
assign _U2260_in = _U2259_out;
assign _U2260_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2260 (
    .in(_U2260_in),
    .clk(_U2260_clk),
    .out(rdata)
);
endmodule

module delay_tile__delay54 (
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
delay__U2206 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U1995 (
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
delay_tile__delay54 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U1967 (
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
delay_tile__delay54 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module delay__U2191 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U2192_in;
wire _U2192_clk;
wire [15:0] _U2192_out;
wire [15:0] _U2193_in;
wire _U2193_clk;
wire [15:0] _U2193_out;
wire [15:0] _U2194_in;
wire _U2194_clk;
wire [15:0] _U2194_out;
wire [15:0] _U2195_in;
wire _U2195_clk;
wire [15:0] _U2195_out;
wire [15:0] _U2196_in;
wire _U2196_clk;
wire [15:0] _U2196_out;
wire [15:0] _U2197_in;
wire _U2197_clk;
wire [15:0] _U2197_out;
wire [15:0] _U2198_in;
wire _U2198_clk;
wire [15:0] _U2198_out;
wire [15:0] _U2199_in;
wire _U2199_clk;
wire [15:0] _U2199_out;
wire [15:0] _U2200_in;
wire _U2200_clk;
wire [15:0] _U2200_out;
wire [15:0] _U2201_in;
wire _U2201_clk;
wire [15:0] _U2201_out;
wire [15:0] _U2202_in;
wire _U2202_clk;
wire [15:0] _U2202_out;
wire [15:0] _U2203_in;
wire _U2203_clk;
wire [15:0] _U2203_out;
wire [15:0] _U2204_in;
wire _U2204_clk;
wire [15:0] _U2204_out;
wire [15:0] _U2205_in;
wire _U2205_clk;
assign _U2192_in = wdata;
assign _U2192_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2192 (
    .in(_U2192_in),
    .clk(_U2192_clk),
    .out(_U2192_out)
);
assign _U2193_in = _U2192_out;
assign _U2193_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2193 (
    .in(_U2193_in),
    .clk(_U2193_clk),
    .out(_U2193_out)
);
assign _U2194_in = _U2193_out;
assign _U2194_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2194 (
    .in(_U2194_in),
    .clk(_U2194_clk),
    .out(_U2194_out)
);
assign _U2195_in = _U2194_out;
assign _U2195_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2195 (
    .in(_U2195_in),
    .clk(_U2195_clk),
    .out(_U2195_out)
);
assign _U2196_in = _U2195_out;
assign _U2196_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2196 (
    .in(_U2196_in),
    .clk(_U2196_clk),
    .out(_U2196_out)
);
assign _U2197_in = _U2196_out;
assign _U2197_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2197 (
    .in(_U2197_in),
    .clk(_U2197_clk),
    .out(_U2197_out)
);
assign _U2198_in = _U2197_out;
assign _U2198_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2198 (
    .in(_U2198_in),
    .clk(_U2198_clk),
    .out(_U2198_out)
);
assign _U2199_in = _U2198_out;
assign _U2199_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2199 (
    .in(_U2199_in),
    .clk(_U2199_clk),
    .out(_U2199_out)
);
assign _U2200_in = _U2199_out;
assign _U2200_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2200 (
    .in(_U2200_in),
    .clk(_U2200_clk),
    .out(_U2200_out)
);
assign _U2201_in = _U2200_out;
assign _U2201_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2201 (
    .in(_U2201_in),
    .clk(_U2201_clk),
    .out(_U2201_out)
);
assign _U2202_in = _U2201_out;
assign _U2202_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2202 (
    .in(_U2202_in),
    .clk(_U2202_clk),
    .out(_U2202_out)
);
assign _U2203_in = _U2202_out;
assign _U2203_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2203 (
    .in(_U2203_in),
    .clk(_U2203_clk),
    .out(_U2203_out)
);
assign _U2204_in = _U2203_out;
assign _U2204_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2204 (
    .in(_U2204_in),
    .clk(_U2204_clk),
    .out(_U2204_out)
);
assign _U2205_in = _U2204_out;
assign _U2205_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2205 (
    .in(_U2205_in),
    .clk(_U2205_clk),
    .out(rdata)
);
endmodule

module delay_tile__delay14 (
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
delay__U2191 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U1885 (
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
delay_tile__delay14 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U1867 (
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
delay_tile__delay14 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module delay__U2177 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U2178_in;
wire _U2178_clk;
wire [15:0] _U2178_out;
wire [15:0] _U2179_in;
wire _U2179_clk;
wire [15:0] _U2179_out;
wire [15:0] _U2180_in;
wire _U2180_clk;
wire [15:0] _U2180_out;
wire [15:0] _U2181_in;
wire _U2181_clk;
wire [15:0] _U2181_out;
wire [15:0] _U2182_in;
wire _U2182_clk;
wire [15:0] _U2182_out;
wire [15:0] _U2183_in;
wire _U2183_clk;
wire [15:0] _U2183_out;
wire [15:0] _U2184_in;
wire _U2184_clk;
wire [15:0] _U2184_out;
wire [15:0] _U2185_in;
wire _U2185_clk;
wire [15:0] _U2185_out;
wire [15:0] _U2186_in;
wire _U2186_clk;
wire [15:0] _U2186_out;
wire [15:0] _U2187_in;
wire _U2187_clk;
wire [15:0] _U2187_out;
wire [15:0] _U2188_in;
wire _U2188_clk;
wire [15:0] _U2188_out;
wire [15:0] _U2189_in;
wire _U2189_clk;
wire [15:0] _U2189_out;
wire [15:0] _U2190_in;
wire _U2190_clk;
assign _U2178_in = wdata;
assign _U2178_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2178 (
    .in(_U2178_in),
    .clk(_U2178_clk),
    .out(_U2178_out)
);
assign _U2179_in = _U2178_out;
assign _U2179_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2179 (
    .in(_U2179_in),
    .clk(_U2179_clk),
    .out(_U2179_out)
);
assign _U2180_in = _U2179_out;
assign _U2180_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2180 (
    .in(_U2180_in),
    .clk(_U2180_clk),
    .out(_U2180_out)
);
assign _U2181_in = _U2180_out;
assign _U2181_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2181 (
    .in(_U2181_in),
    .clk(_U2181_clk),
    .out(_U2181_out)
);
assign _U2182_in = _U2181_out;
assign _U2182_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2182 (
    .in(_U2182_in),
    .clk(_U2182_clk),
    .out(_U2182_out)
);
assign _U2183_in = _U2182_out;
assign _U2183_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2183 (
    .in(_U2183_in),
    .clk(_U2183_clk),
    .out(_U2183_out)
);
assign _U2184_in = _U2183_out;
assign _U2184_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2184 (
    .in(_U2184_in),
    .clk(_U2184_clk),
    .out(_U2184_out)
);
assign _U2185_in = _U2184_out;
assign _U2185_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2185 (
    .in(_U2185_in),
    .clk(_U2185_clk),
    .out(_U2185_out)
);
assign _U2186_in = _U2185_out;
assign _U2186_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2186 (
    .in(_U2186_in),
    .clk(_U2186_clk),
    .out(_U2186_out)
);
assign _U2187_in = _U2186_out;
assign _U2187_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2187 (
    .in(_U2187_in),
    .clk(_U2187_clk),
    .out(_U2187_out)
);
assign _U2188_in = _U2187_out;
assign _U2188_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2188 (
    .in(_U2188_in),
    .clk(_U2188_clk),
    .out(_U2188_out)
);
assign _U2189_in = _U2188_out;
assign _U2189_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2189 (
    .in(_U2189_in),
    .clk(_U2189_clk),
    .out(_U2189_out)
);
assign _U2190_in = _U2189_out;
assign _U2190_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2190 (
    .in(_U2190_in),
    .clk(_U2190_clk),
    .out(rdata)
);
endmodule

module delay_tile__delay13 (
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
delay__U2177 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U1865 (
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
delay_tile__delay13 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module delay__U2050 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U2051_in;
wire _U2051_clk;
wire [15:0] _U2051_out;
wire [15:0] _U2052_in;
wire _U2052_clk;
wire [15:0] _U2052_out;
wire [15:0] _U2053_in;
wire _U2053_clk;
wire [15:0] _U2053_out;
wire [15:0] _U2054_in;
wire _U2054_clk;
wire [15:0] _U2054_out;
wire [15:0] _U2055_in;
wire _U2055_clk;
wire [15:0] _U2055_out;
wire [15:0] _U2056_in;
wire _U2056_clk;
wire [15:0] _U2056_out;
wire [15:0] _U2057_in;
wire _U2057_clk;
wire [15:0] _U2057_out;
wire [15:0] _U2058_in;
wire _U2058_clk;
wire [15:0] _U2058_out;
wire [15:0] _U2059_in;
wire _U2059_clk;
wire [15:0] _U2059_out;
wire [15:0] _U2060_in;
wire _U2060_clk;
wire [15:0] _U2060_out;
wire [15:0] _U2061_in;
wire _U2061_clk;
wire [15:0] _U2061_out;
wire [15:0] _U2062_in;
wire _U2062_clk;
wire [15:0] _U2062_out;
wire [15:0] _U2063_in;
wire _U2063_clk;
wire [15:0] _U2063_out;
wire [15:0] _U2064_in;
wire _U2064_clk;
wire [15:0] _U2064_out;
wire [15:0] _U2065_in;
wire _U2065_clk;
wire [15:0] _U2065_out;
wire [15:0] _U2066_in;
wire _U2066_clk;
wire [15:0] _U2066_out;
wire [15:0] _U2067_in;
wire _U2067_clk;
wire [15:0] _U2067_out;
wire [15:0] _U2068_in;
wire _U2068_clk;
wire [15:0] _U2068_out;
wire [15:0] _U2069_in;
wire _U2069_clk;
wire [15:0] _U2069_out;
wire [15:0] _U2070_in;
wire _U2070_clk;
wire [15:0] _U2070_out;
wire [15:0] _U2071_in;
wire _U2071_clk;
wire [15:0] _U2071_out;
wire [15:0] _U2072_in;
wire _U2072_clk;
wire [15:0] _U2072_out;
wire [15:0] _U2073_in;
wire _U2073_clk;
wire [15:0] _U2073_out;
wire [15:0] _U2074_in;
wire _U2074_clk;
wire [15:0] _U2074_out;
wire [15:0] _U2075_in;
wire _U2075_clk;
wire [15:0] _U2075_out;
wire [15:0] _U2076_in;
wire _U2076_clk;
wire [15:0] _U2076_out;
wire [15:0] _U2077_in;
wire _U2077_clk;
wire [15:0] _U2077_out;
wire [15:0] _U2078_in;
wire _U2078_clk;
wire [15:0] _U2078_out;
wire [15:0] _U2079_in;
wire _U2079_clk;
wire [15:0] _U2079_out;
wire [15:0] _U2080_in;
wire _U2080_clk;
wire [15:0] _U2080_out;
wire [15:0] _U2081_in;
wire _U2081_clk;
wire [15:0] _U2081_out;
wire [15:0] _U2082_in;
wire _U2082_clk;
wire [15:0] _U2082_out;
wire [15:0] _U2083_in;
wire _U2083_clk;
wire [15:0] _U2083_out;
wire [15:0] _U2084_in;
wire _U2084_clk;
wire [15:0] _U2084_out;
wire [15:0] _U2085_in;
wire _U2085_clk;
wire [15:0] _U2085_out;
wire [15:0] _U2086_in;
wire _U2086_clk;
wire [15:0] _U2086_out;
wire [15:0] _U2087_in;
wire _U2087_clk;
wire [15:0] _U2087_out;
wire [15:0] _U2088_in;
wire _U2088_clk;
wire [15:0] _U2088_out;
wire [15:0] _U2089_in;
wire _U2089_clk;
wire [15:0] _U2089_out;
wire [15:0] _U2090_in;
wire _U2090_clk;
wire [15:0] _U2090_out;
wire [15:0] _U2091_in;
wire _U2091_clk;
wire [15:0] _U2091_out;
wire [15:0] _U2092_in;
wire _U2092_clk;
wire [15:0] _U2092_out;
wire [15:0] _U2093_in;
wire _U2093_clk;
wire [15:0] _U2093_out;
wire [15:0] _U2094_in;
wire _U2094_clk;
wire [15:0] _U2094_out;
wire [15:0] _U2095_in;
wire _U2095_clk;
wire [15:0] _U2095_out;
wire [15:0] _U2096_in;
wire _U2096_clk;
wire [15:0] _U2096_out;
wire [15:0] _U2097_in;
wire _U2097_clk;
wire [15:0] _U2097_out;
wire [15:0] _U2098_in;
wire _U2098_clk;
wire [15:0] _U2098_out;
wire [15:0] _U2099_in;
wire _U2099_clk;
wire [15:0] _U2099_out;
wire [15:0] _U2100_in;
wire _U2100_clk;
wire [15:0] _U2100_out;
wire [15:0] _U2101_in;
wire _U2101_clk;
wire [15:0] _U2101_out;
wire [15:0] _U2102_in;
wire _U2102_clk;
wire [15:0] _U2102_out;
wire [15:0] _U2103_in;
wire _U2103_clk;
wire [15:0] _U2103_out;
wire [15:0] _U2104_in;
wire _U2104_clk;
wire [15:0] _U2104_out;
wire [15:0] _U2105_in;
wire _U2105_clk;
wire [15:0] _U2105_out;
wire [15:0] _U2106_in;
wire _U2106_clk;
wire [15:0] _U2106_out;
wire [15:0] _U2107_in;
wire _U2107_clk;
wire [15:0] _U2107_out;
wire [15:0] _U2108_in;
wire _U2108_clk;
wire [15:0] _U2108_out;
wire [15:0] _U2109_in;
wire _U2109_clk;
wire [15:0] _U2109_out;
wire [15:0] _U2110_in;
wire _U2110_clk;
wire [15:0] _U2110_out;
wire [15:0] _U2111_in;
wire _U2111_clk;
wire [15:0] _U2111_out;
wire [15:0] _U2112_in;
wire _U2112_clk;
wire [15:0] _U2112_out;
wire [15:0] _U2113_in;
wire _U2113_clk;
wire [15:0] _U2113_out;
wire [15:0] _U2114_in;
wire _U2114_clk;
wire [15:0] _U2114_out;
wire [15:0] _U2115_in;
wire _U2115_clk;
wire [15:0] _U2115_out;
wire [15:0] _U2116_in;
wire _U2116_clk;
wire [15:0] _U2116_out;
wire [15:0] _U2117_in;
wire _U2117_clk;
wire [15:0] _U2117_out;
wire [15:0] _U2118_in;
wire _U2118_clk;
wire [15:0] _U2118_out;
wire [15:0] _U2119_in;
wire _U2119_clk;
wire [15:0] _U2119_out;
wire [15:0] _U2120_in;
wire _U2120_clk;
wire [15:0] _U2120_out;
wire [15:0] _U2121_in;
wire _U2121_clk;
wire [15:0] _U2121_out;
wire [15:0] _U2122_in;
wire _U2122_clk;
wire [15:0] _U2122_out;
wire [15:0] _U2123_in;
wire _U2123_clk;
wire [15:0] _U2123_out;
wire [15:0] _U2124_in;
wire _U2124_clk;
wire [15:0] _U2124_out;
wire [15:0] _U2125_in;
wire _U2125_clk;
wire [15:0] _U2125_out;
wire [15:0] _U2126_in;
wire _U2126_clk;
wire [15:0] _U2126_out;
wire [15:0] _U2127_in;
wire _U2127_clk;
wire [15:0] _U2127_out;
wire [15:0] _U2128_in;
wire _U2128_clk;
wire [15:0] _U2128_out;
wire [15:0] _U2129_in;
wire _U2129_clk;
wire [15:0] _U2129_out;
wire [15:0] _U2130_in;
wire _U2130_clk;
wire [15:0] _U2130_out;
wire [15:0] _U2131_in;
wire _U2131_clk;
wire [15:0] _U2131_out;
wire [15:0] _U2132_in;
wire _U2132_clk;
wire [15:0] _U2132_out;
wire [15:0] _U2133_in;
wire _U2133_clk;
wire [15:0] _U2133_out;
wire [15:0] _U2134_in;
wire _U2134_clk;
wire [15:0] _U2134_out;
wire [15:0] _U2135_in;
wire _U2135_clk;
wire [15:0] _U2135_out;
wire [15:0] _U2136_in;
wire _U2136_clk;
wire [15:0] _U2136_out;
wire [15:0] _U2137_in;
wire _U2137_clk;
wire [15:0] _U2137_out;
wire [15:0] _U2138_in;
wire _U2138_clk;
wire [15:0] _U2138_out;
wire [15:0] _U2139_in;
wire _U2139_clk;
wire [15:0] _U2139_out;
wire [15:0] _U2140_in;
wire _U2140_clk;
wire [15:0] _U2140_out;
wire [15:0] _U2141_in;
wire _U2141_clk;
wire [15:0] _U2141_out;
wire [15:0] _U2142_in;
wire _U2142_clk;
wire [15:0] _U2142_out;
wire [15:0] _U2143_in;
wire _U2143_clk;
wire [15:0] _U2143_out;
wire [15:0] _U2144_in;
wire _U2144_clk;
wire [15:0] _U2144_out;
wire [15:0] _U2145_in;
wire _U2145_clk;
wire [15:0] _U2145_out;
wire [15:0] _U2146_in;
wire _U2146_clk;
wire [15:0] _U2146_out;
wire [15:0] _U2147_in;
wire _U2147_clk;
wire [15:0] _U2147_out;
wire [15:0] _U2148_in;
wire _U2148_clk;
wire [15:0] _U2148_out;
wire [15:0] _U2149_in;
wire _U2149_clk;
wire [15:0] _U2149_out;
wire [15:0] _U2150_in;
wire _U2150_clk;
wire [15:0] _U2150_out;
wire [15:0] _U2151_in;
wire _U2151_clk;
wire [15:0] _U2151_out;
wire [15:0] _U2152_in;
wire _U2152_clk;
wire [15:0] _U2152_out;
wire [15:0] _U2153_in;
wire _U2153_clk;
wire [15:0] _U2153_out;
wire [15:0] _U2154_in;
wire _U2154_clk;
wire [15:0] _U2154_out;
wire [15:0] _U2155_in;
wire _U2155_clk;
wire [15:0] _U2155_out;
wire [15:0] _U2156_in;
wire _U2156_clk;
wire [15:0] _U2156_out;
wire [15:0] _U2157_in;
wire _U2157_clk;
wire [15:0] _U2157_out;
wire [15:0] _U2158_in;
wire _U2158_clk;
wire [15:0] _U2158_out;
wire [15:0] _U2159_in;
wire _U2159_clk;
wire [15:0] _U2159_out;
wire [15:0] _U2160_in;
wire _U2160_clk;
wire [15:0] _U2160_out;
wire [15:0] _U2161_in;
wire _U2161_clk;
wire [15:0] _U2161_out;
wire [15:0] _U2162_in;
wire _U2162_clk;
wire [15:0] _U2162_out;
wire [15:0] _U2163_in;
wire _U2163_clk;
wire [15:0] _U2163_out;
wire [15:0] _U2164_in;
wire _U2164_clk;
wire [15:0] _U2164_out;
wire [15:0] _U2165_in;
wire _U2165_clk;
wire [15:0] _U2165_out;
wire [15:0] _U2166_in;
wire _U2166_clk;
wire [15:0] _U2166_out;
wire [15:0] _U2167_in;
wire _U2167_clk;
wire [15:0] _U2167_out;
wire [15:0] _U2168_in;
wire _U2168_clk;
wire [15:0] _U2168_out;
wire [15:0] _U2169_in;
wire _U2169_clk;
wire [15:0] _U2169_out;
wire [15:0] _U2170_in;
wire _U2170_clk;
wire [15:0] _U2170_out;
wire [15:0] _U2171_in;
wire _U2171_clk;
wire [15:0] _U2171_out;
wire [15:0] _U2172_in;
wire _U2172_clk;
wire [15:0] _U2172_out;
wire [15:0] _U2173_in;
wire _U2173_clk;
wire [15:0] _U2173_out;
wire [15:0] _U2174_in;
wire _U2174_clk;
wire [15:0] _U2174_out;
wire [15:0] _U2175_in;
wire _U2175_clk;
wire [15:0] _U2175_out;
wire [15:0] _U2176_in;
wire _U2176_clk;
assign _U2051_in = wdata;
assign _U2051_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2051 (
    .in(_U2051_in),
    .clk(_U2051_clk),
    .out(_U2051_out)
);
assign _U2052_in = _U2051_out;
assign _U2052_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2052 (
    .in(_U2052_in),
    .clk(_U2052_clk),
    .out(_U2052_out)
);
assign _U2053_in = _U2052_out;
assign _U2053_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2053 (
    .in(_U2053_in),
    .clk(_U2053_clk),
    .out(_U2053_out)
);
assign _U2054_in = _U2053_out;
assign _U2054_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2054 (
    .in(_U2054_in),
    .clk(_U2054_clk),
    .out(_U2054_out)
);
assign _U2055_in = _U2054_out;
assign _U2055_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2055 (
    .in(_U2055_in),
    .clk(_U2055_clk),
    .out(_U2055_out)
);
assign _U2056_in = _U2055_out;
assign _U2056_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2056 (
    .in(_U2056_in),
    .clk(_U2056_clk),
    .out(_U2056_out)
);
assign _U2057_in = _U2056_out;
assign _U2057_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2057 (
    .in(_U2057_in),
    .clk(_U2057_clk),
    .out(_U2057_out)
);
assign _U2058_in = _U2057_out;
assign _U2058_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2058 (
    .in(_U2058_in),
    .clk(_U2058_clk),
    .out(_U2058_out)
);
assign _U2059_in = _U2058_out;
assign _U2059_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2059 (
    .in(_U2059_in),
    .clk(_U2059_clk),
    .out(_U2059_out)
);
assign _U2060_in = _U2059_out;
assign _U2060_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2060 (
    .in(_U2060_in),
    .clk(_U2060_clk),
    .out(_U2060_out)
);
assign _U2061_in = _U2060_out;
assign _U2061_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2061 (
    .in(_U2061_in),
    .clk(_U2061_clk),
    .out(_U2061_out)
);
assign _U2062_in = _U2061_out;
assign _U2062_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2062 (
    .in(_U2062_in),
    .clk(_U2062_clk),
    .out(_U2062_out)
);
assign _U2063_in = _U2062_out;
assign _U2063_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2063 (
    .in(_U2063_in),
    .clk(_U2063_clk),
    .out(_U2063_out)
);
assign _U2064_in = _U2063_out;
assign _U2064_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2064 (
    .in(_U2064_in),
    .clk(_U2064_clk),
    .out(_U2064_out)
);
assign _U2065_in = _U2064_out;
assign _U2065_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2065 (
    .in(_U2065_in),
    .clk(_U2065_clk),
    .out(_U2065_out)
);
assign _U2066_in = _U2065_out;
assign _U2066_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2066 (
    .in(_U2066_in),
    .clk(_U2066_clk),
    .out(_U2066_out)
);
assign _U2067_in = _U2066_out;
assign _U2067_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2067 (
    .in(_U2067_in),
    .clk(_U2067_clk),
    .out(_U2067_out)
);
assign _U2068_in = _U2067_out;
assign _U2068_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2068 (
    .in(_U2068_in),
    .clk(_U2068_clk),
    .out(_U2068_out)
);
assign _U2069_in = _U2068_out;
assign _U2069_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2069 (
    .in(_U2069_in),
    .clk(_U2069_clk),
    .out(_U2069_out)
);
assign _U2070_in = _U2069_out;
assign _U2070_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2070 (
    .in(_U2070_in),
    .clk(_U2070_clk),
    .out(_U2070_out)
);
assign _U2071_in = _U2070_out;
assign _U2071_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2071 (
    .in(_U2071_in),
    .clk(_U2071_clk),
    .out(_U2071_out)
);
assign _U2072_in = _U2071_out;
assign _U2072_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2072 (
    .in(_U2072_in),
    .clk(_U2072_clk),
    .out(_U2072_out)
);
assign _U2073_in = _U2072_out;
assign _U2073_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2073 (
    .in(_U2073_in),
    .clk(_U2073_clk),
    .out(_U2073_out)
);
assign _U2074_in = _U2073_out;
assign _U2074_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2074 (
    .in(_U2074_in),
    .clk(_U2074_clk),
    .out(_U2074_out)
);
assign _U2075_in = _U2074_out;
assign _U2075_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2075 (
    .in(_U2075_in),
    .clk(_U2075_clk),
    .out(_U2075_out)
);
assign _U2076_in = _U2075_out;
assign _U2076_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2076 (
    .in(_U2076_in),
    .clk(_U2076_clk),
    .out(_U2076_out)
);
assign _U2077_in = _U2076_out;
assign _U2077_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2077 (
    .in(_U2077_in),
    .clk(_U2077_clk),
    .out(_U2077_out)
);
assign _U2078_in = _U2077_out;
assign _U2078_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2078 (
    .in(_U2078_in),
    .clk(_U2078_clk),
    .out(_U2078_out)
);
assign _U2079_in = _U2078_out;
assign _U2079_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2079 (
    .in(_U2079_in),
    .clk(_U2079_clk),
    .out(_U2079_out)
);
assign _U2080_in = _U2079_out;
assign _U2080_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2080 (
    .in(_U2080_in),
    .clk(_U2080_clk),
    .out(_U2080_out)
);
assign _U2081_in = _U2080_out;
assign _U2081_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2081 (
    .in(_U2081_in),
    .clk(_U2081_clk),
    .out(_U2081_out)
);
assign _U2082_in = _U2081_out;
assign _U2082_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2082 (
    .in(_U2082_in),
    .clk(_U2082_clk),
    .out(_U2082_out)
);
assign _U2083_in = _U2082_out;
assign _U2083_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2083 (
    .in(_U2083_in),
    .clk(_U2083_clk),
    .out(_U2083_out)
);
assign _U2084_in = _U2083_out;
assign _U2084_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2084 (
    .in(_U2084_in),
    .clk(_U2084_clk),
    .out(_U2084_out)
);
assign _U2085_in = _U2084_out;
assign _U2085_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2085 (
    .in(_U2085_in),
    .clk(_U2085_clk),
    .out(_U2085_out)
);
assign _U2086_in = _U2085_out;
assign _U2086_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2086 (
    .in(_U2086_in),
    .clk(_U2086_clk),
    .out(_U2086_out)
);
assign _U2087_in = _U2086_out;
assign _U2087_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2087 (
    .in(_U2087_in),
    .clk(_U2087_clk),
    .out(_U2087_out)
);
assign _U2088_in = _U2087_out;
assign _U2088_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2088 (
    .in(_U2088_in),
    .clk(_U2088_clk),
    .out(_U2088_out)
);
assign _U2089_in = _U2088_out;
assign _U2089_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2089 (
    .in(_U2089_in),
    .clk(_U2089_clk),
    .out(_U2089_out)
);
assign _U2090_in = _U2089_out;
assign _U2090_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2090 (
    .in(_U2090_in),
    .clk(_U2090_clk),
    .out(_U2090_out)
);
assign _U2091_in = _U2090_out;
assign _U2091_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2091 (
    .in(_U2091_in),
    .clk(_U2091_clk),
    .out(_U2091_out)
);
assign _U2092_in = _U2091_out;
assign _U2092_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2092 (
    .in(_U2092_in),
    .clk(_U2092_clk),
    .out(_U2092_out)
);
assign _U2093_in = _U2092_out;
assign _U2093_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2093 (
    .in(_U2093_in),
    .clk(_U2093_clk),
    .out(_U2093_out)
);
assign _U2094_in = _U2093_out;
assign _U2094_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2094 (
    .in(_U2094_in),
    .clk(_U2094_clk),
    .out(_U2094_out)
);
assign _U2095_in = _U2094_out;
assign _U2095_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2095 (
    .in(_U2095_in),
    .clk(_U2095_clk),
    .out(_U2095_out)
);
assign _U2096_in = _U2095_out;
assign _U2096_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2096 (
    .in(_U2096_in),
    .clk(_U2096_clk),
    .out(_U2096_out)
);
assign _U2097_in = _U2096_out;
assign _U2097_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2097 (
    .in(_U2097_in),
    .clk(_U2097_clk),
    .out(_U2097_out)
);
assign _U2098_in = _U2097_out;
assign _U2098_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2098 (
    .in(_U2098_in),
    .clk(_U2098_clk),
    .out(_U2098_out)
);
assign _U2099_in = _U2098_out;
assign _U2099_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2099 (
    .in(_U2099_in),
    .clk(_U2099_clk),
    .out(_U2099_out)
);
assign _U2100_in = _U2099_out;
assign _U2100_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2100 (
    .in(_U2100_in),
    .clk(_U2100_clk),
    .out(_U2100_out)
);
assign _U2101_in = _U2100_out;
assign _U2101_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2101 (
    .in(_U2101_in),
    .clk(_U2101_clk),
    .out(_U2101_out)
);
assign _U2102_in = _U2101_out;
assign _U2102_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2102 (
    .in(_U2102_in),
    .clk(_U2102_clk),
    .out(_U2102_out)
);
assign _U2103_in = _U2102_out;
assign _U2103_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2103 (
    .in(_U2103_in),
    .clk(_U2103_clk),
    .out(_U2103_out)
);
assign _U2104_in = _U2103_out;
assign _U2104_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2104 (
    .in(_U2104_in),
    .clk(_U2104_clk),
    .out(_U2104_out)
);
assign _U2105_in = _U2104_out;
assign _U2105_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2105 (
    .in(_U2105_in),
    .clk(_U2105_clk),
    .out(_U2105_out)
);
assign _U2106_in = _U2105_out;
assign _U2106_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2106 (
    .in(_U2106_in),
    .clk(_U2106_clk),
    .out(_U2106_out)
);
assign _U2107_in = _U2106_out;
assign _U2107_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2107 (
    .in(_U2107_in),
    .clk(_U2107_clk),
    .out(_U2107_out)
);
assign _U2108_in = _U2107_out;
assign _U2108_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2108 (
    .in(_U2108_in),
    .clk(_U2108_clk),
    .out(_U2108_out)
);
assign _U2109_in = _U2108_out;
assign _U2109_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2109 (
    .in(_U2109_in),
    .clk(_U2109_clk),
    .out(_U2109_out)
);
assign _U2110_in = _U2109_out;
assign _U2110_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2110 (
    .in(_U2110_in),
    .clk(_U2110_clk),
    .out(_U2110_out)
);
assign _U2111_in = _U2110_out;
assign _U2111_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2111 (
    .in(_U2111_in),
    .clk(_U2111_clk),
    .out(_U2111_out)
);
assign _U2112_in = _U2111_out;
assign _U2112_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2112 (
    .in(_U2112_in),
    .clk(_U2112_clk),
    .out(_U2112_out)
);
assign _U2113_in = _U2112_out;
assign _U2113_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2113 (
    .in(_U2113_in),
    .clk(_U2113_clk),
    .out(_U2113_out)
);
assign _U2114_in = _U2113_out;
assign _U2114_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2114 (
    .in(_U2114_in),
    .clk(_U2114_clk),
    .out(_U2114_out)
);
assign _U2115_in = _U2114_out;
assign _U2115_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2115 (
    .in(_U2115_in),
    .clk(_U2115_clk),
    .out(_U2115_out)
);
assign _U2116_in = _U2115_out;
assign _U2116_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2116 (
    .in(_U2116_in),
    .clk(_U2116_clk),
    .out(_U2116_out)
);
assign _U2117_in = _U2116_out;
assign _U2117_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2117 (
    .in(_U2117_in),
    .clk(_U2117_clk),
    .out(_U2117_out)
);
assign _U2118_in = _U2117_out;
assign _U2118_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2118 (
    .in(_U2118_in),
    .clk(_U2118_clk),
    .out(_U2118_out)
);
assign _U2119_in = _U2118_out;
assign _U2119_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2119 (
    .in(_U2119_in),
    .clk(_U2119_clk),
    .out(_U2119_out)
);
assign _U2120_in = _U2119_out;
assign _U2120_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2120 (
    .in(_U2120_in),
    .clk(_U2120_clk),
    .out(_U2120_out)
);
assign _U2121_in = _U2120_out;
assign _U2121_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2121 (
    .in(_U2121_in),
    .clk(_U2121_clk),
    .out(_U2121_out)
);
assign _U2122_in = _U2121_out;
assign _U2122_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2122 (
    .in(_U2122_in),
    .clk(_U2122_clk),
    .out(_U2122_out)
);
assign _U2123_in = _U2122_out;
assign _U2123_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2123 (
    .in(_U2123_in),
    .clk(_U2123_clk),
    .out(_U2123_out)
);
assign _U2124_in = _U2123_out;
assign _U2124_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2124 (
    .in(_U2124_in),
    .clk(_U2124_clk),
    .out(_U2124_out)
);
assign _U2125_in = _U2124_out;
assign _U2125_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2125 (
    .in(_U2125_in),
    .clk(_U2125_clk),
    .out(_U2125_out)
);
assign _U2126_in = _U2125_out;
assign _U2126_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2126 (
    .in(_U2126_in),
    .clk(_U2126_clk),
    .out(_U2126_out)
);
assign _U2127_in = _U2126_out;
assign _U2127_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2127 (
    .in(_U2127_in),
    .clk(_U2127_clk),
    .out(_U2127_out)
);
assign _U2128_in = _U2127_out;
assign _U2128_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2128 (
    .in(_U2128_in),
    .clk(_U2128_clk),
    .out(_U2128_out)
);
assign _U2129_in = _U2128_out;
assign _U2129_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2129 (
    .in(_U2129_in),
    .clk(_U2129_clk),
    .out(_U2129_out)
);
assign _U2130_in = _U2129_out;
assign _U2130_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2130 (
    .in(_U2130_in),
    .clk(_U2130_clk),
    .out(_U2130_out)
);
assign _U2131_in = _U2130_out;
assign _U2131_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2131 (
    .in(_U2131_in),
    .clk(_U2131_clk),
    .out(_U2131_out)
);
assign _U2132_in = _U2131_out;
assign _U2132_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2132 (
    .in(_U2132_in),
    .clk(_U2132_clk),
    .out(_U2132_out)
);
assign _U2133_in = _U2132_out;
assign _U2133_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2133 (
    .in(_U2133_in),
    .clk(_U2133_clk),
    .out(_U2133_out)
);
assign _U2134_in = _U2133_out;
assign _U2134_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2134 (
    .in(_U2134_in),
    .clk(_U2134_clk),
    .out(_U2134_out)
);
assign _U2135_in = _U2134_out;
assign _U2135_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2135 (
    .in(_U2135_in),
    .clk(_U2135_clk),
    .out(_U2135_out)
);
assign _U2136_in = _U2135_out;
assign _U2136_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2136 (
    .in(_U2136_in),
    .clk(_U2136_clk),
    .out(_U2136_out)
);
assign _U2137_in = _U2136_out;
assign _U2137_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2137 (
    .in(_U2137_in),
    .clk(_U2137_clk),
    .out(_U2137_out)
);
assign _U2138_in = _U2137_out;
assign _U2138_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2138 (
    .in(_U2138_in),
    .clk(_U2138_clk),
    .out(_U2138_out)
);
assign _U2139_in = _U2138_out;
assign _U2139_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2139 (
    .in(_U2139_in),
    .clk(_U2139_clk),
    .out(_U2139_out)
);
assign _U2140_in = _U2139_out;
assign _U2140_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2140 (
    .in(_U2140_in),
    .clk(_U2140_clk),
    .out(_U2140_out)
);
assign _U2141_in = _U2140_out;
assign _U2141_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2141 (
    .in(_U2141_in),
    .clk(_U2141_clk),
    .out(_U2141_out)
);
assign _U2142_in = _U2141_out;
assign _U2142_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2142 (
    .in(_U2142_in),
    .clk(_U2142_clk),
    .out(_U2142_out)
);
assign _U2143_in = _U2142_out;
assign _U2143_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2143 (
    .in(_U2143_in),
    .clk(_U2143_clk),
    .out(_U2143_out)
);
assign _U2144_in = _U2143_out;
assign _U2144_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2144 (
    .in(_U2144_in),
    .clk(_U2144_clk),
    .out(_U2144_out)
);
assign _U2145_in = _U2144_out;
assign _U2145_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2145 (
    .in(_U2145_in),
    .clk(_U2145_clk),
    .out(_U2145_out)
);
assign _U2146_in = _U2145_out;
assign _U2146_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2146 (
    .in(_U2146_in),
    .clk(_U2146_clk),
    .out(_U2146_out)
);
assign _U2147_in = _U2146_out;
assign _U2147_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2147 (
    .in(_U2147_in),
    .clk(_U2147_clk),
    .out(_U2147_out)
);
assign _U2148_in = _U2147_out;
assign _U2148_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2148 (
    .in(_U2148_in),
    .clk(_U2148_clk),
    .out(_U2148_out)
);
assign _U2149_in = _U2148_out;
assign _U2149_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2149 (
    .in(_U2149_in),
    .clk(_U2149_clk),
    .out(_U2149_out)
);
assign _U2150_in = _U2149_out;
assign _U2150_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2150 (
    .in(_U2150_in),
    .clk(_U2150_clk),
    .out(_U2150_out)
);
assign _U2151_in = _U2150_out;
assign _U2151_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2151 (
    .in(_U2151_in),
    .clk(_U2151_clk),
    .out(_U2151_out)
);
assign _U2152_in = _U2151_out;
assign _U2152_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2152 (
    .in(_U2152_in),
    .clk(_U2152_clk),
    .out(_U2152_out)
);
assign _U2153_in = _U2152_out;
assign _U2153_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2153 (
    .in(_U2153_in),
    .clk(_U2153_clk),
    .out(_U2153_out)
);
assign _U2154_in = _U2153_out;
assign _U2154_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2154 (
    .in(_U2154_in),
    .clk(_U2154_clk),
    .out(_U2154_out)
);
assign _U2155_in = _U2154_out;
assign _U2155_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2155 (
    .in(_U2155_in),
    .clk(_U2155_clk),
    .out(_U2155_out)
);
assign _U2156_in = _U2155_out;
assign _U2156_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2156 (
    .in(_U2156_in),
    .clk(_U2156_clk),
    .out(_U2156_out)
);
assign _U2157_in = _U2156_out;
assign _U2157_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2157 (
    .in(_U2157_in),
    .clk(_U2157_clk),
    .out(_U2157_out)
);
assign _U2158_in = _U2157_out;
assign _U2158_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2158 (
    .in(_U2158_in),
    .clk(_U2158_clk),
    .out(_U2158_out)
);
assign _U2159_in = _U2158_out;
assign _U2159_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2159 (
    .in(_U2159_in),
    .clk(_U2159_clk),
    .out(_U2159_out)
);
assign _U2160_in = _U2159_out;
assign _U2160_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2160 (
    .in(_U2160_in),
    .clk(_U2160_clk),
    .out(_U2160_out)
);
assign _U2161_in = _U2160_out;
assign _U2161_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2161 (
    .in(_U2161_in),
    .clk(_U2161_clk),
    .out(_U2161_out)
);
assign _U2162_in = _U2161_out;
assign _U2162_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2162 (
    .in(_U2162_in),
    .clk(_U2162_clk),
    .out(_U2162_out)
);
assign _U2163_in = _U2162_out;
assign _U2163_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2163 (
    .in(_U2163_in),
    .clk(_U2163_clk),
    .out(_U2163_out)
);
assign _U2164_in = _U2163_out;
assign _U2164_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2164 (
    .in(_U2164_in),
    .clk(_U2164_clk),
    .out(_U2164_out)
);
assign _U2165_in = _U2164_out;
assign _U2165_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2165 (
    .in(_U2165_in),
    .clk(_U2165_clk),
    .out(_U2165_out)
);
assign _U2166_in = _U2165_out;
assign _U2166_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2166 (
    .in(_U2166_in),
    .clk(_U2166_clk),
    .out(_U2166_out)
);
assign _U2167_in = _U2166_out;
assign _U2167_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2167 (
    .in(_U2167_in),
    .clk(_U2167_clk),
    .out(_U2167_out)
);
assign _U2168_in = _U2167_out;
assign _U2168_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2168 (
    .in(_U2168_in),
    .clk(_U2168_clk),
    .out(_U2168_out)
);
assign _U2169_in = _U2168_out;
assign _U2169_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2169 (
    .in(_U2169_in),
    .clk(_U2169_clk),
    .out(_U2169_out)
);
assign _U2170_in = _U2169_out;
assign _U2170_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2170 (
    .in(_U2170_in),
    .clk(_U2170_clk),
    .out(_U2170_out)
);
assign _U2171_in = _U2170_out;
assign _U2171_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2171 (
    .in(_U2171_in),
    .clk(_U2171_clk),
    .out(_U2171_out)
);
assign _U2172_in = _U2171_out;
assign _U2172_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2172 (
    .in(_U2172_in),
    .clk(_U2172_clk),
    .out(_U2172_out)
);
assign _U2173_in = _U2172_out;
assign _U2173_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2173 (
    .in(_U2173_in),
    .clk(_U2173_clk),
    .out(_U2173_out)
);
assign _U2174_in = _U2173_out;
assign _U2174_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2174 (
    .in(_U2174_in),
    .clk(_U2174_clk),
    .out(_U2174_out)
);
assign _U2175_in = _U2174_out;
assign _U2175_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2175 (
    .in(_U2175_in),
    .clk(_U2175_clk),
    .out(_U2175_out)
);
assign _U2176_in = _U2175_out;
assign _U2176_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2176 (
    .in(_U2176_in),
    .clk(_U2176_clk),
    .out(rdata)
);
endmodule

module delay_tile__delay126 (
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
delay__U2050 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2034 (
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
delay_tile__delay126 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U2024 (
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
delay_tile__delay126 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module delay__U2037 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U2038_in;
wire _U2038_clk;
wire [15:0] _U2038_out;
wire [15:0] _U2039_in;
wire _U2039_clk;
wire [15:0] _U2039_out;
wire [15:0] _U2040_in;
wire _U2040_clk;
wire [15:0] _U2040_out;
wire [15:0] _U2041_in;
wire _U2041_clk;
wire [15:0] _U2041_out;
wire [15:0] _U2042_in;
wire _U2042_clk;
wire [15:0] _U2042_out;
wire [15:0] _U2043_in;
wire _U2043_clk;
wire [15:0] _U2043_out;
wire [15:0] _U2044_in;
wire _U2044_clk;
wire [15:0] _U2044_out;
wire [15:0] _U2045_in;
wire _U2045_clk;
wire [15:0] _U2045_out;
wire [15:0] _U2046_in;
wire _U2046_clk;
wire [15:0] _U2046_out;
wire [15:0] _U2047_in;
wire _U2047_clk;
wire [15:0] _U2047_out;
wire [15:0] _U2048_in;
wire _U2048_clk;
wire [15:0] _U2048_out;
wire [15:0] _U2049_in;
wire _U2049_clk;
assign _U2038_in = wdata;
assign _U2038_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2038 (
    .in(_U2038_in),
    .clk(_U2038_clk),
    .out(_U2038_out)
);
assign _U2039_in = _U2038_out;
assign _U2039_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2039 (
    .in(_U2039_in),
    .clk(_U2039_clk),
    .out(_U2039_out)
);
assign _U2040_in = _U2039_out;
assign _U2040_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2040 (
    .in(_U2040_in),
    .clk(_U2040_clk),
    .out(_U2040_out)
);
assign _U2041_in = _U2040_out;
assign _U2041_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2041 (
    .in(_U2041_in),
    .clk(_U2041_clk),
    .out(_U2041_out)
);
assign _U2042_in = _U2041_out;
assign _U2042_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2042 (
    .in(_U2042_in),
    .clk(_U2042_clk),
    .out(_U2042_out)
);
assign _U2043_in = _U2042_out;
assign _U2043_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2043 (
    .in(_U2043_in),
    .clk(_U2043_clk),
    .out(_U2043_out)
);
assign _U2044_in = _U2043_out;
assign _U2044_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2044 (
    .in(_U2044_in),
    .clk(_U2044_clk),
    .out(_U2044_out)
);
assign _U2045_in = _U2044_out;
assign _U2045_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2045 (
    .in(_U2045_in),
    .clk(_U2045_clk),
    .out(_U2045_out)
);
assign _U2046_in = _U2045_out;
assign _U2046_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2046 (
    .in(_U2046_in),
    .clk(_U2046_clk),
    .out(_U2046_out)
);
assign _U2047_in = _U2046_out;
assign _U2047_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2047 (
    .in(_U2047_in),
    .clk(_U2047_clk),
    .out(_U2047_out)
);
assign _U2048_in = _U2047_out;
assign _U2048_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2048 (
    .in(_U2048_in),
    .clk(_U2048_clk),
    .out(_U2048_out)
);
assign _U2049_in = _U2048_out;
assign _U2049_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2049 (
    .in(_U2049_in),
    .clk(_U2049_clk),
    .out(rdata)
);
endmodule

module delay_tile__delay12 (
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
delay__U2037 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U1909 (
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
delay_tile__delay12 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U1871 (
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
delay_tile__delay12 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U1869 (
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
delay_tile__delay12 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module corrected_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_corrected_stencil_1_write_wen,
    input [15:0] op_hcompute_corrected_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_corrected_stencil_1_write [0:0],
    input op_hcompute_corrected_stencil_2_write_wen,
    input [15:0] op_hcompute_corrected_stencil_2_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_corrected_stencil_2_write [0:0],
    input op_hcompute_corrected_stencil_write_wen,
    input [15:0] op_hcompute_corrected_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_corrected_stencil_write [0:0],
    input op_hcompute_curved_stencil_1_read_ren,
    input [15:0] op_hcompute_curved_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_curved_stencil_1_read [0:0],
    input op_hcompute_curved_stencil_2_read_ren,
    input [15:0] op_hcompute_curved_stencil_2_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_curved_stencil_2_read [0:0],
    input op_hcompute_curved_stencil_read_ren,
    input [15:0] op_hcompute_curved_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_curved_stencil_read [0:0]
);
wire delay_sr_U1866_clk;
wire [15:0] delay_sr_U1866_wdata;
wire [15:0] delay_sr_U1866_rdata;
wire delay_sr_U1866_rst_n;
wire delay_sr_U1866_flush;
wire delay_sr_U1868_clk;
wire [15:0] delay_sr_U1868_wdata;
wire [15:0] delay_sr_U1868_rdata;
wire delay_sr_U1868_rst_n;
wire delay_sr_U1868_flush;
wire delay_sr_U1870_clk;
wire [15:0] delay_sr_U1870_wdata;
wire [15:0] delay_sr_U1870_rdata;
wire delay_sr_U1870_rst_n;
wire delay_sr_U1870_flush;
assign delay_sr_U1866_clk = clk;
assign delay_sr_U1866_wdata = op_hcompute_corrected_stencil_1_write[0];
assign delay_sr_U1866_rst_n = rst_n;
assign delay_sr_U1866_flush = flush;
memtile_long_delay__U1865 delay_sr_U1866 (
    .clk(delay_sr_U1866_clk),
    .wdata(delay_sr_U1866_wdata),
    .rdata(delay_sr_U1866_rdata),
    .rst_n(delay_sr_U1866_rst_n),
    .flush(delay_sr_U1866_flush)
);
assign delay_sr_U1868_clk = clk;
assign delay_sr_U1868_wdata = op_hcompute_corrected_stencil_2_write[0];
assign delay_sr_U1868_rst_n = rst_n;
assign delay_sr_U1868_flush = flush;
memtile_long_delay__U1867 delay_sr_U1868 (
    .clk(delay_sr_U1868_clk),
    .wdata(delay_sr_U1868_wdata),
    .rdata(delay_sr_U1868_rdata),
    .rst_n(delay_sr_U1868_rst_n),
    .flush(delay_sr_U1868_flush)
);
assign delay_sr_U1870_clk = clk;
assign delay_sr_U1870_wdata = op_hcompute_corrected_stencil_write[0];
assign delay_sr_U1870_rst_n = rst_n;
assign delay_sr_U1870_flush = flush;
memtile_long_delay__U1869 delay_sr_U1870 (
    .clk(delay_sr_U1870_clk),
    .wdata(delay_sr_U1870_wdata),
    .rdata(delay_sr_U1870_rdata),
    .rst_n(delay_sr_U1870_rst_n),
    .flush(delay_sr_U1870_flush)
);
assign op_hcompute_curved_stencil_1_read[0] = delay_sr_U1866_rdata;
assign op_hcompute_curved_stencil_2_read[0] = delay_sr_U1868_rdata;
assign op_hcompute_curved_stencil_read[0] = delay_sr_U1870_rdata;
endmodule

module delay__U2030 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2031_in;
wire _U2031_clk;
wire [15:0] _U2031_out;
wire [15:0] _U2032_in;
wire _U2032_clk;
assign _U2031_in = wdata;
assign _U2031_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2031 (
    .in(_U2031_in),
    .clk(_U2031_clk),
    .out(_U2031_out)
);
assign _U2032_in = _U2031_out;
assign _U2032_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2032 (
    .in(_U2032_in),
    .clk(_U2032_clk),
    .out(rdata)
);
endmodule

module delay__U2026 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2027_in;
wire _U2027_clk;
wire [15:0] _U2027_out;
wire [15:0] _U2028_in;
wire _U2028_clk;
assign _U2027_in = wdata;
assign _U2027_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2027 (
    .in(_U2027_in),
    .clk(_U2027_clk),
    .out(_U2027_out)
);
assign _U2028_in = _U2027_out;
assign _U2028_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2028 (
    .in(_U2028_in),
    .clk(_U2028_clk),
    .out(rdata)
);
endmodule

module delay__U2017 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2018_in;
wire _U2018_clk;
wire [15:0] _U2018_out;
wire [15:0] _U2019_in;
wire _U2019_clk;
wire [15:0] _U2019_out;
wire [15:0] _U2020_in;
wire _U2020_clk;
wire [15:0] _U2020_out;
wire [15:0] _U2021_in;
wire _U2021_clk;
wire [15:0] _U2021_out;
wire [15:0] _U2022_in;
wire _U2022_clk;
assign _U2018_in = wdata;
assign _U2018_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2018 (
    .in(_U2018_in),
    .clk(_U2018_clk),
    .out(_U2018_out)
);
assign _U2019_in = _U2018_out;
assign _U2019_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2019 (
    .in(_U2019_in),
    .clk(_U2019_clk),
    .out(_U2019_out)
);
assign _U2020_in = _U2019_out;
assign _U2020_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2020 (
    .in(_U2020_in),
    .clk(_U2020_clk),
    .out(_U2020_out)
);
assign _U2021_in = _U2020_out;
assign _U2021_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2021 (
    .in(_U2021_in),
    .clk(_U2021_clk),
    .out(_U2021_out)
);
assign _U2022_in = _U2021_out;
assign _U2022_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2022 (
    .in(_U2022_in),
    .clk(_U2022_clk),
    .out(rdata)
);
endmodule

module hw_input_global_wrapper_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_denoised_1_stencil_read_ren,
    input [15:0] op_hcompute_denoised_1_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_denoised_1_stencil_read [4:0],
    input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0]
);
wire delay_sr_U2023_clk;
wire [15:0] delay_sr_U2023_wdata;
wire [15:0] delay_sr_U2023_rdata;
wire delay_sr_U2023_rst_n;
wire delay_sr_U2023_flush;
wire delay_sr_U2025_clk;
wire [15:0] delay_sr_U2025_wdata;
wire [15:0] delay_sr_U2025_rdata;
wire delay_sr_U2025_rst_n;
wire delay_sr_U2025_flush;
wire delay_sr_U2029_clk;
wire [15:0] delay_sr_U2029_wdata;
wire [15:0] delay_sr_U2029_rdata;
wire delay_sr_U2029_rst_n;
wire delay_sr_U2029_flush;
wire delay_sr_U2033_clk;
wire [15:0] delay_sr_U2033_wdata;
wire [15:0] delay_sr_U2033_rdata;
wire delay_sr_U2033_rst_n;
wire delay_sr_U2033_flush;
wire delay_sr_U2035_clk;
wire [15:0] delay_sr_U2035_wdata;
wire [15:0] delay_sr_U2035_rdata;
wire delay_sr_U2035_rst_n;
wire delay_sr_U2035_flush;
assign delay_sr_U2023_clk = clk;
assign delay_sr_U2023_wdata = op_hcompute_hw_input_global_wrapper_stencil_write[0];
assign delay_sr_U2023_rst_n = rst_n;
assign delay_sr_U2023_flush = flush;
delay__U2017 delay_sr_U2023 (
    .clk(delay_sr_U2023_clk),
    .wdata(delay_sr_U2023_wdata),
    .rdata(delay_sr_U2023_rdata),
    .rst_n(delay_sr_U2023_rst_n),
    .flush(delay_sr_U2023_flush)
);
assign delay_sr_U2025_clk = clk;
assign delay_sr_U2025_wdata = delay_sr_U2023_rdata;
assign delay_sr_U2025_rst_n = rst_n;
assign delay_sr_U2025_flush = flush;
memtile_long_delay__U2024 delay_sr_U2025 (
    .clk(delay_sr_U2025_clk),
    .wdata(delay_sr_U2025_wdata),
    .rdata(delay_sr_U2025_rdata),
    .rst_n(delay_sr_U2025_rst_n),
    .flush(delay_sr_U2025_flush)
);
assign delay_sr_U2029_clk = clk;
assign delay_sr_U2029_wdata = delay_sr_U2025_rdata;
assign delay_sr_U2029_rst_n = rst_n;
assign delay_sr_U2029_flush = flush;
delay__U2026 delay_sr_U2029 (
    .clk(delay_sr_U2029_clk),
    .wdata(delay_sr_U2029_wdata),
    .rdata(delay_sr_U2029_rdata),
    .rst_n(delay_sr_U2029_rst_n),
    .flush(delay_sr_U2029_flush)
);
assign delay_sr_U2033_clk = clk;
assign delay_sr_U2033_wdata = delay_sr_U2029_rdata;
assign delay_sr_U2033_rst_n = rst_n;
assign delay_sr_U2033_flush = flush;
delay__U2030 delay_sr_U2033 (
    .clk(delay_sr_U2033_clk),
    .wdata(delay_sr_U2033_wdata),
    .rdata(delay_sr_U2033_rdata),
    .rst_n(delay_sr_U2033_rst_n),
    .flush(delay_sr_U2033_flush)
);
assign delay_sr_U2035_clk = clk;
assign delay_sr_U2035_wdata = delay_sr_U2033_rdata;
assign delay_sr_U2035_rst_n = rst_n;
assign delay_sr_U2035_flush = flush;
memtile_long_delay__U2034 delay_sr_U2035 (
    .clk(delay_sr_U2035_clk),
    .wdata(delay_sr_U2035_wdata),
    .rdata(delay_sr_U2035_rdata),
    .rst_n(delay_sr_U2035_rst_n),
    .flush(delay_sr_U2035_flush)
);
assign op_hcompute_denoised_1_stencil_read[4] = delay_sr_U2025_rdata;
assign op_hcompute_denoised_1_stencil_read[3] = delay_sr_U2033_rdata;
assign op_hcompute_denoised_1_stencil_read[2] = delay_sr_U2035_rdata;
assign op_hcompute_denoised_1_stencil_read[1] = delay_sr_U2023_rdata;
assign op_hcompute_denoised_1_stencil_read[0] = delay_sr_U2029_rdata;
endmodule

module delay__U2014 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2015_in;
wire _U2015_clk;
assign _U2015_in = wdata;
assign _U2015_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2015 (
    .in(_U2015_in),
    .clk(_U2015_clk),
    .out(rdata)
);
endmodule

module delay__U2008 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2009_in;
wire _U2009_clk;
wire [15:0] _U2009_out;
wire [15:0] _U2010_in;
wire _U2010_clk;
wire [15:0] _U2010_out;
wire [15:0] _U2011_in;
wire _U2011_clk;
wire [15:0] _U2011_out;
wire [15:0] _U2012_in;
wire _U2012_clk;
assign _U2009_in = wdata;
assign _U2009_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2009 (
    .in(_U2009_in),
    .clk(_U2009_clk),
    .out(_U2009_out)
);
assign _U2010_in = _U2009_out;
assign _U2010_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2010 (
    .in(_U2010_in),
    .clk(_U2010_clk),
    .out(_U2010_out)
);
assign _U2011_in = _U2010_out;
assign _U2011_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2011 (
    .in(_U2011_in),
    .clk(_U2011_clk),
    .out(_U2011_out)
);
assign _U2012_in = _U2011_out;
assign _U2012_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2012 (
    .in(_U2012_in),
    .clk(_U2012_clk),
    .out(rdata)
);
endmodule

module delay__U2003 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2004_in;
wire _U2004_clk;
wire [15:0] _U2004_out;
wire [15:0] _U2005_in;
wire _U2005_clk;
wire [15:0] _U2005_out;
wire [15:0] _U2006_in;
wire _U2006_clk;
assign _U2004_in = wdata;
assign _U2004_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2004 (
    .in(_U2004_in),
    .clk(_U2004_clk),
    .out(_U2004_out)
);
assign _U2005_in = _U2004_out;
assign _U2005_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2005 (
    .in(_U2005_in),
    .clk(_U2005_clk),
    .out(_U2005_out)
);
assign _U2006_in = _U2005_out;
assign _U2006_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2006 (
    .in(_U2006_in),
    .clk(_U2006_clk),
    .out(rdata)
);
endmodule

module delay__U2000 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U2001_in;
wire _U2001_clk;
assign _U2001_in = wdata;
assign _U2001_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2001 (
    .in(_U2001_in),
    .clk(_U2001_clk),
    .out(rdata)
);
endmodule

module delay__U1997 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1998_in;
wire _U1998_clk;
assign _U1998_in = wdata;
assign _U1998_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1998 (
    .in(_U1998_in),
    .clk(_U1998_clk),
    .out(rdata)
);
endmodule

module delay__U1992 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1993_in;
wire _U1993_clk;
assign _U1993_in = wdata;
assign _U1993_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1993 (
    .in(_U1993_in),
    .clk(_U1993_clk),
    .out(rdata)
);
endmodule

module delay__U1989 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1990_in;
wire _U1990_clk;
assign _U1990_in = wdata;
assign _U1990_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1990 (
    .in(_U1990_in),
    .clk(_U1990_clk),
    .out(rdata)
);
endmodule

module delay__U1985 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1986_in;
wire _U1986_clk;
wire [15:0] _U1986_out;
wire [15:0] _U1987_in;
wire _U1987_clk;
assign _U1986_in = wdata;
assign _U1986_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1986 (
    .in(_U1986_in),
    .clk(_U1986_clk),
    .out(_U1986_out)
);
assign _U1987_in = _U1986_out;
assign _U1987_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1987 (
    .in(_U1987_in),
    .clk(_U1987_clk),
    .out(rdata)
);
endmodule

module delay__U1982 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1983_in;
wire _U1983_clk;
assign _U1983_in = wdata;
assign _U1983_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1983 (
    .in(_U1983_in),
    .clk(_U1983_clk),
    .out(rdata)
);
endmodule

module delay__U1979 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1980_in;
wire _U1980_clk;
assign _U1980_in = wdata;
assign _U1980_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1980 (
    .in(_U1980_in),
    .clk(_U1980_clk),
    .out(rdata)
);
endmodule

module delay__U1975 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1976_in;
wire _U1976_clk;
wire [15:0] _U1976_out;
wire [15:0] _U1977_in;
wire _U1977_clk;
assign _U1976_in = wdata;
assign _U1976_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1976 (
    .in(_U1976_in),
    .clk(_U1976_clk),
    .out(_U1976_out)
);
assign _U1977_in = _U1976_out;
assign _U1977_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1977 (
    .in(_U1977_in),
    .clk(_U1977_clk),
    .out(rdata)
);
endmodule

module delay__U1972 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1973_in;
wire _U1973_clk;
assign _U1973_in = wdata;
assign _U1973_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1973 (
    .in(_U1973_in),
    .clk(_U1973_clk),
    .out(rdata)
);
endmodule

module delay__U1969 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1970_in;
wire _U1970_clk;
assign _U1970_in = wdata;
assign _U1970_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1970 (
    .in(_U1970_in),
    .clk(_U1970_clk),
    .out(rdata)
);
endmodule

module delay__U1964 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1965_in;
wire _U1965_clk;
assign _U1965_in = wdata;
assign _U1965_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1965 (
    .in(_U1965_in),
    .clk(_U1965_clk),
    .out(rdata)
);
endmodule

module delay__U1961 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1962_in;
wire _U1962_clk;
assign _U1962_in = wdata;
assign _U1962_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1962 (
    .in(_U1962_in),
    .clk(_U1962_clk),
    .out(rdata)
);
endmodule

module delay__U1956 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1957_in;
wire _U1957_clk;
wire [15:0] _U1957_out;
wire [15:0] _U1958_in;
wire _U1958_clk;
wire [15:0] _U1958_out;
wire [15:0] _U1959_in;
wire _U1959_clk;
assign _U1957_in = wdata;
assign _U1957_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1957 (
    .in(_U1957_in),
    .clk(_U1957_clk),
    .out(_U1957_out)
);
assign _U1958_in = _U1957_out;
assign _U1958_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1958 (
    .in(_U1958_in),
    .clk(_U1958_clk),
    .out(_U1958_out)
);
assign _U1959_in = _U1958_out;
assign _U1959_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1959 (
    .in(_U1959_in),
    .clk(_U1959_clk),
    .out(rdata)
);
endmodule

module delay__U1950 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1951_in;
wire _U1951_clk;
wire [15:0] _U1951_out;
wire [15:0] _U1952_in;
wire _U1952_clk;
wire [15:0] _U1952_out;
wire [15:0] _U1953_in;
wire _U1953_clk;
wire [15:0] _U1953_out;
wire [15:0] _U1954_in;
wire _U1954_clk;
assign _U1951_in = wdata;
assign _U1951_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1951 (
    .in(_U1951_in),
    .clk(_U1951_clk),
    .out(_U1951_out)
);
assign _U1952_in = _U1951_out;
assign _U1952_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1952 (
    .in(_U1952_in),
    .clk(_U1952_clk),
    .out(_U1952_out)
);
assign _U1953_in = _U1952_out;
assign _U1953_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1953 (
    .in(_U1953_in),
    .clk(_U1953_clk),
    .out(_U1953_out)
);
assign _U1954_in = _U1953_out;
assign _U1954_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1954 (
    .in(_U1954_in),
    .clk(_U1954_clk),
    .out(rdata)
);
endmodule

module delay__U1947 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1948_in;
wire _U1948_clk;
assign _U1948_in = wdata;
assign _U1948_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1948 (
    .in(_U1948_in),
    .clk(_U1948_clk),
    .out(rdata)
);
endmodule

module delay__U1941 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1942_in;
wire _U1942_clk;
wire [15:0] _U1942_out;
wire [15:0] _U1943_in;
wire _U1943_clk;
wire [15:0] _U1943_out;
wire [15:0] _U1944_in;
wire _U1944_clk;
wire [15:0] _U1944_out;
wire [15:0] _U1945_in;
wire _U1945_clk;
assign _U1942_in = wdata;
assign _U1942_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1942 (
    .in(_U1942_in),
    .clk(_U1942_clk),
    .out(_U1942_out)
);
assign _U1943_in = _U1942_out;
assign _U1943_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1943 (
    .in(_U1943_in),
    .clk(_U1943_clk),
    .out(_U1943_out)
);
assign _U1944_in = _U1943_out;
assign _U1944_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1944 (
    .in(_U1944_in),
    .clk(_U1944_clk),
    .out(_U1944_out)
);
assign _U1945_in = _U1944_out;
assign _U1945_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1945 (
    .in(_U1945_in),
    .clk(_U1945_clk),
    .out(rdata)
);
endmodule

module denoised_1_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_demosaicked_1_stencil_1_read_ren,
    input [15:0] op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_demosaicked_1_stencil_1_read [4:0],
    input op_hcompute_demosaicked_1_stencil_2_read_ren,
    input [15:0] op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_demosaicked_1_stencil_2_read [7:0],
    input op_hcompute_demosaicked_1_stencil_read_ren,
    input [15:0] op_hcompute_demosaicked_1_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_demosaicked_1_stencil_read [7:0],
    input op_hcompute_denoised_1_stencil_write_wen,
    input [15:0] op_hcompute_denoised_1_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_denoised_1_stencil_write [0:0]
);
wire delay_sr_U1946_clk;
wire [15:0] delay_sr_U1946_wdata;
wire [15:0] delay_sr_U1946_rdata;
wire delay_sr_U1946_rst_n;
wire delay_sr_U1946_flush;
wire delay_sr_U1949_clk;
wire [15:0] delay_sr_U1949_wdata;
wire [15:0] delay_sr_U1949_rdata;
wire delay_sr_U1949_rst_n;
wire delay_sr_U1949_flush;
wire delay_sr_U1955_clk;
wire [15:0] delay_sr_U1955_wdata;
wire [15:0] delay_sr_U1955_rdata;
wire delay_sr_U1955_rst_n;
wire delay_sr_U1955_flush;
wire delay_sr_U1960_clk;
wire [15:0] delay_sr_U1960_wdata;
wire [15:0] delay_sr_U1960_rdata;
wire delay_sr_U1960_rst_n;
wire delay_sr_U1960_flush;
wire delay_sr_U1963_clk;
wire [15:0] delay_sr_U1963_wdata;
wire [15:0] delay_sr_U1963_rdata;
wire delay_sr_U1963_rst_n;
wire delay_sr_U1963_flush;
wire delay_sr_U1966_clk;
wire [15:0] delay_sr_U1966_wdata;
wire [15:0] delay_sr_U1966_rdata;
wire delay_sr_U1966_rst_n;
wire delay_sr_U1966_flush;
wire delay_sr_U1968_clk;
wire [15:0] delay_sr_U1968_wdata;
wire [15:0] delay_sr_U1968_rdata;
wire delay_sr_U1968_rst_n;
wire delay_sr_U1968_flush;
wire delay_sr_U1971_clk;
wire [15:0] delay_sr_U1971_wdata;
wire [15:0] delay_sr_U1971_rdata;
wire delay_sr_U1971_rst_n;
wire delay_sr_U1971_flush;
wire delay_sr_U1974_clk;
wire [15:0] delay_sr_U1974_wdata;
wire [15:0] delay_sr_U1974_rdata;
wire delay_sr_U1974_rst_n;
wire delay_sr_U1974_flush;
wire delay_sr_U1978_clk;
wire [15:0] delay_sr_U1978_wdata;
wire [15:0] delay_sr_U1978_rdata;
wire delay_sr_U1978_rst_n;
wire delay_sr_U1978_flush;
wire delay_sr_U1981_clk;
wire [15:0] delay_sr_U1981_wdata;
wire [15:0] delay_sr_U1981_rdata;
wire delay_sr_U1981_rst_n;
wire delay_sr_U1981_flush;
wire delay_sr_U1984_clk;
wire [15:0] delay_sr_U1984_wdata;
wire [15:0] delay_sr_U1984_rdata;
wire delay_sr_U1984_rst_n;
wire delay_sr_U1984_flush;
wire delay_sr_U1988_clk;
wire [15:0] delay_sr_U1988_wdata;
wire [15:0] delay_sr_U1988_rdata;
wire delay_sr_U1988_rst_n;
wire delay_sr_U1988_flush;
wire delay_sr_U1991_clk;
wire [15:0] delay_sr_U1991_wdata;
wire [15:0] delay_sr_U1991_rdata;
wire delay_sr_U1991_rst_n;
wire delay_sr_U1991_flush;
wire delay_sr_U1994_clk;
wire [15:0] delay_sr_U1994_wdata;
wire [15:0] delay_sr_U1994_rdata;
wire delay_sr_U1994_rst_n;
wire delay_sr_U1994_flush;
wire delay_sr_U1996_clk;
wire [15:0] delay_sr_U1996_wdata;
wire [15:0] delay_sr_U1996_rdata;
wire delay_sr_U1996_rst_n;
wire delay_sr_U1996_flush;
wire delay_sr_U1999_clk;
wire [15:0] delay_sr_U1999_wdata;
wire [15:0] delay_sr_U1999_rdata;
wire delay_sr_U1999_rst_n;
wire delay_sr_U1999_flush;
wire delay_sr_U2002_clk;
wire [15:0] delay_sr_U2002_wdata;
wire [15:0] delay_sr_U2002_rdata;
wire delay_sr_U2002_rst_n;
wire delay_sr_U2002_flush;
wire delay_sr_U2007_clk;
wire [15:0] delay_sr_U2007_wdata;
wire [15:0] delay_sr_U2007_rdata;
wire delay_sr_U2007_rst_n;
wire delay_sr_U2007_flush;
wire delay_sr_U2013_clk;
wire [15:0] delay_sr_U2013_wdata;
wire [15:0] delay_sr_U2013_rdata;
wire delay_sr_U2013_rst_n;
wire delay_sr_U2013_flush;
wire delay_sr_U2016_clk;
wire [15:0] delay_sr_U2016_wdata;
wire [15:0] delay_sr_U2016_rdata;
wire delay_sr_U2016_rst_n;
wire delay_sr_U2016_flush;
assign delay_sr_U1946_clk = clk;
assign delay_sr_U1946_wdata = op_hcompute_denoised_1_stencil_write[0];
assign delay_sr_U1946_rst_n = rst_n;
assign delay_sr_U1946_flush = flush;
delay__U1941 delay_sr_U1946 (
    .clk(delay_sr_U1946_clk),
    .wdata(delay_sr_U1946_wdata),
    .rdata(delay_sr_U1946_rdata),
    .rst_n(delay_sr_U1946_rst_n),
    .flush(delay_sr_U1946_flush)
);
assign delay_sr_U1949_clk = clk;
assign delay_sr_U1949_wdata = delay_sr_U1946_rdata;
assign delay_sr_U1949_rst_n = rst_n;
assign delay_sr_U1949_flush = flush;
delay__U1947 delay_sr_U1949 (
    .clk(delay_sr_U1949_clk),
    .wdata(delay_sr_U1949_wdata),
    .rdata(delay_sr_U1949_rdata),
    .rst_n(delay_sr_U1949_rst_n),
    .flush(delay_sr_U1949_flush)
);
assign delay_sr_U1955_clk = clk;
assign delay_sr_U1955_wdata = delay_sr_U1949_rdata;
assign delay_sr_U1955_rst_n = rst_n;
assign delay_sr_U1955_flush = flush;
delay__U1950 delay_sr_U1955 (
    .clk(delay_sr_U1955_clk),
    .wdata(delay_sr_U1955_wdata),
    .rdata(delay_sr_U1955_rdata),
    .rst_n(delay_sr_U1955_rst_n),
    .flush(delay_sr_U1955_flush)
);
assign delay_sr_U1960_clk = clk;
assign delay_sr_U1960_wdata = delay_sr_U1955_rdata;
assign delay_sr_U1960_rst_n = rst_n;
assign delay_sr_U1960_flush = flush;
delay__U1956 delay_sr_U1960 (
    .clk(delay_sr_U1960_clk),
    .wdata(delay_sr_U1960_wdata),
    .rdata(delay_sr_U1960_rdata),
    .rst_n(delay_sr_U1960_rst_n),
    .flush(delay_sr_U1960_flush)
);
assign delay_sr_U1963_clk = clk;
assign delay_sr_U1963_wdata = delay_sr_U1960_rdata;
assign delay_sr_U1963_rst_n = rst_n;
assign delay_sr_U1963_flush = flush;
delay__U1961 delay_sr_U1963 (
    .clk(delay_sr_U1963_clk),
    .wdata(delay_sr_U1963_wdata),
    .rdata(delay_sr_U1963_rdata),
    .rst_n(delay_sr_U1963_rst_n),
    .flush(delay_sr_U1963_flush)
);
assign delay_sr_U1966_clk = clk;
assign delay_sr_U1966_wdata = delay_sr_U1963_rdata;
assign delay_sr_U1966_rst_n = rst_n;
assign delay_sr_U1966_flush = flush;
delay__U1964 delay_sr_U1966 (
    .clk(delay_sr_U1966_clk),
    .wdata(delay_sr_U1966_wdata),
    .rdata(delay_sr_U1966_rdata),
    .rst_n(delay_sr_U1966_rst_n),
    .flush(delay_sr_U1966_flush)
);
assign delay_sr_U1968_clk = clk;
assign delay_sr_U1968_wdata = delay_sr_U1966_rdata;
assign delay_sr_U1968_rst_n = rst_n;
assign delay_sr_U1968_flush = flush;
memtile_long_delay__U1967 delay_sr_U1968 (
    .clk(delay_sr_U1968_clk),
    .wdata(delay_sr_U1968_wdata),
    .rdata(delay_sr_U1968_rdata),
    .rst_n(delay_sr_U1968_rst_n),
    .flush(delay_sr_U1968_flush)
);
assign delay_sr_U1971_clk = clk;
assign delay_sr_U1971_wdata = delay_sr_U1968_rdata;
assign delay_sr_U1971_rst_n = rst_n;
assign delay_sr_U1971_flush = flush;
delay__U1969 delay_sr_U1971 (
    .clk(delay_sr_U1971_clk),
    .wdata(delay_sr_U1971_wdata),
    .rdata(delay_sr_U1971_rdata),
    .rst_n(delay_sr_U1971_rst_n),
    .flush(delay_sr_U1971_flush)
);
assign delay_sr_U1974_clk = clk;
assign delay_sr_U1974_wdata = delay_sr_U1971_rdata;
assign delay_sr_U1974_rst_n = rst_n;
assign delay_sr_U1974_flush = flush;
delay__U1972 delay_sr_U1974 (
    .clk(delay_sr_U1974_clk),
    .wdata(delay_sr_U1974_wdata),
    .rdata(delay_sr_U1974_rdata),
    .rst_n(delay_sr_U1974_rst_n),
    .flush(delay_sr_U1974_flush)
);
assign delay_sr_U1978_clk = clk;
assign delay_sr_U1978_wdata = delay_sr_U1974_rdata;
assign delay_sr_U1978_rst_n = rst_n;
assign delay_sr_U1978_flush = flush;
delay__U1975 delay_sr_U1978 (
    .clk(delay_sr_U1978_clk),
    .wdata(delay_sr_U1978_wdata),
    .rdata(delay_sr_U1978_rdata),
    .rst_n(delay_sr_U1978_rst_n),
    .flush(delay_sr_U1978_flush)
);
assign delay_sr_U1981_clk = clk;
assign delay_sr_U1981_wdata = delay_sr_U1978_rdata;
assign delay_sr_U1981_rst_n = rst_n;
assign delay_sr_U1981_flush = flush;
delay__U1979 delay_sr_U1981 (
    .clk(delay_sr_U1981_clk),
    .wdata(delay_sr_U1981_wdata),
    .rdata(delay_sr_U1981_rdata),
    .rst_n(delay_sr_U1981_rst_n),
    .flush(delay_sr_U1981_flush)
);
assign delay_sr_U1984_clk = clk;
assign delay_sr_U1984_wdata = delay_sr_U1981_rdata;
assign delay_sr_U1984_rst_n = rst_n;
assign delay_sr_U1984_flush = flush;
delay__U1982 delay_sr_U1984 (
    .clk(delay_sr_U1984_clk),
    .wdata(delay_sr_U1984_wdata),
    .rdata(delay_sr_U1984_rdata),
    .rst_n(delay_sr_U1984_rst_n),
    .flush(delay_sr_U1984_flush)
);
assign delay_sr_U1988_clk = clk;
assign delay_sr_U1988_wdata = delay_sr_U1984_rdata;
assign delay_sr_U1988_rst_n = rst_n;
assign delay_sr_U1988_flush = flush;
delay__U1985 delay_sr_U1988 (
    .clk(delay_sr_U1988_clk),
    .wdata(delay_sr_U1988_wdata),
    .rdata(delay_sr_U1988_rdata),
    .rst_n(delay_sr_U1988_rst_n),
    .flush(delay_sr_U1988_flush)
);
assign delay_sr_U1991_clk = clk;
assign delay_sr_U1991_wdata = delay_sr_U1988_rdata;
assign delay_sr_U1991_rst_n = rst_n;
assign delay_sr_U1991_flush = flush;
delay__U1989 delay_sr_U1991 (
    .clk(delay_sr_U1991_clk),
    .wdata(delay_sr_U1991_wdata),
    .rdata(delay_sr_U1991_rdata),
    .rst_n(delay_sr_U1991_rst_n),
    .flush(delay_sr_U1991_flush)
);
assign delay_sr_U1994_clk = clk;
assign delay_sr_U1994_wdata = delay_sr_U1991_rdata;
assign delay_sr_U1994_rst_n = rst_n;
assign delay_sr_U1994_flush = flush;
delay__U1992 delay_sr_U1994 (
    .clk(delay_sr_U1994_clk),
    .wdata(delay_sr_U1994_wdata),
    .rdata(delay_sr_U1994_rdata),
    .rst_n(delay_sr_U1994_rst_n),
    .flush(delay_sr_U1994_flush)
);
assign delay_sr_U1996_clk = clk;
assign delay_sr_U1996_wdata = delay_sr_U1994_rdata;
assign delay_sr_U1996_rst_n = rst_n;
assign delay_sr_U1996_flush = flush;
memtile_long_delay__U1995 delay_sr_U1996 (
    .clk(delay_sr_U1996_clk),
    .wdata(delay_sr_U1996_wdata),
    .rdata(delay_sr_U1996_rdata),
    .rst_n(delay_sr_U1996_rst_n),
    .flush(delay_sr_U1996_flush)
);
assign delay_sr_U1999_clk = clk;
assign delay_sr_U1999_wdata = delay_sr_U1996_rdata;
assign delay_sr_U1999_rst_n = rst_n;
assign delay_sr_U1999_flush = flush;
delay__U1997 delay_sr_U1999 (
    .clk(delay_sr_U1999_clk),
    .wdata(delay_sr_U1999_wdata),
    .rdata(delay_sr_U1999_rdata),
    .rst_n(delay_sr_U1999_rst_n),
    .flush(delay_sr_U1999_flush)
);
assign delay_sr_U2002_clk = clk;
assign delay_sr_U2002_wdata = delay_sr_U1999_rdata;
assign delay_sr_U2002_rst_n = rst_n;
assign delay_sr_U2002_flush = flush;
delay__U2000 delay_sr_U2002 (
    .clk(delay_sr_U2002_clk),
    .wdata(delay_sr_U2002_wdata),
    .rdata(delay_sr_U2002_rdata),
    .rst_n(delay_sr_U2002_rst_n),
    .flush(delay_sr_U2002_flush)
);
assign delay_sr_U2007_clk = clk;
assign delay_sr_U2007_wdata = delay_sr_U2002_rdata;
assign delay_sr_U2007_rst_n = rst_n;
assign delay_sr_U2007_flush = flush;
delay__U2003 delay_sr_U2007 (
    .clk(delay_sr_U2007_clk),
    .wdata(delay_sr_U2007_wdata),
    .rdata(delay_sr_U2007_rdata),
    .rst_n(delay_sr_U2007_rst_n),
    .flush(delay_sr_U2007_flush)
);
assign delay_sr_U2013_clk = clk;
assign delay_sr_U2013_wdata = delay_sr_U2007_rdata;
assign delay_sr_U2013_rst_n = rst_n;
assign delay_sr_U2013_flush = flush;
delay__U2008 delay_sr_U2013 (
    .clk(delay_sr_U2013_clk),
    .wdata(delay_sr_U2013_wdata),
    .rdata(delay_sr_U2013_rdata),
    .rst_n(delay_sr_U2013_rst_n),
    .flush(delay_sr_U2013_flush)
);
assign delay_sr_U2016_clk = clk;
assign delay_sr_U2016_wdata = delay_sr_U2013_rdata;
assign delay_sr_U2016_rst_n = rst_n;
assign delay_sr_U2016_flush = flush;
delay__U2014 delay_sr_U2016 (
    .clk(delay_sr_U2016_clk),
    .wdata(delay_sr_U2016_wdata),
    .rdata(delay_sr_U2016_rdata),
    .rst_n(delay_sr_U2016_rst_n),
    .flush(delay_sr_U2016_flush)
);
assign op_hcompute_demosaicked_1_stencil_1_read[4] = delay_sr_U1981_rdata;
assign op_hcompute_demosaicked_1_stencil_1_read[3] = delay_sr_U2007_rdata;
assign op_hcompute_demosaicked_1_stencil_1_read[2] = delay_sr_U1978_rdata;
assign op_hcompute_demosaicked_1_stencil_1_read[1] = delay_sr_U1955_rdata;
assign op_hcompute_demosaicked_1_stencil_1_read[0] = delay_sr_U1984_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[7] = delay_sr_U2016_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[6] = delay_sr_U1994_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[5] = delay_sr_U1966_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[4] = delay_sr_U2013_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[3] = delay_sr_U1988_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[2] = delay_sr_U1960_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[1] = delay_sr_U1963_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[0] = delay_sr_U1991_rdata;
assign op_hcompute_demosaicked_1_stencil_read[7] = delay_sr_U2002_rdata;
assign op_hcompute_demosaicked_1_stencil_read[6] = delay_sr_U1999_rdata;
assign op_hcompute_demosaicked_1_stencil_read[5] = delay_sr_U1996_rdata;
assign op_hcompute_demosaicked_1_stencil_read[4] = delay_sr_U1949_rdata;
assign op_hcompute_demosaicked_1_stencil_read[3] = delay_sr_U1974_rdata;
assign op_hcompute_demosaicked_1_stencil_read[2] = delay_sr_U1946_rdata;
assign op_hcompute_demosaicked_1_stencil_read[1] = delay_sr_U1968_rdata;
assign op_hcompute_demosaicked_1_stencil_read[0] = delay_sr_U1971_rdata;
endmodule

module delay__U1935 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1936_in;
wire _U1936_clk;
wire [15:0] _U1936_out;
wire [15:0] _U1937_in;
wire _U1937_clk;
wire [15:0] _U1937_out;
wire [15:0] _U1938_in;
wire _U1938_clk;
wire [15:0] _U1938_out;
wire [15:0] _U1939_in;
wire _U1939_clk;
assign _U1936_in = wdata;
assign _U1936_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1936 (
    .in(_U1936_in),
    .clk(_U1936_clk),
    .out(_U1936_out)
);
assign _U1937_in = _U1936_out;
assign _U1937_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1937 (
    .in(_U1937_in),
    .clk(_U1937_clk),
    .out(_U1937_out)
);
assign _U1938_in = _U1937_out;
assign _U1938_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1938 (
    .in(_U1938_in),
    .clk(_U1938_clk),
    .out(_U1938_out)
);
assign _U1939_in = _U1938_out;
assign _U1939_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1939 (
    .in(_U1939_in),
    .clk(_U1939_clk),
    .out(rdata)
);
endmodule

module delay__U1929 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1930_in;
wire _U1930_clk;
wire [15:0] _U1930_out;
wire [15:0] _U1931_in;
wire _U1931_clk;
wire [15:0] _U1931_out;
wire [15:0] _U1932_in;
wire _U1932_clk;
wire [15:0] _U1932_out;
wire [15:0] _U1933_in;
wire _U1933_clk;
assign _U1930_in = wdata;
assign _U1930_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1930 (
    .in(_U1930_in),
    .clk(_U1930_clk),
    .out(_U1930_out)
);
assign _U1931_in = _U1930_out;
assign _U1931_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1931 (
    .in(_U1931_in),
    .clk(_U1931_clk),
    .out(_U1931_out)
);
assign _U1932_in = _U1931_out;
assign _U1932_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1932 (
    .in(_U1932_in),
    .clk(_U1932_clk),
    .out(_U1932_out)
);
assign _U1933_in = _U1932_out;
assign _U1933_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1933 (
    .in(_U1933_in),
    .clk(_U1933_clk),
    .out(rdata)
);
endmodule

module delay__U1923 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1924_in;
wire _U1924_clk;
wire [15:0] _U1924_out;
wire [15:0] _U1925_in;
wire _U1925_clk;
wire [15:0] _U1925_out;
wire [15:0] _U1926_in;
wire _U1926_clk;
wire [15:0] _U1926_out;
wire [15:0] _U1927_in;
wire _U1927_clk;
assign _U1924_in = wdata;
assign _U1924_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1924 (
    .in(_U1924_in),
    .clk(_U1924_clk),
    .out(_U1924_out)
);
assign _U1925_in = _U1924_out;
assign _U1925_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1925 (
    .in(_U1925_in),
    .clk(_U1925_clk),
    .out(_U1925_out)
);
assign _U1926_in = _U1925_out;
assign _U1926_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1926 (
    .in(_U1926_in),
    .clk(_U1926_clk),
    .out(_U1926_out)
);
assign _U1927_in = _U1926_out;
assign _U1927_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1927 (
    .in(_U1927_in),
    .clk(_U1927_clk),
    .out(rdata)
);
endmodule

module delay__U1917 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1918_in;
wire _U1918_clk;
wire [15:0] _U1918_out;
wire [15:0] _U1919_in;
wire _U1919_clk;
wire [15:0] _U1919_out;
wire [15:0] _U1920_in;
wire _U1920_clk;
wire [15:0] _U1920_out;
wire [15:0] _U1921_in;
wire _U1921_clk;
assign _U1918_in = wdata;
assign _U1918_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1918 (
    .in(_U1918_in),
    .clk(_U1918_clk),
    .out(_U1918_out)
);
assign _U1919_in = _U1918_out;
assign _U1919_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1919 (
    .in(_U1919_in),
    .clk(_U1919_clk),
    .out(_U1919_out)
);
assign _U1920_in = _U1919_out;
assign _U1920_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1920 (
    .in(_U1920_in),
    .clk(_U1920_clk),
    .out(_U1920_out)
);
assign _U1921_in = _U1920_out;
assign _U1921_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1921 (
    .in(_U1921_in),
    .clk(_U1921_clk),
    .out(rdata)
);
endmodule

module delay__U1911 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1912_in;
wire _U1912_clk;
wire [15:0] _U1912_out;
wire [15:0] _U1913_in;
wire _U1913_clk;
wire [15:0] _U1913_out;
wire [15:0] _U1914_in;
wire _U1914_clk;
wire [15:0] _U1914_out;
wire [15:0] _U1915_in;
wire _U1915_clk;
assign _U1912_in = wdata;
assign _U1912_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1912 (
    .in(_U1912_in),
    .clk(_U1912_clk),
    .out(_U1912_out)
);
assign _U1913_in = _U1912_out;
assign _U1913_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1913 (
    .in(_U1913_in),
    .clk(_U1913_clk),
    .out(_U1913_out)
);
assign _U1914_in = _U1913_out;
assign _U1914_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1914 (
    .in(_U1914_in),
    .clk(_U1914_clk),
    .out(_U1914_out)
);
assign _U1915_in = _U1914_out;
assign _U1915_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1915 (
    .in(_U1915_in),
    .clk(_U1915_clk),
    .out(rdata)
);
endmodule

module delay__U1903 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1904_in;
wire _U1904_clk;
wire [15:0] _U1904_out;
wire [15:0] _U1905_in;
wire _U1905_clk;
wire [15:0] _U1905_out;
wire [15:0] _U1906_in;
wire _U1906_clk;
wire [15:0] _U1906_out;
wire [15:0] _U1907_in;
wire _U1907_clk;
assign _U1904_in = wdata;
assign _U1904_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1904 (
    .in(_U1904_in),
    .clk(_U1904_clk),
    .out(_U1904_out)
);
assign _U1905_in = _U1904_out;
assign _U1905_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1905 (
    .in(_U1905_in),
    .clk(_U1905_clk),
    .out(_U1905_out)
);
assign _U1906_in = _U1905_out;
assign _U1906_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1906 (
    .in(_U1906_in),
    .clk(_U1906_clk),
    .out(_U1906_out)
);
assign _U1907_in = _U1906_out;
assign _U1907_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1907 (
    .in(_U1907_in),
    .clk(_U1907_clk),
    .out(rdata)
);
endmodule

module delay__U1897 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1898_in;
wire _U1898_clk;
wire [15:0] _U1898_out;
wire [15:0] _U1899_in;
wire _U1899_clk;
wire [15:0] _U1899_out;
wire [15:0] _U1900_in;
wire _U1900_clk;
wire [15:0] _U1900_out;
wire [15:0] _U1901_in;
wire _U1901_clk;
assign _U1898_in = wdata;
assign _U1898_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1898 (
    .in(_U1898_in),
    .clk(_U1898_clk),
    .out(_U1898_out)
);
assign _U1899_in = _U1898_out;
assign _U1899_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1899 (
    .in(_U1899_in),
    .clk(_U1899_clk),
    .out(_U1899_out)
);
assign _U1900_in = _U1899_out;
assign _U1900_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1900 (
    .in(_U1900_in),
    .clk(_U1900_clk),
    .out(_U1900_out)
);
assign _U1901_in = _U1900_out;
assign _U1901_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1901 (
    .in(_U1901_in),
    .clk(_U1901_clk),
    .out(rdata)
);
endmodule

module delay__U1887 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1888_in;
wire _U1888_clk;
wire [15:0] _U1888_out;
wire [15:0] _U1889_in;
wire _U1889_clk;
wire [15:0] _U1889_out;
wire [15:0] _U1890_in;
wire _U1890_clk;
wire [15:0] _U1890_out;
wire [15:0] _U1891_in;
wire _U1891_clk;
wire [15:0] _U1891_out;
wire [15:0] _U1892_in;
wire _U1892_clk;
wire [15:0] _U1892_out;
wire [15:0] _U1893_in;
wire _U1893_clk;
wire [15:0] _U1893_out;
wire [15:0] _U1894_in;
wire _U1894_clk;
wire [15:0] _U1894_out;
wire [15:0] _U1895_in;
wire _U1895_clk;
assign _U1888_in = wdata;
assign _U1888_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1888 (
    .in(_U1888_in),
    .clk(_U1888_clk),
    .out(_U1888_out)
);
assign _U1889_in = _U1888_out;
assign _U1889_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1889 (
    .in(_U1889_in),
    .clk(_U1889_clk),
    .out(_U1889_out)
);
assign _U1890_in = _U1889_out;
assign _U1890_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1890 (
    .in(_U1890_in),
    .clk(_U1890_clk),
    .out(_U1890_out)
);
assign _U1891_in = _U1890_out;
assign _U1891_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1891 (
    .in(_U1891_in),
    .clk(_U1891_clk),
    .out(_U1891_out)
);
assign _U1892_in = _U1891_out;
assign _U1892_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1892 (
    .in(_U1892_in),
    .clk(_U1892_clk),
    .out(_U1892_out)
);
assign _U1893_in = _U1892_out;
assign _U1893_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1893 (
    .in(_U1893_in),
    .clk(_U1893_clk),
    .out(_U1893_out)
);
assign _U1894_in = _U1893_out;
assign _U1894_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1894 (
    .in(_U1894_in),
    .clk(_U1894_clk),
    .out(_U1894_out)
);
assign _U1895_in = _U1894_out;
assign _U1895_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1895 (
    .in(_U1895_in),
    .clk(_U1895_clk),
    .out(rdata)
);
endmodule

module demosaicked_1_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_corrected_stencil_1_read_ren,
    input [15:0] op_hcompute_corrected_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_corrected_stencil_1_read [2:0],
    input op_hcompute_corrected_stencil_2_read_ren,
    input [15:0] op_hcompute_corrected_stencil_2_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_corrected_stencil_2_read [2:0],
    input op_hcompute_corrected_stencil_read_ren,
    input [15:0] op_hcompute_corrected_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_corrected_stencil_read [2:0],
    input op_hcompute_demosaicked_1_stencil_1_write_wen,
    input [15:0] op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_demosaicked_1_stencil_1_write [0:0],
    input op_hcompute_demosaicked_1_stencil_2_write_wen,
    input [15:0] op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_demosaicked_1_stencil_2_write [0:0],
    input op_hcompute_demosaicked_1_stencil_write_wen,
    input [15:0] op_hcompute_demosaicked_1_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_demosaicked_1_stencil_write [0:0]
);
wire delay_sr_U1896_clk;
wire [15:0] delay_sr_U1896_wdata;
wire [15:0] delay_sr_U1896_rdata;
wire delay_sr_U1896_rst_n;
wire delay_sr_U1896_flush;
wire delay_sr_U1902_clk;
wire [15:0] delay_sr_U1902_wdata;
wire [15:0] delay_sr_U1902_rdata;
wire delay_sr_U1902_rst_n;
wire delay_sr_U1902_flush;
wire delay_sr_U1908_clk;
wire [15:0] delay_sr_U1908_wdata;
wire [15:0] delay_sr_U1908_rdata;
wire delay_sr_U1908_rst_n;
wire delay_sr_U1908_flush;
wire delay_sr_U1910_clk;
wire [15:0] delay_sr_U1910_wdata;
wire [15:0] delay_sr_U1910_rdata;
wire delay_sr_U1910_rst_n;
wire delay_sr_U1910_flush;
wire delay_sr_U1916_clk;
wire [15:0] delay_sr_U1916_wdata;
wire [15:0] delay_sr_U1916_rdata;
wire delay_sr_U1916_rst_n;
wire delay_sr_U1916_flush;
wire delay_sr_U1922_clk;
wire [15:0] delay_sr_U1922_wdata;
wire [15:0] delay_sr_U1922_rdata;
wire delay_sr_U1922_rst_n;
wire delay_sr_U1922_flush;
wire delay_sr_U1928_clk;
wire [15:0] delay_sr_U1928_wdata;
wire [15:0] delay_sr_U1928_rdata;
wire delay_sr_U1928_rst_n;
wire delay_sr_U1928_flush;
wire delay_sr_U1934_clk;
wire [15:0] delay_sr_U1934_wdata;
wire [15:0] delay_sr_U1934_rdata;
wire delay_sr_U1934_rst_n;
wire delay_sr_U1934_flush;
wire delay_sr_U1940_clk;
wire [15:0] delay_sr_U1940_wdata;
wire [15:0] delay_sr_U1940_rdata;
wire delay_sr_U1940_rst_n;
wire delay_sr_U1940_flush;
assign delay_sr_U1896_clk = clk;
assign delay_sr_U1896_wdata = op_hcompute_demosaicked_1_stencil_1_write[0];
assign delay_sr_U1896_rst_n = rst_n;
assign delay_sr_U1896_flush = flush;
delay__U1887 delay_sr_U1896 (
    .clk(delay_sr_U1896_clk),
    .wdata(delay_sr_U1896_wdata),
    .rdata(delay_sr_U1896_rdata),
    .rst_n(delay_sr_U1896_rst_n),
    .flush(delay_sr_U1896_flush)
);
assign delay_sr_U1902_clk = clk;
assign delay_sr_U1902_wdata = delay_sr_U1896_rdata;
assign delay_sr_U1902_rst_n = rst_n;
assign delay_sr_U1902_flush = flush;
delay__U1897 delay_sr_U1902 (
    .clk(delay_sr_U1902_clk),
    .wdata(delay_sr_U1902_wdata),
    .rdata(delay_sr_U1902_rdata),
    .rst_n(delay_sr_U1902_rst_n),
    .flush(delay_sr_U1902_flush)
);
assign delay_sr_U1908_clk = clk;
assign delay_sr_U1908_wdata = delay_sr_U1902_rdata;
assign delay_sr_U1908_rst_n = rst_n;
assign delay_sr_U1908_flush = flush;
delay__U1903 delay_sr_U1908 (
    .clk(delay_sr_U1908_clk),
    .wdata(delay_sr_U1908_wdata),
    .rdata(delay_sr_U1908_rdata),
    .rst_n(delay_sr_U1908_rst_n),
    .flush(delay_sr_U1908_flush)
);
assign delay_sr_U1910_clk = clk;
assign delay_sr_U1910_wdata = op_hcompute_demosaicked_1_stencil_write[0];
assign delay_sr_U1910_rst_n = rst_n;
assign delay_sr_U1910_flush = flush;
memtile_long_delay__U1909 delay_sr_U1910 (
    .clk(delay_sr_U1910_clk),
    .wdata(delay_sr_U1910_wdata),
    .rdata(delay_sr_U1910_rdata),
    .rst_n(delay_sr_U1910_rst_n),
    .flush(delay_sr_U1910_flush)
);
assign delay_sr_U1916_clk = clk;
assign delay_sr_U1916_wdata = delay_sr_U1910_rdata;
assign delay_sr_U1916_rst_n = rst_n;
assign delay_sr_U1916_flush = flush;
delay__U1911 delay_sr_U1916 (
    .clk(delay_sr_U1916_clk),
    .wdata(delay_sr_U1916_wdata),
    .rdata(delay_sr_U1916_rdata),
    .rst_n(delay_sr_U1916_rst_n),
    .flush(delay_sr_U1916_flush)
);
assign delay_sr_U1922_clk = clk;
assign delay_sr_U1922_wdata = delay_sr_U1916_rdata;
assign delay_sr_U1922_rst_n = rst_n;
assign delay_sr_U1922_flush = flush;
delay__U1917 delay_sr_U1922 (
    .clk(delay_sr_U1922_clk),
    .wdata(delay_sr_U1922_wdata),
    .rdata(delay_sr_U1922_rdata),
    .rst_n(delay_sr_U1922_rst_n),
    .flush(delay_sr_U1922_flush)
);
assign delay_sr_U1928_clk = clk;
assign delay_sr_U1928_wdata = op_hcompute_demosaicked_1_stencil_2_write[0];
assign delay_sr_U1928_rst_n = rst_n;
assign delay_sr_U1928_flush = flush;
delay__U1923 delay_sr_U1928 (
    .clk(delay_sr_U1928_clk),
    .wdata(delay_sr_U1928_wdata),
    .rdata(delay_sr_U1928_rdata),
    .rst_n(delay_sr_U1928_rst_n),
    .flush(delay_sr_U1928_flush)
);
assign delay_sr_U1934_clk = clk;
assign delay_sr_U1934_wdata = delay_sr_U1928_rdata;
assign delay_sr_U1934_rst_n = rst_n;
assign delay_sr_U1934_flush = flush;
delay__U1929 delay_sr_U1934 (
    .clk(delay_sr_U1934_clk),
    .wdata(delay_sr_U1934_wdata),
    .rdata(delay_sr_U1934_rdata),
    .rst_n(delay_sr_U1934_rst_n),
    .flush(delay_sr_U1934_flush)
);
assign delay_sr_U1940_clk = clk;
assign delay_sr_U1940_wdata = delay_sr_U1934_rdata;
assign delay_sr_U1940_rst_n = rst_n;
assign delay_sr_U1940_flush = flush;
delay__U1935 delay_sr_U1940 (
    .clk(delay_sr_U1940_clk),
    .wdata(delay_sr_U1940_wdata),
    .rdata(delay_sr_U1940_rdata),
    .rst_n(delay_sr_U1940_rst_n),
    .flush(delay_sr_U1940_flush)
);
assign op_hcompute_corrected_stencil_1_read[2] = delay_sr_U1934_rdata;
assign op_hcompute_corrected_stencil_1_read[1] = delay_sr_U1916_rdata;
assign op_hcompute_corrected_stencil_1_read[0] = delay_sr_U1902_rdata;
assign op_hcompute_corrected_stencil_2_read[2] = delay_sr_U1922_rdata;
assign op_hcompute_corrected_stencil_2_read[1] = delay_sr_U1908_rdata;
assign op_hcompute_corrected_stencil_2_read[0] = delay_sr_U1940_rdata;
assign op_hcompute_corrected_stencil_read[2] = delay_sr_U1896_rdata;
assign op_hcompute_corrected_stencil_read[1] = delay_sr_U1928_rdata;
assign op_hcompute_corrected_stencil_read[0] = delay_sr_U1910_rdata;
endmodule

module delay__U1873 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1874_in;
wire _U1874_clk;
wire [15:0] _U1874_out;
wire [15:0] _U1875_in;
wire _U1875_clk;
wire [15:0] _U1875_out;
wire [15:0] _U1876_in;
wire _U1876_clk;
wire [15:0] _U1876_out;
wire [15:0] _U1877_in;
wire _U1877_clk;
wire [15:0] _U1877_out;
wire [15:0] _U1878_in;
wire _U1878_clk;
wire [15:0] _U1878_out;
wire [15:0] _U1879_in;
wire _U1879_clk;
wire [15:0] _U1879_out;
wire [15:0] _U1880_in;
wire _U1880_clk;
wire [15:0] _U1880_out;
wire [15:0] _U1881_in;
wire _U1881_clk;
wire [15:0] _U1881_out;
wire [15:0] _U1882_in;
wire _U1882_clk;
wire [15:0] _U1882_out;
wire [15:0] _U1883_in;
wire _U1883_clk;
assign _U1874_in = wdata;
assign _U1874_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1874 (
    .in(_U1874_in),
    .clk(_U1874_clk),
    .out(_U1874_out)
);
assign _U1875_in = _U1874_out;
assign _U1875_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1875 (
    .in(_U1875_in),
    .clk(_U1875_clk),
    .out(_U1875_out)
);
assign _U1876_in = _U1875_out;
assign _U1876_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1876 (
    .in(_U1876_in),
    .clk(_U1876_clk),
    .out(_U1876_out)
);
assign _U1877_in = _U1876_out;
assign _U1877_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1877 (
    .in(_U1877_in),
    .clk(_U1877_clk),
    .out(_U1877_out)
);
assign _U1878_in = _U1877_out;
assign _U1878_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1878 (
    .in(_U1878_in),
    .clk(_U1878_clk),
    .out(_U1878_out)
);
assign _U1879_in = _U1878_out;
assign _U1879_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1879 (
    .in(_U1879_in),
    .clk(_U1879_clk),
    .out(_U1879_out)
);
assign _U1880_in = _U1879_out;
assign _U1880_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1880 (
    .in(_U1880_in),
    .clk(_U1880_clk),
    .out(_U1880_out)
);
assign _U1881_in = _U1880_out;
assign _U1881_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1881 (
    .in(_U1881_in),
    .clk(_U1881_clk),
    .out(_U1881_out)
);
assign _U1882_in = _U1881_out;
assign _U1882_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1882 (
    .in(_U1882_in),
    .clk(_U1882_clk),
    .out(_U1882_out)
);
assign _U1883_in = _U1882_out;
assign _U1883_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1883 (
    .in(_U1883_in),
    .clk(_U1883_clk),
    .out(rdata)
);
endmodule

module curved_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_curved_stencil_1_write_wen,
    input [15:0] op_hcompute_curved_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_curved_stencil_1_write [0:0],
    input op_hcompute_curved_stencil_2_write_wen,
    input [15:0] op_hcompute_curved_stencil_2_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_curved_stencil_2_write [0:0],
    input op_hcompute_curved_stencil_write_wen,
    input [15:0] op_hcompute_curved_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_curved_stencil_write [0:0],
    input op_hcompute_hw_output_stencil_1_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_1_read [0:0],
    input op_hcompute_hw_output_stencil_2_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_2_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_2_read [0:0],
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
wire delay_sr_U1872_clk;
wire [15:0] delay_sr_U1872_wdata;
wire [15:0] delay_sr_U1872_rdata;
wire delay_sr_U1872_rst_n;
wire delay_sr_U1872_flush;
wire delay_sr_U1884_clk;
wire [15:0] delay_sr_U1884_wdata;
wire [15:0] delay_sr_U1884_rdata;
wire delay_sr_U1884_rst_n;
wire delay_sr_U1884_flush;
wire delay_sr_U1886_clk;
wire [15:0] delay_sr_U1886_wdata;
wire [15:0] delay_sr_U1886_rdata;
wire delay_sr_U1886_rst_n;
wire delay_sr_U1886_flush;
assign delay_sr_U1872_clk = clk;
assign delay_sr_U1872_wdata = op_hcompute_curved_stencil_1_write[0];
assign delay_sr_U1872_rst_n = rst_n;
assign delay_sr_U1872_flush = flush;
memtile_long_delay__U1871 delay_sr_U1872 (
    .clk(delay_sr_U1872_clk),
    .wdata(delay_sr_U1872_wdata),
    .rdata(delay_sr_U1872_rdata),
    .rst_n(delay_sr_U1872_rst_n),
    .flush(delay_sr_U1872_flush)
);
assign delay_sr_U1884_clk = clk;
assign delay_sr_U1884_wdata = op_hcompute_curved_stencil_2_write[0];
assign delay_sr_U1884_rst_n = rst_n;
assign delay_sr_U1884_flush = flush;
delay__U1873 delay_sr_U1884 (
    .clk(delay_sr_U1884_clk),
    .wdata(delay_sr_U1884_wdata),
    .rdata(delay_sr_U1884_rdata),
    .rst_n(delay_sr_U1884_rst_n),
    .flush(delay_sr_U1884_flush)
);
assign delay_sr_U1886_clk = clk;
assign delay_sr_U1886_wdata = op_hcompute_curved_stencil_write[0];
assign delay_sr_U1886_rst_n = rst_n;
assign delay_sr_U1886_flush = flush;
memtile_long_delay__U1885 delay_sr_U1886 (
    .clk(delay_sr_U1886_clk),
    .wdata(delay_sr_U1886_wdata),
    .rdata(delay_sr_U1886_rdata),
    .rst_n(delay_sr_U1886_rst_n),
    .flush(delay_sr_U1886_flush)
);
assign op_hcompute_hw_output_stencil_1_read[0] = delay_sr_U1872_rdata;
assign op_hcompute_hw_output_stencil_2_read[0] = delay_sr_U1884_rdata;
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U1886_rdata;
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

module coreir_mem #(
    parameter has_init = 1'b0,
    parameter sync_read = 1'b0,
    parameter depth = 1,
    parameter width = 1
) (
    input clk,
    input [width-1:0] wdata,
    input [$clog2(depth)-1:0] waddr,
    input wen,
    output [width-1:0] rdata,
    input [$clog2(depth)-1:0] raddr
);
  reg [width-1:0] data [depth-1:0];
  parameter [width*depth-1:0] init = 0;
  generate if (has_init) begin
    genvar j;
    for (j = 0; j < depth; j = j + 1) begin
      initial begin
        data[j] = init[(j+1)*width-1:j*width];
      end
    end
  end
  endgenerate
  always @(posedge clk) begin
    if (wen) begin
      data[waddr] <= wdata;
    end
  end
  generate if (sync_read) begin
  reg [width-1:0] rdata_reg;
  always @(posedge clk) begin
    rdata_reg <= data[raddr];
  end
  assign rdata = rdata_reg;
  end else begin
  assign rdata = data[raddr];
  end
  endgenerate

endmodule

module memory_rom2__depth256__width16 #(
    parameter init = 1
) (
    input clk,
    output [15:0] rdata,
    input [15:0] raddr,
    input ren
);
wire mem_clk;
wire [15:0] mem_wdata;
wire [7:0] mem_waddr;
wire mem_wen;
wire [15:0] mem_rdata;
wire [7:0] mem_raddr;
wire [15:0] readreg_in;
wire readreg_clk;
wire readreg_en;
wire [15:0] wdata0_out;
assign mem_clk = clk;
assign mem_wdata = wdata0_out;
assign mem_waddr = 8'h00;
assign mem_wen = wdata0_out[0];
assign mem_raddr = raddr[8 - 1:0];
coreir_mem #(
    .init(init),
    .depth(256),
    .has_init(1'b1),
    .sync_read(1'b0),
    .width(16)
) mem (
    .clk(mem_clk),
    .wdata(mem_wdata),
    .waddr(mem_waddr),
    .wen(mem_wen),
    .rdata(mem_rdata),
    .raddr(mem_raddr)
);
assign readreg_in = mem_rdata;
assign readreg_clk = clk;
assign readreg_en = ren;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) readreg (
    .in(readreg_in),
    .clk(readreg_clk),
    .out(rdata),
    .en(readreg_en)
);
assign wdata0_out = 16'h0000;
endmodule

module hcompute_corrected_stencil_2 (
    output [15:0] out_corrected_stencil,
    input [15:0] in0_demosaicked_1_stencil [2:0]
);
assign out_corrected_stencil = ($signed(16'((16'((16'((16'(in0_demosaicked_1_stencil[0] * 16'h00e4)) - (16'(in0_demosaicked_1_stencil[1] * 16'h0049)))) - (16'(in0_demosaicked_1_stencil[2] * 16'h0008)))) + 16'hf828))) >>> 16'h0008;
endmodule

module cu_op_hcompute_corrected_stencil_2 (
    input clk,
    input [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read [2:0],
    output [15:0] corrected_stencil_op_hcompute_corrected_stencil_2_write [0:0]
);
wire [15:0] inner_compute_out_corrected_stencil;
wire [15:0] inner_compute_in0_demosaicked_1_stencil [2:0];
assign inner_compute_in0_demosaicked_1_stencil[2] = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[2];
assign inner_compute_in0_demosaicked_1_stencil[1] = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[1];
assign inner_compute_in0_demosaicked_1_stencil[0] = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[0];
hcompute_corrected_stencil_2 inner_compute (
    .out_corrected_stencil(inner_compute_out_corrected_stencil),
    .in0_demosaicked_1_stencil(inner_compute_in0_demosaicked_1_stencil)
);
assign corrected_stencil_op_hcompute_corrected_stencil_2_write[0] = inner_compute_out_corrected_stencil;
endmodule

module hcompute_corrected_stencil_1 (
    output [15:0] out_corrected_stencil,
    input [15:0] in0_demosaicked_1_stencil [2:0]
);
assign out_corrected_stencil = ($signed(16'((16'((16'((16'(in0_demosaicked_1_stencil[0] * 16'h009f)) - (16'(in0_demosaicked_1_stencil[1] * 16'h0026)))) - (16'(in0_demosaicked_1_stencil[2] * 16'h0015)))) + 16'hf613))) >>> 16'h0008;
endmodule

module cu_op_hcompute_corrected_stencil_1 (
    input clk,
    input [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read [2:0],
    output [15:0] corrected_stencil_op_hcompute_corrected_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_corrected_stencil;
wire [15:0] inner_compute_in0_demosaicked_1_stencil [2:0];
assign inner_compute_in0_demosaicked_1_stencil[2] = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[2];
assign inner_compute_in0_demosaicked_1_stencil[1] = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[1];
assign inner_compute_in0_demosaicked_1_stencil[0] = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[0];
hcompute_corrected_stencil_1 inner_compute (
    .out_corrected_stencil(inner_compute_out_corrected_stencil),
    .in0_demosaicked_1_stencil(inner_compute_in0_demosaicked_1_stencil)
);
assign corrected_stencil_op_hcompute_corrected_stencil_1_write[0] = inner_compute_out_corrected_stencil;
endmodule

module hcompute_corrected_stencil (
    output [15:0] out_corrected_stencil,
    input [15:0] in0_demosaicked_1_stencil [2:0]
);
assign out_corrected_stencil = ($signed(16'((16'((16'((16'(in0_demosaicked_1_stencil[0] * 16'h00c8)) + (16'(in0_demosaicked_1_stencil[1] * 16'h0011)))) - (16'(in0_demosaicked_1_stencil[2] * 16'h002c)))) + 16'hf0c4))) >>> 16'h0008;
endmodule

module cu_op_hcompute_corrected_stencil (
    input clk,
    input [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_read [2:0],
    output [15:0] corrected_stencil_op_hcompute_corrected_stencil_write [0:0]
);
wire [15:0] inner_compute_out_corrected_stencil;
wire [15:0] inner_compute_in0_demosaicked_1_stencil [2:0];
assign inner_compute_in0_demosaicked_1_stencil[2] = demosaicked_1_stencil_op_hcompute_corrected_stencil_read[2];
assign inner_compute_in0_demosaicked_1_stencil[1] = demosaicked_1_stencil_op_hcompute_corrected_stencil_read[1];
assign inner_compute_in0_demosaicked_1_stencil[0] = demosaicked_1_stencil_op_hcompute_corrected_stencil_read[0];
hcompute_corrected_stencil inner_compute (
    .out_corrected_stencil(inner_compute_out_corrected_stencil),
    .in0_demosaicked_1_stencil(inner_compute_in0_demosaicked_1_stencil)
);
assign corrected_stencil_op_hcompute_corrected_stencil_write[0] = inner_compute_out_corrected_stencil;
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

module commonlib_umin__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = in0 <= in1 ? in0 : in1;
endmodule

module hcompute_curved_stencil_2 (
    input clk,
    input [15:0] in0_corrected_stencil [0:0],
    output [15:0] out_curved_stencil
);
wire rom_curvea0$4_clk;
wire [15:0] rom_curvea0$4_rdata;
wire [15:0] rom_curvea0$4_raddr;
wire rom_curvea0$4_ren;
wire rom_curvea0$5_clk;
wire [15:0] rom_curvea0$5_raddr;
wire rom_curvea0$5_ren;
wire [15:0] umin_corrected_stencil_3_2380_2381_in0;
wire [15:0] umin_corrected_stencil_3_2380_2381_in1;
wire [15:0] umin_corrected_stencil_3_2380_2381_out;
assign rom_curvea0$4_clk = clk;
assign rom_curvea0$4_raddr = umin_corrected_stencil_3_2380_2381_out;
assign rom_curvea0$4_ren = 1'b1;
memory_rom2__depth256__width16 #(
    .init({16'd63,16'd63,16'd63,16'd62,16'd62,16'd62,16'd62,16'd61,16'd61,16'd61,16'd61,16'd60,16'd60,16'd60,16'd60,16'd59,16'd59,16'd59,16'd59,16'd58,16'd58,16'd58,16'd58,16'd57,16'd57,16'd57,16'd57,16'd56,16'd56,16'd56,16'd56,16'd55,16'd55,16'd55,16'd55,16'd54,16'd54,16'd54,16'd54,16'd53,16'd53,16'd53,16'd53,16'd52,16'd52,16'd52,16'd52,16'd51,16'd51,16'd51,16'd51,16'd50,16'd50,16'd50,16'd50,16'd49,16'd49,16'd49,16'd49,16'd48,16'd48,16'd48,16'd48,16'd47,16'd47,16'd47,16'd47,16'd46,16'd46,16'd46,16'd46,16'd45,16'd45,16'd45,16'd45,16'd44,16'd44,16'd44,16'd44,16'd43,16'd43,16'd43,16'd43,16'd42,16'd42,16'd42,16'd42,16'd41,16'd41,16'd41,16'd41,16'd40,16'd40,16'd40,16'd40,16'd39,16'd39,16'd39,16'd39,16'd38,16'd38,16'd38,16'd38,16'd37,16'd37,16'd37,16'd37,16'd36,16'd36,16'd36,16'd36,16'd35,16'd35,16'd35,16'd35,16'd34,16'd34,16'd34,16'd34,16'd33,16'd33,16'd33,16'd33,16'd32,16'd32,16'd32,16'd32,16'd31,16'd31,16'd31,16'd31,16'd30,16'd30,16'd30,16'd30,16'd29,16'd29,16'd29,16'd29,16'd28,16'd28,16'd28,16'd28,16'd27,16'd27,16'd27,16'd27,16'd26,16'd26,16'd26,16'd26,16'd25,16'd25,16'd25,16'd25,16'd24,16'd24,16'd24,16'd24,16'd23,16'd23,16'd23,16'd23,16'd22,16'd22,16'd22,16'd22,16'd21,16'd21,16'd21,16'd21,16'd20,16'd20,16'd20,16'd20,16'd19,16'd19,16'd19,16'd19,16'd18,16'd18,16'd18,16'd18,16'd17,16'd17,16'd17,16'd17,16'd16,16'd16,16'd16,16'd16,16'd15,16'd15,16'd15,16'd15,16'd14,16'd14,16'd14,16'd14,16'd13,16'd13,16'd13,16'd13,16'd12,16'd12,16'd12,16'd12,16'd11,16'd11,16'd11,16'd11,16'd10,16'd10,16'd10,16'd10,16'd9,16'd9,16'd9,16'd9,16'd8,16'd8,16'd8,16'd8,16'd7,16'd7,16'd7,16'd7,16'd6,16'd6,16'd6,16'd6,16'd5,16'd5,16'd5,16'd5,16'd4,16'd4,16'd4,16'd4,16'd3,16'd3,16'd3,16'd3,16'd2,16'd2,16'd2,16'd2,16'd1,16'd1,16'd1,16'd1,16'd0,16'd0,16'd0,16'd0,16'd0})
) rom_curvea0$4 (
    .clk(rom_curvea0$4_clk),
    .rdata(rom_curvea0$4_rdata),
    .raddr(rom_curvea0$4_raddr),
    .ren(rom_curvea0$4_ren)
);
assign rom_curvea0$5_clk = clk;
assign rom_curvea0$5_raddr = umin_corrected_stencil_3_2380_2381_out;
assign rom_curvea0$5_ren = 1'b1;
memory_rom2__depth256__width16 #(
    .init({16'd63,16'd63,16'd63,16'd62,16'd62,16'd62,16'd62,16'd61,16'd61,16'd61,16'd61,16'd60,16'd60,16'd60,16'd60,16'd59,16'd59,16'd59,16'd59,16'd58,16'd58,16'd58,16'd58,16'd57,16'd57,16'd57,16'd57,16'd56,16'd56,16'd56,16'd56,16'd55,16'd55,16'd55,16'd55,16'd54,16'd54,16'd54,16'd54,16'd53,16'd53,16'd53,16'd53,16'd52,16'd52,16'd52,16'd52,16'd51,16'd51,16'd51,16'd51,16'd50,16'd50,16'd50,16'd50,16'd49,16'd49,16'd49,16'd49,16'd48,16'd48,16'd48,16'd48,16'd47,16'd47,16'd47,16'd47,16'd46,16'd46,16'd46,16'd46,16'd45,16'd45,16'd45,16'd45,16'd44,16'd44,16'd44,16'd44,16'd43,16'd43,16'd43,16'd43,16'd42,16'd42,16'd42,16'd42,16'd41,16'd41,16'd41,16'd41,16'd40,16'd40,16'd40,16'd40,16'd39,16'd39,16'd39,16'd39,16'd38,16'd38,16'd38,16'd38,16'd37,16'd37,16'd37,16'd37,16'd36,16'd36,16'd36,16'd36,16'd35,16'd35,16'd35,16'd35,16'd34,16'd34,16'd34,16'd34,16'd33,16'd33,16'd33,16'd33,16'd32,16'd32,16'd32,16'd32,16'd31,16'd31,16'd31,16'd31,16'd30,16'd30,16'd30,16'd30,16'd29,16'd29,16'd29,16'd29,16'd28,16'd28,16'd28,16'd28,16'd27,16'd27,16'd27,16'd27,16'd26,16'd26,16'd26,16'd26,16'd25,16'd25,16'd25,16'd25,16'd24,16'd24,16'd24,16'd24,16'd23,16'd23,16'd23,16'd23,16'd22,16'd22,16'd22,16'd22,16'd21,16'd21,16'd21,16'd21,16'd20,16'd20,16'd20,16'd20,16'd19,16'd19,16'd19,16'd19,16'd18,16'd18,16'd18,16'd18,16'd17,16'd17,16'd17,16'd17,16'd16,16'd16,16'd16,16'd16,16'd15,16'd15,16'd15,16'd15,16'd14,16'd14,16'd14,16'd14,16'd13,16'd13,16'd13,16'd13,16'd12,16'd12,16'd12,16'd12,16'd11,16'd11,16'd11,16'd11,16'd10,16'd10,16'd10,16'd10,16'd9,16'd9,16'd9,16'd9,16'd8,16'd8,16'd8,16'd8,16'd7,16'd7,16'd7,16'd7,16'd6,16'd6,16'd6,16'd6,16'd5,16'd5,16'd5,16'd5,16'd4,16'd4,16'd4,16'd4,16'd3,16'd3,16'd3,16'd3,16'd2,16'd2,16'd2,16'd2,16'd1,16'd1,16'd1,16'd1,16'd0,16'd0,16'd0,16'd0,16'd0})
) rom_curvea0$5 (
    .clk(rom_curvea0$5_clk),
    .rdata(out_curved_stencil),
    .raddr(rom_curvea0$5_raddr),
    .ren(rom_curvea0$5_ren)
);
assign umin_corrected_stencil_3_2380_2381_in0 = in0_corrected_stencil[0];
assign umin_corrected_stencil_3_2380_2381_in1 = 16'h00ff;
commonlib_umin__width16 umin_corrected_stencil_3_2380_2381 (
    .in0(umin_corrected_stencil_3_2380_2381_in0),
    .in1(umin_corrected_stencil_3_2380_2381_in1),
    .out(umin_corrected_stencil_3_2380_2381_out)
);
endmodule

module cu_op_hcompute_curved_stencil_2 (
    input clk,
    input [15:0] corrected_stencil_op_hcompute_curved_stencil_2_read [0:0],
    output [15:0] curved_stencil_op_hcompute_curved_stencil_2_write [0:0]
);
wire inner_compute_clk;
wire [15:0] inner_compute_in0_corrected_stencil [0:0];
wire [15:0] inner_compute_out_curved_stencil;
assign inner_compute_clk = clk;
assign inner_compute_in0_corrected_stencil[0] = corrected_stencil_op_hcompute_curved_stencil_2_read[0];
hcompute_curved_stencil_2 inner_compute (
    .clk(inner_compute_clk),
    .in0_corrected_stencil(inner_compute_in0_corrected_stencil),
    .out_curved_stencil(inner_compute_out_curved_stencil)
);
assign curved_stencil_op_hcompute_curved_stencil_2_write[0] = inner_compute_out_curved_stencil;
endmodule

module hcompute_curved_stencil_1 (
    input clk,
    input [15:0] in0_corrected_stencil [0:0],
    output [15:0] out_curved_stencil
);
wire rom_curvea0$2_clk;
wire [15:0] rom_curvea0$2_rdata;
wire [15:0] rom_curvea0$2_raddr;
wire rom_curvea0$2_ren;
wire rom_curvea0$3_clk;
wire [15:0] rom_curvea0$3_raddr;
wire rom_curvea0$3_ren;
wire [15:0] umin_corrected_stencil_2_2111_2112_in0;
wire [15:0] umin_corrected_stencil_2_2111_2112_in1;
wire [15:0] umin_corrected_stencil_2_2111_2112_out;
assign rom_curvea0$2_clk = clk;
assign rom_curvea0$2_raddr = umin_corrected_stencil_2_2111_2112_out;
assign rom_curvea0$2_ren = 1'b1;
memory_rom2__depth256__width16 #(
    .init({16'd63,16'd63,16'd63,16'd62,16'd62,16'd62,16'd62,16'd61,16'd61,16'd61,16'd61,16'd60,16'd60,16'd60,16'd60,16'd59,16'd59,16'd59,16'd59,16'd58,16'd58,16'd58,16'd58,16'd57,16'd57,16'd57,16'd57,16'd56,16'd56,16'd56,16'd56,16'd55,16'd55,16'd55,16'd55,16'd54,16'd54,16'd54,16'd54,16'd53,16'd53,16'd53,16'd53,16'd52,16'd52,16'd52,16'd52,16'd51,16'd51,16'd51,16'd51,16'd50,16'd50,16'd50,16'd50,16'd49,16'd49,16'd49,16'd49,16'd48,16'd48,16'd48,16'd48,16'd47,16'd47,16'd47,16'd47,16'd46,16'd46,16'd46,16'd46,16'd45,16'd45,16'd45,16'd45,16'd44,16'd44,16'd44,16'd44,16'd43,16'd43,16'd43,16'd43,16'd42,16'd42,16'd42,16'd42,16'd41,16'd41,16'd41,16'd41,16'd40,16'd40,16'd40,16'd40,16'd39,16'd39,16'd39,16'd39,16'd38,16'd38,16'd38,16'd38,16'd37,16'd37,16'd37,16'd37,16'd36,16'd36,16'd36,16'd36,16'd35,16'd35,16'd35,16'd35,16'd34,16'd34,16'd34,16'd34,16'd33,16'd33,16'd33,16'd33,16'd32,16'd32,16'd32,16'd32,16'd31,16'd31,16'd31,16'd31,16'd30,16'd30,16'd30,16'd30,16'd29,16'd29,16'd29,16'd29,16'd28,16'd28,16'd28,16'd28,16'd27,16'd27,16'd27,16'd27,16'd26,16'd26,16'd26,16'd26,16'd25,16'd25,16'd25,16'd25,16'd24,16'd24,16'd24,16'd24,16'd23,16'd23,16'd23,16'd23,16'd22,16'd22,16'd22,16'd22,16'd21,16'd21,16'd21,16'd21,16'd20,16'd20,16'd20,16'd20,16'd19,16'd19,16'd19,16'd19,16'd18,16'd18,16'd18,16'd18,16'd17,16'd17,16'd17,16'd17,16'd16,16'd16,16'd16,16'd16,16'd15,16'd15,16'd15,16'd15,16'd14,16'd14,16'd14,16'd14,16'd13,16'd13,16'd13,16'd13,16'd12,16'd12,16'd12,16'd12,16'd11,16'd11,16'd11,16'd11,16'd10,16'd10,16'd10,16'd10,16'd9,16'd9,16'd9,16'd9,16'd8,16'd8,16'd8,16'd8,16'd7,16'd7,16'd7,16'd7,16'd6,16'd6,16'd6,16'd6,16'd5,16'd5,16'd5,16'd5,16'd4,16'd4,16'd4,16'd4,16'd3,16'd3,16'd3,16'd3,16'd2,16'd2,16'd2,16'd2,16'd1,16'd1,16'd1,16'd1,16'd0,16'd0,16'd0,16'd0,16'd0})
) rom_curvea0$2 (
    .clk(rom_curvea0$2_clk),
    .rdata(rom_curvea0$2_rdata),
    .raddr(rom_curvea0$2_raddr),
    .ren(rom_curvea0$2_ren)
);
assign rom_curvea0$3_clk = clk;
assign rom_curvea0$3_raddr = umin_corrected_stencil_2_2111_2112_out;
assign rom_curvea0$3_ren = 1'b1;
memory_rom2__depth256__width16 #(
    .init({16'd63,16'd63,16'd63,16'd62,16'd62,16'd62,16'd62,16'd61,16'd61,16'd61,16'd61,16'd60,16'd60,16'd60,16'd60,16'd59,16'd59,16'd59,16'd59,16'd58,16'd58,16'd58,16'd58,16'd57,16'd57,16'd57,16'd57,16'd56,16'd56,16'd56,16'd56,16'd55,16'd55,16'd55,16'd55,16'd54,16'd54,16'd54,16'd54,16'd53,16'd53,16'd53,16'd53,16'd52,16'd52,16'd52,16'd52,16'd51,16'd51,16'd51,16'd51,16'd50,16'd50,16'd50,16'd50,16'd49,16'd49,16'd49,16'd49,16'd48,16'd48,16'd48,16'd48,16'd47,16'd47,16'd47,16'd47,16'd46,16'd46,16'd46,16'd46,16'd45,16'd45,16'd45,16'd45,16'd44,16'd44,16'd44,16'd44,16'd43,16'd43,16'd43,16'd43,16'd42,16'd42,16'd42,16'd42,16'd41,16'd41,16'd41,16'd41,16'd40,16'd40,16'd40,16'd40,16'd39,16'd39,16'd39,16'd39,16'd38,16'd38,16'd38,16'd38,16'd37,16'd37,16'd37,16'd37,16'd36,16'd36,16'd36,16'd36,16'd35,16'd35,16'd35,16'd35,16'd34,16'd34,16'd34,16'd34,16'd33,16'd33,16'd33,16'd33,16'd32,16'd32,16'd32,16'd32,16'd31,16'd31,16'd31,16'd31,16'd30,16'd30,16'd30,16'd30,16'd29,16'd29,16'd29,16'd29,16'd28,16'd28,16'd28,16'd28,16'd27,16'd27,16'd27,16'd27,16'd26,16'd26,16'd26,16'd26,16'd25,16'd25,16'd25,16'd25,16'd24,16'd24,16'd24,16'd24,16'd23,16'd23,16'd23,16'd23,16'd22,16'd22,16'd22,16'd22,16'd21,16'd21,16'd21,16'd21,16'd20,16'd20,16'd20,16'd20,16'd19,16'd19,16'd19,16'd19,16'd18,16'd18,16'd18,16'd18,16'd17,16'd17,16'd17,16'd17,16'd16,16'd16,16'd16,16'd16,16'd15,16'd15,16'd15,16'd15,16'd14,16'd14,16'd14,16'd14,16'd13,16'd13,16'd13,16'd13,16'd12,16'd12,16'd12,16'd12,16'd11,16'd11,16'd11,16'd11,16'd10,16'd10,16'd10,16'd10,16'd9,16'd9,16'd9,16'd9,16'd8,16'd8,16'd8,16'd8,16'd7,16'd7,16'd7,16'd7,16'd6,16'd6,16'd6,16'd6,16'd5,16'd5,16'd5,16'd5,16'd4,16'd4,16'd4,16'd4,16'd3,16'd3,16'd3,16'd3,16'd2,16'd2,16'd2,16'd2,16'd1,16'd1,16'd1,16'd1,16'd0,16'd0,16'd0,16'd0,16'd0})
) rom_curvea0$3 (
    .clk(rom_curvea0$3_clk),
    .rdata(out_curved_stencil),
    .raddr(rom_curvea0$3_raddr),
    .ren(rom_curvea0$3_ren)
);
assign umin_corrected_stencil_2_2111_2112_in0 = in0_corrected_stencil[0];
assign umin_corrected_stencil_2_2111_2112_in1 = 16'h00ff;
commonlib_umin__width16 umin_corrected_stencil_2_2111_2112 (
    .in0(umin_corrected_stencil_2_2111_2112_in0),
    .in1(umin_corrected_stencil_2_2111_2112_in1),
    .out(umin_corrected_stencil_2_2111_2112_out)
);
endmodule

module cu_op_hcompute_curved_stencil_1 (
    input clk,
    input [15:0] corrected_stencil_op_hcompute_curved_stencil_1_read [0:0],
    output [15:0] curved_stencil_op_hcompute_curved_stencil_1_write [0:0]
);
wire inner_compute_clk;
wire [15:0] inner_compute_in0_corrected_stencil [0:0];
wire [15:0] inner_compute_out_curved_stencil;
assign inner_compute_clk = clk;
assign inner_compute_in0_corrected_stencil[0] = corrected_stencil_op_hcompute_curved_stencil_1_read[0];
hcompute_curved_stencil_1 inner_compute (
    .clk(inner_compute_clk),
    .in0_corrected_stencil(inner_compute_in0_corrected_stencil),
    .out_curved_stencil(inner_compute_out_curved_stencil)
);
assign curved_stencil_op_hcompute_curved_stencil_1_write[0] = inner_compute_out_curved_stencil;
endmodule

module hcompute_curved_stencil (
    input clk,
    input [15:0] in0_corrected_stencil [0:0],
    output [15:0] out_curved_stencil
);
wire rom_curvea0_clk;
wire [15:0] rom_curvea0_rdata;
wire [15:0] rom_curvea0_raddr;
wire rom_curvea0_ren;
wire rom_curvea0$1_clk;
wire [15:0] rom_curvea0$1_raddr;
wire rom_curvea0$1_ren;
wire [15:0] umin_corrected_stencil_1_1842_1843_in0;
wire [15:0] umin_corrected_stencil_1_1842_1843_in1;
wire [15:0] umin_corrected_stencil_1_1842_1843_out;
assign rom_curvea0_clk = clk;
assign rom_curvea0_raddr = umin_corrected_stencil_1_1842_1843_out;
assign rom_curvea0_ren = 1'b1;
memory_rom2__depth256__width16 #(
    .init({16'd63,16'd63,16'd63,16'd62,16'd62,16'd62,16'd62,16'd61,16'd61,16'd61,16'd61,16'd60,16'd60,16'd60,16'd60,16'd59,16'd59,16'd59,16'd59,16'd58,16'd58,16'd58,16'd58,16'd57,16'd57,16'd57,16'd57,16'd56,16'd56,16'd56,16'd56,16'd55,16'd55,16'd55,16'd55,16'd54,16'd54,16'd54,16'd54,16'd53,16'd53,16'd53,16'd53,16'd52,16'd52,16'd52,16'd52,16'd51,16'd51,16'd51,16'd51,16'd50,16'd50,16'd50,16'd50,16'd49,16'd49,16'd49,16'd49,16'd48,16'd48,16'd48,16'd48,16'd47,16'd47,16'd47,16'd47,16'd46,16'd46,16'd46,16'd46,16'd45,16'd45,16'd45,16'd45,16'd44,16'd44,16'd44,16'd44,16'd43,16'd43,16'd43,16'd43,16'd42,16'd42,16'd42,16'd42,16'd41,16'd41,16'd41,16'd41,16'd40,16'd40,16'd40,16'd40,16'd39,16'd39,16'd39,16'd39,16'd38,16'd38,16'd38,16'd38,16'd37,16'd37,16'd37,16'd37,16'd36,16'd36,16'd36,16'd36,16'd35,16'd35,16'd35,16'd35,16'd34,16'd34,16'd34,16'd34,16'd33,16'd33,16'd33,16'd33,16'd32,16'd32,16'd32,16'd32,16'd31,16'd31,16'd31,16'd31,16'd30,16'd30,16'd30,16'd30,16'd29,16'd29,16'd29,16'd29,16'd28,16'd28,16'd28,16'd28,16'd27,16'd27,16'd27,16'd27,16'd26,16'd26,16'd26,16'd26,16'd25,16'd25,16'd25,16'd25,16'd24,16'd24,16'd24,16'd24,16'd23,16'd23,16'd23,16'd23,16'd22,16'd22,16'd22,16'd22,16'd21,16'd21,16'd21,16'd21,16'd20,16'd20,16'd20,16'd20,16'd19,16'd19,16'd19,16'd19,16'd18,16'd18,16'd18,16'd18,16'd17,16'd17,16'd17,16'd17,16'd16,16'd16,16'd16,16'd16,16'd15,16'd15,16'd15,16'd15,16'd14,16'd14,16'd14,16'd14,16'd13,16'd13,16'd13,16'd13,16'd12,16'd12,16'd12,16'd12,16'd11,16'd11,16'd11,16'd11,16'd10,16'd10,16'd10,16'd10,16'd9,16'd9,16'd9,16'd9,16'd8,16'd8,16'd8,16'd8,16'd7,16'd7,16'd7,16'd7,16'd6,16'd6,16'd6,16'd6,16'd5,16'd5,16'd5,16'd5,16'd4,16'd4,16'd4,16'd4,16'd3,16'd3,16'd3,16'd3,16'd2,16'd2,16'd2,16'd2,16'd1,16'd1,16'd1,16'd1,16'd0,16'd0,16'd0,16'd0,16'd0})
) rom_curvea0 (
    .clk(rom_curvea0_clk),
    .rdata(rom_curvea0_rdata),
    .raddr(rom_curvea0_raddr),
    .ren(rom_curvea0_ren)
);
assign rom_curvea0$1_clk = clk;
assign rom_curvea0$1_raddr = umin_corrected_stencil_1_1842_1843_out;
assign rom_curvea0$1_ren = 1'b1;
memory_rom2__depth256__width16 #(
    .init({16'd63,16'd63,16'd63,16'd62,16'd62,16'd62,16'd62,16'd61,16'd61,16'd61,16'd61,16'd60,16'd60,16'd60,16'd60,16'd59,16'd59,16'd59,16'd59,16'd58,16'd58,16'd58,16'd58,16'd57,16'd57,16'd57,16'd57,16'd56,16'd56,16'd56,16'd56,16'd55,16'd55,16'd55,16'd55,16'd54,16'd54,16'd54,16'd54,16'd53,16'd53,16'd53,16'd53,16'd52,16'd52,16'd52,16'd52,16'd51,16'd51,16'd51,16'd51,16'd50,16'd50,16'd50,16'd50,16'd49,16'd49,16'd49,16'd49,16'd48,16'd48,16'd48,16'd48,16'd47,16'd47,16'd47,16'd47,16'd46,16'd46,16'd46,16'd46,16'd45,16'd45,16'd45,16'd45,16'd44,16'd44,16'd44,16'd44,16'd43,16'd43,16'd43,16'd43,16'd42,16'd42,16'd42,16'd42,16'd41,16'd41,16'd41,16'd41,16'd40,16'd40,16'd40,16'd40,16'd39,16'd39,16'd39,16'd39,16'd38,16'd38,16'd38,16'd38,16'd37,16'd37,16'd37,16'd37,16'd36,16'd36,16'd36,16'd36,16'd35,16'd35,16'd35,16'd35,16'd34,16'd34,16'd34,16'd34,16'd33,16'd33,16'd33,16'd33,16'd32,16'd32,16'd32,16'd32,16'd31,16'd31,16'd31,16'd31,16'd30,16'd30,16'd30,16'd30,16'd29,16'd29,16'd29,16'd29,16'd28,16'd28,16'd28,16'd28,16'd27,16'd27,16'd27,16'd27,16'd26,16'd26,16'd26,16'd26,16'd25,16'd25,16'd25,16'd25,16'd24,16'd24,16'd24,16'd24,16'd23,16'd23,16'd23,16'd23,16'd22,16'd22,16'd22,16'd22,16'd21,16'd21,16'd21,16'd21,16'd20,16'd20,16'd20,16'd20,16'd19,16'd19,16'd19,16'd19,16'd18,16'd18,16'd18,16'd18,16'd17,16'd17,16'd17,16'd17,16'd16,16'd16,16'd16,16'd16,16'd15,16'd15,16'd15,16'd15,16'd14,16'd14,16'd14,16'd14,16'd13,16'd13,16'd13,16'd13,16'd12,16'd12,16'd12,16'd12,16'd11,16'd11,16'd11,16'd11,16'd10,16'd10,16'd10,16'd10,16'd9,16'd9,16'd9,16'd9,16'd8,16'd8,16'd8,16'd8,16'd7,16'd7,16'd7,16'd7,16'd6,16'd6,16'd6,16'd6,16'd5,16'd5,16'd5,16'd5,16'd4,16'd4,16'd4,16'd4,16'd3,16'd3,16'd3,16'd3,16'd2,16'd2,16'd2,16'd2,16'd1,16'd1,16'd1,16'd1,16'd0,16'd0,16'd0,16'd0,16'd0})
) rom_curvea0$1 (
    .clk(rom_curvea0$1_clk),
    .rdata(out_curved_stencil),
    .raddr(rom_curvea0$1_raddr),
    .ren(rom_curvea0$1_ren)
);
assign umin_corrected_stencil_1_1842_1843_in0 = in0_corrected_stencil[0];
assign umin_corrected_stencil_1_1842_1843_in1 = 16'h00ff;
commonlib_umin__width16 umin_corrected_stencil_1_1842_1843 (
    .in0(umin_corrected_stencil_1_1842_1843_in0),
    .in1(umin_corrected_stencil_1_1842_1843_in1),
    .out(umin_corrected_stencil_1_1842_1843_out)
);
endmodule

module cu_op_hcompute_curved_stencil (
    input clk,
    input [15:0] corrected_stencil_op_hcompute_curved_stencil_read [0:0],
    output [15:0] curved_stencil_op_hcompute_curved_stencil_write [0:0]
);
wire inner_compute_clk;
wire [15:0] inner_compute_in0_corrected_stencil [0:0];
wire [15:0] inner_compute_out_curved_stencil;
assign inner_compute_clk = clk;
assign inner_compute_in0_corrected_stencil[0] = corrected_stencil_op_hcompute_curved_stencil_read[0];
hcompute_curved_stencil inner_compute (
    .clk(inner_compute_clk),
    .in0_corrected_stencil(inner_compute_in0_corrected_stencil),
    .out_curved_stencil(inner_compute_out_curved_stencil)
);
assign curved_stencil_op_hcompute_curved_stencil_write[0] = inner_compute_out_curved_stencil;
endmodule

module commonlib_umax__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = in0 >= in1 ? in0 : in1;
endmodule

module hcompute_denoised_1_stencil (
    output [15:0] out_denoised_1_stencil,
    input [15:0] in0_hw_input_global_wrapper_stencil [4:0]
);
wire [15:0] umax_333_336_337_in0;
wire [15:0] umax_333_336_337_in1;
wire [15:0] umax_hw_input_global_wrapper_stencil_2_331_332_in0;
wire [15:0] umax_hw_input_global_wrapper_stencil_2_331_332_in1;
wire [15:0] umax_hw_input_global_wrapper_stencil_2_331_332_out;
wire [15:0] umax_hw_input_global_wrapper_stencil_3_330_331_in0;
wire [15:0] umax_hw_input_global_wrapper_stencil_3_330_331_in1;
wire [15:0] umax_hw_input_global_wrapper_stencil_3_330_331_out;
wire [15:0] umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_in0;
wire [15:0] umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_in1;
wire [15:0] umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_out;
wire [15:0] umin_hw_input_global_wrapper_stencil_1_332_333_in0;
wire [15:0] umin_hw_input_global_wrapper_stencil_1_332_333_in1;
wire [15:0] umin_hw_input_global_wrapper_stencil_1_332_333_out;
wire [15:0] umin_hw_input_global_wrapper_stencil_2_335_336_in0;
wire [15:0] umin_hw_input_global_wrapper_stencil_2_335_336_in1;
wire [15:0] umin_hw_input_global_wrapper_stencil_2_335_336_out;
wire [15:0] umin_hw_input_global_wrapper_stencil_3_334_335_in0;
wire [15:0] umin_hw_input_global_wrapper_stencil_3_334_335_in1;
wire [15:0] umin_hw_input_global_wrapper_stencil_3_334_335_out;
wire [15:0] umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_in0;
wire [15:0] umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_in1;
wire [15:0] umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_out;
assign umax_333_336_337_in0 = umin_hw_input_global_wrapper_stencil_1_332_333_out;
assign umax_333_336_337_in1 = umin_hw_input_global_wrapper_stencil_2_335_336_out;
commonlib_umax__width16 umax_333_336_337 (
    .in0(umax_333_336_337_in0),
    .in1(umax_333_336_337_in1),
    .out(out_denoised_1_stencil)
);
assign umax_hw_input_global_wrapper_stencil_2_331_332_in0 = in0_hw_input_global_wrapper_stencil[1];
assign umax_hw_input_global_wrapper_stencil_2_331_332_in1 = umax_hw_input_global_wrapper_stencil_3_330_331_out;
commonlib_umax__width16 umax_hw_input_global_wrapper_stencil_2_331_332 (
    .in0(umax_hw_input_global_wrapper_stencil_2_331_332_in0),
    .in1(umax_hw_input_global_wrapper_stencil_2_331_332_in1),
    .out(umax_hw_input_global_wrapper_stencil_2_331_332_out)
);
assign umax_hw_input_global_wrapper_stencil_3_330_331_in0 = in0_hw_input_global_wrapper_stencil[2];
assign umax_hw_input_global_wrapper_stencil_3_330_331_in1 = umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_out;
commonlib_umax__width16 umax_hw_input_global_wrapper_stencil_3_330_331 (
    .in0(umax_hw_input_global_wrapper_stencil_3_330_331_in0),
    .in1(umax_hw_input_global_wrapper_stencil_3_330_331_in1),
    .out(umax_hw_input_global_wrapper_stencil_3_330_331_out)
);
assign umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_in0 = in0_hw_input_global_wrapper_stencil[3];
assign umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_in1 = in0_hw_input_global_wrapper_stencil[4];
commonlib_umax__width16 umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330 (
    .in0(umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_in0),
    .in1(umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_in1),
    .out(umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_out)
);
assign umin_hw_input_global_wrapper_stencil_1_332_333_in0 = in0_hw_input_global_wrapper_stencil[0];
assign umin_hw_input_global_wrapper_stencil_1_332_333_in1 = umax_hw_input_global_wrapper_stencil_2_331_332_out;
commonlib_umin__width16 umin_hw_input_global_wrapper_stencil_1_332_333 (
    .in0(umin_hw_input_global_wrapper_stencil_1_332_333_in0),
    .in1(umin_hw_input_global_wrapper_stencil_1_332_333_in1),
    .out(umin_hw_input_global_wrapper_stencil_1_332_333_out)
);
assign umin_hw_input_global_wrapper_stencil_2_335_336_in0 = in0_hw_input_global_wrapper_stencil[1];
assign umin_hw_input_global_wrapper_stencil_2_335_336_in1 = umin_hw_input_global_wrapper_stencil_3_334_335_out;
commonlib_umin__width16 umin_hw_input_global_wrapper_stencil_2_335_336 (
    .in0(umin_hw_input_global_wrapper_stencil_2_335_336_in0),
    .in1(umin_hw_input_global_wrapper_stencil_2_335_336_in1),
    .out(umin_hw_input_global_wrapper_stencil_2_335_336_out)
);
assign umin_hw_input_global_wrapper_stencil_3_334_335_in0 = in0_hw_input_global_wrapper_stencil[2];
assign umin_hw_input_global_wrapper_stencil_3_334_335_in1 = umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_out;
commonlib_umin__width16 umin_hw_input_global_wrapper_stencil_3_334_335 (
    .in0(umin_hw_input_global_wrapper_stencil_3_334_335_in0),
    .in1(umin_hw_input_global_wrapper_stencil_3_334_335_in1),
    .out(umin_hw_input_global_wrapper_stencil_3_334_335_out)
);
assign umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_in0 = in0_hw_input_global_wrapper_stencil[3];
assign umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_in1 = in0_hw_input_global_wrapper_stencil[4];
commonlib_umin__width16 umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334 (
    .in0(umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_in0),
    .in1(umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_in1),
    .out(umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_out)
);
endmodule

module cu_op_hcompute_denoised_1_stencil (
    input clk,
    input [15:0] hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read [4:0],
    output [15:0] denoised_1_stencil_op_hcompute_denoised_1_stencil_write [0:0]
);
wire [15:0] inner_compute_out_denoised_1_stencil;
wire [15:0] inner_compute_in0_hw_input_global_wrapper_stencil [4:0];
assign inner_compute_in0_hw_input_global_wrapper_stencil[4] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[4];
assign inner_compute_in0_hw_input_global_wrapper_stencil[3] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[3];
assign inner_compute_in0_hw_input_global_wrapper_stencil[2] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[2];
assign inner_compute_in0_hw_input_global_wrapper_stencil[1] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[1];
assign inner_compute_in0_hw_input_global_wrapper_stencil[0] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[0];
hcompute_denoised_1_stencil inner_compute (
    .out_denoised_1_stencil(inner_compute_out_denoised_1_stencil),
    .in0_hw_input_global_wrapper_stencil(inner_compute_in0_hw_input_global_wrapper_stencil)
);
assign denoised_1_stencil_op_hcompute_denoised_1_stencil_write[0] = inner_compute_out_denoised_1_stencil;
endmodule

module commonlib_abs__width16 (
    input [15:0] in,
    output [15:0] out
);
assign out = ($signed(in)) >= ($signed(16'h0000)) ? in : 16'(16'hffff * in);
endmodule

module commonlib_absd__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
wire [15:0] abs_in;
assign abs_in = 16'(in0 - in1);
commonlib_abs__width16 abs (
    .in(abs_in),
    .out(out)
);
endmodule

module hcompute_demosaicked_1_stencil_2 (
    output [15:0] out_demosaicked_1_stencil,
    input [15:0] in0_denoised_1_stencil [7:0],
    input [15:0] demosaicked_1_s0_x_2,
    input [15:0] demosaicked_1_s0_y_2
);
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_15_992_in0;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_15_992_in1;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_15_992_out;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_17_971_in0;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_17_971_in1;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_17_971_out;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_18_972_in0;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_18_972_in1;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_18_972_out;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_20_991_in0;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_20_991_in1;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_20_991_out;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_14_965_in0;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_14_965_in1;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_14_965_out;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_16_964_in0;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_16_964_in1;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_16_964_out;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_20_986_in0;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_20_986_in1;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_20_986_out;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_14_985_in0;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_14_985_in1;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_14_985_out;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_15_999_in0;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_15_999_in1;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_15_999_out;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_in0;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_in1;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_out;
wire [15:0] absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_in0;
wire [15:0] absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_in1;
wire [15:0] absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_out;
wire [15:0] absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_in0;
wire [15:0] absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_in1;
wire [15:0] absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_out;
wire eq_9570_958_out;
wire [15:0] lshr_961_960_962_out;
wire [15:0] lshr_995_960_996_out;
wire [15:0] mux_1019_996_1022_out;
wire [15:0] mux_966_969_962_out;
wire [15:0] mux_973_976_979_out;
wire [15:0] mux_993_996_962_out;
assign absd_denoised_1_stencil_14_denoised_1_stencil_15_992_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_14_denoised_1_stencil_15_992_in1 = in0_denoised_1_stencil[1];
commonlib_absd__width16 absd_denoised_1_stencil_14_denoised_1_stencil_15_992 (
    .in0(absd_denoised_1_stencil_14_denoised_1_stencil_15_992_in0),
    .in1(absd_denoised_1_stencil_14_denoised_1_stencil_15_992_in1),
    .out(absd_denoised_1_stencil_14_denoised_1_stencil_15_992_out)
);
assign absd_denoised_1_stencil_14_denoised_1_stencil_17_971_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_14_denoised_1_stencil_17_971_in1 = in0_denoised_1_stencil[3];
commonlib_absd__width16 absd_denoised_1_stencil_14_denoised_1_stencil_17_971 (
    .in0(absd_denoised_1_stencil_14_denoised_1_stencil_17_971_in0),
    .in1(absd_denoised_1_stencil_14_denoised_1_stencil_17_971_in1),
    .out(absd_denoised_1_stencil_14_denoised_1_stencil_17_971_out)
);
assign absd_denoised_1_stencil_14_denoised_1_stencil_18_972_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_14_denoised_1_stencil_18_972_in1 = in0_denoised_1_stencil[4];
commonlib_absd__width16 absd_denoised_1_stencil_14_denoised_1_stencil_18_972 (
    .in0(absd_denoised_1_stencil_14_denoised_1_stencil_18_972_in0),
    .in1(absd_denoised_1_stencil_14_denoised_1_stencil_18_972_in1),
    .out(absd_denoised_1_stencil_14_denoised_1_stencil_18_972_out)
);
assign absd_denoised_1_stencil_14_denoised_1_stencil_20_991_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_14_denoised_1_stencil_20_991_in1 = in0_denoised_1_stencil[6];
commonlib_absd__width16 absd_denoised_1_stencil_14_denoised_1_stencil_20_991 (
    .in0(absd_denoised_1_stencil_14_denoised_1_stencil_20_991_in0),
    .in1(absd_denoised_1_stencil_14_denoised_1_stencil_20_991_in1),
    .out(absd_denoised_1_stencil_14_denoised_1_stencil_20_991_out)
);
assign absd_denoised_1_stencil_15_denoised_1_stencil_14_965_in0 = in0_denoised_1_stencil[1];
assign absd_denoised_1_stencil_15_denoised_1_stencil_14_965_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_15_denoised_1_stencil_14_965 (
    .in0(absd_denoised_1_stencil_15_denoised_1_stencil_14_965_in0),
    .in1(absd_denoised_1_stencil_15_denoised_1_stencil_14_965_in1),
    .out(absd_denoised_1_stencil_15_denoised_1_stencil_14_965_out)
);
assign absd_denoised_1_stencil_15_denoised_1_stencil_16_964_in0 = in0_denoised_1_stencil[1];
assign absd_denoised_1_stencil_15_denoised_1_stencil_16_964_in1 = in0_denoised_1_stencil[2];
commonlib_absd__width16 absd_denoised_1_stencil_15_denoised_1_stencil_16_964 (
    .in0(absd_denoised_1_stencil_15_denoised_1_stencil_16_964_in0),
    .in1(absd_denoised_1_stencil_15_denoised_1_stencil_16_964_in1),
    .out(absd_denoised_1_stencil_15_denoised_1_stencil_16_964_out)
);
assign absd_denoised_1_stencil_15_denoised_1_stencil_20_986_in0 = in0_denoised_1_stencil[1];
assign absd_denoised_1_stencil_15_denoised_1_stencil_20_986_in1 = in0_denoised_1_stencil[6];
commonlib_absd__width16 absd_denoised_1_stencil_15_denoised_1_stencil_20_986 (
    .in0(absd_denoised_1_stencil_15_denoised_1_stencil_20_986_in0),
    .in1(absd_denoised_1_stencil_15_denoised_1_stencil_20_986_in1),
    .out(absd_denoised_1_stencil_15_denoised_1_stencil_20_986_out)
);
assign absd_denoised_1_stencil_19_denoised_1_stencil_14_985_in0 = in0_denoised_1_stencil[5];
assign absd_denoised_1_stencil_19_denoised_1_stencil_14_985_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_19_denoised_1_stencil_14_985 (
    .in0(absd_denoised_1_stencil_19_denoised_1_stencil_14_985_in0),
    .in1(absd_denoised_1_stencil_19_denoised_1_stencil_14_985_in1),
    .out(absd_denoised_1_stencil_19_denoised_1_stencil_14_985_out)
);
assign absd_denoised_1_stencil_19_denoised_1_stencil_15_999_in0 = in0_denoised_1_stencil[5];
assign absd_denoised_1_stencil_19_denoised_1_stencil_15_999_in1 = in0_denoised_1_stencil[1];
commonlib_absd__width16 absd_denoised_1_stencil_19_denoised_1_stencil_15_999 (
    .in0(absd_denoised_1_stencil_19_denoised_1_stencil_15_999_in0),
    .in1(absd_denoised_1_stencil_19_denoised_1_stencil_15_999_in1),
    .out(absd_denoised_1_stencil_19_denoised_1_stencil_15_999_out)
);
assign absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_in0 = in0_denoised_1_stencil[5];
assign absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_in1 = in0_denoised_1_stencil[6];
commonlib_absd__width16 absd_denoised_1_stencil_19_denoised_1_stencil_20_1000 (
    .in0(absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_in0),
    .in1(absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_in1),
    .out(absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_out)
);
assign absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_in0 = in0_denoised_1_stencil[6];
assign absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_20_denoised_1_stencil_14_1017 (
    .in0(absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_in0),
    .in1(absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_in1),
    .out(absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_out)
);
assign absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_in0 = in0_denoised_1_stencil[6];
assign absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_in1 = in0_denoised_1_stencil[7];
commonlib_absd__width16 absd_denoised_1_stencil_20_denoised_1_stencil_21_1018 (
    .in0(absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_in0),
    .in1(absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_in1),
    .out(absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_out)
);
assign eq_9570_958_out = (demosaicked_1_s0_x_2 & 16'h0001) == 16'h0000;
assign lshr_961_960_962_out = (16'((16'(in0_denoised_1_stencil[0] + in0_denoised_1_stencil[1])) + 16'h0001)) >> 16'h0001;
assign lshr_995_960_996_out = (16'((16'(in0_denoised_1_stencil[0] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001;
assign mux_1019_996_1022_out = absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_out < absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_out ? lshr_995_960_996_out : (16'((16'(in0_denoised_1_stencil[7] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001;
assign mux_966_969_962_out = absd_denoised_1_stencil_15_denoised_1_stencil_16_964_out < absd_denoised_1_stencil_15_denoised_1_stencil_14_965_out ? (16'((16'(in0_denoised_1_stencil[2] + in0_denoised_1_stencil[1])) + 16'h0001)) >> 16'h0001 : lshr_961_960_962_out;
assign mux_973_976_979_out = absd_denoised_1_stencil_14_denoised_1_stencil_17_971_out < absd_denoised_1_stencil_14_denoised_1_stencil_18_972_out ? (16'((16'(in0_denoised_1_stencil[3] + in0_denoised_1_stencil[0])) + 16'h0001)) >> 16'h0001 : (16'((16'(in0_denoised_1_stencil[4] + in0_denoised_1_stencil[0])) + 16'h0001)) >> 16'h0001;
assign mux_993_996_962_out = absd_denoised_1_stencil_14_denoised_1_stencil_20_991_out < absd_denoised_1_stencil_14_denoised_1_stencil_15_992_out ? lshr_995_960_996_out : lshr_961_960_962_out;
assign out_demosaicked_1_stencil = (demosaicked_1_s0_y_2 & 16'h0001) == 16'h0000 ? eq_9570_958_out ? 16'((16'(in0_denoised_1_stencil[0] + lshr_961_960_962_out)) - ((16'((16'(mux_966_969_962_out + mux_973_976_979_out)) + 16'h0001)) >> 16'h0001)) : absd_denoised_1_stencil_19_denoised_1_stencil_14_985_out < absd_denoised_1_stencil_15_denoised_1_stencil_20_986_out ? 16'((16'(((16'((16'(in0_denoised_1_stencil[5] + in0_denoised_1_stencil[0])) + 16'h0001)) >> 16'h0001) + mux_993_996_962_out)) - ((16'((16'((absd_denoised_1_stencil_19_denoised_1_stencil_15_999_out < absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_out ? (16'((16'(in0_denoised_1_stencil[5] + in0_denoised_1_stencil[1])) + 16'h0001)) >> 16'h0001 : (16'((16'(in0_denoised_1_stencil[5] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001) + mux_973_976_979_out)) + 16'h0001)) >> 16'h0001)) : 16'((16'(((16'((16'(in0_denoised_1_stencil[1] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001) + mux_993_996_962_out)) - ((16'((16'(mux_966_969_962_out + mux_1019_996_1022_out)) + 16'h0001)) >> 16'h0001)) : eq_9570_958_out ? in0_denoised_1_stencil[0] : 16'((16'(in0_denoised_1_stencil[0] + lshr_995_960_996_out)) - ((16'((16'(mux_973_976_979_out + mux_1019_996_1022_out)) + 16'h0001)) >> 16'h0001));
endmodule

module cu_op_hcompute_demosaicked_1_stencil_2 (
    input clk,
    input [15:0] demosaicked_1_s0_x_2,
    input [15:0] demosaicked_1_s0_y_2,
    input [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read [7:0],
    output [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write [0:0]
);
wire [15:0] inner_compute_out_demosaicked_1_stencil;
wire [15:0] inner_compute_in0_denoised_1_stencil [7:0];
wire [15:0] inner_compute_demosaicked_1_s0_x_2;
wire [15:0] inner_compute_demosaicked_1_s0_y_2;
assign inner_compute_in0_denoised_1_stencil[7] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[7];
assign inner_compute_in0_denoised_1_stencil[6] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[6];
assign inner_compute_in0_denoised_1_stencil[5] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[5];
assign inner_compute_in0_denoised_1_stencil[4] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[4];
assign inner_compute_in0_denoised_1_stencil[3] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[3];
assign inner_compute_in0_denoised_1_stencil[2] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[2];
assign inner_compute_in0_denoised_1_stencil[1] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[1];
assign inner_compute_in0_denoised_1_stencil[0] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[0];
assign inner_compute_demosaicked_1_s0_x_2 = demosaicked_1_s0_x_2;
assign inner_compute_demosaicked_1_s0_y_2 = demosaicked_1_s0_y_2;
hcompute_demosaicked_1_stencil_2 inner_compute (
    .out_demosaicked_1_stencil(inner_compute_out_demosaicked_1_stencil),
    .in0_denoised_1_stencil(inner_compute_in0_denoised_1_stencil),
    .demosaicked_1_s0_x_2(inner_compute_demosaicked_1_s0_x_2),
    .demosaicked_1_s0_y_2(inner_compute_demosaicked_1_s0_y_2)
);
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write[0] = inner_compute_out_demosaicked_1_stencil;
endmodule

module hcompute_demosaicked_1_stencil_1 (
    output [15:0] out_demosaicked_1_stencil,
    input [15:0] in0_denoised_1_stencil [4:0],
    input [15:0] demosaicked_1_s0_x_1,
    input [15:0] demosaicked_1_s0_y_1
);
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_10_751_in0;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_10_751_in1;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_10_751_out;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_11_752_in0;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_11_752_in1;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_11_752_out;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_12_763_in0;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_12_763_in1;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_12_763_out;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_13_764_in0;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_13_764_in1;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_13_764_out;
wire eq_7490_750_out;
assign absd_denoised_1_stencil_9_denoised_1_stencil_10_751_in0 = in0_denoised_1_stencil[4];
assign absd_denoised_1_stencil_9_denoised_1_stencil_10_751_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_9_denoised_1_stencil_10_751 (
    .in0(absd_denoised_1_stencil_9_denoised_1_stencil_10_751_in0),
    .in1(absd_denoised_1_stencil_9_denoised_1_stencil_10_751_in1),
    .out(absd_denoised_1_stencil_9_denoised_1_stencil_10_751_out)
);
assign absd_denoised_1_stencil_9_denoised_1_stencil_11_752_in0 = in0_denoised_1_stencil[4];
assign absd_denoised_1_stencil_9_denoised_1_stencil_11_752_in1 = in0_denoised_1_stencil[1];
commonlib_absd__width16 absd_denoised_1_stencil_9_denoised_1_stencil_11_752 (
    .in0(absd_denoised_1_stencil_9_denoised_1_stencil_11_752_in0),
    .in1(absd_denoised_1_stencil_9_denoised_1_stencil_11_752_in1),
    .out(absd_denoised_1_stencil_9_denoised_1_stencil_11_752_out)
);
assign absd_denoised_1_stencil_9_denoised_1_stencil_12_763_in0 = in0_denoised_1_stencil[4];
assign absd_denoised_1_stencil_9_denoised_1_stencil_12_763_in1 = in0_denoised_1_stencil[2];
commonlib_absd__width16 absd_denoised_1_stencil_9_denoised_1_stencil_12_763 (
    .in0(absd_denoised_1_stencil_9_denoised_1_stencil_12_763_in0),
    .in1(absd_denoised_1_stencil_9_denoised_1_stencil_12_763_in1),
    .out(absd_denoised_1_stencil_9_denoised_1_stencil_12_763_out)
);
assign absd_denoised_1_stencil_9_denoised_1_stencil_13_764_in0 = in0_denoised_1_stencil[4];
assign absd_denoised_1_stencil_9_denoised_1_stencil_13_764_in1 = in0_denoised_1_stencil[3];
commonlib_absd__width16 absd_denoised_1_stencil_9_denoised_1_stencil_13_764 (
    .in0(absd_denoised_1_stencil_9_denoised_1_stencil_13_764_in0),
    .in1(absd_denoised_1_stencil_9_denoised_1_stencil_13_764_in1),
    .out(absd_denoised_1_stencil_9_denoised_1_stencil_13_764_out)
);
assign eq_7490_750_out = (demosaicked_1_s0_x_1 & 16'h0001) == 16'h0000;
assign out_demosaicked_1_stencil = (demosaicked_1_s0_y_1 & 16'h0001) == 16'h0000 ? eq_7490_750_out ? in0_denoised_1_stencil[4] : absd_denoised_1_stencil_9_denoised_1_stencil_10_751_out < absd_denoised_1_stencil_9_denoised_1_stencil_11_752_out ? (16'((16'(in0_denoised_1_stencil[0] + in0_denoised_1_stencil[4])) + 16'h0001)) >> 16'h0001 : (16'((16'(in0_denoised_1_stencil[1] + in0_denoised_1_stencil[4])) + 16'h0001)) >> 16'h0001 : eq_7490_750_out ? absd_denoised_1_stencil_9_denoised_1_stencil_12_763_out < absd_denoised_1_stencil_9_denoised_1_stencil_13_764_out ? (16'((16'(in0_denoised_1_stencil[2] + in0_denoised_1_stencil[4])) + 16'h0001)) >> 16'h0001 : (16'((16'(in0_denoised_1_stencil[3] + in0_denoised_1_stencil[4])) + 16'h0001)) >> 16'h0001 : in0_denoised_1_stencil[4];
endmodule

module cu_op_hcompute_demosaicked_1_stencil_1 (
    input clk,
    input [15:0] demosaicked_1_s0_x_1,
    input [15:0] demosaicked_1_s0_y_1,
    input [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read [4:0],
    output [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_demosaicked_1_stencil;
wire [15:0] inner_compute_in0_denoised_1_stencil [4:0];
wire [15:0] inner_compute_demosaicked_1_s0_x_1;
wire [15:0] inner_compute_demosaicked_1_s0_y_1;
assign inner_compute_in0_denoised_1_stencil[4] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[4];
assign inner_compute_in0_denoised_1_stencil[3] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[3];
assign inner_compute_in0_denoised_1_stencil[2] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[2];
assign inner_compute_in0_denoised_1_stencil[1] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[1];
assign inner_compute_in0_denoised_1_stencil[0] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[0];
assign inner_compute_demosaicked_1_s0_x_1 = demosaicked_1_s0_x_1;
assign inner_compute_demosaicked_1_s0_y_1 = demosaicked_1_s0_y_1;
hcompute_demosaicked_1_stencil_1 inner_compute (
    .out_demosaicked_1_stencil(inner_compute_out_demosaicked_1_stencil),
    .in0_denoised_1_stencil(inner_compute_in0_denoised_1_stencil),
    .demosaicked_1_s0_x_1(inner_compute_demosaicked_1_s0_x_1),
    .demosaicked_1_s0_y_1(inner_compute_demosaicked_1_s0_y_1)
);
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write[0] = inner_compute_out_demosaicked_1_stencil;
endmodule

module hcompute_demosaicked_1_stencil (
    output [15:0] out_demosaicked_1_stencil,
    input [15:0] in0_denoised_1_stencil [7:0],
    input [15:0] demosaicked_1_s0_x,
    input [15:0] demosaicked_1_s0_y
);
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_2_519_in0;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_2_519_in1;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_2_519_out;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_4_498_in0;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_4_498_in1;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_4_498_out;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_5_499_in0;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_5_499_in1;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_5_499_out;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_7_520_in0;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_7_520_in1;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_7_520_out;
wire [15:0] absd_denoised_1_stencil_2_denoised_1_stencil_1_491_in0;
wire [15:0] absd_denoised_1_stencil_2_denoised_1_stencil_1_491_in1;
wire [15:0] absd_denoised_1_stencil_2_denoised_1_stencil_1_491_out;
wire [15:0] absd_denoised_1_stencil_2_denoised_1_stencil_3_492_in0;
wire [15:0] absd_denoised_1_stencil_2_denoised_1_stencil_3_492_in1;
wire [15:0] absd_denoised_1_stencil_2_denoised_1_stencil_3_492_out;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_1_513_in0;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_1_513_in1;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_1_513_out;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_2_528_in0;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_2_528_in1;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_2_528_out;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_7_527_in0;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_7_527_in1;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_7_527_out;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_1_546_in0;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_1_546_in1;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_1_546_out;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_2_514_in0;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_2_514_in1;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_2_514_out;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_8_545_in0;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_8_545_in1;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_8_545_out;
wire eq_4840_485_out;
wire [15:0] lshr_488_487_489_out;
wire [15:0] lshr_523_487_524_out;
wire [15:0] mux_493_489_496_out;
wire [15:0] mux_500_503_506_out;
wire [15:0] mux_521_489_524_out;
wire [15:0] mux_547_550_524_out;
assign absd_denoised_1_stencil_1_denoised_1_stencil_2_519_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_1_denoised_1_stencil_2_519_in1 = in0_denoised_1_stencil[1];
commonlib_absd__width16 absd_denoised_1_stencil_1_denoised_1_stencil_2_519 (
    .in0(absd_denoised_1_stencil_1_denoised_1_stencil_2_519_in0),
    .in1(absd_denoised_1_stencil_1_denoised_1_stencil_2_519_in1),
    .out(absd_denoised_1_stencil_1_denoised_1_stencil_2_519_out)
);
assign absd_denoised_1_stencil_1_denoised_1_stencil_4_498_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_1_denoised_1_stencil_4_498_in1 = in0_denoised_1_stencil[3];
commonlib_absd__width16 absd_denoised_1_stencil_1_denoised_1_stencil_4_498 (
    .in0(absd_denoised_1_stencil_1_denoised_1_stencil_4_498_in0),
    .in1(absd_denoised_1_stencil_1_denoised_1_stencil_4_498_in1),
    .out(absd_denoised_1_stencil_1_denoised_1_stencil_4_498_out)
);
assign absd_denoised_1_stencil_1_denoised_1_stencil_5_499_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_1_denoised_1_stencil_5_499_in1 = in0_denoised_1_stencil[4];
commonlib_absd__width16 absd_denoised_1_stencil_1_denoised_1_stencil_5_499 (
    .in0(absd_denoised_1_stencil_1_denoised_1_stencil_5_499_in0),
    .in1(absd_denoised_1_stencil_1_denoised_1_stencil_5_499_in1),
    .out(absd_denoised_1_stencil_1_denoised_1_stencil_5_499_out)
);
assign absd_denoised_1_stencil_1_denoised_1_stencil_7_520_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_1_denoised_1_stencil_7_520_in1 = in0_denoised_1_stencil[6];
commonlib_absd__width16 absd_denoised_1_stencil_1_denoised_1_stencil_7_520 (
    .in0(absd_denoised_1_stencil_1_denoised_1_stencil_7_520_in0),
    .in1(absd_denoised_1_stencil_1_denoised_1_stencil_7_520_in1),
    .out(absd_denoised_1_stencil_1_denoised_1_stencil_7_520_out)
);
assign absd_denoised_1_stencil_2_denoised_1_stencil_1_491_in0 = in0_denoised_1_stencil[1];
assign absd_denoised_1_stencil_2_denoised_1_stencil_1_491_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_2_denoised_1_stencil_1_491 (
    .in0(absd_denoised_1_stencil_2_denoised_1_stencil_1_491_in0),
    .in1(absd_denoised_1_stencil_2_denoised_1_stencil_1_491_in1),
    .out(absd_denoised_1_stencil_2_denoised_1_stencil_1_491_out)
);
assign absd_denoised_1_stencil_2_denoised_1_stencil_3_492_in0 = in0_denoised_1_stencil[1];
assign absd_denoised_1_stencil_2_denoised_1_stencil_3_492_in1 = in0_denoised_1_stencil[2];
commonlib_absd__width16 absd_denoised_1_stencil_2_denoised_1_stencil_3_492 (
    .in0(absd_denoised_1_stencil_2_denoised_1_stencil_3_492_in0),
    .in1(absd_denoised_1_stencil_2_denoised_1_stencil_3_492_in1),
    .out(absd_denoised_1_stencil_2_denoised_1_stencil_3_492_out)
);
assign absd_denoised_1_stencil_6_denoised_1_stencil_1_513_in0 = in0_denoised_1_stencil[5];
assign absd_denoised_1_stencil_6_denoised_1_stencil_1_513_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_6_denoised_1_stencil_1_513 (
    .in0(absd_denoised_1_stencil_6_denoised_1_stencil_1_513_in0),
    .in1(absd_denoised_1_stencil_6_denoised_1_stencil_1_513_in1),
    .out(absd_denoised_1_stencil_6_denoised_1_stencil_1_513_out)
);
assign absd_denoised_1_stencil_6_denoised_1_stencil_2_528_in0 = in0_denoised_1_stencil[5];
assign absd_denoised_1_stencil_6_denoised_1_stencil_2_528_in1 = in0_denoised_1_stencil[1];
commonlib_absd__width16 absd_denoised_1_stencil_6_denoised_1_stencil_2_528 (
    .in0(absd_denoised_1_stencil_6_denoised_1_stencil_2_528_in0),
    .in1(absd_denoised_1_stencil_6_denoised_1_stencil_2_528_in1),
    .out(absd_denoised_1_stencil_6_denoised_1_stencil_2_528_out)
);
assign absd_denoised_1_stencil_6_denoised_1_stencil_7_527_in0 = in0_denoised_1_stencil[5];
assign absd_denoised_1_stencil_6_denoised_1_stencil_7_527_in1 = in0_denoised_1_stencil[6];
commonlib_absd__width16 absd_denoised_1_stencil_6_denoised_1_stencil_7_527 (
    .in0(absd_denoised_1_stencil_6_denoised_1_stencil_7_527_in0),
    .in1(absd_denoised_1_stencil_6_denoised_1_stencil_7_527_in1),
    .out(absd_denoised_1_stencil_6_denoised_1_stencil_7_527_out)
);
assign absd_denoised_1_stencil_7_denoised_1_stencil_1_546_in0 = in0_denoised_1_stencil[6];
assign absd_denoised_1_stencil_7_denoised_1_stencil_1_546_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_7_denoised_1_stencil_1_546 (
    .in0(absd_denoised_1_stencil_7_denoised_1_stencil_1_546_in0),
    .in1(absd_denoised_1_stencil_7_denoised_1_stencil_1_546_in1),
    .out(absd_denoised_1_stencil_7_denoised_1_stencil_1_546_out)
);
assign absd_denoised_1_stencil_7_denoised_1_stencil_2_514_in0 = in0_denoised_1_stencil[6];
assign absd_denoised_1_stencil_7_denoised_1_stencil_2_514_in1 = in0_denoised_1_stencil[1];
commonlib_absd__width16 absd_denoised_1_stencil_7_denoised_1_stencil_2_514 (
    .in0(absd_denoised_1_stencil_7_denoised_1_stencil_2_514_in0),
    .in1(absd_denoised_1_stencil_7_denoised_1_stencil_2_514_in1),
    .out(absd_denoised_1_stencil_7_denoised_1_stencil_2_514_out)
);
assign absd_denoised_1_stencil_7_denoised_1_stencil_8_545_in0 = in0_denoised_1_stencil[6];
assign absd_denoised_1_stencil_7_denoised_1_stencil_8_545_in1 = in0_denoised_1_stencil[7];
commonlib_absd__width16 absd_denoised_1_stencil_7_denoised_1_stencil_8_545 (
    .in0(absd_denoised_1_stencil_7_denoised_1_stencil_8_545_in0),
    .in1(absd_denoised_1_stencil_7_denoised_1_stencil_8_545_in1),
    .out(absd_denoised_1_stencil_7_denoised_1_stencil_8_545_out)
);
assign eq_4840_485_out = (demosaicked_1_s0_x & 16'h0001) == 16'h0000;
assign lshr_488_487_489_out = (16'((16'(in0_denoised_1_stencil[0] + in0_denoised_1_stencil[1])) + 16'h0001)) >> 16'h0001;
assign lshr_523_487_524_out = (16'((16'(in0_denoised_1_stencil[0] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001;
assign mux_493_489_496_out = absd_denoised_1_stencil_2_denoised_1_stencil_1_491_out < absd_denoised_1_stencil_2_denoised_1_stencil_3_492_out ? lshr_488_487_489_out : (16'((16'(in0_denoised_1_stencil[1] + in0_denoised_1_stencil[2])) + 16'h0001)) >> 16'h0001;
assign mux_500_503_506_out = absd_denoised_1_stencil_1_denoised_1_stencil_4_498_out < absd_denoised_1_stencil_1_denoised_1_stencil_5_499_out ? (16'((16'(in0_denoised_1_stencil[3] + in0_denoised_1_stencil[0])) + 16'h0001)) >> 16'h0001 : (16'((16'(in0_denoised_1_stencil[4] + in0_denoised_1_stencil[0])) + 16'h0001)) >> 16'h0001;
assign mux_521_489_524_out = absd_denoised_1_stencil_1_denoised_1_stencil_2_519_out < absd_denoised_1_stencil_1_denoised_1_stencil_7_520_out ? lshr_488_487_489_out : lshr_523_487_524_out;
assign mux_547_550_524_out = absd_denoised_1_stencil_7_denoised_1_stencil_8_545_out < absd_denoised_1_stencil_7_denoised_1_stencil_1_546_out ? (16'((16'(in0_denoised_1_stencil[7] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001 : lshr_523_487_524_out;
assign out_demosaicked_1_stencil = (demosaicked_1_s0_y & 16'h0001) == 16'h0000 ? eq_4840_485_out ? 16'((16'(in0_denoised_1_stencil[0] + lshr_488_487_489_out)) - ((16'((16'(mux_493_489_496_out + mux_500_503_506_out)) + 16'h0001)) >> 16'h0001)) : in0_denoised_1_stencil[0] : eq_4840_485_out ? absd_denoised_1_stencil_6_denoised_1_stencil_1_513_out < absd_denoised_1_stencil_7_denoised_1_stencil_2_514_out ? 16'((16'(((16'((16'(in0_denoised_1_stencil[0] + in0_denoised_1_stencil[5])) + 16'h0001)) >> 16'h0001) + mux_521_489_524_out)) - ((16'((16'((absd_denoised_1_stencil_6_denoised_1_stencil_7_527_out < absd_denoised_1_stencil_6_denoised_1_stencil_2_528_out ? (16'((16'(in0_denoised_1_stencil[6] + in0_denoised_1_stencil[5])) + 16'h0001)) >> 16'h0001 : (16'((16'(in0_denoised_1_stencil[5] + in0_denoised_1_stencil[1])) + 16'h0001)) >> 16'h0001) + mux_500_503_506_out)) + 16'h0001)) >> 16'h0001)) : 16'((16'(((16'((16'(in0_denoised_1_stencil[1] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001) + mux_521_489_524_out)) - ((16'((16'(mux_493_489_496_out + mux_547_550_524_out)) + 16'h0001)) >> 16'h0001)) : 16'((16'(in0_denoised_1_stencil[0] + lshr_523_487_524_out)) - ((16'((16'(mux_500_503_506_out + mux_547_550_524_out)) + 16'h0001)) >> 16'h0001));
endmodule

module cu_op_hcompute_demosaicked_1_stencil (
    input clk,
    input [15:0] demosaicked_1_s0_x,
    input [15:0] demosaicked_1_s0_y,
    input [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read [7:0],
    output [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write [0:0]
);
wire [15:0] inner_compute_out_demosaicked_1_stencil;
wire [15:0] inner_compute_in0_denoised_1_stencil [7:0];
wire [15:0] inner_compute_demosaicked_1_s0_x;
wire [15:0] inner_compute_demosaicked_1_s0_y;
assign inner_compute_in0_denoised_1_stencil[7] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[7];
assign inner_compute_in0_denoised_1_stencil[6] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[6];
assign inner_compute_in0_denoised_1_stencil[5] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[5];
assign inner_compute_in0_denoised_1_stencil[4] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[4];
assign inner_compute_in0_denoised_1_stencil[3] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[3];
assign inner_compute_in0_denoised_1_stencil[2] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[2];
assign inner_compute_in0_denoised_1_stencil[1] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[1];
assign inner_compute_in0_denoised_1_stencil[0] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[0];
assign inner_compute_demosaicked_1_s0_x = demosaicked_1_s0_x;
assign inner_compute_demosaicked_1_s0_y = demosaicked_1_s0_y;
hcompute_demosaicked_1_stencil inner_compute (
    .out_demosaicked_1_stencil(inner_compute_out_demosaicked_1_stencil),
    .in0_denoised_1_stencil(inner_compute_in0_denoised_1_stencil),
    .demosaicked_1_s0_x(inner_compute_demosaicked_1_s0_x),
    .demosaicked_1_s0_y(inner_compute_demosaicked_1_s0_y)
);
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write[0] = inner_compute_out_demosaicked_1_stencil;
endmodule

module array_delay_U1861 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1862_in;
wire _U1862_clk;
wire [15:0] _U1862_out;
wire [15:0] _U1863_in;
wire _U1863_clk;
wire [15:0] _U1863_out;
wire [15:0] _U1864_in;
wire _U1864_clk;
wire [15:0] _U1864_out;
assign _U1862_in = in[0];
assign _U1862_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1862 (
    .in(_U1862_in),
    .clk(_U1862_clk),
    .out(_U1862_out)
);
assign _U1863_in = in[1];
assign _U1863_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1863 (
    .in(_U1863_in),
    .clk(_U1863_clk),
    .out(_U1863_out)
);
assign _U1864_in = in[2];
assign _U1864_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1864 (
    .in(_U1864_in),
    .clk(_U1864_clk),
    .out(_U1864_out)
);
assign out[2] = _U1864_out;
assign out[1] = _U1863_out;
assign out[0] = _U1862_out;
endmodule

module array_delay_U1857 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1858_in;
wire _U1858_clk;
wire [15:0] _U1858_out;
wire [15:0] _U1859_in;
wire _U1859_clk;
wire [15:0] _U1859_out;
wire [15:0] _U1860_in;
wire _U1860_clk;
wire [15:0] _U1860_out;
assign _U1858_in = in[0];
assign _U1858_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1858 (
    .in(_U1858_in),
    .clk(_U1858_clk),
    .out(_U1858_out)
);
assign _U1859_in = in[1];
assign _U1859_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1859 (
    .in(_U1859_in),
    .clk(_U1859_clk),
    .out(_U1859_out)
);
assign _U1860_in = in[2];
assign _U1860_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1860 (
    .in(_U1860_in),
    .clk(_U1860_clk),
    .out(_U1860_out)
);
assign out[2] = _U1860_out;
assign out[1] = _U1859_out;
assign out[0] = _U1858_out;
endmodule

module array_delay_U1836 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1837_in;
wire _U1837_clk;
wire [15:0] _U1837_out;
wire [15:0] _U1838_in;
wire _U1838_clk;
wire [15:0] _U1838_out;
wire [15:0] _U1839_in;
wire _U1839_clk;
wire [15:0] _U1839_out;
assign _U1837_in = in[0];
assign _U1837_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1837 (
    .in(_U1837_in),
    .clk(_U1837_clk),
    .out(_U1837_out)
);
assign _U1838_in = in[1];
assign _U1838_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1838 (
    .in(_U1838_in),
    .clk(_U1838_clk),
    .out(_U1838_out)
);
assign _U1839_in = in[2];
assign _U1839_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1839 (
    .in(_U1839_in),
    .clk(_U1839_clk),
    .out(_U1839_out)
);
assign out[2] = _U1839_out;
assign out[1] = _U1838_out;
assign out[0] = _U1837_out;
endmodule

module array_delay_U1832 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1833_in;
wire _U1833_clk;
wire [15:0] _U1833_out;
wire [15:0] _U1834_in;
wire _U1834_clk;
wire [15:0] _U1834_out;
wire [15:0] _U1835_in;
wire _U1835_clk;
wire [15:0] _U1835_out;
assign _U1833_in = in[0];
assign _U1833_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1833 (
    .in(_U1833_in),
    .clk(_U1833_clk),
    .out(_U1833_out)
);
assign _U1834_in = in[1];
assign _U1834_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1834 (
    .in(_U1834_in),
    .clk(_U1834_clk),
    .out(_U1834_out)
);
assign _U1835_in = in[2];
assign _U1835_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1835 (
    .in(_U1835_in),
    .clk(_U1835_clk),
    .out(_U1835_out)
);
assign out[2] = _U1835_out;
assign out[1] = _U1834_out;
assign out[0] = _U1833_out;
endmodule

module array_delay_U1811 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1812_in;
wire _U1812_clk;
wire [15:0] _U1812_out;
wire [15:0] _U1813_in;
wire _U1813_clk;
wire [15:0] _U1813_out;
wire [15:0] _U1814_in;
wire _U1814_clk;
wire [15:0] _U1814_out;
assign _U1812_in = in[0];
assign _U1812_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1812 (
    .in(_U1812_in),
    .clk(_U1812_clk),
    .out(_U1812_out)
);
assign _U1813_in = in[1];
assign _U1813_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1813 (
    .in(_U1813_in),
    .clk(_U1813_clk),
    .out(_U1813_out)
);
assign _U1814_in = in[2];
assign _U1814_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1814 (
    .in(_U1814_in),
    .clk(_U1814_clk),
    .out(_U1814_out)
);
assign out[2] = _U1814_out;
assign out[1] = _U1813_out;
assign out[0] = _U1812_out;
endmodule

module array_delay_U1807 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1808_in;
wire _U1808_clk;
wire [15:0] _U1808_out;
wire [15:0] _U1809_in;
wire _U1809_clk;
wire [15:0] _U1809_out;
wire [15:0] _U1810_in;
wire _U1810_clk;
wire [15:0] _U1810_out;
assign _U1808_in = in[0];
assign _U1808_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1808 (
    .in(_U1808_in),
    .clk(_U1808_clk),
    .out(_U1808_out)
);
assign _U1809_in = in[1];
assign _U1809_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1809 (
    .in(_U1809_in),
    .clk(_U1809_clk),
    .out(_U1809_out)
);
assign _U1810_in = in[2];
assign _U1810_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1810 (
    .in(_U1810_in),
    .clk(_U1810_clk),
    .out(_U1810_out)
);
assign out[2] = _U1810_out;
assign out[1] = _U1809_out;
assign out[0] = _U1808_out;
endmodule

module array_delay_U1786 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1787_in;
wire _U1787_clk;
wire [15:0] _U1787_out;
wire [15:0] _U1788_in;
wire _U1788_clk;
wire [15:0] _U1788_out;
wire [15:0] _U1789_in;
wire _U1789_clk;
wire [15:0] _U1789_out;
assign _U1787_in = in[0];
assign _U1787_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1787 (
    .in(_U1787_in),
    .clk(_U1787_clk),
    .out(_U1787_out)
);
assign _U1788_in = in[1];
assign _U1788_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1788 (
    .in(_U1788_in),
    .clk(_U1788_clk),
    .out(_U1788_out)
);
assign _U1789_in = in[2];
assign _U1789_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1789 (
    .in(_U1789_in),
    .clk(_U1789_clk),
    .out(_U1789_out)
);
assign out[2] = _U1789_out;
assign out[1] = _U1788_out;
assign out[0] = _U1787_out;
endmodule

module array_delay_U1782 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1783_in;
wire _U1783_clk;
wire [15:0] _U1783_out;
wire [15:0] _U1784_in;
wire _U1784_clk;
wire [15:0] _U1784_out;
wire [15:0] _U1785_in;
wire _U1785_clk;
wire [15:0] _U1785_out;
assign _U1783_in = in[0];
assign _U1783_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1783 (
    .in(_U1783_in),
    .clk(_U1783_clk),
    .out(_U1783_out)
);
assign _U1784_in = in[1];
assign _U1784_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1784 (
    .in(_U1784_in),
    .clk(_U1784_clk),
    .out(_U1784_out)
);
assign _U1785_in = in[2];
assign _U1785_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1785 (
    .in(_U1785_in),
    .clk(_U1785_clk),
    .out(_U1785_out)
);
assign out[2] = _U1785_out;
assign out[1] = _U1784_out;
assign out[0] = _U1783_out;
endmodule

module array_delay_U1760 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1761_in;
wire _U1761_clk;
wire [15:0] _U1761_out;
wire [15:0] _U1762_in;
wire _U1762_clk;
wire [15:0] _U1762_out;
wire [15:0] _U1763_in;
wire _U1763_clk;
wire [15:0] _U1763_out;
assign _U1761_in = in[0];
assign _U1761_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1761 (
    .in(_U1761_in),
    .clk(_U1761_clk),
    .out(_U1761_out)
);
assign _U1762_in = in[1];
assign _U1762_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1762 (
    .in(_U1762_in),
    .clk(_U1762_clk),
    .out(_U1762_out)
);
assign _U1763_in = in[2];
assign _U1763_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1763 (
    .in(_U1763_in),
    .clk(_U1763_clk),
    .out(_U1763_out)
);
assign out[2] = _U1763_out;
assign out[1] = _U1762_out;
assign out[0] = _U1761_out;
endmodule

module array_delay_U1756 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1757_in;
wire _U1757_clk;
wire [15:0] _U1757_out;
wire [15:0] _U1758_in;
wire _U1758_clk;
wire [15:0] _U1758_out;
wire [15:0] _U1759_in;
wire _U1759_clk;
wire [15:0] _U1759_out;
assign _U1757_in = in[0];
assign _U1757_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1757 (
    .in(_U1757_in),
    .clk(_U1757_clk),
    .out(_U1757_out)
);
assign _U1758_in = in[1];
assign _U1758_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1758 (
    .in(_U1758_in),
    .clk(_U1758_clk),
    .out(_U1758_out)
);
assign _U1759_in = in[2];
assign _U1759_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1759 (
    .in(_U1759_in),
    .clk(_U1759_clk),
    .out(_U1759_out)
);
assign out[2] = _U1759_out;
assign out[1] = _U1758_out;
assign out[0] = _U1757_out;
endmodule

module array_delay_U1734 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1735_in;
wire _U1735_clk;
wire [15:0] _U1735_out;
wire [15:0] _U1736_in;
wire _U1736_clk;
wire [15:0] _U1736_out;
wire [15:0] _U1737_in;
wire _U1737_clk;
wire [15:0] _U1737_out;
assign _U1735_in = in[0];
assign _U1735_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1735 (
    .in(_U1735_in),
    .clk(_U1735_clk),
    .out(_U1735_out)
);
assign _U1736_in = in[1];
assign _U1736_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1736 (
    .in(_U1736_in),
    .clk(_U1736_clk),
    .out(_U1736_out)
);
assign _U1737_in = in[2];
assign _U1737_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1737 (
    .in(_U1737_in),
    .clk(_U1737_clk),
    .out(_U1737_out)
);
assign out[2] = _U1737_out;
assign out[1] = _U1736_out;
assign out[0] = _U1735_out;
endmodule

module array_delay_U1730 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1731_in;
wire _U1731_clk;
wire [15:0] _U1731_out;
wire [15:0] _U1732_in;
wire _U1732_clk;
wire [15:0] _U1732_out;
wire [15:0] _U1733_in;
wire _U1733_clk;
wire [15:0] _U1733_out;
assign _U1731_in = in[0];
assign _U1731_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1731 (
    .in(_U1731_in),
    .clk(_U1731_clk),
    .out(_U1731_out)
);
assign _U1732_in = in[1];
assign _U1732_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1732 (
    .in(_U1732_in),
    .clk(_U1732_clk),
    .out(_U1732_out)
);
assign _U1733_in = in[2];
assign _U1733_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1733 (
    .in(_U1733_in),
    .clk(_U1733_clk),
    .out(_U1733_out)
);
assign out[2] = _U1733_out;
assign out[1] = _U1732_out;
assign out[0] = _U1731_out;
endmodule

module array_delay_U1708 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1709_in;
wire _U1709_clk;
wire [15:0] _U1709_out;
wire [15:0] _U1710_in;
wire _U1710_clk;
wire [15:0] _U1710_out;
wire [15:0] _U1711_in;
wire _U1711_clk;
wire [15:0] _U1711_out;
assign _U1709_in = in[0];
assign _U1709_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1709 (
    .in(_U1709_in),
    .clk(_U1709_clk),
    .out(_U1709_out)
);
assign _U1710_in = in[1];
assign _U1710_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1710 (
    .in(_U1710_in),
    .clk(_U1710_clk),
    .out(_U1710_out)
);
assign _U1711_in = in[2];
assign _U1711_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1711 (
    .in(_U1711_in),
    .clk(_U1711_clk),
    .out(_U1711_out)
);
assign out[2] = _U1711_out;
assign out[1] = _U1710_out;
assign out[0] = _U1709_out;
endmodule

module array_delay_U1704 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1705_in;
wire _U1705_clk;
wire [15:0] _U1705_out;
wire [15:0] _U1706_in;
wire _U1706_clk;
wire [15:0] _U1706_out;
wire [15:0] _U1707_in;
wire _U1707_clk;
wire [15:0] _U1707_out;
assign _U1705_in = in[0];
assign _U1705_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1705 (
    .in(_U1705_in),
    .clk(_U1705_clk),
    .out(_U1705_out)
);
assign _U1706_in = in[1];
assign _U1706_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1706 (
    .in(_U1706_in),
    .clk(_U1706_clk),
    .out(_U1706_out)
);
assign _U1707_in = in[2];
assign _U1707_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1707 (
    .in(_U1707_in),
    .clk(_U1707_clk),
    .out(_U1707_out)
);
assign out[2] = _U1707_out;
assign out[1] = _U1706_out;
assign out[0] = _U1705_out;
endmodule

module array_delay_U1683 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1684_in;
wire _U1684_clk;
wire [15:0] _U1684_out;
wire [15:0] _U1685_in;
wire _U1685_clk;
wire [15:0] _U1685_out;
wire [15:0] _U1686_in;
wire _U1686_clk;
wire [15:0] _U1686_out;
assign _U1684_in = in[0];
assign _U1684_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1684 (
    .in(_U1684_in),
    .clk(_U1684_clk),
    .out(_U1684_out)
);
assign _U1685_in = in[1];
assign _U1685_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1685 (
    .in(_U1685_in),
    .clk(_U1685_clk),
    .out(_U1685_out)
);
assign _U1686_in = in[2];
assign _U1686_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1686 (
    .in(_U1686_in),
    .clk(_U1686_clk),
    .out(_U1686_out)
);
assign out[2] = _U1686_out;
assign out[1] = _U1685_out;
assign out[0] = _U1684_out;
endmodule

module array_delay_U1679 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1680_in;
wire _U1680_clk;
wire [15:0] _U1680_out;
wire [15:0] _U1681_in;
wire _U1681_clk;
wire [15:0] _U1681_out;
wire [15:0] _U1682_in;
wire _U1682_clk;
wire [15:0] _U1682_out;
assign _U1680_in = in[0];
assign _U1680_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1680 (
    .in(_U1680_in),
    .clk(_U1680_clk),
    .out(_U1680_out)
);
assign _U1681_in = in[1];
assign _U1681_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1681 (
    .in(_U1681_in),
    .clk(_U1681_clk),
    .out(_U1681_out)
);
assign _U1682_in = in[2];
assign _U1682_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1682 (
    .in(_U1682_in),
    .clk(_U1682_clk),
    .out(_U1682_out)
);
assign out[2] = _U1682_out;
assign out[1] = _U1681_out;
assign out[0] = _U1680_out;
endmodule

module array_delay_U1658 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1659_in;
wire _U1659_clk;
wire [15:0] _U1659_out;
wire [15:0] _U1660_in;
wire _U1660_clk;
wire [15:0] _U1660_out;
wire [15:0] _U1661_in;
wire _U1661_clk;
wire [15:0] _U1661_out;
assign _U1659_in = in[0];
assign _U1659_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1659 (
    .in(_U1659_in),
    .clk(_U1659_clk),
    .out(_U1659_out)
);
assign _U1660_in = in[1];
assign _U1660_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1660 (
    .in(_U1660_in),
    .clk(_U1660_clk),
    .out(_U1660_out)
);
assign _U1661_in = in[2];
assign _U1661_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1661 (
    .in(_U1661_in),
    .clk(_U1661_clk),
    .out(_U1661_out)
);
assign out[2] = _U1661_out;
assign out[1] = _U1660_out;
assign out[0] = _U1659_out;
endmodule

module array_delay_U1654 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1655_in;
wire _U1655_clk;
wire [15:0] _U1655_out;
wire [15:0] _U1656_in;
wire _U1656_clk;
wire [15:0] _U1656_out;
wire [15:0] _U1657_in;
wire _U1657_clk;
wire [15:0] _U1657_out;
assign _U1655_in = in[0];
assign _U1655_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1655 (
    .in(_U1655_in),
    .clk(_U1655_clk),
    .out(_U1655_out)
);
assign _U1656_in = in[1];
assign _U1656_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1656 (
    .in(_U1656_in),
    .clk(_U1656_clk),
    .out(_U1656_out)
);
assign _U1657_in = in[2];
assign _U1657_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1657 (
    .in(_U1657_in),
    .clk(_U1657_clk),
    .out(_U1657_out)
);
assign out[2] = _U1657_out;
assign out[1] = _U1656_out;
assign out[0] = _U1655_out;
endmodule

module array_delay_U1633 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1634_in;
wire _U1634_clk;
wire [15:0] _U1634_out;
wire [15:0] _U1635_in;
wire _U1635_clk;
wire [15:0] _U1635_out;
wire [15:0] _U1636_in;
wire _U1636_clk;
wire [15:0] _U1636_out;
assign _U1634_in = in[0];
assign _U1634_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1634 (
    .in(_U1634_in),
    .clk(_U1634_clk),
    .out(_U1634_out)
);
assign _U1635_in = in[1];
assign _U1635_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1635 (
    .in(_U1635_in),
    .clk(_U1635_clk),
    .out(_U1635_out)
);
assign _U1636_in = in[2];
assign _U1636_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1636 (
    .in(_U1636_in),
    .clk(_U1636_clk),
    .out(_U1636_out)
);
assign out[2] = _U1636_out;
assign out[1] = _U1635_out;
assign out[0] = _U1634_out;
endmodule

module array_delay_U1629 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1630_in;
wire _U1630_clk;
wire [15:0] _U1630_out;
wire [15:0] _U1631_in;
wire _U1631_clk;
wire [15:0] _U1631_out;
wire [15:0] _U1632_in;
wire _U1632_clk;
wire [15:0] _U1632_out;
assign _U1630_in = in[0];
assign _U1630_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1630 (
    .in(_U1630_in),
    .clk(_U1630_clk),
    .out(_U1630_out)
);
assign _U1631_in = in[1];
assign _U1631_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1631 (
    .in(_U1631_in),
    .clk(_U1631_clk),
    .out(_U1631_out)
);
assign _U1632_in = in[2];
assign _U1632_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1632 (
    .in(_U1632_in),
    .clk(_U1632_clk),
    .out(_U1632_out)
);
assign out[2] = _U1632_out;
assign out[1] = _U1631_out;
assign out[0] = _U1630_out;
endmodule

module array_delay_U1608 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1609_in;
wire _U1609_clk;
wire [15:0] _U1609_out;
wire [15:0] _U1610_in;
wire _U1610_clk;
wire [15:0] _U1610_out;
wire [15:0] _U1611_in;
wire _U1611_clk;
wire [15:0] _U1611_out;
assign _U1609_in = in[0];
assign _U1609_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1609 (
    .in(_U1609_in),
    .clk(_U1609_clk),
    .out(_U1609_out)
);
assign _U1610_in = in[1];
assign _U1610_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1610 (
    .in(_U1610_in),
    .clk(_U1610_clk),
    .out(_U1610_out)
);
assign _U1611_in = in[2];
assign _U1611_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1611 (
    .in(_U1611_in),
    .clk(_U1611_clk),
    .out(_U1611_out)
);
assign out[2] = _U1611_out;
assign out[1] = _U1610_out;
assign out[0] = _U1609_out;
endmodule

module array_delay_U1604 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1605_in;
wire _U1605_clk;
wire [15:0] _U1605_out;
wire [15:0] _U1606_in;
wire _U1606_clk;
wire [15:0] _U1606_out;
wire [15:0] _U1607_in;
wire _U1607_clk;
wire [15:0] _U1607_out;
assign _U1605_in = in[0];
assign _U1605_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1605 (
    .in(_U1605_in),
    .clk(_U1605_clk),
    .out(_U1605_out)
);
assign _U1606_in = in[1];
assign _U1606_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1606 (
    .in(_U1606_in),
    .clk(_U1606_clk),
    .out(_U1606_out)
);
assign _U1607_in = in[2];
assign _U1607_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1607 (
    .in(_U1607_in),
    .clk(_U1607_clk),
    .out(_U1607_out)
);
assign out[2] = _U1607_out;
assign out[1] = _U1606_out;
assign out[0] = _U1605_out;
endmodule

module array_delay_U1583 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1584_in;
wire _U1584_clk;
wire [15:0] _U1584_out;
wire [15:0] _U1585_in;
wire _U1585_clk;
wire [15:0] _U1585_out;
wire [15:0] _U1586_in;
wire _U1586_clk;
wire [15:0] _U1586_out;
assign _U1584_in = in[0];
assign _U1584_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1584 (
    .in(_U1584_in),
    .clk(_U1584_clk),
    .out(_U1584_out)
);
assign _U1585_in = in[1];
assign _U1585_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1585 (
    .in(_U1585_in),
    .clk(_U1585_clk),
    .out(_U1585_out)
);
assign _U1586_in = in[2];
assign _U1586_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1586 (
    .in(_U1586_in),
    .clk(_U1586_clk),
    .out(_U1586_out)
);
assign out[2] = _U1586_out;
assign out[1] = _U1585_out;
assign out[0] = _U1584_out;
endmodule

module array_delay_U1579 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1580_in;
wire _U1580_clk;
wire [15:0] _U1580_out;
wire [15:0] _U1581_in;
wire _U1581_clk;
wire [15:0] _U1581_out;
wire [15:0] _U1582_in;
wire _U1582_clk;
wire [15:0] _U1582_out;
assign _U1580_in = in[0];
assign _U1580_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1580 (
    .in(_U1580_in),
    .clk(_U1580_clk),
    .out(_U1580_out)
);
assign _U1581_in = in[1];
assign _U1581_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1581 (
    .in(_U1581_in),
    .clk(_U1581_clk),
    .out(_U1581_out)
);
assign _U1582_in = in[2];
assign _U1582_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1582 (
    .in(_U1582_in),
    .clk(_U1582_clk),
    .out(_U1582_out)
);
assign out[2] = _U1582_out;
assign out[1] = _U1581_out;
assign out[0] = _U1580_out;
endmodule

module array_delay_U1558 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1559_in;
wire _U1559_clk;
wire [15:0] _U1559_out;
wire [15:0] _U1560_in;
wire _U1560_clk;
wire [15:0] _U1560_out;
wire [15:0] _U1561_in;
wire _U1561_clk;
wire [15:0] _U1561_out;
assign _U1559_in = in[0];
assign _U1559_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1559 (
    .in(_U1559_in),
    .clk(_U1559_clk),
    .out(_U1559_out)
);
assign _U1560_in = in[1];
assign _U1560_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1560 (
    .in(_U1560_in),
    .clk(_U1560_clk),
    .out(_U1560_out)
);
assign _U1561_in = in[2];
assign _U1561_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1561 (
    .in(_U1561_in),
    .clk(_U1561_clk),
    .out(_U1561_out)
);
assign out[2] = _U1561_out;
assign out[1] = _U1560_out;
assign out[0] = _U1559_out;
endmodule

module array_delay_U1554 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1555_in;
wire _U1555_clk;
wire [15:0] _U1555_out;
wire [15:0] _U1556_in;
wire _U1556_clk;
wire [15:0] _U1556_out;
wire [15:0] _U1557_in;
wire _U1557_clk;
wire [15:0] _U1557_out;
assign _U1555_in = in[0];
assign _U1555_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1555 (
    .in(_U1555_in),
    .clk(_U1555_clk),
    .out(_U1555_out)
);
assign _U1556_in = in[1];
assign _U1556_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1556 (
    .in(_U1556_in),
    .clk(_U1556_clk),
    .out(_U1556_out)
);
assign _U1557_in = in[2];
assign _U1557_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1557 (
    .in(_U1557_in),
    .clk(_U1557_clk),
    .out(_U1557_out)
);
assign out[2] = _U1557_out;
assign out[1] = _U1556_out;
assign out[0] = _U1555_out;
endmodule

module array_delay_U1533 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1534_in;
wire _U1534_clk;
wire [15:0] _U1534_out;
wire [15:0] _U1535_in;
wire _U1535_clk;
wire [15:0] _U1535_out;
wire [15:0] _U1536_in;
wire _U1536_clk;
wire [15:0] _U1536_out;
assign _U1534_in = in[0];
assign _U1534_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1534 (
    .in(_U1534_in),
    .clk(_U1534_clk),
    .out(_U1534_out)
);
assign _U1535_in = in[1];
assign _U1535_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1535 (
    .in(_U1535_in),
    .clk(_U1535_clk),
    .out(_U1535_out)
);
assign _U1536_in = in[2];
assign _U1536_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1536 (
    .in(_U1536_in),
    .clk(_U1536_clk),
    .out(_U1536_out)
);
assign out[2] = _U1536_out;
assign out[1] = _U1535_out;
assign out[0] = _U1534_out;
endmodule

module array_delay_U1529 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U1530_in;
wire _U1530_clk;
wire [15:0] _U1530_out;
wire [15:0] _U1531_in;
wire _U1531_clk;
wire [15:0] _U1531_out;
wire [15:0] _U1532_in;
wire _U1532_clk;
wire [15:0] _U1532_out;
assign _U1530_in = in[0];
assign _U1530_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1530 (
    .in(_U1530_in),
    .clk(_U1530_clk),
    .out(_U1530_out)
);
assign _U1531_in = in[1];
assign _U1531_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1531 (
    .in(_U1531_in),
    .clk(_U1531_clk),
    .out(_U1531_out)
);
assign _U1532_in = in[2];
assign _U1532_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1532 (
    .in(_U1532_in),
    .clk(_U1532_clk),
    .out(_U1532_out)
);
assign out[2] = _U1532_out;
assign out[1] = _U1531_out;
assign out[0] = _U1530_out;
endmodule

module aff__U991 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01ab);
endmodule

module affine_controller__U990 (
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
aff__U991 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U973 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01aa);
endmodule

module affine_controller__U972 (
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
aff__U973 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U955 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a8);
endmodule

module affine_controller__U954 (
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
aff__U955 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U937 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a7);
endmodule

module affine_controller__U936 (
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
aff__U937 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U919 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a7);
endmodule

module affine_controller__U918 (
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
aff__U919 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U91 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0002);
endmodule

module affine_controller__U90 (
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
aff__U91 affine_func (
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

module aff__U901 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a6);
endmodule

module affine_controller__U900 (
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
aff__U901 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U883 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a6);
endmodule

module affine_controller__U882 (
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
aff__U883 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U865 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a5);
endmodule

module affine_controller__U864 (
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
aff__U865 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U847 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a3);
endmodule

module affine_controller__U846 (
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
aff__U847 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U829 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a2);
endmodule

module affine_controller__U828 (
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
aff__U829 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U811 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a2);
endmodule

module affine_controller__U810 (
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
aff__U811 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U793 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a2);
endmodule

module affine_controller__U792 (
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
aff__U793 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U775 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a2);
endmodule

module affine_controller__U774 (
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
aff__U775 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U757 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a1);
endmodule

module affine_controller__U756 (
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
aff__U757 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U739 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019f);
endmodule

module affine_controller__U738 (
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
aff__U739 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U73 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U72 (
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
aff__U73 affine_func (
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

module aff__U721 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019e);
endmodule

module affine_controller__U720 (
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
aff__U721 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U703 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019e);
endmodule

module affine_controller__U702 (
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
aff__U703 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U685 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019e);
endmodule

module affine_controller__U684 (
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
aff__U685 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U667 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019e);
endmodule

module affine_controller__U666 (
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
aff__U667 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U649 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019d);
endmodule

module affine_controller__U648 (
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
aff__U649 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U631 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019b);
endmodule

module affine_controller__U630 (
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
aff__U631 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U613 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019a);
endmodule

module affine_controller__U612 (
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
aff__U613 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U595 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019a);
endmodule

module affine_controller__U594 (
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
aff__U595 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U577 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019a);
endmodule

module affine_controller__U576 (
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
aff__U577 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U559 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019a);
endmodule

module affine_controller__U558 (
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
aff__U559 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U55 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U54 (
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
aff__U55 affine_func (
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

module aff__U541 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0199);
endmodule

module affine_controller__U540 (
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
aff__U541 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U523 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0197);
endmodule

module affine_controller__U522 (
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
aff__U523 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U505 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0196);
endmodule

module affine_controller__U504 (
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
aff__U505 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U487 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0196);
endmodule

module affine_controller__U486 (
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
aff__U487 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U469 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0196);
endmodule

module affine_controller__U468 (
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
aff__U469 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U451 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0196);
endmodule

module affine_controller__U450 (
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
aff__U451 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U433 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0195);
endmodule

module affine_controller__U432 (
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
aff__U433 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U415 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0193);
endmodule

module affine_controller__U414 (
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
aff__U415 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U397 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0192);
endmodule

module affine_controller__U396 (
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
aff__U397 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U379 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0192);
endmodule

module affine_controller__U378 (
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
aff__U379 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U37 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U36 (
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
aff__U37 affine_func (
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

module aff__U361 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0192);
endmodule

module affine_controller__U360 (
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
aff__U361 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U343 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0192);
endmodule

module affine_controller__U342 (
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
aff__U343 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U325 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0191);
endmodule

module affine_controller__U324 (
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
aff__U325 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U307 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h018f);
endmodule

module affine_controller__U306 (
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
aff__U307 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U289 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h018e);
endmodule

module affine_controller__U288 (
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
aff__U289 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U271 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h018e);
endmodule

module affine_controller__U270 (
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
aff__U271 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U253 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h018e);
endmodule

module affine_controller__U252 (
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
aff__U253 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U235 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h018e);
endmodule

module affine_controller__U234 (
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
aff__U235 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U217 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h018d);
endmodule

module affine_controller__U216 (
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
aff__U217 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U199 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0109);
endmodule

module affine_controller__U198 (
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
aff__U199 affine_func (
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

module aff__U19 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U18 (
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
aff__U19 affine_func (
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

module aff__U1841 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1840 (
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
aff__U1841 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1816 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b8);
endmodule

module affine_controller__U1815 (
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
aff__U1816 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U181 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0108);
endmodule

module affine_controller__U180 (
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
aff__U181 affine_func (
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

module aff__U1791 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b5);
endmodule

module affine_controller__U1790 (
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
aff__U1791 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1765 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b0);
endmodule

module affine_controller__U1764 (
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
aff__U1765 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1739 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01ab);
endmodule

module affine_controller__U1738 (
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
aff__U1739 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1713 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a6);
endmodule

module affine_controller__U1712 (
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
aff__U1713 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1688 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a2);
endmodule

module affine_controller__U1687 (
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
aff__U1688 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1663 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019e);
endmodule

module affine_controller__U1662 (
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
aff__U1663 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1638 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019a);
endmodule

module affine_controller__U1637 (
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
aff__U1638 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U163 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0108);
endmodule

module affine_controller__U162 (
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
aff__U163 affine_func (
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

module aff__U1613 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0196);
endmodule

module affine_controller__U1612 (
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
aff__U1613 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1588 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0192);
endmodule

module affine_controller__U1587 (
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
aff__U1588 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1563 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h018e);
endmodule

module affine_controller__U1562 (
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
aff__U1563 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1538 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0108);
endmodule

module affine_controller__U1537 (
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
aff__U1538 affine_func (
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

module aff__U1513 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U1512 (
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
aff__U1513 affine_func (
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

module aff__U1495 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1494 (
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
aff__U1495 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1477 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1476 (
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
aff__U1477 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1459 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1458 (
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
aff__U1459 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U145 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0108);
endmodule

module affine_controller__U144 (
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
aff__U145 affine_func (
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

module aff__U1441 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1440 (
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
aff__U1441 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1423 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U1422 (
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
aff__U1423 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1405 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01ba);
endmodule

module affine_controller__U1404 (
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
aff__U1405 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1387 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b8);
endmodule

module affine_controller__U1386 (
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
aff__U1387 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1369 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b8);
endmodule

module affine_controller__U1368 (
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
aff__U1369 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1351 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b8);
endmodule

module affine_controller__U1350 (
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
aff__U1351 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1333 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b8);
endmodule

module affine_controller__U1332 (
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
aff__U1333 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1315 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b8);
endmodule

module affine_controller__U1314 (
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
aff__U1315 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1297 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b7);
endmodule

module affine_controller__U1296 (
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
aff__U1297 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1279 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b5);
endmodule

module affine_controller__U1278 (
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
aff__U1279 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U127 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0108);
endmodule

module affine_controller__U126 (
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
aff__U127 affine_func (
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

module aff__U1261 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b5);
endmodule

module affine_controller__U1260 (
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
aff__U1261 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1243 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b5);
endmodule

module affine_controller__U1242 (
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
aff__U1243 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1225 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b5);
endmodule

module affine_controller__U1224 (
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
aff__U1225 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1207 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b5);
endmodule

module affine_controller__U1206 (
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
aff__U1207 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1189 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b4);
endmodule

module affine_controller__U1188 (
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
aff__U1189 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1171 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b2);
endmodule

module affine_controller__U1170 (
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
aff__U1171 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1153 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b1);
endmodule

module affine_controller__U1152 (
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
aff__U1153 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1135 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b1);
endmodule

module affine_controller__U1134 (
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
aff__U1135 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1117 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b0);
endmodule

module affine_controller__U1116 (
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
aff__U1117 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1099 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b0);
endmodule

module affine_controller__U1098 (
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
aff__U1099 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U109 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0107);
endmodule

module affine_controller__U108 (
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
aff__U109 affine_func (
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

module aff__U1081 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01af);
endmodule

module affine_controller__U1080 (
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
aff__U1081 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1063 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01ad);
endmodule

module affine_controller__U1062 (
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
aff__U1063 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1045 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01ac);
endmodule

module affine_controller__U1044 (
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
aff__U1045 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1027 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01ac);
endmodule

module affine_controller__U1026 (
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
aff__U1027 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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

module aff__U1009 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01ab);
endmodule

module affine_controller__U1008 (
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
aff__U1009 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
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
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
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
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
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

module camera_pipeline (
    input clk,
    input rst_n,
    input flush,
    output hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write [0:0],
    output hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write_en,
    output [15:0] hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write [0:0],
    output hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write_en,
    output [15:0] hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write [0:0]
);
wire [15:0] _U2036_in;
wire _U2036_clk;
wire [15:0] _U2036_out;
wire corrected_stencil_clk;
wire corrected_stencil_flush;
wire corrected_stencil_rst_n;
wire corrected_stencil_op_hcompute_corrected_stencil_1_write_wen;
wire [15:0] corrected_stencil_op_hcompute_corrected_stencil_1_write_ctrl_vars [2:0];
wire [15:0] corrected_stencil_op_hcompute_corrected_stencil_1_write [0:0];
wire corrected_stencil_op_hcompute_corrected_stencil_2_write_wen;
wire [15:0] corrected_stencil_op_hcompute_corrected_stencil_2_write_ctrl_vars [2:0];
wire [15:0] corrected_stencil_op_hcompute_corrected_stencil_2_write [0:0];
wire corrected_stencil_op_hcompute_corrected_stencil_write_wen;
wire [15:0] corrected_stencil_op_hcompute_corrected_stencil_write_ctrl_vars [2:0];
wire [15:0] corrected_stencil_op_hcompute_corrected_stencil_write [0:0];
wire corrected_stencil_op_hcompute_curved_stencil_1_read_ren;
wire [15:0] corrected_stencil_op_hcompute_curved_stencil_1_read_ctrl_vars [2:0];
wire [15:0] corrected_stencil_op_hcompute_curved_stencil_1_read [0:0];
wire corrected_stencil_op_hcompute_curved_stencil_2_read_ren;
wire [15:0] corrected_stencil_op_hcompute_curved_stencil_2_read_ctrl_vars [2:0];
wire [15:0] corrected_stencil_op_hcompute_curved_stencil_2_read [0:0];
wire corrected_stencil_op_hcompute_curved_stencil_read_ren;
wire [15:0] corrected_stencil_op_hcompute_curved_stencil_read_ctrl_vars [2:0];
wire [15:0] corrected_stencil_op_hcompute_curved_stencil_read [0:0];
wire curved_stencil_clk;
wire curved_stencil_flush;
wire curved_stencil_rst_n;
wire curved_stencil_op_hcompute_curved_stencil_1_write_wen;
wire [15:0] curved_stencil_op_hcompute_curved_stencil_1_write_ctrl_vars [2:0];
wire [15:0] curved_stencil_op_hcompute_curved_stencil_1_write [0:0];
wire curved_stencil_op_hcompute_curved_stencil_2_write_wen;
wire [15:0] curved_stencil_op_hcompute_curved_stencil_2_write_ctrl_vars [2:0];
wire [15:0] curved_stencil_op_hcompute_curved_stencil_2_write [0:0];
wire curved_stencil_op_hcompute_curved_stencil_write_wen;
wire [15:0] curved_stencil_op_hcompute_curved_stencil_write_ctrl_vars [2:0];
wire [15:0] curved_stencil_op_hcompute_curved_stencil_write [0:0];
wire curved_stencil_op_hcompute_hw_output_stencil_1_read_ren;
wire [15:0] curved_stencil_op_hcompute_hw_output_stencil_1_read_ctrl_vars [2:0];
wire [15:0] curved_stencil_op_hcompute_hw_output_stencil_1_read [0:0];
wire curved_stencil_op_hcompute_hw_output_stencil_2_read_ren;
wire [15:0] curved_stencil_op_hcompute_hw_output_stencil_2_read_ctrl_vars [2:0];
wire [15:0] curved_stencil_op_hcompute_hw_output_stencil_2_read [0:0];
wire curved_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] curved_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] curved_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire demosaicked_1_stencil_clk;
wire demosaicked_1_stencil_flush;
wire demosaicked_1_stencil_rst_n;
wire demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ren;
wire [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ctrl_vars [2:0];
wire [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read [2:0];
wire demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ren;
wire [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ctrl_vars [2:0];
wire [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read [2:0];
wire demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ren;
wire [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ctrl_vars [2:0];
wire [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_read [2:0];
wire demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_wen;
wire [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars [2:0];
wire [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write [0:0];
wire demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_wen;
wire [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars [2:0];
wire [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write [0:0];
wire demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_wen;
wire [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_ctrl_vars [2:0];
wire [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write [0:0];
wire denoised_1_stencil_clk;
wire denoised_1_stencil_flush;
wire denoised_1_stencil_rst_n;
wire denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ren;
wire [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars [2:0];
wire [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read [4:0];
wire denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ren;
wire [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars [2:0];
wire [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read [7:0];
wire denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ren;
wire [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ctrl_vars [2:0];
wire [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read [7:0];
wire denoised_1_stencil_op_hcompute_denoised_1_stencil_write_wen;
wire [15:0] denoised_1_stencil_op_hcompute_denoised_1_stencil_write_ctrl_vars [2:0];
wire [15:0] denoised_1_stencil_op_hcompute_denoised_1_stencil_write [0:0];
wire hw_input_global_wrapper_stencil_clk;
wire hw_input_global_wrapper_stencil_flush;
wire hw_input_global_wrapper_stencil_rst_n;
wire hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ren;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read [4:0];
wire hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire op_hcompute_corrected_stencil_clk;
wire [15:0] op_hcompute_corrected_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_read [2:0];
wire [15:0] op_hcompute_corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_write [0:0];
wire op_hcompute_corrected_stencil_1_clk;
wire [15:0] op_hcompute_corrected_stencil_1_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read [2:0];
wire [15:0] op_hcompute_corrected_stencil_1_corrected_stencil_op_hcompute_corrected_stencil_1_write [0:0];
wire op_hcompute_corrected_stencil_1_exe_start_clk;
wire op_hcompute_corrected_stencil_1_exe_start_in;
wire op_hcompute_corrected_stencil_1_exe_start_out;
wire op_hcompute_corrected_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_corrected_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_corrected_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_corrected_stencil_1_port_controller_clk;
wire op_hcompute_corrected_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_corrected_stencil_1_port_controller_d [2:0];
wire op_hcompute_corrected_stencil_1_port_controller_U665_clk;
wire op_hcompute_corrected_stencil_1_port_controller_U665_valid;
wire [15:0] op_hcompute_corrected_stencil_1_port_controller_U665_d [2:0];
wire op_hcompute_corrected_stencil_1_port_controller_U683_clk;
wire op_hcompute_corrected_stencil_1_port_controller_U683_valid;
wire [15:0] op_hcompute_corrected_stencil_1_port_controller_U683_d [2:0];
wire op_hcompute_corrected_stencil_1_port_controller_U701_clk;
wire op_hcompute_corrected_stencil_1_port_controller_U701_valid;
wire [15:0] op_hcompute_corrected_stencil_1_port_controller_U701_d [2:0];
wire op_hcompute_corrected_stencil_1_port_controller_U719_clk;
wire op_hcompute_corrected_stencil_1_port_controller_U719_valid;
wire [15:0] op_hcompute_corrected_stencil_1_port_controller_U719_d [2:0];
wire op_hcompute_corrected_stencil_1_port_controller_U737_clk;
wire op_hcompute_corrected_stencil_1_port_controller_U737_valid;
wire [15:0] op_hcompute_corrected_stencil_1_port_controller_U737_d [2:0];
wire op_hcompute_corrected_stencil_1_port_controller_U755_clk;
wire op_hcompute_corrected_stencil_1_port_controller_U755_valid;
wire [15:0] op_hcompute_corrected_stencil_1_port_controller_U755_d [2:0];
wire op_hcompute_corrected_stencil_1_read_start;
wire op_hcompute_corrected_stencil_1_write_start;
wire op_hcompute_corrected_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_corrected_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_corrected_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_corrected_stencil_2_clk;
wire [15:0] op_hcompute_corrected_stencil_2_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read [2:0];
wire [15:0] op_hcompute_corrected_stencil_2_corrected_stencil_op_hcompute_corrected_stencil_2_write [0:0];
wire op_hcompute_corrected_stencil_2_exe_start_clk;
wire op_hcompute_corrected_stencil_2_exe_start_in;
wire op_hcompute_corrected_stencil_2_exe_start_out;
wire op_hcompute_corrected_stencil_2_exe_start_control_vars_clk;
wire [15:0] op_hcompute_corrected_stencil_2_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_corrected_stencil_2_exe_start_control_vars_out [2:0];
wire op_hcompute_corrected_stencil_2_port_controller_clk;
wire op_hcompute_corrected_stencil_2_port_controller_valid;
wire [15:0] op_hcompute_corrected_stencil_2_port_controller_d [2:0];
wire op_hcompute_corrected_stencil_2_port_controller_U773_clk;
wire op_hcompute_corrected_stencil_2_port_controller_U773_valid;
wire [15:0] op_hcompute_corrected_stencil_2_port_controller_U773_d [2:0];
wire op_hcompute_corrected_stencil_2_port_controller_U791_clk;
wire op_hcompute_corrected_stencil_2_port_controller_U791_valid;
wire [15:0] op_hcompute_corrected_stencil_2_port_controller_U791_d [2:0];
wire op_hcompute_corrected_stencil_2_port_controller_U809_clk;
wire op_hcompute_corrected_stencil_2_port_controller_U809_valid;
wire [15:0] op_hcompute_corrected_stencil_2_port_controller_U809_d [2:0];
wire op_hcompute_corrected_stencil_2_port_controller_U827_clk;
wire op_hcompute_corrected_stencil_2_port_controller_U827_valid;
wire [15:0] op_hcompute_corrected_stencil_2_port_controller_U827_d [2:0];
wire op_hcompute_corrected_stencil_2_port_controller_U845_clk;
wire op_hcompute_corrected_stencil_2_port_controller_U845_valid;
wire [15:0] op_hcompute_corrected_stencil_2_port_controller_U845_d [2:0];
wire op_hcompute_corrected_stencil_2_port_controller_U863_clk;
wire op_hcompute_corrected_stencil_2_port_controller_U863_valid;
wire [15:0] op_hcompute_corrected_stencil_2_port_controller_U863_d [2:0];
wire op_hcompute_corrected_stencil_2_read_start;
wire op_hcompute_corrected_stencil_2_write_start;
wire op_hcompute_corrected_stencil_2_write_start_control_vars_clk;
wire [15:0] op_hcompute_corrected_stencil_2_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_corrected_stencil_2_write_start_control_vars_out [2:0];
wire op_hcompute_corrected_stencil_exe_start_clk;
wire op_hcompute_corrected_stencil_exe_start_in;
wire op_hcompute_corrected_stencil_exe_start_out;
wire op_hcompute_corrected_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_corrected_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_corrected_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_corrected_stencil_port_controller_clk;
wire op_hcompute_corrected_stencil_port_controller_valid;
wire [15:0] op_hcompute_corrected_stencil_port_controller_d [2:0];
wire op_hcompute_corrected_stencil_port_controller_U557_clk;
wire op_hcompute_corrected_stencil_port_controller_U557_valid;
wire [15:0] op_hcompute_corrected_stencil_port_controller_U557_d [2:0];
wire op_hcompute_corrected_stencil_port_controller_U575_clk;
wire op_hcompute_corrected_stencil_port_controller_U575_valid;
wire [15:0] op_hcompute_corrected_stencil_port_controller_U575_d [2:0];
wire op_hcompute_corrected_stencil_port_controller_U593_clk;
wire op_hcompute_corrected_stencil_port_controller_U593_valid;
wire [15:0] op_hcompute_corrected_stencil_port_controller_U593_d [2:0];
wire op_hcompute_corrected_stencil_port_controller_U611_clk;
wire op_hcompute_corrected_stencil_port_controller_U611_valid;
wire [15:0] op_hcompute_corrected_stencil_port_controller_U611_d [2:0];
wire op_hcompute_corrected_stencil_port_controller_U629_clk;
wire op_hcompute_corrected_stencil_port_controller_U629_valid;
wire [15:0] op_hcompute_corrected_stencil_port_controller_U629_d [2:0];
wire op_hcompute_corrected_stencil_port_controller_U647_clk;
wire op_hcompute_corrected_stencil_port_controller_U647_valid;
wire [15:0] op_hcompute_corrected_stencil_port_controller_U647_d [2:0];
wire op_hcompute_corrected_stencil_read_start;
wire op_hcompute_corrected_stencil_write_start;
wire op_hcompute_corrected_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_corrected_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_corrected_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_curved_stencil_clk;
wire [15:0] op_hcompute_curved_stencil_corrected_stencil_op_hcompute_curved_stencil_read [0:0];
wire [15:0] op_hcompute_curved_stencil_curved_stencil_op_hcompute_curved_stencil_write [0:0];
wire op_hcompute_curved_stencil_1_clk;
wire [15:0] op_hcompute_curved_stencil_1_corrected_stencil_op_hcompute_curved_stencil_1_read [0:0];
wire [15:0] op_hcompute_curved_stencil_1_curved_stencil_op_hcompute_curved_stencil_1_write [0:0];
wire op_hcompute_curved_stencil_1_U1755_clk;
wire op_hcompute_curved_stencil_1_U1755_in;
wire op_hcompute_curved_stencil_1_U1755_out;
wire op_hcompute_curved_stencil_1_exe_start_clk;
wire op_hcompute_curved_stencil_1_exe_start_in;
wire op_hcompute_curved_stencil_1_exe_start_out;
wire op_hcompute_curved_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_curved_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_curved_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_curved_stencil_1_port_controller_clk;
wire op_hcompute_curved_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_curved_stencil_1_port_controller_d [2:0];
wire op_hcompute_curved_stencil_1_port_controller_U1007_clk;
wire op_hcompute_curved_stencil_1_port_controller_U1007_valid;
wire [15:0] op_hcompute_curved_stencil_1_port_controller_U1007_d [2:0];
wire op_hcompute_curved_stencil_1_port_controller_U1025_clk;
wire op_hcompute_curved_stencil_1_port_controller_U1025_valid;
wire [15:0] op_hcompute_curved_stencil_1_port_controller_U1025_d [2:0];
wire op_hcompute_curved_stencil_1_port_controller_U1043_clk;
wire op_hcompute_curved_stencil_1_port_controller_U1043_valid;
wire [15:0] op_hcompute_curved_stencil_1_port_controller_U1043_d [2:0];
wire op_hcompute_curved_stencil_1_port_controller_U1061_clk;
wire op_hcompute_curved_stencil_1_port_controller_U1061_valid;
wire [15:0] op_hcompute_curved_stencil_1_port_controller_U1061_d [2:0];
wire op_hcompute_curved_stencil_1_port_controller_U1079_clk;
wire op_hcompute_curved_stencil_1_port_controller_U1079_valid;
wire [15:0] op_hcompute_curved_stencil_1_port_controller_U1079_d [2:0];
wire op_hcompute_curved_stencil_1_port_controller_U989_clk;
wire op_hcompute_curved_stencil_1_port_controller_U989_valid;
wire [15:0] op_hcompute_curved_stencil_1_port_controller_U989_d [2:0];
wire op_hcompute_curved_stencil_1_read_start;
wire op_hcompute_curved_stencil_1_write_start;
wire op_hcompute_curved_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_curved_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_curved_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_curved_stencil_2_clk;
wire [15:0] op_hcompute_curved_stencil_2_corrected_stencil_op_hcompute_curved_stencil_2_read [0:0];
wire [15:0] op_hcompute_curved_stencil_2_curved_stencil_op_hcompute_curved_stencil_2_write [0:0];
wire op_hcompute_curved_stencil_2_U1781_clk;
wire op_hcompute_curved_stencil_2_U1781_in;
wire op_hcompute_curved_stencil_2_U1781_out;
wire op_hcompute_curved_stencil_2_exe_start_clk;
wire op_hcompute_curved_stencil_2_exe_start_in;
wire op_hcompute_curved_stencil_2_exe_start_out;
wire op_hcompute_curved_stencil_2_exe_start_control_vars_clk;
wire [15:0] op_hcompute_curved_stencil_2_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_curved_stencil_2_exe_start_control_vars_out [2:0];
wire op_hcompute_curved_stencil_2_port_controller_clk;
wire op_hcompute_curved_stencil_2_port_controller_valid;
wire [15:0] op_hcompute_curved_stencil_2_port_controller_d [2:0];
wire op_hcompute_curved_stencil_2_port_controller_U1097_clk;
wire op_hcompute_curved_stencil_2_port_controller_U1097_valid;
wire [15:0] op_hcompute_curved_stencil_2_port_controller_U1097_d [2:0];
wire op_hcompute_curved_stencil_2_port_controller_U1115_clk;
wire op_hcompute_curved_stencil_2_port_controller_U1115_valid;
wire [15:0] op_hcompute_curved_stencil_2_port_controller_U1115_d [2:0];
wire op_hcompute_curved_stencil_2_port_controller_U1133_clk;
wire op_hcompute_curved_stencil_2_port_controller_U1133_valid;
wire [15:0] op_hcompute_curved_stencil_2_port_controller_U1133_d [2:0];
wire op_hcompute_curved_stencil_2_port_controller_U1151_clk;
wire op_hcompute_curved_stencil_2_port_controller_U1151_valid;
wire [15:0] op_hcompute_curved_stencil_2_port_controller_U1151_d [2:0];
wire op_hcompute_curved_stencil_2_port_controller_U1169_clk;
wire op_hcompute_curved_stencil_2_port_controller_U1169_valid;
wire [15:0] op_hcompute_curved_stencil_2_port_controller_U1169_d [2:0];
wire op_hcompute_curved_stencil_2_port_controller_U1187_clk;
wire op_hcompute_curved_stencil_2_port_controller_U1187_valid;
wire [15:0] op_hcompute_curved_stencil_2_port_controller_U1187_d [2:0];
wire op_hcompute_curved_stencil_2_read_start;
wire op_hcompute_curved_stencil_2_write_start;
wire op_hcompute_curved_stencil_2_write_start_control_vars_clk;
wire [15:0] op_hcompute_curved_stencil_2_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_curved_stencil_2_write_start_control_vars_out [2:0];
wire op_hcompute_curved_stencil_U1729_clk;
wire op_hcompute_curved_stencil_U1729_in;
wire op_hcompute_curved_stencil_U1729_out;
wire op_hcompute_curved_stencil_exe_start_clk;
wire op_hcompute_curved_stencil_exe_start_in;
wire op_hcompute_curved_stencil_exe_start_out;
wire op_hcompute_curved_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_curved_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_curved_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_curved_stencil_port_controller_clk;
wire op_hcompute_curved_stencil_port_controller_valid;
wire [15:0] op_hcompute_curved_stencil_port_controller_d [2:0];
wire op_hcompute_curved_stencil_port_controller_U881_clk;
wire op_hcompute_curved_stencil_port_controller_U881_valid;
wire [15:0] op_hcompute_curved_stencil_port_controller_U881_d [2:0];
wire op_hcompute_curved_stencil_port_controller_U899_clk;
wire op_hcompute_curved_stencil_port_controller_U899_valid;
wire [15:0] op_hcompute_curved_stencil_port_controller_U899_d [2:0];
wire op_hcompute_curved_stencil_port_controller_U917_clk;
wire op_hcompute_curved_stencil_port_controller_U917_valid;
wire [15:0] op_hcompute_curved_stencil_port_controller_U917_d [2:0];
wire op_hcompute_curved_stencil_port_controller_U935_clk;
wire op_hcompute_curved_stencil_port_controller_U935_valid;
wire [15:0] op_hcompute_curved_stencil_port_controller_U935_d [2:0];
wire op_hcompute_curved_stencil_port_controller_U953_clk;
wire op_hcompute_curved_stencil_port_controller_U953_valid;
wire [15:0] op_hcompute_curved_stencil_port_controller_U953_d [2:0];
wire op_hcompute_curved_stencil_port_controller_U971_clk;
wire op_hcompute_curved_stencil_port_controller_U971_valid;
wire [15:0] op_hcompute_curved_stencil_port_controller_U971_d [2:0];
wire op_hcompute_curved_stencil_read_start;
wire op_hcompute_curved_stencil_write_start;
wire op_hcompute_curved_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_curved_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_curved_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_demosaicked_1_stencil_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_demosaicked_1_s0_x;
wire [15:0] op_hcompute_demosaicked_1_stencil_demosaicked_1_s0_y;
wire [15:0] op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read [7:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write [0:0];
wire op_hcompute_demosaicked_1_stencil_1_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_demosaicked_1_s0_x_1;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_demosaicked_1_s0_y_1;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read [4:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_1_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write [0:0];
wire op_hcompute_demosaicked_1_stencil_1_exe_start_clk;
wire op_hcompute_demosaicked_1_stencil_1_exe_start_in;
wire op_hcompute_demosaicked_1_stencil_1_exe_start_out;
wire op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_demosaicked_1_stencil_1_port_controller_clk;
wire op_hcompute_demosaicked_1_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_port_controller_d [2:0];
wire op_hcompute_demosaicked_1_stencil_1_port_controller_U341_clk;
wire op_hcompute_demosaicked_1_stencil_1_port_controller_U341_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_port_controller_U341_d [2:0];
wire op_hcompute_demosaicked_1_stencil_1_port_controller_U359_clk;
wire op_hcompute_demosaicked_1_stencil_1_port_controller_U359_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_port_controller_U359_d [2:0];
wire op_hcompute_demosaicked_1_stencil_1_port_controller_U377_clk;
wire op_hcompute_demosaicked_1_stencil_1_port_controller_U377_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_port_controller_U377_d [2:0];
wire op_hcompute_demosaicked_1_stencil_1_port_controller_U395_clk;
wire op_hcompute_demosaicked_1_stencil_1_port_controller_U395_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_port_controller_U395_d [2:0];
wire op_hcompute_demosaicked_1_stencil_1_port_controller_U413_clk;
wire op_hcompute_demosaicked_1_stencil_1_port_controller_U413_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_port_controller_U413_d [2:0];
wire op_hcompute_demosaicked_1_stencil_1_port_controller_U431_clk;
wire op_hcompute_demosaicked_1_stencil_1_port_controller_U431_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_port_controller_U431_d [2:0];
wire op_hcompute_demosaicked_1_stencil_1_read_start;
wire op_hcompute_demosaicked_1_stencil_1_write_start;
wire op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_demosaicked_1_stencil_2_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_demosaicked_1_s0_x_2;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_demosaicked_1_s0_y_2;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read [7:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_2_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write [0:0];
wire op_hcompute_demosaicked_1_stencil_2_exe_start_clk;
wire op_hcompute_demosaicked_1_stencil_2_exe_start_in;
wire op_hcompute_demosaicked_1_stencil_2_exe_start_out;
wire op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_out [2:0];
wire op_hcompute_demosaicked_1_stencil_2_port_controller_clk;
wire op_hcompute_demosaicked_1_stencil_2_port_controller_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_port_controller_d [2:0];
wire op_hcompute_demosaicked_1_stencil_2_port_controller_U449_clk;
wire op_hcompute_demosaicked_1_stencil_2_port_controller_U449_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_port_controller_U449_d [2:0];
wire op_hcompute_demosaicked_1_stencil_2_port_controller_U467_clk;
wire op_hcompute_demosaicked_1_stencil_2_port_controller_U467_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_port_controller_U467_d [2:0];
wire op_hcompute_demosaicked_1_stencil_2_port_controller_U485_clk;
wire op_hcompute_demosaicked_1_stencil_2_port_controller_U485_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_port_controller_U485_d [2:0];
wire op_hcompute_demosaicked_1_stencil_2_port_controller_U503_clk;
wire op_hcompute_demosaicked_1_stencil_2_port_controller_U503_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_port_controller_U503_d [2:0];
wire op_hcompute_demosaicked_1_stencil_2_port_controller_U521_clk;
wire op_hcompute_demosaicked_1_stencil_2_port_controller_U521_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_port_controller_U521_d [2:0];
wire op_hcompute_demosaicked_1_stencil_2_port_controller_U539_clk;
wire op_hcompute_demosaicked_1_stencil_2_port_controller_U539_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_port_controller_U539_d [2:0];
wire op_hcompute_demosaicked_1_stencil_2_read_start;
wire op_hcompute_demosaicked_1_stencil_2_write_start;
wire op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_out [2:0];
wire op_hcompute_demosaicked_1_stencil_exe_start_clk;
wire op_hcompute_demosaicked_1_stencil_exe_start_in;
wire op_hcompute_demosaicked_1_stencil_exe_start_out;
wire op_hcompute_demosaicked_1_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_demosaicked_1_stencil_port_controller_clk;
wire op_hcompute_demosaicked_1_stencil_port_controller_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_port_controller_d [2:0];
wire op_hcompute_demosaicked_1_stencil_port_controller_U233_clk;
wire op_hcompute_demosaicked_1_stencil_port_controller_U233_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_port_controller_U233_d [2:0];
wire op_hcompute_demosaicked_1_stencil_port_controller_U251_clk;
wire op_hcompute_demosaicked_1_stencil_port_controller_U251_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_port_controller_U251_d [2:0];
wire op_hcompute_demosaicked_1_stencil_port_controller_U269_clk;
wire op_hcompute_demosaicked_1_stencil_port_controller_U269_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_port_controller_U269_d [2:0];
wire op_hcompute_demosaicked_1_stencil_port_controller_U287_clk;
wire op_hcompute_demosaicked_1_stencil_port_controller_U287_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_port_controller_U287_d [2:0];
wire op_hcompute_demosaicked_1_stencil_port_controller_U305_clk;
wire op_hcompute_demosaicked_1_stencil_port_controller_U305_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_port_controller_U305_d [2:0];
wire op_hcompute_demosaicked_1_stencil_port_controller_U323_clk;
wire op_hcompute_demosaicked_1_stencil_port_controller_U323_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_port_controller_U323_d [2:0];
wire op_hcompute_demosaicked_1_stencil_read_start;
wire op_hcompute_demosaicked_1_stencil_write_start;
wire op_hcompute_demosaicked_1_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_denoised_1_stencil_clk;
wire [15:0] op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read [4:0];
wire [15:0] op_hcompute_denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_write [0:0];
wire op_hcompute_denoised_1_stencil_exe_start_clk;
wire op_hcompute_denoised_1_stencil_exe_start_in;
wire op_hcompute_denoised_1_stencil_exe_start_out;
wire op_hcompute_denoised_1_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_denoised_1_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_denoised_1_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_denoised_1_stencil_port_controller_clk;
wire op_hcompute_denoised_1_stencil_port_controller_valid;
wire [15:0] op_hcompute_denoised_1_stencil_port_controller_d [2:0];
wire op_hcompute_denoised_1_stencil_port_controller_U125_clk;
wire op_hcompute_denoised_1_stencil_port_controller_U125_valid;
wire [15:0] op_hcompute_denoised_1_stencil_port_controller_U125_d [2:0];
wire op_hcompute_denoised_1_stencil_port_controller_U143_clk;
wire op_hcompute_denoised_1_stencil_port_controller_U143_valid;
wire [15:0] op_hcompute_denoised_1_stencil_port_controller_U143_d [2:0];
wire op_hcompute_denoised_1_stencil_port_controller_U161_clk;
wire op_hcompute_denoised_1_stencil_port_controller_U161_valid;
wire [15:0] op_hcompute_denoised_1_stencil_port_controller_U161_d [2:0];
wire op_hcompute_denoised_1_stencil_port_controller_U179_clk;
wire op_hcompute_denoised_1_stencil_port_controller_U179_valid;
wire [15:0] op_hcompute_denoised_1_stencil_port_controller_U179_d [2:0];
wire op_hcompute_denoised_1_stencil_port_controller_U197_clk;
wire op_hcompute_denoised_1_stencil_port_controller_U197_valid;
wire [15:0] op_hcompute_denoised_1_stencil_port_controller_U197_d [2:0];
wire op_hcompute_denoised_1_stencil_port_controller_U215_clk;
wire op_hcompute_denoised_1_stencil_port_controller_U215_valid;
wire [15:0] op_hcompute_denoised_1_stencil_port_controller_U215_d [2:0];
wire op_hcompute_denoised_1_stencil_read_start;
wire op_hcompute_denoised_1_stencil_write_start;
wire op_hcompute_denoised_1_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_denoised_1_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_denoised_1_stencil_write_start_control_vars_out [2:0];
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
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_read_start;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_curved_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_1_clk;
wire [15:0] op_hcompute_hw_output_stencil_1_curved_stencil_op_hcompute_hw_output_stencil_1_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_1_hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write [0:0];
wire op_hcompute_hw_output_stencil_1_exe_start_clk;
wire op_hcompute_hw_output_stencil_1_exe_start_in;
wire op_hcompute_hw_output_stencil_1_exe_start_out;
wire op_hcompute_hw_output_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_1_port_controller_clk;
wire op_hcompute_hw_output_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_1_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_1_port_controller_U1313_clk;
wire op_hcompute_hw_output_stencil_1_port_controller_U1313_valid;
wire [15:0] op_hcompute_hw_output_stencil_1_port_controller_U1313_d [2:0];
wire op_hcompute_hw_output_stencil_1_port_controller_U1331_clk;
wire op_hcompute_hw_output_stencil_1_port_controller_U1331_valid;
wire [15:0] op_hcompute_hw_output_stencil_1_port_controller_U1331_d [2:0];
wire op_hcompute_hw_output_stencil_1_port_controller_U1349_clk;
wire op_hcompute_hw_output_stencil_1_port_controller_U1349_valid;
wire [15:0] op_hcompute_hw_output_stencil_1_port_controller_U1349_d [2:0];
wire op_hcompute_hw_output_stencil_1_port_controller_U1367_clk;
wire op_hcompute_hw_output_stencil_1_port_controller_U1367_valid;
wire [15:0] op_hcompute_hw_output_stencil_1_port_controller_U1367_d [2:0];
wire op_hcompute_hw_output_stencil_1_port_controller_U1385_clk;
wire op_hcompute_hw_output_stencil_1_port_controller_U1385_valid;
wire [15:0] op_hcompute_hw_output_stencil_1_port_controller_U1385_d [2:0];
wire op_hcompute_hw_output_stencil_1_port_controller_U1403_clk;
wire op_hcompute_hw_output_stencil_1_port_controller_U1403_valid;
wire [15:0] op_hcompute_hw_output_stencil_1_port_controller_U1403_d [2:0];
wire op_hcompute_hw_output_stencil_1_read_start;
wire op_hcompute_hw_output_stencil_1_write_start;
wire op_hcompute_hw_output_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_2_clk;
wire [15:0] op_hcompute_hw_output_stencil_2_curved_stencil_op_hcompute_hw_output_stencil_2_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_2_hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write [0:0];
wire op_hcompute_hw_output_stencil_2_exe_start_clk;
wire op_hcompute_hw_output_stencil_2_exe_start_in;
wire op_hcompute_hw_output_stencil_2_exe_start_out;
wire op_hcompute_hw_output_stencil_2_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_2_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_2_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_2_port_controller_clk;
wire op_hcompute_hw_output_stencil_2_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_2_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_2_port_controller_U1421_clk;
wire op_hcompute_hw_output_stencil_2_port_controller_U1421_valid;
wire [15:0] op_hcompute_hw_output_stencil_2_port_controller_U1421_d [2:0];
wire op_hcompute_hw_output_stencil_2_port_controller_U1439_clk;
wire op_hcompute_hw_output_stencil_2_port_controller_U1439_valid;
wire [15:0] op_hcompute_hw_output_stencil_2_port_controller_U1439_d [2:0];
wire op_hcompute_hw_output_stencil_2_port_controller_U1457_clk;
wire op_hcompute_hw_output_stencil_2_port_controller_U1457_valid;
wire [15:0] op_hcompute_hw_output_stencil_2_port_controller_U1457_d [2:0];
wire op_hcompute_hw_output_stencil_2_port_controller_U1475_clk;
wire op_hcompute_hw_output_stencil_2_port_controller_U1475_valid;
wire [15:0] op_hcompute_hw_output_stencil_2_port_controller_U1475_d [2:0];
wire op_hcompute_hw_output_stencil_2_port_controller_U1493_clk;
wire op_hcompute_hw_output_stencil_2_port_controller_U1493_valid;
wire [15:0] op_hcompute_hw_output_stencil_2_port_controller_U1493_d [2:0];
wire op_hcompute_hw_output_stencil_2_port_controller_U1511_clk;
wire op_hcompute_hw_output_stencil_2_port_controller_U1511_valid;
wire [15:0] op_hcompute_hw_output_stencil_2_port_controller_U1511_d [2:0];
wire op_hcompute_hw_output_stencil_2_read_start;
wire op_hcompute_hw_output_stencil_2_write_start;
wire op_hcompute_hw_output_stencil_2_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_2_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_2_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_exe_start_clk;
wire op_hcompute_hw_output_stencil_exe_start_in;
wire op_hcompute_hw_output_stencil_exe_start_out;
wire op_hcompute_hw_output_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_port_controller_clk;
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1205_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1205_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1205_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1223_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1223_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1223_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1241_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1241_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1241_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1259_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1259_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1259_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1277_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1277_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1277_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U1295_clk;
wire op_hcompute_hw_output_stencil_port_controller_U1295_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U1295_d [2:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start;
wire op_hcompute_hw_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
assign _U2036_in = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
assign _U2036_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U2036 (
    .in(_U2036_in),
    .clk(_U2036_clk),
    .out(_U2036_out)
);
assign corrected_stencil_clk = clk;
assign corrected_stencil_flush = flush;
assign corrected_stencil_rst_n = rst_n;
assign corrected_stencil_op_hcompute_corrected_stencil_1_write_wen = op_hcompute_corrected_stencil_1_write_start;
assign corrected_stencil_op_hcompute_corrected_stencil_1_write_ctrl_vars[2] = op_hcompute_corrected_stencil_1_write_start_control_vars_out[2];
assign corrected_stencil_op_hcompute_corrected_stencil_1_write_ctrl_vars[1] = op_hcompute_corrected_stencil_1_write_start_control_vars_out[1];
assign corrected_stencil_op_hcompute_corrected_stencil_1_write_ctrl_vars[0] = op_hcompute_corrected_stencil_1_write_start_control_vars_out[0];
assign corrected_stencil_op_hcompute_corrected_stencil_1_write[0] = op_hcompute_corrected_stencil_1_corrected_stencil_op_hcompute_corrected_stencil_1_write[0];
assign corrected_stencil_op_hcompute_corrected_stencil_2_write_wen = op_hcompute_corrected_stencil_2_write_start;
assign corrected_stencil_op_hcompute_corrected_stencil_2_write_ctrl_vars[2] = op_hcompute_corrected_stencil_2_write_start_control_vars_out[2];
assign corrected_stencil_op_hcompute_corrected_stencil_2_write_ctrl_vars[1] = op_hcompute_corrected_stencil_2_write_start_control_vars_out[1];
assign corrected_stencil_op_hcompute_corrected_stencil_2_write_ctrl_vars[0] = op_hcompute_corrected_stencil_2_write_start_control_vars_out[0];
assign corrected_stencil_op_hcompute_corrected_stencil_2_write[0] = op_hcompute_corrected_stencil_2_corrected_stencil_op_hcompute_corrected_stencil_2_write[0];
assign corrected_stencil_op_hcompute_corrected_stencil_write_wen = op_hcompute_corrected_stencil_write_start;
assign corrected_stencil_op_hcompute_corrected_stencil_write_ctrl_vars[2] = op_hcompute_corrected_stencil_write_start_control_vars_out[2];
assign corrected_stencil_op_hcompute_corrected_stencil_write_ctrl_vars[1] = op_hcompute_corrected_stencil_write_start_control_vars_out[1];
assign corrected_stencil_op_hcompute_corrected_stencil_write_ctrl_vars[0] = op_hcompute_corrected_stencil_write_start_control_vars_out[0];
assign corrected_stencil_op_hcompute_corrected_stencil_write[0] = op_hcompute_corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_write[0];
assign corrected_stencil_op_hcompute_curved_stencil_1_read_ren = op_hcompute_curved_stencil_1_read_start;
assign corrected_stencil_op_hcompute_curved_stencil_1_read_ctrl_vars[2] = op_hcompute_curved_stencil_1_port_controller_d[2];
assign corrected_stencil_op_hcompute_curved_stencil_1_read_ctrl_vars[1] = op_hcompute_curved_stencil_1_port_controller_d[1];
assign corrected_stencil_op_hcompute_curved_stencil_1_read_ctrl_vars[0] = op_hcompute_curved_stencil_1_port_controller_d[0];
assign corrected_stencil_op_hcompute_curved_stencil_2_read_ren = op_hcompute_curved_stencil_2_read_start;
assign corrected_stencil_op_hcompute_curved_stencil_2_read_ctrl_vars[2] = op_hcompute_curved_stencil_2_port_controller_d[2];
assign corrected_stencil_op_hcompute_curved_stencil_2_read_ctrl_vars[1] = op_hcompute_curved_stencil_2_port_controller_d[1];
assign corrected_stencil_op_hcompute_curved_stencil_2_read_ctrl_vars[0] = op_hcompute_curved_stencil_2_port_controller_d[0];
assign corrected_stencil_op_hcompute_curved_stencil_read_ren = op_hcompute_curved_stencil_read_start;
assign corrected_stencil_op_hcompute_curved_stencil_read_ctrl_vars[2] = op_hcompute_curved_stencil_port_controller_d[2];
assign corrected_stencil_op_hcompute_curved_stencil_read_ctrl_vars[1] = op_hcompute_curved_stencil_port_controller_d[1];
assign corrected_stencil_op_hcompute_curved_stencil_read_ctrl_vars[0] = op_hcompute_curved_stencil_port_controller_d[0];
corrected_stencil_ub corrected_stencil (
    .clk(corrected_stencil_clk),
    .flush(corrected_stencil_flush),
    .rst_n(corrected_stencil_rst_n),
    .op_hcompute_corrected_stencil_1_write_wen(corrected_stencil_op_hcompute_corrected_stencil_1_write_wen),
    .op_hcompute_corrected_stencil_1_write_ctrl_vars(corrected_stencil_op_hcompute_corrected_stencil_1_write_ctrl_vars),
    .op_hcompute_corrected_stencil_1_write(corrected_stencil_op_hcompute_corrected_stencil_1_write),
    .op_hcompute_corrected_stencil_2_write_wen(corrected_stencil_op_hcompute_corrected_stencil_2_write_wen),
    .op_hcompute_corrected_stencil_2_write_ctrl_vars(corrected_stencil_op_hcompute_corrected_stencil_2_write_ctrl_vars),
    .op_hcompute_corrected_stencil_2_write(corrected_stencil_op_hcompute_corrected_stencil_2_write),
    .op_hcompute_corrected_stencil_write_wen(corrected_stencil_op_hcompute_corrected_stencil_write_wen),
    .op_hcompute_corrected_stencil_write_ctrl_vars(corrected_stencil_op_hcompute_corrected_stencil_write_ctrl_vars),
    .op_hcompute_corrected_stencil_write(corrected_stencil_op_hcompute_corrected_stencil_write),
    .op_hcompute_curved_stencil_1_read_ren(corrected_stencil_op_hcompute_curved_stencil_1_read_ren),
    .op_hcompute_curved_stencil_1_read_ctrl_vars(corrected_stencil_op_hcompute_curved_stencil_1_read_ctrl_vars),
    .op_hcompute_curved_stencil_1_read(corrected_stencil_op_hcompute_curved_stencil_1_read),
    .op_hcompute_curved_stencil_2_read_ren(corrected_stencil_op_hcompute_curved_stencil_2_read_ren),
    .op_hcompute_curved_stencil_2_read_ctrl_vars(corrected_stencil_op_hcompute_curved_stencil_2_read_ctrl_vars),
    .op_hcompute_curved_stencil_2_read(corrected_stencil_op_hcompute_curved_stencil_2_read),
    .op_hcompute_curved_stencil_read_ren(corrected_stencil_op_hcompute_curved_stencil_read_ren),
    .op_hcompute_curved_stencil_read_ctrl_vars(corrected_stencil_op_hcompute_curved_stencil_read_ctrl_vars),
    .op_hcompute_curved_stencil_read(corrected_stencil_op_hcompute_curved_stencil_read)
);
assign curved_stencil_clk = clk;
assign curved_stencil_flush = flush;
assign curved_stencil_rst_n = rst_n;
assign curved_stencil_op_hcompute_curved_stencil_1_write_wen = op_hcompute_curved_stencil_1_write_start;
assign curved_stencil_op_hcompute_curved_stencil_1_write_ctrl_vars[2] = op_hcompute_curved_stencil_1_write_start_control_vars_out[2];
assign curved_stencil_op_hcompute_curved_stencil_1_write_ctrl_vars[1] = op_hcompute_curved_stencil_1_write_start_control_vars_out[1];
assign curved_stencil_op_hcompute_curved_stencil_1_write_ctrl_vars[0] = op_hcompute_curved_stencil_1_write_start_control_vars_out[0];
assign curved_stencil_op_hcompute_curved_stencil_1_write[0] = op_hcompute_curved_stencil_1_curved_stencil_op_hcompute_curved_stencil_1_write[0];
assign curved_stencil_op_hcompute_curved_stencil_2_write_wen = op_hcompute_curved_stencil_2_write_start;
assign curved_stencil_op_hcompute_curved_stencil_2_write_ctrl_vars[2] = op_hcompute_curved_stencil_2_write_start_control_vars_out[2];
assign curved_stencil_op_hcompute_curved_stencil_2_write_ctrl_vars[1] = op_hcompute_curved_stencil_2_write_start_control_vars_out[1];
assign curved_stencil_op_hcompute_curved_stencil_2_write_ctrl_vars[0] = op_hcompute_curved_stencil_2_write_start_control_vars_out[0];
assign curved_stencil_op_hcompute_curved_stencil_2_write[0] = op_hcompute_curved_stencil_2_curved_stencil_op_hcompute_curved_stencil_2_write[0];
assign curved_stencil_op_hcompute_curved_stencil_write_wen = op_hcompute_curved_stencil_write_start;
assign curved_stencil_op_hcompute_curved_stencil_write_ctrl_vars[2] = op_hcompute_curved_stencil_write_start_control_vars_out[2];
assign curved_stencil_op_hcompute_curved_stencil_write_ctrl_vars[1] = op_hcompute_curved_stencil_write_start_control_vars_out[1];
assign curved_stencil_op_hcompute_curved_stencil_write_ctrl_vars[0] = op_hcompute_curved_stencil_write_start_control_vars_out[0];
assign curved_stencil_op_hcompute_curved_stencil_write[0] = op_hcompute_curved_stencil_curved_stencil_op_hcompute_curved_stencil_write[0];
assign curved_stencil_op_hcompute_hw_output_stencil_1_read_ren = op_hcompute_hw_output_stencil_1_read_start;
assign curved_stencil_op_hcompute_hw_output_stencil_1_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_1_port_controller_d[2];
assign curved_stencil_op_hcompute_hw_output_stencil_1_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_1_port_controller_d[1];
assign curved_stencil_op_hcompute_hw_output_stencil_1_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_1_port_controller_d[0];
assign curved_stencil_op_hcompute_hw_output_stencil_2_read_ren = op_hcompute_hw_output_stencil_2_read_start;
assign curved_stencil_op_hcompute_hw_output_stencil_2_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_2_port_controller_d[2];
assign curved_stencil_op_hcompute_hw_output_stencil_2_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_2_port_controller_d[1];
assign curved_stencil_op_hcompute_hw_output_stencil_2_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_2_port_controller_d[0];
assign curved_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign curved_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign curved_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign curved_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
curved_stencil_ub curved_stencil (
    .clk(curved_stencil_clk),
    .flush(curved_stencil_flush),
    .rst_n(curved_stencil_rst_n),
    .op_hcompute_curved_stencil_1_write_wen(curved_stencil_op_hcompute_curved_stencil_1_write_wen),
    .op_hcompute_curved_stencil_1_write_ctrl_vars(curved_stencil_op_hcompute_curved_stencil_1_write_ctrl_vars),
    .op_hcompute_curved_stencil_1_write(curved_stencil_op_hcompute_curved_stencil_1_write),
    .op_hcompute_curved_stencil_2_write_wen(curved_stencil_op_hcompute_curved_stencil_2_write_wen),
    .op_hcompute_curved_stencil_2_write_ctrl_vars(curved_stencil_op_hcompute_curved_stencil_2_write_ctrl_vars),
    .op_hcompute_curved_stencil_2_write(curved_stencil_op_hcompute_curved_stencil_2_write),
    .op_hcompute_curved_stencil_write_wen(curved_stencil_op_hcompute_curved_stencil_write_wen),
    .op_hcompute_curved_stencil_write_ctrl_vars(curved_stencil_op_hcompute_curved_stencil_write_ctrl_vars),
    .op_hcompute_curved_stencil_write(curved_stencil_op_hcompute_curved_stencil_write),
    .op_hcompute_hw_output_stencil_1_read_ren(curved_stencil_op_hcompute_hw_output_stencil_1_read_ren),
    .op_hcompute_hw_output_stencil_1_read_ctrl_vars(curved_stencil_op_hcompute_hw_output_stencil_1_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_1_read(curved_stencil_op_hcompute_hw_output_stencil_1_read),
    .op_hcompute_hw_output_stencil_2_read_ren(curved_stencil_op_hcompute_hw_output_stencil_2_read_ren),
    .op_hcompute_hw_output_stencil_2_read_ctrl_vars(curved_stencil_op_hcompute_hw_output_stencil_2_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_2_read(curved_stencil_op_hcompute_hw_output_stencil_2_read),
    .op_hcompute_hw_output_stencil_read_ren(curved_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(curved_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(curved_stencil_op_hcompute_hw_output_stencil_read)
);
assign demosaicked_1_stencil_clk = clk;
assign demosaicked_1_stencil_flush = flush;
assign demosaicked_1_stencil_rst_n = rst_n;
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ren = op_hcompute_corrected_stencil_1_read_start;
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ctrl_vars[2] = op_hcompute_corrected_stencil_1_port_controller_d[2];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ctrl_vars[1] = op_hcompute_corrected_stencil_1_port_controller_d[1];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ctrl_vars[0] = op_hcompute_corrected_stencil_1_port_controller_d[0];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ren = op_hcompute_corrected_stencil_2_read_start;
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ctrl_vars[2] = op_hcompute_corrected_stencil_2_port_controller_d[2];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ctrl_vars[1] = op_hcompute_corrected_stencil_2_port_controller_d[1];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ctrl_vars[0] = op_hcompute_corrected_stencil_2_port_controller_d[0];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ren = op_hcompute_corrected_stencil_read_start;
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ctrl_vars[2] = op_hcompute_corrected_stencil_port_controller_d[2];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ctrl_vars[1] = op_hcompute_corrected_stencil_port_controller_d[1];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ctrl_vars[0] = op_hcompute_corrected_stencil_port_controller_d[0];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_wen = op_hcompute_demosaicked_1_stencil_1_write_start;
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2] = op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_out[2];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] = op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_out[1];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[0] = op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_out[0];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write[0] = op_hcompute_demosaicked_1_stencil_1_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write[0];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_wen = op_hcompute_demosaicked_1_stencil_2_write_start;
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2] = op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_out[2];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] = op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_out[1];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[0] = op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_out[0];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write[0] = op_hcompute_demosaicked_1_stencil_2_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write[0];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_wen = op_hcompute_demosaicked_1_stencil_write_start;
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2] = op_hcompute_demosaicked_1_stencil_write_start_control_vars_out[2];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] = op_hcompute_demosaicked_1_stencil_write_start_control_vars_out[1];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_ctrl_vars[0] = op_hcompute_demosaicked_1_stencil_write_start_control_vars_out[0];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write[0] = op_hcompute_demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write[0];
demosaicked_1_stencil_ub demosaicked_1_stencil (
    .clk(demosaicked_1_stencil_clk),
    .flush(demosaicked_1_stencil_flush),
    .rst_n(demosaicked_1_stencil_rst_n),
    .op_hcompute_corrected_stencil_1_read_ren(demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ren),
    .op_hcompute_corrected_stencil_1_read_ctrl_vars(demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ctrl_vars),
    .op_hcompute_corrected_stencil_1_read(demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read),
    .op_hcompute_corrected_stencil_2_read_ren(demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ren),
    .op_hcompute_corrected_stencil_2_read_ctrl_vars(demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ctrl_vars),
    .op_hcompute_corrected_stencil_2_read(demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read),
    .op_hcompute_corrected_stencil_read_ren(demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ren),
    .op_hcompute_corrected_stencil_read_ctrl_vars(demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ctrl_vars),
    .op_hcompute_corrected_stencil_read(demosaicked_1_stencil_op_hcompute_corrected_stencil_read),
    .op_hcompute_demosaicked_1_stencil_1_write_wen(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_wen),
    .op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars),
    .op_hcompute_demosaicked_1_stencil_1_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write),
    .op_hcompute_demosaicked_1_stencil_2_write_wen(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_wen),
    .op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars),
    .op_hcompute_demosaicked_1_stencil_2_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write),
    .op_hcompute_demosaicked_1_stencil_write_wen(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_wen),
    .op_hcompute_demosaicked_1_stencil_write_ctrl_vars(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_ctrl_vars),
    .op_hcompute_demosaicked_1_stencil_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write)
);
assign denoised_1_stencil_clk = clk;
assign denoised_1_stencil_flush = flush;
assign denoised_1_stencil_rst_n = rst_n;
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ren = op_hcompute_demosaicked_1_stencil_1_read_start;
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[2];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[1];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[0] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[0];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ren = op_hcompute_demosaicked_1_stencil_2_read_start;
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[2];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[1];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[0];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ren = op_hcompute_demosaicked_1_stencil_read_start;
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2] = op_hcompute_demosaicked_1_stencil_port_controller_d[2];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] = op_hcompute_demosaicked_1_stencil_port_controller_d[1];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] = op_hcompute_demosaicked_1_stencil_port_controller_d[0];
assign denoised_1_stencil_op_hcompute_denoised_1_stencil_write_wen = op_hcompute_denoised_1_stencil_write_start;
assign denoised_1_stencil_op_hcompute_denoised_1_stencil_write_ctrl_vars[2] = op_hcompute_denoised_1_stencil_write_start_control_vars_out[2];
assign denoised_1_stencil_op_hcompute_denoised_1_stencil_write_ctrl_vars[1] = op_hcompute_denoised_1_stencil_write_start_control_vars_out[1];
assign denoised_1_stencil_op_hcompute_denoised_1_stencil_write_ctrl_vars[0] = op_hcompute_denoised_1_stencil_write_start_control_vars_out[0];
assign denoised_1_stencil_op_hcompute_denoised_1_stencil_write[0] = op_hcompute_denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_write[0];
denoised_1_stencil_ub denoised_1_stencil (
    .clk(denoised_1_stencil_clk),
    .flush(denoised_1_stencil_flush),
    .rst_n(denoised_1_stencil_rst_n),
    .op_hcompute_demosaicked_1_stencil_1_read_ren(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ren),
    .op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars),
    .op_hcompute_demosaicked_1_stencil_1_read(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read),
    .op_hcompute_demosaicked_1_stencil_2_read_ren(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ren),
    .op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars),
    .op_hcompute_demosaicked_1_stencil_2_read(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read),
    .op_hcompute_demosaicked_1_stencil_read_ren(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ren),
    .op_hcompute_demosaicked_1_stencil_read_ctrl_vars(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ctrl_vars),
    .op_hcompute_demosaicked_1_stencil_read(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read),
    .op_hcompute_denoised_1_stencil_write_wen(denoised_1_stencil_op_hcompute_denoised_1_stencil_write_wen),
    .op_hcompute_denoised_1_stencil_write_ctrl_vars(denoised_1_stencil_op_hcompute_denoised_1_stencil_write_ctrl_vars),
    .op_hcompute_denoised_1_stencil_write(denoised_1_stencil_op_hcompute_denoised_1_stencil_write)
);
assign hw_input_global_wrapper_stencil_clk = clk;
assign hw_input_global_wrapper_stencil_flush = flush;
assign hw_input_global_wrapper_stencil_rst_n = rst_n;
assign hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ren = op_hcompute_denoised_1_stencil_read_start;
assign hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ctrl_vars[2] = op_hcompute_denoised_1_stencil_port_controller_d[2];
assign hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ctrl_vars[1] = op_hcompute_denoised_1_stencil_port_controller_d[1];
assign hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ctrl_vars[0] = op_hcompute_denoised_1_stencil_port_controller_d[0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen = op_hcompute_hw_input_global_wrapper_stencil_write_start;
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[2];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[1];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0];
hw_input_global_wrapper_stencil_ub hw_input_global_wrapper_stencil (
    .clk(hw_input_global_wrapper_stencil_clk),
    .flush(hw_input_global_wrapper_stencil_flush),
    .rst_n(hw_input_global_wrapper_stencil_rst_n),
    .op_hcompute_denoised_1_stencil_read_ren(hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ren),
    .op_hcompute_denoised_1_stencil_read_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ctrl_vars),
    .op_hcompute_denoised_1_stencil_read(hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read),
    .op_hcompute_hw_input_global_wrapper_stencil_write_wen(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen),
    .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_global_wrapper_stencil_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write)
);
assign op_hcompute_corrected_stencil_clk = clk;
assign op_hcompute_corrected_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_read[2] = demosaicked_1_stencil_op_hcompute_corrected_stencil_read[2];
assign op_hcompute_corrected_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_read[1] = demosaicked_1_stencil_op_hcompute_corrected_stencil_read[1];
assign op_hcompute_corrected_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_read[0] = demosaicked_1_stencil_op_hcompute_corrected_stencil_read[0];
cu_op_hcompute_corrected_stencil op_hcompute_corrected_stencil (
    .clk(op_hcompute_corrected_stencil_clk),
    .demosaicked_1_stencil_op_hcompute_corrected_stencil_read(op_hcompute_corrected_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_read),
    .corrected_stencil_op_hcompute_corrected_stencil_write(op_hcompute_corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_write)
);
assign op_hcompute_corrected_stencil_1_clk = clk;
assign op_hcompute_corrected_stencil_1_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[2] = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[2];
assign op_hcompute_corrected_stencil_1_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[1] = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[1];
assign op_hcompute_corrected_stencil_1_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[0] = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[0];
cu_op_hcompute_corrected_stencil_1 op_hcompute_corrected_stencil_1 (
    .clk(op_hcompute_corrected_stencil_1_clk),
    .demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read(op_hcompute_corrected_stencil_1_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read),
    .corrected_stencil_op_hcompute_corrected_stencil_1_write(op_hcompute_corrected_stencil_1_corrected_stencil_op_hcompute_corrected_stencil_1_write)
);
assign op_hcompute_corrected_stencil_1_exe_start_clk = clk;
assign op_hcompute_corrected_stencil_1_exe_start_in = op_hcompute_corrected_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_corrected_stencil_1_exe_start (
    .clk(op_hcompute_corrected_stencil_1_exe_start_clk),
    .in(op_hcompute_corrected_stencil_1_exe_start_in),
    .out(op_hcompute_corrected_stencil_1_exe_start_out)
);
assign op_hcompute_corrected_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_corrected_stencil_1_exe_start_control_vars_in[2] = op_hcompute_corrected_stencil_1_port_controller_d[2];
assign op_hcompute_corrected_stencil_1_exe_start_control_vars_in[1] = op_hcompute_corrected_stencil_1_port_controller_d[1];
assign op_hcompute_corrected_stencil_1_exe_start_control_vars_in[0] = op_hcompute_corrected_stencil_1_port_controller_d[0];
array_delay_U1683 op_hcompute_corrected_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_corrected_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_corrected_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_corrected_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_corrected_stencil_1_port_controller_clk = clk;
affine_controller__U1662 op_hcompute_corrected_stencil_1_port_controller (
    .clk(op_hcompute_corrected_stencil_1_port_controller_clk),
    .valid(op_hcompute_corrected_stencil_1_port_controller_valid),
    .d(op_hcompute_corrected_stencil_1_port_controller_d)
);
assign op_hcompute_corrected_stencil_1_port_controller_U665_clk = clk;
affine_controller__U648 op_hcompute_corrected_stencil_1_port_controller_U665 (
    .clk(op_hcompute_corrected_stencil_1_port_controller_U665_clk),
    .valid(op_hcompute_corrected_stencil_1_port_controller_U665_valid),
    .d(op_hcompute_corrected_stencil_1_port_controller_U665_d)
);
assign op_hcompute_corrected_stencil_1_port_controller_U683_clk = clk;
affine_controller__U666 op_hcompute_corrected_stencil_1_port_controller_U683 (
    .clk(op_hcompute_corrected_stencil_1_port_controller_U683_clk),
    .valid(op_hcompute_corrected_stencil_1_port_controller_U683_valid),
    .d(op_hcompute_corrected_stencil_1_port_controller_U683_d)
);
assign op_hcompute_corrected_stencil_1_port_controller_U701_clk = clk;
affine_controller__U684 op_hcompute_corrected_stencil_1_port_controller_U701 (
    .clk(op_hcompute_corrected_stencil_1_port_controller_U701_clk),
    .valid(op_hcompute_corrected_stencil_1_port_controller_U701_valid),
    .d(op_hcompute_corrected_stencil_1_port_controller_U701_d)
);
assign op_hcompute_corrected_stencil_1_port_controller_U719_clk = clk;
affine_controller__U702 op_hcompute_corrected_stencil_1_port_controller_U719 (
    .clk(op_hcompute_corrected_stencil_1_port_controller_U719_clk),
    .valid(op_hcompute_corrected_stencil_1_port_controller_U719_valid),
    .d(op_hcompute_corrected_stencil_1_port_controller_U719_d)
);
assign op_hcompute_corrected_stencil_1_port_controller_U737_clk = clk;
affine_controller__U720 op_hcompute_corrected_stencil_1_port_controller_U737 (
    .clk(op_hcompute_corrected_stencil_1_port_controller_U737_clk),
    .valid(op_hcompute_corrected_stencil_1_port_controller_U737_valid),
    .d(op_hcompute_corrected_stencil_1_port_controller_U737_d)
);
assign op_hcompute_corrected_stencil_1_port_controller_U755_clk = clk;
affine_controller__U738 op_hcompute_corrected_stencil_1_port_controller_U755 (
    .clk(op_hcompute_corrected_stencil_1_port_controller_U755_clk),
    .valid(op_hcompute_corrected_stencil_1_port_controller_U755_valid),
    .d(op_hcompute_corrected_stencil_1_port_controller_U755_d)
);
assign op_hcompute_corrected_stencil_1_read_start = op_hcompute_corrected_stencil_1_port_controller_valid;
assign op_hcompute_corrected_stencil_1_write_start = op_hcompute_corrected_stencil_1_exe_start_out;
assign op_hcompute_corrected_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_corrected_stencil_1_write_start_control_vars_in[2] = op_hcompute_corrected_stencil_1_port_controller_d[2];
assign op_hcompute_corrected_stencil_1_write_start_control_vars_in[1] = op_hcompute_corrected_stencil_1_port_controller_d[1];
assign op_hcompute_corrected_stencil_1_write_start_control_vars_in[0] = op_hcompute_corrected_stencil_1_port_controller_d[0];
array_delay_U1679 op_hcompute_corrected_stencil_1_write_start_control_vars (
    .clk(op_hcompute_corrected_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_corrected_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_corrected_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_corrected_stencil_2_clk = clk;
assign op_hcompute_corrected_stencil_2_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[2] = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[2];
assign op_hcompute_corrected_stencil_2_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[1] = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[1];
assign op_hcompute_corrected_stencil_2_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[0] = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[0];
cu_op_hcompute_corrected_stencil_2 op_hcompute_corrected_stencil_2 (
    .clk(op_hcompute_corrected_stencil_2_clk),
    .demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read(op_hcompute_corrected_stencil_2_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read),
    .corrected_stencil_op_hcompute_corrected_stencil_2_write(op_hcompute_corrected_stencil_2_corrected_stencil_op_hcompute_corrected_stencil_2_write)
);
assign op_hcompute_corrected_stencil_2_exe_start_clk = clk;
assign op_hcompute_corrected_stencil_2_exe_start_in = op_hcompute_corrected_stencil_2_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_corrected_stencil_2_exe_start (
    .clk(op_hcompute_corrected_stencil_2_exe_start_clk),
    .in(op_hcompute_corrected_stencil_2_exe_start_in),
    .out(op_hcompute_corrected_stencil_2_exe_start_out)
);
assign op_hcompute_corrected_stencil_2_exe_start_control_vars_clk = clk;
assign op_hcompute_corrected_stencil_2_exe_start_control_vars_in[2] = op_hcompute_corrected_stencil_2_port_controller_d[2];
assign op_hcompute_corrected_stencil_2_exe_start_control_vars_in[1] = op_hcompute_corrected_stencil_2_port_controller_d[1];
assign op_hcompute_corrected_stencil_2_exe_start_control_vars_in[0] = op_hcompute_corrected_stencil_2_port_controller_d[0];
array_delay_U1708 op_hcompute_corrected_stencil_2_exe_start_control_vars (
    .clk(op_hcompute_corrected_stencil_2_exe_start_control_vars_clk),
    .in(op_hcompute_corrected_stencil_2_exe_start_control_vars_in),
    .out(op_hcompute_corrected_stencil_2_exe_start_control_vars_out)
);
assign op_hcompute_corrected_stencil_2_port_controller_clk = clk;
affine_controller__U1687 op_hcompute_corrected_stencil_2_port_controller (
    .clk(op_hcompute_corrected_stencil_2_port_controller_clk),
    .valid(op_hcompute_corrected_stencil_2_port_controller_valid),
    .d(op_hcompute_corrected_stencil_2_port_controller_d)
);
assign op_hcompute_corrected_stencil_2_port_controller_U773_clk = clk;
affine_controller__U756 op_hcompute_corrected_stencil_2_port_controller_U773 (
    .clk(op_hcompute_corrected_stencil_2_port_controller_U773_clk),
    .valid(op_hcompute_corrected_stencil_2_port_controller_U773_valid),
    .d(op_hcompute_corrected_stencil_2_port_controller_U773_d)
);
assign op_hcompute_corrected_stencil_2_port_controller_U791_clk = clk;
affine_controller__U774 op_hcompute_corrected_stencil_2_port_controller_U791 (
    .clk(op_hcompute_corrected_stencil_2_port_controller_U791_clk),
    .valid(op_hcompute_corrected_stencil_2_port_controller_U791_valid),
    .d(op_hcompute_corrected_stencil_2_port_controller_U791_d)
);
assign op_hcompute_corrected_stencil_2_port_controller_U809_clk = clk;
affine_controller__U792 op_hcompute_corrected_stencil_2_port_controller_U809 (
    .clk(op_hcompute_corrected_stencil_2_port_controller_U809_clk),
    .valid(op_hcompute_corrected_stencil_2_port_controller_U809_valid),
    .d(op_hcompute_corrected_stencil_2_port_controller_U809_d)
);
assign op_hcompute_corrected_stencil_2_port_controller_U827_clk = clk;
affine_controller__U810 op_hcompute_corrected_stencil_2_port_controller_U827 (
    .clk(op_hcompute_corrected_stencil_2_port_controller_U827_clk),
    .valid(op_hcompute_corrected_stencil_2_port_controller_U827_valid),
    .d(op_hcompute_corrected_stencil_2_port_controller_U827_d)
);
assign op_hcompute_corrected_stencil_2_port_controller_U845_clk = clk;
affine_controller__U828 op_hcompute_corrected_stencil_2_port_controller_U845 (
    .clk(op_hcompute_corrected_stencil_2_port_controller_U845_clk),
    .valid(op_hcompute_corrected_stencil_2_port_controller_U845_valid),
    .d(op_hcompute_corrected_stencil_2_port_controller_U845_d)
);
assign op_hcompute_corrected_stencil_2_port_controller_U863_clk = clk;
affine_controller__U846 op_hcompute_corrected_stencil_2_port_controller_U863 (
    .clk(op_hcompute_corrected_stencil_2_port_controller_U863_clk),
    .valid(op_hcompute_corrected_stencil_2_port_controller_U863_valid),
    .d(op_hcompute_corrected_stencil_2_port_controller_U863_d)
);
assign op_hcompute_corrected_stencil_2_read_start = op_hcompute_corrected_stencil_2_port_controller_valid;
assign op_hcompute_corrected_stencil_2_write_start = op_hcompute_corrected_stencil_2_exe_start_out;
assign op_hcompute_corrected_stencil_2_write_start_control_vars_clk = clk;
assign op_hcompute_corrected_stencil_2_write_start_control_vars_in[2] = op_hcompute_corrected_stencil_2_port_controller_d[2];
assign op_hcompute_corrected_stencil_2_write_start_control_vars_in[1] = op_hcompute_corrected_stencil_2_port_controller_d[1];
assign op_hcompute_corrected_stencil_2_write_start_control_vars_in[0] = op_hcompute_corrected_stencil_2_port_controller_d[0];
array_delay_U1704 op_hcompute_corrected_stencil_2_write_start_control_vars (
    .clk(op_hcompute_corrected_stencil_2_write_start_control_vars_clk),
    .in(op_hcompute_corrected_stencil_2_write_start_control_vars_in),
    .out(op_hcompute_corrected_stencil_2_write_start_control_vars_out)
);
assign op_hcompute_corrected_stencil_exe_start_clk = clk;
assign op_hcompute_corrected_stencil_exe_start_in = op_hcompute_corrected_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_corrected_stencil_exe_start (
    .clk(op_hcompute_corrected_stencil_exe_start_clk),
    .in(op_hcompute_corrected_stencil_exe_start_in),
    .out(op_hcompute_corrected_stencil_exe_start_out)
);
assign op_hcompute_corrected_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_corrected_stencil_exe_start_control_vars_in[2] = op_hcompute_corrected_stencil_port_controller_d[2];
assign op_hcompute_corrected_stencil_exe_start_control_vars_in[1] = op_hcompute_corrected_stencil_port_controller_d[1];
assign op_hcompute_corrected_stencil_exe_start_control_vars_in[0] = op_hcompute_corrected_stencil_port_controller_d[0];
array_delay_U1658 op_hcompute_corrected_stencil_exe_start_control_vars (
    .clk(op_hcompute_corrected_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_corrected_stencil_exe_start_control_vars_in),
    .out(op_hcompute_corrected_stencil_exe_start_control_vars_out)
);
assign op_hcompute_corrected_stencil_port_controller_clk = clk;
affine_controller__U1637 op_hcompute_corrected_stencil_port_controller (
    .clk(op_hcompute_corrected_stencil_port_controller_clk),
    .valid(op_hcompute_corrected_stencil_port_controller_valid),
    .d(op_hcompute_corrected_stencil_port_controller_d)
);
assign op_hcompute_corrected_stencil_port_controller_U557_clk = clk;
affine_controller__U540 op_hcompute_corrected_stencil_port_controller_U557 (
    .clk(op_hcompute_corrected_stencil_port_controller_U557_clk),
    .valid(op_hcompute_corrected_stencil_port_controller_U557_valid),
    .d(op_hcompute_corrected_stencil_port_controller_U557_d)
);
assign op_hcompute_corrected_stencil_port_controller_U575_clk = clk;
affine_controller__U558 op_hcompute_corrected_stencil_port_controller_U575 (
    .clk(op_hcompute_corrected_stencil_port_controller_U575_clk),
    .valid(op_hcompute_corrected_stencil_port_controller_U575_valid),
    .d(op_hcompute_corrected_stencil_port_controller_U575_d)
);
assign op_hcompute_corrected_stencil_port_controller_U593_clk = clk;
affine_controller__U576 op_hcompute_corrected_stencil_port_controller_U593 (
    .clk(op_hcompute_corrected_stencil_port_controller_U593_clk),
    .valid(op_hcompute_corrected_stencil_port_controller_U593_valid),
    .d(op_hcompute_corrected_stencil_port_controller_U593_d)
);
assign op_hcompute_corrected_stencil_port_controller_U611_clk = clk;
affine_controller__U594 op_hcompute_corrected_stencil_port_controller_U611 (
    .clk(op_hcompute_corrected_stencil_port_controller_U611_clk),
    .valid(op_hcompute_corrected_stencil_port_controller_U611_valid),
    .d(op_hcompute_corrected_stencil_port_controller_U611_d)
);
assign op_hcompute_corrected_stencil_port_controller_U629_clk = clk;
affine_controller__U612 op_hcompute_corrected_stencil_port_controller_U629 (
    .clk(op_hcompute_corrected_stencil_port_controller_U629_clk),
    .valid(op_hcompute_corrected_stencil_port_controller_U629_valid),
    .d(op_hcompute_corrected_stencil_port_controller_U629_d)
);
assign op_hcompute_corrected_stencil_port_controller_U647_clk = clk;
affine_controller__U630 op_hcompute_corrected_stencil_port_controller_U647 (
    .clk(op_hcompute_corrected_stencil_port_controller_U647_clk),
    .valid(op_hcompute_corrected_stencil_port_controller_U647_valid),
    .d(op_hcompute_corrected_stencil_port_controller_U647_d)
);
assign op_hcompute_corrected_stencil_read_start = op_hcompute_corrected_stencil_port_controller_valid;
assign op_hcompute_corrected_stencil_write_start = op_hcompute_corrected_stencil_exe_start_out;
assign op_hcompute_corrected_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_corrected_stencil_write_start_control_vars_in[2] = op_hcompute_corrected_stencil_port_controller_d[2];
assign op_hcompute_corrected_stencil_write_start_control_vars_in[1] = op_hcompute_corrected_stencil_port_controller_d[1];
assign op_hcompute_corrected_stencil_write_start_control_vars_in[0] = op_hcompute_corrected_stencil_port_controller_d[0];
array_delay_U1654 op_hcompute_corrected_stencil_write_start_control_vars (
    .clk(op_hcompute_corrected_stencil_write_start_control_vars_clk),
    .in(op_hcompute_corrected_stencil_write_start_control_vars_in),
    .out(op_hcompute_corrected_stencil_write_start_control_vars_out)
);
assign op_hcompute_curved_stencil_clk = clk;
assign op_hcompute_curved_stencil_corrected_stencil_op_hcompute_curved_stencil_read[0] = corrected_stencil_op_hcompute_curved_stencil_read[0];
cu_op_hcompute_curved_stencil op_hcompute_curved_stencil (
    .clk(op_hcompute_curved_stencil_clk),
    .corrected_stencil_op_hcompute_curved_stencil_read(op_hcompute_curved_stencil_corrected_stencil_op_hcompute_curved_stencil_read),
    .curved_stencil_op_hcompute_curved_stencil_write(op_hcompute_curved_stencil_curved_stencil_op_hcompute_curved_stencil_write)
);
assign op_hcompute_curved_stencil_1_clk = clk;
assign op_hcompute_curved_stencil_1_corrected_stencil_op_hcompute_curved_stencil_1_read[0] = corrected_stencil_op_hcompute_curved_stencil_1_read[0];
cu_op_hcompute_curved_stencil_1 op_hcompute_curved_stencil_1 (
    .clk(op_hcompute_curved_stencil_1_clk),
    .corrected_stencil_op_hcompute_curved_stencil_1_read(op_hcompute_curved_stencil_1_corrected_stencil_op_hcompute_curved_stencil_1_read),
    .curved_stencil_op_hcompute_curved_stencil_1_write(op_hcompute_curved_stencil_1_curved_stencil_op_hcompute_curved_stencil_1_write)
);
assign op_hcompute_curved_stencil_1_U1755_clk = clk;
assign op_hcompute_curved_stencil_1_U1755_in = op_hcompute_curved_stencil_1_exe_start_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_curved_stencil_1_U1755 (
    .clk(op_hcompute_curved_stencil_1_U1755_clk),
    .in(op_hcompute_curved_stencil_1_U1755_in),
    .out(op_hcompute_curved_stencil_1_U1755_out)
);
assign op_hcompute_curved_stencil_1_exe_start_clk = clk;
assign op_hcompute_curved_stencil_1_exe_start_in = op_hcompute_curved_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_curved_stencil_1_exe_start (
    .clk(op_hcompute_curved_stencil_1_exe_start_clk),
    .in(op_hcompute_curved_stencil_1_exe_start_in),
    .out(op_hcompute_curved_stencil_1_exe_start_out)
);
assign op_hcompute_curved_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_curved_stencil_1_exe_start_control_vars_in[2] = op_hcompute_curved_stencil_1_port_controller_d[2];
assign op_hcompute_curved_stencil_1_exe_start_control_vars_in[1] = op_hcompute_curved_stencil_1_port_controller_d[1];
assign op_hcompute_curved_stencil_1_exe_start_control_vars_in[0] = op_hcompute_curved_stencil_1_port_controller_d[0];
array_delay_U1760 op_hcompute_curved_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_curved_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_curved_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_curved_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_curved_stencil_1_port_controller_clk = clk;
affine_controller__U1738 op_hcompute_curved_stencil_1_port_controller (
    .clk(op_hcompute_curved_stencil_1_port_controller_clk),
    .valid(op_hcompute_curved_stencil_1_port_controller_valid),
    .d(op_hcompute_curved_stencil_1_port_controller_d)
);
assign op_hcompute_curved_stencil_1_port_controller_U1007_clk = clk;
affine_controller__U990 op_hcompute_curved_stencil_1_port_controller_U1007 (
    .clk(op_hcompute_curved_stencil_1_port_controller_U1007_clk),
    .valid(op_hcompute_curved_stencil_1_port_controller_U1007_valid),
    .d(op_hcompute_curved_stencil_1_port_controller_U1007_d)
);
assign op_hcompute_curved_stencil_1_port_controller_U1025_clk = clk;
affine_controller__U1008 op_hcompute_curved_stencil_1_port_controller_U1025 (
    .clk(op_hcompute_curved_stencil_1_port_controller_U1025_clk),
    .valid(op_hcompute_curved_stencil_1_port_controller_U1025_valid),
    .d(op_hcompute_curved_stencil_1_port_controller_U1025_d)
);
assign op_hcompute_curved_stencil_1_port_controller_U1043_clk = clk;
affine_controller__U1026 op_hcompute_curved_stencil_1_port_controller_U1043 (
    .clk(op_hcompute_curved_stencil_1_port_controller_U1043_clk),
    .valid(op_hcompute_curved_stencil_1_port_controller_U1043_valid),
    .d(op_hcompute_curved_stencil_1_port_controller_U1043_d)
);
assign op_hcompute_curved_stencil_1_port_controller_U1061_clk = clk;
affine_controller__U1044 op_hcompute_curved_stencil_1_port_controller_U1061 (
    .clk(op_hcompute_curved_stencil_1_port_controller_U1061_clk),
    .valid(op_hcompute_curved_stencil_1_port_controller_U1061_valid),
    .d(op_hcompute_curved_stencil_1_port_controller_U1061_d)
);
assign op_hcompute_curved_stencil_1_port_controller_U1079_clk = clk;
affine_controller__U1062 op_hcompute_curved_stencil_1_port_controller_U1079 (
    .clk(op_hcompute_curved_stencil_1_port_controller_U1079_clk),
    .valid(op_hcompute_curved_stencil_1_port_controller_U1079_valid),
    .d(op_hcompute_curved_stencil_1_port_controller_U1079_d)
);
assign op_hcompute_curved_stencil_1_port_controller_U989_clk = clk;
affine_controller__U972 op_hcompute_curved_stencil_1_port_controller_U989 (
    .clk(op_hcompute_curved_stencil_1_port_controller_U989_clk),
    .valid(op_hcompute_curved_stencil_1_port_controller_U989_valid),
    .d(op_hcompute_curved_stencil_1_port_controller_U989_d)
);
assign op_hcompute_curved_stencil_1_read_start = op_hcompute_curved_stencil_1_port_controller_valid;
assign op_hcompute_curved_stencil_1_write_start = op_hcompute_curved_stencil_1_U1755_out;
assign op_hcompute_curved_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_curved_stencil_1_write_start_control_vars_in[2] = op_hcompute_curved_stencil_1_port_controller_d[2];
assign op_hcompute_curved_stencil_1_write_start_control_vars_in[1] = op_hcompute_curved_stencil_1_port_controller_d[1];
assign op_hcompute_curved_stencil_1_write_start_control_vars_in[0] = op_hcompute_curved_stencil_1_port_controller_d[0];
array_delay_U1756 op_hcompute_curved_stencil_1_write_start_control_vars (
    .clk(op_hcompute_curved_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_curved_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_curved_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_curved_stencil_2_clk = clk;
assign op_hcompute_curved_stencil_2_corrected_stencil_op_hcompute_curved_stencil_2_read[0] = corrected_stencil_op_hcompute_curved_stencil_2_read[0];
cu_op_hcompute_curved_stencil_2 op_hcompute_curved_stencil_2 (
    .clk(op_hcompute_curved_stencil_2_clk),
    .corrected_stencil_op_hcompute_curved_stencil_2_read(op_hcompute_curved_stencil_2_corrected_stencil_op_hcompute_curved_stencil_2_read),
    .curved_stencil_op_hcompute_curved_stencil_2_write(op_hcompute_curved_stencil_2_curved_stencil_op_hcompute_curved_stencil_2_write)
);
assign op_hcompute_curved_stencil_2_U1781_clk = clk;
assign op_hcompute_curved_stencil_2_U1781_in = op_hcompute_curved_stencil_2_exe_start_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_curved_stencil_2_U1781 (
    .clk(op_hcompute_curved_stencil_2_U1781_clk),
    .in(op_hcompute_curved_stencil_2_U1781_in),
    .out(op_hcompute_curved_stencil_2_U1781_out)
);
assign op_hcompute_curved_stencil_2_exe_start_clk = clk;
assign op_hcompute_curved_stencil_2_exe_start_in = op_hcompute_curved_stencil_2_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_curved_stencil_2_exe_start (
    .clk(op_hcompute_curved_stencil_2_exe_start_clk),
    .in(op_hcompute_curved_stencil_2_exe_start_in),
    .out(op_hcompute_curved_stencil_2_exe_start_out)
);
assign op_hcompute_curved_stencil_2_exe_start_control_vars_clk = clk;
assign op_hcompute_curved_stencil_2_exe_start_control_vars_in[2] = op_hcompute_curved_stencil_2_port_controller_d[2];
assign op_hcompute_curved_stencil_2_exe_start_control_vars_in[1] = op_hcompute_curved_stencil_2_port_controller_d[1];
assign op_hcompute_curved_stencil_2_exe_start_control_vars_in[0] = op_hcompute_curved_stencil_2_port_controller_d[0];
array_delay_U1786 op_hcompute_curved_stencil_2_exe_start_control_vars (
    .clk(op_hcompute_curved_stencil_2_exe_start_control_vars_clk),
    .in(op_hcompute_curved_stencil_2_exe_start_control_vars_in),
    .out(op_hcompute_curved_stencil_2_exe_start_control_vars_out)
);
assign op_hcompute_curved_stencil_2_port_controller_clk = clk;
affine_controller__U1764 op_hcompute_curved_stencil_2_port_controller (
    .clk(op_hcompute_curved_stencil_2_port_controller_clk),
    .valid(op_hcompute_curved_stencil_2_port_controller_valid),
    .d(op_hcompute_curved_stencil_2_port_controller_d)
);
assign op_hcompute_curved_stencil_2_port_controller_U1097_clk = clk;
affine_controller__U1080 op_hcompute_curved_stencil_2_port_controller_U1097 (
    .clk(op_hcompute_curved_stencil_2_port_controller_U1097_clk),
    .valid(op_hcompute_curved_stencil_2_port_controller_U1097_valid),
    .d(op_hcompute_curved_stencil_2_port_controller_U1097_d)
);
assign op_hcompute_curved_stencil_2_port_controller_U1115_clk = clk;
affine_controller__U1098 op_hcompute_curved_stencil_2_port_controller_U1115 (
    .clk(op_hcompute_curved_stencil_2_port_controller_U1115_clk),
    .valid(op_hcompute_curved_stencil_2_port_controller_U1115_valid),
    .d(op_hcompute_curved_stencil_2_port_controller_U1115_d)
);
assign op_hcompute_curved_stencil_2_port_controller_U1133_clk = clk;
affine_controller__U1116 op_hcompute_curved_stencil_2_port_controller_U1133 (
    .clk(op_hcompute_curved_stencil_2_port_controller_U1133_clk),
    .valid(op_hcompute_curved_stencil_2_port_controller_U1133_valid),
    .d(op_hcompute_curved_stencil_2_port_controller_U1133_d)
);
assign op_hcompute_curved_stencil_2_port_controller_U1151_clk = clk;
affine_controller__U1134 op_hcompute_curved_stencil_2_port_controller_U1151 (
    .clk(op_hcompute_curved_stencil_2_port_controller_U1151_clk),
    .valid(op_hcompute_curved_stencil_2_port_controller_U1151_valid),
    .d(op_hcompute_curved_stencil_2_port_controller_U1151_d)
);
assign op_hcompute_curved_stencil_2_port_controller_U1169_clk = clk;
affine_controller__U1152 op_hcompute_curved_stencil_2_port_controller_U1169 (
    .clk(op_hcompute_curved_stencil_2_port_controller_U1169_clk),
    .valid(op_hcompute_curved_stencil_2_port_controller_U1169_valid),
    .d(op_hcompute_curved_stencil_2_port_controller_U1169_d)
);
assign op_hcompute_curved_stencil_2_port_controller_U1187_clk = clk;
affine_controller__U1170 op_hcompute_curved_stencil_2_port_controller_U1187 (
    .clk(op_hcompute_curved_stencil_2_port_controller_U1187_clk),
    .valid(op_hcompute_curved_stencil_2_port_controller_U1187_valid),
    .d(op_hcompute_curved_stencil_2_port_controller_U1187_d)
);
assign op_hcompute_curved_stencil_2_read_start = op_hcompute_curved_stencil_2_port_controller_valid;
assign op_hcompute_curved_stencil_2_write_start = op_hcompute_curved_stencil_2_U1781_out;
assign op_hcompute_curved_stencil_2_write_start_control_vars_clk = clk;
assign op_hcompute_curved_stencil_2_write_start_control_vars_in[2] = op_hcompute_curved_stencil_2_port_controller_d[2];
assign op_hcompute_curved_stencil_2_write_start_control_vars_in[1] = op_hcompute_curved_stencil_2_port_controller_d[1];
assign op_hcompute_curved_stencil_2_write_start_control_vars_in[0] = op_hcompute_curved_stencil_2_port_controller_d[0];
array_delay_U1782 op_hcompute_curved_stencil_2_write_start_control_vars (
    .clk(op_hcompute_curved_stencil_2_write_start_control_vars_clk),
    .in(op_hcompute_curved_stencil_2_write_start_control_vars_in),
    .out(op_hcompute_curved_stencil_2_write_start_control_vars_out)
);
assign op_hcompute_curved_stencil_U1729_clk = clk;
assign op_hcompute_curved_stencil_U1729_in = op_hcompute_curved_stencil_exe_start_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_curved_stencil_U1729 (
    .clk(op_hcompute_curved_stencil_U1729_clk),
    .in(op_hcompute_curved_stencil_U1729_in),
    .out(op_hcompute_curved_stencil_U1729_out)
);
assign op_hcompute_curved_stencil_exe_start_clk = clk;
assign op_hcompute_curved_stencil_exe_start_in = op_hcompute_curved_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_curved_stencil_exe_start (
    .clk(op_hcompute_curved_stencil_exe_start_clk),
    .in(op_hcompute_curved_stencil_exe_start_in),
    .out(op_hcompute_curved_stencil_exe_start_out)
);
assign op_hcompute_curved_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_curved_stencil_exe_start_control_vars_in[2] = op_hcompute_curved_stencil_port_controller_d[2];
assign op_hcompute_curved_stencil_exe_start_control_vars_in[1] = op_hcompute_curved_stencil_port_controller_d[1];
assign op_hcompute_curved_stencil_exe_start_control_vars_in[0] = op_hcompute_curved_stencil_port_controller_d[0];
array_delay_U1734 op_hcompute_curved_stencil_exe_start_control_vars (
    .clk(op_hcompute_curved_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_curved_stencil_exe_start_control_vars_in),
    .out(op_hcompute_curved_stencil_exe_start_control_vars_out)
);
assign op_hcompute_curved_stencil_port_controller_clk = clk;
affine_controller__U1712 op_hcompute_curved_stencil_port_controller (
    .clk(op_hcompute_curved_stencil_port_controller_clk),
    .valid(op_hcompute_curved_stencil_port_controller_valid),
    .d(op_hcompute_curved_stencil_port_controller_d)
);
assign op_hcompute_curved_stencil_port_controller_U881_clk = clk;
affine_controller__U864 op_hcompute_curved_stencil_port_controller_U881 (
    .clk(op_hcompute_curved_stencil_port_controller_U881_clk),
    .valid(op_hcompute_curved_stencil_port_controller_U881_valid),
    .d(op_hcompute_curved_stencil_port_controller_U881_d)
);
assign op_hcompute_curved_stencil_port_controller_U899_clk = clk;
affine_controller__U882 op_hcompute_curved_stencil_port_controller_U899 (
    .clk(op_hcompute_curved_stencil_port_controller_U899_clk),
    .valid(op_hcompute_curved_stencil_port_controller_U899_valid),
    .d(op_hcompute_curved_stencil_port_controller_U899_d)
);
assign op_hcompute_curved_stencil_port_controller_U917_clk = clk;
affine_controller__U900 op_hcompute_curved_stencil_port_controller_U917 (
    .clk(op_hcompute_curved_stencil_port_controller_U917_clk),
    .valid(op_hcompute_curved_stencil_port_controller_U917_valid),
    .d(op_hcompute_curved_stencil_port_controller_U917_d)
);
assign op_hcompute_curved_stencil_port_controller_U935_clk = clk;
affine_controller__U918 op_hcompute_curved_stencil_port_controller_U935 (
    .clk(op_hcompute_curved_stencil_port_controller_U935_clk),
    .valid(op_hcompute_curved_stencil_port_controller_U935_valid),
    .d(op_hcompute_curved_stencil_port_controller_U935_d)
);
assign op_hcompute_curved_stencil_port_controller_U953_clk = clk;
affine_controller__U936 op_hcompute_curved_stencil_port_controller_U953 (
    .clk(op_hcompute_curved_stencil_port_controller_U953_clk),
    .valid(op_hcompute_curved_stencil_port_controller_U953_valid),
    .d(op_hcompute_curved_stencil_port_controller_U953_d)
);
assign op_hcompute_curved_stencil_port_controller_U971_clk = clk;
affine_controller__U954 op_hcompute_curved_stencil_port_controller_U971 (
    .clk(op_hcompute_curved_stencil_port_controller_U971_clk),
    .valid(op_hcompute_curved_stencil_port_controller_U971_valid),
    .d(op_hcompute_curved_stencil_port_controller_U971_d)
);
assign op_hcompute_curved_stencil_read_start = op_hcompute_curved_stencil_port_controller_valid;
assign op_hcompute_curved_stencil_write_start = op_hcompute_curved_stencil_U1729_out;
assign op_hcompute_curved_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_curved_stencil_write_start_control_vars_in[2] = op_hcompute_curved_stencil_port_controller_d[2];
assign op_hcompute_curved_stencil_write_start_control_vars_in[1] = op_hcompute_curved_stencil_port_controller_d[1];
assign op_hcompute_curved_stencil_write_start_control_vars_in[0] = op_hcompute_curved_stencil_port_controller_d[0];
array_delay_U1730 op_hcompute_curved_stencil_write_start_control_vars (
    .clk(op_hcompute_curved_stencil_write_start_control_vars_clk),
    .in(op_hcompute_curved_stencil_write_start_control_vars_in),
    .out(op_hcompute_curved_stencil_write_start_control_vars_out)
);
assign op_hcompute_demosaicked_1_stencil_clk = clk;
assign op_hcompute_demosaicked_1_stencil_demosaicked_1_s0_x = op_hcompute_demosaicked_1_stencil_exe_start_control_vars_out[2];
assign op_hcompute_demosaicked_1_stencil_demosaicked_1_s0_y = op_hcompute_demosaicked_1_stencil_exe_start_control_vars_out[1];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[7] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[7];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[6] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[6];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[5] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[5];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[4] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[4];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[3] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[3];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[2] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[2];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[1] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[1];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[0] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[0];
cu_op_hcompute_demosaicked_1_stencil op_hcompute_demosaicked_1_stencil (
    .clk(op_hcompute_demosaicked_1_stencil_clk),
    .demosaicked_1_s0_x(op_hcompute_demosaicked_1_stencil_demosaicked_1_s0_x),
    .demosaicked_1_s0_y(op_hcompute_demosaicked_1_stencil_demosaicked_1_s0_y),
    .denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read(op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read),
    .demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write(op_hcompute_demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write)
);
assign op_hcompute_demosaicked_1_stencil_1_clk = clk;
assign op_hcompute_demosaicked_1_stencil_1_demosaicked_1_s0_x_1 = op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_out[2];
assign op_hcompute_demosaicked_1_stencil_1_demosaicked_1_s0_y_1 = op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_out[1];
assign op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[4] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[4];
assign op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[3] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[3];
assign op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[2] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[2];
assign op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[1] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[1];
assign op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[0] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[0];
cu_op_hcompute_demosaicked_1_stencil_1 op_hcompute_demosaicked_1_stencil_1 (
    .clk(op_hcompute_demosaicked_1_stencil_1_clk),
    .demosaicked_1_s0_x_1(op_hcompute_demosaicked_1_stencil_1_demosaicked_1_s0_x_1),
    .demosaicked_1_s0_y_1(op_hcompute_demosaicked_1_stencil_1_demosaicked_1_s0_y_1),
    .denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read(op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read),
    .demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write(op_hcompute_demosaicked_1_stencil_1_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write)
);
assign op_hcompute_demosaicked_1_stencil_1_exe_start_clk = clk;
assign op_hcompute_demosaicked_1_stencil_1_exe_start_in = op_hcompute_demosaicked_1_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_demosaicked_1_stencil_1_exe_start (
    .clk(op_hcompute_demosaicked_1_stencil_1_exe_start_clk),
    .in(op_hcompute_demosaicked_1_stencil_1_exe_start_in),
    .out(op_hcompute_demosaicked_1_stencil_1_exe_start_out)
);
assign op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_in[2] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[2];
assign op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_in[1] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[1];
assign op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_in[0] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[0];
array_delay_U1608 op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_demosaicked_1_stencil_1_port_controller_clk = clk;
affine_controller__U1587 op_hcompute_demosaicked_1_stencil_1_port_controller (
    .clk(op_hcompute_demosaicked_1_stencil_1_port_controller_clk),
    .valid(op_hcompute_demosaicked_1_stencil_1_port_controller_valid),
    .d(op_hcompute_demosaicked_1_stencil_1_port_controller_d)
);
assign op_hcompute_demosaicked_1_stencil_1_port_controller_U341_clk = clk;
affine_controller__U324 op_hcompute_demosaicked_1_stencil_1_port_controller_U341 (
    .clk(op_hcompute_demosaicked_1_stencil_1_port_controller_U341_clk),
    .valid(op_hcompute_demosaicked_1_stencil_1_port_controller_U341_valid),
    .d(op_hcompute_demosaicked_1_stencil_1_port_controller_U341_d)
);
assign op_hcompute_demosaicked_1_stencil_1_port_controller_U359_clk = clk;
affine_controller__U342 op_hcompute_demosaicked_1_stencil_1_port_controller_U359 (
    .clk(op_hcompute_demosaicked_1_stencil_1_port_controller_U359_clk),
    .valid(op_hcompute_demosaicked_1_stencil_1_port_controller_U359_valid),
    .d(op_hcompute_demosaicked_1_stencil_1_port_controller_U359_d)
);
assign op_hcompute_demosaicked_1_stencil_1_port_controller_U377_clk = clk;
affine_controller__U360 op_hcompute_demosaicked_1_stencil_1_port_controller_U377 (
    .clk(op_hcompute_demosaicked_1_stencil_1_port_controller_U377_clk),
    .valid(op_hcompute_demosaicked_1_stencil_1_port_controller_U377_valid),
    .d(op_hcompute_demosaicked_1_stencil_1_port_controller_U377_d)
);
assign op_hcompute_demosaicked_1_stencil_1_port_controller_U395_clk = clk;
affine_controller__U378 op_hcompute_demosaicked_1_stencil_1_port_controller_U395 (
    .clk(op_hcompute_demosaicked_1_stencil_1_port_controller_U395_clk),
    .valid(op_hcompute_demosaicked_1_stencil_1_port_controller_U395_valid),
    .d(op_hcompute_demosaicked_1_stencil_1_port_controller_U395_d)
);
assign op_hcompute_demosaicked_1_stencil_1_port_controller_U413_clk = clk;
affine_controller__U396 op_hcompute_demosaicked_1_stencil_1_port_controller_U413 (
    .clk(op_hcompute_demosaicked_1_stencil_1_port_controller_U413_clk),
    .valid(op_hcompute_demosaicked_1_stencil_1_port_controller_U413_valid),
    .d(op_hcompute_demosaicked_1_stencil_1_port_controller_U413_d)
);
assign op_hcompute_demosaicked_1_stencil_1_port_controller_U431_clk = clk;
affine_controller__U414 op_hcompute_demosaicked_1_stencil_1_port_controller_U431 (
    .clk(op_hcompute_demosaicked_1_stencil_1_port_controller_U431_clk),
    .valid(op_hcompute_demosaicked_1_stencil_1_port_controller_U431_valid),
    .d(op_hcompute_demosaicked_1_stencil_1_port_controller_U431_d)
);
assign op_hcompute_demosaicked_1_stencil_1_read_start = op_hcompute_demosaicked_1_stencil_1_port_controller_valid;
assign op_hcompute_demosaicked_1_stencil_1_write_start = op_hcompute_demosaicked_1_stencil_1_exe_start_out;
assign op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_in[2] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[2];
assign op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_in[1] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[1];
assign op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_in[0] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[0];
array_delay_U1604 op_hcompute_demosaicked_1_stencil_1_write_start_control_vars (
    .clk(op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_demosaicked_1_stencil_2_clk = clk;
assign op_hcompute_demosaicked_1_stencil_2_demosaicked_1_s0_x_2 = op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_out[2];
assign op_hcompute_demosaicked_1_stencil_2_demosaicked_1_s0_y_2 = op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_out[1];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[7] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[7];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[6] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[6];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[5] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[5];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[4] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[4];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[3] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[3];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[2] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[2];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[1] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[1];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[0] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[0];
cu_op_hcompute_demosaicked_1_stencil_2 op_hcompute_demosaicked_1_stencil_2 (
    .clk(op_hcompute_demosaicked_1_stencil_2_clk),
    .demosaicked_1_s0_x_2(op_hcompute_demosaicked_1_stencil_2_demosaicked_1_s0_x_2),
    .demosaicked_1_s0_y_2(op_hcompute_demosaicked_1_stencil_2_demosaicked_1_s0_y_2),
    .denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read(op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read),
    .demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write(op_hcompute_demosaicked_1_stencil_2_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write)
);
assign op_hcompute_demosaicked_1_stencil_2_exe_start_clk = clk;
assign op_hcompute_demosaicked_1_stencil_2_exe_start_in = op_hcompute_demosaicked_1_stencil_2_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_demosaicked_1_stencil_2_exe_start (
    .clk(op_hcompute_demosaicked_1_stencil_2_exe_start_clk),
    .in(op_hcompute_demosaicked_1_stencil_2_exe_start_in),
    .out(op_hcompute_demosaicked_1_stencil_2_exe_start_out)
);
assign op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_clk = clk;
assign op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_in[2] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[2];
assign op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_in[1] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[1];
assign op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_in[0] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[0];
array_delay_U1633 op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars (
    .clk(op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_clk),
    .in(op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_in),
    .out(op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_out)
);
assign op_hcompute_demosaicked_1_stencil_2_port_controller_clk = clk;
affine_controller__U1612 op_hcompute_demosaicked_1_stencil_2_port_controller (
    .clk(op_hcompute_demosaicked_1_stencil_2_port_controller_clk),
    .valid(op_hcompute_demosaicked_1_stencil_2_port_controller_valid),
    .d(op_hcompute_demosaicked_1_stencil_2_port_controller_d)
);
assign op_hcompute_demosaicked_1_stencil_2_port_controller_U449_clk = clk;
affine_controller__U432 op_hcompute_demosaicked_1_stencil_2_port_controller_U449 (
    .clk(op_hcompute_demosaicked_1_stencil_2_port_controller_U449_clk),
    .valid(op_hcompute_demosaicked_1_stencil_2_port_controller_U449_valid),
    .d(op_hcompute_demosaicked_1_stencil_2_port_controller_U449_d)
);
assign op_hcompute_demosaicked_1_stencil_2_port_controller_U467_clk = clk;
affine_controller__U450 op_hcompute_demosaicked_1_stencil_2_port_controller_U467 (
    .clk(op_hcompute_demosaicked_1_stencil_2_port_controller_U467_clk),
    .valid(op_hcompute_demosaicked_1_stencil_2_port_controller_U467_valid),
    .d(op_hcompute_demosaicked_1_stencil_2_port_controller_U467_d)
);
assign op_hcompute_demosaicked_1_stencil_2_port_controller_U485_clk = clk;
affine_controller__U468 op_hcompute_demosaicked_1_stencil_2_port_controller_U485 (
    .clk(op_hcompute_demosaicked_1_stencil_2_port_controller_U485_clk),
    .valid(op_hcompute_demosaicked_1_stencil_2_port_controller_U485_valid),
    .d(op_hcompute_demosaicked_1_stencil_2_port_controller_U485_d)
);
assign op_hcompute_demosaicked_1_stencil_2_port_controller_U503_clk = clk;
affine_controller__U486 op_hcompute_demosaicked_1_stencil_2_port_controller_U503 (
    .clk(op_hcompute_demosaicked_1_stencil_2_port_controller_U503_clk),
    .valid(op_hcompute_demosaicked_1_stencil_2_port_controller_U503_valid),
    .d(op_hcompute_demosaicked_1_stencil_2_port_controller_U503_d)
);
assign op_hcompute_demosaicked_1_stencil_2_port_controller_U521_clk = clk;
affine_controller__U504 op_hcompute_demosaicked_1_stencil_2_port_controller_U521 (
    .clk(op_hcompute_demosaicked_1_stencil_2_port_controller_U521_clk),
    .valid(op_hcompute_demosaicked_1_stencil_2_port_controller_U521_valid),
    .d(op_hcompute_demosaicked_1_stencil_2_port_controller_U521_d)
);
assign op_hcompute_demosaicked_1_stencil_2_port_controller_U539_clk = clk;
affine_controller__U522 op_hcompute_demosaicked_1_stencil_2_port_controller_U539 (
    .clk(op_hcompute_demosaicked_1_stencil_2_port_controller_U539_clk),
    .valid(op_hcompute_demosaicked_1_stencil_2_port_controller_U539_valid),
    .d(op_hcompute_demosaicked_1_stencil_2_port_controller_U539_d)
);
assign op_hcompute_demosaicked_1_stencil_2_read_start = op_hcompute_demosaicked_1_stencil_2_port_controller_valid;
assign op_hcompute_demosaicked_1_stencil_2_write_start = op_hcompute_demosaicked_1_stencil_2_exe_start_out;
assign op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_clk = clk;
assign op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_in[2] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[2];
assign op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_in[1] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[1];
assign op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_in[0] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[0];
array_delay_U1629 op_hcompute_demosaicked_1_stencil_2_write_start_control_vars (
    .clk(op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_clk),
    .in(op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_in),
    .out(op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_out)
);
assign op_hcompute_demosaicked_1_stencil_exe_start_clk = clk;
assign op_hcompute_demosaicked_1_stencil_exe_start_in = op_hcompute_demosaicked_1_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_demosaicked_1_stencil_exe_start (
    .clk(op_hcompute_demosaicked_1_stencil_exe_start_clk),
    .in(op_hcompute_demosaicked_1_stencil_exe_start_in),
    .out(op_hcompute_demosaicked_1_stencil_exe_start_out)
);
assign op_hcompute_demosaicked_1_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_demosaicked_1_stencil_exe_start_control_vars_in[2] = op_hcompute_demosaicked_1_stencil_port_controller_d[2];
assign op_hcompute_demosaicked_1_stencil_exe_start_control_vars_in[1] = op_hcompute_demosaicked_1_stencil_port_controller_d[1];
assign op_hcompute_demosaicked_1_stencil_exe_start_control_vars_in[0] = op_hcompute_demosaicked_1_stencil_port_controller_d[0];
array_delay_U1583 op_hcompute_demosaicked_1_stencil_exe_start_control_vars (
    .clk(op_hcompute_demosaicked_1_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_demosaicked_1_stencil_exe_start_control_vars_in),
    .out(op_hcompute_demosaicked_1_stencil_exe_start_control_vars_out)
);
assign op_hcompute_demosaicked_1_stencil_port_controller_clk = clk;
affine_controller__U1562 op_hcompute_demosaicked_1_stencil_port_controller (
    .clk(op_hcompute_demosaicked_1_stencil_port_controller_clk),
    .valid(op_hcompute_demosaicked_1_stencil_port_controller_valid),
    .d(op_hcompute_demosaicked_1_stencil_port_controller_d)
);
assign op_hcompute_demosaicked_1_stencil_port_controller_U233_clk = clk;
affine_controller__U216 op_hcompute_demosaicked_1_stencil_port_controller_U233 (
    .clk(op_hcompute_demosaicked_1_stencil_port_controller_U233_clk),
    .valid(op_hcompute_demosaicked_1_stencil_port_controller_U233_valid),
    .d(op_hcompute_demosaicked_1_stencil_port_controller_U233_d)
);
assign op_hcompute_demosaicked_1_stencil_port_controller_U251_clk = clk;
affine_controller__U234 op_hcompute_demosaicked_1_stencil_port_controller_U251 (
    .clk(op_hcompute_demosaicked_1_stencil_port_controller_U251_clk),
    .valid(op_hcompute_demosaicked_1_stencil_port_controller_U251_valid),
    .d(op_hcompute_demosaicked_1_stencil_port_controller_U251_d)
);
assign op_hcompute_demosaicked_1_stencil_port_controller_U269_clk = clk;
affine_controller__U252 op_hcompute_demosaicked_1_stencil_port_controller_U269 (
    .clk(op_hcompute_demosaicked_1_stencil_port_controller_U269_clk),
    .valid(op_hcompute_demosaicked_1_stencil_port_controller_U269_valid),
    .d(op_hcompute_demosaicked_1_stencil_port_controller_U269_d)
);
assign op_hcompute_demosaicked_1_stencil_port_controller_U287_clk = clk;
affine_controller__U270 op_hcompute_demosaicked_1_stencil_port_controller_U287 (
    .clk(op_hcompute_demosaicked_1_stencil_port_controller_U287_clk),
    .valid(op_hcompute_demosaicked_1_stencil_port_controller_U287_valid),
    .d(op_hcompute_demosaicked_1_stencil_port_controller_U287_d)
);
assign op_hcompute_demosaicked_1_stencil_port_controller_U305_clk = clk;
affine_controller__U288 op_hcompute_demosaicked_1_stencil_port_controller_U305 (
    .clk(op_hcompute_demosaicked_1_stencil_port_controller_U305_clk),
    .valid(op_hcompute_demosaicked_1_stencil_port_controller_U305_valid),
    .d(op_hcompute_demosaicked_1_stencil_port_controller_U305_d)
);
assign op_hcompute_demosaicked_1_stencil_port_controller_U323_clk = clk;
affine_controller__U306 op_hcompute_demosaicked_1_stencil_port_controller_U323 (
    .clk(op_hcompute_demosaicked_1_stencil_port_controller_U323_clk),
    .valid(op_hcompute_demosaicked_1_stencil_port_controller_U323_valid),
    .d(op_hcompute_demosaicked_1_stencil_port_controller_U323_d)
);
assign op_hcompute_demosaicked_1_stencil_read_start = op_hcompute_demosaicked_1_stencil_port_controller_valid;
assign op_hcompute_demosaicked_1_stencil_write_start = op_hcompute_demosaicked_1_stencil_exe_start_out;
assign op_hcompute_demosaicked_1_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_demosaicked_1_stencil_write_start_control_vars_in[2] = op_hcompute_demosaicked_1_stencil_port_controller_d[2];
assign op_hcompute_demosaicked_1_stencil_write_start_control_vars_in[1] = op_hcompute_demosaicked_1_stencil_port_controller_d[1];
assign op_hcompute_demosaicked_1_stencil_write_start_control_vars_in[0] = op_hcompute_demosaicked_1_stencil_port_controller_d[0];
array_delay_U1579 op_hcompute_demosaicked_1_stencil_write_start_control_vars (
    .clk(op_hcompute_demosaicked_1_stencil_write_start_control_vars_clk),
    .in(op_hcompute_demosaicked_1_stencil_write_start_control_vars_in),
    .out(op_hcompute_demosaicked_1_stencil_write_start_control_vars_out)
);
assign op_hcompute_denoised_1_stencil_clk = clk;
assign op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[4] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[4];
assign op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[3] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[3];
assign op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[2] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[2];
assign op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[1] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[1];
assign op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[0] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[0];
cu_op_hcompute_denoised_1_stencil op_hcompute_denoised_1_stencil (
    .clk(op_hcompute_denoised_1_stencil_clk),
    .hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read(op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read),
    .denoised_1_stencil_op_hcompute_denoised_1_stencil_write(op_hcompute_denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_write)
);
assign op_hcompute_denoised_1_stencil_exe_start_clk = clk;
assign op_hcompute_denoised_1_stencil_exe_start_in = op_hcompute_denoised_1_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_denoised_1_stencil_exe_start (
    .clk(op_hcompute_denoised_1_stencil_exe_start_clk),
    .in(op_hcompute_denoised_1_stencil_exe_start_in),
    .out(op_hcompute_denoised_1_stencil_exe_start_out)
);
assign op_hcompute_denoised_1_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_denoised_1_stencil_exe_start_control_vars_in[2] = op_hcompute_denoised_1_stencil_port_controller_d[2];
assign op_hcompute_denoised_1_stencil_exe_start_control_vars_in[1] = op_hcompute_denoised_1_stencil_port_controller_d[1];
assign op_hcompute_denoised_1_stencil_exe_start_control_vars_in[0] = op_hcompute_denoised_1_stencil_port_controller_d[0];
array_delay_U1558 op_hcompute_denoised_1_stencil_exe_start_control_vars (
    .clk(op_hcompute_denoised_1_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_denoised_1_stencil_exe_start_control_vars_in),
    .out(op_hcompute_denoised_1_stencil_exe_start_control_vars_out)
);
assign op_hcompute_denoised_1_stencil_port_controller_clk = clk;
affine_controller__U1537 op_hcompute_denoised_1_stencil_port_controller (
    .clk(op_hcompute_denoised_1_stencil_port_controller_clk),
    .valid(op_hcompute_denoised_1_stencil_port_controller_valid),
    .d(op_hcompute_denoised_1_stencil_port_controller_d)
);
assign op_hcompute_denoised_1_stencil_port_controller_U125_clk = clk;
affine_controller__U108 op_hcompute_denoised_1_stencil_port_controller_U125 (
    .clk(op_hcompute_denoised_1_stencil_port_controller_U125_clk),
    .valid(op_hcompute_denoised_1_stencil_port_controller_U125_valid),
    .d(op_hcompute_denoised_1_stencil_port_controller_U125_d)
);
assign op_hcompute_denoised_1_stencil_port_controller_U143_clk = clk;
affine_controller__U126 op_hcompute_denoised_1_stencil_port_controller_U143 (
    .clk(op_hcompute_denoised_1_stencil_port_controller_U143_clk),
    .valid(op_hcompute_denoised_1_stencil_port_controller_U143_valid),
    .d(op_hcompute_denoised_1_stencil_port_controller_U143_d)
);
assign op_hcompute_denoised_1_stencil_port_controller_U161_clk = clk;
affine_controller__U144 op_hcompute_denoised_1_stencil_port_controller_U161 (
    .clk(op_hcompute_denoised_1_stencil_port_controller_U161_clk),
    .valid(op_hcompute_denoised_1_stencil_port_controller_U161_valid),
    .d(op_hcompute_denoised_1_stencil_port_controller_U161_d)
);
assign op_hcompute_denoised_1_stencil_port_controller_U179_clk = clk;
affine_controller__U162 op_hcompute_denoised_1_stencil_port_controller_U179 (
    .clk(op_hcompute_denoised_1_stencil_port_controller_U179_clk),
    .valid(op_hcompute_denoised_1_stencil_port_controller_U179_valid),
    .d(op_hcompute_denoised_1_stencil_port_controller_U179_d)
);
assign op_hcompute_denoised_1_stencil_port_controller_U197_clk = clk;
affine_controller__U180 op_hcompute_denoised_1_stencil_port_controller_U197 (
    .clk(op_hcompute_denoised_1_stencil_port_controller_U197_clk),
    .valid(op_hcompute_denoised_1_stencil_port_controller_U197_valid),
    .d(op_hcompute_denoised_1_stencil_port_controller_U197_d)
);
assign op_hcompute_denoised_1_stencil_port_controller_U215_clk = clk;
affine_controller__U198 op_hcompute_denoised_1_stencil_port_controller_U215 (
    .clk(op_hcompute_denoised_1_stencil_port_controller_U215_clk),
    .valid(op_hcompute_denoised_1_stencil_port_controller_U215_valid),
    .d(op_hcompute_denoised_1_stencil_port_controller_U215_d)
);
assign op_hcompute_denoised_1_stencil_read_start = op_hcompute_denoised_1_stencil_port_controller_valid;
assign op_hcompute_denoised_1_stencil_write_start = op_hcompute_denoised_1_stencil_exe_start_out;
assign op_hcompute_denoised_1_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_denoised_1_stencil_write_start_control_vars_in[2] = op_hcompute_denoised_1_stencil_port_controller_d[2];
assign op_hcompute_denoised_1_stencil_write_start_control_vars_in[1] = op_hcompute_denoised_1_stencil_port_controller_d[1];
assign op_hcompute_denoised_1_stencil_write_start_control_vars_in[0] = op_hcompute_denoised_1_stencil_port_controller_d[0];
array_delay_U1554 op_hcompute_denoised_1_stencil_write_start_control_vars (
    .clk(op_hcompute_denoised_1_stencil_write_start_control_vars_clk),
    .in(op_hcompute_denoised_1_stencil_write_start_control_vars_in),
    .out(op_hcompute_denoised_1_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] = _U2036_out;
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
array_delay_U1533 op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk = clk;
affine_controller__U1512 op_hcompute_hw_input_global_wrapper_stencil_port_controller (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_clk = clk;
affine_controller__U90 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_clk = clk;
affine_controller__U0 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_clk = clk;
affine_controller__U18 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_clk = clk;
affine_controller__U36 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_clk = clk;
affine_controller__U54 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_clk = clk;
affine_controller__U72 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_read_start = op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start = op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U1529 op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_curved_stencil_op_hcompute_hw_output_stencil_read[0] = curved_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .curved_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_curved_stencil_op_hcompute_hw_output_stencil_read),
    .hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write)
);
assign op_hcompute_hw_output_stencil_1_clk = clk;
assign op_hcompute_hw_output_stencil_1_curved_stencil_op_hcompute_hw_output_stencil_1_read[0] = curved_stencil_op_hcompute_hw_output_stencil_1_read[0];
cu_op_hcompute_hw_output_stencil_1 op_hcompute_hw_output_stencil_1 (
    .clk(op_hcompute_hw_output_stencil_1_clk),
    .curved_stencil_op_hcompute_hw_output_stencil_1_read(op_hcompute_hw_output_stencil_1_curved_stencil_op_hcompute_hw_output_stencil_1_read),
    .hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write(op_hcompute_hw_output_stencil_1_hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write)
);
assign op_hcompute_hw_output_stencil_1_exe_start_clk = clk;
assign op_hcompute_hw_output_stencil_1_exe_start_in = op_hcompute_hw_output_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_output_stencil_1_exe_start (
    .clk(op_hcompute_hw_output_stencil_1_exe_start_clk),
    .in(op_hcompute_hw_output_stencil_1_exe_start_in),
    .out(op_hcompute_hw_output_stencil_1_exe_start_out)
);
assign op_hcompute_hw_output_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_1_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_1_port_controller_d[2];
assign op_hcompute_hw_output_stencil_1_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_1_port_controller_d[1];
assign op_hcompute_hw_output_stencil_1_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_1_port_controller_d[0];
array_delay_U1836 op_hcompute_hw_output_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_1_port_controller_clk = clk;
affine_controller__U1815 op_hcompute_hw_output_stencil_1_port_controller (
    .clk(op_hcompute_hw_output_stencil_1_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_1_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_1_port_controller_d)
);
assign op_hcompute_hw_output_stencil_1_port_controller_U1313_clk = clk;
affine_controller__U1296 op_hcompute_hw_output_stencil_1_port_controller_U1313 (
    .clk(op_hcompute_hw_output_stencil_1_port_controller_U1313_clk),
    .valid(op_hcompute_hw_output_stencil_1_port_controller_U1313_valid),
    .d(op_hcompute_hw_output_stencil_1_port_controller_U1313_d)
);
assign op_hcompute_hw_output_stencil_1_port_controller_U1331_clk = clk;
affine_controller__U1314 op_hcompute_hw_output_stencil_1_port_controller_U1331 (
    .clk(op_hcompute_hw_output_stencil_1_port_controller_U1331_clk),
    .valid(op_hcompute_hw_output_stencil_1_port_controller_U1331_valid),
    .d(op_hcompute_hw_output_stencil_1_port_controller_U1331_d)
);
assign op_hcompute_hw_output_stencil_1_port_controller_U1349_clk = clk;
affine_controller__U1332 op_hcompute_hw_output_stencil_1_port_controller_U1349 (
    .clk(op_hcompute_hw_output_stencil_1_port_controller_U1349_clk),
    .valid(op_hcompute_hw_output_stencil_1_port_controller_U1349_valid),
    .d(op_hcompute_hw_output_stencil_1_port_controller_U1349_d)
);
assign op_hcompute_hw_output_stencil_1_port_controller_U1367_clk = clk;
affine_controller__U1350 op_hcompute_hw_output_stencil_1_port_controller_U1367 (
    .clk(op_hcompute_hw_output_stencil_1_port_controller_U1367_clk),
    .valid(op_hcompute_hw_output_stencil_1_port_controller_U1367_valid),
    .d(op_hcompute_hw_output_stencil_1_port_controller_U1367_d)
);
assign op_hcompute_hw_output_stencil_1_port_controller_U1385_clk = clk;
affine_controller__U1368 op_hcompute_hw_output_stencil_1_port_controller_U1385 (
    .clk(op_hcompute_hw_output_stencil_1_port_controller_U1385_clk),
    .valid(op_hcompute_hw_output_stencil_1_port_controller_U1385_valid),
    .d(op_hcompute_hw_output_stencil_1_port_controller_U1385_d)
);
assign op_hcompute_hw_output_stencil_1_port_controller_U1403_clk = clk;
affine_controller__U1386 op_hcompute_hw_output_stencil_1_port_controller_U1403 (
    .clk(op_hcompute_hw_output_stencil_1_port_controller_U1403_clk),
    .valid(op_hcompute_hw_output_stencil_1_port_controller_U1403_valid),
    .d(op_hcompute_hw_output_stencil_1_port_controller_U1403_d)
);
assign op_hcompute_hw_output_stencil_1_read_start = op_hcompute_hw_output_stencil_1_port_controller_valid;
assign op_hcompute_hw_output_stencil_1_write_start = op_hcompute_hw_output_stencil_1_exe_start_out;
assign op_hcompute_hw_output_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_1_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_1_port_controller_d[2];
assign op_hcompute_hw_output_stencil_1_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_1_port_controller_d[1];
assign op_hcompute_hw_output_stencil_1_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_1_port_controller_d[0];
array_delay_U1832 op_hcompute_hw_output_stencil_1_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_2_clk = clk;
assign op_hcompute_hw_output_stencil_2_curved_stencil_op_hcompute_hw_output_stencil_2_read[0] = curved_stencil_op_hcompute_hw_output_stencil_2_read[0];
cu_op_hcompute_hw_output_stencil_2 op_hcompute_hw_output_stencil_2 (
    .clk(op_hcompute_hw_output_stencil_2_clk),
    .curved_stencil_op_hcompute_hw_output_stencil_2_read(op_hcompute_hw_output_stencil_2_curved_stencil_op_hcompute_hw_output_stencil_2_read),
    .hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write(op_hcompute_hw_output_stencil_2_hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write)
);
assign op_hcompute_hw_output_stencil_2_exe_start_clk = clk;
assign op_hcompute_hw_output_stencil_2_exe_start_in = op_hcompute_hw_output_stencil_2_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_output_stencil_2_exe_start (
    .clk(op_hcompute_hw_output_stencil_2_exe_start_clk),
    .in(op_hcompute_hw_output_stencil_2_exe_start_in),
    .out(op_hcompute_hw_output_stencil_2_exe_start_out)
);
assign op_hcompute_hw_output_stencil_2_exe_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_2_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_2_port_controller_d[2];
assign op_hcompute_hw_output_stencil_2_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_2_port_controller_d[1];
assign op_hcompute_hw_output_stencil_2_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_2_port_controller_d[0];
array_delay_U1861 op_hcompute_hw_output_stencil_2_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_2_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_2_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_2_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_2_port_controller_clk = clk;
affine_controller__U1840 op_hcompute_hw_output_stencil_2_port_controller (
    .clk(op_hcompute_hw_output_stencil_2_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_2_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_2_port_controller_d)
);
assign op_hcompute_hw_output_stencil_2_port_controller_U1421_clk = clk;
affine_controller__U1404 op_hcompute_hw_output_stencil_2_port_controller_U1421 (
    .clk(op_hcompute_hw_output_stencil_2_port_controller_U1421_clk),
    .valid(op_hcompute_hw_output_stencil_2_port_controller_U1421_valid),
    .d(op_hcompute_hw_output_stencil_2_port_controller_U1421_d)
);
assign op_hcompute_hw_output_stencil_2_port_controller_U1439_clk = clk;
affine_controller__U1422 op_hcompute_hw_output_stencil_2_port_controller_U1439 (
    .clk(op_hcompute_hw_output_stencil_2_port_controller_U1439_clk),
    .valid(op_hcompute_hw_output_stencil_2_port_controller_U1439_valid),
    .d(op_hcompute_hw_output_stencil_2_port_controller_U1439_d)
);
assign op_hcompute_hw_output_stencil_2_port_controller_U1457_clk = clk;
affine_controller__U1440 op_hcompute_hw_output_stencil_2_port_controller_U1457 (
    .clk(op_hcompute_hw_output_stencil_2_port_controller_U1457_clk),
    .valid(op_hcompute_hw_output_stencil_2_port_controller_U1457_valid),
    .d(op_hcompute_hw_output_stencil_2_port_controller_U1457_d)
);
assign op_hcompute_hw_output_stencil_2_port_controller_U1475_clk = clk;
affine_controller__U1458 op_hcompute_hw_output_stencil_2_port_controller_U1475 (
    .clk(op_hcompute_hw_output_stencil_2_port_controller_U1475_clk),
    .valid(op_hcompute_hw_output_stencil_2_port_controller_U1475_valid),
    .d(op_hcompute_hw_output_stencil_2_port_controller_U1475_d)
);
assign op_hcompute_hw_output_stencil_2_port_controller_U1493_clk = clk;
affine_controller__U1476 op_hcompute_hw_output_stencil_2_port_controller_U1493 (
    .clk(op_hcompute_hw_output_stencil_2_port_controller_U1493_clk),
    .valid(op_hcompute_hw_output_stencil_2_port_controller_U1493_valid),
    .d(op_hcompute_hw_output_stencil_2_port_controller_U1493_d)
);
assign op_hcompute_hw_output_stencil_2_port_controller_U1511_clk = clk;
affine_controller__U1494 op_hcompute_hw_output_stencil_2_port_controller_U1511 (
    .clk(op_hcompute_hw_output_stencil_2_port_controller_U1511_clk),
    .valid(op_hcompute_hw_output_stencil_2_port_controller_U1511_valid),
    .d(op_hcompute_hw_output_stencil_2_port_controller_U1511_d)
);
assign op_hcompute_hw_output_stencil_2_read_start = op_hcompute_hw_output_stencil_2_port_controller_valid;
assign op_hcompute_hw_output_stencil_2_write_start = op_hcompute_hw_output_stencil_2_exe_start_out;
assign op_hcompute_hw_output_stencil_2_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_2_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_2_port_controller_d[2];
assign op_hcompute_hw_output_stencil_2_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_2_port_controller_d[1];
assign op_hcompute_hw_output_stencil_2_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_2_port_controller_d[0];
array_delay_U1857 op_hcompute_hw_output_stencil_2_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_2_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_2_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_2_write_start_control_vars_out)
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
array_delay_U1811 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U1790 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1205_clk = clk;
affine_controller__U1188 op_hcompute_hw_output_stencil_port_controller_U1205 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1205_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1205_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1205_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1223_clk = clk;
affine_controller__U1206 op_hcompute_hw_output_stencil_port_controller_U1223 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1223_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1223_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1223_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1241_clk = clk;
affine_controller__U1224 op_hcompute_hw_output_stencil_port_controller_U1241 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1241_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1241_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1241_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1259_clk = clk;
affine_controller__U1242 op_hcompute_hw_output_stencil_port_controller_U1259 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1259_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1259_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1259_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1277_clk = clk;
affine_controller__U1260 op_hcompute_hw_output_stencil_port_controller_U1277 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1277_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1277_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1277_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U1295_clk = clk;
affine_controller__U1278 op_hcompute_hw_output_stencil_port_controller_U1295 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U1295_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U1295_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U1295_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start = op_hcompute_hw_output_stencil_exe_start_out;
assign op_hcompute_hw_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U1807 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid = op_hcompute_hw_input_global_wrapper_stencil_read_start;
assign hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write[0];
assign hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write_en = op_hcompute_hw_output_stencil_1_write_start;
assign hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write[0] = op_hcompute_hw_output_stencil_1_hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write[0];
assign hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write_en = op_hcompute_hw_output_stencil_2_write_start;
assign hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write[0] = op_hcompute_hw_output_stencil_2_hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write[0];
endmodule

