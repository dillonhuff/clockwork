
module corrected_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[2] % 2);
  assign out = bank_index_0*1+bank_index_1*2+bank_index_2*4;

endmodule

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

  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_0;
  assign corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_0 = (((1)) - 0);
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_1;
  assign corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_1 = (((1*op_hcompute_curved_stencil_1_read_ctrl_vars[1])) - 0);
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_2;
  assign corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_2 = (((1*op_hcompute_curved_stencil_1_read_ctrl_vars[2])) - 0);
corrected_stencil_bank_selector corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_bank_selector(.d({corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_2,corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_1,corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_0}));
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_0;
  assign corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_0 = (((2)) - 0);
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_1;
  assign corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_1 = (((1*op_hcompute_curved_stencil_2_read_ctrl_vars[1])) - 0);
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_2;
  assign corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_2 = (((1*op_hcompute_curved_stencil_2_read_ctrl_vars[2])) - 0);
corrected_stencil_bank_selector corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_bank_selector(.d({corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_2,corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_1,corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_0}));
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_0;
  assign corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_0 = (0 - 0);
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_1;
  assign corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_1 = (((1*op_hcompute_curved_stencil_read_ctrl_vars[1])) - 0);
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_2;
  assign corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_2 = (((1*op_hcompute_curved_stencil_read_ctrl_vars[2])) - 0);
corrected_stencil_bank_selector corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_bank_selector(.d({corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_2,corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_1,corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_0}));
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_0;
  assign corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_0 = (((1)) - 0);
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_1;
  assign corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_1 = (((1*op_hcompute_corrected_stencil_1_write_ctrl_vars[1])) - 0);
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_2;
  assign corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_2 = (((1*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])) - 0);
corrected_stencil_bank_selector corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector(.d({corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_2,corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_1,corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_0}));
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_0;
  assign corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_0 = (((2)) - 0);
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_1;
  assign corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_1 = (((1*op_hcompute_corrected_stencil_2_write_ctrl_vars[1])) - 0);
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_2;
  assign corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_2 = (((1*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])) - 0);
corrected_stencil_bank_selector corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector(.d({corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_2,corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_1,corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_0}));
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_0;
  assign corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_0 = (0 - 0);
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_1;
  assign corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_1 = (((1*op_hcompute_corrected_stencil_write_ctrl_vars[1])) - 0);
  logic [15:0] corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_2;
  assign corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_2 = (((1*op_hcompute_corrected_stencil_write_ctrl_vars[2])) - 0);
