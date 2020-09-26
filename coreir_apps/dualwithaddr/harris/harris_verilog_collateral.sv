module cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_to_cim_output_stencil_op_hcompute_cim_output_stencil_65_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

    cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_to_cim_output_stencil_op_hcompute_cim_output_stencil_65_sr cim_output_stencil_op_hcompute_hw_output_stencil_46_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_output_stencil_write[0]));
  always @(posedge clk) begin
    if (op_hcompute_cim_output_stencil_write_wen) begin
      RAM[(((0 + 0*op_hcompute_cim_output_stencil_write_ctrl_vars[0] + 1*op_hcompute_cim_output_stencil_write_ctrl_vars[1] + 0*op_hcompute_cim_output_stencil_write_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_cim_output_stencil_write_ctrl_vars[0] + 0*op_hcompute_cim_output_stencil_write_ctrl_vars[1] + 1*op_hcompute_cim_output_stencil_write_ctrl_vars[2])) - 0) * 58] <= op_hcompute_cim_output_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_hw_output_stencil_read[0] = RAM[(((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 1 + (((0 + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[0] + 0*op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 1*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0) * 58];
  end

endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_66_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]));    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_67_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]));    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_68_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]));    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_69_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]));    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_70_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]));    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_71_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]));    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_72_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]));    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_73_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]));    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_74_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]));
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

module grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_to_grad_x_stencil_op_hcompute_grad_x_stencil_54_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_to_grad_x_stencil_op_hcompute_grad_x_stencil_54_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [5:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 5;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 5 ? 0 : read_addr + 1;
      write_addr <= write_addr == 5 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
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

    grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_to_grad_x_stencil_op_hcompute_grad_x_stencil_54_sr grad_x_stencil_op_hcompute_lxx_stencil_8_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_x_stencil_write[0]));    grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_to_grad_x_stencil_op_hcompute_grad_x_stencil_54_sr grad_x_stencil_op_hcompute_lxy_stencil_5_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_x_stencil_write[0]));
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

module grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_to_grad_y_stencil_op_hcompute_grad_y_stencil_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_to_grad_y_stencil_op_hcompute_grad_y_stencil_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

    grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_to_grad_y_stencil_op_hcompute_grad_y_stencil_47_sr grad_y_stencil_op_hcompute_lxy_stencil_6_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_y_stencil_write[0]));    grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_to_grad_y_stencil_op_hcompute_grad_y_stencil_47_sr grad_y_stencil_op_hcompute_lyy_stencil_3_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_y_stencil_write[0]));
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

module lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_to_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [8:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 8;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 8 ? 0 : read_addr + 1;
      write_addr <= write_addr == 8 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
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

    lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_to_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_sr lgxx_stencil_op_hcompute_cim_stencil_62_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lgxx_stencil_1_write[0]));
  always @(posedge clk) begin
    if (op_hcompute_lgxx_stencil_1_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_lgxx_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxx_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_lgxx_stencil_1_write[0];
    end
  end
  always @(*) begin
    op_hcompute_cim_stencil_read[0] = RAM[(((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

module lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_to_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

    lgxx_stencil_clkwrk_dsa0_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_to_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_sr lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lgxx_stencil_write[0]));
  always @(posedge clk) begin
    if (op_hcompute_lgxx_stencil_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_lgxx_stencil_write_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_write_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxx_stencil_write_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_write_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_lgxx_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_lgxx_stencil_1_read[0] = RAM[(((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

module lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_to_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

    lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_to_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_sr lgxy_stencil_op_hcompute_cim_stencil_63_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lgxy_stencil_1_write[0]));
  always @(posedge clk) begin
    if (op_hcompute_lgxy_stencil_1_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_lgxy_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxy_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_lgxy_stencil_1_write[0];
    end
  end
  always @(*) begin
    op_hcompute_cim_stencil_read[0] = RAM[(((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

module lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_to_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

    lgxy_stencil_clkwrk_dsa1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_to_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_sr lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lgxy_stencil_write[0]));
  always @(posedge clk) begin
    if (op_hcompute_lgxy_stencil_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_lgxy_stencil_write_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_write_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxy_stencil_write_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_write_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_lgxy_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_lgxy_stencil_1_read[0] = RAM[(((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

module lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_to_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

    lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_to_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_sr lgyy_stencil_op_hcompute_cim_stencil_64_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lgyy_stencil_1_write[0]));
  always @(posedge clk) begin
    if (op_hcompute_lgyy_stencil_1_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_lgyy_stencil_1_write_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgyy_stencil_1_write_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_lgyy_stencil_1_write[0];
    end
  end
  always @(*) begin
    op_hcompute_cim_stencil_read[0] = RAM[(((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 1*op_hcompute_cim_stencil_read_ctrl_vars[1] + 0*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_cim_stencil_read_ctrl_vars[0] + 0*op_hcompute_cim_stencil_read_ctrl_vars[1] + 1*op_hcompute_cim_stencil_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

module lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_to_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

    lgyy_stencil_clkwrk_dsa2_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_to_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_sr lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lgyy_stencil_write[0]));
  always @(posedge clk) begin
    if (op_hcompute_lgyy_stencil_write_wen) begin
      RAM[(((-1 + 0*op_hcompute_lgyy_stencil_write_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_write_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_write_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgyy_stencil_write_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_write_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_write_ctrl_vars[2])) - -1) * 60] <= op_hcompute_lgyy_stencil_write[0];
    end
  end
  always @(*) begin
    op_hcompute_lgyy_stencil_1_read[0] = RAM[(((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -1) * 1 + (((-1 + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] + 0*op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars[2])) - -1) * 60];
  end

endmodule

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_35_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]));    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_36_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]));    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_37_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]));    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_38_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]));    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_39_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]));    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_40_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]));    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_41_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]));    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_42_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]));    lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_to_lxx_stencil_op_hcompute_lxx_stencil_7_sr lxx_stencil_op_hcompute_lgxx_stencil_1_43_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_write[0]));
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

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_23_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]));    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_24_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]));    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_25_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]));    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_26_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]));    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_27_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]));    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_28_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]));    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_29_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]));    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_30_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]));    lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_to_lxy_stencil_op_hcompute_lxy_stencil_4_sr lxy_stencil_op_hcompute_lgxy_stencil_1_31_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_write[0]));
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

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_11_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]));    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_12_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]));    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_13_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]));    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_14_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]));    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_15_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]));    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_16_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]));    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_17_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]));    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_18_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]));    lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_to_lyy_stencil_op_hcompute_lyy_stencil_2_sr lyy_stencil_op_hcompute_lgyy_stencil_1_19_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lyy_stencil_write[0]));
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

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [135:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 135;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 135 ? 0 : read_addr + 1;
      write_addr <= write_addr == 135 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [134:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 134;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 134 ? 0 : read_addr + 1;
      write_addr <= write_addr == 134 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [133:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 133;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 133 ? 0 : read_addr + 1;
      write_addr <= write_addr == 133 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [7:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 7;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 7 ? 0 : read_addr + 1;
      write_addr <= write_addr == 7 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [5:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 5;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 5 ? 0 : read_addr + 1;
      write_addr <= write_addr == 5 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [6:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 6;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 6 ? 0 : read_addr + 1;
      write_addr <= write_addr == 6 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
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

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]));    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]));    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]));    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]));    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]));    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]));    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]));    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]));    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]));    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]));    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]));    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]));
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

