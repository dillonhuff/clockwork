module jacobi2d_unrolled_4_rd9_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module jacobi2d_unrolled_4_rd6_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module jacobi2d_unrolled_4(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_jacobi2d_unrolled_4_rd10_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd10_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd10_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd10_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd10_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd10_select_out;
  jacobi2d_unrolled_4_rd10_select selector_jacobi2d_unrolled_4_rd10_select(.clk(selector_jacobi2d_unrolled_4_rd10_select_clk), .rst(selector_jacobi2d_unrolled_4_rd10_select_rst), .d0(selector_jacobi2d_unrolled_4_rd10_select_d0), .d1(selector_jacobi2d_unrolled_4_rd10_select_d1), .out(selector_jacobi2d_unrolled_4_rd10_select_out));
  assign selector_jacobi2d_unrolled_4_rd10_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd10_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd10_select

  // selector_jacobi2d_unrolled_4_rd6_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd6_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd6_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd6_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd6_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd6_select_out;
  jacobi2d_unrolled_4_rd6_select selector_jacobi2d_unrolled_4_rd6_select(.clk(selector_jacobi2d_unrolled_4_rd6_select_clk), .rst(selector_jacobi2d_unrolled_4_rd6_select_rst), .d0(selector_jacobi2d_unrolled_4_rd6_select_d0), .d1(selector_jacobi2d_unrolled_4_rd6_select_d1), .out(selector_jacobi2d_unrolled_4_rd6_select_out));
  assign selector_jacobi2d_unrolled_4_rd6_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd6_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd6_select

  // selector_jacobi2d_unrolled_4_rd7_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd7_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd7_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd7_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd7_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd7_select_out;
  jacobi2d_unrolled_4_rd7_select selector_jacobi2d_unrolled_4_rd7_select(.clk(selector_jacobi2d_unrolled_4_rd7_select_clk), .rst(selector_jacobi2d_unrolled_4_rd7_select_rst), .d0(selector_jacobi2d_unrolled_4_rd7_select_d0), .d1(selector_jacobi2d_unrolled_4_rd7_select_d1), .out(selector_jacobi2d_unrolled_4_rd7_select_out));
  assign selector_jacobi2d_unrolled_4_rd7_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd7_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd7_select

  // selector_jacobi2d_unrolled_4_rd8_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd8_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd8_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd8_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd8_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd8_select_out;
  jacobi2d_unrolled_4_rd8_select selector_jacobi2d_unrolled_4_rd8_select(.clk(selector_jacobi2d_unrolled_4_rd8_select_clk), .rst(selector_jacobi2d_unrolled_4_rd8_select_rst), .d0(selector_jacobi2d_unrolled_4_rd8_select_d0), .d1(selector_jacobi2d_unrolled_4_rd8_select_d1), .out(selector_jacobi2d_unrolled_4_rd8_select_out));
  assign selector_jacobi2d_unrolled_4_rd8_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd8_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd8_select

  // selector_jacobi2d_unrolled_4_rd9_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd9_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd9_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd9_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd9_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd9_select_out;
  jacobi2d_unrolled_4_rd9_select selector_jacobi2d_unrolled_4_rd9_select(.clk(selector_jacobi2d_unrolled_4_rd9_select_clk), .rst(selector_jacobi2d_unrolled_4_rd9_select_rst), .d0(selector_jacobi2d_unrolled_4_rd9_select_d0), .d1(selector_jacobi2d_unrolled_4_rd9_select_d1), .out(selector_jacobi2d_unrolled_4_rd9_select_out));
  assign selector_jacobi2d_unrolled_4_rd9_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd9_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd9_select

  // selector_jacobi2d_unrolled_4_rd11_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd11_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd11_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd11_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd11_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd11_select_out;
  jacobi2d_unrolled_4_rd11_select selector_jacobi2d_unrolled_4_rd11_select(.clk(selector_jacobi2d_unrolled_4_rd11_select_clk), .rst(selector_jacobi2d_unrolled_4_rd11_select_rst), .d0(selector_jacobi2d_unrolled_4_rd11_select_d0), .d1(selector_jacobi2d_unrolled_4_rd11_select_d1), .out(selector_jacobi2d_unrolled_4_rd11_select_out));
  assign selector_jacobi2d_unrolled_4_rd11_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd11_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd11_select

  // t1_t1_update_0_write0_merged_banks_4
  logic [9:0] t1_t1_update_0_write0_merged_banks_4_raddr;
  logic [0:0] t1_t1_update_0_write0_merged_banks_4_wen;
  logic [31:0] t1_t1_update_0_write0_merged_banks_4_wdata;
  logic [0:0] t1_t1_update_0_write0_merged_banks_4_clk;
  logic [0:0] t1_t1_update_0_write0_merged_banks_4_rst;
  logic [31:0] t1_t1_update_0_write0_merged_banks_4_rdata;
  bank_32_518 t1_t1_update_0_write0_merged_banks_4(.raddr(t1_t1_update_0_write0_merged_banks_4_raddr), .wen(t1_t1_update_0_write0_merged_banks_4_wen), .wdata(t1_t1_update_0_write0_merged_banks_4_wdata), .clk(t1_t1_update_0_write0_merged_banks_4_clk), .rst(t1_t1_update_0_write0_merged_banks_4_rst), .rdata(t1_t1_update_0_write0_merged_banks_4_rdata));
  assign t1_t1_update_0_write0_merged_banks_4_clk = clk;
  assign t1_t1_update_0_write0_merged_banks_4_rst = rst;
  // Bindings to t1_t1_update_0_write0_merged_banks_4

  // selector_jacobi2d_unrolled_4_rd1_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd1_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd1_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd1_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd1_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd1_select_out;
  jacobi2d_unrolled_4_rd1_select selector_jacobi2d_unrolled_4_rd1_select(.clk(selector_jacobi2d_unrolled_4_rd1_select_clk), .rst(selector_jacobi2d_unrolled_4_rd1_select_rst), .d0(selector_jacobi2d_unrolled_4_rd1_select_d0), .d1(selector_jacobi2d_unrolled_4_rd1_select_d1), .out(selector_jacobi2d_unrolled_4_rd1_select_out));
  assign selector_jacobi2d_unrolled_4_rd1_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd1_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd1_select

  // t1_t1_update_0_write2_merged_banks_3
  logic [9:0] t1_t1_update_0_write2_merged_banks_3_raddr;
  logic [0:0] t1_t1_update_0_write2_merged_banks_3_wen;
  logic [31:0] t1_t1_update_0_write2_merged_banks_3_wdata;
  logic [0:0] t1_t1_update_0_write2_merged_banks_3_clk;
  logic [0:0] t1_t1_update_0_write2_merged_banks_3_rst;
  logic [31:0] t1_t1_update_0_write2_merged_banks_3_rdata;
  bank_32_518 t1_t1_update_0_write2_merged_banks_3(.raddr(t1_t1_update_0_write2_merged_banks_3_raddr), .wen(t1_t1_update_0_write2_merged_banks_3_wen), .wdata(t1_t1_update_0_write2_merged_banks_3_wdata), .clk(t1_t1_update_0_write2_merged_banks_3_clk), .rst(t1_t1_update_0_write2_merged_banks_3_rst), .rdata(t1_t1_update_0_write2_merged_banks_3_rdata));
  assign t1_t1_update_0_write2_merged_banks_3_clk = clk;
  assign t1_t1_update_0_write2_merged_banks_3_rst = rst;
  // Bindings to t1_t1_update_0_write2_merged_banks_3

  // selector_jacobi2d_unrolled_4_rd12_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd12_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd12_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd12_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd12_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd12_select_out;
  jacobi2d_unrolled_4_rd12_select selector_jacobi2d_unrolled_4_rd12_select(.clk(selector_jacobi2d_unrolled_4_rd12_select_clk), .rst(selector_jacobi2d_unrolled_4_rd12_select_rst), .d0(selector_jacobi2d_unrolled_4_rd12_select_d0), .d1(selector_jacobi2d_unrolled_4_rd12_select_d1), .out(selector_jacobi2d_unrolled_4_rd12_select_out));
  assign selector_jacobi2d_unrolled_4_rd12_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd12_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd12_select

  // selector_jacobi2d_unrolled_4_rd13_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd13_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd13_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd13_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd13_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd13_select_out;
  jacobi2d_unrolled_4_rd13_select selector_jacobi2d_unrolled_4_rd13_select(.clk(selector_jacobi2d_unrolled_4_rd13_select_clk), .rst(selector_jacobi2d_unrolled_4_rd13_select_rst), .d0(selector_jacobi2d_unrolled_4_rd13_select_d0), .d1(selector_jacobi2d_unrolled_4_rd13_select_d1), .out(selector_jacobi2d_unrolled_4_rd13_select_out));
  assign selector_jacobi2d_unrolled_4_rd13_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd13_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd13_select

  // t1_t1_update_0_write1_merged_banks_3
  logic [9:0] t1_t1_update_0_write1_merged_banks_3_raddr;
  logic [0:0] t1_t1_update_0_write1_merged_banks_3_wen;
  logic [31:0] t1_t1_update_0_write1_merged_banks_3_wdata;
  logic [0:0] t1_t1_update_0_write1_merged_banks_3_clk;
  logic [0:0] t1_t1_update_0_write1_merged_banks_3_rst;
  logic [31:0] t1_t1_update_0_write1_merged_banks_3_rdata;
  bank_32_518 t1_t1_update_0_write1_merged_banks_3(.raddr(t1_t1_update_0_write1_merged_banks_3_raddr), .wen(t1_t1_update_0_write1_merged_banks_3_wen), .wdata(t1_t1_update_0_write1_merged_banks_3_wdata), .clk(t1_t1_update_0_write1_merged_banks_3_clk), .rst(t1_t1_update_0_write1_merged_banks_3_rst), .rdata(t1_t1_update_0_write1_merged_banks_3_rdata));
  assign t1_t1_update_0_write1_merged_banks_3_clk = clk;
  assign t1_t1_update_0_write1_merged_banks_3_rst = rst;
  // Bindings to t1_t1_update_0_write1_merged_banks_3

  // selector_jacobi2d_unrolled_4_rd2_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd2_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd2_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd2_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd2_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd2_select_out;
  jacobi2d_unrolled_4_rd2_select selector_jacobi2d_unrolled_4_rd2_select(.clk(selector_jacobi2d_unrolled_4_rd2_select_clk), .rst(selector_jacobi2d_unrolled_4_rd2_select_rst), .d0(selector_jacobi2d_unrolled_4_rd2_select_d0), .d1(selector_jacobi2d_unrolled_4_rd2_select_d1), .out(selector_jacobi2d_unrolled_4_rd2_select_out));
  assign selector_jacobi2d_unrolled_4_rd2_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd2_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd2_select

  // t1_t1_update_0_write3_merged_banks_4
  logic [9:0] t1_t1_update_0_write3_merged_banks_4_raddr;
  logic [0:0] t1_t1_update_0_write3_merged_banks_4_wen;
  logic [31:0] t1_t1_update_0_write3_merged_banks_4_wdata;
  logic [0:0] t1_t1_update_0_write3_merged_banks_4_clk;
  logic [0:0] t1_t1_update_0_write3_merged_banks_4_rst;
  logic [31:0] t1_t1_update_0_write3_merged_banks_4_rdata;
  bank_32_518 t1_t1_update_0_write3_merged_banks_4(.raddr(t1_t1_update_0_write3_merged_banks_4_raddr), .wen(t1_t1_update_0_write3_merged_banks_4_wen), .wdata(t1_t1_update_0_write3_merged_banks_4_wdata), .clk(t1_t1_update_0_write3_merged_banks_4_clk), .rst(t1_t1_update_0_write3_merged_banks_4_rst), .rdata(t1_t1_update_0_write3_merged_banks_4_rdata));
  assign t1_t1_update_0_write3_merged_banks_4_clk = clk;
  assign t1_t1_update_0_write3_merged_banks_4_rst = rst;
  // Bindings to t1_t1_update_0_write3_merged_banks_4

  // selector_jacobi2d_unrolled_4_rd0_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd0_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd0_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd0_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd0_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd0_select_out;
  jacobi2d_unrolled_4_rd0_select selector_jacobi2d_unrolled_4_rd0_select(.clk(selector_jacobi2d_unrolled_4_rd0_select_clk), .rst(selector_jacobi2d_unrolled_4_rd0_select_rst), .d0(selector_jacobi2d_unrolled_4_rd0_select_d0), .d1(selector_jacobi2d_unrolled_4_rd0_select_d1), .out(selector_jacobi2d_unrolled_4_rd0_select_out));
  assign selector_jacobi2d_unrolled_4_rd0_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd0_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd0_select

  // selector_jacobi2d_unrolled_4_rd5_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd5_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd5_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd5_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd5_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd5_select_out;
  jacobi2d_unrolled_4_rd5_select selector_jacobi2d_unrolled_4_rd5_select(.clk(selector_jacobi2d_unrolled_4_rd5_select_clk), .rst(selector_jacobi2d_unrolled_4_rd5_select_rst), .d0(selector_jacobi2d_unrolled_4_rd5_select_d0), .d1(selector_jacobi2d_unrolled_4_rd5_select_d1), .out(selector_jacobi2d_unrolled_4_rd5_select_out));
  assign selector_jacobi2d_unrolled_4_rd5_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd5_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd5_select

  // selector_jacobi2d_unrolled_4_rd3_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd3_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd3_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd3_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd3_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd3_select_out;
  jacobi2d_unrolled_4_rd3_select selector_jacobi2d_unrolled_4_rd3_select(.clk(selector_jacobi2d_unrolled_4_rd3_select_clk), .rst(selector_jacobi2d_unrolled_4_rd3_select_rst), .d0(selector_jacobi2d_unrolled_4_rd3_select_d0), .d1(selector_jacobi2d_unrolled_4_rd3_select_d1), .out(selector_jacobi2d_unrolled_4_rd3_select_out));
  assign selector_jacobi2d_unrolled_4_rd3_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd3_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd3_select

  // selector_jacobi2d_unrolled_4_rd4_select
  logic [0:0] selector_jacobi2d_unrolled_4_rd4_select_clk;
  logic [0:0] selector_jacobi2d_unrolled_4_rd4_select_rst;
  logic [31:0] selector_jacobi2d_unrolled_4_rd4_select_d0;
  logic [31:0] selector_jacobi2d_unrolled_4_rd4_select_d1;
  logic [31:0] selector_jacobi2d_unrolled_4_rd4_select_out;
  jacobi2d_unrolled_4_rd4_select selector_jacobi2d_unrolled_4_rd4_select(.clk(selector_jacobi2d_unrolled_4_rd4_select_clk), .rst(selector_jacobi2d_unrolled_4_rd4_select_rst), .d0(selector_jacobi2d_unrolled_4_rd4_select_d0), .d1(selector_jacobi2d_unrolled_4_rd4_select_d1), .out(selector_jacobi2d_unrolled_4_rd4_select_out));
  assign selector_jacobi2d_unrolled_4_rd4_select_clk = clk;
  assign selector_jacobi2d_unrolled_4_rd4_select_rst = rst;
  // Bindings to selector_jacobi2d_unrolled_4_rd4_select



endmodule


module jacobi2d_unrolled_4_rd7_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 517;
    end
  end

endmodule


module jacobi2d_unrolled_4_rd8_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 259;
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


module jacobi2d_unrolled_4_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module jacobi2d_unrolled_4_rd11_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 259;
    end
  end

endmodule


module bank_32_518(input [9:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 518;

  reg [31:0] data [517:0];

  reg [31:0] rdata_d;

  reg [9:0] waddr;

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


module jacobi2d_unrolled_4_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 259;
    end
  end

endmodule


module jacobi2d_unrolled_4_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 260;
    end
  end

endmodule


module jacobi2d_unrolled_4_rd12_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module jacobi2d_unrolled_4_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 517;
    end
  end

endmodule


module jacobi2d_unrolled_4_rd10_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 517;
    end
  end

endmodule


module jacobi2d_unrolled_4_rd13_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (254 - d0 >= 0) ? (258) : (-255 + d0 == 0) ? (258) : 0;
    end
  end

endmodule


module jacobi2d_unrolled_4_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module jacobi2d_unrolled_4_rd5_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 259;
    end
  end

endmodule


module jacobi2d_unrolled_4_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 517;
    end
  end

endmodule



