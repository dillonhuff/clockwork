  // DD from corrected_stencil_op_hcompute_corrected_stencil_1_48 to corrected_stencil_op_hcompute_curved_stencil_1_41 = 4
  // DD from corrected_stencil_op_hcompute_corrected_stencil_2_44 to corrected_stencil_op_hcompute_curved_stencil_2_39 = 5
  // DD from corrected_stencil_op_hcompute_corrected_stencil_52 to corrected_stencil_op_hcompute_curved_stencil_43 = 3
module corrected_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_corrected_stencil_1_write_wen,
	input [15:0] op_hcompute_corrected_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_corrected_stencil_1_write [0:0] ,
	input op_hcompute_corrected_stencil_2_write_wen,
	input [15:0] op_hcompute_corrected_stencil_2_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_corrected_stencil_2_write [0:0] ,
	input op_hcompute_corrected_stencil_write_wen,
	input [15:0] op_hcompute_corrected_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_corrected_stencil_write [0:0] ,
	input op_hcompute_curved_stencil_1_read_ren,
	input [15:0] op_hcompute_curved_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_curved_stencil_1_read [0:0] ,
	input op_hcompute_curved_stencil_2_read_ren,
	input [15:0] op_hcompute_curved_stencil_2_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_curved_stencil_2_read [0:0] ,
	input op_hcompute_curved_stencil_read_ren,
	input [15:0] op_hcompute_curved_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_curved_stencil_read [0:0] );

  // Storage
	// RAM Box: {[0, 2], [0, 57], [0, 57]}
	// Capacity: 10092
  logic [15:0]  RAM [10091:0];

  always @(posedge clk) begin
    if (op_hcompute_corrected_stencil_1_write_wen) begin
      RAM[(((1 + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_corrected_stencil_1_write[0];
    end
    if (op_hcompute_corrected_stencil_2_write_wen) begin
      RAM[(((2 + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_corrected_stencil_2_write[0];
    end
    if (op_hcompute_corrected_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_corrected_stencil_write_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_write_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_write_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_corrected_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_curved_stencil_1_read[0] = RAM[(((1 + 0*op_hcompute_curved_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_curved_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_curved_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_curved_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_curved_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_curved_stencil_1_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_curved_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_curved_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_curved_stencil_1_read_ctrl_vars[2])) - 0) * 174];
    op_hcompute_curved_stencil_2_read[0] = RAM[(((2 + 0*op_hcompute_curved_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_curved_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_curved_stencil_2_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_curved_stencil_2_read_ctrl_vars[0] + 1*op_hcompute_curved_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_curved_stencil_2_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_curved_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_curved_stencil_2_read_ctrl_vars[1] + 1*op_hcompute_curved_stencil_2_read_ctrl_vars[2])) - 0) * 174];
    op_hcompute_curved_stencil_read[0] = RAM[(((0 + 0*op_hcompute_curved_stencil_read_ctrl_vars[0] + 0*op_hcompute_curved_stencil_read_ctrl_vars[1] + 0*op_hcompute_curved_stencil_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_curved_stencil_read_ctrl_vars[0] + 1*op_hcompute_curved_stencil_read_ctrl_vars[1] + 0*op_hcompute_curved_stencil_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_curved_stencil_read_ctrl_vars[0] + 0*op_hcompute_curved_stencil_read_ctrl_vars[1] + 1*op_hcompute_curved_stencil_read_ctrl_vars[2])) - 0) * 174];
  end

endmodule

  // DD from curved_stencil_op_hcompute_curved_stencil_1_40 to curved_stencil_op_hcompute_hw_output_stencil_1_3 = 4
  // DD from curved_stencil_op_hcompute_curved_stencil_2_38 to curved_stencil_op_hcompute_hw_output_stencil_2_1 = 2
  // DD from curved_stencil_op_hcompute_curved_stencil_42 to curved_stencil_op_hcompute_hw_output_stencil_5 = 6
module curved_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_curved_stencil_1_write_wen,
	input [15:0] op_hcompute_curved_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_curved_stencil_1_write [0:0] ,
	input op_hcompute_curved_stencil_2_write_wen,
	input [15:0] op_hcompute_curved_stencil_2_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_curved_stencil_2_write [0:0] ,
	input op_hcompute_curved_stencil_write_wen,
	input [15:0] op_hcompute_curved_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_curved_stencil_write [0:0] ,
	input op_hcompute_hw_output_stencil_1_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_1_read [0:0] ,
	input op_hcompute_hw_output_stencil_2_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_2_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_2_read [0:0] ,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] );

  // Storage
	// RAM Box: {[0, 2], [0, 57], [0, 57]}
	// Capacity: 10092
  logic [15:0]  RAM [10091:0];

  always @(posedge clk) begin
    if (op_hcompute_curved_stencil_1_write_wen) begin
      RAM[(((1 + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_curved_stencil_1_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_curved_stencil_1_write[0];
    end
    if (op_hcompute_curved_stencil_2_write_wen) begin
      RAM[(((2 + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[0] + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[0] + 1*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[0] + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 1*op_hcompute_curved_stencil_2_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_curved_stencil_2_write[0];
    end
    if (op_hcompute_curved_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_curved_stencil_write_ctrl_vars[0] + 0*op_hcompute_curved_stencil_write_ctrl_vars[1] + 0*op_hcompute_curved_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_curved_stencil_write_ctrl_vars[0] + 1*op_hcompute_curved_stencil_write_ctrl_vars[1] + 0*op_hcompute_curved_stencil_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_curved_stencil_write_ctrl_vars[0] + 0*op_hcompute_curved_stencil_write_ctrl_vars[1] + 1*op_hcompute_curved_stencil_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_curved_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_hw_output_stencil_1_read[0] = RAM[(((1 + 0*op_hcompute_hw_output_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_hw_output_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_hw_output_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_1_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_hw_output_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_hw_output_stencil_1_read_ctrl_vars[2])) - 0) * 174];
    op_hcompute_hw_output_stencil_2_read[0] = RAM[(((2 + 0*op_hcompute_hw_output_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_2_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_hw_output_stencil_2_read_ctrl_vars[0] + 1*op_hcompute_hw_output_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_2_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_hw_output_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_2_read_ctrl_vars[1] + 1*op_hcompute_hw_output_stencil_2_read_ctrl_vars[2])) - 0) * 174];
    op_hcompute_hw_output_stencil_read[0] = RAM[(((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 174];
  end

endmodule

  // DD from demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23 to demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49 = 3
  // DD from demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29 to demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50 = 4
  // DD from demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14 to demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51 = 2
  // DD from demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14 to demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45 = 3
  // DD from demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23 to demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46 = 4
  // DD from demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29 to demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47 = 5
  // DD from demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29 to demosaicked_1_stencil_op_hcompute_corrected_stencil_53 = 3
  // DD from demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14 to demosaicked_1_stencil_op_hcompute_corrected_stencil_54 = 1
  // DD from demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23 to demosaicked_1_stencil_op_hcompute_corrected_stencil_55 = 2
module demosaicked_1_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_corrected_stencil_1_read_ren,
	input [15:0] op_hcompute_corrected_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_corrected_stencil_1_read [2:0] ,
	input op_hcompute_corrected_stencil_2_read_ren,
	input [15:0] op_hcompute_corrected_stencil_2_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_corrected_stencil_2_read [2:0] ,
	input op_hcompute_corrected_stencil_read_ren,
	input [15:0] op_hcompute_corrected_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_corrected_stencil_read [2:0] ,
	input op_hcompute_demosaicked_1_stencil_1_write_wen,
	input [15:0] op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_demosaicked_1_stencil_1_write [0:0] ,
	input op_hcompute_demosaicked_1_stencil_2_write_wen,
	input [15:0] op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_demosaicked_1_stencil_2_write [0:0] ,
	input op_hcompute_demosaicked_1_stencil_write_wen,
	input [15:0] op_hcompute_demosaicked_1_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_demosaicked_1_stencil_write [0:0] );

  // Storage
	// RAM Box: {[0, 2], [0, 57], [0, 57]}
	// Capacity: 10092
  logic [15:0]  RAM [10091:0];

  always @(posedge clk) begin
    if (op_hcompute_demosaicked_1_stencil_1_write_wen) begin
      RAM[(((1 + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_demosaicked_1_stencil_1_write[0];
    end
    if (op_hcompute_demosaicked_1_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_demosaicked_1_stencil_write[0];
    end
    if (op_hcompute_demosaicked_1_stencil_2_write_wen) begin
      RAM[(((2 + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_demosaicked_1_stencil_2_write[0];
    end
  end
  always @(*) begin
    op_hcompute_corrected_stencil_1_read[0] = RAM[(((1 + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_1_read_ctrl_vars[2])) - 0) * 174];
    op_hcompute_corrected_stencil_1_read[1] = RAM[(((0 + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_1_read_ctrl_vars[2])) - 0) * 174];
    op_hcompute_corrected_stencil_1_read[2] = RAM[(((2 + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_1_read_ctrl_vars[2])) - 0) * 174];
    op_hcompute_corrected_stencil_2_read[0] = RAM[(((2 + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_2_read_ctrl_vars[2])) - 0) * 174];
    op_hcompute_corrected_stencil_2_read[1] = RAM[(((1 + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_2_read_ctrl_vars[2])) - 0) * 174];
    op_hcompute_corrected_stencil_2_read[2] = RAM[(((0 + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_2_read_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_2_read_ctrl_vars[2])) - 0) * 174];
    op_hcompute_corrected_stencil_read[0] = RAM[(((0 + 0*op_hcompute_corrected_stencil_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_read_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_read_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_read_ctrl_vars[2])) - 0) * 174];
    op_hcompute_corrected_stencil_read[1] = RAM[(((2 + 0*op_hcompute_corrected_stencil_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_read_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_read_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_read_ctrl_vars[2])) - 0) * 174];
    op_hcompute_corrected_stencil_read[2] = RAM[(((1 + 0*op_hcompute_corrected_stencil_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_read_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_read_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_read_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_read_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_read_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_read_ctrl_vars[2])) - 0) * 174];
  end

endmodule

  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24 = 68
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25 = 3
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26 = 66
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27 = 131
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28 = 67
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15 = 68
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16 = 4
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17 = 3
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18 = 67
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19 = 132
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20 = 5
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21 = 69
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22 = 133
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30 = 66
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31 = 65
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32 = 1
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33 = 67
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34 = 2
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35 = 129
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36 = 130
  // DD from denoised_1_stencil_op_hcompute_denoised_1_stencil_8 to denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37 = 131
module denoised_1_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_demosaicked_1_stencil_1_read_ren,
	input [15:0] op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_demosaicked_1_stencil_1_read [4:0] ,
	input op_hcompute_demosaicked_1_stencil_2_read_ren,
	input [15:0] op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_demosaicked_1_stencil_2_read [7:0] ,
	input op_hcompute_demosaicked_1_stencil_read_ren,
	input [15:0] op_hcompute_demosaicked_1_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_demosaicked_1_stencil_read [7:0] ,
	input op_hcompute_denoised_1_stencil_write_wen,
	input [15:0] op_hcompute_denoised_1_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_denoised_1_stencil_write [0:0] );

  // Storage
	// RAM Box: {[-1, 58], [-1, 58]}
	// Capacity: 3600
  logic [15:0]  RAM [3599:0];

  always @(posedge clk) begin
    if (op_hcompute_denoised_1_stencil_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_denoised_1_stencil_write_ctrl_vars[0] + 1*op_hcompute_denoised_1_stencil_write_ctrl_vars[1] + 0*op_hcompute_denoised_1_stencil_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_denoised_1_stencil_write_ctrl_vars[0] + 0*op_hcompute_denoised_1_stencil_write_ctrl_vars[1] + 1*op_hcompute_denoised_1_stencil_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_denoised_1_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_demosaicked_1_stencil_1_read[0] = RAM[(((0 + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_1_read[1] = RAM[(((1 + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_1_read[2] = RAM[(((0 + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((1 + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_1_read[3] = RAM[(((-1 + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_1_read[4] = RAM[(((0 + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_2_read[0] = RAM[(((0 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_2_read[1] = RAM[(((1 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_2_read[2] = RAM[(((1 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 1 + (((1 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_2_read[3] = RAM[(((0 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 1 + (((1 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_2_read[4] = RAM[(((-1 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_2_read[5] = RAM[(((1 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_2_read[6] = RAM[(((0 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_2_read[7] = RAM[(((-1 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_read[0] = RAM[(((0 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_read[1] = RAM[(((0 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 1 + (((1 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_read[2] = RAM[(((1 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 1 + (((1 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_read[3] = RAM[(((0 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_read[4] = RAM[(((1 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_read[5] = RAM[(((-1 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 1 + (((1 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_read[6] = RAM[(((-1 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 60];
    op_hcompute_demosaicked_1_stencil_read[7] = RAM[(((-1 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

  // DD from hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6 to hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10 = 3
  // DD from hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6 to hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11 = 259
  // DD from hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6 to hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12 = 133
  // DD from hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6 to hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13 = 129
  // DD from hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6 to hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9 = 131
module hw_input_global_wrapper_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_denoised_1_stencil_read_ren,
	input [15:0] op_hcompute_denoised_1_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_denoised_1_stencil_read [4:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0] );

  // Storage
	// RAM Box: {[-3, 60], [-3, 60]}
	// Capacity: 4096
  logic [15:0]  RAM [4095:0];

  always @(posedge clk) begin
    if (op_hcompute_hw_input_global_wrapper_stencil_write_wen) begin
      RAM[(((-3 + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] + 1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])) - -3) * 64] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_denoised_1_stencil_read[1] = RAM[(((1 + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[0] + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[1] + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-1 + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[0] + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[1] + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_denoised_1_stencil_read[2] = RAM[(((-3 + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[0] + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[1] + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-1 + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[0] + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[1] + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_denoised_1_stencil_read[3] = RAM[(((-1 + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[0] + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[1] + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[0] + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[1] + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_denoised_1_stencil_read[4] = RAM[(((-1 + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[0] + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[1] + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3) * 1 + (((1 + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[0] + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[1] + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3) * 64];
    op_hcompute_denoised_1_stencil_read[0] = RAM[(((-1 + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[0] + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[1] + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3) * 1 + (((-1 + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[0] + 0*op_hcompute_denoised_1_stencil_read_ctrl_vars[1] + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3) * 64];
  end

endmodule

