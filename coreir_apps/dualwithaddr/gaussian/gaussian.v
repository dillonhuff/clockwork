// Module `hw_input_stencil_ub` defined externally
// Module `blur_unnormalized_stencil_ub` defined externally
// Module `blur_unnormalized_stencil_clkwrk_dsa0_ub` defined externally
// Module `blur_stencil_ub` defined externally
module op_hcompute_hw_output_stencil_write_start_pt__U713 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_output_stencil_write_start_control_vars_pt__U714 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_output_stencil_exe_start_control_vars_pt__U720 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_stencil_write_start_pt__U557 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_stencil_write_start_control_vars_pt__U558 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_hw_input_stencil_exe_start_control_vars_pt__U564 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_blur_unnormalized_stencil_write_start_pt__U587 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_blur_unnormalized_stencil_write_start_control_vars_pt__U588 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_pt__U594 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_blur_unnormalized_stencil_1_write_start_pt__U629 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_pt__U630 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_pt__U636 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_blur_stencil_write_start_pt__U671 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_blur_stencil_write_start_control_vars_pt__U672 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

module op_hcompute_blur_stencil_exe_start_control_vars_pt__U678 (
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
assign out[2] = in[2];
assign out[1] = in[1];
assign out[0] = in[0];
endmodule

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

module array_delay_U722 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U723_in;
wire _U723_clk;
wire [15:0] _U723_out;
wire [15:0] _U724_in;
wire _U724_clk;
wire [15:0] _U724_out;
wire [15:0] _U725_in;
wire _U725_clk;
wire [15:0] _U725_out;
assign _U723_in = in[0];
assign _U723_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U723 (
    .in(_U723_in),
    .clk(_U723_clk),
    .out(_U723_out)
);
assign _U724_in = in[1];
assign _U724_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U724 (
    .in(_U724_in),
    .clk(_U724_clk),
    .out(_U724_out)
);
assign _U725_in = in[2];
assign _U725_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U725 (
    .in(_U725_in),
    .clk(_U725_clk),
    .out(_U725_out)
);
assign out[2] = _U725_out;
assign out[1] = _U724_out;
assign out[0] = _U723_out;
endmodule

module array_delay_U716 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U717_in;
wire _U717_clk;
wire [15:0] _U717_out;
wire [15:0] _U718_in;
wire _U718_clk;
wire [15:0] _U718_out;
wire [15:0] _U719_in;
wire _U719_clk;
wire [15:0] _U719_out;
assign _U717_in = in[0];
assign _U717_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U717 (
    .in(_U717_in),
    .clk(_U717_clk),
    .out(_U717_out)
);
assign _U718_in = in[1];
assign _U718_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U718 (
    .in(_U718_in),
    .clk(_U718_clk),
    .out(_U718_out)
);
assign _U719_in = in[2];
assign _U719_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U719 (
    .in(_U719_in),
    .clk(_U719_clk),
    .out(_U719_out)
);
assign out[2] = _U719_out;
assign out[1] = _U718_out;
assign out[0] = _U717_out;
endmodule

module array_delay_U709 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U710_in;
wire _U710_clk;
wire [15:0] _U710_out;
wire [15:0] _U711_in;
wire _U711_clk;
wire [15:0] _U711_out;
wire [15:0] _U712_in;
wire _U712_clk;
wire [15:0] _U712_out;
assign _U710_in = in[0];
assign _U710_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U710 (
    .in(_U710_in),
    .clk(_U710_clk),
    .out(_U710_out)
);
assign _U711_in = in[1];
assign _U711_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U711 (
    .in(_U711_in),
    .clk(_U711_clk),
    .out(_U711_out)
);
assign _U712_in = in[2];
assign _U712_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U712 (
    .in(_U712_in),
    .clk(_U712_clk),
    .out(_U712_out)
);
assign out[2] = _U712_out;
assign out[1] = _U711_out;
assign out[0] = _U710_out;
endmodule

module array_delay_U703 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U704_in;
wire _U704_clk;
wire [15:0] _U704_out;
wire [15:0] _U705_in;
wire _U705_clk;
wire [15:0] _U705_out;
wire [15:0] _U706_in;
wire _U706_clk;
wire [15:0] _U706_out;
assign _U704_in = in[0];
assign _U704_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U704 (
    .in(_U704_in),
    .clk(_U704_clk),
    .out(_U704_out)
);
assign _U705_in = in[1];
assign _U705_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U705 (
    .in(_U705_in),
    .clk(_U705_clk),
    .out(_U705_out)
);
assign _U706_in = in[2];
assign _U706_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U706 (
    .in(_U706_in),
    .clk(_U706_clk),
    .out(_U706_out)
);
assign out[2] = _U706_out;
assign out[1] = _U705_out;
assign out[0] = _U704_out;
endmodule

module array_delay_U680 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U681_in;
wire _U681_clk;
wire [15:0] _U681_out;
wire [15:0] _U682_in;
wire _U682_clk;
wire [15:0] _U682_out;
wire [15:0] _U683_in;
wire _U683_clk;
wire [15:0] _U683_out;
assign _U681_in = in[0];
assign _U681_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U681 (
    .in(_U681_in),
    .clk(_U681_clk),
    .out(_U681_out)
);
assign _U682_in = in[1];
assign _U682_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U682 (
    .in(_U682_in),
    .clk(_U682_clk),
    .out(_U682_out)
);
assign _U683_in = in[2];
assign _U683_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U683 (
    .in(_U683_in),
    .clk(_U683_clk),
    .out(_U683_out)
);
assign out[2] = _U683_out;
assign out[1] = _U682_out;
assign out[0] = _U681_out;
endmodule

module array_delay_U674 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U675_in;
wire _U675_clk;
wire [15:0] _U675_out;
wire [15:0] _U676_in;
wire _U676_clk;
wire [15:0] _U676_out;
wire [15:0] _U677_in;
wire _U677_clk;
wire [15:0] _U677_out;
assign _U675_in = in[0];
assign _U675_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U675 (
    .in(_U675_in),
    .clk(_U675_clk),
    .out(_U675_out)
);
assign _U676_in = in[1];
assign _U676_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U676 (
    .in(_U676_in),
    .clk(_U676_clk),
    .out(_U676_out)
);
assign _U677_in = in[2];
assign _U677_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U677 (
    .in(_U677_in),
    .clk(_U677_clk),
    .out(_U677_out)
);
assign out[2] = _U677_out;
assign out[1] = _U676_out;
assign out[0] = _U675_out;
endmodule

module array_delay_U667 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U668_in;
wire _U668_clk;
wire [15:0] _U668_out;
wire [15:0] _U669_in;
wire _U669_clk;
wire [15:0] _U669_out;
wire [15:0] _U670_in;
wire _U670_clk;
wire [15:0] _U670_out;
assign _U668_in = in[0];
assign _U668_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U668 (
    .in(_U668_in),
    .clk(_U668_clk),
    .out(_U668_out)
);
assign _U669_in = in[1];
assign _U669_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U669 (
    .in(_U669_in),
    .clk(_U669_clk),
    .out(_U669_out)
);
assign _U670_in = in[2];
assign _U670_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U670 (
    .in(_U670_in),
    .clk(_U670_clk),
    .out(_U670_out)
);
assign out[2] = _U670_out;
assign out[1] = _U669_out;
assign out[0] = _U668_out;
endmodule

module array_delay_U661 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U662_in;
wire _U662_clk;
wire [15:0] _U662_out;
wire [15:0] _U663_in;
wire _U663_clk;
wire [15:0] _U663_out;
wire [15:0] _U664_in;
wire _U664_clk;
wire [15:0] _U664_out;
assign _U662_in = in[0];
assign _U662_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U662 (
    .in(_U662_in),
    .clk(_U662_clk),
    .out(_U662_out)
);
assign _U663_in = in[1];
assign _U663_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U663 (
    .in(_U663_in),
    .clk(_U663_clk),
    .out(_U663_out)
);
assign _U664_in = in[2];
assign _U664_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U664 (
    .in(_U664_in),
    .clk(_U664_clk),
    .out(_U664_out)
);
assign out[2] = _U664_out;
assign out[1] = _U663_out;
assign out[0] = _U662_out;
endmodule

module array_delay_U638 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U639_in;
wire _U639_clk;
wire [15:0] _U639_out;
wire [15:0] _U640_in;
wire _U640_clk;
wire [15:0] _U640_out;
wire [15:0] _U641_in;
wire _U641_clk;
wire [15:0] _U641_out;
assign _U639_in = in[0];
assign _U639_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U639 (
    .in(_U639_in),
    .clk(_U639_clk),
    .out(_U639_out)
);
assign _U640_in = in[1];
assign _U640_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U640 (
    .in(_U640_in),
    .clk(_U640_clk),
    .out(_U640_out)
);
assign _U641_in = in[2];
assign _U641_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U641 (
    .in(_U641_in),
    .clk(_U641_clk),
    .out(_U641_out)
);
assign out[2] = _U641_out;
assign out[1] = _U640_out;
assign out[0] = _U639_out;
endmodule

module array_delay_U632 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U633_in;
wire _U633_clk;
wire [15:0] _U633_out;
wire [15:0] _U634_in;
wire _U634_clk;
wire [15:0] _U634_out;
wire [15:0] _U635_in;
wire _U635_clk;
wire [15:0] _U635_out;
assign _U633_in = in[0];
assign _U633_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U633 (
    .in(_U633_in),
    .clk(_U633_clk),
    .out(_U633_out)
);
assign _U634_in = in[1];
assign _U634_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U634 (
    .in(_U634_in),
    .clk(_U634_clk),
    .out(_U634_out)
);
assign _U635_in = in[2];
assign _U635_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U635 (
    .in(_U635_in),
    .clk(_U635_clk),
    .out(_U635_out)
);
assign out[2] = _U635_out;
assign out[1] = _U634_out;
assign out[0] = _U633_out;
endmodule

module array_delay_U625 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U626_in;
wire _U626_clk;
wire [15:0] _U626_out;
wire [15:0] _U627_in;
wire _U627_clk;
wire [15:0] _U627_out;
wire [15:0] _U628_in;
wire _U628_clk;
wire [15:0] _U628_out;
assign _U626_in = in[0];
assign _U626_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U626 (
    .in(_U626_in),
    .clk(_U626_clk),
    .out(_U626_out)
);
assign _U627_in = in[1];
assign _U627_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U627 (
    .in(_U627_in),
    .clk(_U627_clk),
    .out(_U627_out)
);
assign _U628_in = in[2];
assign _U628_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U628 (
    .in(_U628_in),
    .clk(_U628_clk),
    .out(_U628_out)
);
assign out[2] = _U628_out;
assign out[1] = _U627_out;
assign out[0] = _U626_out;
endmodule

module array_delay_U619 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U620_in;
wire _U620_clk;
wire [15:0] _U620_out;
wire [15:0] _U621_in;
wire _U621_clk;
wire [15:0] _U621_out;
wire [15:0] _U622_in;
wire _U622_clk;
wire [15:0] _U622_out;
assign _U620_in = in[0];
assign _U620_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U620 (
    .in(_U620_in),
    .clk(_U620_clk),
    .out(_U620_out)
);
assign _U621_in = in[1];
assign _U621_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U621 (
    .in(_U621_in),
    .clk(_U621_clk),
    .out(_U621_out)
);
assign _U622_in = in[2];
assign _U622_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U622 (
    .in(_U622_in),
    .clk(_U622_clk),
    .out(_U622_out)
);
assign out[2] = _U622_out;
assign out[1] = _U621_out;
assign out[0] = _U620_out;
endmodule

module array_delay_U596 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U597_in;
wire _U597_clk;
wire [15:0] _U597_out;
wire [15:0] _U598_in;
wire _U598_clk;
wire [15:0] _U598_out;
wire [15:0] _U599_in;
wire _U599_clk;
wire [15:0] _U599_out;
assign _U597_in = in[0];
assign _U597_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U597 (
    .in(_U597_in),
    .clk(_U597_clk),
    .out(_U597_out)
);
assign _U598_in = in[1];
assign _U598_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U598 (
    .in(_U598_in),
    .clk(_U598_clk),
    .out(_U598_out)
);
assign _U599_in = in[2];
assign _U599_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U599 (
    .in(_U599_in),
    .clk(_U599_clk),
    .out(_U599_out)
);
assign out[2] = _U599_out;
assign out[1] = _U598_out;
assign out[0] = _U597_out;
endmodule

module array_delay_U590 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U591_in;
wire _U591_clk;
wire [15:0] _U591_out;
wire [15:0] _U592_in;
wire _U592_clk;
wire [15:0] _U592_out;
wire [15:0] _U593_in;
wire _U593_clk;
wire [15:0] _U593_out;
assign _U591_in = in[0];
assign _U591_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U591 (
    .in(_U591_in),
    .clk(_U591_clk),
    .out(_U591_out)
);
assign _U592_in = in[1];
assign _U592_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U592 (
    .in(_U592_in),
    .clk(_U592_clk),
    .out(_U592_out)
);
assign _U593_in = in[2];
assign _U593_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U593 (
    .in(_U593_in),
    .clk(_U593_clk),
    .out(_U593_out)
);
assign out[2] = _U593_out;
assign out[1] = _U592_out;
assign out[0] = _U591_out;
endmodule

module array_delay_U566 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U567_in;
wire _U567_clk;
wire [15:0] _U567_out;
wire [15:0] _U568_in;
wire _U568_clk;
wire [15:0] _U568_out;
wire [15:0] _U569_in;
wire _U569_clk;
wire [15:0] _U569_out;
assign _U567_in = in[0];
assign _U567_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U567 (
    .in(_U567_in),
    .clk(_U567_clk),
    .out(_U567_out)
);
assign _U568_in = in[1];
assign _U568_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U568 (
    .in(_U568_in),
    .clk(_U568_clk),
    .out(_U568_out)
);
assign _U569_in = in[2];
assign _U569_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U569 (
    .in(_U569_in),
    .clk(_U569_clk),
    .out(_U569_out)
);
assign out[2] = _U569_out;
assign out[1] = _U568_out;
assign out[0] = _U567_out;
endmodule

module array_delay_U560 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U561_in;
wire _U561_clk;
wire [15:0] _U561_out;
wire [15:0] _U562_in;
wire _U562_clk;
wire [15:0] _U562_out;
wire [15:0] _U563_in;
wire _U563_clk;
wire [15:0] _U563_out;
assign _U561_in = in[0];
assign _U561_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U561 (
    .in(_U561_in),
    .clk(_U561_clk),
    .out(_U561_out)
);
assign _U562_in = in[1];
assign _U562_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U562 (
    .in(_U562_in),
    .clk(_U562_clk),
    .out(_U562_out)
);
assign _U563_in = in[2];
assign _U563_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U563 (
    .in(_U563_in),
    .clk(_U563_clk),
    .out(_U563_out)
);
assign out[2] = _U563_out;
assign out[1] = _U562_out;
assign out[0] = _U561_out;
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

module aff__U685 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0091);
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

