
module avg_pool_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[2] % 2);
  assign out = bank_index_0*1+bank_index_1*2+bank_index_2*4;

endmodule

module avg_pool_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_1_to_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module avg_pool_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_avg_pool_stencil_1_write_wen,
	input [15:0] op_hcompute_avg_pool_stencil_1_write_ctrl_vars [3:0] ,
	input logic [15:0] op_hcompute_avg_pool_stencil_1_write [0:0] ,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [3:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] );

  // Storage
  // # of banks: 8
  logic [15:0] bank_0 [4096];
  logic [15:0] bank_1 [4096];
  logic [15:0] bank_2 [4096];
  logic [15:0] bank_3 [4096];
  logic [15:0] bank_4 [4096];
  logic [15:0] bank_5 [4096];
  logic [15:0] bank_6 [4096];
  logic [15:0] bank_7 [4096];

  logic [15:0] avg_pool_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_1_0;
  assign avg_pool_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_1_0 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars[3])) - 0);
  logic [15:0] avg_pool_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_1_1;
  assign avg_pool_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_1_1 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0);
  logic [15:0] avg_pool_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_1_2;
  assign avg_pool_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_1_2 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars[1])) - 0);
avg_pool_stencil_bank_selector avg_pool_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_1_bank_selector(.d({avg_pool_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_1_2,avg_pool_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_1_1,avg_pool_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_1_0}));
  logic [15:0] avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_0;
  assign avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_0 = (((1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3])) - 0);
  logic [15:0] avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_1;
  assign avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_1 = (((1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2])) - 0);
  logic [15:0] avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_2;
  assign avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_2 = (((1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1])) - 0);
avg_pool_stencil_bank_selector avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector(.d({avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_2,avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_1,avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_0}));

    avg_pool_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_1_to_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_sr avg_pool_stencil_op_hcompute_hw_output_stencil_1_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_avg_pool_stencil_1_write[0]), .out(op_hcompute_hw_output_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_avg_pool_stencil_1_write_wen) begin
      if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 0) begin
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 6) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((1024*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_1_write[0];
      end
      if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 1) begin
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 6) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((1024*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_1_write[0];
      end
      if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 2) begin
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 6) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((1024*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_1_write[0];
      end
      if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 3) begin
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 6) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((1024*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_1_write[0];
      end
      if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 4) begin
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 6) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((1024*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_1_write[0];
      end
      if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 5) begin
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 6) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((1024*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_1_write[0];
      end
      if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 6) begin
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((1024*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_1_write[0];
      end
      if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 7) begin
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_4_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((1024*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_1_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule


module avg_pool_stencil_clkwrk_dsa0_bank_selector(input clk, input flush, input rst_n, input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[2] % 2);
  assign out = bank_index_0*1+bank_index_1*2+bank_index_2*4;

endmodule

module avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_to_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module avg_pool_stencil_clkwrk_dsa0_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_avg_pool_stencil_1_read_ren,
	input [15:0] op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0] ,
	output logic [15:0] op_hcompute_avg_pool_stencil_1_read [0:0] ,
	input op_hcompute_avg_pool_stencil_write_wen,
	input [15:0] op_hcompute_avg_pool_stencil_write_ctrl_vars [3:0] ,
	input logic [15:0] op_hcompute_avg_pool_stencil_write [0:0] );

  // Storage
  // # of banks: 8
  logic [15:0] bank_0 [4096];
  logic [15:0] bank_1 [4096];
  logic [15:0] bank_2 [4096];
  logic [15:0] bank_3 [4096];
  logic [15:0] bank_4 [4096];
  logic [15:0] bank_5 [4096];
  logic [15:0] bank_6 [4096];
  logic [15:0] bank_7 [4096];

  logic [15:0] avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_0;
  assign avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_0 = (((1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0);
  logic [15:0] avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_1;
  assign avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_1 = (((1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_2;
  assign avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_2 = (((1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1])) - 0);
avg_pool_stencil_clkwrk_dsa0_bank_selector avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_bank_selector(.d({avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_2,avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_1,avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_0}));
  logic [15:0] avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_0;
  assign avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_0 = (((1*op_hcompute_avg_pool_stencil_write_ctrl_vars[3])) - 0);
  logic [15:0] avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_1;
  assign avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_1 = (((1*op_hcompute_avg_pool_stencil_write_ctrl_vars[2])) - 0);
  logic [15:0] avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_2;
  assign avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_2 = (((1*op_hcompute_avg_pool_stencil_write_ctrl_vars[1])) - 0);
avg_pool_stencil_clkwrk_dsa0_bank_selector avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector(.d({avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_2,avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_1,avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_0}));

    avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_to_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_sr avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_5_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_avg_pool_stencil_write[0]), .out(op_hcompute_avg_pool_stencil_1_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_avg_pool_stencil_write_wen) begin
      if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 0) begin
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 6) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((1024*op_hcompute_avg_pool_stencil_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_write[0];
      end
      if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 1) begin
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 6) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((1024*op_hcompute_avg_pool_stencil_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_write[0];
      end
      if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 2) begin
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 6) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((1024*op_hcompute_avg_pool_stencil_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_write[0];
      end
      if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 3) begin
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 6) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((1024*op_hcompute_avg_pool_stencil_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_write[0];
      end
      if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 4) begin
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 6) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((1024*op_hcompute_avg_pool_stencil_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_write[0];
      end
      if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 5) begin
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 6) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((1024*op_hcompute_avg_pool_stencil_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_write[0];
      end
      if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 6) begin
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((1024*op_hcompute_avg_pool_stencil_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_write[0];
      end
      if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 7) begin
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 0) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 1) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 2) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 3) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 4) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 5) begin $finish(-1); end
        if (avg_pool_stencil_clkwrk_dsa0_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_10_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((1024*op_hcompute_avg_pool_stencil_write_ctrl_vars[1] + 32*op_hcompute_avg_pool_stencil_write_ctrl_vars[2] + 1*op_hcompute_avg_pool_stencil_write_ctrl_vars[3])))] <= op_hcompute_avg_pool_stencil_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule


