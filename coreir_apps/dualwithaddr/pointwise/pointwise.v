// Module `mult_stencil_ub` defined externally
// Module `hw_input_global_wrapper_stencil_ub` defined externally
module op_hcompute_mult_stencil_write_start_pt__U383 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_mult_stencil_write_start_control_vars_pt__U384 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_mult_stencil_exe_start_control_vars_pt__U390 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_output_stencil_write_start_pt__U425 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_write_start_control_vars_pt__U426 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_output_stencil_exe_start_control_vars_pt__U432 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_write_start_pt__U341 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_pt__U342 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_pt__U348 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_mult_stencil [0:0]
);
assign out_hw_output_stencil = in0_mult_stencil[0];
endmodule

module hcompute_hw_input_global_wrapper_stencil (
    output [15:0] out_hw_input_global_wrapper_stencil,
    input [15:0] in0_hw_input_stencil [0:0]
);
assign out_hw_input_global_wrapper_stencil = in0_hw_input_stencil[0];
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] mult_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_mult_stencil [0:0];
assign inner_compute_in0_mult_stencil[0] = mult_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_mult_stencil(inner_compute_in0_mult_stencil)
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

module hcompute_mult_stencil (
    output [15:0] out_mult_stencil,
    input [15:0] in0_hw_input_global_wrapper_stencil [0:0]
);
assign out_mult_stencil = 16'(in0_hw_input_global_wrapper_stencil[0] * 16'h0002);
endmodule

module cu_op_hcompute_mult_stencil (
    input clk,
    input [15:0] hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read [0:0],
    output [15:0] mult_stencil_op_hcompute_mult_stencil_write [0:0]
);
wire [15:0] inner_compute_out_mult_stencil;
wire [15:0] inner_compute_in0_hw_input_global_wrapper_stencil [0:0];
assign inner_compute_in0_hw_input_global_wrapper_stencil[0] = hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read[0];
hcompute_mult_stencil inner_compute (
    .out_mult_stencil(inner_compute_out_mult_stencil),
    .in0_hw_input_global_wrapper_stencil(inner_compute_in0_hw_input_global_wrapper_stencil)
);
assign mult_stencil_op_hcompute_mult_stencil_write[0] = inner_compute_out_mult_stencil;
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

module array_delay_U434 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U435_in;
wire _U435_clk;
wire [15:0] _U435_out;
wire [15:0] _U436_in;
wire _U436_clk;
wire [15:0] _U436_out;
wire [15:0] _U437_in;
wire _U437_clk;
wire [15:0] _U437_out;
assign _U435_in = in[0];
assign _U435_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U435 (
    .in(_U435_in),
    .clk(_U435_clk),
    .out(_U435_out)
);
assign _U436_in = in[1];
assign _U436_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U436 (
    .in(_U436_in),
    .clk(_U436_clk),
    .out(_U436_out)
);
assign _U437_in = in[2];
assign _U437_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U437 (
    .in(_U437_in),
    .clk(_U437_clk),
    .out(_U437_out)
);
assign out[2] = _U437_out;
assign out[1] = _U436_out;
assign out[0] = _U435_out;
endmodule

module array_delay_U428 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U429_in;
wire _U429_clk;
wire [15:0] _U429_out;
wire [15:0] _U430_in;
wire _U430_clk;
wire [15:0] _U430_out;
wire [15:0] _U431_in;
wire _U431_clk;
wire [15:0] _U431_out;
assign _U429_in = in[0];
assign _U429_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U429 (
    .in(_U429_in),
    .clk(_U429_clk),
    .out(_U429_out)
);
assign _U430_in = in[1];
assign _U430_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U430 (
    .in(_U430_in),
    .clk(_U430_clk),
    .out(_U430_out)
);
assign _U431_in = in[2];
assign _U431_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U431 (
    .in(_U431_in),
    .clk(_U431_clk),
    .out(_U431_out)
);
assign out[2] = _U431_out;
assign out[1] = _U430_out;
assign out[0] = _U429_out;
endmodule

