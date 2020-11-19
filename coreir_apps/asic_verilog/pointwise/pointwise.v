// Module `mult_stencil_ub` defined externally
// Module `hw_input_global_wrapper_stencil_ub` defined externally
// Module `affine_controller__U7` defined externally
// Module `affine_controller__U44` defined externally
// Module `affine_controller__U0` defined externally
module op_hcompute_mult_stencil_write_start_pt__U24 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_mult_stencil_write_start_control_vars_pt__U28 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_mult_stencil_read_start_pt__U8 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_mult_stencil_read_start_control_vars_pt__U9 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_mult_stencil_exe_start_pt__U10 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_mult_stencil_exe_start_control_vars_pt__U13 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_output_stencil_write_start_pt__U61 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_write_start_control_vars_pt__U64 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_output_stencil_read_start_pt__U45 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_read_start_control_vars_pt__U46 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_output_stencil_exe_start_pt__U47 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_exe_start_control_vars_pt__U50 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_write_start_pt__U5 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_pt__U6 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_read_start_pt__U1 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_pt__U2 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_exe_start_pt__U3 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_pt__U4 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
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

module array_delay_U66 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U67_in;
wire _U67_clk;
wire [15:0] _U67_out;
wire [15:0] _U68_in;
wire _U68_clk;
wire [15:0] _U68_out;
wire [15:0] _U69_in;
wire _U69_clk;
wire [15:0] _U69_out;
assign _U67_in = in[0];
assign _U67_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U67 (
    .in(_U67_in),
    .clk(_U67_clk),
    .out(_U67_out)
);
assign _U68_in = in[1];
assign _U68_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U68 (
    .in(_U68_in),
    .clk(_U68_clk),
    .out(_U68_out)
);
assign _U69_in = in[2];
assign _U69_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U69 (
    .in(_U69_in),
    .clk(_U69_clk),
    .out(_U69_out)
);
assign out[2] = _U69_out;
assign out[1] = _U68_out;
assign out[0] = _U67_out;
endmodule

module array_delay_U57 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U58_in;
wire _U58_clk;
wire [15:0] _U58_out;
wire [15:0] _U59_in;
wire _U59_clk;
wire [15:0] _U59_out;
wire [15:0] _U60_in;
wire _U60_clk;
wire [15:0] _U60_out;
assign _U58_in = in[0];
assign _U58_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U58 (
    .in(_U58_in),
    .clk(_U58_clk),
    .out(_U58_out)
);
assign _U59_in = in[1];
assign _U59_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U59 (
    .in(_U59_in),
    .clk(_U59_clk),
    .out(_U59_out)
);
assign _U60_in = in[2];
assign _U60_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U60 (
    .in(_U60_in),
    .clk(_U60_clk),
    .out(_U60_out)
);
assign out[2] = _U60_out;
assign out[1] = _U59_out;
assign out[0] = _U58_out;
endmodule

module array_delay_U52 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U53_in;
wire _U53_clk;
wire [15:0] _U53_out;
wire [15:0] _U54_in;
wire _U54_clk;
wire [15:0] _U54_out;
wire [15:0] _U55_in;
wire _U55_clk;
wire [15:0] _U55_out;
assign _U53_in = in[0];
assign _U53_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U53 (
    .in(_U53_in),
    .clk(_U53_clk),
    .out(_U53_out)
);
assign _U54_in = in[1];
assign _U54_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U54 (
    .in(_U54_in),
    .clk(_U54_clk),
    .out(_U54_out)
);
assign _U55_in = in[2];
assign _U55_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U55 (
    .in(_U55_in),
    .clk(_U55_clk),
    .out(_U55_out)
);
assign out[2] = _U55_out;
assign out[1] = _U54_out;
assign out[0] = _U53_out;
endmodule

module array_delay_U40 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U41_in;
wire _U41_clk;
wire [15:0] _U41_out;
wire [15:0] _U42_in;
wire _U42_clk;
wire [15:0] _U42_out;
wire [15:0] _U43_in;
wire _U43_clk;
wire [15:0] _U43_out;
assign _U41_in = in[0];
assign _U41_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U41 (
    .in(_U41_in),
    .clk(_U41_clk),
    .out(_U41_out)
);
assign _U42_in = in[1];
assign _U42_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U42 (
    .in(_U42_in),
    .clk(_U42_clk),
    .out(_U42_out)
);
assign _U43_in = in[2];
assign _U43_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U43 (
    .in(_U43_in),
    .clk(_U43_clk),
    .out(_U43_out)
);
assign out[2] = _U43_out;
assign out[1] = _U42_out;
assign out[0] = _U41_out;
endmodule

