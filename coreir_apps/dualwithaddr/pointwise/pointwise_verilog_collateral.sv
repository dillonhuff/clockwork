
module hw_input_global_wrapper_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

endmodule

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

  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_0 = (((1*op_hcompute_mult_stencil_read_ctrl_vars[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_1 = (((1*op_hcompute_mult_stencil_read_ctrl_vars[2])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0}));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_sr hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_mult_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_hw_input_global_wrapper_stencil_write_wen) begin
      if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 0) begin
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 3) begin $finish(-1); end
        bank_0[(((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
      end
      if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 1) begin
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 3) begin $finish(-1); end
        bank_1[(((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
      end
      if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 2) begin
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 3) begin $finish(-1); end
        bank_2[(((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
      end
      if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 3) begin
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out == 2) begin $finish(-1); end
        bank_3[(((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule


module mult_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

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

  logic [15:0] mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_0;
  assign mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_0 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars[1])) - 0);
  logic [15:0] mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_1;
  assign mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_1 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0);
mult_stencil_bank_selector mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_bank_selector(.d({mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_1,mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_0}));
  logic [15:0] mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_0;
  assign mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_0 = (((1*op_hcompute_mult_stencil_write_ctrl_vars[1])) - 0);
  logic [15:0] mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_1;
  assign mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_1 = (((1*op_hcompute_mult_stencil_write_ctrl_vars[2])) - 0);
mult_stencil_bank_selector mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector(.d({mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_1,mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_0}));

    mult_stencil_mult_stencil_op_hcompute_hw_output_stencil_3_to_mult_stencil_op_hcompute_mult_stencil_0_sr mult_stencil_op_hcompute_hw_output_stencil_3_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_mult_stencil_write[0]), .out(op_hcompute_hw_output_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_mult_stencil_write_wen) begin
      if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 0) begin
        if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 1) begin $finish(-1); end
        if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 2) begin $finish(-1); end
        if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 3) begin $finish(-1); end
        bank_0[(((1*op_hcompute_mult_stencil_write_ctrl_vars[1] + 64*op_hcompute_mult_stencil_write_ctrl_vars[2])))] <= op_hcompute_mult_stencil_write[0];
      end
      if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 1) begin
        if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 0) begin $finish(-1); end
        if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 2) begin $finish(-1); end
        if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 3) begin $finish(-1); end
        bank_1[(((1*op_hcompute_mult_stencil_write_ctrl_vars[1] + 64*op_hcompute_mult_stencil_write_ctrl_vars[2])))] <= op_hcompute_mult_stencil_write[0];
      end
      if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 2) begin
        if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 0) begin $finish(-1); end
        if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 1) begin $finish(-1); end
        if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 3) begin $finish(-1); end
        bank_2[(((1*op_hcompute_mult_stencil_write_ctrl_vars[1] + 64*op_hcompute_mult_stencil_write_ctrl_vars[2])))] <= op_hcompute_mult_stencil_write[0];
      end
      if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 3) begin
        if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 0) begin $finish(-1); end
        if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 1) begin $finish(-1); end
        if (mult_stencil_mult_stencil_op_hcompute_mult_stencil_0_bank_selector.out == 2) begin $finish(-1); end
        bank_3[(((1*op_hcompute_mult_stencil_write_ctrl_vars[1] + 64*op_hcompute_mult_stencil_write_ctrl_vars[2])))] <= op_hcompute_mult_stencil_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule

