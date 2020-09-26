  // DD from cim_output_stencil_op_hcompute_cim_output_stencil_65 to cim_output_stencil_op_hcompute_hw_output_stencil_46 = 1
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
  end
  always @(*) begin
    op_hcompute_hw_output_stencil_read[0] = RAM[(((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 58];
  end

endmodule

  // DD from cim_stencil_op_hcompute_cim_stencil_61 to cim_stencil_op_hcompute_cim_output_stencil_66 = 131
  // DD from cim_stencil_op_hcompute_cim_stencil_61 to cim_stencil_op_hcompute_cim_output_stencil_67 = 66
  // DD from cim_stencil_op_hcompute_cim_stencil_61 to cim_stencil_op_hcompute_cim_output_stencil_68 = 130
  // DD from cim_stencil_op_hcompute_cim_stencil_61 to cim_stencil_op_hcompute_cim_output_stencil_69 = 129
  // DD from cim_stencil_op_hcompute_cim_stencil_61 to cim_stencil_op_hcompute_cim_output_stencil_70 = 67
  // DD from cim_stencil_op_hcompute_cim_stencil_61 to cim_stencil_op_hcompute_cim_output_stencil_71 = 65
  // DD from cim_stencil_op_hcompute_cim_stencil_61 to cim_stencil_op_hcompute_cim_output_stencil_72 = 3
  // DD from cim_stencil_op_hcompute_cim_stencil_61 to cim_stencil_op_hcompute_cim_output_stencil_73 = 2
  // DD from cim_stencil_op_hcompute_cim_stencil_61 to cim_stencil_op_hcompute_cim_output_stencil_74 = 1
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
  end
  always @(*) begin
    op_hcompute_cim_output_stencil_read[0] = RAM[(((-1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[1] = RAM[(((0 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[2] = RAM[(((-1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[3] = RAM[(((-1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[4] = RAM[(((0 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[5] = RAM[(((0 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[6] = RAM[(((1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[7] = RAM[(((1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_cim_output_stencil_read[8] = RAM[(((1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 1 + (((1 + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

  // DD from grad_x_stencil_op_hcompute_grad_x_stencil_54 to grad_x_stencil_op_hcompute_lxx_stencil_8 = 1
  // DD from grad_x_stencil_op_hcompute_grad_x_stencil_54 to grad_x_stencil_op_hcompute_lxy_stencil_5 = 5
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
  end
  always @(*) begin
    op_hcompute_lxx_stencil_read[0] = RAM[(((-2 + 0*op_hcompute_lxx_stencil_read_ctrl_vars[0] + 1*op_hcompute_lxx_stencil_read_ctrl_vars[1] + 0*op_hcompute_lxx_stencil_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lxx_stencil_read_ctrl_vars[0] + 0*op_hcompute_lxx_stencil_read_ctrl_vars[1] + 1*op_hcompute_lxx_stencil_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lxy_stencil_read[0] = RAM[(((-2 + 0*op_hcompute_lxy_stencil_read_ctrl_vars[0] + 1*op_hcompute_lxy_stencil_read_ctrl_vars[1] + 0*op_hcompute_lxy_stencil_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lxy_stencil_read_ctrl_vars[0] + 0*op_hcompute_lxy_stencil_read_ctrl_vars[1] + 1*op_hcompute_lxy_stencil_read_ctrl_vars[2])) - -2) * 62];
  end

endmodule

  // DD from grad_y_stencil_op_hcompute_grad_y_stencil_47 to grad_y_stencil_op_hcompute_lxy_stencil_6 = 1
  // DD from grad_y_stencil_op_hcompute_grad_y_stencil_47 to grad_y_stencil_op_hcompute_lyy_stencil_3 = 4
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
  end
  always @(*) begin
    op_hcompute_lxy_stencil_read[0] = RAM[(((-2 + 0*op_hcompute_lxy_stencil_read_ctrl_vars[0] + 1*op_hcompute_lxy_stencil_read_ctrl_vars[1] + 0*op_hcompute_lxy_stencil_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lxy_stencil_read_ctrl_vars[0] + 0*op_hcompute_lxy_stencil_read_ctrl_vars[1] + 1*op_hcompute_lxy_stencil_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lyy_stencil_read[0] = RAM[(((-2 + 0*op_hcompute_lyy_stencil_read_ctrl_vars[0] + 1*op_hcompute_lyy_stencil_read_ctrl_vars[1] + 0*op_hcompute_lyy_stencil_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lyy_stencil_read_ctrl_vars[0] + 0*op_hcompute_lyy_stencil_read_ctrl_vars[1] + 1*op_hcompute_lyy_stencil_read_ctrl_vars[2])) - -2) * 62];
  end

endmodule

  // DD from lgxx_stencil_op_hcompute_lgxx_stencil_1_33 to lgxx_stencil_op_hcompute_cim_stencil_62 = 8
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
  end
  always @(*) begin
    op_hcompute_cim_stencil_read[0] = RAM[(((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

  // DD from lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44 to lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34 = 1
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
  end
  always @(*) begin
    op_hcompute_lgxx_stencil_1_read[0] = RAM[(((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

  // DD from lgxy_stencil_op_hcompute_lgxy_stencil_1_21 to lgxy_stencil_op_hcompute_cim_stencil_63 = 4
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
  end
  always @(*) begin
    op_hcompute_cim_stencil_read[0] = RAM[(((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

  // DD from lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32 to lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22 = 1
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
  end
  always @(*) begin
    op_hcompute_lgxy_stencil_1_read[0] = RAM[(((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

  // DD from lgyy_stencil_op_hcompute_lgyy_stencil_1_9 to lgyy_stencil_op_hcompute_cim_stencil_64 = 1
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
  end
  always @(*) begin
    op_hcompute_cim_stencil_read[0] = RAM[(((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

  // DD from lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20 to lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10 = 1
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
  end
  always @(*) begin
    op_hcompute_lgyy_stencil_1_read[0] = RAM[(((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

  // DD from lxx_stencil_op_hcompute_lxx_stencil_7 to lxx_stencil_op_hcompute_lgxx_stencil_1_35 = 132
  // DD from lxx_stencil_op_hcompute_lxx_stencil_7 to lxx_stencil_op_hcompute_lgxx_stencil_1_36 = 131
  // DD from lxx_stencil_op_hcompute_lxx_stencil_7 to lxx_stencil_op_hcompute_lgxx_stencil_1_37 = 130
  // DD from lxx_stencil_op_hcompute_lxx_stencil_7 to lxx_stencil_op_hcompute_lgxx_stencil_1_38 = 68
  // DD from lxx_stencil_op_hcompute_lxx_stencil_7 to lxx_stencil_op_hcompute_lgxx_stencil_1_39 = 67
  // DD from lxx_stencil_op_hcompute_lxx_stencil_7 to lxx_stencil_op_hcompute_lgxx_stencil_1_40 = 66
  // DD from lxx_stencil_op_hcompute_lxx_stencil_7 to lxx_stencil_op_hcompute_lgxx_stencil_1_41 = 4
  // DD from lxx_stencil_op_hcompute_lxx_stencil_7 to lxx_stencil_op_hcompute_lgxx_stencil_1_42 = 2
  // DD from lxx_stencil_op_hcompute_lxx_stencil_7 to lxx_stencil_op_hcompute_lgxx_stencil_1_43 = 3
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
  end
  always @(*) begin
    op_hcompute_lgxx_stencil_1_read[0] = RAM[(((-2 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[1] = RAM[(((-2 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[2] = RAM[(((-2 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[3] = RAM[(((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[4] = RAM[(((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[5] = RAM[(((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[6] = RAM[(((0 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[7] = RAM[(((0 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxx_stencil_1_read[8] = RAM[(((0 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -2) * 62];
  end

endmodule

  // DD from lxy_stencil_op_hcompute_lxy_stencil_4 to lxy_stencil_op_hcompute_lgxy_stencil_1_23 = 132
  // DD from lxy_stencil_op_hcompute_lxy_stencil_4 to lxy_stencil_op_hcompute_lgxy_stencil_1_24 = 131
  // DD from lxy_stencil_op_hcompute_lxy_stencil_4 to lxy_stencil_op_hcompute_lgxy_stencil_1_25 = 130
  // DD from lxy_stencil_op_hcompute_lxy_stencil_4 to lxy_stencil_op_hcompute_lgxy_stencil_1_26 = 68
  // DD from lxy_stencil_op_hcompute_lxy_stencil_4 to lxy_stencil_op_hcompute_lgxy_stencil_1_27 = 67
  // DD from lxy_stencil_op_hcompute_lxy_stencil_4 to lxy_stencil_op_hcompute_lgxy_stencil_1_28 = 66
  // DD from lxy_stencil_op_hcompute_lxy_stencil_4 to lxy_stencil_op_hcompute_lgxy_stencil_1_29 = 4
  // DD from lxy_stencil_op_hcompute_lxy_stencil_4 to lxy_stencil_op_hcompute_lgxy_stencil_1_30 = 2
  // DD from lxy_stencil_op_hcompute_lxy_stencil_4 to lxy_stencil_op_hcompute_lgxy_stencil_1_31 = 3
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
  end
  always @(*) begin
    op_hcompute_lgxy_stencil_1_read[0] = RAM[(((-2 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[1] = RAM[(((-2 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[2] = RAM[(((-2 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[3] = RAM[(((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[4] = RAM[(((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[5] = RAM[(((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[6] = RAM[(((0 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[7] = RAM[(((0 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgxy_stencil_1_read[8] = RAM[(((0 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
  end

endmodule

  // DD from lyy_stencil_op_hcompute_lyy_stencil_2 to lyy_stencil_op_hcompute_lgyy_stencil_1_11 = 132
  // DD from lyy_stencil_op_hcompute_lyy_stencil_2 to lyy_stencil_op_hcompute_lgyy_stencil_1_12 = 131
  // DD from lyy_stencil_op_hcompute_lyy_stencil_2 to lyy_stencil_op_hcompute_lgyy_stencil_1_13 = 130
  // DD from lyy_stencil_op_hcompute_lyy_stencil_2 to lyy_stencil_op_hcompute_lgyy_stencil_1_14 = 68
  // DD from lyy_stencil_op_hcompute_lyy_stencil_2 to lyy_stencil_op_hcompute_lgyy_stencil_1_15 = 67
  // DD from lyy_stencil_op_hcompute_lyy_stencil_2 to lyy_stencil_op_hcompute_lgyy_stencil_1_16 = 66
  // DD from lyy_stencil_op_hcompute_lyy_stencil_2 to lyy_stencil_op_hcompute_lgyy_stencil_1_17 = 4
  // DD from lyy_stencil_op_hcompute_lyy_stencil_2 to lyy_stencil_op_hcompute_lgyy_stencil_1_18 = 2
  // DD from lyy_stencil_op_hcompute_lyy_stencil_2 to lyy_stencil_op_hcompute_lgyy_stencil_1_19 = 3
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
  end
  always @(*) begin
    op_hcompute_lgyy_stencil_1_read[0] = RAM[(((-2 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[1] = RAM[(((-2 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[2] = RAM[(((-2 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[3] = RAM[(((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[4] = RAM[(((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[5] = RAM[(((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[6] = RAM[(((0 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-2 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[7] = RAM[(((0 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((0 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
    op_hcompute_lgyy_stencil_1_read[8] = RAM[(((0 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 1 + (((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -2) * 62];
  end

endmodule

  // DD from padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 to padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55 = 129
  // DD from padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 to padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56 = 1
  // DD from padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 to padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57 = 65
  // DD from padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 to padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58 = 131
  // DD from padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 to padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59 = 67
  // DD from padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 to padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60 = 3
  // DD from padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 to padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48 = 135
  // DD from padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 to padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49 = 134
  // DD from padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 to padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50 = 133
  // DD from padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 to padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51 = 7
  // DD from padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 to padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52 = 5
  // DD from padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 to padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53 = 6
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
  end
  always @(*) begin
    op_hcompute_grad_x_stencil_read[0] = RAM[(((-3 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-1 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_x_stencil_read[1] = RAM[(((-1 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-1 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_x_stencil_read[2] = RAM[(((-2 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-1 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_x_stencil_read[3] = RAM[(((-3 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_x_stencil_read[4] = RAM[(((-2 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_x_stencil_read[5] = RAM[(((-1 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_x_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_y_stencil_read[0] = RAM[(((-3 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_y_stencil_read[1] = RAM[(((-3 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-2 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_y_stencil_read[2] = RAM[(((-3 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-1 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_y_stencil_read[3] = RAM[(((-1 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_y_stencil_read[4] = RAM[(((-1 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-1 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_grad_y_stencil_read[5] = RAM[(((-1 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-2 + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[0] + 0*op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1*op_hcompute_grad_y_stencil_read_ctrl_vars[2])) - -3) * 64];
  end

endmodule