module array_delay_U35 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U36_in;
wire _U36_clk;
wire [15:0] _U36_out;
wire [15:0] _U37_in;
wire _U37_clk;
wire [15:0] _U37_out;
wire [15:0] _U38_in;
wire _U38_clk;
wire [15:0] _U38_out;
assign _U36_in = in[0];
assign _U36_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U36 (
    .in(_U36_in),
    .clk(_U36_clk),
    .out(_U36_out)
);
assign _U37_in = in[1];
assign _U37_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U37 (
    .in(_U37_in),
    .clk(_U37_clk),
    .out(_U37_out)
);
assign _U38_in = in[2];
assign _U38_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U38 (
    .in(_U38_in),
    .clk(_U38_clk),
    .out(_U38_out)
);
assign out[2] = _U38_out;
assign out[1] = _U37_out;
assign out[0] = _U36_out;
endmodule

module array_delay_U30 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U31_in;
wire _U31_clk;
wire [15:0] _U31_out;
wire [15:0] _U32_in;
wire _U32_clk;
wire [15:0] _U32_out;
wire [15:0] _U33_in;
wire _U33_clk;
wire [15:0] _U33_out;
assign _U31_in = in[0];
assign _U31_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U31 (
    .in(_U31_in),
    .clk(_U31_clk),
    .out(_U31_out)
);
assign _U32_in = in[1];
assign _U32_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U32 (
    .in(_U32_in),
    .clk(_U32_clk),
    .out(_U32_out)
);
assign _U33_in = in[2];
assign _U33_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U33 (
    .in(_U33_in),
    .clk(_U33_clk),
    .out(_U33_out)
);
assign out[2] = _U33_out;
assign out[1] = _U32_out;
assign out[0] = _U31_out;
endmodule

module array_delay_U20 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U21_in;
wire _U21_clk;
wire [15:0] _U21_out;
wire [15:0] _U22_in;
wire _U22_clk;
wire [15:0] _U22_out;
wire [15:0] _U23_in;
wire _U23_clk;
wire [15:0] _U23_out;
assign _U21_in = in[0];
assign _U21_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U21 (
    .in(_U21_in),
    .clk(_U21_clk),
    .out(_U21_out)
);
assign _U22_in = in[1];
assign _U22_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U22 (
    .in(_U22_in),
    .clk(_U22_clk),
    .out(_U22_out)
);
assign _U23_in = in[2];
assign _U23_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U23 (
    .in(_U23_in),
    .clk(_U23_clk),
    .out(_U23_out)
);
assign out[2] = _U23_out;
assign out[1] = _U22_out;
assign out[0] = _U21_out;
endmodule

module array_delay_U15 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U16_in;
wire _U16_clk;
wire [15:0] _U16_out;
wire [15:0] _U17_in;
wire _U17_clk;
wire [15:0] _U17_out;
wire [15:0] _U18_in;
wire _U18_clk;
wire [15:0] _U18_out;
assign _U16_in = in[0];
assign _U16_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U16 (
    .in(_U16_in),
    .clk(_U16_clk),
    .out(_U16_out)
);
assign _U17_in = in[1];
assign _U17_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U17 (
    .in(_U17_in),
    .clk(_U17_clk),
    .out(_U17_out)
);
assign _U18_in = in[2];
assign _U18_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U18 (
    .in(_U18_in),
    .clk(_U18_clk),
    .out(_U18_out)
);
assign out[2] = _U18_out;
assign out[1] = _U17_out;
assign out[0] = _U16_out;
endmodule

module _U8_pt__U9 (
    input [15:0] in,
    output [15:0] out
);
assign out = in;
endmodule

module _U5_pt__U6 (
    input [15:0] in,
    output [15:0] out
);
assign out = in;
endmodule

