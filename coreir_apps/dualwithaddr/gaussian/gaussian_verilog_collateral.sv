  // DD from blur_stencil_op_hcompute_blur_stencil_16 to blur_stencil_op_hcompute_hw_output_stencil_1 = 1
module blur_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_blur_stencil_write_wen,
	input [15:0] op_hcompute_blur_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_blur_stencil_write [0:0] ,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] );

  // Storage
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 3844
  logic [15:0]  RAM [3843:0];

  always @(posedge clk) begin
    if (op_hcompute_blur_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_blur_stencil_write_ctrl_vars[0] + 0*op_hcompute_blur_stencil_write_ctrl_vars[1] + 1*op_hcompute_blur_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_blur_stencil_write_ctrl_vars[0] + 1*op_hcompute_blur_stencil_write_ctrl_vars[1] + 0*op_hcompute_blur_stencil_write_ctrl_vars[2])) - 0) * 62] <= op_hcompute_blur_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_hw_output_stencil_read[0] = RAM[(((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 62];
  end

endmodule

  // DD from blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4 to blur_unnormalized_stencil_op_hcompute_blur_stencil_17 = 1
module blur_unnormalized_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_blur_stencil_read_ren,
	input [15:0] op_hcompute_blur_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_blur_stencil_read [0:0] ,
	input op_hcompute_blur_unnormalized_stencil_1_write_wen,
	input [15:0] op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_blur_unnormalized_stencil_1_write [0:0] );

  // Storage
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 3844
  logic [15:0]  RAM [3843:0];

  always @(posedge clk) begin
    if (op_hcompute_blur_unnormalized_stencil_1_write_wen) begin
      RAM[(((0 + 0*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[2])) - 0) * 62] <= op_hcompute_blur_unnormalized_stencil_1_write[0];
    end
  end
  always @(*) begin
    op_hcompute_blur_stencil_read[0] = RAM[(((0 + 0*op_hcompute_blur_stencil_read_ctrl_vars[0] + 0*op_hcompute_blur_stencil_read_ctrl_vars[1] + 1*op_hcompute_blur_stencil_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_blur_stencil_read_ctrl_vars[0] + 1*op_hcompute_blur_stencil_read_ctrl_vars[1] + 0*op_hcompute_blur_stencil_read_ctrl_vars[2])) - 0) * 62];
  end

endmodule

  // DD from blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15 to blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5 = 1
module blur_unnormalized_stencil_clkwrk_dsa0_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_blur_unnormalized_stencil_1_read_ren,
	input [15:0] op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_blur_unnormalized_stencil_1_read [0:0] ,
	input op_hcompute_blur_unnormalized_stencil_write_wen,
	input [15:0] op_hcompute_blur_unnormalized_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_blur_unnormalized_stencil_write [0:0] );

  // Storage
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 3844
  logic [15:0]  RAM [3843:0];

  always @(posedge clk) begin
    if (op_hcompute_blur_unnormalized_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[0] + 0*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[0] + 1*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[1] + 0*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[2])) - 0) * 62] <= op_hcompute_blur_unnormalized_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_blur_unnormalized_stencil_1_read[0] = RAM[(((0 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 62];
  end

endmodule

  // DD from hw_input_stencil_op_hcompute_hw_input_stencil_2 to hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10 = 67
  // DD from hw_input_stencil_op_hcompute_hw_input_stencil_2 to hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11 = 66
  // DD from hw_input_stencil_op_hcompute_hw_input_stencil_2 to hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12 = 4
  // DD from hw_input_stencil_op_hcompute_hw_input_stencil_2 to hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13 = 2
  // DD from hw_input_stencil_op_hcompute_hw_input_stencil_2 to hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_14 = 3
  // DD from hw_input_stencil_op_hcompute_hw_input_stencil_2 to hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6 = 132
  // DD from hw_input_stencil_op_hcompute_hw_input_stencil_2 to hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7 = 131
  // DD from hw_input_stencil_op_hcompute_hw_input_stencil_2 to hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8 = 130
  // DD from hw_input_stencil_op_hcompute_hw_input_stencil_2 to hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9 = 68
module hw_input_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_blur_unnormalized_stencil_1_read_ren,
	input [15:0] op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_blur_unnormalized_stencil_1_read [8:0] ,
	input op_hcompute_hw_input_stencil_write_wen,
	input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_stencil_write [0:0] );

  // Storage
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
  logic [15:0]  RAM [4095:0];

  always @(posedge clk) begin
    if (op_hcompute_hw_input_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_hw_input_stencil_write_ctrl_vars[0] + 0*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_hw_input_stencil_write_ctrl_vars[0] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 0*op_hcompute_hw_input_stencil_write_ctrl_vars[2])) - 0) * 64] <= op_hcompute_hw_input_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_blur_unnormalized_stencil_1_read[4] = RAM[(((1 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((1 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_blur_unnormalized_stencil_1_read[5] = RAM[(((2 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((1 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_blur_unnormalized_stencil_1_read[6] = RAM[(((0 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((2 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_blur_unnormalized_stencil_1_read[7] = RAM[(((2 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((2 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_blur_unnormalized_stencil_1_read[8] = RAM[(((1 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((2 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_blur_unnormalized_stencil_1_read[0] = RAM[(((0 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_blur_unnormalized_stencil_1_read[1] = RAM[(((1 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_blur_unnormalized_stencil_1_read[2] = RAM[(((2 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 64];
    op_hcompute_blur_unnormalized_stencil_1_read[3] = RAM[(((0 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((1 + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0) * 64];
  end

endmodule

