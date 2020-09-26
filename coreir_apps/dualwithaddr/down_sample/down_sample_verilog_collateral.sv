module avg_pool_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_1_to_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_sr();
endmodule
module avg_pool_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_avg_pool_stencil_1_write_wen,
	input [15:0] op_hcompute_avg_pool_stencil_1_write_ctrl_vars [3:0] ,
	input logic [15:0] op_hcompute_avg_pool_stencil_1_write [0:0] ,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [3:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] );

  // Storage
	// RAM Box: {[0, 31], [0, 31], [0, 3]}
	// Capacity: 4096
  logic [15:0]  RAM [4095:0];

  always @(posedge clk) begin
    if (op_hcompute_avg_pool_stencil_1_write_wen) begin
      RAM[(((0 + 0*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3])) - 0) * 1 + (((0 + 0*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3])) - 0) * 32 + (((0 + 0*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3])) - 0) * 1024] <= op_hcompute_avg_pool_stencil_1_write[0];
    end
  end
  always @(*) begin
    op_hcompute_hw_output_stencil_read[0] = RAM[(((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[2] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[3])) - 0) * 1 + (((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[2] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[3])) - 0) * 32 + (((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[2] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[3])) - 0) * 1024];
  end

endmodule

module avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_to_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_sr();
endmodule
module avg_pool_stencil_clkwrk_dsa0_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_avg_pool_stencil_1_read_ren,
	input [15:0] op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0] ,
	output logic [15:0] op_hcompute_avg_pool_stencil_1_read [0:0] ,
	input op_hcompute_avg_pool_stencil_write_wen,
	input [15:0] op_hcompute_avg_pool_stencil_write_ctrl_vars [3:0] ,
	input logic [15:0] op_hcompute_avg_pool_stencil_write [0:0] );

  // Storage
	// RAM Box: {[0, 31], [0, 31], [0, 3]}
	// Capacity: 4096
  logic [15:0]  RAM [4095:0];

  always @(posedge clk) begin
    if (op_hcompute_avg_pool_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_avg_pool_stencil_write_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_write_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_write_ctrl_vars[3])) - 0) * 1 + (((0 + 0*op_hcompute_avg_pool_stencil_write_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_write_ctrl_vars[1] + 1*op_hcompute_avg_pool_stencil_write_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_write_ctrl_vars[3])) - 0) * 32 + (((0 + 0*op_hcompute_avg_pool_stencil_write_ctrl_vars[0] + 1*op_hcompute_avg_pool_stencil_write_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_write_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_write_ctrl_vars[3])) - 0) * 1024] <= op_hcompute_avg_pool_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_avg_pool_stencil_1_read[0] = RAM[(((0 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 1 + (((0 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 32 + (((0 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 1024];
  end

endmodule

module hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr();
endmodule
module hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr();
endmodule
module hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr();
endmodule
module hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr();
endmodule
module hw_input_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_avg_pool_stencil_1_read_ren,
	input [15:0] op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0] ,
	output logic [15:0] op_hcompute_avg_pool_stencil_1_read [3:0] ,
	input op_hcompute_hw_input_stencil_write_wen,
	input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars [3:0] ,
	input logic [15:0] op_hcompute_hw_input_stencil_write [0:0] );

  // Storage
	// RAM Box: {[0, 63], [0, 63], [0, 3]}
	// Capacity: 16384
  logic [15:0]  RAM [16383:0];

  always @(posedge clk) begin
    if (op_hcompute_hw_input_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_hw_input_stencil_write_ctrl_vars[0] + 0*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 0*op_hcompute_hw_input_stencil_write_ctrl_vars[2] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[3])) - 0) * 1 + (((0 + 0*op_hcompute_hw_input_stencil_write_ctrl_vars[0] + 0*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2] + 0*op_hcompute_hw_input_stencil_write_ctrl_vars[3])) - 0) * 64 + (((0 + 0*op_hcompute_hw_input_stencil_write_ctrl_vars[0] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 0*op_hcompute_hw_input_stencil_write_ctrl_vars[2] + 0*op_hcompute_hw_input_stencil_write_ctrl_vars[3])) - 0) * 4096] <= op_hcompute_hw_input_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_avg_pool_stencil_1_read[0] = RAM[(((0 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 1 + (((0 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 64 + (((0 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 4096];
    op_hcompute_avg_pool_stencil_1_read[1] = RAM[(((1 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 1 + (((0 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 64 + (((0 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 4096];
    op_hcompute_avg_pool_stencil_1_read[2] = RAM[(((1 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 1 + (((1 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 64 + (((0 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 4096];
    op_hcompute_avg_pool_stencil_1_read[3] = RAM[(((0 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 1 + (((1 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 64 + (((0 + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] + 0*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0) * 4096];
  end

endmodule

