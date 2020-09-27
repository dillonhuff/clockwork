module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_10_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_11_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_12_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_13_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_5_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_6_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_7_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_8_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_9_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module conv1_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv1_stencil_1_write_wen,
	input [15:0] op_hcompute_conv1_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv1_stencil_1_write [0:0] ,
	input op_hcompute_conv2_stencil_1_read_ren,
	input [15:0] op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_conv2_stencil_1_read [8:0] );

  // Storage
  // # of banks: 4
    logic [15:0] bank_0 [1];
    logic [15:0] bank_1 [1];
    logic [15:0] bank_2 [1];
    logic [15:0] bank_3 [1];
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 3844
  logic [15:0]  RAM [3843:0];

    conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_10_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr conv1_stencil_op_hcompute_conv2_stencil_1_10_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv1_stencil_1_write[0]), .out(op_hcompute_conv2_stencil_1_read[5]));

    conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_11_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr conv1_stencil_op_hcompute_conv2_stencil_1_11_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv1_stencil_1_write[0]), .out(op_hcompute_conv2_stencil_1_read[6]));

    conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_12_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr conv1_stencil_op_hcompute_conv2_stencil_1_12_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv1_stencil_1_write[0]), .out(op_hcompute_conv2_stencil_1_read[7]));

    conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_13_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr conv1_stencil_op_hcompute_conv2_stencil_1_13_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv1_stencil_1_write[0]), .out(op_hcompute_conv2_stencil_1_read[8]));

    conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_5_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr conv1_stencil_op_hcompute_conv2_stencil_1_5_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv1_stencil_1_write[0]), .out(op_hcompute_conv2_stencil_1_read[0]));

    conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_6_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr conv1_stencil_op_hcompute_conv2_stencil_1_6_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv1_stencil_1_write[0]), .out(op_hcompute_conv2_stencil_1_read[1]));

    conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_7_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr conv1_stencil_op_hcompute_conv2_stencil_1_7_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv1_stencil_1_write[0]), .out(op_hcompute_conv2_stencil_1_read[2]));

    conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_8_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr conv1_stencil_op_hcompute_conv2_stencil_1_8_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv1_stencil_1_write[0]), .out(op_hcompute_conv2_stencil_1_read[3]));

    conv1_stencil_conv1_stencil_op_hcompute_conv2_stencil_1_9_to_conv1_stencil_op_hcompute_conv1_stencil_1_16_sr conv1_stencil_op_hcompute_conv2_stencil_1_9_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv1_stencil_1_write[0]), .out(op_hcompute_conv2_stencil_1_read[4]));


  always @(posedge clk) begin
    if (op_hcompute_conv1_stencil_1_write_wen) begin
      RAM[(((0 + 0*op_hcompute_conv1_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_1_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv1_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_1_write_ctrl_vars[2])) - 0) * 62] <= op_hcompute_conv1_stencil_1_write[0];
    end
  end
  always @(*) begin
  end

endmodule

module conv1_stencil_clkwrk_dsa0_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_17_to_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_27_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module conv1_stencil_clkwrk_dsa0_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv1_stencil_1_read_ren,
	input [15:0] op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_conv1_stencil_1_read [0:0] ,
	input op_hcompute_conv1_stencil_write_wen,
	input [15:0] op_hcompute_conv1_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv1_stencil_write [0:0] );

  // Storage
  // # of banks: 4
    logic [15:0] bank_0 [1];
    logic [15:0] bank_1 [1];
    logic [15:0] bank_2 [1];
    logic [15:0] bank_3 [1];
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 3844
  logic [15:0]  RAM [3843:0];

    conv1_stencil_clkwrk_dsa0_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_17_to_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_27_sr conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_17_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv1_stencil_write[0]), .out(op_hcompute_conv1_stencil_1_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_conv1_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_conv1_stencil_write_ctrl_vars[0] + 1*op_hcompute_conv1_stencil_write_ctrl_vars[1] + 0*op_hcompute_conv1_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv1_stencil_write_ctrl_vars[0] + 0*op_hcompute_conv1_stencil_write_ctrl_vars[1] + 1*op_hcompute_conv1_stencil_write_ctrl_vars[2])) - 0) * 62] <= op_hcompute_conv1_stencil_write[0];
    end
  end
  always @(*) begin
  end

