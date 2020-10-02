
module blur_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

endmodule

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
  // # of banks: 4
  logic [15:0] bank_0 [3844];
  logic [15:0] bank_1 [3844];
  logic [15:0] bank_2 [3844];
  logic [15:0] bank_3 [3844];

  logic [15:0] blur_stencil_blur_stencil_op_hcompute_hw_output_stencil_1_0;
  assign blur_stencil_blur_stencil_op_hcompute_hw_output_stencil_1_0 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0);
  logic [15:0] blur_stencil_blur_stencil_op_hcompute_hw_output_stencil_1_1;
  assign blur_stencil_blur_stencil_op_hcompute_hw_output_stencil_1_1 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars[1])) - 0);
blur_stencil_bank_selector blur_stencil_blur_stencil_op_hcompute_hw_output_stencil_1_bank_selector(.d({blur_stencil_blur_stencil_op_hcompute_hw_output_stencil_1_1,blur_stencil_blur_stencil_op_hcompute_hw_output_stencil_1_0}));
  logic [15:0] blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_0;
  assign blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_0 = (((1*op_hcompute_blur_stencil_write_ctrl_vars[2])) - 0);
  logic [15:0] blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_1;
  assign blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_1 = (((1*op_hcompute_blur_stencil_write_ctrl_vars[1])) - 0);
blur_stencil_bank_selector blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector(.d({blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_1,blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_0}));

    blur_stencil_blur_stencil_op_hcompute_hw_output_stencil_1_to_blur_stencil_op_hcompute_blur_stencil_16_sr blur_stencil_op_hcompute_hw_output_stencil_1_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_blur_stencil_write[0]), .out(op_hcompute_hw_output_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_blur_stencil_write_wen) begin
      if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 0) begin
        if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 1) begin $finish(-1); end
        if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 2) begin $finish(-1); end
        if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 3) begin $finish(-1); end
        bank_0[(((62*op_hcompute_blur_stencil_write_ctrl_vars[1] + 1*op_hcompute_blur_stencil_write_ctrl_vars[2])))] <= op_hcompute_blur_stencil_write[0];
      end
      if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 1) begin
        if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 0) begin $finish(-1); end
        if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 2) begin $finish(-1); end
        if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 3) begin $finish(-1); end
        bank_1[(((62*op_hcompute_blur_stencil_write_ctrl_vars[1] + 1*op_hcompute_blur_stencil_write_ctrl_vars[2])))] <= op_hcompute_blur_stencil_write[0];
      end
      if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 2) begin
        if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 0) begin $finish(-1); end
        if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 1) begin $finish(-1); end
        if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 3) begin $finish(-1); end
        bank_2[(((62*op_hcompute_blur_stencil_write_ctrl_vars[1] + 1*op_hcompute_blur_stencil_write_ctrl_vars[2])))] <= op_hcompute_blur_stencil_write[0];
      end
      if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 3) begin
        if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 0) begin $finish(-1); end
        if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 1) begin $finish(-1); end
        if (blur_stencil_blur_stencil_op_hcompute_blur_stencil_16_bank_selector.out == 2) begin $finish(-1); end
        bank_3[(((62*op_hcompute_blur_stencil_write_ctrl_vars[1] + 1*op_hcompute_blur_stencil_write_ctrl_vars[2])))] <= op_hcompute_blur_stencil_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule


module blur_unnormalized_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

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
  // # of banks: 4
  logic [15:0] bank_0 [3844];
  logic [15:0] bank_1 [3844];
  logic [15:0] bank_2 [3844];
  logic [15:0] bank_3 [3844];

  logic [15:0] blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_17_0;
  assign blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_17_0 = (((1*op_hcompute_blur_stencil_read_ctrl_vars[2])) - 0);
  logic [15:0] blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_17_1;
  assign blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_17_1 = (((1*op_hcompute_blur_stencil_read_ctrl_vars[1])) - 0);
blur_unnormalized_stencil_bank_selector blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_17_bank_selector(.d({blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_17_1,blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_17_0}));
  logic [15:0] blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_0;
  assign blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_0 = (((1*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[2])) - 0);
  logic [15:0] blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_1;
  assign blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_1 = (((1*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[1])) - 0);
blur_unnormalized_stencil_bank_selector blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector(.d({blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_1,blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_0}));

    blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_stencil_17_to_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_sr blur_unnormalized_stencil_op_hcompute_blur_stencil_17_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_blur_unnormalized_stencil_1_write[0]), .out(op_hcompute_blur_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_blur_unnormalized_stencil_1_write_wen) begin
      if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 0) begin
        if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 1) begin $finish(-1); end
        if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 2) begin $finish(-1); end
        if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 3) begin $finish(-1); end
        bank_0[(((62*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_blur_unnormalized_stencil_1_write[0];
      end
      if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 1) begin
        if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 0) begin $finish(-1); end
        if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 2) begin $finish(-1); end
        if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 3) begin $finish(-1); end
        bank_1[(((62*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_blur_unnormalized_stencil_1_write[0];
      end
      if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 2) begin
        if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 0) begin $finish(-1); end
        if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 1) begin $finish(-1); end
        if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 3) begin $finish(-1); end
        bank_2[(((62*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_blur_unnormalized_stencil_1_write[0];
      end
      if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 3) begin
        if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 0) begin $finish(-1); end
        if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 1) begin $finish(-1); end
        if (blur_unnormalized_stencil_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_bank_selector.out == 2) begin $finish(-1); end
        bank_3[(((62*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_blur_unnormalized_stencil_1_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule


module blur_unnormalized_stencil_clkwrk_dsa0_bank_selector(input clk, input flush, input rst_n, input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

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
  // # of banks: 4
  logic [15:0] bank_0 [3844];
  logic [15:0] bank_1 [3844];
  logic [15:0] bank_2 [3844];
  logic [15:0] bank_3 [3844];

  logic [15:0] blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_0;
  assign blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_0 = (((1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_1;
  assign blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_1 = (((1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1])) - 0);
blur_unnormalized_stencil_clkwrk_dsa0_bank_selector blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_bank_selector(.d({blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_1,blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_0}));
  logic [15:0] blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_0;
  assign blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_0 = (((1*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[2])) - 0);
  logic [15:0] blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_1;
  assign blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_1 = (((1*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[1])) - 0);
blur_unnormalized_stencil_clkwrk_dsa0_bank_selector blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector(.d({blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_1,blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_0}));

    blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_sr blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_blur_unnormalized_stencil_write[0]), .out(op_hcompute_blur_unnormalized_stencil_1_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_blur_unnormalized_stencil_write_wen) begin
      if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 0) begin
        if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 1) begin $finish(-1); end
        if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 2) begin $finish(-1); end
        if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 3) begin $finish(-1); end
        bank_0[(((62*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[2])))] <= op_hcompute_blur_unnormalized_stencil_write[0];
      end
      if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 1) begin
        if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 0) begin $finish(-1); end
        if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 2) begin $finish(-1); end
        if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 3) begin $finish(-1); end
        bank_1[(((62*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[2])))] <= op_hcompute_blur_unnormalized_stencil_write[0];
      end
      if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 2) begin
        if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 0) begin $finish(-1); end
        if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 1) begin $finish(-1); end
        if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 3) begin $finish(-1); end
        bank_2[(((62*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[2])))] <= op_hcompute_blur_unnormalized_stencil_write[0];
      end
      if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 3) begin
        if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 0) begin $finish(-1); end
        if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 1) begin $finish(-1); end
        if (blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_bank_selector.out == 2) begin $finish(-1); end
        bank_3[(((62*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[1] + 1*op_hcompute_blur_unnormalized_stencil_write_ctrl_vars[2])))] <= op_hcompute_blur_unnormalized_stencil_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule


module hw_input_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

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
  // # of banks: 4
  logic [15:0] bank_0 [4096];
  logic [15:0] bank_1 [4096];
  logic [15:0] bank_2 [4096];
  logic [15:0] bank_3 [4096];

  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_0 = (((1 + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_1 = (((1 + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_1,hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_0 = (((2 + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_1 = (((1 + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_1,hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_0 = (((1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_1 = (((2 + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_1,hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_0 = (((2 + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_1 = (((2 + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_1,hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_14_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_14_0 = (((1 + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_14_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_14_1 = (((2 + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_14_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_14_1,hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_14_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_0 = (((1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_1 = (((1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_1,hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_0 = (((1 + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_1 = (((1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_1,hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_0 = (((2 + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_1 = (((1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_1,hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_0 = (((1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_1 = (((1 + 1*op_hcompute_blur_unnormalized_stencil_1_read_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_1,hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_0 = (((1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_1 = (((1*op_hcompute_hw_input_stencil_write_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_1,hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_0}));

    hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_stencil_write[0]), .out(op_hcompute_blur_unnormalized_stencil_1_read[4]));

    hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_stencil_write[0]), .out(op_hcompute_blur_unnormalized_stencil_1_read[5]));

    hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_stencil_write[0]), .out(op_hcompute_blur_unnormalized_stencil_1_read[6]));

    hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_stencil_write[0]), .out(op_hcompute_blur_unnormalized_stencil_1_read[7]));

    hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_14_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_14_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_stencil_write[0]), .out(op_hcompute_blur_unnormalized_stencil_1_read[8]));

    hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_stencil_write[0]), .out(op_hcompute_blur_unnormalized_stencil_1_read[0]));

    hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_stencil_write[0]), .out(op_hcompute_blur_unnormalized_stencil_1_read[1]));

    hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_stencil_write[0]), .out(op_hcompute_blur_unnormalized_stencil_1_read[2]));

    hw_input_stencil_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_stencil_write[0]), .out(op_hcompute_blur_unnormalized_stencil_1_read[3]));


  always @(posedge clk) begin
    if (op_hcompute_hw_input_stencil_write_wen) begin
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 0) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 3) begin $finish(-1); end
        bank_0[(((64*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 1) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 3) begin $finish(-1); end
        bank_1[(((64*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 2) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 3) begin $finish(-1); end
        bank_2[(((64*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 3) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 2) begin $finish(-1); end
        bank_3[(((64*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_stencil_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule

