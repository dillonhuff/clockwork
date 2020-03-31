module t1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


  logic started;

  logic stage_0_active;

  logic stage_0_at_iter_0;

  assign stage_0_active = start | started;
  assign stage_0_at_iter_0 = start;
  assign done = stage_0_active;

  // Pipeline datapath registers...


  always @(posedge clk) begin
    if (rst) begin
      started <= 0;
    end else begin

      if (start) begin
        started <= 1;
      end




    end

  end


  // Data processing units...
  // t1_t1_update_0_write0_merged_banks_5
  logic [11:0] t1_t1_update_0_write0_merged_banks_5_raddr;
  logic [0:0] t1_t1_update_0_write0_merged_banks_5_wen;
  logic [31:0] t1_t1_update_0_write0_merged_banks_5_wdata;
  logic [0:0] t1_t1_update_0_write0_merged_banks_5_clk;
  logic [0:0] t1_t1_update_0_write0_merged_banks_5_rst;
  logic [31:0] t1_t1_update_0_write0_merged_banks_5_rdata;
  bank_32_2054 t1_t1_update_0_write0_merged_banks_5(.raddr(t1_t1_update_0_write0_merged_banks_5_raddr), .wen(t1_t1_update_0_write0_merged_banks_5_wen), .wdata(t1_t1_update_0_write0_merged_banks_5_wdata), .clk(t1_t1_update_0_write0_merged_banks_5_clk), .rst(t1_t1_update_0_write0_merged_banks_5_rst), .rdata(t1_t1_update_0_write0_merged_banks_5_rdata));
  assign t1_t1_update_0_write0_merged_banks_5_clk = clk;
  assign t1_t1_update_0_write0_merged_banks_5_rst = rst;
  // Bindings to t1_t1_update_0_write0_merged_banks_5

  // selector_jacobi2d_unrolled_1_rd0_select
  logic [0:0] selector_jacobi2d_unrolled_1_rd0_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_1_rd0_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_1_rd0_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_1_rd0_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_1_rd0_select_out;
  jacobi2d_unrolled_1_rd0_select selector_jacobi2d_unrolled_1_rd0_select(.clk(selector_jacobi2d_unrolled_1_rd0_select_clk), .rst(selector_jacobi2d_unrolled_1_rd0_select_rst), .d0(selector_jacobi2d_unrolled_1_rd0_select_d0), .d1(selector_jacobi2d_unrolled_1_rd0_select_d1), .out(selector_jacobi2d_unrolled_1_rd0_select_out));
  assign selector_jacobi2d_unrolled_1_rd0_select_clk = clk;
  assign selector_jacobi2d_unrolled_1_rd0_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_1_rd0_select

  // selector_jacobi2d_unrolled_1_rd1_select
  logic [0:0] selector_jacobi2d_unrolled_1_rd1_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_1_rd1_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_1_rd1_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_1_rd1_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_1_rd1_select_out;
  jacobi2d_unrolled_1_rd1_select selector_jacobi2d_unrolled_1_rd1_select(.clk(selector_jacobi2d_unrolled_1_rd1_select_clk), .rst(selector_jacobi2d_unrolled_1_rd1_select_rst), .d0(selector_jacobi2d_unrolled_1_rd1_select_d0), .d1(selector_jacobi2d_unrolled_1_rd1_select_d1), .out(selector_jacobi2d_unrolled_1_rd1_select_out));
  assign selector_jacobi2d_unrolled_1_rd1_select_clk = clk;
  assign selector_jacobi2d_unrolled_1_rd1_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_1_rd1_select

  // selector_jacobi2d_unrolled_1_rd2_select
  logic [0:0] selector_jacobi2d_unrolled_1_rd2_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_1_rd2_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_1_rd2_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_1_rd2_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_1_rd2_select_out;
  jacobi2d_unrolled_1_rd2_select selector_jacobi2d_unrolled_1_rd2_select(.clk(selector_jacobi2d_unrolled_1_rd2_select_clk), .rst(selector_jacobi2d_unrolled_1_rd2_select_rst), .d0(selector_jacobi2d_unrolled_1_rd2_select_d0), .d1(selector_jacobi2d_unrolled_1_rd2_select_d1), .out(selector_jacobi2d_unrolled_1_rd2_select_out));
  assign selector_jacobi2d_unrolled_1_rd2_select_clk = clk;
  assign selector_jacobi2d_unrolled_1_rd2_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_1_rd2_select

  // selector_jacobi2d_unrolled_1_rd3_select
  logic [0:0] selector_jacobi2d_unrolled_1_rd3_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_1_rd3_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_1_rd3_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_1_rd3_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_1_rd3_select_out;
  jacobi2d_unrolled_1_rd3_select selector_jacobi2d_unrolled_1_rd3_select(.clk(selector_jacobi2d_unrolled_1_rd3_select_clk), .rst(selector_jacobi2d_unrolled_1_rd3_select_rst), .d0(selector_jacobi2d_unrolled_1_rd3_select_d0), .d1(selector_jacobi2d_unrolled_1_rd3_select_d1), .out(selector_jacobi2d_unrolled_1_rd3_select_out));
  assign selector_jacobi2d_unrolled_1_rd3_select_clk = clk;
  assign selector_jacobi2d_unrolled_1_rd3_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_1_rd3_select

  // selector_jacobi2d_unrolled_1_rd4_select
  logic [0:0] selector_jacobi2d_unrolled_1_rd4_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_1_rd4_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_1_rd4_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_1_rd4_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_1_rd4_select_out;
  jacobi2d_unrolled_1_rd4_select selector_jacobi2d_unrolled_1_rd4_select(.clk(selector_jacobi2d_unrolled_1_rd4_select_clk), .rst(selector_jacobi2d_unrolled_1_rd4_select_rst), .d0(selector_jacobi2d_unrolled_1_rd4_select_d0), .d1(selector_jacobi2d_unrolled_1_rd4_select_d1), .out(selector_jacobi2d_unrolled_1_rd4_select_out));
  assign selector_jacobi2d_unrolled_1_rd4_select_clk = clk;
  assign selector_jacobi2d_unrolled_1_rd4_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_1_rd4_select



endmodule


module jacobi2d_unrolled_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1028;
    end
  end

endmodule


module jacobi2d_unrolled_1_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1027;
    end
  end

endmodule


module bank_32_2054(input [11:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 2054;

  reg [31:0] data [2053:0];

  reg [31:0] rdata_d;

  reg [11:0] waddr;

  assign rdata = rdata_d;

  always @(posedge clk) begin
    if (rst) begin
      waddr <= 0;
    end else begin
      if (wen) begin
        data[waddr] <= wdata;
        waddr <= (waddr + 1) % DEPTH;
      end

      rdata_d <= data[(waddr + raddr) % DEPTH];
    end
  end

endmodule


module jacobi2d_unrolled_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


  logic started;

  logic stage_0_active;

  logic stage_0_at_iter_0;

  assign stage_0_active = start | started;
  assign stage_0_at_iter_0 = start;
  assign done = stage_0_active;

  // Pipeline datapath registers...


  always @(posedge clk) begin
    if (rst) begin
      started <= 0;
    end else begin

      if (start) begin
        started <= 1;
      end




    end

  end


  // Data processing units...


endmodule


module jacobi2d_unrolled_1_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 2053;
    end
  end

endmodule


module jacobi2d_unrolled_1_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module t1_arg(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


  logic started;

  logic stage_0_active;

  logic stage_0_at_iter_0;

  assign stage_0_active = start | started;
  assign stage_0_at_iter_0 = start;
  assign done = stage_0_active;

  // Pipeline datapath registers...


  always @(posedge clk) begin
    if (rst) begin
      started <= 0;
    end else begin

      if (start) begin
        started <= 1;
      end




    end

  end


  // Data processing units...


endmodule


module jacobi2d_unrolled_1_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (1022 - d0 >= 0) ? (1026) : (-1023 + d0 == 0) ? (1026) : 0;
    end
  end

endmodule


module t1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


  logic started;

  logic stage_0_active;

  logic stage_0_at_iter_0;

  assign stage_0_active = start | started;
  assign stage_0_at_iter_0 = start;
  assign done = stage_0_active;

  // Pipeline datapath registers...


  always @(posedge clk) begin
    if (rst) begin
      started <= 0;
    end else begin

      if (start) begin
        started <= 1;
      end




    end

  end


  // Data processing units...


endmodule


module jacobi2d_unrolled_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


  logic started;

  logic stage_0_active;

  logic stage_0_at_iter_0;

  assign stage_0_active = start | started;
  assign stage_0_at_iter_0 = start;
  assign done = stage_0_active;

  // Pipeline datapath registers...


  always @(posedge clk) begin
    if (rst) begin
      started <= 0;
    end else begin

      if (start) begin
        started <= 1;
      end




    end

  end


  // Data processing units...


endmodule