corrected_stencil_bank_selector corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector(.d({corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_2,corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_1,corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_0}));

    corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_1_41_to_corrected_stencil_op_hcompute_corrected_stencil_1_48_sr corrected_stencil_op_hcompute_curved_stencil_1_41_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_corrected_stencil_1_write[0]), .out(op_hcompute_curved_stencil_1_read[0]));

    corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_2_39_to_corrected_stencil_op_hcompute_corrected_stencil_2_44_sr corrected_stencil_op_hcompute_curved_stencil_2_39_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_corrected_stencil_2_write[0]), .out(op_hcompute_curved_stencil_2_read[0]));

    corrected_stencil_corrected_stencil_op_hcompute_curved_stencil_43_to_corrected_stencil_op_hcompute_corrected_stencil_52_sr corrected_stencil_op_hcompute_curved_stencil_43_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_corrected_stencil_write[0]), .out(op_hcompute_curved_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_corrected_stencil_1_write_wen) begin
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 0) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((1 + 3*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_1_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 1) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((1 + 3*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_1_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 2) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((1 + 3*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_1_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 3) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((1 + 3*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_1_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 4) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((1 + 3*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_1_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 5) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((1 + 3*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_1_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 6) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((1 + 3*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_1_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 7) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_1_48_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((1 + 3*op_hcompute_corrected_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_1_write[0];
      end
    end
    if (op_hcompute_corrected_stencil_2_write_wen) begin
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 0) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((2 + 3*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_2_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 1) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((2 + 3*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_2_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 2) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((2 + 3*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_2_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 3) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((2 + 3*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_2_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 4) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((2 + 3*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_2_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 5) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((2 + 3*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_2_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 6) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((2 + 3*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_2_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 7) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_2_44_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((2 + 3*op_hcompute_corrected_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_2_write[0];
      end
    end
    if (op_hcompute_corrected_stencil_write_wen) begin
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 0) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((3*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 1) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((3*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 2) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((3*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 3) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((3*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 4) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((3*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 5) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 6) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((3*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 6) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((3*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_write[0];
      end
      if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 7) begin
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 0) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 1) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 2) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 3) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 4) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 5) begin $finish(-1); end
        if (corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_52_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((3*op_hcompute_corrected_stencil_write_ctrl_vars[1] + 174*op_hcompute_corrected_stencil_write_ctrl_vars[2])))] <= op_hcompute_corrected_stencil_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule


module curved_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[2] % 2);
  assign out = bank_index_0*1+bank_index_1*2+bank_index_2*4;

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

  logic [15:0] curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_0;
  assign curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_0 = (((1)) - 0);
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_1;
  assign curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_1 = (((1*op_hcompute_hw_output_stencil_1_read_ctrl_vars[1])) - 0);
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_2;
  assign curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_2 = (((1*op_hcompute_hw_output_stencil_1_read_ctrl_vars[2])) - 0);
curved_stencil_bank_selector curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_bank_selector(.d({curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_2,curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_1,curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_0}));
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_0;
  assign curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_0 = (((2)) - 0);
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_1;
  assign curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_1 = (((1*op_hcompute_hw_output_stencil_2_read_ctrl_vars[1])) - 0);
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_2;
  assign curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_2 = (((1*op_hcompute_hw_output_stencil_2_read_ctrl_vars[2])) - 0);
curved_stencil_bank_selector curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_bank_selector(.d({curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_2,curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_1,curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_0}));
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_0;
  assign curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_0 = (0 - 0);
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_1;
  assign curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_1 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars[1])) - 0);
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_2;
  assign curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_2 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0);
curved_stencil_bank_selector curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_bank_selector(.d({curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_2,curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_1,curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_0}));
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_0;
  assign curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_0 = (((1)) - 0);
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_1;
  assign curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_1 = (((1*op_hcompute_curved_stencil_1_write_ctrl_vars[1])) - 0);
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_2;
  assign curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_2 = (((1*op_hcompute_curved_stencil_1_write_ctrl_vars[2])) - 0);
curved_stencil_bank_selector curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector(.d({curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_2,curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_1,curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_0}));
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_0;
  assign curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_0 = (((2)) - 0);
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_1;
  assign curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_1 = (((1*op_hcompute_curved_stencil_2_write_ctrl_vars[1])) - 0);
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_2;
  assign curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_2 = (((1*op_hcompute_curved_stencil_2_write_ctrl_vars[2])) - 0);
curved_stencil_bank_selector curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector(.d({curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_2,curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_1,curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_0}));
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_0;
  assign curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_0 = (0 - 0);
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_1;
  assign curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_1 = (((1*op_hcompute_curved_stencil_write_ctrl_vars[1])) - 0);
  logic [15:0] curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_2;
  assign curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_2 = (((1*op_hcompute_curved_stencil_write_ctrl_vars[2])) - 0);
curved_stencil_bank_selector curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector(.d({curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_2,curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_1,curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_0}));

    curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_1_3_to_curved_stencil_op_hcompute_curved_stencil_1_40_sr curved_stencil_op_hcompute_hw_output_stencil_1_3_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_curved_stencil_1_write[0]), .out(op_hcompute_hw_output_stencil_1_read[0]));

    curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_2_1_to_curved_stencil_op_hcompute_curved_stencil_2_38_sr curved_stencil_op_hcompute_hw_output_stencil_2_1_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_curved_stencil_2_write[0]), .out(op_hcompute_hw_output_stencil_2_read[0]));

    curved_stencil_curved_stencil_op_hcompute_hw_output_stencil_5_to_curved_stencil_op_hcompute_curved_stencil_42_sr curved_stencil_op_hcompute_hw_output_stencil_5_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_curved_stencil_write[0]), .out(op_hcompute_hw_output_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_curved_stencil_1_write_wen) begin
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 0) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((1 + 3*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_1_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 1) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((1 + 3*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_1_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 2) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((1 + 3*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_1_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 3) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((1 + 3*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_1_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 4) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((1 + 3*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_1_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 5) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((1 + 3*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_1_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 6) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((1 + 3*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_1_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 7) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_1_40_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((1 + 3*op_hcompute_curved_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_1_write[0];
      end
    end
    if (op_hcompute_curved_stencil_2_write_wen) begin
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 0) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((2 + 3*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_2_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 1) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((2 + 3*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_2_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 2) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((2 + 3*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_2_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 3) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((2 + 3*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_2_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 4) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((2 + 3*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_2_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 5) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((2 + 3*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_2_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 6) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((2 + 3*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_2_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 7) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_2_38_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((2 + 3*op_hcompute_curved_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_2_write[0];
      end
    end
    if (op_hcompute_curved_stencil_write_wen) begin
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 0) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((3*op_hcompute_curved_stencil_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 1) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((3*op_hcompute_curved_stencil_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 2) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((3*op_hcompute_curved_stencil_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 3) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((3*op_hcompute_curved_stencil_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 4) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((3*op_hcompute_curved_stencil_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 5) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 6) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((3*op_hcompute_curved_stencil_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 6) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((3*op_hcompute_curved_stencil_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_write[0];
      end
      if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 7) begin
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 0) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 1) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 2) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 3) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 4) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 5) begin $finish(-1); end
        if (curved_stencil_curved_stencil_op_hcompute_curved_stencil_42_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((3*op_hcompute_curved_stencil_write_ctrl_vars[1] + 174*op_hcompute_curved_stencil_write_ctrl_vars[2])))] <= op_hcompute_curved_stencil_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule


module demosaicked_1_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[2] % 2);
  assign out = bank_index_0*1+bank_index_1*2+bank_index_2*4;

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

  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_0;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_0 = (((1)) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_1;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_1 = (((1*op_hcompute_corrected_stencil_1_read_ctrl_vars[1])) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_2;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_2 = (((1*op_hcompute_corrected_stencil_1_read_ctrl_vars[2])) - 0);
demosaicked_1_stencil_bank_selector demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_bank_selector(.d({demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_2,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_1,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_0}));
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_0;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_0 = (0 - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_1;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_1 = (((1*op_hcompute_corrected_stencil_1_read_ctrl_vars[1])) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_2;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_2 = (((1*op_hcompute_corrected_stencil_1_read_ctrl_vars[2])) - 0);
demosaicked_1_stencil_bank_selector demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_bank_selector(.d({demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_2,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_1,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_0}));
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_0;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_0 = (((2)) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_1;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_1 = (((1*op_hcompute_corrected_stencil_1_read_ctrl_vars[1])) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_2;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_2 = (((1*op_hcompute_corrected_stencil_1_read_ctrl_vars[2])) - 0);
demosaicked_1_stencil_bank_selector demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_bank_selector(.d({demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_2,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_1,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_0}));
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_0;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_0 = (((2)) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_1;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_1 = (((1*op_hcompute_corrected_stencil_2_read_ctrl_vars[1])) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_2;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_2 = (((1*op_hcompute_corrected_stencil_2_read_ctrl_vars[2])) - 0);
demosaicked_1_stencil_bank_selector demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_bank_selector(.d({demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_2,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_1,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_0}));
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_0;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_0 = (((1)) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_1;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_1 = (((1*op_hcompute_corrected_stencil_2_read_ctrl_vars[1])) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_2;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_2 = (((1*op_hcompute_corrected_stencil_2_read_ctrl_vars[2])) - 0);
demosaicked_1_stencil_bank_selector demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_bank_selector(.d({demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_2,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_1,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_0}));
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_0;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_0 = (0 - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_1;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_1 = (((1*op_hcompute_corrected_stencil_2_read_ctrl_vars[1])) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_2;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_2 = (((1*op_hcompute_corrected_stencil_2_read_ctrl_vars[2])) - 0);
demosaicked_1_stencil_bank_selector demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_bank_selector(.d({demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_2,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_1,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_0}));
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_53_0;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_53_0 = (0 - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_53_1;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_53_1 = (((1*op_hcompute_corrected_stencil_read_ctrl_vars[1])) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_53_2;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_53_2 = (((1*op_hcompute_corrected_stencil_read_ctrl_vars[2])) - 0);
demosaicked_1_stencil_bank_selector demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_53_bank_selector(.d({demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_53_2,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_53_1,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_53_0}));
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_54_0;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_54_0 = (((2)) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_54_1;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_54_1 = (((1*op_hcompute_corrected_stencil_read_ctrl_vars[1])) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_54_2;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_54_2 = (((1*op_hcompute_corrected_stencil_read_ctrl_vars[2])) - 0);
demosaicked_1_stencil_bank_selector demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_54_bank_selector(.d({demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_54_2,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_54_1,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_54_0}));
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_55_0;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_55_0 = (((1)) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_55_1;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_55_1 = (((1*op_hcompute_corrected_stencil_read_ctrl_vars[1])) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_55_2;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_55_2 = (((1*op_hcompute_corrected_stencil_read_ctrl_vars[2])) - 0);
demosaicked_1_stencil_bank_selector demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_55_bank_selector(.d({demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_55_2,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_55_1,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_55_0}));
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_0;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_0 = (((1)) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_1;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_1 = (((1*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1])) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_2;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_2 = (((1*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])) - 0);
demosaicked_1_stencil_bank_selector demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector(.d({demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_2,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_1,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_0}));
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_0;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_0 = (0 - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_1;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_1 = (((1*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1])) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_2;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_2 = (((1*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])) - 0);
demosaicked_1_stencil_bank_selector demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector(.d({demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_2,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_1,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_0}));
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_0;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_0 = (((2)) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_1;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_1 = (((1*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1])) - 0);
  logic [15:0] demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_2;
  assign demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_2 = (((1*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])) - 0);
demosaicked_1_stencil_bank_selector demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector(.d({demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_2,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_1,demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_0}));

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
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 0) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((1 + 3*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_1_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 1) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((1 + 3*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_1_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 2) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((1 + 3*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_1_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 3) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((1 + 3*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_1_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 4) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((1 + 3*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_1_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 5) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((1 + 3*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_1_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 6) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((1 + 3*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_1_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 7) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((1 + 3*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_1_write[0];
      end
    end
    if (op_hcompute_demosaicked_1_stencil_write_wen) begin
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 0) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((3*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 1) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((3*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 2) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((3*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 3) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((3*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 4) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((3*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 5) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((3*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 6) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((3*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 7) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((3*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_write[0];
      end
    end
    if (op_hcompute_demosaicked_1_stencil_2_write_wen) begin
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 0) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((2 + 3*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_2_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 1) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((2 + 3*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_2_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 2) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((2 + 3*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_2_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 3) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((2 + 3*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_2_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 4) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((2 + 3*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_2_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 5) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 6) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((2 + 3*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_2_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 6) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((2 + 3*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_2_write[0];
      end
      if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 7) begin
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 0) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 1) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 2) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 3) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 4) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 5) begin $finish(-1); end
        if (demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((2 + 3*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] + 174*op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2])))] <= op_hcompute_demosaicked_1_stencil_2_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule


module denoised_1_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

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

  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_0 = (((1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_1 = (((-1 + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_0 = (((1 + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_1 = (((1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_0 = (((1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_1 = (((1 + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_0 = (((-1 + 1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_1 = (((1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_0 = (((1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_1 = (((1*op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_0 = (((1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_1 = (((1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_0 = (((1 + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_1 = (((1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_0 = (((1 + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_1 = (((1 + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_0 = (((1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_1 = (((1 + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_0 = (((-1 + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_1 = (((1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_0 = (((1 + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_1 = (((-1 + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_0 = (((1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_1 = (((-1 + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_0 = (((-1 + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_1 = (((-1 + 1*op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_0 = (((1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_1 = (((1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_0 = (((1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_1 = (((1 + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_0 = (((1 + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_1 = (((1 + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_0 = (((1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_1 = (((-1 + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_0 = (((1 + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_1 = (((1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_0 = (((-1 + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_1 = (((1 + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_0 = (((-1 + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_1 = (((1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_0 = (((-1 + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_1 = (((-1 + 1*op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_0}));
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_0;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_0 = (((-1 + 1*op_hcompute_denoised_1_stencil_write_ctrl_vars[1])) - -1);
  logic [15:0] denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_1;
  assign denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_1 = (((-1 + 1*op_hcompute_denoised_1_stencil_write_ctrl_vars[2])) - -1);
denoised_1_stencil_bank_selector denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector(.d({denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_1,denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_0}));

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
      if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 0) begin
        if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 1) begin $finish(-1); end
        if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 2) begin $finish(-1); end
        if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 3) begin $finish(-1); end
        bank_0[(((1*op_hcompute_denoised_1_stencil_write_ctrl_vars[1] + 60*op_hcompute_denoised_1_stencil_write_ctrl_vars[2])))] <= op_hcompute_denoised_1_stencil_write[0];
      end
      if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 1) begin
        if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 0) begin $finish(-1); end
        if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 2) begin $finish(-1); end
        if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 3) begin $finish(-1); end
        bank_1[(((1*op_hcompute_denoised_1_stencil_write_ctrl_vars[1] + 60*op_hcompute_denoised_1_stencil_write_ctrl_vars[2])))] <= op_hcompute_denoised_1_stencil_write[0];
      end
      if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 2) begin
        if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 0) begin $finish(-1); end
        if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 1) begin $finish(-1); end
        if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 3) begin $finish(-1); end
        bank_2[(((1*op_hcompute_denoised_1_stencil_write_ctrl_vars[1] + 60*op_hcompute_denoised_1_stencil_write_ctrl_vars[2])))] <= op_hcompute_denoised_1_stencil_write[0];
      end
      if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 3) begin
        if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 0) begin $finish(-1); end
        if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 1) begin $finish(-1); end
        if (denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_8_bank_selector.out == 2) begin $finish(-1); end
        bank_3[(((1*op_hcompute_denoised_1_stencil_write_ctrl_vars[1] + 60*op_hcompute_denoised_1_stencil_write_ctrl_vars[2])))] <= op_hcompute_denoised_1_stencil_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule


module hw_input_global_wrapper_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

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

  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_0 = (((1 + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[1])) - -3);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_1 = (((-1 + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_0 = (((-3 + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[1])) - -3);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_1 = (((-1 + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_0 = (((-1 + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[1])) - -3);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_1 = (((-3 + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_0 = (((-1 + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[1])) - -3);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_1 = (((1 + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_0 = (((-1 + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[1])) - -3);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_1 = (((-1 + 1*op_hcompute_denoised_1_stencil_read_ctrl_vars[2])) - -3);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_0 = (((-3 + 1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1])) - -3);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_1 = (((-3 + 1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])) - -3);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_0}));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_denoised_1_stencil_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_denoised_1_stencil_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_denoised_1_stencil_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_denoised_1_stencil_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_to_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_sr hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_hw_input_global_wrapper_stencil_write[0]), .out(op_hcompute_denoised_1_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_hw_input_global_wrapper_stencil_write_wen) begin
      if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 0) begin
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 3) begin $finish(-1); end
        bank_0[(((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
      end
      if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 1) begin
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 3) begin $finish(-1); end
        bank_1[(((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
      end
      if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 2) begin
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 3) begin $finish(-1); end
        bank_2[(((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
      end
      if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 3) begin
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_bank_selector.out == 2) begin $finish(-1); end
        bank_3[(((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 64*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule

