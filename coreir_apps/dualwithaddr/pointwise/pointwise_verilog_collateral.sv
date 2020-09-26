module hw_input_global_wrapper_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0] ,
	input op_hcompute_mult_stencil_read_ren,
	input [15:0] op_hcompute_mult_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_mult_stencil_read [0:0] );

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
    op_hcompute_mult_stencil_read[0] = RAM[(((0 + 0*op_hcompute_mult_stencil_read_ctrl_vars[0] + 1*op_hcompute_mult_stencil_read_ctrl_vars[1] + 0*op_hcompute_mult_stencil_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_mult_stencil_read_ctrl_vars[0] + 0*op_hcompute_mult_stencil_read_ctrl_vars[1] + 1*op_hcompute_mult_stencil_read_ctrl_vars[2])) - 0) * 64];
  end

endmodule

module mult_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] ,
	input op_hcompute_mult_stencil_write_wen,
	input [15:0] op_hcompute_mult_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_mult_stencil_write [0:0] );

  // Storage
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
  logic [15:0]  RAM [4095:0];

  always @(posedge clk) begin
    if (op_hcompute_mult_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_mult_stencil_write_ctrl_vars[0] + 1*op_hcompute_mult_stencil_write_ctrl_vars[1] + 0*op_hcompute_mult_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_mult_stencil_write_ctrl_vars[0] + 0*op_hcompute_mult_stencil_write_ctrl_vars[1] + 1*op_hcompute_mult_stencil_write_ctrl_vars[2])) - 0) * 64] <= op_hcompute_mult_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_hw_output_stencil_read[0] = RAM[(((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 64];
  end

endmodule

