module cim_output_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_output_stencil_write_wen,
	input [15:0] op_hcompute_cim_output_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_cim_output_stencil_write [0:0] ,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] );

  // Storage
	// RAM Box: {[0, 57], [0, 57]}
	// Capacity: 3364
  logic [15:0]  RAM [3363:0];

  always @(posedge clk) begin
    if (op_hcompute_cim_output_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_cim_output_stencil_write_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_write_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_cim_output_stencil_write_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_write_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_write_ctrl_vars[2])) - 0) * 58] <= op_hcompute_cim_output_stencil_write[0];
    end
    op_hcompute_hw_output_stencil_read[0] <= RAM[(((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 58];
  end

endmodule

module cim_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_output_stencil_read_ren,
	input [15:0] op_hcompute_cim_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_cim_output_stencil_read [8:0] ,
	input op_hcompute_cim_stencil_write_wen,
	input [15:0] op_hcompute_cim_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_cim_stencil_write [0:0] );

  // Storage
	// RAM Box: {[-1, 58], [-1, 58]}
	// Capacity: 3600
  logic [15:0]  RAM [3599:0];

  always @(posedge clk) begin
    if (op_hcompute_cim_stencil_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_cim_stencil_write_ctrl_vars[0] + 1*op_hcompute_cim_stencil_write_ctrl_vars[1] + 0*op_hcompute_cim_stencil_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_stencil_write_ctrl_vars[0] + 0*op_hcompute_cim_stencil_write_ctrl_vars[1] + 1*op_hcompute_cim_stencil_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_cim_stencil_write[0];
    end
    op_hcompute_cim_output_stencil_read[0] <= RAM[(((-1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[1] <= RAM[(((0 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[2] <= RAM[(((-1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[3] <= RAM[(((-1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[4] <= RAM[(((0 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[5] <= RAM[(((0 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[6] <= RAM[(((1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[7] <= RAM[(((1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[8] <= RAM[(((1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

module grad_x_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_grad_x_stencil_write_wen,
	input [15:0] op_hcompute_grad_x_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_grad_x_stencil_write [0:0] ,
	input op_hcompute_lxx_stencil_read_ren,
	input [15:0] op_hcompute_lxx_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lxx_stencil_read [0:0] ,
	input op_hcompute_lxy_stencil_read_ren,
	input [15:0] op_hcompute_lxy_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lxy_stencil_read [0:0] );

  // Storage
	// RAM Box: {[-2, 59], [-2, 59]}
	// Capacity: 3844
  logic [15:0]  RAM [3843:0];

  always @(posedge clk) begin
    if (op_hcompute_grad_x_stencil_write_wen) begin
      RAM[(((-2 + 0*op_hcompute_grad_x_stencil_write_ctrl_vars[0] + 1*op_hcompute_grad_x_stencil_write_ctrl_vars[1] + 0*op_hcompute_grad_x_stencil_write_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_grad_x_stencil_write_ctrl_vars[0] + 0*op_hcompute_grad_x_stencil_write_ctrl_vars[1] + 1*op_hcompute_grad_x_stencil_write_ctrl_vars[2])) - -2) * 62] <= op_hcompute_grad_x_stencil_write[0];
    end
    op_hcompute_lxx_stencil_read[0] <= RAM[(((-2 + 0*op_hcompute_lxx_stencil_read_ctrl_vars[0] + 1*op_hcompute_lxx_stencil_read_ctrl_vars[1] + 0*op_hcompute_lxx_stencil_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lxx_stencil_read_ctrl_vars[0] + 0*op_hcompute_lxx_stencil_read_ctrl_vars[1] + 1*op_hcompute_lxx_stencil_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lxy_stencil_read[0] <= RAM[(((-2 + 0*op_hcompute_lxy_stencil_read_ctrl_vars[0] + 1*op_hcompute_lxy_stencil_read_ctrl_vars[1] + 0*op_hcompute_lxy_stencil_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lxy_stencil_read_ctrl_vars[0] + 0*op_hcompute_lxy_stencil_read_ctrl_vars[1] + 1*op_hcompute_lxy_stencil_read_ctrl_vars[2])) - -2) * 62];
  end

endmodule

module grad_y_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_grad_y_stencil_write_wen,
	input [15:0] op_hcompute_grad_y_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_grad_y_stencil_write [0:0] ,
	input op_hcompute_lxy_stencil_read_ren,
	input [15:0] op_hcompute_lxy_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lxy_stencil_read [0:0] ,
	input op_hcompute_lyy_stencil_read_ren,
	input [15:0] op_hcompute_lyy_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lyy_stencil_read [0:0] );

  // Storage
	// RAM Box: {[-2, 59], [-2, 59]}
	// Capacity: 3844
  logic [15:0]  RAM [3843:0];

  always @(posedge clk) begin
    if (op_hcompute_grad_y_stencil_write_wen) begin
      RAM[(((-2 + 0*op_hcompute_grad_y_stencil_write_ctrl_vars[0] + 1*op_hcompute_grad_y_stencil_write_ctrl_vars[1] + 0*op_hcompute_grad_y_stencil_write_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_grad_y_stencil_write_ctrl_vars[0] + 0*op_hcompute_grad_y_stencil_write_ctrl_vars[1] + 1*op_hcompute_grad_y_stencil_write_ctrl_vars[2])) - -2) * 62] <= op_hcompute_grad_y_stencil_write[0];
    end
    op_hcompute_lxy_stencil_read[0] <= RAM[(((-2 + 0*op_hcompute_lxy_stencil_read_ctrl_vars[0] + 1*op_hcompute_lxy_stencil_read_ctrl_vars[1] + 0*op_hcompute_lxy_stencil_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lxy_stencil_read_ctrl_vars[0] + 0*op_hcompute_lxy_stencil_read_ctrl_vars[1] + 1*op_hcompute_lxy_stencil_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lyy_stencil_read[0] <= RAM[(((-2 + 0*op_hcompute_lyy_stencil_read_ctrl_vars[0] + 1*op_hcompute_lyy_stencil_read_ctrl_vars[1] + 0*op_hcompute_lyy_stencil_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lyy_stencil_read_ctrl_vars[0] + 0*op_hcompute_lyy_stencil_read_ctrl_vars[1] + 1*op_hcompute_lyy_stencil_read_ctrl_vars[2])) - -2) * 62];
  end

endmodule

module lgxx_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_stencil_read_ren,
	input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_cim_stencil_read [0:0] ,
	input op_hcompute_lgxx_stencil_1_write_wen,
	input [15:0] op_hcompute_lgxx_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgxx_stencil_1_write [0:0] );

  // Storage
	// RAM Box: {[-1, 58], [-1, 58]}
	// Capacity: 3600
  logic [15:0]  RAM [3599:0];

  always @(posedge clk) begin
    if (op_hcompute_lgxx_stencil_1_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_lgxx_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxx_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    op_hcompute_cim_stencil_read[0] <= RAM[(((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

module lgxx_stencil_clkwrk_dsa0_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgxx_stencil_1_read_ren,
	input [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgxx_stencil_1_read [0:0] ,
	input op_hcompute_lgxx_stencil_write_wen,
	input [15:0] op_hcompute_lgxx_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgxx_stencil_write [0:0] );

  // Storage
	// RAM Box: {[-1, 58], [-1, 58]}
	// Capacity: 3600
  logic [15:0]  RAM [3599:0];

  always @(posedge clk) begin
    if (op_hcompute_lgxx_stencil_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_lgxx_stencil_write_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_write_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxx_stencil_write_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_write_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_lgxx_stencil_write[0];
    end
    op_hcompute_lgxx_stencil_1_read[0] <= RAM[(((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

module lgxy_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_stencil_read_ren,
	input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_cim_stencil_read [0:0] ,
	input op_hcompute_lgxy_stencil_1_write_wen,
	input [15:0] op_hcompute_lgxy_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgxy_stencil_1_write [0:0] );

  // Storage
	// RAM Box: {[-1, 58], [-1, 58]}
	// Capacity: 3600
  logic [15:0]  RAM [3599:0];

  always @(posedge clk) begin
    if (op_hcompute_lgxy_stencil_1_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_lgxy_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxy_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_lgxy_stencil_1_write[0];
    end
    op_hcompute_cim_stencil_read[0] <= RAM[(((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

module lgxy_stencil_clkwrk_dsa1_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgxy_stencil_1_read_ren,
	input [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgxy_stencil_1_read [0:0] ,
	input op_hcompute_lgxy_stencil_write_wen,
	input [15:0] op_hcompute_lgxy_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgxy_stencil_write [0:0] );

  // Storage
	// RAM Box: {[-1, 58], [-1, 58]}
	// Capacity: 3600
  logic [15:0]  RAM [3599:0];

  always @(posedge clk) begin
    if (op_hcompute_lgxy_stencil_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_lgxy_stencil_write_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_write_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxy_stencil_write_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_write_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_lgxy_stencil_write[0];
    end
    op_hcompute_lgxy_stencil_1_read[0] <= RAM[(((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

module lgyy_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_stencil_read_ren,
	input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_cim_stencil_read [0:0] ,
	input op_hcompute_lgyy_stencil_1_write_wen,
	input [15:0] op_hcompute_lgyy_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgyy_stencil_1_write [0:0] );

  // Storage
	// RAM Box: {[-1, 58], [-1, 58]}
	// Capacity: 3600
  logic [15:0]  RAM [3599:0];

  always @(posedge clk) begin
    if (op_hcompute_lgyy_stencil_1_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_lgyy_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgyy_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_lgyy_stencil_1_write[0];
    end
    op_hcompute_cim_stencil_read[0] <= RAM[(((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

module lgyy_stencil_clkwrk_dsa2_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgyy_stencil_1_read_ren,
	input [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgyy_stencil_1_read [0:0] ,
	input op_hcompute_lgyy_stencil_write_wen,
	input [15:0] op_hcompute_lgyy_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgyy_stencil_write [0:0] );

  // Storage
	// RAM Box: {[-1, 58], [-1, 58]}
	// Capacity: 3600
  logic [15:0]  RAM [3599:0];

  always @(posedge clk) begin
    if (op_hcompute_lgyy_stencil_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_lgyy_stencil_write_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_write_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgyy_stencil_write_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_write_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_lgyy_stencil_write[0];
    end
    op_hcompute_lgyy_stencil_1_read[0] <= RAM[(((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

module lxx_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgxx_stencil_1_read_ren,
	input [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgxx_stencil_1_read [8:0] ,
	input op_hcompute_lxx_stencil_write_wen,
	input [15:0] op_hcompute_lxx_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lxx_stencil_write [0:0] );

  // Storage
	// RAM Box: {[-2, 59], [-2, 59]}
	// Capacity: 3844
  logic [15:0]  RAM [3843:0];

  always @(posedge clk) begin
    if (op_hcompute_lxx_stencil_write_wen) begin
      RAM[(((-2 + 0*op_hcompute_lxx_stencil_write_ctrl_vars[0] + 1*op_hcompute_lxx_stencil_write_ctrl_vars[1] + 0*op_hcompute_lxx_stencil_write_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lxx_stencil_write_ctrl_vars[0] + 0*op_hcompute_lxx_stencil_write_ctrl_vars[1] + 1*op_hcompute_lxx_stencil_write_ctrl_vars[2])) - -2) * 62] <= op_hcompute_lxx_stencil_write[0];
    end
    op_hcompute_lgxx_stencil_1_read[0] <= RAM[(((-2 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[1] <= RAM[(((-2 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[2] <= RAM[(((-2 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[3] <= RAM[(((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[4] <= RAM[(((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[5] <= RAM[(((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[6] <= RAM[(((0 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[7] <= RAM[(((0 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[8] <= RAM[(((0 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
  end

endmodule

module lxy_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgxy_stencil_1_read_ren,
	input [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgxy_stencil_1_read [8:0] ,
	input op_hcompute_lxy_stencil_write_wen,
	input [15:0] op_hcompute_lxy_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lxy_stencil_write [0:0] );

  // Storage
	// RAM Box: {[-2, 59], [-2, 59]}
	// Capacity: 3844
  logic [15:0]  RAM [3843:0];

  always @(posedge clk) begin
    if (op_hcompute_lxy_stencil_write_wen) begin
      RAM[(((-2 + 0*op_hcompute_lxy_stencil_write_ctrl_vars[0] + 1*op_hcompute_lxy_stencil_write_ctrl_vars[1] + 0*op_hcompute_lxy_stencil_write_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lxy_stencil_write_ctrl_vars[0] + 0*op_hcompute_lxy_stencil_write_ctrl_vars[1] + 1*op_hcompute_lxy_stencil_write_ctrl_vars[2])) - -2) * 62] <= op_hcompute_lxy_stencil_write[0];
    end
    op_hcompute_lgxy_stencil_1_read[0] <= RAM[(((-2 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[1] <= RAM[(((-2 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[2] <= RAM[(((-2 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[3] <= RAM[(((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[4] <= RAM[(((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[5] <= RAM[(((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[6] <= RAM[(((0 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[7] <= RAM[(((0 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[8] <= RAM[(((0 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
  end

endmodule

module lyy_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgyy_stencil_1_read_ren,
	input [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgyy_stencil_1_read [8:0] ,
	input op_hcompute_lyy_stencil_write_wen,
	input [15:0] op_hcompute_lyy_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lyy_stencil_write [0:0] );

  // Storage
	// RAM Box: {[-2, 59], [-2, 59]}
	// Capacity: 3844
  logic [15:0]  RAM [3843:0];

  always @(posedge clk) begin
    if (op_hcompute_lyy_stencil_write_wen) begin
      RAM[(((-2 + 0*op_hcompute_lyy_stencil_write_ctrl_vars[0] + 1*op_hcompute_lyy_stencil_write_ctrl_vars[1] + 0*op_hcompute_lyy_stencil_write_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lyy_stencil_write_ctrl_vars[0] + 0*op_hcompute_lyy_stencil_write_ctrl_vars[1] + 1*op_hcompute_lyy_stencil_write_ctrl_vars[2])) - -2) * 62] <= op_hcompute_lyy_stencil_write[0];
    end
    op_hcompute_lgyy_stencil_1_read[0] <= RAM[(((-2 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[1] <= RAM[(((-2 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[2] <= RAM[(((-2 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[3] <= RAM[(((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[4] <= RAM[(((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[5] <= RAM[(((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[6] <= RAM[(((0 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[7] <= RAM[(((0 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[8] <= RAM[(((0 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
  end

endmodule

module padded16_global_wrapper_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_grad_x_stencil_read_ren,
	input [15:0] op_hcompute_grad_x_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_grad_x_stencil_read [5:0] ,
	input op_hcompute_grad_y_stencil_read_ren,
	input [15:0] op_hcompute_grad_y_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_grad_y_stencil_read [5:0] ,
	input op_hcompute_padded16_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_padded16_global_wrapper_stencil_write [0:0] );

  // Storage
	// RAM Box: {[-3, 60], [-3, 60]}
	// Capacity: 4096
  logic [15:0]  RAM [4095:0];

  always @(posedge clk) begin
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen) begin
      RAM[(((-3 + 0*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[0] + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1] + 0*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[0] + 0*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1] + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2])) - -3) * 64] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    op_hcompute_grad_x_stencil_read[0] <= RAM[(((-3 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-1 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_x_stencil_read[1] <= RAM[(((-1 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-1 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_x_stencil_read[2] <= RAM[(((-2 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-1 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_x_stencil_read[3] <= RAM[(((-3 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_x_stencil_read[4] <= RAM[(((-2 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_x_stencil_read[5] <= RAM[(((-1 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_y_stencil_read[0] <= RAM[(((-3 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_y_stencil_read[1] <= RAM[(((-3 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-2 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_y_stencil_read[2] <= RAM[(((-3 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-1 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_y_stencil_read[3] <= RAM[(((-1 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_y_stencil_read[4] <= RAM[(((-1 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-1 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_y_stencil_read[5] <= RAM[(((-1 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-2 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 64];
  end

endmodule

