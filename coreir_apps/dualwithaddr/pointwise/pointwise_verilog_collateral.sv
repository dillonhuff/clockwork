module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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
  // # of banks: 4
    logic [15:0] bank_0 [4096];
    logic [15:0] bank_1 [4096];
    logic [15:0] bank_2 [4096];
    logic [15:0] bank_3 [4096];
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
  logic [15:0]  RAM [4095:0];

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_sr hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_mult_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_hw_input_global_wrapper_stencil_write_wen) begin
      bank_0[(((0 + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] + 1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])) - 0) * 64] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
    end
  end
  always @(*) begin
  end

endmodule

module mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_to_mult_stencil_op_hcompute_mult_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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
  // # of banks: 4
    logic [15:0] bank_0 [4096];
    logic [15:0] bank_1 [4096];
    logic [15:0] bank_2 [4096];
    logic [15:0] bank_3 [4096];
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
  logic [15:0]  RAM [4095:0];

    mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_to_mult_stencil_op_hcompute_mult_stencil_0_sr mult_stencil_op_hcompute_hw_output_stencil_3_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_mult_stencil_write[0]), .out(op_hcompute_hw_output_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_mult_stencil_write_wen) begin
      bank_0[(((0 + 0*op_hcompute_mult_stencil_write_ctrl_vars[0] + 1*op_hcompute_mult_stencil_write_ctrl_vars[1] + 0*op_hcompute_mult_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_mult_stencil_write_ctrl_vars[0] + 0*op_hcompute_mult_stencil_write_ctrl_vars[1] + 1*op_hcompute_mult_stencil_write_ctrl_vars[2])) - 0) * 64] <= op_hcompute_mult_stencil_write[0];
    end
  end
  always @(*) begin
  end

endmodule