module array_delay_U421 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U422_in;
wire _U422_clk;
wire [15:0] _U422_out;
wire [15:0] _U423_in;
wire _U423_clk;
wire [15:0] _U423_out;
wire [15:0] _U424_in;
wire _U424_clk;
wire [15:0] _U424_out;
assign _U422_in = in[0];
assign _U422_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U422 (
    .in(_U422_in),
    .clk(_U422_clk),
    .out(_U422_out)
);
assign _U423_in = in[1];
assign _U423_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U423 (
    .in(_U423_in),
    .clk(_U423_clk),
    .out(_U423_out)
);
assign _U424_in = in[2];
assign _U424_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U424 (
    .in(_U424_in),
    .clk(_U424_clk),
    .out(_U424_out)
);
assign out[2] = _U424_out;
assign out[1] = _U423_out;
assign out[0] = _U422_out;
endmodule

module array_delay_U415 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U416_in;
wire _U416_clk;
wire [15:0] _U416_out;
wire [15:0] _U417_in;
wire _U417_clk;
wire [15:0] _U417_out;
wire [15:0] _U418_in;
wire _U418_clk;
wire [15:0] _U418_out;
assign _U416_in = in[0];
assign _U416_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U416 (
    .in(_U416_in),
    .clk(_U416_clk),
    .out(_U416_out)
);
assign _U417_in = in[1];
assign _U417_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U417 (
    .in(_U417_in),
    .clk(_U417_clk),
    .out(_U417_out)
);
assign _U418_in = in[2];
assign _U418_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U418 (
    .in(_U418_in),
    .clk(_U418_clk),
    .out(_U418_out)
);
assign out[2] = _U418_out;
assign out[1] = _U417_out;
assign out[0] = _U416_out;
endmodule

module array_delay_U392 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U393_in;
wire _U393_clk;
wire [15:0] _U393_out;
wire [15:0] _U394_in;
wire _U394_clk;
wire [15:0] _U394_out;
wire [15:0] _U395_in;
wire _U395_clk;
wire [15:0] _U395_out;
assign _U393_in = in[0];
assign _U393_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U393 (
    .in(_U393_in),
    .clk(_U393_clk),
    .out(_U393_out)
);
assign _U394_in = in[1];
assign _U394_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U394 (
    .in(_U394_in),
    .clk(_U394_clk),
    .out(_U394_out)
);
assign _U395_in = in[2];
assign _U395_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U395 (
    .in(_U395_in),
    .clk(_U395_clk),
    .out(_U395_out)
);
assign out[2] = _U395_out;
assign out[1] = _U394_out;
assign out[0] = _U393_out;
endmodule

module array_delay_U386 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U387_in;
wire _U387_clk;
wire [15:0] _U387_out;
wire [15:0] _U388_in;
wire _U388_clk;
wire [15:0] _U388_out;
wire [15:0] _U389_in;
wire _U389_clk;
wire [15:0] _U389_out;
assign _U387_in = in[0];
assign _U387_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U387 (
    .in(_U387_in),
    .clk(_U387_clk),
    .out(_U387_out)
);
assign _U388_in = in[1];
assign _U388_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U388 (
    .in(_U388_in),
    .clk(_U388_clk),
    .out(_U388_out)
);
assign _U389_in = in[2];
assign _U389_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U389 (
    .in(_U389_in),
    .clk(_U389_clk),
    .out(_U389_out)
);
assign out[2] = _U389_out;
assign out[1] = _U388_out;
assign out[0] = _U387_out;
endmodule

module array_delay_U379 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U380_in;
wire _U380_clk;
wire [15:0] _U380_out;
wire [15:0] _U381_in;
wire _U381_clk;
wire [15:0] _U381_out;
wire [15:0] _U382_in;
wire _U382_clk;
wire [15:0] _U382_out;
assign _U380_in = in[0];
assign _U380_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U380 (
    .in(_U380_in),
    .clk(_U380_clk),
    .out(_U380_out)
);
assign _U381_in = in[1];
assign _U381_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U381 (
    .in(_U381_in),
    .clk(_U381_clk),
    .out(_U381_out)
);
assign _U382_in = in[2];
assign _U382_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U382 (
    .in(_U382_in),
    .clk(_U382_clk),
    .out(_U382_out)
);
assign out[2] = _U382_out;
assign out[1] = _U381_out;
assign out[0] = _U380_out;
endmodule

module array_delay_U373 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U374_in;
wire _U374_clk;
wire [15:0] _U374_out;
wire [15:0] _U375_in;
wire _U375_clk;
wire [15:0] _U375_out;
wire [15:0] _U376_in;
wire _U376_clk;
wire [15:0] _U376_out;
assign _U374_in = in[0];
assign _U374_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U374 (
    .in(_U374_in),
    .clk(_U374_clk),
    .out(_U374_out)
);
assign _U375_in = in[1];
assign _U375_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U375 (
    .in(_U375_in),
    .clk(_U375_clk),
    .out(_U375_out)
);
assign _U376_in = in[2];
assign _U376_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U376 (
    .in(_U376_in),
    .clk(_U376_clk),
    .out(_U376_out)
);
assign out[2] = _U376_out;
assign out[1] = _U375_out;
assign out[0] = _U374_out;
endmodule

module array_delay_U350 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U351_in;
wire _U351_clk;
wire [15:0] _U351_out;
wire [15:0] _U352_in;
wire _U352_clk;
wire [15:0] _U352_out;
wire [15:0] _U353_in;
wire _U353_clk;
wire [15:0] _U353_out;
assign _U351_in = in[0];
assign _U351_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U351 (
    .in(_U351_in),
    .clk(_U351_clk),
    .out(_U351_out)
);
assign _U352_in = in[1];
assign _U352_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U352 (
    .in(_U352_in),
    .clk(_U352_clk),
    .out(_U352_out)
);
assign _U353_in = in[2];
assign _U353_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U353 (
    .in(_U353_in),
    .clk(_U353_clk),
    .out(_U353_out)
);
assign out[2] = _U353_out;
assign out[1] = _U352_out;
assign out[0] = _U351_out;
endmodule

module array_delay_U344 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U345_in;
wire _U345_clk;
wire [15:0] _U345_out;
wire [15:0] _U346_in;
wire _U346_clk;
wire [15:0] _U346_out;
wire [15:0] _U347_in;
wire _U347_clk;
wire [15:0] _U347_out;
assign _U345_in = in[0];
assign _U345_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U345 (
    .in(_U345_in),
    .clk(_U345_clk),
    .out(_U345_out)
);
assign _U346_in = in[1];
assign _U346_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U346 (
    .in(_U346_in),
    .clk(_U346_clk),
    .out(_U346_out)
);
assign _U347_in = in[2];
assign _U347_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U347 (
    .in(_U347_in),
    .clk(_U347_clk),
    .out(_U347_out)
);
assign out[2] = _U347_out;
assign out[1] = _U346_out;
assign out[0] = _U345_out;
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

module aff__U397 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
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

module aff__U355 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0004);
endmodule

module affine_controller__U354 (
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
aff__U355 affine_func (
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

module aff__U325 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
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

module aff__U307 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
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

module aff__U289 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
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

module aff__U271 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
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

module aff__U253 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
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

module aff__U235 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
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

module aff__U217 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0007);
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

module aff__U199 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0005);
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

module aff__U181 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0004);
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

module aff__U163 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0004);
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

module aff__U145 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0004);
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

module aff__U127 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0004);
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

module aff__U109 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0003);
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

module pointwise (
    input clk,
    input rst_n,
    input flush,
    output hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] _U438_in;
wire _U438_clk;
wire [15:0] _U438_out;
wire arr__U343_clk;
wire [15:0] arr__U343_in [2:0];
wire [15:0] arr__U343_out [2:0];
wire arr__U349_clk;
wire [15:0] arr__U349_in [2:0];
wire [15:0] arr__U349_out [2:0];
wire arr__U372_clk;
wire [15:0] arr__U372_in [2:0];
wire [15:0] arr__U372_out [2:0];
wire arr__U378_clk;
wire [15:0] arr__U378_in [2:0];
wire [15:0] arr__U378_out [2:0];
wire arr__U385_clk;
wire [15:0] arr__U385_in [2:0];
wire [15:0] arr__U385_out [2:0];
wire arr__U391_clk;
wire [15:0] arr__U391_in [2:0];
wire [15:0] arr__U391_out [2:0];
wire arr__U414_clk;
wire [15:0] arr__U414_in [2:0];
wire [15:0] arr__U414_out [2:0];
wire arr__U420_clk;
wire [15:0] arr__U420_in [2:0];
wire [15:0] arr__U420_out [2:0];
wire arr__U427_clk;
wire [15:0] arr__U427_in [2:0];
wire [15:0] arr__U427_out [2:0];
wire arr__U433_clk;
wire [15:0] arr__U433_in [2:0];
wire [15:0] arr__U433_out [2:0];
wire delay_reg__U371_clk;
wire delay_reg__U371_in;
wire delay_reg__U371_out;
wire delay_reg__U377_clk;
wire delay_reg__U377_in;
wire delay_reg__U377_out;
wire delay_reg__U413_clk;
wire delay_reg__U413_in;
wire delay_reg__U413_out;
wire delay_reg__U419_clk;
wire delay_reg__U419_in;
wire delay_reg__U419_out;
wire hw_input_global_wrapper_stencil_clk;
wire hw_input_global_wrapper_stencil_flush;
wire hw_input_global_wrapper_stencil_rst_n;
wire hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ren;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read [0:0];
wire mult_stencil_clk;
wire mult_stencil_flush;
wire mult_stencil_rst_n;
wire mult_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] mult_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire mult_stencil_op_hcompute_mult_stencil_write_wen;
wire [15:0] mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars [2:0];
wire [15:0] mult_stencil_op_hcompute_mult_stencil_write [0:0];
wire op_hcompute_hw_input_global_wrapper_stencil_clk;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_in;
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
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
wire op_hcompute_hw_input_global_wrapper_stencil_write_start_in;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start_out;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_mult_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_clk;
wire op_hcompute_hw_output_stencil_exe_start_in;
wire op_hcompute_hw_output_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_port_controller_clk;
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U233_clk;
wire op_hcompute_hw_output_stencil_port_controller_U233_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U233_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U251_clk;
wire op_hcompute_hw_output_stencil_port_controller_U251_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U251_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U269_clk;
wire op_hcompute_hw_output_stencil_port_controller_U269_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U269_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U287_clk;
wire op_hcompute_hw_output_stencil_port_controller_U287_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U287_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U305_clk;
wire op_hcompute_hw_output_stencil_port_controller_U305_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U305_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U323_clk;
wire op_hcompute_hw_output_stencil_port_controller_U323_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U323_d [2:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start_in;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_mult_stencil_clk;
wire [15:0] op_hcompute_mult_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read [0:0];
wire [15:0] op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write [0:0];
wire op_hcompute_mult_stencil_exe_start_clk;
wire op_hcompute_mult_stencil_exe_start_in;
wire op_hcompute_mult_stencil_exe_start_out;
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_mult_stencil_port_controller_clk;
wire op_hcompute_mult_stencil_port_controller_valid;
wire [15:0] op_hcompute_mult_stencil_port_controller_d [2:0];
wire op_hcompute_mult_stencil_port_controller_U125_clk;
wire op_hcompute_mult_stencil_port_controller_U125_valid;
wire [15:0] op_hcompute_mult_stencil_port_controller_U125_d [2:0];
wire op_hcompute_mult_stencil_port_controller_U143_clk;
wire op_hcompute_mult_stencil_port_controller_U143_valid;
wire [15:0] op_hcompute_mult_stencil_port_controller_U143_d [2:0];
wire op_hcompute_mult_stencil_port_controller_U161_clk;
wire op_hcompute_mult_stencil_port_controller_U161_valid;
wire [15:0] op_hcompute_mult_stencil_port_controller_U161_d [2:0];
wire op_hcompute_mult_stencil_port_controller_U179_clk;
wire op_hcompute_mult_stencil_port_controller_U179_valid;
wire [15:0] op_hcompute_mult_stencil_port_controller_U179_d [2:0];
wire op_hcompute_mult_stencil_port_controller_U197_clk;
wire op_hcompute_mult_stencil_port_controller_U197_valid;
wire [15:0] op_hcompute_mult_stencil_port_controller_U197_d [2:0];
wire op_hcompute_mult_stencil_port_controller_U215_clk;
wire op_hcompute_mult_stencil_port_controller_U215_valid;
wire [15:0] op_hcompute_mult_stencil_port_controller_U215_d [2:0];
wire op_hcompute_mult_stencil_read_start;
wire op_hcompute_mult_stencil_write_start_in;
wire op_hcompute_mult_stencil_write_start_out;
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_out [2:0];
assign _U438_in = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
assign _U438_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U438 (
    .in(_U438_in),
    .clk(_U438_clk),
    .out(_U438_out)
);
assign arr__U343_clk = clk;
assign arr__U343_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign arr__U343_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign arr__U343_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U344 arr__U343 (
    .clk(arr__U343_clk),
    .in(arr__U343_in),
    .out(arr__U343_out)
);
assign arr__U349_clk = clk;
assign arr__U349_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign arr__U349_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign arr__U349_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U350 arr__U349 (
    .clk(arr__U349_clk),
    .in(arr__U349_in),
    .out(arr__U349_out)
);
assign arr__U372_clk = clk;
assign arr__U372_in[2] = op_hcompute_mult_stencil_port_controller_d[2];
assign arr__U372_in[1] = op_hcompute_mult_stencil_port_controller_d[1];
assign arr__U372_in[0] = op_hcompute_mult_stencil_port_controller_d[0];
array_delay_U373 arr__U372 (
    .clk(arr__U372_clk),
    .in(arr__U372_in),
    .out(arr__U372_out)
);
assign arr__U378_clk = clk;
assign arr__U378_in[2] = arr__U372_out[2];
assign arr__U378_in[1] = arr__U372_out[1];
assign arr__U378_in[0] = arr__U372_out[0];
array_delay_U379 arr__U378 (
    .clk(arr__U378_clk),
    .in(arr__U378_in),
    .out(arr__U378_out)
);
assign arr__U385_clk = clk;
assign arr__U385_in[2] = op_hcompute_mult_stencil_port_controller_d[2];
assign arr__U385_in[1] = op_hcompute_mult_stencil_port_controller_d[1];
assign arr__U385_in[0] = op_hcompute_mult_stencil_port_controller_d[0];
array_delay_U386 arr__U385 (
    .clk(arr__U385_clk),
    .in(arr__U385_in),
    .out(arr__U385_out)
);
assign arr__U391_clk = clk;
assign arr__U391_in[2] = op_hcompute_mult_stencil_port_controller_d[2];
assign arr__U391_in[1] = op_hcompute_mult_stencil_port_controller_d[1];
assign arr__U391_in[0] = op_hcompute_mult_stencil_port_controller_d[0];
array_delay_U392 arr__U391 (
    .clk(arr__U391_clk),
    .in(arr__U391_in),
    .out(arr__U391_out)
);
assign arr__U414_clk = clk;
assign arr__U414_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign arr__U414_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign arr__U414_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U415 arr__U414 (
    .clk(arr__U414_clk),
    .in(arr__U414_in),
    .out(arr__U414_out)
);
assign arr__U420_clk = clk;
assign arr__U420_in[2] = arr__U414_out[2];
assign arr__U420_in[1] = arr__U414_out[1];
assign arr__U420_in[0] = arr__U414_out[0];
array_delay_U421 arr__U420 (
    .clk(arr__U420_clk),
    .in(arr__U420_in),
    .out(arr__U420_out)
);
assign arr__U427_clk = clk;
assign arr__U427_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign arr__U427_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign arr__U427_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U428 arr__U427 (
    .clk(arr__U427_clk),
    .in(arr__U427_in),
    .out(arr__U427_out)
);
assign arr__U433_clk = clk;
assign arr__U433_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign arr__U433_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign arr__U433_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U434 arr__U433 (
    .clk(arr__U433_clk),
    .in(arr__U433_in),
    .out(arr__U433_out)
);
assign delay_reg__U371_clk = clk;
assign delay_reg__U371_in = op_hcompute_mult_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U371 (
    .clk(delay_reg__U371_clk),
    .in(delay_reg__U371_in),
    .out(delay_reg__U371_out)
);
assign delay_reg__U377_clk = clk;
assign delay_reg__U377_in = delay_reg__U371_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U377 (
    .clk(delay_reg__U377_clk),
    .in(delay_reg__U377_in),
    .out(delay_reg__U377_out)
);
assign delay_reg__U413_clk = clk;
assign delay_reg__U413_in = op_hcompute_hw_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U413 (
    .clk(delay_reg__U413_clk),
    .in(delay_reg__U413_in),
    .out(delay_reg__U413_out)
);
assign delay_reg__U419_clk = clk;
assign delay_reg__U419_in = delay_reg__U413_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U419 (
    .clk(delay_reg__U419_clk),
    .in(delay_reg__U419_in),
    .out(delay_reg__U419_out)
);
assign hw_input_global_wrapper_stencil_clk = clk;
assign hw_input_global_wrapper_stencil_flush = flush;
assign hw_input_global_wrapper_stencil_rst_n = rst_n;
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen = op_hcompute_hw_input_global_wrapper_stencil_write_start_out;
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[2];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[1];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0];
assign hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ren = op_hcompute_mult_stencil_read_start;
assign hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars[2] = op_hcompute_mult_stencil_port_controller_d[2];
assign hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars[1] = op_hcompute_mult_stencil_port_controller_d[1];
assign hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars[0] = op_hcompute_mult_stencil_port_controller_d[0];
hw_input_global_wrapper_stencil_ub hw_input_global_wrapper_stencil (
    .clk(hw_input_global_wrapper_stencil_clk),
    .flush(hw_input_global_wrapper_stencil_flush),
    .rst_n(hw_input_global_wrapper_stencil_rst_n),
    .op_hcompute_hw_input_global_wrapper_stencil_write_wen(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen),
    .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_global_wrapper_stencil_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write),
    .op_hcompute_mult_stencil_read_ren(hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ren),
    .op_hcompute_mult_stencil_read_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ctrl_vars),
    .op_hcompute_mult_stencil_read(hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read)
);
assign mult_stencil_clk = clk;
assign mult_stencil_flush = flush;
assign mult_stencil_rst_n = rst_n;
assign mult_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
assign mult_stencil_op_hcompute_mult_stencil_write_wen = op_hcompute_mult_stencil_write_start_out;
assign mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars[2] = op_hcompute_mult_stencil_write_start_control_vars_out[2];
assign mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars[1] = op_hcompute_mult_stencil_write_start_control_vars_out[1];
assign mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars[0] = op_hcompute_mult_stencil_write_start_control_vars_out[0];
assign mult_stencil_op_hcompute_mult_stencil_write[0] = op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write[0];
mult_stencil_ub mult_stencil (
    .clk(mult_stencil_clk),
    .flush(mult_stencil_flush),
    .rst_n(mult_stencil_rst_n),
    .op_hcompute_hw_output_stencil_read_ren(mult_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(mult_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(mult_stencil_op_hcompute_hw_output_stencil_read),
    .op_hcompute_mult_stencil_write_wen(mult_stencil_op_hcompute_mult_stencil_write_wen),
    .op_hcompute_mult_stencil_write_ctrl_vars(mult_stencil_op_hcompute_mult_stencil_write_ctrl_vars),
    .op_hcompute_mult_stencil_write(mult_stencil_op_hcompute_mult_stencil_write)
);
assign op_hcompute_hw_input_global_wrapper_stencil_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] = _U438_out;
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
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[2] = arr__U349_out[2];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[1] = arr__U349_out[1];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[0] = arr__U349_out[0];
op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_pt__U348 op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars (
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk = clk;
affine_controller__U324 op_hcompute_hw_input_global_wrapper_stencil_port_controller (
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
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_in = op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
op_hcompute_hw_input_global_wrapper_stencil_write_start_pt__U341 op_hcompute_hw_input_global_wrapper_stencil_write_start (
    .in(op_hcompute_hw_input_global_wrapper_stencil_write_start_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[2] = arr__U343_out[2];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[1] = arr__U343_out[1];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[0] = arr__U343_out[0];
op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_pt__U342 op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars (
    .in(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_mult_stencil_op_hcompute_hw_output_stencil_read[0] = mult_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .mult_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_mult_stencil_op_hcompute_hw_output_stencil_read),
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
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = arr__U433_out[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = arr__U433_out[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = arr__U433_out[0];
op_hcompute_hw_output_stencil_exe_start_control_vars_pt__U432 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U396 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U233_clk = clk;
affine_controller__U216 op_hcompute_hw_output_stencil_port_controller_U233 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U233_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U233_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U233_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U251_clk = clk;
affine_controller__U234 op_hcompute_hw_output_stencil_port_controller_U251 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U251_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U251_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U251_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U269_clk = clk;
affine_controller__U252 op_hcompute_hw_output_stencil_port_controller_U269 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U269_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U269_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U269_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U287_clk = clk;
affine_controller__U270 op_hcompute_hw_output_stencil_port_controller_U287 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U287_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U287_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U287_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U305_clk = clk;
affine_controller__U288 op_hcompute_hw_output_stencil_port_controller_U305 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U305_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U305_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U305_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U323_clk = clk;
affine_controller__U306 op_hcompute_hw_output_stencil_port_controller_U323 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U323_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U323_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U323_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start_in = op_hcompute_hw_output_stencil_exe_start_out;
op_hcompute_hw_output_stencil_write_start_pt__U425 op_hcompute_hw_output_stencil_write_start (
    .in(op_hcompute_hw_output_stencil_write_start_in),
    .out(hw_output_stencil_op_hcompute_hw_output_stencil_write_en)
);
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = arr__U427_out[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = arr__U427_out[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = arr__U427_out[0];
op_hcompute_hw_output_stencil_write_start_control_vars_pt__U426 op_hcompute_hw_output_stencil_write_start_control_vars (
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign op_hcompute_mult_stencil_clk = clk;
assign op_hcompute_mult_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read[0] = hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read[0];
cu_op_hcompute_mult_stencil op_hcompute_mult_stencil (
    .clk(op_hcompute_mult_stencil_clk),
    .hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read(op_hcompute_mult_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read),
    .mult_stencil_op_hcompute_mult_stencil_write(op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write)
);
assign op_hcompute_mult_stencil_exe_start_clk = clk;
assign op_hcompute_mult_stencil_exe_start_in = op_hcompute_mult_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_mult_stencil_exe_start (
    .clk(op_hcompute_mult_stencil_exe_start_clk),
    .in(op_hcompute_mult_stencil_exe_start_in),
    .out(op_hcompute_mult_stencil_exe_start_out)
);
assign op_hcompute_mult_stencil_exe_start_control_vars_in[2] = arr__U391_out[2];
assign op_hcompute_mult_stencil_exe_start_control_vars_in[1] = arr__U391_out[1];
assign op_hcompute_mult_stencil_exe_start_control_vars_in[0] = arr__U391_out[0];
op_hcompute_mult_stencil_exe_start_control_vars_pt__U390 op_hcompute_mult_stencil_exe_start_control_vars (
    .in(op_hcompute_mult_stencil_exe_start_control_vars_in),
    .out(op_hcompute_mult_stencil_exe_start_control_vars_out)
);
assign op_hcompute_mult_stencil_port_controller_clk = clk;
affine_controller__U354 op_hcompute_mult_stencil_port_controller (
    .clk(op_hcompute_mult_stencil_port_controller_clk),
    .valid(op_hcompute_mult_stencil_port_controller_valid),
    .d(op_hcompute_mult_stencil_port_controller_d)
);
assign op_hcompute_mult_stencil_port_controller_U125_clk = clk;
affine_controller__U108 op_hcompute_mult_stencil_port_controller_U125 (
    .clk(op_hcompute_mult_stencil_port_controller_U125_clk),
    .valid(op_hcompute_mult_stencil_port_controller_U125_valid),
    .d(op_hcompute_mult_stencil_port_controller_U125_d)
);
assign op_hcompute_mult_stencil_port_controller_U143_clk = clk;
affine_controller__U126 op_hcompute_mult_stencil_port_controller_U143 (
    .clk(op_hcompute_mult_stencil_port_controller_U143_clk),
    .valid(op_hcompute_mult_stencil_port_controller_U143_valid),
    .d(op_hcompute_mult_stencil_port_controller_U143_d)
);
assign op_hcompute_mult_stencil_port_controller_U161_clk = clk;
affine_controller__U144 op_hcompute_mult_stencil_port_controller_U161 (
    .clk(op_hcompute_mult_stencil_port_controller_U161_clk),
    .valid(op_hcompute_mult_stencil_port_controller_U161_valid),
    .d(op_hcompute_mult_stencil_port_controller_U161_d)
);
assign op_hcompute_mult_stencil_port_controller_U179_clk = clk;
affine_controller__U162 op_hcompute_mult_stencil_port_controller_U179 (
    .clk(op_hcompute_mult_stencil_port_controller_U179_clk),
    .valid(op_hcompute_mult_stencil_port_controller_U179_valid),
    .d(op_hcompute_mult_stencil_port_controller_U179_d)
);
assign op_hcompute_mult_stencil_port_controller_U197_clk = clk;
affine_controller__U180 op_hcompute_mult_stencil_port_controller_U197 (
    .clk(op_hcompute_mult_stencil_port_controller_U197_clk),
    .valid(op_hcompute_mult_stencil_port_controller_U197_valid),
    .d(op_hcompute_mult_stencil_port_controller_U197_d)
);
assign op_hcompute_mult_stencil_port_controller_U215_clk = clk;
affine_controller__U198 op_hcompute_mult_stencil_port_controller_U215 (
    .clk(op_hcompute_mult_stencil_port_controller_U215_clk),
    .valid(op_hcompute_mult_stencil_port_controller_U215_valid),
    .d(op_hcompute_mult_stencil_port_controller_U215_d)
);
assign op_hcompute_mult_stencil_read_start = op_hcompute_mult_stencil_port_controller_valid;
assign op_hcompute_mult_stencil_write_start_in = op_hcompute_mult_stencil_exe_start_out;
op_hcompute_mult_stencil_write_start_pt__U383 op_hcompute_mult_stencil_write_start (
    .in(op_hcompute_mult_stencil_write_start_in),
    .out(op_hcompute_mult_stencil_write_start_out)
);
assign op_hcompute_mult_stencil_write_start_control_vars_in[2] = arr__U385_out[2];
assign op_hcompute_mult_stencil_write_start_control_vars_in[1] = arr__U385_out[1];
assign op_hcompute_mult_stencil_write_start_control_vars_in[0] = arr__U385_out[0];
op_hcompute_mult_stencil_write_start_control_vars_pt__U384 op_hcompute_mult_stencil_write_start_control_vars (
    .in(op_hcompute_mult_stencil_write_start_control_vars_in),
    .out(op_hcompute_mult_stencil_write_start_control_vars_out)
);
assign hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid = op_hcompute_hw_input_global_wrapper_stencil_read_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
endmodule