module hw_input_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[2] % 2);
  assign out = bank_index_0*1+bank_index_1*2+bank_index_2*4;

endmodule

module hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_avg_pool_stencil_1_read_ren,
	input [15:0] op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0] ,
	output logic [15:0] op_hcompute_avg_pool_stencil_1_read [3:0] ,
	input op_hcompute_hw_input_stencil_write_wen,
	input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars [3:0] ,
	input logic [15:0] op_hcompute_hw_input_stencil_write [0:0] );

  // Storage
  // # of banks: 8
  logic [15:0] bank_0 [16384];
  logic [15:0] bank_1 [16384];
  logic [15:0] bank_2 [16384];
  logic [15:0] bank_3 [16384];
  logic [15:0] bank_4 [16384];
  logic [15:0] bank_5 [16384];
  logic [15:0] bank_6 [16384];
  logic [15:0] bank_7 [16384];

  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_0 = (((2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_1 = (((2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_2;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_2 = (((1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_2,hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_1,hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_0 = (((1 + 2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_1 = (((2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_2;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_2 = (((1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_2,hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_1,hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_0 = (((1 + 2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_1 = (((1 + 2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_2;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_2 = (((1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_2,hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_1,hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_0 = (((2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_1 = (((1 + 2*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_2;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_2 = (((1*op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_2,hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_1,hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_0 = (((1*op_hcompute_hw_input_stencil_write_ctrl_vars[3])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_1 = (((1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_2;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_2 = (((1*op_hcompute_hw_input_stencil_write_ctrl_vars[1])) - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_2,hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_1,hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_0}));

    hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_stencil_write[0]), .out(op_hcompute_avg_pool_stencil_1_read[0]));

    hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_stencil_write[0]), .out(op_hcompute_avg_pool_stencil_1_read[1]));

    hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_stencil_write[0]), .out(op_hcompute_avg_pool_stencil_1_read[2]));

    hw_input_stencil_hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_to_hw_input_stencil_op_hcompute_hw_input_stencil_2_sr hw_input_stencil_op_hcompute_avg_pool_stencil_1_9_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_stencil_write[0]), .out(op_hcompute_avg_pool_stencil_1_read[3]));


  always @(posedge clk) begin
    if (op_hcompute_hw_input_stencil_write_wen) begin
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 0) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 6) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((4096*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_stencil_write_ctrl_vars[2] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[3])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 1) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 6) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((4096*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_stencil_write_ctrl_vars[2] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[3])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 2) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 6) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((4096*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_stencil_write_ctrl_vars[2] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[3])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 3) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 6) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((4096*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_stencil_write_ctrl_vars[2] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[3])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 4) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 6) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((4096*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_stencil_write_ctrl_vars[2] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[3])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 5) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 6) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((4096*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_stencil_write_ctrl_vars[2] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[3])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 6) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((4096*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_stencil_write_ctrl_vars[2] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[3])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 7) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_2_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((4096*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_stencil_write_ctrl_vars[2] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[3])))] <= op_hcompute_hw_input_stencil_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule

