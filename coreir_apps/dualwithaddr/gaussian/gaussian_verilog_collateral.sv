module blur_stencil_blur_stencil_op_hcompute_hw_output_stencil_1_to_blur_stencil_op_hcompute_blur_stencil_16_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_17_to_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_14_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

