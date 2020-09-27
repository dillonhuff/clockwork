module corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_to_corrected_stencil_op_hcompute_corrected_stencil_1_48_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_to_corrected_stencil_op_hcompute_corrected_stencil_2_44_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [4:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 4;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 4 ? 0 : read_addr + 1;
      write_addr <= write_addr == 4 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_to_corrected_stencil_op_hcompute_corrected_stencil_52_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [2:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 2;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 2 ? 0 : read_addr + 1;
      write_addr <= write_addr == 2 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

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
  // # of banks: 8
    logic [15:0] bank_0 [10092];
    logic [15:0] bank_1 [10092];
    logic [15:0] bank_2 [10092];
    logic [15:0] bank_3 [10092];
    logic [15:0] bank_4 [10092];
    logic [15:0] bank_5 [10092];
    logic [15:0] bank_6 [10092];
    logic [15:0] bank_7 [10092];
	// RAM Box: {[0, 2], [0, 57], [0, 57]}
	// Capacity: 10092
  logic [15:0]  RAM [10091:0];

    corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_to_corrected_stencil_op_hcompute_corrected_stencil_1_48_sr corrected_stencil_op_hcompute_curved_stencil_1_41_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_corrected_stencil_1_write[0]), .out(op_hcompute_curved_stencil_1_read[0]));

    corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_to_corrected_stencil_op_hcompute_corrected_stencil_2_44_sr corrected_stencil_op_hcompute_curved_stencil_2_39_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_corrected_stencil_2_write[0]), .out(op_hcompute_curved_stencil_2_read[0]));

    corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_to_corrected_stencil_op_hcompute_corrected_stencil_52_sr corrected_stencil_op_hcompute_curved_stencil_43_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_corrected_stencil_write[0]), .out(op_hcompute_curved_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_corrected_stencil_1_write_wen) begin
      bank_0[(((1 + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_corrected_stencil_1_write[0];
    end
    if (op_hcompute_corrected_stencil_2_write_wen) begin
      bank_0[(((2 + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_corrected_stencil_2_write[0];
    end
    if (op_hcompute_corrected_stencil_write_wen) begin
      bank_0[(((0 + 0*op_hcompute_corrected_stencil_write_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_corrected_stencil_write_ctrl_vars[0] + 1*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 0*op_hcompute_corrected_stencil_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_corrected_stencil_write_ctrl_vars[0] + 0*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 1*op_hcompute_corrected_stencil_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_corrected_stencil_write[0];
    end
  end
  always @(*) begin
  end

endmodule

module curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_to_curved_stencil_op_hcompute_curved_stencil_1_40_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [2:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 2;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 2 ? 0 : read_addr + 1;
      write_addr <= write_addr == 2 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_to_curved_stencil_op_hcompute_curved_stencil_2_38_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_to_curved_stencil_op_hcompute_curved_stencil_42_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [4:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 4;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 4 ? 0 : read_addr + 1;
      write_addr <= write_addr == 4 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

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
  // # of banks: 8
    logic [15:0] bank_0 [10092];
    logic [15:0] bank_1 [10092];
    logic [15:0] bank_2 [10092];
    logic [15:0] bank_3 [10092];
    logic [15:0] bank_4 [10092];
    logic [15:0] bank_5 [10092];
    logic [15:0] bank_6 [10092];
    logic [15:0] bank_7 [10092];
	// RAM Box: {[0, 2], [0, 57], [0, 57]}
	// Capacity: 10092
  logic [15:0]  RAM [10091:0];

    curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_to_curved_stencil_op_hcompute_curved_stencil_1_40_sr curved_stencil_op_hcompute_hw_output_stencil_1_3_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_curved_stencil_1_write[0]), .out(op_hcompute_hw_output_stencil_1_read[0]));

    curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_to_curved_stencil_op_hcompute_curved_stencil_2_38_sr curved_stencil_op_hcompute_hw_output_stencil_2_1_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_curved_stencil_2_write[0]), .out(op_hcompute_hw_output_stencil_2_read[0]));

    curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_to_curved_stencil_op_hcompute_curved_stencil_42_sr curved_stencil_op_hcompute_hw_output_stencil_5_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_curved_stencil_write[0]), .out(op_hcompute_hw_output_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_curved_stencil_1_write_wen) begin
      bank_0[(((1 + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_curved_stencil_1_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_curved_stencil_1_write[0];
    end
    if (op_hcompute_curved_stencil_2_write_wen) begin
      bank_0[(((2 + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[0] + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[0] + 1*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[0] + 0*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 1*op_hcompute_curved_stencil_2_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_curved_stencil_2_write[0];
    end
    if (op_hcompute_curved_stencil_write_wen) begin
      bank_0[(((0 + 0*op_hcompute_curved_stencil_write_ctrl_vars[0] + 0*op_hcompute_curved_stencil_write_ctrl_vars[1] + 0*op_hcompute_curved_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_curved_stencil_write_ctrl_vars[0] + 1*op_hcompute_curved_stencil_write_ctrl_vars[1] + 0*op_hcompute_curved_stencil_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_curved_stencil_write_ctrl_vars[0] + 0*op_hcompute_curved_stencil_write_ctrl_vars[1] + 1*op_hcompute_curved_stencil_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_curved_stencil_write[0];
    end
  end
  always @(*) begin
  end

endmodule

module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [2:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 2;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 2 ? 0 : read_addr + 1;
      write_addr <= write_addr == 2 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [2:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 2;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 2 ? 0 : read_addr + 1;
      write_addr <= write_addr == 2 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [4:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 4;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 4 ? 0 : read_addr + 1;
      write_addr <= write_addr == 4 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_53_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [2:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 2;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 2 ? 0 : read_addr + 1;
      write_addr <= write_addr == 2 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_54_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_55_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

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
  // # of banks: 8
    logic [15:0] bank_0 [10092];
    logic [15:0] bank_1 [10092];
    logic [15:0] bank_2 [10092];
    logic [15:0] bank_3 [10092];
    logic [15:0] bank_4 [10092];
    logic [15:0] bank_5 [10092];
    logic [15:0] bank_6 [10092];
    logic [15:0] bank_7 [10092];
	// RAM Box: {[0, 2], [0, 57], [0, 57]}
	// Capacity: 10092
  logic [15:0]  RAM [10091:0];

    demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_sr demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_demosaicked_1_stencil_1_write[0]), .out(op_hcompute_corrected_stencil_1_read[0]));

    demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_sr demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_demosaicked_1_stencil_1_write[0]), .out(op_hcompute_corrected_stencil_2_read[1]));

    demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_55_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_sr demosaicked_1_stencil_op_hcompute_corrected_stencil_55_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_demosaicked_1_stencil_1_write[0]), .out(op_hcompute_corrected_stencil_read[2]));

    demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_sr demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_demosaicked_1_stencil_write[0]), .out(op_hcompute_corrected_stencil_1_read[1]));

    demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_sr demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_demosaicked_1_stencil_write[0]), .out(op_hcompute_corrected_stencil_2_read[2]));

    demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_53_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_sr demosaicked_1_stencil_op_hcompute_corrected_stencil_53_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_demosaicked_1_stencil_write[0]), .out(op_hcompute_corrected_stencil_read[0]));

    demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_sr demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_demosaicked_1_stencil_2_write[0]), .out(op_hcompute_corrected_stencil_1_read[2]));

    demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_sr demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_demosaicked_1_stencil_2_write[0]), .out(op_hcompute_corrected_stencil_2_read[0]));

    demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_54_to_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_sr demosaicked_1_stencil_op_hcompute_corrected_stencil_54_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_demosaicked_1_stencil_2_write[0]), .out(op_hcompute_corrected_stencil_read[1]));


  always @(posedge clk) begin
    if (op_hcompute_demosaicked_1_stencil_1_write_wen) begin
      bank_0[(((1 + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_demosaicked_1_stencil_1_write[0];
    end
    if (op_hcompute_demosaicked_1_stencil_write_wen) begin
      bank_0[(((0 + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_demosaicked_1_stencil_write[0];
    end
    if (op_hcompute_demosaicked_1_stencil_2_write_wen) begin
      bank_0[(((2 + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[0] + 1*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])) - 0) * 3 + (((0 + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[0] + 0*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 1*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])) - 0) * 174] <= op_hcompute_demosaicked_1_stencil_2_write[0];
    end
  end
  always @(*) begin
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [67:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 67;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 67 ? 0 : read_addr + 1;
      write_addr <= write_addr == 67 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [2:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 2;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 2 ? 0 : read_addr + 1;
      write_addr <= write_addr == 2 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [65:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 65;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 65 ? 0 : read_addr + 1;
      write_addr <= write_addr == 65 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [130:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 130;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 130 ? 0 : read_addr + 1;
      write_addr <= write_addr == 130 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [66:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 66;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 66 ? 0 : read_addr + 1;
      write_addr <= write_addr == 66 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [67:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 67;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 67 ? 0 : read_addr + 1;
      write_addr <= write_addr == 67 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [2:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 2;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 2 ? 0 : read_addr + 1;
      write_addr <= write_addr == 2 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [66:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 66;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 66 ? 0 : read_addr + 1;
      write_addr <= write_addr == 66 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [131:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 131;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 131 ? 0 : read_addr + 1;
      write_addr <= write_addr == 131 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [4:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 4;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 4 ? 0 : read_addr + 1;
      write_addr <= write_addr == 4 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [68:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 68;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 68 ? 0 : read_addr + 1;
      write_addr <= write_addr == 68 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [132:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 132;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 132 ? 0 : read_addr + 1;
      write_addr <= write_addr == 132 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [65:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 65;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 65 ? 0 : read_addr + 1;
      write_addr <= write_addr == 65 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [64:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 64;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 64 ? 0 : read_addr + 1;
      write_addr <= write_addr == 64 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [66:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 66;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 66 ? 0 : read_addr + 1;
      write_addr <= write_addr == 66 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [128:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 128;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 128 ? 0 : read_addr + 1;
      write_addr <= write_addr == 128 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [129:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 129;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 129 ? 0 : read_addr + 1;
      write_addr <= write_addr == 129 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [130:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 130;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 130 ? 0 : read_addr + 1;
      write_addr <= write_addr == 130 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

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
  // # of banks: 4
    logic [15:0] bank_0 [3600];
    logic [15:0] bank_1 [3600];
    logic [15:0] bank_2 [3600];
    logic [15:0] bank_3 [3600];
	// RAM Box: {[-1, 58], [-1, 58]}
	// Capacity: 3600
  logic [15:0]  RAM [3599:0];

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_1_read[0]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_1_read[1]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_1_read[2]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_1_read[3]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_1_read[4]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_2_read[0]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_2_read[1]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_2_read[2]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_2_read[3]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_2_read[4]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_2_read[5]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_2_read[6]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_2_read[7]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_read[0]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_read[1]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_read[2]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_read[3]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_read[4]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_read[5]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_read[6]));

    denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_to_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_sr denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_denoised_1_stencil_write[0]), .out(op_hcompute_demosaicked_1_stencil_read[7]));


  always @(posedge clk) begin
    if (op_hcompute_denoised_1_stencil_write_wen) begin
      bank_0[(((-1 + 0*op_hcompute_denoised_1_stencil_write_ctrl_vars[0] + 1*op_hcompute_denoised_1_stencil_write_ctrl_vars[1] + 0*op_hcompute_denoised_1_stencil_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_denoised_1_stencil_write_ctrl_vars[0] + 0*op_hcompute_denoised_1_stencil_write_ctrl_vars[1] + 1*op_hcompute_denoised_1_stencil_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_denoised_1_stencil_write[0];
    end
  end
  always @(*) begin
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [2:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 2;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 2 ? 0 : read_addr + 1;
      write_addr <= write_addr == 2 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [258:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 258;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 258 ? 0 : read_addr + 1;
      write_addr <= write_addr == 258 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [132:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 132;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 132 ? 0 : read_addr + 1;
      write_addr <= write_addr == 132 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [128:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 128;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 128 ? 0 : read_addr + 1;
      write_addr <= write_addr == 128 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [130:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 130;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 130 ? 0 : read_addr + 1;
      write_addr <= write_addr == 130 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

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
  // # of banks: 4
    logic [15:0] bank_0 [4096];
    logic [15:0] bank_1 [4096];
    logic [15:0] bank_2 [4096];
    logic [15:0] bank_3 [4096];
	// RAM Box: {[-3, 60], [-3, 60]}
	// Capacity: 4096
  logic [15:0]  RAM [4095:0];

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_denoised_1_stencil_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_denoised_1_stencil_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_denoised_1_stencil_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_denoised_1_stencil_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_denoised_1_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_hw_input_global_wrapper_stencil_write_wen) begin
      bank_0[(((-3 + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] + 1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])) - -3) * 1 + (((-3 + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])) - -3) * 64] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
    end
  end
  always @(*) begin
  end

endmodule