module _U2_pt__U3 (
    input [15:0] in,
    output [15:0] out
);
assign out = in;
endmodule

module hcompute_mult_stencil_pipelined (
    input clk,
    input [15:0] in0_hw_input_global_wrapper_stencil [0:0],
    output [15:0] out_mult_stencil
);
wire [15:0] _U2_in;
wire [15:0] _U2_out;
wire [15:0] _U4_in;
wire _U4_clk;
wire [15:0] _U4_out;
wire [15:0] _U5_in;
wire [15:0] _U5_out;
wire [15:0] _U7_in;
wire _U7_clk;
wire [15:0] _U7_out;
wire [15:0] _U8_in;
assign _U2_in = _U4_out;
_U2_pt__U3 _U2 (
    .in(_U2_in),
    .out(_U2_out)
);
assign _U4_in = 16'h0002;
assign _U4_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U4 (
    .in(_U4_in),
    .clk(_U4_clk),
    .out(_U4_out)
);
assign _U5_in = _U7_out;
_U5_pt__U6 _U5 (
    .in(_U5_in),
    .out(_U5_out)
);
assign _U7_in = in0_hw_input_global_wrapper_stencil[0];
assign _U7_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U7 (
    .in(_U7_in),
    .clk(_U7_clk),
    .out(_U7_out)
);
assign _U8_in = 16'(_U5_out * _U2_out);
_U8_pt__U9 _U8 (
    .in(_U8_in),
    .out(out_mult_stencil)
);
endmodule

module cu_op_hcompute_mult_stencil (
    input clk,
    input [15:0] hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read [0:0],
    output [15:0] mult_stencil_op_hcompute_mult_stencil_write [0:0]
);
wire inner_compute_clk;
wire [15:0] inner_compute_in0_hw_input_global_wrapper_stencil [0:0];
wire [15:0] inner_compute_out_mult_stencil;
assign inner_compute_clk = clk;
assign inner_compute_in0_hw_input_global_wrapper_stencil[0] = hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read[0];
hcompute_mult_stencil_pipelined inner_compute (
    .clk(inner_compute_clk),
    .in0_hw_input_global_wrapper_stencil(inner_compute_in0_hw_input_global_wrapper_stencil),
    .out_mult_stencil(inner_compute_out_mult_stencil)
);
assign mult_stencil_op_hcompute_mult_stencil_write[0] = inner_compute_out_mult_stencil;
endmodule

module _U10_pt__U11 (
    input [15:0] in,
    output [15:0] out
);
assign out = in;
endmodule

module hcompute_hw_output_stencil_pipelined (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_mult_stencil [0:0]
);
wire [15:0] _U10_in;
assign _U10_in = in0_mult_stencil[0];
_U10_pt__U11 _U10 (
    .in(_U10_in),
    .out(out_hw_output_stencil)
);
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] mult_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_mult_stencil [0:0];
assign inner_compute_in0_mult_stencil[0] = mult_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil_pipelined inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_mult_stencil(inner_compute_in0_mult_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module _U0_pt__U1 (
    input [15:0] in,
    output [15:0] out
);
assign out = in;
endmodule

module hcompute_hw_input_global_wrapper_stencil_pipelined (
    output [15:0] out_hw_input_global_wrapper_stencil,
    input [15:0] in0_hw_input_stencil [0:0]
);
wire [15:0] _U0_in;
assign _U0_in = in0_hw_input_stencil[0];
_U0_pt__U1 _U0 (
    .in(_U0_in),
    .out(out_hw_input_global_wrapper_stencil)
);
endmodule

module cu_op_hcompute_hw_input_global_wrapper_stencil (
    input clk,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_input_global_wrapper_stencil;
wire [15:0] inner_compute_in0_hw_input_stencil [0:0];
assign inner_compute_in0_hw_input_stencil[0] = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
hcompute_hw_input_global_wrapper_stencil_pipelined inner_compute (
    .out_hw_input_global_wrapper_stencil(inner_compute_out_hw_input_global_wrapper_stencil),
    .in0_hw_input_stencil(inner_compute_in0_hw_input_stencil)
);
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = inner_compute_out_hw_input_global_wrapper_stencil;
endmodule

module pointwise (
    input clk,
    input rst_n,
    input flush,
    output hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_valid,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire arr__U14_clk;
wire [15:0] arr__U14_in [2:0];
wire [15:0] arr__U14_out [2:0];
wire arr__U19_clk;
wire [15:0] arr__U19_in [2:0];
wire [15:0] arr__U19_out [2:0];
wire arr__U29_clk;
wire [15:0] arr__U29_in [2:0];
wire [15:0] arr__U29_out [2:0];
wire arr__U34_clk;
wire [15:0] arr__U34_in [2:0];
wire [15:0] arr__U34_out [2:0];
wire arr__U39_clk;
wire [15:0] arr__U39_in [2:0];
wire [15:0] arr__U39_out [2:0];
wire arr__U51_clk;
wire [15:0] arr__U51_in [2:0];
wire [15:0] arr__U51_out [2:0];
wire arr__U56_clk;
wire [15:0] arr__U56_in [2:0];
wire [15:0] arr__U56_out [2:0];
wire arr__U65_clk;
wire [15:0] arr__U65_in [2:0];
wire [15:0] arr__U65_out [2:0];
wire arr__U70_clk;
wire [15:0] arr__U70_in [2:0];
wire [15:0] arr__U70_out [2:0];
wire delay_reg__U11_clk;
wire delay_reg__U11_in;
wire delay_reg__U11_out;
wire delay_reg__U12_clk;
wire delay_reg__U12_in;
wire delay_reg__U12_out;
wire delay_reg__U25_clk;
wire delay_reg__U25_in;
wire delay_reg__U25_out;
wire delay_reg__U26_clk;
wire delay_reg__U26_in;
wire delay_reg__U26_out;
wire delay_reg__U27_clk;
wire delay_reg__U27_in;
wire delay_reg__U27_out;
wire delay_reg__U48_clk;
wire delay_reg__U48_in;
wire delay_reg__U48_out;
wire delay_reg__U49_clk;
wire delay_reg__U49_in;
wire delay_reg__U49_out;
wire delay_reg__U62_clk;
wire delay_reg__U62_in;
wire delay_reg__U62_out;
wire delay_reg__U63_clk;
wire delay_reg__U63_in;
wire delay_reg__U63_out;
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
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_in;
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_rst_n;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_flush;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_read_start_in;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_out [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_write_start_in;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start_out;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_mult_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_in;
wire op_hcompute_hw_output_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_port_controller_clk;
wire op_hcompute_hw_output_stencil_port_controller_rst_n;
wire op_hcompute_hw_output_stencil_port_controller_flush;
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_read_start_in;
wire op_hcompute_hw_output_stencil_read_start_out;
wire [15:0] op_hcompute_hw_output_stencil_read_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_read_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_write_start_in;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_mult_stencil_clk;
wire [15:0] op_hcompute_mult_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read [0:0];
wire [15:0] op_hcompute_mult_stencil_mult_stencil_op_hcompute_mult_stencil_write [0:0];
wire op_hcompute_mult_stencil_exe_start_in;
wire op_hcompute_mult_stencil_exe_start_out;
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_mult_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_mult_stencil_port_controller_clk;
wire op_hcompute_mult_stencil_port_controller_rst_n;
wire op_hcompute_mult_stencil_port_controller_flush;
wire op_hcompute_mult_stencil_port_controller_valid;
wire [15:0] op_hcompute_mult_stencil_port_controller_d [2:0];
wire op_hcompute_mult_stencil_read_start_in;
wire op_hcompute_mult_stencil_read_start_out;
wire [15:0] op_hcompute_mult_stencil_read_start_control_vars_in [2:0];
wire [15:0] op_hcompute_mult_stencil_read_start_control_vars_out [2:0];
wire op_hcompute_mult_stencil_write_start_in;
wire op_hcompute_mult_stencil_write_start_out;
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_mult_stencil_write_start_control_vars_out [2:0];
assign arr__U14_clk = clk;
assign arr__U14_in[2] = op_hcompute_mult_stencil_port_controller_d[2];
assign arr__U14_in[1] = op_hcompute_mult_stencil_port_controller_d[1];
assign arr__U14_in[0] = op_hcompute_mult_stencil_port_controller_d[0];
array_delay_U15 arr__U14 (
    .clk(arr__U14_clk),
    .in(arr__U14_in),
    .out(arr__U14_out)
);
assign arr__U19_clk = clk;
assign arr__U19_in[2] = arr__U14_out[2];
assign arr__U19_in[1] = arr__U14_out[1];
assign arr__U19_in[0] = arr__U14_out[0];
array_delay_U20 arr__U19 (
    .clk(arr__U19_clk),
    .in(arr__U19_in),
    .out(arr__U19_out)
);
assign arr__U29_clk = clk;
assign arr__U29_in[2] = op_hcompute_mult_stencil_port_controller_d[2];
assign arr__U29_in[1] = op_hcompute_mult_stencil_port_controller_d[1];
assign arr__U29_in[0] = op_hcompute_mult_stencil_port_controller_d[0];
array_delay_U30 arr__U29 (
    .clk(arr__U29_clk),
    .in(arr__U29_in),
    .out(arr__U29_out)
);
assign arr__U34_clk = clk;
assign arr__U34_in[2] = arr__U29_out[2];
assign arr__U34_in[1] = arr__U29_out[1];
assign arr__U34_in[0] = arr__U29_out[0];
array_delay_U35 arr__U34 (
    .clk(arr__U34_clk),
    .in(arr__U34_in),
    .out(arr__U34_out)
);
assign arr__U39_clk = clk;
assign arr__U39_in[2] = arr__U34_out[2];
assign arr__U39_in[1] = arr__U34_out[1];
assign arr__U39_in[0] = arr__U34_out[0];
array_delay_U40 arr__U39 (
    .clk(arr__U39_clk),
    .in(arr__U39_in),
    .out(arr__U39_out)
);
assign arr__U51_clk = clk;
assign arr__U51_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign arr__U51_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign arr__U51_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U52 arr__U51 (
    .clk(arr__U51_clk),
    .in(arr__U51_in),
    .out(arr__U51_out)
);
assign arr__U56_clk = clk;
assign arr__U56_in[2] = arr__U51_out[2];
assign arr__U56_in[1] = arr__U51_out[1];
assign arr__U56_in[0] = arr__U51_out[0];
array_delay_U57 arr__U56 (
    .clk(arr__U56_clk),
    .in(arr__U56_in),
    .out(arr__U56_out)
);
assign arr__U65_clk = clk;
assign arr__U65_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign arr__U65_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign arr__U65_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U66 arr__U65 (
    .clk(arr__U65_clk),
    .in(arr__U65_in),
    .out(arr__U65_out)
);
assign arr__U70_clk = clk;
assign arr__U70_in[2] = arr__U65_out[2];
assign arr__U70_in[1] = arr__U65_out[1];
assign arr__U70_in[0] = arr__U65_out[0];
array_delay_U71 arr__U70 (
    .clk(arr__U70_clk),
    .in(arr__U70_in),
    .out(arr__U70_out)
);
assign delay_reg__U11_clk = clk;
assign delay_reg__U11_in = op_hcompute_mult_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U11 (
    .clk(delay_reg__U11_clk),
    .in(delay_reg__U11_in),
    .out(delay_reg__U11_out)
);
assign delay_reg__U12_clk = clk;
assign delay_reg__U12_in = delay_reg__U11_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U12 (
    .clk(delay_reg__U12_clk),
    .in(delay_reg__U12_in),
    .out(delay_reg__U12_out)
);
assign delay_reg__U25_clk = clk;
assign delay_reg__U25_in = op_hcompute_mult_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U25 (
    .clk(delay_reg__U25_clk),
    .in(delay_reg__U25_in),
    .out(delay_reg__U25_out)
);
assign delay_reg__U26_clk = clk;
assign delay_reg__U26_in = delay_reg__U25_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U26 (
    .clk(delay_reg__U26_clk),
    .in(delay_reg__U26_in),
    .out(delay_reg__U26_out)
);
assign delay_reg__U27_clk = clk;
assign delay_reg__U27_in = delay_reg__U26_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U27 (
    .clk(delay_reg__U27_clk),
    .in(delay_reg__U27_in),
    .out(delay_reg__U27_out)
);
assign delay_reg__U48_clk = clk;
assign delay_reg__U48_in = op_hcompute_hw_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U48 (
    .clk(delay_reg__U48_clk),
    .in(delay_reg__U48_in),
    .out(delay_reg__U48_out)
);
assign delay_reg__U49_clk = clk;
assign delay_reg__U49_in = delay_reg__U48_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U49 (
    .clk(delay_reg__U49_clk),
    .in(delay_reg__U49_in),
    .out(delay_reg__U49_out)
);
assign delay_reg__U62_clk = clk;
assign delay_reg__U62_in = op_hcompute_hw_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U62 (
    .clk(delay_reg__U62_clk),
    .in(delay_reg__U62_in),
    .out(delay_reg__U62_out)
);
assign delay_reg__U63_clk = clk;
assign delay_reg__U63_in = delay_reg__U62_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U63 (
    .clk(delay_reg__U63_clk),
    .in(delay_reg__U63_in),
    .out(delay_reg__U63_out)
);
assign hw_input_global_wrapper_stencil_clk = clk;
assign hw_input_global_wrapper_stencil_flush = flush;
assign hw_input_global_wrapper_stencil_rst_n = rst_n;
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen = op_hcompute_hw_input_global_wrapper_stencil_write_start_out;
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[2];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[1];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0];
assign hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_ren = op_hcompute_mult_stencil_read_start_out;
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
assign mult_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start_out;
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
assign op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
cu_op_hcompute_hw_input_global_wrapper_stencil op_hcompute_hw_input_global_wrapper_stencil (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_clk),
    .hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read(op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read),
    .hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write(op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write)
);
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_in = op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
op_hcompute_hw_input_global_wrapper_stencil_exe_start_pt__U3 op_hcompute_hw_input_global_wrapper_stencil_exe_start (
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_pt__U4 op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars (
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_rst_n = rst_n;
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_flush = flush;
affine_controller__U0 op_hcompute_hw_input_global_wrapper_stencil_port_controller (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk),
    .rst_n(op_hcompute_hw_input_global_wrapper_stencil_port_controller_rst_n),
    .flush(op_hcompute_hw_input_global_wrapper_stencil_port_controller_flush),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_read_start_in = op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
op_hcompute_hw_input_global_wrapper_stencil_read_start_pt__U1 op_hcompute_hw_input_global_wrapper_stencil_read_start (
    .in(op_hcompute_hw_input_global_wrapper_stencil_read_start_in),
    .out(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en)
);
assign op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_pt__U2 op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars (
    .in(op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_read_start_control_vars_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_in = op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
op_hcompute_hw_input_global_wrapper_stencil_write_start_pt__U5 op_hcompute_hw_input_global_wrapper_stencil_write_start (
    .in(op_hcompute_hw_input_global_wrapper_stencil_write_start_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_pt__U6 op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars (
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
assign op_hcompute_hw_output_stencil_exe_start_in = delay_reg__U49_out;
op_hcompute_hw_output_stencil_exe_start_pt__U47 op_hcompute_hw_output_stencil_exe_start (
    .in(op_hcompute_hw_output_stencil_exe_start_in),
    .out(op_hcompute_hw_output_stencil_exe_start_out)
);
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = arr__U56_out[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = arr__U56_out[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = arr__U56_out[0];
op_hcompute_hw_output_stencil_exe_start_control_vars_pt__U50 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
assign op_hcompute_hw_output_stencil_port_controller_rst_n = rst_n;
assign op_hcompute_hw_output_stencil_port_controller_flush = flush;
affine_controller__U44 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .rst_n(op_hcompute_hw_output_stencil_port_controller_rst_n),
    .flush(op_hcompute_hw_output_stencil_port_controller_flush),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_read_start_in = op_hcompute_hw_output_stencil_port_controller_valid;
op_hcompute_hw_output_stencil_read_start_pt__U45 op_hcompute_hw_output_stencil_read_start (
    .in(op_hcompute_hw_output_stencil_read_start_in),
    .out(op_hcompute_hw_output_stencil_read_start_out)
);
assign op_hcompute_hw_output_stencil_read_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_read_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_read_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
op_hcompute_hw_output_stencil_read_start_control_vars_pt__U46 op_hcompute_hw_output_stencil_read_start_control_vars (
    .in(op_hcompute_hw_output_stencil_read_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_read_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_write_start_in = delay_reg__U63_out;
op_hcompute_hw_output_stencil_write_start_pt__U61 op_hcompute_hw_output_stencil_write_start (
    .in(op_hcompute_hw_output_stencil_write_start_in),
    .out(hw_output_stencil_op_hcompute_hw_output_stencil_write_valid)
);
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = arr__U70_out[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = arr__U70_out[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = arr__U70_out[0];
op_hcompute_hw_output_stencil_write_start_control_vars_pt__U64 op_hcompute_hw_output_stencil_write_start_control_vars (
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
assign op_hcompute_mult_stencil_exe_start_in = delay_reg__U12_out;
op_hcompute_mult_stencil_exe_start_pt__U10 op_hcompute_mult_stencil_exe_start (
    .in(op_hcompute_mult_stencil_exe_start_in),
    .out(op_hcompute_mult_stencil_exe_start_out)
);
assign op_hcompute_mult_stencil_exe_start_control_vars_in[2] = arr__U19_out[2];
assign op_hcompute_mult_stencil_exe_start_control_vars_in[1] = arr__U19_out[1];
assign op_hcompute_mult_stencil_exe_start_control_vars_in[0] = arr__U19_out[0];
op_hcompute_mult_stencil_exe_start_control_vars_pt__U13 op_hcompute_mult_stencil_exe_start_control_vars (
    .in(op_hcompute_mult_stencil_exe_start_control_vars_in),
    .out(op_hcompute_mult_stencil_exe_start_control_vars_out)
);
assign op_hcompute_mult_stencil_port_controller_clk = clk;
assign op_hcompute_mult_stencil_port_controller_rst_n = rst_n;
assign op_hcompute_mult_stencil_port_controller_flush = flush;
affine_controller__U7 op_hcompute_mult_stencil_port_controller (
    .clk(op_hcompute_mult_stencil_port_controller_clk),
    .rst_n(op_hcompute_mult_stencil_port_controller_rst_n),
    .flush(op_hcompute_mult_stencil_port_controller_flush),
    .valid(op_hcompute_mult_stencil_port_controller_valid),
    .d(op_hcompute_mult_stencil_port_controller_d)
);
assign op_hcompute_mult_stencil_read_start_in = op_hcompute_mult_stencil_port_controller_valid;
op_hcompute_mult_stencil_read_start_pt__U8 op_hcompute_mult_stencil_read_start (
    .in(op_hcompute_mult_stencil_read_start_in),
    .out(op_hcompute_mult_stencil_read_start_out)
);
assign op_hcompute_mult_stencil_read_start_control_vars_in[2] = op_hcompute_mult_stencil_port_controller_d[2];
assign op_hcompute_mult_stencil_read_start_control_vars_in[1] = op_hcompute_mult_stencil_port_controller_d[1];
assign op_hcompute_mult_stencil_read_start_control_vars_in[0] = op_hcompute_mult_stencil_port_controller_d[0];
op_hcompute_mult_stencil_read_start_control_vars_pt__U9 op_hcompute_mult_stencil_read_start_control_vars (
    .in(op_hcompute_mult_stencil_read_start_control_vars_in),
    .out(op_hcompute_mult_stencil_read_start_control_vars_out)
);
assign op_hcompute_mult_stencil_write_start_in = delay_reg__U27_out;
op_hcompute_mult_stencil_write_start_pt__U24 op_hcompute_mult_stencil_write_start (
    .in(op_hcompute_mult_stencil_write_start_in),
    .out(op_hcompute_mult_stencil_write_start_out)
);
assign op_hcompute_mult_stencil_write_start_control_vars_in[2] = arr__U39_out[2];
assign op_hcompute_mult_stencil_write_start_control_vars_in[1] = arr__U39_out[1];
assign op_hcompute_mult_stencil_write_start_control_vars_in[0] = arr__U39_out[0];
op_hcompute_mult_stencil_write_start_control_vars_pt__U28 op_hcompute_mult_stencil_write_start_control_vars (
    .in(op_hcompute_mult_stencil_write_start_control_vars_in),
    .out(op_hcompute_mult_stencil_write_start_control_vars_out)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
endmodule