endmodule

module conv2_stencil_conv2_stencil_op_hcompute_hw_output_stencil_1_to_conv2_stencil_op_hcompute_conv2_stencil_1_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module conv2_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv2_stencil_1_write_wen,
	input [15:0] op_hcompute_conv2_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv2_stencil_1_write [0:0] ,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] );

  // Storage
  // # of banks: 4
    logic [15:0] bank_0 [1];
    logic [15:0] bank_1 [1];
    logic [15:0] bank_2 [1];
    logic [15:0] bank_3 [1];
	// RAM Box: {[0, 59], [0, 59]}
	// Capacity: 3600
  logic [15:0]  RAM [3599:0];

    conv2_stencil_conv2_stencil_op_hcompute_hw_output_stencil_1_to_conv2_stencil_op_hcompute_conv2_stencil_1_4_sr conv2_stencil_op_hcompute_hw_output_stencil_1_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv2_stencil_1_write[0]), .out(op_hcompute_hw_output_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_conv2_stencil_1_write_wen) begin
      RAM[(((0 + 0*op_hcompute_conv2_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_1_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv2_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_1_write_ctrl_vars[2])) - 0) * 60] <= op_hcompute_conv2_stencil_1_write[0];
    end
  end
  always @(*) begin
  end

endmodule

module conv2_stencil_clkwrk_dsa1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_14_to_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_15_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module conv2_stencil_clkwrk_dsa1_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv2_stencil_1_read_ren,
	input [15:0] op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_conv2_stencil_1_read [0:0] ,
	input op_hcompute_conv2_stencil_write_wen,
	input [15:0] op_hcompute_conv2_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv2_stencil_write [0:0] );

  // Storage
  // # of banks: 4
    logic [15:0] bank_0 [1];
    logic [15:0] bank_1 [1];
    logic [15:0] bank_2 [1];
    logic [15:0] bank_3 [1];
	// RAM Box: {[0, 59], [0, 59]}
	// Capacity: 3600
  logic [15:0]  RAM [3599:0];

    conv2_stencil_clkwrk_dsa1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_14_to_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_15_sr conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_14_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv2_stencil_write[0]), .out(op_hcompute_conv2_stencil_1_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_conv2_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_conv2_stencil_write_ctrl_vars[0] + 1*op_hcompute_conv2_stencil_write_ctrl_vars[1] + 0*op_hcompute_conv2_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_conv2_stencil_write_ctrl_vars[0] + 0*op_hcompute_conv2_stencil_write_ctrl_vars[1] + 1*op_hcompute_conv2_stencil_write_ctrl_vars[2])) - 0) * 60] <= op_hcompute_conv2_stencil_write[0];
    end
  end
  always @(*) begin
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_18_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_19_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_20_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_21_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_22_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_23_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_24_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_25_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_26_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv1_stencil_1_read_ren,
	input [15:0] op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_conv1_stencil_1_read [8:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0] );

  // Storage
  // # of banks: 4
    logic [15:0] bank_0 [1];
    logic [15:0] bank_1 [1];
    logic [15:0] bank_2 [1];
    logic [15:0] bank_3 [1];
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
  logic [15:0]  RAM [4095:0];

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_18_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_18_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_conv1_stencil_1_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_19_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_19_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_conv1_stencil_1_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_20_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_20_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_conv1_stencil_1_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_21_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_21_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_conv1_stencil_1_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_22_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_22_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_conv1_stencil_1_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_23_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_23_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_conv1_stencil_1_read[5]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_24_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_24_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_conv1_stencil_1_read[6]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_25_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_25_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_conv1_stencil_1_read[7]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_26_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_sr hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_26_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_conv1_stencil_1_read[8]));


  always @(posedge clk) begin
    if (op_hcompute_hw_input_global_wrapper_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] + 1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] + 0*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])) - 0) * 64] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
    end
  end
  always @(*) begin
  end

endmodule

