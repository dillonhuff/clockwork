module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_10_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr();
endmodule
module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_11_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr();
endmodule
module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_12_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr();
endmodule
module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_13_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr();
endmodule
module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_5_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr();
endmodule
module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_6_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr();
endmodule
module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_7_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr();
endmodule
module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_8_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr();
endmodule
module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_9_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr();
endmodule
module conv1_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv1_stencil_1_write_wen,
	input [15:0] op_hcompute_conv1_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv1_stencil_1_write [0:0] ,
	input op_hcompute_conv2_stencil_1_read_ren,
	input [15:0] op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_conv2_stencil_1_read [8:0] );

  // Storage
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 3844
  logic [15:0]  RAM [3843:0];

  always @(posedge clk) begin
    if (op_hcompute_conv1_stencil_1_write_wen) begin
      RAM[(((0 + 0*op_hcompute_conv1_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_1_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv1_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_1_write_ctrl_vars[2])) - 0) * 62] <= op_hcompute_conv1_stencil_1_write[0];
    end
  end
  always @(*) begin
    op_hcompute_conv2_stencil_1_read[5] = RAM[(((1 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((1 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 62];
    op_hcompute_conv2_stencil_1_read[6] = RAM[(((1 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((2 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 62];
    op_hcompute_conv2_stencil_1_read[7] = RAM[(((2 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 62];
    op_hcompute_conv2_stencil_1_read[8] = RAM[(((2 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((2 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 62];
    op_hcompute_conv2_stencil_1_read[0] = RAM[(((2 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((1 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 62];
    op_hcompute_conv2_stencil_1_read[1] = RAM[(((0 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 62];
    op_hcompute_conv2_stencil_1_read[2] = RAM[(((0 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((1 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 62];
    op_hcompute_conv2_stencil_1_read[3] = RAM[(((0 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((2 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 62];
    op_hcompute_conv2_stencil_1_read[4] = RAM[(((1 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 62];
  end

endmodule

module conv1_stencil_clkwrk_dsa0_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_17_to_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_27_sr();
endmodule
module conv1_stencil_clkwrk_dsa0_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv1_stencil_1_read_ren,
	input [15:0] op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_conv1_stencil_1_read [0:0] ,
	input op_hcompute_conv1_stencil_write_wen,
	input [15:0] op_hcompute_conv1_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv1_stencil_write [0:0] );

  // Storage
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 3844
  logic [15:0]  RAM [3843:0];

  always @(posedge clk) begin
    if (op_hcompute_conv1_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_conv1_stencil_write_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_write_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv1_stencil_write_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_write_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_write_ctrl_vars[2])) - 0) * 62] <= op_hcompute_conv1_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_conv1_stencil_1_read[0] = RAM[(((0 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 62];
  end

endmodule

module conv2_stencil_conv2_stencil_op_hcompute_hw_output_stencil_1_to_conv2_stencil_op_hcompute_conv2_stencil_1_4_sr();
endmodule
module conv2_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv2_stencil_1_write_wen,
	input [15:0] op_hcompute_conv2_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv2_stencil_1_write [0:0] ,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] );

  // Storage
	// RAM Box: {[0, 59], [0, 59]}
	// Capacity: 3600
  logic [15:0]  RAM [3599:0];

  always @(posedge clk) begin
    if (op_hcompute_conv2_stencil_1_write_wen) begin
      RAM[(((0 + 0*op_hcompute_conv2_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_1_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv2_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_1_write_ctrl_vars[2])) - 0) * 60] <= op_hcompute_conv2_stencil_1_write[0];
    end
  end
  always @(*) begin
    op_hcompute_hw_output_stencil_read[0] = RAM[(((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 60];
  end

endmodule

module conv2_stencil_clkwrk_dsa1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_14_to_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_15_sr();
endmodule
module conv2_stencil_clkwrk_dsa1_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv2_stencil_1_read_ren,
	input [15:0] op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_conv2_stencil_1_read [0:0] ,
	input op_hcompute_conv2_stencil_write_wen,
	input [15:0] op_hcompute_conv2_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv2_stencil_write [0:0] );

  // Storage
	// RAM Box: {[0, 59], [0, 59]}
	// Capacity: 3600
  logic [15:0]  RAM [3599:0];

  always @(posedge clk) begin
    if (op_hcompute_conv2_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_conv2_stencil_write_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_write_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv2_stencil_write_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_write_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_write_ctrl_vars[2])) - 0) * 60] <= op_hcompute_conv2_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_conv2_stencil_1_read[0] = RAM[(((0 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_1_read_ctrl_vars[2])) - 0) * 60];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_18_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr();
endmodule
module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_19_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr();
endmodule
module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_20_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr();
endmodule
module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_21_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr();
endmodule
module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_22_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr();
endmodule
module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_23_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr();
endmodule
module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_24_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr();
endmodule
module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_25_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr();
endmodule
module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_26_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr();
endmodule
module hw_input_global_wrapper_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv1_stencil_1_read_ren,
	input [15:0] op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_conv1_stencil_1_read [8:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0] );

  // Storage
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
  logic [15:0]  RAM [4095:0];

  always @(posedge clk) begin
    if (op_hcompute_hw_input_global_wrapper_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] + 1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])) - 0) * 64] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_conv1_stencil_1_read[0] = RAM[(((0 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_conv1_stencil_1_read[1] = RAM[(((1 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_conv1_stencil_1_read[2] = RAM[(((2 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_conv1_stencil_1_read[3] = RAM[(((0 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((1 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_conv1_stencil_1_read[4] = RAM[(((1 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((1 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_conv1_stencil_1_read[5] = RAM[(((2 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((1 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_conv1_stencil_1_read[6] = RAM[(((0 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((2 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_conv1_stencil_1_read[7] = RAM[(((2 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((2 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_conv1_stencil_1_read[8] = RAM[(((1 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((2 + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_1_read_ctrl_vars[2])) - 0) * 64];
  end

endmodule