module aff__U643 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008d);
endmodule

module affine_controller__U642 (
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
aff__U643 affine_func (
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

module aff__U601 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U600 (
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
aff__U601 affine_func (
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

module aff__U571 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U570 (
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
aff__U571 affine_func (
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
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
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

module aff__U523 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0091);
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

module aff__U505 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0091);
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

module aff__U487 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0091);
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

module aff__U469 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0091);
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

module aff__U451 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0091);
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

module aff__U433 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0090);
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

module aff__U415 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008e);
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

module aff__U397 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008d);
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

module aff__U379 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008d);
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
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008d);
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

module aff__U343 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008d);
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

module aff__U325 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008c);
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

module aff__U307 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
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

module aff__U289 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
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

module aff__U271 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
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

module aff__U253 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
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

module aff__U235 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
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

module aff__U217 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0088);
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

module aff__U199 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
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
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0088);
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

module aff__U163 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0087);
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

module aff__U145 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
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

module aff__U127 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
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

module aff__U109 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
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

module gaussian (
    input clk,
    input rst_n,
    input flush,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    output input_copy_stencil_op_hcompute_hw_input_stencil_read_valid,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0]
);
wire [15:0] _U726_in;
wire _U726_clk;
wire [15:0] _U726_out;
wire arr__U559_clk;
wire [15:0] arr__U559_in [2:0];
wire [15:0] arr__U559_out [2:0];
wire arr__U565_clk;
wire [15:0] arr__U565_in [2:0];
wire [15:0] arr__U565_out [2:0];
wire arr__U589_clk;
wire [15:0] arr__U589_in [2:0];
wire [15:0] arr__U589_out [2:0];
wire arr__U595_clk;
wire [15:0] arr__U595_in [2:0];
wire [15:0] arr__U595_out [2:0];
wire arr__U618_clk;
wire [15:0] arr__U618_in [2:0];
wire [15:0] arr__U618_out [2:0];
wire arr__U624_clk;
wire [15:0] arr__U624_in [2:0];
wire [15:0] arr__U624_out [2:0];
wire arr__U631_clk;
wire [15:0] arr__U631_in [2:0];
wire [15:0] arr__U631_out [2:0];
wire arr__U637_clk;
wire [15:0] arr__U637_in [2:0];
wire [15:0] arr__U637_out [2:0];
wire arr__U660_clk;
wire [15:0] arr__U660_in [2:0];
wire [15:0] arr__U660_out [2:0];
wire arr__U666_clk;
wire [15:0] arr__U666_in [2:0];
wire [15:0] arr__U666_out [2:0];
wire arr__U673_clk;
wire [15:0] arr__U673_in [2:0];
wire [15:0] arr__U673_out [2:0];
wire arr__U679_clk;
wire [15:0] arr__U679_in [2:0];
wire [15:0] arr__U679_out [2:0];
wire arr__U702_clk;
wire [15:0] arr__U702_in [2:0];
wire [15:0] arr__U702_out [2:0];
wire arr__U708_clk;
wire [15:0] arr__U708_in [2:0];
wire [15:0] arr__U708_out [2:0];
wire arr__U715_clk;
wire [15:0] arr__U715_in [2:0];
wire [15:0] arr__U715_out [2:0];
wire arr__U721_clk;
wire [15:0] arr__U721_in [2:0];
wire [15:0] arr__U721_out [2:0];
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
wire delay_reg__U617_clk;
wire delay_reg__U617_in;
wire delay_reg__U617_out;
wire delay_reg__U623_clk;
wire delay_reg__U623_in;
wire delay_reg__U623_out;
wire delay_reg__U659_clk;
wire delay_reg__U659_in;
wire delay_reg__U659_out;
wire delay_reg__U665_clk;
wire delay_reg__U665_in;
wire delay_reg__U665_out;
wire delay_reg__U701_clk;
wire delay_reg__U701_in;
wire delay_reg__U701_out;
wire delay_reg__U707_clk;
wire delay_reg__U707_in;
wire delay_reg__U707_out;
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
wire [15:0] op_hcompute_blur_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_blur_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_blur_stencil_port_controller_clk;
wire op_hcompute_blur_stencil_port_controller_valid;
wire [15:0] op_hcompute_blur_stencil_port_controller_d [2:0];
wire op_hcompute_blur_stencil_port_controller_U341_clk;
wire op_hcompute_blur_stencil_port_controller_U341_valid;
wire [15:0] op_hcompute_blur_stencil_port_controller_U341_d [2:0];
wire op_hcompute_blur_stencil_port_controller_U359_clk;
wire op_hcompute_blur_stencil_port_controller_U359_valid;
wire [15:0] op_hcompute_blur_stencil_port_controller_U359_d [2:0];
wire op_hcompute_blur_stencil_port_controller_U377_clk;
wire op_hcompute_blur_stencil_port_controller_U377_valid;
wire [15:0] op_hcompute_blur_stencil_port_controller_U377_d [2:0];
wire op_hcompute_blur_stencil_port_controller_U395_clk;
wire op_hcompute_blur_stencil_port_controller_U395_valid;
wire [15:0] op_hcompute_blur_stencil_port_controller_U395_d [2:0];
wire op_hcompute_blur_stencil_port_controller_U413_clk;
wire op_hcompute_blur_stencil_port_controller_U413_valid;
wire [15:0] op_hcompute_blur_stencil_port_controller_U413_d [2:0];
wire op_hcompute_blur_stencil_port_controller_U431_clk;
wire op_hcompute_blur_stencil_port_controller_U431_valid;
wire [15:0] op_hcompute_blur_stencil_port_controller_U431_d [2:0];
wire op_hcompute_blur_stencil_read_start;
wire op_hcompute_blur_stencil_write_start_in;
wire op_hcompute_blur_stencil_write_start_out;
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
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_clk;
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_port_controller_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U197_clk;
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U197_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_port_controller_U197_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U215_clk;
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U215_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_port_controller_U215_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U233_clk;
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U233_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_port_controller_U233_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U251_clk;
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U251_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_port_controller_U251_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U269_clk;
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U269_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_port_controller_U269_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U287_clk;
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U287_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_port_controller_U287_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U305_clk;
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U305_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_port_controller_U305_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U323_clk;
wire op_hcompute_blur_unnormalized_stencil_1_port_controller_U323_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_port_controller_U323_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_1_read_start;
wire op_hcompute_blur_unnormalized_stencil_1_write_start_in;
wire op_hcompute_blur_unnormalized_stencil_1_write_start_out;
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_blur_unnormalized_stencil_exe_start_clk;
wire op_hcompute_blur_unnormalized_stencil_exe_start_in;
wire op_hcompute_blur_unnormalized_stencil_exe_start_out;
wire [15:0] op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_blur_unnormalized_stencil_port_controller_clk;
wire op_hcompute_blur_unnormalized_stencil_port_controller_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_port_controller_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_port_controller_U125_clk;
wire op_hcompute_blur_unnormalized_stencil_port_controller_U125_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_port_controller_U125_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_port_controller_U143_clk;
wire op_hcompute_blur_unnormalized_stencil_port_controller_U143_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_port_controller_U143_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_port_controller_U161_clk;
wire op_hcompute_blur_unnormalized_stencil_port_controller_U161_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_port_controller_U161_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_port_controller_U179_clk;
wire op_hcompute_blur_unnormalized_stencil_port_controller_U179_valid;
wire [15:0] op_hcompute_blur_unnormalized_stencil_port_controller_U179_d [2:0];
wire op_hcompute_blur_unnormalized_stencil_read_start;
wire op_hcompute_blur_unnormalized_stencil_write_start_in;
wire op_hcompute_blur_unnormalized_stencil_write_start_out;
wire [15:0] op_hcompute_blur_unnormalized_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_blur_unnormalized_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_input_stencil_clk;
wire [15:0] op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0];
wire [15:0] op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire op_hcompute_hw_input_stencil_exe_start_clk;
wire op_hcompute_hw_input_stencil_exe_start_in;
wire op_hcompute_hw_input_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_input_stencil_port_controller_clk;
wire op_hcompute_hw_input_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_d [2:0];
wire op_hcompute_hw_input_stencil_port_controller_U107_clk;
wire op_hcompute_hw_input_stencil_port_controller_U107_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U107_d [2:0];
wire op_hcompute_hw_input_stencil_port_controller_U17_clk;
wire op_hcompute_hw_input_stencil_port_controller_U17_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U17_d [2:0];
wire op_hcompute_hw_input_stencil_port_controller_U35_clk;
wire op_hcompute_hw_input_stencil_port_controller_U35_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U35_d [2:0];
wire op_hcompute_hw_input_stencil_port_controller_U53_clk;
wire op_hcompute_hw_input_stencil_port_controller_U53_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U53_d [2:0];
wire op_hcompute_hw_input_stencil_port_controller_U71_clk;
wire op_hcompute_hw_input_stencil_port_controller_U71_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U71_d [2:0];
wire op_hcompute_hw_input_stencil_port_controller_U89_clk;
wire op_hcompute_hw_input_stencil_port_controller_U89_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U89_d [2:0];
wire op_hcompute_hw_input_stencil_read_start;
wire op_hcompute_hw_input_stencil_write_start_in;
wire op_hcompute_hw_input_stencil_write_start_out;
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_blur_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_clk;
wire op_hcompute_hw_output_stencil_exe_start_in;
wire op_hcompute_hw_output_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_port_controller_clk;
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U449_clk;
wire op_hcompute_hw_output_stencil_port_controller_U449_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U449_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U467_clk;
wire op_hcompute_hw_output_stencil_port_controller_U467_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U467_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U485_clk;
wire op_hcompute_hw_output_stencil_port_controller_U485_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U485_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U503_clk;
wire op_hcompute_hw_output_stencil_port_controller_U503_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U503_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U521_clk;
wire op_hcompute_hw_output_stencil_port_controller_U521_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U521_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U539_clk;
wire op_hcompute_hw_output_stencil_port_controller_U539_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U539_d [2:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start_in;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
assign _U726_in = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
assign _U726_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U726 (
    .in(_U726_in),
    .clk(_U726_clk),
    .out(_U726_out)
);
assign arr__U559_clk = clk;
assign arr__U559_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign arr__U559_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign arr__U559_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
array_delay_U560 arr__U559 (
    .clk(arr__U559_clk),
    .in(arr__U559_in),
    .out(arr__U559_out)
);
assign arr__U565_clk = clk;
assign arr__U565_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign arr__U565_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign arr__U565_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
array_delay_U566 arr__U565 (
    .clk(arr__U565_clk),
    .in(arr__U565_in),
    .out(arr__U565_out)
);
assign arr__U589_clk = clk;
assign arr__U589_in[2] = op_hcompute_blur_unnormalized_stencil_port_controller_d[2];
assign arr__U589_in[1] = op_hcompute_blur_unnormalized_stencil_port_controller_d[1];
assign arr__U589_in[0] = op_hcompute_blur_unnormalized_stencil_port_controller_d[0];
array_delay_U590 arr__U589 (
    .clk(arr__U589_clk),
    .in(arr__U589_in),
    .out(arr__U589_out)
);
assign arr__U595_clk = clk;
assign arr__U595_in[2] = op_hcompute_blur_unnormalized_stencil_port_controller_d[2];
assign arr__U595_in[1] = op_hcompute_blur_unnormalized_stencil_port_controller_d[1];
assign arr__U595_in[0] = op_hcompute_blur_unnormalized_stencil_port_controller_d[0];
array_delay_U596 arr__U595 (
    .clk(arr__U595_clk),
    .in(arr__U595_in),
    .out(arr__U595_out)
);
assign arr__U618_clk = clk;
assign arr__U618_in[2] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[2];
assign arr__U618_in[1] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[1];
assign arr__U618_in[0] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[0];
array_delay_U619 arr__U618 (
    .clk(arr__U618_clk),
    .in(arr__U618_in),
    .out(arr__U618_out)
);
assign arr__U624_clk = clk;
assign arr__U624_in[2] = arr__U618_out[2];
assign arr__U624_in[1] = arr__U618_out[1];
assign arr__U624_in[0] = arr__U618_out[0];
array_delay_U625 arr__U624 (
    .clk(arr__U624_clk),
    .in(arr__U624_in),
    .out(arr__U624_out)
);
assign arr__U631_clk = clk;
assign arr__U631_in[2] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[2];
assign arr__U631_in[1] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[1];
assign arr__U631_in[0] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[0];
array_delay_U632 arr__U631 (
    .clk(arr__U631_clk),
    .in(arr__U631_in),
    .out(arr__U631_out)
);
assign arr__U637_clk = clk;
assign arr__U637_in[2] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[2];
assign arr__U637_in[1] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[1];
assign arr__U637_in[0] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[0];
array_delay_U638 arr__U637 (
    .clk(arr__U637_clk),
    .in(arr__U637_in),
    .out(arr__U637_out)
);
assign arr__U660_clk = clk;
assign arr__U660_in[2] = op_hcompute_blur_stencil_port_controller_d[2];
assign arr__U660_in[1] = op_hcompute_blur_stencil_port_controller_d[1];
assign arr__U660_in[0] = op_hcompute_blur_stencil_port_controller_d[0];
array_delay_U661 arr__U660 (
    .clk(arr__U660_clk),
    .in(arr__U660_in),
    .out(arr__U660_out)
);
assign arr__U666_clk = clk;
assign arr__U666_in[2] = arr__U660_out[2];
assign arr__U666_in[1] = arr__U660_out[1];
assign arr__U666_in[0] = arr__U660_out[0];
array_delay_U667 arr__U666 (
    .clk(arr__U666_clk),
    .in(arr__U666_in),
    .out(arr__U666_out)
);
assign arr__U673_clk = clk;
assign arr__U673_in[2] = op_hcompute_blur_stencil_port_controller_d[2];
assign arr__U673_in[1] = op_hcompute_blur_stencil_port_controller_d[1];
assign arr__U673_in[0] = op_hcompute_blur_stencil_port_controller_d[0];
array_delay_U674 arr__U673 (
    .clk(arr__U673_clk),
    .in(arr__U673_in),
    .out(arr__U673_out)
);
assign arr__U679_clk = clk;
assign arr__U679_in[2] = op_hcompute_blur_stencil_port_controller_d[2];
assign arr__U679_in[1] = op_hcompute_blur_stencil_port_controller_d[1];
assign arr__U679_in[0] = op_hcompute_blur_stencil_port_controller_d[0];
array_delay_U680 arr__U679 (
    .clk(arr__U679_clk),
    .in(arr__U679_in),
    .out(arr__U679_out)
);
assign arr__U702_clk = clk;
assign arr__U702_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign arr__U702_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign arr__U702_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U703 arr__U702 (
    .clk(arr__U702_clk),
    .in(arr__U702_in),
    .out(arr__U702_out)
);
assign arr__U708_clk = clk;
assign arr__U708_in[2] = arr__U702_out[2];
assign arr__U708_in[1] = arr__U702_out[1];
assign arr__U708_in[0] = arr__U702_out[0];
array_delay_U709 arr__U708 (
    .clk(arr__U708_clk),
    .in(arr__U708_in),
    .out(arr__U708_out)
);
assign arr__U715_clk = clk;
assign arr__U715_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign arr__U715_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign arr__U715_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U716 arr__U715 (
    .clk(arr__U715_clk),
    .in(arr__U715_in),
    .out(arr__U715_out)
);
assign arr__U721_clk = clk;
assign arr__U721_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign arr__U721_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign arr__U721_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U722 arr__U721 (
    .clk(arr__U721_clk),
    .in(arr__U721_in),
    .out(arr__U721_out)
);
assign blur_stencil_clk = clk;
assign blur_stencil_flush = flush;
assign blur_stencil_rst_n = rst_n;
assign blur_stencil_op_hcompute_blur_stencil_write_wen = op_hcompute_blur_stencil_write_start_out;
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
assign blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_wen = op_hcompute_blur_unnormalized_stencil_1_write_start_out;
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
assign blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_wen = op_hcompute_blur_unnormalized_stencil_write_start_out;
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
assign delay_reg__U617_clk = clk;
assign delay_reg__U617_in = op_hcompute_blur_unnormalized_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U617 (
    .clk(delay_reg__U617_clk),
    .in(delay_reg__U617_in),
    .out(delay_reg__U617_out)
);
assign delay_reg__U623_clk = clk;
assign delay_reg__U623_in = delay_reg__U617_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U623 (
    .clk(delay_reg__U623_clk),
    .in(delay_reg__U623_in),
    .out(delay_reg__U623_out)
);
assign delay_reg__U659_clk = clk;
assign delay_reg__U659_in = op_hcompute_blur_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U659 (
    .clk(delay_reg__U659_clk),
    .in(delay_reg__U659_in),
    .out(delay_reg__U659_out)
);
assign delay_reg__U665_clk = clk;
assign delay_reg__U665_in = delay_reg__U659_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U665 (
    .clk(delay_reg__U665_clk),
    .in(delay_reg__U665_in),
    .out(delay_reg__U665_out)
);
assign delay_reg__U701_clk = clk;
assign delay_reg__U701_in = op_hcompute_hw_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U701 (
    .clk(delay_reg__U701_clk),
    .in(delay_reg__U701_in),
    .out(delay_reg__U701_out)
);
assign delay_reg__U707_clk = clk;
assign delay_reg__U707_in = delay_reg__U701_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U707 (
    .clk(delay_reg__U707_clk),
    .in(delay_reg__U707_in),
    .out(delay_reg__U707_out)
);
assign hw_input_stencil_clk = clk;
assign hw_input_stencil_flush = flush;
assign hw_input_stencil_rst_n = rst_n;
assign hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_ren = op_hcompute_blur_unnormalized_stencil_1_read_start;
assign hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[2];
assign hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[1];
assign hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] = op_hcompute_blur_unnormalized_stencil_1_port_controller_d[0];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_wen = op_hcompute_hw_input_stencil_write_start_out;
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
assign op_hcompute_blur_stencil_exe_start_control_vars_in[2] = arr__U679_out[2];
assign op_hcompute_blur_stencil_exe_start_control_vars_in[1] = arr__U679_out[1];
assign op_hcompute_blur_stencil_exe_start_control_vars_in[0] = arr__U679_out[0];
op_hcompute_blur_stencil_exe_start_control_vars_pt__U678 op_hcompute_blur_stencil_exe_start_control_vars (
    .in(op_hcompute_blur_stencil_exe_start_control_vars_in),
    .out(op_hcompute_blur_stencil_exe_start_control_vars_out)
);
assign op_hcompute_blur_stencil_port_controller_clk = clk;
affine_controller__U642 op_hcompute_blur_stencil_port_controller (
    .clk(op_hcompute_blur_stencil_port_controller_clk),
    .valid(op_hcompute_blur_stencil_port_controller_valid),
    .d(op_hcompute_blur_stencil_port_controller_d)
);
assign op_hcompute_blur_stencil_port_controller_U341_clk = clk;
affine_controller__U324 op_hcompute_blur_stencil_port_controller_U341 (
    .clk(op_hcompute_blur_stencil_port_controller_U341_clk),
    .valid(op_hcompute_blur_stencil_port_controller_U341_valid),
    .d(op_hcompute_blur_stencil_port_controller_U341_d)
);
assign op_hcompute_blur_stencil_port_controller_U359_clk = clk;
affine_controller__U342 op_hcompute_blur_stencil_port_controller_U359 (
    .clk(op_hcompute_blur_stencil_port_controller_U359_clk),
    .valid(op_hcompute_blur_stencil_port_controller_U359_valid),
    .d(op_hcompute_blur_stencil_port_controller_U359_d)
);
assign op_hcompute_blur_stencil_port_controller_U377_clk = clk;
affine_controller__U360 op_hcompute_blur_stencil_port_controller_U377 (
    .clk(op_hcompute_blur_stencil_port_controller_U377_clk),
    .valid(op_hcompute_blur_stencil_port_controller_U377_valid),
    .d(op_hcompute_blur_stencil_port_controller_U377_d)
);
assign op_hcompute_blur_stencil_port_controller_U395_clk = clk;
affine_controller__U378 op_hcompute_blur_stencil_port_controller_U395 (
    .clk(op_hcompute_blur_stencil_port_controller_U395_clk),
    .valid(op_hcompute_blur_stencil_port_controller_U395_valid),
    .d(op_hcompute_blur_stencil_port_controller_U395_d)
);
assign op_hcompute_blur_stencil_port_controller_U413_clk = clk;
affine_controller__U396 op_hcompute_blur_stencil_port_controller_U413 (
    .clk(op_hcompute_blur_stencil_port_controller_U413_clk),
    .valid(op_hcompute_blur_stencil_port_controller_U413_valid),
    .d(op_hcompute_blur_stencil_port_controller_U413_d)
);
assign op_hcompute_blur_stencil_port_controller_U431_clk = clk;
affine_controller__U414 op_hcompute_blur_stencil_port_controller_U431 (
    .clk(op_hcompute_blur_stencil_port_controller_U431_clk),
    .valid(op_hcompute_blur_stencil_port_controller_U431_valid),
    .d(op_hcompute_blur_stencil_port_controller_U431_d)
);
assign op_hcompute_blur_stencil_read_start = op_hcompute_blur_stencil_port_controller_valid;
assign op_hcompute_blur_stencil_write_start_in = op_hcompute_blur_stencil_exe_start_out;
op_hcompute_blur_stencil_write_start_pt__U671 op_hcompute_blur_stencil_write_start (
    .in(op_hcompute_blur_stencil_write_start_in),
    .out(op_hcompute_blur_stencil_write_start_out)
);
assign op_hcompute_blur_stencil_write_start_control_vars_in[2] = arr__U673_out[2];
assign op_hcompute_blur_stencil_write_start_control_vars_in[1] = arr__U673_out[1];
assign op_hcompute_blur_stencil_write_start_control_vars_in[0] = arr__U673_out[0];
op_hcompute_blur_stencil_write_start_control_vars_pt__U672 op_hcompute_blur_stencil_write_start_control_vars (
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
assign op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_in[2] = arr__U637_out[2];
assign op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_in[1] = arr__U637_out[1];
assign op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_in[0] = arr__U637_out[0];
op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_pt__U636 op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars (
    .in(op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_blur_unnormalized_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_blur_unnormalized_stencil_1_port_controller_clk = clk;
affine_controller__U600 op_hcompute_blur_unnormalized_stencil_1_port_controller (
    .clk(op_hcompute_blur_unnormalized_stencil_1_port_controller_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_1_port_controller_valid),
    .d(op_hcompute_blur_unnormalized_stencil_1_port_controller_d)
);
assign op_hcompute_blur_unnormalized_stencil_1_port_controller_U197_clk = clk;
affine_controller__U180 op_hcompute_blur_unnormalized_stencil_1_port_controller_U197 (
    .clk(op_hcompute_blur_unnormalized_stencil_1_port_controller_U197_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_1_port_controller_U197_valid),
    .d(op_hcompute_blur_unnormalized_stencil_1_port_controller_U197_d)
);
assign op_hcompute_blur_unnormalized_stencil_1_port_controller_U215_clk = clk;
affine_controller__U198 op_hcompute_blur_unnormalized_stencil_1_port_controller_U215 (
    .clk(op_hcompute_blur_unnormalized_stencil_1_port_controller_U215_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_1_port_controller_U215_valid),
    .d(op_hcompute_blur_unnormalized_stencil_1_port_controller_U215_d)
);
assign op_hcompute_blur_unnormalized_stencil_1_port_controller_U233_clk = clk;
affine_controller__U216 op_hcompute_blur_unnormalized_stencil_1_port_controller_U233 (
    .clk(op_hcompute_blur_unnormalized_stencil_1_port_controller_U233_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_1_port_controller_U233_valid),
    .d(op_hcompute_blur_unnormalized_stencil_1_port_controller_U233_d)
);
assign op_hcompute_blur_unnormalized_stencil_1_port_controller_U251_clk = clk;
affine_controller__U234 op_hcompute_blur_unnormalized_stencil_1_port_controller_U251 (
    .clk(op_hcompute_blur_unnormalized_stencil_1_port_controller_U251_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_1_port_controller_U251_valid),
    .d(op_hcompute_blur_unnormalized_stencil_1_port_controller_U251_d)
);
assign op_hcompute_blur_unnormalized_stencil_1_port_controller_U269_clk = clk;
affine_controller__U252 op_hcompute_blur_unnormalized_stencil_1_port_controller_U269 (
    .clk(op_hcompute_blur_unnormalized_stencil_1_port_controller_U269_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_1_port_controller_U269_valid),
    .d(op_hcompute_blur_unnormalized_stencil_1_port_controller_U269_d)
);
assign op_hcompute_blur_unnormalized_stencil_1_port_controller_U287_clk = clk;
affine_controller__U270 op_hcompute_blur_unnormalized_stencil_1_port_controller_U287 (
    .clk(op_hcompute_blur_unnormalized_stencil_1_port_controller_U287_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_1_port_controller_U287_valid),
    .d(op_hcompute_blur_unnormalized_stencil_1_port_controller_U287_d)
);
assign op_hcompute_blur_unnormalized_stencil_1_port_controller_U305_clk = clk;
affine_controller__U288 op_hcompute_blur_unnormalized_stencil_1_port_controller_U305 (
    .clk(op_hcompute_blur_unnormalized_stencil_1_port_controller_U305_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_1_port_controller_U305_valid),
    .d(op_hcompute_blur_unnormalized_stencil_1_port_controller_U305_d)
);
assign op_hcompute_blur_unnormalized_stencil_1_port_controller_U323_clk = clk;
affine_controller__U306 op_hcompute_blur_unnormalized_stencil_1_port_controller_U323 (
    .clk(op_hcompute_blur_unnormalized_stencil_1_port_controller_U323_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_1_port_controller_U323_valid),
    .d(op_hcompute_blur_unnormalized_stencil_1_port_controller_U323_d)
);
assign op_hcompute_blur_unnormalized_stencil_1_read_start = op_hcompute_blur_unnormalized_stencil_1_port_controller_valid;
assign op_hcompute_blur_unnormalized_stencil_1_write_start_in = op_hcompute_blur_unnormalized_stencil_1_exe_start_out;
op_hcompute_blur_unnormalized_stencil_1_write_start_pt__U629 op_hcompute_blur_unnormalized_stencil_1_write_start (
    .in(op_hcompute_blur_unnormalized_stencil_1_write_start_in),
    .out(op_hcompute_blur_unnormalized_stencil_1_write_start_out)
);
assign op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_in[2] = arr__U631_out[2];
assign op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_in[1] = arr__U631_out[1];
assign op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_in[0] = arr__U631_out[0];
op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars_pt__U630 op_hcompute_blur_unnormalized_stencil_1_write_start_control_vars (
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
assign op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_in[2] = arr__U595_out[2];
assign op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_in[1] = arr__U595_out[1];
assign op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_in[0] = arr__U595_out[0];
op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_pt__U594 op_hcompute_blur_unnormalized_stencil_exe_start_control_vars (
    .in(op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_in),
    .out(op_hcompute_blur_unnormalized_stencil_exe_start_control_vars_out)
);
assign op_hcompute_blur_unnormalized_stencil_port_controller_clk = clk;
affine_controller__U570 op_hcompute_blur_unnormalized_stencil_port_controller (
    .clk(op_hcompute_blur_unnormalized_stencil_port_controller_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_port_controller_valid),
    .d(op_hcompute_blur_unnormalized_stencil_port_controller_d)
);
assign op_hcompute_blur_unnormalized_stencil_port_controller_U125_clk = clk;
affine_controller__U108 op_hcompute_blur_unnormalized_stencil_port_controller_U125 (
    .clk(op_hcompute_blur_unnormalized_stencil_port_controller_U125_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_port_controller_U125_valid),
    .d(op_hcompute_blur_unnormalized_stencil_port_controller_U125_d)
);
assign op_hcompute_blur_unnormalized_stencil_port_controller_U143_clk = clk;
affine_controller__U126 op_hcompute_blur_unnormalized_stencil_port_controller_U143 (
    .clk(op_hcompute_blur_unnormalized_stencil_port_controller_U143_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_port_controller_U143_valid),
    .d(op_hcompute_blur_unnormalized_stencil_port_controller_U143_d)
);
assign op_hcompute_blur_unnormalized_stencil_port_controller_U161_clk = clk;
affine_controller__U144 op_hcompute_blur_unnormalized_stencil_port_controller_U161 (
    .clk(op_hcompute_blur_unnormalized_stencil_port_controller_U161_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_port_controller_U161_valid),
    .d(op_hcompute_blur_unnormalized_stencil_port_controller_U161_d)
);
assign op_hcompute_blur_unnormalized_stencil_port_controller_U179_clk = clk;
affine_controller__U162 op_hcompute_blur_unnormalized_stencil_port_controller_U179 (
    .clk(op_hcompute_blur_unnormalized_stencil_port_controller_U179_clk),
    .valid(op_hcompute_blur_unnormalized_stencil_port_controller_U179_valid),
    .d(op_hcompute_blur_unnormalized_stencil_port_controller_U179_d)
);
assign op_hcompute_blur_unnormalized_stencil_read_start = op_hcompute_blur_unnormalized_stencil_port_controller_valid;
assign op_hcompute_blur_unnormalized_stencil_write_start_in = op_hcompute_blur_unnormalized_stencil_exe_start_out;
op_hcompute_blur_unnormalized_stencil_write_start_pt__U587 op_hcompute_blur_unnormalized_stencil_write_start (
    .in(op_hcompute_blur_unnormalized_stencil_write_start_in),
    .out(op_hcompute_blur_unnormalized_stencil_write_start_out)
);
assign op_hcompute_blur_unnormalized_stencil_write_start_control_vars_in[2] = arr__U589_out[2];
assign op_hcompute_blur_unnormalized_stencil_write_start_control_vars_in[1] = arr__U589_out[1];
assign op_hcompute_blur_unnormalized_stencil_write_start_control_vars_in[0] = arr__U589_out[0];
op_hcompute_blur_unnormalized_stencil_write_start_control_vars_pt__U588 op_hcompute_blur_unnormalized_stencil_write_start_control_vars (
    .in(op_hcompute_blur_unnormalized_stencil_write_start_control_vars_in),
    .out(op_hcompute_blur_unnormalized_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_input_stencil_clk = clk;
assign op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read[0] = _U726_out;
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
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[2] = arr__U565_out[2];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[1] = arr__U565_out[1];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[0] = arr__U565_out[0];
op_hcompute_hw_input_stencil_exe_start_control_vars_pt__U564 op_hcompute_hw_input_stencil_exe_start_control_vars (
    .in(op_hcompute_hw_input_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_input_stencil_port_controller_clk = clk;
affine_controller__U540 op_hcompute_hw_input_stencil_port_controller (
    .clk(op_hcompute_hw_input_stencil_port_controller_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U107_clk = clk;
affine_controller__U90 op_hcompute_hw_input_stencil_port_controller_U107 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U107_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U107_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U107_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U17_clk = clk;
affine_controller__U0 op_hcompute_hw_input_stencil_port_controller_U17 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U17_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U17_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U17_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U35_clk = clk;
affine_controller__U18 op_hcompute_hw_input_stencil_port_controller_U35 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U35_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U35_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U35_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U53_clk = clk;
affine_controller__U36 op_hcompute_hw_input_stencil_port_controller_U53 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U53_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U53_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U53_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U71_clk = clk;
affine_controller__U54 op_hcompute_hw_input_stencil_port_controller_U71 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U71_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U71_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U71_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U89_clk = clk;
affine_controller__U72 op_hcompute_hw_input_stencil_port_controller_U89 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U89_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U89_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U89_d)
);
assign op_hcompute_hw_input_stencil_read_start = op_hcompute_hw_input_stencil_port_controller_valid;
assign op_hcompute_hw_input_stencil_write_start_in = op_hcompute_hw_input_stencil_exe_start_out;
op_hcompute_hw_input_stencil_write_start_pt__U557 op_hcompute_hw_input_stencil_write_start (
    .in(op_hcompute_hw_input_stencil_write_start_in),
    .out(op_hcompute_hw_input_stencil_write_start_out)
);
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[2] = arr__U559_out[2];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[1] = arr__U559_out[1];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[0] = arr__U559_out[0];
op_hcompute_hw_input_stencil_write_start_control_vars_pt__U558 op_hcompute_hw_input_stencil_write_start_control_vars (
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
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = arr__U721_out[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = arr__U721_out[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = arr__U721_out[0];
op_hcompute_hw_output_stencil_exe_start_control_vars_pt__U720 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U684 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U449_clk = clk;
affine_controller__U432 op_hcompute_hw_output_stencil_port_controller_U449 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U449_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U449_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U449_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U467_clk = clk;
affine_controller__U450 op_hcompute_hw_output_stencil_port_controller_U467 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U467_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U467_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U467_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U485_clk = clk;
affine_controller__U468 op_hcompute_hw_output_stencil_port_controller_U485 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U485_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U485_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U485_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U503_clk = clk;
affine_controller__U486 op_hcompute_hw_output_stencil_port_controller_U503 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U503_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U503_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U503_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U521_clk = clk;
affine_controller__U504 op_hcompute_hw_output_stencil_port_controller_U521 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U521_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U521_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U521_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U539_clk = clk;
affine_controller__U522 op_hcompute_hw_output_stencil_port_controller_U539 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U539_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U539_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U539_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start_in = op_hcompute_hw_output_stencil_exe_start_out;
op_hcompute_hw_output_stencil_write_start_pt__U713 op_hcompute_hw_output_stencil_write_start (
    .in(op_hcompute_hw_output_stencil_write_start_in),
    .out(hw_output_stencil_op_hcompute_hw_output_stencil_write_en)
);
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = arr__U715_out[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = arr__U715_out[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = arr__U715_out[0];
op_hcompute_hw_output_stencil_write_start_control_vars_pt__U714 op_hcompute_hw_output_stencil_write_start_control_vars (
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign input_copy_stencil_op_hcompute_hw_input_stencil_read_valid = op_hcompute_hw_input_stencil_read_start;
endmodule

