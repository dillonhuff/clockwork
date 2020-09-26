module corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_to_corrected_stencil_op_hcompute_corrected_stencil_1_48_sr();
endmodule
module corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_to_corrected_stencil_op_hcompute_corrected_stencil_2_44_sr();
endmodule
module corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_to_corrected_stencil_op_hcompute_corrected_stencil_52_sr();
endmodule
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

module curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_to_curved_stencil_op_hcompute_curved_stencil_1_40_sr();
endmodule
module curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_to_curved_stencil_op_hcompute_curved_stencil_2_38_sr();
endmodule
module curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_to_curved_stencil_op_hcompute_curved_stencil_42_sr();
endmodule
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

module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_sr();
endmodule
module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_sr();
endmodule
module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_sr();
endmodule
module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_sr();
endmodule
module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_sr();
endmodule
module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_sr();
endmodule
module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_53_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_sr();
endmodule
module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_54_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_sr();
endmodule
module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_55_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_sr();
endmodule
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

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr();
endmodule
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr();
endmodule
module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr();
endmodule
module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr();
endmodule
module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr();
endmodule
module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr();
endmodule
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

