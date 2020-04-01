module dark_weights_normed_gauss_blur_3(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1
  logic [-1:0] dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1(.raddr(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_raddr), .wen(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_wen), .wdata(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_wdata), .clk(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_clk), .rst(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_rst), .rdata(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_rdata));
  assign dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_clk = clk;
  assign dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1

  // selector_dark_weights_normed_gauss_ds_3_rd0_select
  logic [0:0] selector_dark_weights_normed_gauss_ds_3_rd0_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_ds_3_rd0_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_ds_3_rd0_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_ds_3_rd0_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_ds_3_rd0_select_out;
  dark_weights_normed_gauss_ds_3_rd0_select selector_dark_weights_normed_gauss_ds_3_rd0_select(.clk(selector_dark_weights_normed_gauss_ds_3_rd0_select_clk), .rst(selector_dark_weights_normed_gauss_ds_3_rd0_select_rst), .d0(selector_dark_weights_normed_gauss_ds_3_rd0_select_d0), .d1(selector_dark_weights_normed_gauss_ds_3_rd0_select_d1), .out(selector_dark_weights_normed_gauss_ds_3_rd0_select_out));
  assign selector_dark_weights_normed_gauss_ds_3_rd0_select_clk = clk;
  assign selector_dark_weights_normed_gauss_ds_3_rd0_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_ds_3_rd0_select



endmodule


module dark_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_weights_normed_gauss_blur_2_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 105;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_2_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 207;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_2_rd6_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (99 - d0 >= 0) ? (206) : (-100 + d0 == 0) ? (206) : 0;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_2_rd5_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_2_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 104;
    end
  end

endmodule


module fused_level_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module fused_level_3_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module fused_level_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_weights_normed_gauss_blur_2_rd8_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_2_rd7_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (99 - d0 >= 0) ? (103) : (-100 + d0 == 0) ? (103) : 0;
    end
  end

endmodule


module bright_weights_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_laplace_us_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_weights_normed_gauss_ds_3_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_laplace_us_0_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_weights_normed_gauss_ds_3_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_weights_normed_gauss_ds_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_weights_normed_gauss_blur_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 208;
    end
  end

endmodule


module fused_level_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (-97 + d0 == 0 && 96 - d1 >= 0) ? (623) : (96 - d1 >= 0 && 96 - d0 >= 0) ? (624) : (-97 + d1 == 0) ? ((617 - d0)) : (-98 + d0 >= 0 && 96 - d1 >= 0) ? ((720 - d0)) : (-98 + d1 >= 0) ? (((10608 - d0) - 103 * d1)) : 0;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_2_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 2;
    end
  end

endmodule


module dark_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module fused_level_3(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_final_merged_2_rd0_select
  logic [0:0] selector_final_merged_2_rd0_select_clk;
  logic [0:0] selector_final_merged_2_rd0_select_rst;
  logic [31:0] selector_final_merged_2_rd0_select_d0;
  logic [31:0] selector_final_merged_2_rd0_select_d1;
  logic [31:0] selector_final_merged_2_rd0_select_out;
  final_merged_2_rd0_select selector_final_merged_2_rd0_select(.clk(selector_final_merged_2_rd0_select_clk), .rst(selector_final_merged_2_rd0_select_rst), .d0(selector_final_merged_2_rd0_select_d0), .d1(selector_final_merged_2_rd0_select_d1), .out(selector_final_merged_2_rd0_select_out));
  assign selector_final_merged_2_rd0_select_clk = clk;
  assign selector_final_merged_2_rd0_select_rst = rst;
  // Bindings to selector_final_merged_2_rd0_select

  // fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0
  logic [4:0] fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_raddr;
  logic [0:0] fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_wen;
  logic [31:0] fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_wdata;
  logic [0:0] fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_clk;
  logic [0:0] fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_rst;
  logic [31:0] fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_rdata;
  bank_32_25 fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0(.raddr(fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_raddr), .wen(fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_wen), .wdata(fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_wdata), .clk(fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_clk), .rst(fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_rst), .rdata(fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_rdata));
  assign fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_clk = clk;
  assign fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_rst = rst;
  // Bindings to fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0



endmodule


module dark_weights_normed_gauss_blur_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1
  logic [-1:0] dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1(.raddr(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_raddr), .wen(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_wen), .wdata(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_wdata), .clk(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_clk), .rst(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_rst), .rdata(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_rdata));
  assign dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_clk = clk;
  assign dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1

  // selector_dark_weights_normed_gauss_ds_1_rd0_select
  logic [0:0] selector_dark_weights_normed_gauss_ds_1_rd0_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_ds_1_rd0_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_ds_1_rd0_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_ds_1_rd0_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_ds_1_rd0_select_out;
  dark_weights_normed_gauss_ds_1_rd0_select selector_dark_weights_normed_gauss_ds_1_rd0_select(.clk(selector_dark_weights_normed_gauss_ds_1_rd0_select_clk), .rst(selector_dark_weights_normed_gauss_ds_1_rd0_select_rst), .d0(selector_dark_weights_normed_gauss_ds_1_rd0_select_d0), .d1(selector_dark_weights_normed_gauss_ds_1_rd0_select_d1), .out(selector_dark_weights_normed_gauss_ds_1_rd0_select_out));
  assign selector_dark_weights_normed_gauss_ds_1_rd0_select_clk = clk;
  assign selector_dark_weights_normed_gauss_ds_1_rd0_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_ds_1_rd0_select



endmodule


module dark_weights_normed_gauss_blur_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_dark_weights_normed_gauss_ds_2_rd0_select
  logic [0:0] selector_dark_weights_normed_gauss_ds_2_rd0_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_ds_2_rd0_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_ds_2_rd0_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_ds_2_rd0_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_ds_2_rd0_select_out;
  dark_weights_normed_gauss_ds_2_rd0_select selector_dark_weights_normed_gauss_ds_2_rd0_select(.clk(selector_dark_weights_normed_gauss_ds_2_rd0_select_clk), .rst(selector_dark_weights_normed_gauss_ds_2_rd0_select_rst), .d0(selector_dark_weights_normed_gauss_ds_2_rd0_select_d0), .d1(selector_dark_weights_normed_gauss_ds_2_rd0_select_d1), .out(selector_dark_weights_normed_gauss_ds_2_rd0_select_out));
  assign selector_dark_weights_normed_gauss_ds_2_rd0_select_clk = clk;
  assign selector_dark_weights_normed_gauss_ds_2_rd0_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_ds_2_rd0_select

  // dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1
  logic [-1:0] dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1(.raddr(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_raddr), .wen(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_wen), .wdata(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_wdata), .clk(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_clk), .rst(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_rst), .rdata(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_rdata));
  assign dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_clk = clk;
  assign dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1



endmodule


module dark_weights_normed_gauss_ds_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module in_off_chip(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module in(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_dark_rd0_select
  logic [0:0] selector_dark_rd0_select_clk;
  logic [0:0] selector_dark_rd0_select_rst;
  logic [31:0] selector_dark_rd0_select_d0;
  logic [31:0] selector_dark_rd0_select_d1;
  logic [31:0] selector_dark_rd0_select_out;
  dark_rd0_select selector_dark_rd0_select(.clk(selector_dark_rd0_select_clk), .rst(selector_dark_rd0_select_rst), .d0(selector_dark_rd0_select_d0), .d1(selector_dark_rd0_select_d1), .out(selector_dark_rd0_select_out));
  assign selector_dark_rd0_select_clk = clk;
  assign selector_dark_rd0_select_rst = rst;
  // Bindings to selector_dark_rd0_select

  // in_in_update_0_write0_merged_banks_2
  logic [-1:0] in_in_update_0_write0_merged_banks_2_raddr;
  logic [0:0] in_in_update_0_write0_merged_banks_2_wen;
  logic [31:0] in_in_update_0_write0_merged_banks_2_wdata;
  logic [0:0] in_in_update_0_write0_merged_banks_2_clk;
  logic [0:0] in_in_update_0_write0_merged_banks_2_rst;
  logic [31:0] in_in_update_0_write0_merged_banks_2_rdata;
  bank_32_1 in_in_update_0_write0_merged_banks_2(.raddr(in_in_update_0_write0_merged_banks_2_raddr), .wen(in_in_update_0_write0_merged_banks_2_wen), .wdata(in_in_update_0_write0_merged_banks_2_wdata), .clk(in_in_update_0_write0_merged_banks_2_clk), .rst(in_in_update_0_write0_merged_banks_2_rst), .rdata(in_in_update_0_write0_merged_banks_2_rdata));
  assign in_in_update_0_write0_merged_banks_2_clk = clk;
  assign in_in_update_0_write0_merged_banks_2_rst = rst;
  // Bindings to in_in_update_0_write0_merged_banks_2

  // selector_bright_rd0_select
  logic [0:0] selector_bright_rd0_select_clk;
  logic [0:0] selector_bright_rd0_select_rst;
  logic [31:0] selector_bright_rd0_select_d0;
  logic [31:0] selector_bright_rd0_select_d1;
  logic [31:0] selector_bright_rd0_select_out;
  bright_rd0_select selector_bright_rd0_select(.clk(selector_bright_rd0_select_clk), .rst(selector_bright_rd0_select_rst), .d0(selector_bright_rd0_select_d0), .d1(selector_bright_rd0_select_d1), .out(selector_bright_rd0_select_out));
  assign selector_bright_rd0_select_clk = clk;
  assign selector_bright_rd0_select_rst = rst;
  // Bindings to selector_bright_rd0_select



endmodule


module dark_weights_normed_gauss_ds_3_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module pyramid_synthetic_exposure_fusion(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_weights_normed_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_weights_normed_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_weights_normed_gauss_ds_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_laplace_us_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_weights_normed_gauss_blur_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bank_32_417(input [8:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 417;

  reg [31:0] data [416:0];

  reg [31:0] rdata_d;

  reg [8:0] waddr;

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


module bright_gauss_blur_1_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 209;
    end
  end

endmodule


module bright_gauss_blur_1_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 415;
    end
  end

endmodule


module bright_laplace_us_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = ((-1 - d1) % 2 == 0 && 47 - d0 >= 0) ? ((24 - floord(2*d0, 4))) : 0;
    end
  end

endmodule


module bank_32_25(input [4:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 25;

  reg [31:0] data [24:0];

  reg [31:0] rdata_d;

  reg [4:0] waddr;

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


module bright_laplace_diff_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_fused_level_1_rd0_select
  logic [0:0] selector_fused_level_1_rd0_select_clk;
  logic [0:0] selector_fused_level_1_rd0_select_rst;
  logic [31:0] selector_fused_level_1_rd0_select_d0;
  logic [31:0] selector_fused_level_1_rd0_select_d1;
  logic [31:0] selector_fused_level_1_rd0_select_out;
  fused_level_1_rd0_select selector_fused_level_1_rd0_select(.clk(selector_fused_level_1_rd0_select_clk), .rst(selector_fused_level_1_rd0_select_rst), .d0(selector_fused_level_1_rd0_select_d0), .d1(selector_fused_level_1_rd0_select_d1), .out(selector_fused_level_1_rd0_select_out));
  assign selector_fused_level_1_rd0_select_clk = clk;
  assign selector_fused_level_1_rd0_select_rst = rst;
  // Bindings to selector_fused_level_1_rd0_select

  // bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1
  logic [-1:0] bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1(.raddr(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_raddr), .wen(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_wen), .wdata(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_wdata), .clk(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_clk), .rst(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_rst), .rdata(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_rdata));
  assign bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_clk = clk;
  assign bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1



endmodule


module bank_32_105(input [6:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 105;

  reg [31:0] data [104:0];

  reg [31:0] rdata_d;

  reg [6:0] waddr;

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


module bright_gauss_blur_3_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 104;
    end
  end

endmodule


module bank_32_153(input [7:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 153;

  reg [31:0] data [152:0];

  reg [31:0] rdata_d;

  reg [7:0] waddr;

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


module bright_gauss_blur_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1
  logic [-1:0] bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1(.raddr(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_raddr), .wen(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_wen), .wdata(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_wdata), .clk(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_clk), .rst(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_rst), .rdata(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_rdata));
  assign bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_clk = clk;
  assign bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1

  // selector_bright_gauss_ds_2_rd0_select
  logic [0:0] selector_bright_gauss_ds_2_rd0_select_clk;
  logic [0:0] selector_bright_gauss_ds_2_rd0_select_rst;
  logic [31:0] selector_bright_gauss_ds_2_rd0_select_d0;
  logic [31:0] selector_bright_gauss_ds_2_rd0_select_d1;
  logic [31:0] selector_bright_gauss_ds_2_rd0_select_out;
  bright_gauss_ds_2_rd0_select selector_bright_gauss_ds_2_rd0_select(.clk(selector_bright_gauss_ds_2_rd0_select_clk), .rst(selector_bright_gauss_ds_2_rd0_select_rst), .d0(selector_bright_gauss_ds_2_rd0_select_d0), .d1(selector_bright_gauss_ds_2_rd0_select_d1), .out(selector_bright_gauss_ds_2_rd0_select_out));
  assign selector_bright_gauss_ds_2_rd0_select_clk = clk;
  assign selector_bright_gauss_ds_2_rd0_select_rst = rst;
  // Bindings to selector_bright_gauss_ds_2_rd0_select



endmodule


module bright_gauss_ds_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_gauss_blur_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_bright_gauss_ds_1_rd0_select
  logic [0:0] selector_bright_gauss_ds_1_rd0_select_clk;
  logic [0:0] selector_bright_gauss_ds_1_rd0_select_rst;
  logic [31:0] selector_bright_gauss_ds_1_rd0_select_d0;
  logic [31:0] selector_bright_gauss_ds_1_rd0_select_d1;
  logic [31:0] selector_bright_gauss_ds_1_rd0_select_out;
  bright_gauss_ds_1_rd0_select selector_bright_gauss_ds_1_rd0_select(.clk(selector_bright_gauss_ds_1_rd0_select_clk), .rst(selector_bright_gauss_ds_1_rd0_select_rst), .d0(selector_bright_gauss_ds_1_rd0_select_d0), .d1(selector_bright_gauss_ds_1_rd0_select_d1), .out(selector_bright_gauss_ds_1_rd0_select_out));
  assign selector_bright_gauss_ds_1_rd0_select_clk = clk;
  assign selector_bright_gauss_ds_1_rd0_select_rst = rst;
  // Bindings to selector_bright_gauss_ds_1_rd0_select

  // bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1
  logic [-1:0] bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1(.raddr(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_raddr), .wen(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_wen), .wdata(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_wdata), .clk(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_clk), .rst(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_rst), .rdata(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_rdata));
  assign bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_clk = clk;
  assign bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1



endmodule


module bright_gauss_blur_1_rd8_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_gauss_blur_3_rd6_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (47 - d0 >= 0) ? (102) : (-48 + d0 == 0) ? (102) : 0;
    end
  end

endmodule


module bright_gauss_blur_3_rd8_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_gauss_blur_3_rd7_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (47 - d0 >= 0) ? (51) : (-48 + d0 == 0) ? (51) : 0;
    end
  end

endmodule


module bright_gauss_ds_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_bright_gauss_blur_3_rd5_select
  logic [0:0] selector_bright_gauss_blur_3_rd5_select_clk;
  logic [0:0] selector_bright_gauss_blur_3_rd5_select_rst;
  logic [31:0] selector_bright_gauss_blur_3_rd5_select_d0;
  logic [31:0] selector_bright_gauss_blur_3_rd5_select_d1;
  logic [31:0] selector_bright_gauss_blur_3_rd5_select_out;
  bright_gauss_blur_3_rd5_select selector_bright_gauss_blur_3_rd5_select(.clk(selector_bright_gauss_blur_3_rd5_select_clk), .rst(selector_bright_gauss_blur_3_rd5_select_rst), .d0(selector_bright_gauss_blur_3_rd5_select_d0), .d1(selector_bright_gauss_blur_3_rd5_select_d1), .out(selector_bright_gauss_blur_3_rd5_select_out));
  assign selector_bright_gauss_blur_3_rd5_select_clk = clk;
  assign selector_bright_gauss_blur_3_rd5_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_3_rd5_select

  // selector_bright_gauss_blur_3_rd6_select
  logic [0:0] selector_bright_gauss_blur_3_rd6_select_clk;
  logic [0:0] selector_bright_gauss_blur_3_rd6_select_rst;
  logic [31:0] selector_bright_gauss_blur_3_rd6_select_d0;
  logic [31:0] selector_bright_gauss_blur_3_rd6_select_d1;
  logic [31:0] selector_bright_gauss_blur_3_rd6_select_out;
  bright_gauss_blur_3_rd6_select selector_bright_gauss_blur_3_rd6_select(.clk(selector_bright_gauss_blur_3_rd6_select_clk), .rst(selector_bright_gauss_blur_3_rd6_select_rst), .d0(selector_bright_gauss_blur_3_rd6_select_d0), .d1(selector_bright_gauss_blur_3_rd6_select_d1), .out(selector_bright_gauss_blur_3_rd6_select_out));
  assign selector_bright_gauss_blur_3_rd6_select_clk = clk;
  assign selector_bright_gauss_blur_3_rd6_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_3_rd6_select

  // selector_bright_gauss_blur_3_rd7_select
  logic [0:0] selector_bright_gauss_blur_3_rd7_select_clk;
  logic [0:0] selector_bright_gauss_blur_3_rd7_select_rst;
  logic [31:0] selector_bright_gauss_blur_3_rd7_select_d0;
  logic [31:0] selector_bright_gauss_blur_3_rd7_select_d1;
  logic [31:0] selector_bright_gauss_blur_3_rd7_select_out;
  bright_gauss_blur_3_rd7_select selector_bright_gauss_blur_3_rd7_select(.clk(selector_bright_gauss_blur_3_rd7_select_clk), .rst(selector_bright_gauss_blur_3_rd7_select_rst), .d0(selector_bright_gauss_blur_3_rd7_select_d0), .d1(selector_bright_gauss_blur_3_rd7_select_d1), .out(selector_bright_gauss_blur_3_rd7_select_out));
  assign selector_bright_gauss_blur_3_rd7_select_clk = clk;
  assign selector_bright_gauss_blur_3_rd7_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_3_rd7_select

  // selector_bright_gauss_blur_3_rd8_select
  logic [0:0] selector_bright_gauss_blur_3_rd8_select_clk;
  logic [0:0] selector_bright_gauss_blur_3_rd8_select_rst;
  logic [31:0] selector_bright_gauss_blur_3_rd8_select_d0;
  logic [31:0] selector_bright_gauss_blur_3_rd8_select_d1;
  logic [31:0] selector_bright_gauss_blur_3_rd8_select_out;
  bright_gauss_blur_3_rd8_select selector_bright_gauss_blur_3_rd8_select(.clk(selector_bright_gauss_blur_3_rd8_select_clk), .rst(selector_bright_gauss_blur_3_rd8_select_rst), .d0(selector_bright_gauss_blur_3_rd8_select_d0), .d1(selector_bright_gauss_blur_3_rd8_select_d1), .out(selector_bright_gauss_blur_3_rd8_select_out));
  assign selector_bright_gauss_blur_3_rd8_select_clk = clk;
  assign selector_bright_gauss_blur_3_rd8_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_3_rd8_select

  // selector_bright_laplace_us_1_rd0_select
  logic [0:0] selector_bright_laplace_us_1_rd0_select_clk;
  logic [0:0] selector_bright_laplace_us_1_rd0_select_rst;
  logic [31:0] selector_bright_laplace_us_1_rd0_select_d0;
  logic [31:0] selector_bright_laplace_us_1_rd0_select_d1;
  logic [31:0] selector_bright_laplace_us_1_rd0_select_out;
  bright_laplace_us_1_rd0_select selector_bright_laplace_us_1_rd0_select(.clk(selector_bright_laplace_us_1_rd0_select_clk), .rst(selector_bright_laplace_us_1_rd0_select_rst), .d0(selector_bright_laplace_us_1_rd0_select_d0), .d1(selector_bright_laplace_us_1_rd0_select_d1), .out(selector_bright_laplace_us_1_rd0_select_out));
  assign selector_bright_laplace_us_1_rd0_select_clk = clk;
  assign selector_bright_laplace_us_1_rd0_select_rst = rst;
  // Bindings to selector_bright_laplace_us_1_rd0_select

  // selector_bright_laplace_diff_2_rd0_select
  logic [0:0] selector_bright_laplace_diff_2_rd0_select_clk;
  logic [0:0] selector_bright_laplace_diff_2_rd0_select_rst;
  logic [31:0] selector_bright_laplace_diff_2_rd0_select_d0;
  logic [31:0] selector_bright_laplace_diff_2_rd0_select_d1;
  logic [31:0] selector_bright_laplace_diff_2_rd0_select_out;
  bright_laplace_diff_2_rd0_select selector_bright_laplace_diff_2_rd0_select(.clk(selector_bright_laplace_diff_2_rd0_select_clk), .rst(selector_bright_laplace_diff_2_rd0_select_rst), .d0(selector_bright_laplace_diff_2_rd0_select_d0), .d1(selector_bright_laplace_diff_2_rd0_select_d1), .out(selector_bright_laplace_diff_2_rd0_select_out));
  assign selector_bright_laplace_diff_2_rd0_select_clk = clk;
  assign selector_bright_laplace_diff_2_rd0_select_rst = rst;
  // Bindings to selector_bright_laplace_diff_2_rd0_select

  // bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9
  logic [6:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_raddr;
  logic [0:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_wen;
  logic [31:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_wdata;
  logic [0:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_clk;
  logic [0:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_rst;
  logic [31:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_rdata;
  bank_32_105 bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9(.raddr(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_raddr), .wen(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_wen), .wdata(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_wdata), .clk(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_clk), .rst(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_rst), .rdata(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_rdata));
  assign bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_clk = clk;
  assign bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_rst = rst;
  // Bindings to bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9

  // bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0
  logic [7:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_raddr;
  logic [0:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_wen;
  logic [31:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_wdata;
  logic [0:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_clk;
  logic [0:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_rst;
  logic [31:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_rdata;
  bank_32_153 bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0(.raddr(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_raddr), .wen(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_wen), .wdata(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_wdata), .clk(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_clk), .rst(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_rst), .rdata(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_rdata));
  assign bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_clk = clk;
  assign bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_rst = rst;
  // Bindings to bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0

  // selector_bright_gauss_blur_3_rd1_select
  logic [0:0] selector_bright_gauss_blur_3_rd1_select_clk;
  logic [0:0] selector_bright_gauss_blur_3_rd1_select_rst;
  logic [31:0] selector_bright_gauss_blur_3_rd1_select_d0;
  logic [31:0] selector_bright_gauss_blur_3_rd1_select_d1;
  logic [31:0] selector_bright_gauss_blur_3_rd1_select_out;
  bright_gauss_blur_3_rd1_select selector_bright_gauss_blur_3_rd1_select(.clk(selector_bright_gauss_blur_3_rd1_select_clk), .rst(selector_bright_gauss_blur_3_rd1_select_rst), .d0(selector_bright_gauss_blur_3_rd1_select_d0), .d1(selector_bright_gauss_blur_3_rd1_select_d1), .out(selector_bright_gauss_blur_3_rd1_select_out));
  assign selector_bright_gauss_blur_3_rd1_select_clk = clk;
  assign selector_bright_gauss_blur_3_rd1_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_3_rd1_select

  // selector_bright_gauss_blur_3_rd0_select
  logic [0:0] selector_bright_gauss_blur_3_rd0_select_clk;
  logic [0:0] selector_bright_gauss_blur_3_rd0_select_rst;
  logic [31:0] selector_bright_gauss_blur_3_rd0_select_d0;
  logic [31:0] selector_bright_gauss_blur_3_rd0_select_d1;
  logic [31:0] selector_bright_gauss_blur_3_rd0_select_out;
  bright_gauss_blur_3_rd0_select selector_bright_gauss_blur_3_rd0_select(.clk(selector_bright_gauss_blur_3_rd0_select_clk), .rst(selector_bright_gauss_blur_3_rd0_select_rst), .d0(selector_bright_gauss_blur_3_rd0_select_d0), .d1(selector_bright_gauss_blur_3_rd0_select_d1), .out(selector_bright_gauss_blur_3_rd0_select_out));
  assign selector_bright_gauss_blur_3_rd0_select_clk = clk;
  assign selector_bright_gauss_blur_3_rd0_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_3_rd0_select

  // selector_bright_gauss_blur_3_rd3_select
  logic [0:0] selector_bright_gauss_blur_3_rd3_select_clk;
  logic [0:0] selector_bright_gauss_blur_3_rd3_select_rst;
  logic [31:0] selector_bright_gauss_blur_3_rd3_select_d0;
  logic [31:0] selector_bright_gauss_blur_3_rd3_select_d1;
  logic [31:0] selector_bright_gauss_blur_3_rd3_select_out;
  bright_gauss_blur_3_rd3_select selector_bright_gauss_blur_3_rd3_select(.clk(selector_bright_gauss_blur_3_rd3_select_clk), .rst(selector_bright_gauss_blur_3_rd3_select_rst), .d0(selector_bright_gauss_blur_3_rd3_select_d0), .d1(selector_bright_gauss_blur_3_rd3_select_d1), .out(selector_bright_gauss_blur_3_rd3_select_out));
  assign selector_bright_gauss_blur_3_rd3_select_clk = clk;
  assign selector_bright_gauss_blur_3_rd3_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_3_rd3_select

  // selector_bright_gauss_blur_3_rd4_select
  logic [0:0] selector_bright_gauss_blur_3_rd4_select_clk;
  logic [0:0] selector_bright_gauss_blur_3_rd4_select_rst;
  logic [31:0] selector_bright_gauss_blur_3_rd4_select_d0;
  logic [31:0] selector_bright_gauss_blur_3_rd4_select_d1;
  logic [31:0] selector_bright_gauss_blur_3_rd4_select_out;
  bright_gauss_blur_3_rd4_select selector_bright_gauss_blur_3_rd4_select(.clk(selector_bright_gauss_blur_3_rd4_select_clk), .rst(selector_bright_gauss_blur_3_rd4_select_rst), .d0(selector_bright_gauss_blur_3_rd4_select_d0), .d1(selector_bright_gauss_blur_3_rd4_select_d1), .out(selector_bright_gauss_blur_3_rd4_select_out));
  assign selector_bright_gauss_blur_3_rd4_select_clk = clk;
  assign selector_bright_gauss_blur_3_rd4_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_3_rd4_select

  // bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0
  logic [6:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_raddr;
  logic [0:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_wen;
  logic [31:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_wdata;
  logic [0:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_clk;
  logic [0:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_rst;
  logic [31:0] bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_rdata;
  bank_32_105 bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0(.raddr(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_raddr), .wen(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_wen), .wdata(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_wdata), .clk(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_clk), .rst(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_rst), .rdata(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_rdata));
  assign bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_clk = clk;
  assign bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_rst = rst;
  // Bindings to bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0

  // selector_bright_gauss_blur_3_rd2_select
  logic [0:0] selector_bright_gauss_blur_3_rd2_select_clk;
  logic [0:0] selector_bright_gauss_blur_3_rd2_select_rst;
  logic [31:0] selector_bright_gauss_blur_3_rd2_select_d0;
  logic [31:0] selector_bright_gauss_blur_3_rd2_select_d1;
  logic [31:0] selector_bright_gauss_blur_3_rd2_select_out;
  bright_gauss_blur_3_rd2_select selector_bright_gauss_blur_3_rd2_select(.clk(selector_bright_gauss_blur_3_rd2_select_clk), .rst(selector_bright_gauss_blur_3_rd2_select_rst), .d0(selector_bright_gauss_blur_3_rd2_select_d0), .d1(selector_bright_gauss_blur_3_rd2_select_d1), .out(selector_bright_gauss_blur_3_rd2_select_out));
  assign selector_bright_gauss_blur_3_rd2_select_clk = clk;
  assign selector_bright_gauss_blur_3_rd2_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_3_rd2_select



endmodule


module bright_laplace_diff_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_fused_level_0_rd0_select
  logic [0:0] selector_fused_level_0_rd0_select_clk;
  logic [0:0] selector_fused_level_0_rd0_select_rst;
  logic [31:0] selector_fused_level_0_rd0_select_d0;
  logic [31:0] selector_fused_level_0_rd0_select_d1;
  logic [31:0] selector_fused_level_0_rd0_select_out;
  fused_level_0_rd0_select selector_fused_level_0_rd0_select(.clk(selector_fused_level_0_rd0_select_clk), .rst(selector_fused_level_0_rd0_select_rst), .d0(selector_fused_level_0_rd0_select_d0), .d1(selector_fused_level_0_rd0_select_d1), .out(selector_fused_level_0_rd0_select_out));
  assign selector_fused_level_0_rd0_select_clk = clk;
  assign selector_fused_level_0_rd0_select_rst = rst;
  // Bindings to selector_fused_level_0_rd0_select

  // bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1
  logic [-1:0] bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1(.raddr(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_raddr), .wen(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_wen), .wdata(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_wdata), .clk(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_clk), .rst(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_rst), .rdata(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_rdata));
  assign bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_clk = clk;
  assign bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1



endmodule


module bright_gauss_blur_3(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1
  logic [-1:0] bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1(.raddr(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_raddr), .wen(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_wen), .wdata(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_wdata), .clk(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_clk), .rst(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_rst), .rdata(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_rdata));
  assign bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_clk = clk;
  assign bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1

  // selector_bright_gauss_ds_3_rd0_select
  logic [0:0] selector_bright_gauss_ds_3_rd0_select_clk;
  logic [0:0] selector_bright_gauss_ds_3_rd0_select_rst;
  logic [31:0] selector_bright_gauss_ds_3_rd0_select_d0;
  logic [31:0] selector_bright_gauss_ds_3_rd0_select_d1;
  logic [31:0] selector_bright_gauss_ds_3_rd0_select_out;
  bright_gauss_ds_3_rd0_select selector_bright_gauss_ds_3_rd0_select(.clk(selector_bright_gauss_ds_3_rd0_select_clk), .rst(selector_bright_gauss_ds_3_rd0_select_rst), .d0(selector_bright_gauss_ds_3_rd0_select_d0), .d1(selector_bright_gauss_ds_3_rd0_select_d1), .out(selector_bright_gauss_ds_3_rd0_select_out));
  assign selector_bright_gauss_ds_3_rd0_select_clk = clk;
  assign selector_bright_gauss_ds_3_rd0_select_rst = rst;
  // Bindings to selector_bright_gauss_ds_3_rd0_select



endmodule


module bright_gauss_ds_3_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_gauss_ds_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9
  logic [7:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_raddr;
  logic [0:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_wen;
  logic [31:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_wdata;
  logic [0:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_clk;
  logic [0:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_rst;
  logic [31:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_rdata;
  bank_32_209 bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9(.raddr(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_raddr), .wen(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_wen), .wdata(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_wdata), .clk(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_clk), .rst(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_rst), .rdata(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_rdata));
  assign bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_clk = clk;
  assign bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_rst = rst;
  // Bindings to bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9

  // selector_bright_gauss_blur_2_rd2_select
  logic [0:0] selector_bright_gauss_blur_2_rd2_select_clk;
  logic [0:0] selector_bright_gauss_blur_2_rd2_select_rst;
  logic [31:0] selector_bright_gauss_blur_2_rd2_select_d0;
  logic [31:0] selector_bright_gauss_blur_2_rd2_select_d1;
  logic [31:0] selector_bright_gauss_blur_2_rd2_select_out;
  bright_gauss_blur_2_rd2_select selector_bright_gauss_blur_2_rd2_select(.clk(selector_bright_gauss_blur_2_rd2_select_clk), .rst(selector_bright_gauss_blur_2_rd2_select_rst), .d0(selector_bright_gauss_blur_2_rd2_select_d0), .d1(selector_bright_gauss_blur_2_rd2_select_d1), .out(selector_bright_gauss_blur_2_rd2_select_out));
  assign selector_bright_gauss_blur_2_rd2_select_clk = clk;
  assign selector_bright_gauss_blur_2_rd2_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_2_rd2_select

  // selector_bright_gauss_blur_2_rd3_select
  logic [0:0] selector_bright_gauss_blur_2_rd3_select_clk;
  logic [0:0] selector_bright_gauss_blur_2_rd3_select_rst;
  logic [31:0] selector_bright_gauss_blur_2_rd3_select_d0;
  logic [31:0] selector_bright_gauss_blur_2_rd3_select_d1;
  logic [31:0] selector_bright_gauss_blur_2_rd3_select_out;
  bright_gauss_blur_2_rd3_select selector_bright_gauss_blur_2_rd3_select(.clk(selector_bright_gauss_blur_2_rd3_select_clk), .rst(selector_bright_gauss_blur_2_rd3_select_rst), .d0(selector_bright_gauss_blur_2_rd3_select_d0), .d1(selector_bright_gauss_blur_2_rd3_select_d1), .out(selector_bright_gauss_blur_2_rd3_select_out));
  assign selector_bright_gauss_blur_2_rd3_select_clk = clk;
  assign selector_bright_gauss_blur_2_rd3_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_2_rd3_select

  // selector_bright_gauss_blur_2_rd4_select
  logic [0:0] selector_bright_gauss_blur_2_rd4_select_clk;
  logic [0:0] selector_bright_gauss_blur_2_rd4_select_rst;
  logic [31:0] selector_bright_gauss_blur_2_rd4_select_d0;
  logic [31:0] selector_bright_gauss_blur_2_rd4_select_d1;
  logic [31:0] selector_bright_gauss_blur_2_rd4_select_out;
  bright_gauss_blur_2_rd4_select selector_bright_gauss_blur_2_rd4_select(.clk(selector_bright_gauss_blur_2_rd4_select_clk), .rst(selector_bright_gauss_blur_2_rd4_select_rst), .d0(selector_bright_gauss_blur_2_rd4_select_d0), .d1(selector_bright_gauss_blur_2_rd4_select_d1), .out(selector_bright_gauss_blur_2_rd4_select_out));
  assign selector_bright_gauss_blur_2_rd4_select_clk = clk;
  assign selector_bright_gauss_blur_2_rd4_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_2_rd4_select

  // selector_bright_gauss_blur_2_rd7_select
  logic [0:0] selector_bright_gauss_blur_2_rd7_select_clk;
  logic [0:0] selector_bright_gauss_blur_2_rd7_select_rst;
  logic [31:0] selector_bright_gauss_blur_2_rd7_select_d0;
  logic [31:0] selector_bright_gauss_blur_2_rd7_select_d1;
  logic [31:0] selector_bright_gauss_blur_2_rd7_select_out;
  bright_gauss_blur_2_rd7_select selector_bright_gauss_blur_2_rd7_select(.clk(selector_bright_gauss_blur_2_rd7_select_clk), .rst(selector_bright_gauss_blur_2_rd7_select_rst), .d0(selector_bright_gauss_blur_2_rd7_select_d0), .d1(selector_bright_gauss_blur_2_rd7_select_d1), .out(selector_bright_gauss_blur_2_rd7_select_out));
  assign selector_bright_gauss_blur_2_rd7_select_clk = clk;
  assign selector_bright_gauss_blur_2_rd7_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_2_rd7_select

  // selector_bright_gauss_blur_2_rd1_select
  logic [0:0] selector_bright_gauss_blur_2_rd1_select_clk;
  logic [0:0] selector_bright_gauss_blur_2_rd1_select_rst;
  logic [31:0] selector_bright_gauss_blur_2_rd1_select_d0;
  logic [31:0] selector_bright_gauss_blur_2_rd1_select_d1;
  logic [31:0] selector_bright_gauss_blur_2_rd1_select_out;
  bright_gauss_blur_2_rd1_select selector_bright_gauss_blur_2_rd1_select(.clk(selector_bright_gauss_blur_2_rd1_select_clk), .rst(selector_bright_gauss_blur_2_rd1_select_rst), .d0(selector_bright_gauss_blur_2_rd1_select_d0), .d1(selector_bright_gauss_blur_2_rd1_select_d1), .out(selector_bright_gauss_blur_2_rd1_select_out));
  assign selector_bright_gauss_blur_2_rd1_select_clk = clk;
  assign selector_bright_gauss_blur_2_rd1_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_2_rd1_select

  // selector_bright_gauss_blur_2_rd5_select
  logic [0:0] selector_bright_gauss_blur_2_rd5_select_clk;
  logic [0:0] selector_bright_gauss_blur_2_rd5_select_rst;
  logic [31:0] selector_bright_gauss_blur_2_rd5_select_d0;
  logic [31:0] selector_bright_gauss_blur_2_rd5_select_d1;
  logic [31:0] selector_bright_gauss_blur_2_rd5_select_out;
  bright_gauss_blur_2_rd5_select selector_bright_gauss_blur_2_rd5_select(.clk(selector_bright_gauss_blur_2_rd5_select_clk), .rst(selector_bright_gauss_blur_2_rd5_select_rst), .d0(selector_bright_gauss_blur_2_rd5_select_d0), .d1(selector_bright_gauss_blur_2_rd5_select_d1), .out(selector_bright_gauss_blur_2_rd5_select_out));
  assign selector_bright_gauss_blur_2_rd5_select_clk = clk;
  assign selector_bright_gauss_blur_2_rd5_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_2_rd5_select

  // selector_bright_gauss_blur_2_rd6_select
  logic [0:0] selector_bright_gauss_blur_2_rd6_select_clk;
  logic [0:0] selector_bright_gauss_blur_2_rd6_select_rst;
  logic [31:0] selector_bright_gauss_blur_2_rd6_select_d0;
  logic [31:0] selector_bright_gauss_blur_2_rd6_select_d1;
  logic [31:0] selector_bright_gauss_blur_2_rd6_select_out;
  bright_gauss_blur_2_rd6_select selector_bright_gauss_blur_2_rd6_select(.clk(selector_bright_gauss_blur_2_rd6_select_clk), .rst(selector_bright_gauss_blur_2_rd6_select_rst), .d0(selector_bright_gauss_blur_2_rd6_select_d0), .d1(selector_bright_gauss_blur_2_rd6_select_d1), .out(selector_bright_gauss_blur_2_rd6_select_out));
  assign selector_bright_gauss_blur_2_rd6_select_clk = clk;
  assign selector_bright_gauss_blur_2_rd6_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_2_rd6_select

  // selector_bright_gauss_blur_2_rd8_select
  logic [0:0] selector_bright_gauss_blur_2_rd8_select_clk;
  logic [0:0] selector_bright_gauss_blur_2_rd8_select_rst;
  logic [31:0] selector_bright_gauss_blur_2_rd8_select_d0;
  logic [31:0] selector_bright_gauss_blur_2_rd8_select_d1;
  logic [31:0] selector_bright_gauss_blur_2_rd8_select_out;
  bright_gauss_blur_2_rd8_select selector_bright_gauss_blur_2_rd8_select(.clk(selector_bright_gauss_blur_2_rd8_select_clk), .rst(selector_bright_gauss_blur_2_rd8_select_rst), .d0(selector_bright_gauss_blur_2_rd8_select_d0), .d1(selector_bright_gauss_blur_2_rd8_select_d1), .out(selector_bright_gauss_blur_2_rd8_select_out));
  assign selector_bright_gauss_blur_2_rd8_select_clk = clk;
  assign selector_bright_gauss_blur_2_rd8_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_2_rd8_select

  // selector_bright_laplace_us_0_rd0_select
  logic [0:0] selector_bright_laplace_us_0_rd0_select_clk;
  logic [0:0] selector_bright_laplace_us_0_rd0_select_rst;
  logic [31:0] selector_bright_laplace_us_0_rd0_select_d0;
  logic [31:0] selector_bright_laplace_us_0_rd0_select_d1;
  logic [31:0] selector_bright_laplace_us_0_rd0_select_out;
  bright_laplace_us_0_rd0_select selector_bright_laplace_us_0_rd0_select(.clk(selector_bright_laplace_us_0_rd0_select_clk), .rst(selector_bright_laplace_us_0_rd0_select_rst), .d0(selector_bright_laplace_us_0_rd0_select_d0), .d1(selector_bright_laplace_us_0_rd0_select_d1), .out(selector_bright_laplace_us_0_rd0_select_out));
  assign selector_bright_laplace_us_0_rd0_select_clk = clk;
  assign selector_bright_laplace_us_0_rd0_select_rst = rst;
  // Bindings to selector_bright_laplace_us_0_rd0_select

  // selector_bright_laplace_diff_1_rd0_select
  logic [0:0] selector_bright_laplace_diff_1_rd0_select_clk;
  logic [0:0] selector_bright_laplace_diff_1_rd0_select_rst;
  logic [31:0] selector_bright_laplace_diff_1_rd0_select_d0;
  logic [31:0] selector_bright_laplace_diff_1_rd0_select_d1;
  logic [31:0] selector_bright_laplace_diff_1_rd0_select_out;
  bright_laplace_diff_1_rd0_select selector_bright_laplace_diff_1_rd0_select(.clk(selector_bright_laplace_diff_1_rd0_select_clk), .rst(selector_bright_laplace_diff_1_rd0_select_rst), .d0(selector_bright_laplace_diff_1_rd0_select_d0), .d1(selector_bright_laplace_diff_1_rd0_select_d1), .out(selector_bright_laplace_diff_1_rd0_select_out));
  assign selector_bright_laplace_diff_1_rd0_select_clk = clk;
  assign selector_bright_laplace_diff_1_rd0_select_rst = rst;
  // Bindings to selector_bright_laplace_diff_1_rd0_select

  // bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0
  logic [9:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_raddr;
  logic [0:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_wen;
  logic [31:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_wdata;
  logic [0:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_clk;
  logic [0:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_rst;
  logic [31:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_rdata;
  bank_32_721 bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0(.raddr(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_raddr), .wen(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_wen), .wdata(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_wdata), .clk(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_clk), .rst(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_rst), .rdata(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_rdata));
  assign bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_clk = clk;
  assign bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_rst = rst;
  // Bindings to bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0

  // bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0
  logic [9:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_raddr;
  logic [0:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_wen;
  logic [31:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_wdata;
  logic [0:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_clk;
  logic [0:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_rst;
  logic [31:0] bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_rdata;
  bank_32_625 bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0(.raddr(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_raddr), .wen(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_wen), .wdata(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_wdata), .clk(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_clk), .rst(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_rst), .rdata(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_rdata));
  assign bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_clk = clk;
  assign bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_rst = rst;
  // Bindings to bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0

  // selector_bright_gauss_blur_2_rd0_select
  logic [0:0] selector_bright_gauss_blur_2_rd0_select_clk;
  logic [0:0] selector_bright_gauss_blur_2_rd0_select_rst;
  logic [31:0] selector_bright_gauss_blur_2_rd0_select_d0;
  logic [31:0] selector_bright_gauss_blur_2_rd0_select_d1;
  logic [31:0] selector_bright_gauss_blur_2_rd0_select_out;
  bright_gauss_blur_2_rd0_select selector_bright_gauss_blur_2_rd0_select(.clk(selector_bright_gauss_blur_2_rd0_select_clk), .rst(selector_bright_gauss_blur_2_rd0_select_rst), .d0(selector_bright_gauss_blur_2_rd0_select_d0), .d1(selector_bright_gauss_blur_2_rd0_select_d1), .out(selector_bright_gauss_blur_2_rd0_select_out));
  assign selector_bright_gauss_blur_2_rd0_select_clk = clk;
  assign selector_bright_gauss_blur_2_rd0_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_2_rd0_select



endmodule


module bank_32_2913(input [11:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 2913;

  reg [31:0] data [2912:0];

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


module bright_laplace_diff_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1
  logic [-1:0] bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1(.raddr(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_raddr), .wen(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_wen), .wdata(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_wdata), .clk(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_clk), .rst(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_rst), .rdata(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_rdata));
  assign bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_clk = clk;
  assign bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1

  // selector_fused_level_2_rd0_select
  logic [0:0] selector_fused_level_2_rd0_select_clk;
  logic [0:0] selector_fused_level_2_rd0_select_rst;
  logic [31:0] selector_fused_level_2_rd0_select_d0;
  logic [31:0] selector_fused_level_2_rd0_select_d1;
  logic [31:0] selector_fused_level_2_rd0_select_out;
  fused_level_2_rd0_select selector_fused_level_2_rd0_select(.clk(selector_fused_level_2_rd0_select_clk), .rst(selector_fused_level_2_rd0_select_rst), .d0(selector_fused_level_2_rd0_select_d0), .d1(selector_fused_level_2_rd0_select_d1), .out(selector_fused_level_2_rd0_select_out));
  assign selector_fused_level_2_rd0_select_clk = clk;
  assign selector_fused_level_2_rd0_select_rst = rst;
  // Bindings to selector_fused_level_2_rd0_select



endmodule


module bright_laplace_us_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_bright_laplace_diff_0_rd0_select
  logic [0:0] selector_bright_laplace_diff_0_rd0_select_clk;
  logic [0:0] selector_bright_laplace_diff_0_rd0_select_rst;
  logic [31:0] selector_bright_laplace_diff_0_rd0_select_d0;
  logic [31:0] selector_bright_laplace_diff_0_rd0_select_d1;
  logic [31:0] selector_bright_laplace_diff_0_rd0_select_out;
  bright_laplace_diff_0_rd0_select selector_bright_laplace_diff_0_rd0_select(.clk(selector_bright_laplace_diff_0_rd0_select_clk), .rst(selector_bright_laplace_diff_0_rd0_select_rst), .d0(selector_bright_laplace_diff_0_rd0_select_d0), .d1(selector_bright_laplace_diff_0_rd0_select_d1), .out(selector_bright_laplace_diff_0_rd0_select_out));
  assign selector_bright_laplace_diff_0_rd0_select_clk = clk;
  assign selector_bright_laplace_diff_0_rd0_select_rst = rst;
  // Bindings to selector_bright_laplace_diff_0_rd0_select

  // bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1
  logic [-1:0] bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1(.raddr(bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_raddr), .wen(bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_wen), .wdata(bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_wdata), .clk(bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_clk), .rst(bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_rst), .rdata(bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_rdata));
  assign bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_clk = clk;
  assign bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1



endmodule


module bright_gauss_blur_1_rd5_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module bright_gauss_blur_1_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 208;
    end
  end

endmodule


module bright_laplace_us_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (d1 == 0 && -98 + d0 >= 0) ? (103) : (-98 + d1 >= 0) ? ((101 - floord(d0, 2))) : (-1 + d1 == 0) ? ((152 - floord(d0, 2))) : (d1 == 0 && 97 - d0 >= 0) ? (104) : ((-d1) % 2 == 0 && -98 + d0 >= 0 && -2 + d1 >= 0 && 96 - d1 >= 0) ? (103) : ((-1 - d1) % 2 == 0 && -3 + d1 >= 0 && 97 - d1 >= 0) ? ((152 - floord(d0, 2))) : ((-d1) % 2 == 0 && 97 - d0 >= 0 && -2 + d1 >= 0 && 96 - d1 >= 0) ? (104) : 0;
    end
  end

endmodule


module bright_gauss_blur_3_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 52;
    end
  end

endmodule


module bright_gauss_blur_3_rd5_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module bright_gauss_blur_1_rd7_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (203 - d0 >= 0) ? (207) : (-204 + d0 == 0) ? (207) : 0;
    end
  end

endmodule


module bright_weights_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_gauss_blur_1_rd6_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (203 - d0 >= 0) ? (414) : (-204 + d0 == 0) ? (414) : 0;
    end
  end

endmodule


module bright_gauss_blur_1_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 2;
    end
  end

endmodule


module bright_gauss_blur_3_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 53;
    end
  end

endmodule


module bright_gauss_blur_3_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 2;
    end
  end

endmodule


module bright_gauss_blur_3_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 103;
    end
  end

endmodule


module bright_gauss_blur_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 416;
    end
  end

endmodule


module bright_laplace_us_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1
  logic [-1:0] bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1(.raddr(bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_raddr), .wen(bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_wen), .wdata(bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_wdata), .clk(bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_clk), .rst(bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_rst), .rdata(bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_rdata));
  assign bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_clk = clk;
  assign bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1

  // selector_bright_laplace_diff_2_rd0_select
  logic [0:0] selector_bright_laplace_diff_2_rd0_select_clk;
  logic [0:0] selector_bright_laplace_diff_2_rd0_select_rst;
  logic [31:0] selector_bright_laplace_diff_2_rd0_select_d0;
  logic [31:0] selector_bright_laplace_diff_2_rd0_select_d1;
  logic [31:0] selector_bright_laplace_diff_2_rd0_select_out;
  bright_laplace_diff_2_rd0_select selector_bright_laplace_diff_2_rd0_select(.clk(selector_bright_laplace_diff_2_rd0_select_clk), .rst(selector_bright_laplace_diff_2_rd0_select_rst), .d0(selector_bright_laplace_diff_2_rd0_select_d0), .d1(selector_bright_laplace_diff_2_rd0_select_d1), .out(selector_bright_laplace_diff_2_rd0_select_out));
  assign selector_bright_laplace_diff_2_rd0_select_clk = clk;
  assign selector_bright_laplace_diff_2_rd0_select_rst = rst;
  // Bindings to selector_bright_laplace_diff_2_rd0_select



endmodule


module bright_weights(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // bright_weights_bright_weights_update_0_write0_merged_banks_2
  logic [-1:0] bright_weights_bright_weights_update_0_write0_merged_banks_2_raddr;
  logic [0:0] bright_weights_bright_weights_update_0_write0_merged_banks_2_wen;
  logic [31:0] bright_weights_bright_weights_update_0_write0_merged_banks_2_wdata;
  logic [0:0] bright_weights_bright_weights_update_0_write0_merged_banks_2_clk;
  logic [0:0] bright_weights_bright_weights_update_0_write0_merged_banks_2_rst;
  logic [31:0] bright_weights_bright_weights_update_0_write0_merged_banks_2_rdata;
  bank_32_1 bright_weights_bright_weights_update_0_write0_merged_banks_2(.raddr(bright_weights_bright_weights_update_0_write0_merged_banks_2_raddr), .wen(bright_weights_bright_weights_update_0_write0_merged_banks_2_wen), .wdata(bright_weights_bright_weights_update_0_write0_merged_banks_2_wdata), .clk(bright_weights_bright_weights_update_0_write0_merged_banks_2_clk), .rst(bright_weights_bright_weights_update_0_write0_merged_banks_2_rst), .rdata(bright_weights_bright_weights_update_0_write0_merged_banks_2_rdata));
  assign bright_weights_bright_weights_update_0_write0_merged_banks_2_clk = clk;
  assign bright_weights_bright_weights_update_0_write0_merged_banks_2_rst = rst;
  // Bindings to bright_weights_bright_weights_update_0_write0_merged_banks_2

  // selector_weight_sums_rd0_select
  logic [0:0] selector_weight_sums_rd0_select_clk;
  logic [0:0] selector_weight_sums_rd0_select_rst;
  logic [31:0] selector_weight_sums_rd0_select_d0;
  logic [31:0] selector_weight_sums_rd0_select_d1;
  logic [31:0] selector_weight_sums_rd0_select_out;
  weight_sums_rd0_select selector_weight_sums_rd0_select(.clk(selector_weight_sums_rd0_select_clk), .rst(selector_weight_sums_rd0_select_rst), .d0(selector_weight_sums_rd0_select_d0), .d1(selector_weight_sums_rd0_select_d1), .out(selector_weight_sums_rd0_select_out));
  assign selector_weight_sums_rd0_select_clk = clk;
  assign selector_weight_sums_rd0_select_rst = rst;
  // Bindings to selector_weight_sums_rd0_select

  // selector_bright_weights_normed_rd0_select
  logic [0:0] selector_bright_weights_normed_rd0_select_clk;
  logic [0:0] selector_bright_weights_normed_rd0_select_rst;
  logic [31:0] selector_bright_weights_normed_rd0_select_d0;
  logic [31:0] selector_bright_weights_normed_rd0_select_d1;
  logic [31:0] selector_bright_weights_normed_rd0_select_out;
  bright_weights_normed_rd0_select selector_bright_weights_normed_rd0_select(.clk(selector_bright_weights_normed_rd0_select_clk), .rst(selector_bright_weights_normed_rd0_select_rst), .d0(selector_bright_weights_normed_rd0_select_d0), .d1(selector_bright_weights_normed_rd0_select_d1), .out(selector_bright_weights_normed_rd0_select_out));
  assign selector_bright_weights_normed_rd0_select_clk = clk;
  assign selector_bright_weights_normed_rd0_select_rst = rst;
  // Bindings to selector_bright_weights_normed_rd0_select



endmodule


module bright_laplace_diff_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_1_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 2;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 416;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_1_rd6_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (203 - d0 >= 0) ? (414) : (-204 + d0 == 0) ? (414) : 0;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_1_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 209;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_1_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 415;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_1_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 208;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_1_rd5_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_1_rd8_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_bright_weights_normed_gauss_ds_1_rd0_select
  logic [0:0] selector_bright_weights_normed_gauss_ds_1_rd0_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_ds_1_rd0_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_ds_1_rd0_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_ds_1_rd0_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_ds_1_rd0_select_out;
  bright_weights_normed_gauss_ds_1_rd0_select selector_bright_weights_normed_gauss_ds_1_rd0_select(.clk(selector_bright_weights_normed_gauss_ds_1_rd0_select_clk), .rst(selector_bright_weights_normed_gauss_ds_1_rd0_select_rst), .d0(selector_bright_weights_normed_gauss_ds_1_rd0_select_d0), .d1(selector_bright_weights_normed_gauss_ds_1_rd0_select_d1), .out(selector_bright_weights_normed_gauss_ds_1_rd0_select_out));
  assign selector_bright_weights_normed_gauss_ds_1_rd0_select_clk = clk;
  assign selector_bright_weights_normed_gauss_ds_1_rd0_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_ds_1_rd0_select

  // bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1
  logic [-1:0] bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1(.raddr(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_raddr), .wen(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_wen), .wdata(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_wdata), .clk(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_clk), .rst(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_rst), .rdata(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_rdata));
  assign bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_clk = clk;
  assign bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1



endmodule


module bright_weights_normed_gauss_blur_1_rd7_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (203 - d0 >= 0) ? (207) : (-204 + d0 == 0) ? (207) : 0;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1
  logic [-1:0] bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1(.raddr(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_raddr), .wen(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_wen), .wdata(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_wdata), .clk(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_clk), .rst(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_rst), .rdata(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_rdata));
  assign bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_clk = clk;
  assign bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1

  // selector_bright_weights_normed_gauss_ds_2_rd0_select
  logic [0:0] selector_bright_weights_normed_gauss_ds_2_rd0_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_ds_2_rd0_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_ds_2_rd0_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_ds_2_rd0_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_ds_2_rd0_select_out;
  bright_weights_normed_gauss_ds_2_rd0_select selector_bright_weights_normed_gauss_ds_2_rd0_select(.clk(selector_bright_weights_normed_gauss_ds_2_rd0_select_clk), .rst(selector_bright_weights_normed_gauss_ds_2_rd0_select_rst), .d0(selector_bright_weights_normed_gauss_ds_2_rd0_select_d0), .d1(selector_bright_weights_normed_gauss_ds_2_rd0_select_d1), .out(selector_bright_weights_normed_gauss_ds_2_rd0_select_out));
  assign selector_bright_weights_normed_gauss_ds_2_rd0_select_clk = clk;
  assign selector_bright_weights_normed_gauss_ds_2_rd0_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_ds_2_rd0_select



endmodule


module bright_weights_normed_gauss_ds_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_weights_normed_gauss_ds_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_bright_weights_normed_gauss_blur_2_rd3_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd3_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd3_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd3_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd3_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd3_select_out;
  bright_weights_normed_gauss_blur_2_rd3_select selector_bright_weights_normed_gauss_blur_2_rd3_select(.clk(selector_bright_weights_normed_gauss_blur_2_rd3_select_clk), .rst(selector_bright_weights_normed_gauss_blur_2_rd3_select_rst), .d0(selector_bright_weights_normed_gauss_blur_2_rd3_select_d0), .d1(selector_bright_weights_normed_gauss_blur_2_rd3_select_d1), .out(selector_bright_weights_normed_gauss_blur_2_rd3_select_out));
  assign selector_bright_weights_normed_gauss_blur_2_rd3_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_2_rd3_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_2_rd3_select

  // selector_fused_level_1_rd0_select
  logic [0:0] selector_fused_level_1_rd0_select_clk;
  logic [0:0] selector_fused_level_1_rd0_select_rst;
  logic [31:0] selector_fused_level_1_rd0_select_d0;
  logic [31:0] selector_fused_level_1_rd0_select_d1;
  logic [31:0] selector_fused_level_1_rd0_select_out;
  fused_level_1_rd0_select selector_fused_level_1_rd0_select(.clk(selector_fused_level_1_rd0_select_clk), .rst(selector_fused_level_1_rd0_select_rst), .d0(selector_fused_level_1_rd0_select_d0), .d1(selector_fused_level_1_rd0_select_d1), .out(selector_fused_level_1_rd0_select_out));
  assign selector_fused_level_1_rd0_select_clk = clk;
  assign selector_fused_level_1_rd0_select_rst = rst;
  // Bindings to selector_fused_level_1_rd0_select

  // selector_bright_weights_normed_gauss_blur_2_rd4_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd4_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd4_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd4_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd4_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd4_select_out;
  bright_weights_normed_gauss_blur_2_rd4_select selector_bright_weights_normed_gauss_blur_2_rd4_select(.clk(selector_bright_weights_normed_gauss_blur_2_rd4_select_clk), .rst(selector_bright_weights_normed_gauss_blur_2_rd4_select_rst), .d0(selector_bright_weights_normed_gauss_blur_2_rd4_select_d0), .d1(selector_bright_weights_normed_gauss_blur_2_rd4_select_d1), .out(selector_bright_weights_normed_gauss_blur_2_rd4_select_out));
  assign selector_bright_weights_normed_gauss_blur_2_rd4_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_2_rd4_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_2_rd4_select

  // selector_bright_weights_normed_gauss_blur_2_rd6_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd6_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd6_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd6_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd6_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd6_select_out;
  bright_weights_normed_gauss_blur_2_rd6_select selector_bright_weights_normed_gauss_blur_2_rd6_select(.clk(selector_bright_weights_normed_gauss_blur_2_rd6_select_clk), .rst(selector_bright_weights_normed_gauss_blur_2_rd6_select_rst), .d0(selector_bright_weights_normed_gauss_blur_2_rd6_select_d0), .d1(selector_bright_weights_normed_gauss_blur_2_rd6_select_d1), .out(selector_bright_weights_normed_gauss_blur_2_rd6_select_out));
  assign selector_bright_weights_normed_gauss_blur_2_rd6_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_2_rd6_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_2_rd6_select

  // bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0
  logic [9:0] bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_raddr;
  logic [0:0] bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_wen;
  logic [31:0] bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_wdata;
  logic [0:0] bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_clk;
  logic [0:0] bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_rst;
  logic [31:0] bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_rdata;
  bank_32_625 bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0(.raddr(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_raddr), .wen(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_wen), .wdata(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_wdata), .clk(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_clk), .rst(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_rst), .rdata(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_rdata));
  assign bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_clk = clk;
  assign bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_rst = rst;
  // Bindings to bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0

  // bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9
  logic [7:0] bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_raddr;
  logic [0:0] bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_wen;
  logic [31:0] bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_wdata;
  logic [0:0] bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_clk;
  logic [0:0] bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_rst;
  logic [31:0] bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_rdata;
  bank_32_209 bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9(.raddr(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_raddr), .wen(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_wen), .wdata(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_wdata), .clk(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_clk), .rst(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_rst), .rdata(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_rdata));
  assign bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_clk = clk;
  assign bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_rst = rst;
  // Bindings to bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9

  // selector_bright_weights_normed_gauss_blur_2_rd2_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd2_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd2_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd2_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd2_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd2_select_out;
  bright_weights_normed_gauss_blur_2_rd2_select selector_bright_weights_normed_gauss_blur_2_rd2_select(.clk(selector_bright_weights_normed_gauss_blur_2_rd2_select_clk), .rst(selector_bright_weights_normed_gauss_blur_2_rd2_select_rst), .d0(selector_bright_weights_normed_gauss_blur_2_rd2_select_d0), .d1(selector_bright_weights_normed_gauss_blur_2_rd2_select_d1), .out(selector_bright_weights_normed_gauss_blur_2_rd2_select_out));
  assign selector_bright_weights_normed_gauss_blur_2_rd2_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_2_rd2_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_2_rd2_select

  // selector_bright_weights_normed_gauss_blur_2_rd0_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd0_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd0_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd0_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd0_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd0_select_out;
  bright_weights_normed_gauss_blur_2_rd0_select selector_bright_weights_normed_gauss_blur_2_rd0_select(.clk(selector_bright_weights_normed_gauss_blur_2_rd0_select_clk), .rst(selector_bright_weights_normed_gauss_blur_2_rd0_select_rst), .d0(selector_bright_weights_normed_gauss_blur_2_rd0_select_d0), .d1(selector_bright_weights_normed_gauss_blur_2_rd0_select_d1), .out(selector_bright_weights_normed_gauss_blur_2_rd0_select_out));
  assign selector_bright_weights_normed_gauss_blur_2_rd0_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_2_rd0_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_2_rd0_select

  // selector_bright_weights_normed_gauss_blur_2_rd1_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd1_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd1_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd1_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd1_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd1_select_out;
  bright_weights_normed_gauss_blur_2_rd1_select selector_bright_weights_normed_gauss_blur_2_rd1_select(.clk(selector_bright_weights_normed_gauss_blur_2_rd1_select_clk), .rst(selector_bright_weights_normed_gauss_blur_2_rd1_select_rst), .d0(selector_bright_weights_normed_gauss_blur_2_rd1_select_d0), .d1(selector_bright_weights_normed_gauss_blur_2_rd1_select_d1), .out(selector_bright_weights_normed_gauss_blur_2_rd1_select_out));
  assign selector_bright_weights_normed_gauss_blur_2_rd1_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_2_rd1_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_2_rd1_select

  // selector_bright_weights_normed_gauss_blur_2_rd5_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd5_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd5_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd5_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd5_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd5_select_out;
  bright_weights_normed_gauss_blur_2_rd5_select selector_bright_weights_normed_gauss_blur_2_rd5_select(.clk(selector_bright_weights_normed_gauss_blur_2_rd5_select_clk), .rst(selector_bright_weights_normed_gauss_blur_2_rd5_select_rst), .d0(selector_bright_weights_normed_gauss_blur_2_rd5_select_d0), .d1(selector_bright_weights_normed_gauss_blur_2_rd5_select_d1), .out(selector_bright_weights_normed_gauss_blur_2_rd5_select_out));
  assign selector_bright_weights_normed_gauss_blur_2_rd5_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_2_rd5_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_2_rd5_select

  // selector_bright_weights_normed_gauss_blur_2_rd7_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd7_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd7_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd7_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd7_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd7_select_out;
  bright_weights_normed_gauss_blur_2_rd7_select selector_bright_weights_normed_gauss_blur_2_rd7_select(.clk(selector_bright_weights_normed_gauss_blur_2_rd7_select_clk), .rst(selector_bright_weights_normed_gauss_blur_2_rd7_select_rst), .d0(selector_bright_weights_normed_gauss_blur_2_rd7_select_d0), .d1(selector_bright_weights_normed_gauss_blur_2_rd7_select_d1), .out(selector_bright_weights_normed_gauss_blur_2_rd7_select_out));
  assign selector_bright_weights_normed_gauss_blur_2_rd7_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_2_rd7_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_2_rd7_select

  // selector_bright_weights_normed_gauss_blur_2_rd8_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd8_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_2_rd8_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd8_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd8_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_2_rd8_select_out;
  bright_weights_normed_gauss_blur_2_rd8_select selector_bright_weights_normed_gauss_blur_2_rd8_select(.clk(selector_bright_weights_normed_gauss_blur_2_rd8_select_clk), .rst(selector_bright_weights_normed_gauss_blur_2_rd8_select_rst), .d0(selector_bright_weights_normed_gauss_blur_2_rd8_select_d0), .d1(selector_bright_weights_normed_gauss_blur_2_rd8_select_d1), .out(selector_bright_weights_normed_gauss_blur_2_rd8_select_out));
  assign selector_bright_weights_normed_gauss_blur_2_rd8_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_2_rd8_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_2_rd8_select



endmodule


module bright_weights_normed_gauss_ds_3_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_3_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 53;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_3_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 2;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_3_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 104;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_3_rd5_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_3_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 103;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_3_rd6_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (47 - d0 >= 0) ? (102) : (-48 + d0 == 0) ? (102) : 0;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_3_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 52;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_3_rd8_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_weights_normed_gauss_ds_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0
  logic [6:0] bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_raddr;
  logic [0:0] bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_wen;
  logic [31:0] bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_wdata;
  logic [0:0] bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_clk;
  logic [0:0] bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_rst;
  logic [31:0] bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_rdata;
  bank_32_105 bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0(.raddr(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_raddr), .wen(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_wen), .wdata(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_wdata), .clk(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_clk), .rst(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_rst), .rdata(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_rdata));
  assign bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_clk = clk;
  assign bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_rst = rst;
  // Bindings to bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0

  // bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9
  logic [6:0] bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_raddr;
  logic [0:0] bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_wen;
  logic [31:0] bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_wdata;
  logic [0:0] bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_clk;
  logic [0:0] bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_rst;
  logic [31:0] bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_rdata;
  bank_32_105 bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9(.raddr(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_raddr), .wen(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_wen), .wdata(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_wdata), .clk(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_clk), .rst(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_rst), .rdata(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_rdata));
  assign bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_clk = clk;
  assign bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_rst = rst;
  // Bindings to bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9

  // selector_bright_weights_normed_gauss_blur_3_rd0_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd0_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd0_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd0_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd0_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd0_select_out;
  bright_weights_normed_gauss_blur_3_rd0_select selector_bright_weights_normed_gauss_blur_3_rd0_select(.clk(selector_bright_weights_normed_gauss_blur_3_rd0_select_clk), .rst(selector_bright_weights_normed_gauss_blur_3_rd0_select_rst), .d0(selector_bright_weights_normed_gauss_blur_3_rd0_select_d0), .d1(selector_bright_weights_normed_gauss_blur_3_rd0_select_d1), .out(selector_bright_weights_normed_gauss_blur_3_rd0_select_out));
  assign selector_bright_weights_normed_gauss_blur_3_rd0_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_3_rd0_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_3_rd0_select

  // selector_bright_weights_normed_gauss_blur_3_rd4_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd4_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd4_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd4_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd4_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd4_select_out;
  bright_weights_normed_gauss_blur_3_rd4_select selector_bright_weights_normed_gauss_blur_3_rd4_select(.clk(selector_bright_weights_normed_gauss_blur_3_rd4_select_clk), .rst(selector_bright_weights_normed_gauss_blur_3_rd4_select_rst), .d0(selector_bright_weights_normed_gauss_blur_3_rd4_select_d0), .d1(selector_bright_weights_normed_gauss_blur_3_rd4_select_d1), .out(selector_bright_weights_normed_gauss_blur_3_rd4_select_out));
  assign selector_bright_weights_normed_gauss_blur_3_rd4_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_3_rd4_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_3_rd4_select

  // selector_bright_weights_normed_gauss_blur_3_rd1_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd1_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd1_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd1_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd1_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd1_select_out;
  bright_weights_normed_gauss_blur_3_rd1_select selector_bright_weights_normed_gauss_blur_3_rd1_select(.clk(selector_bright_weights_normed_gauss_blur_3_rd1_select_clk), .rst(selector_bright_weights_normed_gauss_blur_3_rd1_select_rst), .d0(selector_bright_weights_normed_gauss_blur_3_rd1_select_d0), .d1(selector_bright_weights_normed_gauss_blur_3_rd1_select_d1), .out(selector_bright_weights_normed_gauss_blur_3_rd1_select_out));
  assign selector_bright_weights_normed_gauss_blur_3_rd1_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_3_rd1_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_3_rd1_select

  // selector_bright_weights_normed_gauss_blur_3_rd2_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd2_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd2_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd2_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd2_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd2_select_out;
  bright_weights_normed_gauss_blur_3_rd2_select selector_bright_weights_normed_gauss_blur_3_rd2_select(.clk(selector_bright_weights_normed_gauss_blur_3_rd2_select_clk), .rst(selector_bright_weights_normed_gauss_blur_3_rd2_select_rst), .d0(selector_bright_weights_normed_gauss_blur_3_rd2_select_d0), .d1(selector_bright_weights_normed_gauss_blur_3_rd2_select_d1), .out(selector_bright_weights_normed_gauss_blur_3_rd2_select_out));
  assign selector_bright_weights_normed_gauss_blur_3_rd2_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_3_rd2_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_3_rd2_select

  // selector_bright_weights_normed_gauss_blur_3_rd3_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd3_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd3_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd3_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd3_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd3_select_out;
  bright_weights_normed_gauss_blur_3_rd3_select selector_bright_weights_normed_gauss_blur_3_rd3_select(.clk(selector_bright_weights_normed_gauss_blur_3_rd3_select_clk), .rst(selector_bright_weights_normed_gauss_blur_3_rd3_select_rst), .d0(selector_bright_weights_normed_gauss_blur_3_rd3_select_d0), .d1(selector_bright_weights_normed_gauss_blur_3_rd3_select_d1), .out(selector_bright_weights_normed_gauss_blur_3_rd3_select_out));
  assign selector_bright_weights_normed_gauss_blur_3_rd3_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_3_rd3_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_3_rd3_select

  // selector_fused_level_2_rd0_select
  logic [0:0] selector_fused_level_2_rd0_select_clk;
  logic [0:0] selector_fused_level_2_rd0_select_rst;
  logic [31:0] selector_fused_level_2_rd0_select_d0;
  logic [31:0] selector_fused_level_2_rd0_select_d1;
  logic [31:0] selector_fused_level_2_rd0_select_out;
  fused_level_2_rd0_select selector_fused_level_2_rd0_select(.clk(selector_fused_level_2_rd0_select_clk), .rst(selector_fused_level_2_rd0_select_rst), .d0(selector_fused_level_2_rd0_select_d0), .d1(selector_fused_level_2_rd0_select_d1), .out(selector_fused_level_2_rd0_select_out));
  assign selector_fused_level_2_rd0_select_clk = clk;
  assign selector_fused_level_2_rd0_select_rst = rst;
  // Bindings to selector_fused_level_2_rd0_select

  // selector_bright_weights_normed_gauss_blur_3_rd6_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd6_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd6_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd6_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd6_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd6_select_out;
  bright_weights_normed_gauss_blur_3_rd6_select selector_bright_weights_normed_gauss_blur_3_rd6_select(.clk(selector_bright_weights_normed_gauss_blur_3_rd6_select_clk), .rst(selector_bright_weights_normed_gauss_blur_3_rd6_select_rst), .d0(selector_bright_weights_normed_gauss_blur_3_rd6_select_d0), .d1(selector_bright_weights_normed_gauss_blur_3_rd6_select_d1), .out(selector_bright_weights_normed_gauss_blur_3_rd6_select_out));
  assign selector_bright_weights_normed_gauss_blur_3_rd6_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_3_rd6_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_3_rd6_select

  // selector_bright_weights_normed_gauss_blur_3_rd5_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd5_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd5_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd5_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd5_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd5_select_out;
  bright_weights_normed_gauss_blur_3_rd5_select selector_bright_weights_normed_gauss_blur_3_rd5_select(.clk(selector_bright_weights_normed_gauss_blur_3_rd5_select_clk), .rst(selector_bright_weights_normed_gauss_blur_3_rd5_select_rst), .d0(selector_bright_weights_normed_gauss_blur_3_rd5_select_d0), .d1(selector_bright_weights_normed_gauss_blur_3_rd5_select_d1), .out(selector_bright_weights_normed_gauss_blur_3_rd5_select_out));
  assign selector_bright_weights_normed_gauss_blur_3_rd5_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_3_rd5_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_3_rd5_select

  // selector_bright_weights_normed_gauss_blur_3_rd7_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd7_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd7_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd7_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd7_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd7_select_out;
  bright_weights_normed_gauss_blur_3_rd7_select selector_bright_weights_normed_gauss_blur_3_rd7_select(.clk(selector_bright_weights_normed_gauss_blur_3_rd7_select_clk), .rst(selector_bright_weights_normed_gauss_blur_3_rd7_select_rst), .d0(selector_bright_weights_normed_gauss_blur_3_rd7_select_d0), .d1(selector_bright_weights_normed_gauss_blur_3_rd7_select_d1), .out(selector_bright_weights_normed_gauss_blur_3_rd7_select_out));
  assign selector_bright_weights_normed_gauss_blur_3_rd7_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_3_rd7_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_3_rd7_select

  // selector_bright_weights_normed_gauss_blur_3_rd8_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd8_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_3_rd8_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd8_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd8_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_3_rd8_select_out;
  bright_weights_normed_gauss_blur_3_rd8_select selector_bright_weights_normed_gauss_blur_3_rd8_select(.clk(selector_bright_weights_normed_gauss_blur_3_rd8_select_clk), .rst(selector_bright_weights_normed_gauss_blur_3_rd8_select_rst), .d0(selector_bright_weights_normed_gauss_blur_3_rd8_select_d0), .d1(selector_bright_weights_normed_gauss_blur_3_rd8_select_d1), .out(selector_bright_weights_normed_gauss_blur_3_rd8_select_out));
  assign selector_bright_weights_normed_gauss_blur_3_rd8_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_3_rd8_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_3_rd8_select



endmodule


module bright_weights_normed_gauss_blur_3_rd7_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (47 - d0 >= 0) ? (51) : (-48 + d0 == 0) ? (51) : 0;
    end
  end

endmodule


module dark(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_dark_update_0_write0_merged_banks_10
  logic [8:0] dark_dark_update_0_write0_merged_banks_10_raddr;
  logic [0:0] dark_dark_update_0_write0_merged_banks_10_wen;
  logic [31:0] dark_dark_update_0_write0_merged_banks_10_wdata;
  logic [0:0] dark_dark_update_0_write0_merged_banks_10_clk;
  logic [0:0] dark_dark_update_0_write0_merged_banks_10_rst;
  logic [31:0] dark_dark_update_0_write0_merged_banks_10_rdata;
  bank_32_417 dark_dark_update_0_write0_merged_banks_10(.raddr(dark_dark_update_0_write0_merged_banks_10_raddr), .wen(dark_dark_update_0_write0_merged_banks_10_wen), .wdata(dark_dark_update_0_write0_merged_banks_10_wdata), .clk(dark_dark_update_0_write0_merged_banks_10_clk), .rst(dark_dark_update_0_write0_merged_banks_10_rst), .rdata(dark_dark_update_0_write0_merged_banks_10_rdata));
  assign dark_dark_update_0_write0_merged_banks_10_clk = clk;
  assign dark_dark_update_0_write0_merged_banks_10_rst = rst;
  // Bindings to dark_dark_update_0_write0_merged_banks_10

  // selector_dark_gauss_blur_1_rd0_select
  logic [0:0] selector_dark_gauss_blur_1_rd0_select_clk;
  logic [0:0] selector_dark_gauss_blur_1_rd0_select_rst;
  logic [31:0] selector_dark_gauss_blur_1_rd0_select_d0;
  logic [31:0] selector_dark_gauss_blur_1_rd0_select_d1;
  logic [31:0] selector_dark_gauss_blur_1_rd0_select_out;
  dark_gauss_blur_1_rd0_select selector_dark_gauss_blur_1_rd0_select(.clk(selector_dark_gauss_blur_1_rd0_select_clk), .rst(selector_dark_gauss_blur_1_rd0_select_rst), .d0(selector_dark_gauss_blur_1_rd0_select_d0), .d1(selector_dark_gauss_blur_1_rd0_select_d1), .out(selector_dark_gauss_blur_1_rd0_select_out));
  assign selector_dark_gauss_blur_1_rd0_select_clk = clk;
  assign selector_dark_gauss_blur_1_rd0_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_1_rd0_select

  // selector_dark_gauss_blur_1_rd1_select
  logic [0:0] selector_dark_gauss_blur_1_rd1_select_clk;
  logic [0:0] selector_dark_gauss_blur_1_rd1_select_rst;
  logic [31:0] selector_dark_gauss_blur_1_rd1_select_d0;
  logic [31:0] selector_dark_gauss_blur_1_rd1_select_d1;
  logic [31:0] selector_dark_gauss_blur_1_rd1_select_out;
  dark_gauss_blur_1_rd1_select selector_dark_gauss_blur_1_rd1_select(.clk(selector_dark_gauss_blur_1_rd1_select_clk), .rst(selector_dark_gauss_blur_1_rd1_select_rst), .d0(selector_dark_gauss_blur_1_rd1_select_d0), .d1(selector_dark_gauss_blur_1_rd1_select_d1), .out(selector_dark_gauss_blur_1_rd1_select_out));
  assign selector_dark_gauss_blur_1_rd1_select_clk = clk;
  assign selector_dark_gauss_blur_1_rd1_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_1_rd1_select

  // selector_dark_gauss_blur_1_rd2_select
  logic [0:0] selector_dark_gauss_blur_1_rd2_select_clk;
  logic [0:0] selector_dark_gauss_blur_1_rd2_select_rst;
  logic [31:0] selector_dark_gauss_blur_1_rd2_select_d0;
  logic [31:0] selector_dark_gauss_blur_1_rd2_select_d1;
  logic [31:0] selector_dark_gauss_blur_1_rd2_select_out;
  dark_gauss_blur_1_rd2_select selector_dark_gauss_blur_1_rd2_select(.clk(selector_dark_gauss_blur_1_rd2_select_clk), .rst(selector_dark_gauss_blur_1_rd2_select_rst), .d0(selector_dark_gauss_blur_1_rd2_select_d0), .d1(selector_dark_gauss_blur_1_rd2_select_d1), .out(selector_dark_gauss_blur_1_rd2_select_out));
  assign selector_dark_gauss_blur_1_rd2_select_clk = clk;
  assign selector_dark_gauss_blur_1_rd2_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_1_rd2_select

  // dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0
  logic [11:0] dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_raddr;
  logic [0:0] dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_wen;
  logic [31:0] dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_wdata;
  logic [0:0] dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_clk;
  logic [0:0] dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_rst;
  logic [31:0] dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_rdata;
  bank_32_2913 dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0(.raddr(dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_raddr), .wen(dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_wen), .wdata(dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_wdata), .clk(dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_clk), .rst(dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_rst), .rdata(dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_rdata));
  assign dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_clk = clk;
  assign dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_rst = rst;
  // Bindings to dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0

  // selector_dark_gauss_blur_1_rd3_select
  logic [0:0] selector_dark_gauss_blur_1_rd3_select_clk;
  logic [0:0] selector_dark_gauss_blur_1_rd3_select_rst;
  logic [31:0] selector_dark_gauss_blur_1_rd3_select_d0;
  logic [31:0] selector_dark_gauss_blur_1_rd3_select_d1;
  logic [31:0] selector_dark_gauss_blur_1_rd3_select_out;
  dark_gauss_blur_1_rd3_select selector_dark_gauss_blur_1_rd3_select(.clk(selector_dark_gauss_blur_1_rd3_select_clk), .rst(selector_dark_gauss_blur_1_rd3_select_rst), .d0(selector_dark_gauss_blur_1_rd3_select_d0), .d1(selector_dark_gauss_blur_1_rd3_select_d1), .out(selector_dark_gauss_blur_1_rd3_select_out));
  assign selector_dark_gauss_blur_1_rd3_select_clk = clk;
  assign selector_dark_gauss_blur_1_rd3_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_1_rd3_select

  // selector_dark_gauss_blur_1_rd4_select
  logic [0:0] selector_dark_gauss_blur_1_rd4_select_clk;
  logic [0:0] selector_dark_gauss_blur_1_rd4_select_rst;
  logic [31:0] selector_dark_gauss_blur_1_rd4_select_d0;
  logic [31:0] selector_dark_gauss_blur_1_rd4_select_d1;
  logic [31:0] selector_dark_gauss_blur_1_rd4_select_out;
  dark_gauss_blur_1_rd4_select selector_dark_gauss_blur_1_rd4_select(.clk(selector_dark_gauss_blur_1_rd4_select_clk), .rst(selector_dark_gauss_blur_1_rd4_select_rst), .d0(selector_dark_gauss_blur_1_rd4_select_d0), .d1(selector_dark_gauss_blur_1_rd4_select_d1), .out(selector_dark_gauss_blur_1_rd4_select_out));
  assign selector_dark_gauss_blur_1_rd4_select_clk = clk;
  assign selector_dark_gauss_blur_1_rd4_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_1_rd4_select

  // selector_dark_gauss_blur_1_rd5_select
  logic [0:0] selector_dark_gauss_blur_1_rd5_select_clk;
  logic [0:0] selector_dark_gauss_blur_1_rd5_select_rst;
  logic [31:0] selector_dark_gauss_blur_1_rd5_select_d0;
  logic [31:0] selector_dark_gauss_blur_1_rd5_select_d1;
  logic [31:0] selector_dark_gauss_blur_1_rd5_select_out;
  dark_gauss_blur_1_rd5_select selector_dark_gauss_blur_1_rd5_select(.clk(selector_dark_gauss_blur_1_rd5_select_clk), .rst(selector_dark_gauss_blur_1_rd5_select_rst), .d0(selector_dark_gauss_blur_1_rd5_select_d0), .d1(selector_dark_gauss_blur_1_rd5_select_d1), .out(selector_dark_gauss_blur_1_rd5_select_out));
  assign selector_dark_gauss_blur_1_rd5_select_clk = clk;
  assign selector_dark_gauss_blur_1_rd5_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_1_rd5_select

  // selector_dark_gauss_blur_1_rd6_select
  logic [0:0] selector_dark_gauss_blur_1_rd6_select_clk;
  logic [0:0] selector_dark_gauss_blur_1_rd6_select_rst;
  logic [31:0] selector_dark_gauss_blur_1_rd6_select_d0;
  logic [31:0] selector_dark_gauss_blur_1_rd6_select_d1;
  logic [31:0] selector_dark_gauss_blur_1_rd6_select_out;
  dark_gauss_blur_1_rd6_select selector_dark_gauss_blur_1_rd6_select(.clk(selector_dark_gauss_blur_1_rd6_select_clk), .rst(selector_dark_gauss_blur_1_rd6_select_rst), .d0(selector_dark_gauss_blur_1_rd6_select_d0), .d1(selector_dark_gauss_blur_1_rd6_select_d1), .out(selector_dark_gauss_blur_1_rd6_select_out));
  assign selector_dark_gauss_blur_1_rd6_select_clk = clk;
  assign selector_dark_gauss_blur_1_rd6_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_1_rd6_select

  // selector_dark_gauss_blur_1_rd7_select
  logic [0:0] selector_dark_gauss_blur_1_rd7_select_clk;
  logic [0:0] selector_dark_gauss_blur_1_rd7_select_rst;
  logic [31:0] selector_dark_gauss_blur_1_rd7_select_d0;
  logic [31:0] selector_dark_gauss_blur_1_rd7_select_d1;
  logic [31:0] selector_dark_gauss_blur_1_rd7_select_out;
  dark_gauss_blur_1_rd7_select selector_dark_gauss_blur_1_rd7_select(.clk(selector_dark_gauss_blur_1_rd7_select_clk), .rst(selector_dark_gauss_blur_1_rd7_select_rst), .d0(selector_dark_gauss_blur_1_rd7_select_d0), .d1(selector_dark_gauss_blur_1_rd7_select_d1), .out(selector_dark_gauss_blur_1_rd7_select_out));
  assign selector_dark_gauss_blur_1_rd7_select_clk = clk;
  assign selector_dark_gauss_blur_1_rd7_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_1_rd7_select

  // selector_dark_gauss_blur_1_rd8_select
  logic [0:0] selector_dark_gauss_blur_1_rd8_select_clk;
  logic [0:0] selector_dark_gauss_blur_1_rd8_select_rst;
  logic [31:0] selector_dark_gauss_blur_1_rd8_select_d0;
  logic [31:0] selector_dark_gauss_blur_1_rd8_select_d1;
  logic [31:0] selector_dark_gauss_blur_1_rd8_select_out;
  dark_gauss_blur_1_rd8_select selector_dark_gauss_blur_1_rd8_select(.clk(selector_dark_gauss_blur_1_rd8_select_clk), .rst(selector_dark_gauss_blur_1_rd8_select_rst), .d0(selector_dark_gauss_blur_1_rd8_select_d0), .d1(selector_dark_gauss_blur_1_rd8_select_d1), .out(selector_dark_gauss_blur_1_rd8_select_out));
  assign selector_dark_gauss_blur_1_rd8_select_clk = clk;
  assign selector_dark_gauss_blur_1_rd8_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_1_rd8_select

  // selector_dark_laplace_diff_0_rd0_select
  logic [0:0] selector_dark_laplace_diff_0_rd0_select_clk;
  logic [0:0] selector_dark_laplace_diff_0_rd0_select_rst;
  logic [31:0] selector_dark_laplace_diff_0_rd0_select_d0;
  logic [31:0] selector_dark_laplace_diff_0_rd0_select_d1;
  logic [31:0] selector_dark_laplace_diff_0_rd0_select_out;
  dark_laplace_diff_0_rd0_select selector_dark_laplace_diff_0_rd0_select(.clk(selector_dark_laplace_diff_0_rd0_select_clk), .rst(selector_dark_laplace_diff_0_rd0_select_rst), .d0(selector_dark_laplace_diff_0_rd0_select_d0), .d1(selector_dark_laplace_diff_0_rd0_select_d1), .out(selector_dark_laplace_diff_0_rd0_select_out));
  assign selector_dark_laplace_diff_0_rd0_select_clk = clk;
  assign selector_dark_laplace_diff_0_rd0_select_rst = rst;
  // Bindings to selector_dark_laplace_diff_0_rd0_select

  // selector_dark_weights_rd0_select
  logic [0:0] selector_dark_weights_rd0_select_clk;
  logic [0:0] selector_dark_weights_rd0_select_rst;
  logic [31:0] selector_dark_weights_rd0_select_d0;
  logic [31:0] selector_dark_weights_rd0_select_d1;
  logic [31:0] selector_dark_weights_rd0_select_out;
  dark_weights_rd0_select selector_dark_weights_rd0_select(.clk(selector_dark_weights_rd0_select_clk), .rst(selector_dark_weights_rd0_select_rst), .d0(selector_dark_weights_rd0_select_d0), .d1(selector_dark_weights_rd0_select_d1), .out(selector_dark_weights_rd0_select_out));
  assign selector_dark_weights_rd0_select_clk = clk;
  assign selector_dark_weights_rd0_select_rst = rst;
  // Bindings to selector_dark_weights_rd0_select



endmodule


module dark_gauss_blur_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1
  logic [-1:0] dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1(.raddr(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_raddr), .wen(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_wen), .wdata(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_wdata), .clk(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_clk), .rst(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_rst), .rdata(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_rdata));
  assign dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_clk = clk;
  assign dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1

  // selector_dark_gauss_ds_1_rd0_select
  logic [0:0] selector_dark_gauss_ds_1_rd0_select_clk;
  logic [0:0] selector_dark_gauss_ds_1_rd0_select_rst;
  logic [31:0] selector_dark_gauss_ds_1_rd0_select_d0;
  logic [31:0] selector_dark_gauss_ds_1_rd0_select_d1;
  logic [31:0] selector_dark_gauss_ds_1_rd0_select_out;
  dark_gauss_ds_1_rd0_select selector_dark_gauss_ds_1_rd0_select(.clk(selector_dark_gauss_ds_1_rd0_select_clk), .rst(selector_dark_gauss_ds_1_rd0_select_rst), .d0(selector_dark_gauss_ds_1_rd0_select_d0), .d1(selector_dark_gauss_ds_1_rd0_select_d1), .out(selector_dark_gauss_ds_1_rd0_select_out));
  assign selector_dark_gauss_ds_1_rd0_select_clk = clk;
  assign selector_dark_gauss_ds_1_rd0_select_rst = rst;
  // Bindings to selector_dark_gauss_ds_1_rd0_select



endmodule


module dark_gauss_ds_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_gauss_blur_3(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1
  logic [-1:0] dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1(.raddr(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_raddr), .wen(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_wen), .wdata(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_wdata), .clk(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_clk), .rst(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_rst), .rdata(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_rdata));
  assign dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_clk = clk;
  assign dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1

  // selector_dark_gauss_ds_3_rd0_select
  logic [0:0] selector_dark_gauss_ds_3_rd0_select_clk;
  logic [0:0] selector_dark_gauss_ds_3_rd0_select_rst;
  logic [31:0] selector_dark_gauss_ds_3_rd0_select_d0;
  logic [31:0] selector_dark_gauss_ds_3_rd0_select_d1;
  logic [31:0] selector_dark_gauss_ds_3_rd0_select_out;
  dark_gauss_ds_3_rd0_select selector_dark_gauss_ds_3_rd0_select(.clk(selector_dark_gauss_ds_3_rd0_select_clk), .rst(selector_dark_gauss_ds_3_rd0_select_rst), .d0(selector_dark_gauss_ds_3_rd0_select_d0), .d1(selector_dark_gauss_ds_3_rd0_select_d1), .out(selector_dark_gauss_ds_3_rd0_select_out));
  assign selector_dark_gauss_ds_3_rd0_select_clk = clk;
  assign selector_dark_gauss_ds_3_rd0_select_rst = rst;
  // Bindings to selector_dark_gauss_ds_3_rd0_select



endmodule


module dark_gauss_ds_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_gauss_blur_2_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 104;
    end
  end

endmodule


module dark_gauss_blur_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 208;
    end
  end

endmodule


module dark_gauss_blur_2_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 2;
    end
  end

endmodule


module dark_gauss_blur_2_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 105;
    end
  end

endmodule


module dark_gauss_blur_2_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 207;
    end
  end

endmodule


module dark_gauss_blur_2_rd8_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_gauss_blur_2_rd5_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module dark_gauss_blur_2_rd6_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (99 - d0 >= 0) ? (206) : (-100 + d0 == 0) ? (206) : 0;
    end
  end

endmodule


module dark_gauss_blur_2_rd7_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (99 - d0 >= 0) ? (103) : (-100 + d0 == 0) ? (103) : 0;
    end
  end

endmodule


module dark_laplace_us_0_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = ((d1 == 0 && -194 + d0 >= 0) || (-1 + d1 == 0)) ? ((720 - floord(d0, 2))) : (d1 == 0 && 193 - d0 >= 0) ? (624) : (((-d1) % 2 == 0 && -194 + d0 >= 0 && -2 + d1 >= 0 && 192 - d1 >= 0) || ((-1 - d1) % 2 == 0 && -3 + d1 >= 0 && 193 - d1 >= 0)) ? ((720 - floord(d0, 2))) : (-194 + d1 >= 0) ? (((10608 - floord(d0, 2)) - 103 * floord(d1, 2))) : ((-d1) % 2 == 0 && 193 - d0 >= 0 && -2 + d1 >= 0 && 192 - d1 >= 0) ? (624) : 0;
    end
  end

endmodule


module dark_gauss_ds_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0
  logic [9:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_raddr;
  logic [0:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_wen;
  logic [31:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_wdata;
  logic [0:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_clk;
  logic [0:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_rst;
  logic [31:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_rdata;
  bank_32_625 dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0(.raddr(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_raddr), .wen(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_wen), .wdata(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_wdata), .clk(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_clk), .rst(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_rst), .rdata(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_rdata));
  assign dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_clk = clk;
  assign dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_rst = rst;
  // Bindings to dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0

  // dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0
  logic [9:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_raddr;
  logic [0:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_wen;
  logic [31:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_wdata;
  logic [0:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_clk;
  logic [0:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_rst;
  logic [31:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_rdata;
  bank_32_721 dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0(.raddr(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_raddr), .wen(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_wen), .wdata(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_wdata), .clk(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_clk), .rst(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_rst), .rdata(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_rdata));
  assign dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_clk = clk;
  assign dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_rst = rst;
  // Bindings to dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0

  // dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9
  logic [7:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_raddr;
  logic [0:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_wen;
  logic [31:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_wdata;
  logic [0:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_clk;
  logic [0:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_rst;
  logic [31:0] dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_rdata;
  bank_32_209 dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9(.raddr(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_raddr), .wen(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_wen), .wdata(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_wdata), .clk(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_clk), .rst(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_rst), .rdata(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_rdata));
  assign dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_clk = clk;
  assign dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_rst = rst;
  // Bindings to dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9

  // selector_dark_gauss_blur_2_rd0_select
  logic [0:0] selector_dark_gauss_blur_2_rd0_select_clk;
  logic [0:0] selector_dark_gauss_blur_2_rd0_select_rst;
  logic [31:0] selector_dark_gauss_blur_2_rd0_select_d0;
  logic [31:0] selector_dark_gauss_blur_2_rd0_select_d1;
  logic [31:0] selector_dark_gauss_blur_2_rd0_select_out;
  dark_gauss_blur_2_rd0_select selector_dark_gauss_blur_2_rd0_select(.clk(selector_dark_gauss_blur_2_rd0_select_clk), .rst(selector_dark_gauss_blur_2_rd0_select_rst), .d0(selector_dark_gauss_blur_2_rd0_select_d0), .d1(selector_dark_gauss_blur_2_rd0_select_d1), .out(selector_dark_gauss_blur_2_rd0_select_out));
  assign selector_dark_gauss_blur_2_rd0_select_clk = clk;
  assign selector_dark_gauss_blur_2_rd0_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_2_rd0_select

  // selector_dark_gauss_blur_2_rd1_select
  logic [0:0] selector_dark_gauss_blur_2_rd1_select_clk;
  logic [0:0] selector_dark_gauss_blur_2_rd1_select_rst;
  logic [31:0] selector_dark_gauss_blur_2_rd1_select_d0;
  logic [31:0] selector_dark_gauss_blur_2_rd1_select_d1;
  logic [31:0] selector_dark_gauss_blur_2_rd1_select_out;
  dark_gauss_blur_2_rd1_select selector_dark_gauss_blur_2_rd1_select(.clk(selector_dark_gauss_blur_2_rd1_select_clk), .rst(selector_dark_gauss_blur_2_rd1_select_rst), .d0(selector_dark_gauss_blur_2_rd1_select_d0), .d1(selector_dark_gauss_blur_2_rd1_select_d1), .out(selector_dark_gauss_blur_2_rd1_select_out));
  assign selector_dark_gauss_blur_2_rd1_select_clk = clk;
  assign selector_dark_gauss_blur_2_rd1_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_2_rd1_select

  // selector_dark_gauss_blur_2_rd2_select
  logic [0:0] selector_dark_gauss_blur_2_rd2_select_clk;
  logic [0:0] selector_dark_gauss_blur_2_rd2_select_rst;
  logic [31:0] selector_dark_gauss_blur_2_rd2_select_d0;
  logic [31:0] selector_dark_gauss_blur_2_rd2_select_d1;
  logic [31:0] selector_dark_gauss_blur_2_rd2_select_out;
  dark_gauss_blur_2_rd2_select selector_dark_gauss_blur_2_rd2_select(.clk(selector_dark_gauss_blur_2_rd2_select_clk), .rst(selector_dark_gauss_blur_2_rd2_select_rst), .d0(selector_dark_gauss_blur_2_rd2_select_d0), .d1(selector_dark_gauss_blur_2_rd2_select_d1), .out(selector_dark_gauss_blur_2_rd2_select_out));
  assign selector_dark_gauss_blur_2_rd2_select_clk = clk;
  assign selector_dark_gauss_blur_2_rd2_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_2_rd2_select

  // selector_dark_gauss_blur_2_rd3_select
  logic [0:0] selector_dark_gauss_blur_2_rd3_select_clk;
  logic [0:0] selector_dark_gauss_blur_2_rd3_select_rst;
  logic [31:0] selector_dark_gauss_blur_2_rd3_select_d0;
  logic [31:0] selector_dark_gauss_blur_2_rd3_select_d1;
  logic [31:0] selector_dark_gauss_blur_2_rd3_select_out;
  dark_gauss_blur_2_rd3_select selector_dark_gauss_blur_2_rd3_select(.clk(selector_dark_gauss_blur_2_rd3_select_clk), .rst(selector_dark_gauss_blur_2_rd3_select_rst), .d0(selector_dark_gauss_blur_2_rd3_select_d0), .d1(selector_dark_gauss_blur_2_rd3_select_d1), .out(selector_dark_gauss_blur_2_rd3_select_out));
  assign selector_dark_gauss_blur_2_rd3_select_clk = clk;
  assign selector_dark_gauss_blur_2_rd3_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_2_rd3_select

  // selector_dark_gauss_blur_2_rd4_select
  logic [0:0] selector_dark_gauss_blur_2_rd4_select_clk;
  logic [0:0] selector_dark_gauss_blur_2_rd4_select_rst;
  logic [31:0] selector_dark_gauss_blur_2_rd4_select_d0;
  logic [31:0] selector_dark_gauss_blur_2_rd4_select_d1;
  logic [31:0] selector_dark_gauss_blur_2_rd4_select_out;
  dark_gauss_blur_2_rd4_select selector_dark_gauss_blur_2_rd4_select(.clk(selector_dark_gauss_blur_2_rd4_select_clk), .rst(selector_dark_gauss_blur_2_rd4_select_rst), .d0(selector_dark_gauss_blur_2_rd4_select_d0), .d1(selector_dark_gauss_blur_2_rd4_select_d1), .out(selector_dark_gauss_blur_2_rd4_select_out));
  assign selector_dark_gauss_blur_2_rd4_select_clk = clk;
  assign selector_dark_gauss_blur_2_rd4_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_2_rd4_select

  // selector_dark_gauss_blur_2_rd5_select
  logic [0:0] selector_dark_gauss_blur_2_rd5_select_clk;
  logic [0:0] selector_dark_gauss_blur_2_rd5_select_rst;
  logic [31:0] selector_dark_gauss_blur_2_rd5_select_d0;
  logic [31:0] selector_dark_gauss_blur_2_rd5_select_d1;
  logic [31:0] selector_dark_gauss_blur_2_rd5_select_out;
  dark_gauss_blur_2_rd5_select selector_dark_gauss_blur_2_rd5_select(.clk(selector_dark_gauss_blur_2_rd5_select_clk), .rst(selector_dark_gauss_blur_2_rd5_select_rst), .d0(selector_dark_gauss_blur_2_rd5_select_d0), .d1(selector_dark_gauss_blur_2_rd5_select_d1), .out(selector_dark_gauss_blur_2_rd5_select_out));
  assign selector_dark_gauss_blur_2_rd5_select_clk = clk;
  assign selector_dark_gauss_blur_2_rd5_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_2_rd5_select

  // selector_dark_gauss_blur_2_rd6_select
  logic [0:0] selector_dark_gauss_blur_2_rd6_select_clk;
  logic [0:0] selector_dark_gauss_blur_2_rd6_select_rst;
  logic [31:0] selector_dark_gauss_blur_2_rd6_select_d0;
  logic [31:0] selector_dark_gauss_blur_2_rd6_select_d1;
  logic [31:0] selector_dark_gauss_blur_2_rd6_select_out;
  dark_gauss_blur_2_rd6_select selector_dark_gauss_blur_2_rd6_select(.clk(selector_dark_gauss_blur_2_rd6_select_clk), .rst(selector_dark_gauss_blur_2_rd6_select_rst), .d0(selector_dark_gauss_blur_2_rd6_select_d0), .d1(selector_dark_gauss_blur_2_rd6_select_d1), .out(selector_dark_gauss_blur_2_rd6_select_out));
  assign selector_dark_gauss_blur_2_rd6_select_clk = clk;
  assign selector_dark_gauss_blur_2_rd6_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_2_rd6_select

  // selector_dark_gauss_blur_2_rd7_select
  logic [0:0] selector_dark_gauss_blur_2_rd7_select_clk;
  logic [0:0] selector_dark_gauss_blur_2_rd7_select_rst;
  logic [31:0] selector_dark_gauss_blur_2_rd7_select_d0;
  logic [31:0] selector_dark_gauss_blur_2_rd7_select_d1;
  logic [31:0] selector_dark_gauss_blur_2_rd7_select_out;
  dark_gauss_blur_2_rd7_select selector_dark_gauss_blur_2_rd7_select(.clk(selector_dark_gauss_blur_2_rd7_select_clk), .rst(selector_dark_gauss_blur_2_rd7_select_rst), .d0(selector_dark_gauss_blur_2_rd7_select_d0), .d1(selector_dark_gauss_blur_2_rd7_select_d1), .out(selector_dark_gauss_blur_2_rd7_select_out));
  assign selector_dark_gauss_blur_2_rd7_select_clk = clk;
  assign selector_dark_gauss_blur_2_rd7_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_2_rd7_select

  // selector_dark_gauss_blur_2_rd8_select
  logic [0:0] selector_dark_gauss_blur_2_rd8_select_clk;
  logic [0:0] selector_dark_gauss_blur_2_rd8_select_rst;
  logic [31:0] selector_dark_gauss_blur_2_rd8_select_d0;
  logic [31:0] selector_dark_gauss_blur_2_rd8_select_d1;
  logic [31:0] selector_dark_gauss_blur_2_rd8_select_out;
  dark_gauss_blur_2_rd8_select selector_dark_gauss_blur_2_rd8_select(.clk(selector_dark_gauss_blur_2_rd8_select_clk), .rst(selector_dark_gauss_blur_2_rd8_select_rst), .d0(selector_dark_gauss_blur_2_rd8_select_d0), .d1(selector_dark_gauss_blur_2_rd8_select_d1), .out(selector_dark_gauss_blur_2_rd8_select_out));
  assign selector_dark_gauss_blur_2_rd8_select_clk = clk;
  assign selector_dark_gauss_blur_2_rd8_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_2_rd8_select

  // selector_dark_laplace_diff_1_rd0_select
  logic [0:0] selector_dark_laplace_diff_1_rd0_select_clk;
  logic [0:0] selector_dark_laplace_diff_1_rd0_select_rst;
  logic [31:0] selector_dark_laplace_diff_1_rd0_select_d0;
  logic [31:0] selector_dark_laplace_diff_1_rd0_select_d1;
  logic [31:0] selector_dark_laplace_diff_1_rd0_select_out;
  dark_laplace_diff_1_rd0_select selector_dark_laplace_diff_1_rd0_select(.clk(selector_dark_laplace_diff_1_rd0_select_clk), .rst(selector_dark_laplace_diff_1_rd0_select_rst), .d0(selector_dark_laplace_diff_1_rd0_select_d0), .d1(selector_dark_laplace_diff_1_rd0_select_d1), .out(selector_dark_laplace_diff_1_rd0_select_out));
  assign selector_dark_laplace_diff_1_rd0_select_clk = clk;
  assign selector_dark_laplace_diff_1_rd0_select_rst = rst;
  // Bindings to selector_dark_laplace_diff_1_rd0_select

  // selector_dark_laplace_us_0_rd0_select
  logic [0:0] selector_dark_laplace_us_0_rd0_select_clk;
  logic [0:0] selector_dark_laplace_us_0_rd0_select_rst;
  logic [31:0] selector_dark_laplace_us_0_rd0_select_d0;
  logic [31:0] selector_dark_laplace_us_0_rd0_select_d1;
  logic [31:0] selector_dark_laplace_us_0_rd0_select_out;
  dark_laplace_us_0_rd0_select selector_dark_laplace_us_0_rd0_select(.clk(selector_dark_laplace_us_0_rd0_select_clk), .rst(selector_dark_laplace_us_0_rd0_select_rst), .d0(selector_dark_laplace_us_0_rd0_select_d0), .d1(selector_dark_laplace_us_0_rd0_select_d1), .out(selector_dark_laplace_us_0_rd0_select_out));
  assign selector_dark_laplace_us_0_rd0_select_clk = clk;
  assign selector_dark_laplace_us_0_rd0_select_rst = rst;
  // Bindings to selector_dark_laplace_us_0_rd0_select



endmodule


module dark_gauss_blur_3_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 104;
    end
  end

endmodule


module dark_gauss_blur_3_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 103;
    end
  end

endmodule


module dark_gauss_blur_3_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 2;
    end
  end

endmodule


module dark_gauss_blur_3_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 53;
    end
  end

endmodule


module dark_gauss_blur_3_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 52;
    end
  end

endmodule


module dark_gauss_blur_3_rd5_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module dark_gauss_blur_3_rd8_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_gauss_ds_3(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0
  logic [4:0] dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_raddr;
  logic [0:0] dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_wen;
  logic [31:0] dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_wdata;
  logic [0:0] dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_clk;
  logic [0:0] dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_rst;
  logic [31:0] dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_rdata;
  bank_32_25 dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0(.raddr(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_raddr), .wen(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_wen), .wdata(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_wdata), .clk(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_clk), .rst(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_rst), .rdata(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_rdata));
  assign dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_clk = clk;
  assign dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_rst = rst;
  // Bindings to dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0

  // dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1
  logic [-1:0] dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1(.raddr(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_raddr), .wen(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_wen), .wdata(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_wdata), .clk(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_clk), .rst(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_rst), .rdata(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_rdata));
  assign dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_clk = clk;
  assign dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1

  // selector_fused_level_3_rd0_select
  logic [0:0] selector_fused_level_3_rd0_select_clk;
  logic [0:0] selector_fused_level_3_rd0_select_rst;
  logic [31:0] selector_fused_level_3_rd0_select_d0;
  logic [31:0] selector_fused_level_3_rd0_select_d1;
  logic [31:0] selector_fused_level_3_rd0_select_out;
  fused_level_3_rd0_select selector_fused_level_3_rd0_select(.clk(selector_fused_level_3_rd0_select_clk), .rst(selector_fused_level_3_rd0_select_rst), .d0(selector_fused_level_3_rd0_select_d0), .d1(selector_fused_level_3_rd0_select_d1), .out(selector_fused_level_3_rd0_select_out));
  assign selector_fused_level_3_rd0_select_clk = clk;
  assign selector_fused_level_3_rd0_select_rst = rst;
  // Bindings to selector_fused_level_3_rd0_select

  // selector_dark_laplace_us_2_rd0_select
  logic [0:0] selector_dark_laplace_us_2_rd0_select_clk;
  logic [0:0] selector_dark_laplace_us_2_rd0_select_rst;
  logic [31:0] selector_dark_laplace_us_2_rd0_select_d0;
  logic [31:0] selector_dark_laplace_us_2_rd0_select_d1;
  logic [31:0] selector_dark_laplace_us_2_rd0_select_out;
  dark_laplace_us_2_rd0_select selector_dark_laplace_us_2_rd0_select(.clk(selector_dark_laplace_us_2_rd0_select_clk), .rst(selector_dark_laplace_us_2_rd0_select_rst), .d0(selector_dark_laplace_us_2_rd0_select_d0), .d1(selector_dark_laplace_us_2_rd0_select_d1), .out(selector_dark_laplace_us_2_rd0_select_out));
  assign selector_dark_laplace_us_2_rd0_select_clk = clk;
  assign selector_dark_laplace_us_2_rd0_select_rst = rst;
  // Bindings to selector_dark_laplace_us_2_rd0_select



endmodule


module dark_gauss_blur_3_rd6_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (47 - d0 >= 0) ? (102) : (-48 + d0 == 0) ? (102) : 0;
    end
  end

endmodule


module dark_gauss_blur_3_rd7_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (47 - d0 >= 0) ? (51) : (-48 + d0 == 0) ? (51) : 0;
    end
  end

endmodule


module dark_laplace_diff_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1
  logic [-1:0] dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1(.raddr(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_raddr), .wen(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_wen), .wdata(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_wdata), .clk(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_clk), .rst(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_rst), .rdata(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_rdata));
  assign dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_clk = clk;
  assign dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1

  // selector_fused_level_2_rd0_select
  logic [0:0] selector_fused_level_2_rd0_select_clk;
  logic [0:0] selector_fused_level_2_rd0_select_rst;
  logic [31:0] selector_fused_level_2_rd0_select_d0;
  logic [31:0] selector_fused_level_2_rd0_select_d1;
  logic [31:0] selector_fused_level_2_rd0_select_out;
  fused_level_2_rd0_select selector_fused_level_2_rd0_select(.clk(selector_fused_level_2_rd0_select_clk), .rst(selector_fused_level_2_rd0_select_rst), .d0(selector_fused_level_2_rd0_select_d0), .d1(selector_fused_level_2_rd0_select_d1), .out(selector_fused_level_2_rd0_select_out));
  assign selector_fused_level_2_rd0_select_clk = clk;
  assign selector_fused_level_2_rd0_select_rst = rst;
  // Bindings to selector_fused_level_2_rd0_select



endmodule


module dark_laplace_diff_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1
  logic [-1:0] dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1(.raddr(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_raddr), .wen(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_wen), .wdata(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_wdata), .clk(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_clk), .rst(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_rst), .rdata(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_rdata));
  assign dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_clk = clk;
  assign dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1

  // selector_fused_level_0_rd0_select
  logic [0:0] selector_fused_level_0_rd0_select_clk;
  logic [0:0] selector_fused_level_0_rd0_select_rst;
  logic [31:0] selector_fused_level_0_rd0_select_d0;
  logic [31:0] selector_fused_level_0_rd0_select_d1;
  logic [31:0] selector_fused_level_0_rd0_select_out;
  fused_level_0_rd0_select selector_fused_level_0_rd0_select(.clk(selector_fused_level_0_rd0_select_clk), .rst(selector_fused_level_0_rd0_select_rst), .d0(selector_fused_level_0_rd0_select_d0), .d1(selector_fused_level_0_rd0_select_d1), .out(selector_fused_level_0_rd0_select_out));
  assign selector_fused_level_0_rd0_select_clk = clk;
  assign selector_fused_level_0_rd0_select_rst = rst;
  // Bindings to selector_fused_level_0_rd0_select



endmodule


module dark_laplace_us_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (d1 == 0 && -98 + d0 >= 0) ? (103) : (-98 + d1 >= 0) ? ((101 - floord(d0, 2))) : (-1 + d1 == 0) ? ((152 - floord(d0, 2))) : (d1 == 0 && 97 - d0 >= 0) ? (104) : ((-d1) % 2 == 0 && -98 + d0 >= 0 && -2 + d1 >= 0 && 96 - d1 >= 0) ? (103) : ((-1 - d1) % 2 == 0 && -3 + d1 >= 0 && 97 - d1 >= 0) ? ((152 - floord(d0, 2))) : ((-d1) % 2 == 0 && 97 - d0 >= 0 && -2 + d1 >= 0 && 96 - d1 >= 0) ? (104) : 0;
    end
  end

endmodule


module dark_laplace_us_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1
  logic [-1:0] dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1(.raddr(dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_raddr), .wen(dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_wen), .wdata(dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_wdata), .clk(dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_clk), .rst(dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_rst), .rdata(dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_rdata));
  assign dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_clk = clk;
  assign dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1

  // selector_dark_laplace_diff_1_rd0_select
  logic [0:0] selector_dark_laplace_diff_1_rd0_select_clk;
  logic [0:0] selector_dark_laplace_diff_1_rd0_select_rst;
  logic [31:0] selector_dark_laplace_diff_1_rd0_select_d0;
  logic [31:0] selector_dark_laplace_diff_1_rd0_select_d1;
  logic [31:0] selector_dark_laplace_diff_1_rd0_select_out;
  dark_laplace_diff_1_rd0_select selector_dark_laplace_diff_1_rd0_select(.clk(selector_dark_laplace_diff_1_rd0_select_clk), .rst(selector_dark_laplace_diff_1_rd0_select_rst), .d0(selector_dark_laplace_diff_1_rd0_select_d0), .d1(selector_dark_laplace_diff_1_rd0_select_d1), .out(selector_dark_laplace_diff_1_rd0_select_out));
  assign selector_dark_laplace_diff_1_rd0_select_clk = clk;
  assign selector_dark_laplace_diff_1_rd0_select_rst = rst;
  // Bindings to selector_dark_laplace_diff_1_rd0_select



endmodule


module dark_laplace_diff_0_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_laplace_us_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1
  logic [-1:0] dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1(.raddr(dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_raddr), .wen(dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_wen), .wdata(dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_wdata), .clk(dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_clk), .rst(dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_rst), .rdata(dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_rdata));
  assign dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_clk = clk;
  assign dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1

  // selector_dark_laplace_diff_2_rd0_select
  logic [0:0] selector_dark_laplace_diff_2_rd0_select_clk;
  logic [0:0] selector_dark_laplace_diff_2_rd0_select_rst;
  logic [31:0] selector_dark_laplace_diff_2_rd0_select_d0;
  logic [31:0] selector_dark_laplace_diff_2_rd0_select_d1;
  logic [31:0] selector_dark_laplace_diff_2_rd0_select_out;
  dark_laplace_diff_2_rd0_select selector_dark_laplace_diff_2_rd0_select(.clk(selector_dark_laplace_diff_2_rd0_select_clk), .rst(selector_dark_laplace_diff_2_rd0_select_rst), .d0(selector_dark_laplace_diff_2_rd0_select_d0), .d1(selector_dark_laplace_diff_2_rd0_select_d1), .out(selector_dark_laplace_diff_2_rd0_select_out));
  assign selector_dark_laplace_diff_2_rd0_select_clk = clk;
  assign selector_dark_laplace_diff_2_rd0_select_rst = rst;
  // Bindings to selector_dark_laplace_diff_2_rd0_select



endmodule


module dark_laplace_diff_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_weights_normed(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0
  logic [11:0] dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_raddr;
  logic [0:0] dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_wen;
  logic [31:0] dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_wdata;
  logic [0:0] dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_clk;
  logic [0:0] dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_rst;
  logic [31:0] dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_rdata;
  bank_32_2913 dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0(.raddr(dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_raddr), .wen(dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_wen), .wdata(dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_wdata), .clk(dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_clk), .rst(dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_rst), .rdata(dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_rdata));
  assign dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_clk = clk;
  assign dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_rst = rst;
  // Bindings to dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0

  // dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9
  logic [8:0] dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_raddr;
  logic [0:0] dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_wen;
  logic [31:0] dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_wdata;
  logic [0:0] dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_clk;
  logic [0:0] dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_rst;
  logic [31:0] dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_rdata;
  bank_32_417 dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9(.raddr(dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_raddr), .wen(dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_wen), .wdata(dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_wdata), .clk(dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_clk), .rst(dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_rst), .rdata(dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_rdata));
  assign dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_clk = clk;
  assign dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_rst = rst;
  // Bindings to dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9

  // selector_dark_weights_normed_gauss_blur_1_rd2_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd2_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd2_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd2_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd2_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd2_select_out;
  dark_weights_normed_gauss_blur_1_rd2_select selector_dark_weights_normed_gauss_blur_1_rd2_select(.clk(selector_dark_weights_normed_gauss_blur_1_rd2_select_clk), .rst(selector_dark_weights_normed_gauss_blur_1_rd2_select_rst), .d0(selector_dark_weights_normed_gauss_blur_1_rd2_select_d0), .d1(selector_dark_weights_normed_gauss_blur_1_rd2_select_d1), .out(selector_dark_weights_normed_gauss_blur_1_rd2_select_out));
  assign selector_dark_weights_normed_gauss_blur_1_rd2_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_1_rd2_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_1_rd2_select

  // selector_dark_weights_normed_gauss_blur_1_rd0_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd0_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd0_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd0_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd0_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd0_select_out;
  dark_weights_normed_gauss_blur_1_rd0_select selector_dark_weights_normed_gauss_blur_1_rd0_select(.clk(selector_dark_weights_normed_gauss_blur_1_rd0_select_clk), .rst(selector_dark_weights_normed_gauss_blur_1_rd0_select_rst), .d0(selector_dark_weights_normed_gauss_blur_1_rd0_select_d0), .d1(selector_dark_weights_normed_gauss_blur_1_rd0_select_d1), .out(selector_dark_weights_normed_gauss_blur_1_rd0_select_out));
  assign selector_dark_weights_normed_gauss_blur_1_rd0_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_1_rd0_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_1_rd0_select

  // selector_dark_weights_normed_gauss_blur_1_rd1_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd1_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd1_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd1_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd1_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd1_select_out;
  dark_weights_normed_gauss_blur_1_rd1_select selector_dark_weights_normed_gauss_blur_1_rd1_select(.clk(selector_dark_weights_normed_gauss_blur_1_rd1_select_clk), .rst(selector_dark_weights_normed_gauss_blur_1_rd1_select_rst), .d0(selector_dark_weights_normed_gauss_blur_1_rd1_select_d0), .d1(selector_dark_weights_normed_gauss_blur_1_rd1_select_d1), .out(selector_dark_weights_normed_gauss_blur_1_rd1_select_out));
  assign selector_dark_weights_normed_gauss_blur_1_rd1_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_1_rd1_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_1_rd1_select

  // selector_fused_level_0_rd0_select
  logic [0:0] selector_fused_level_0_rd0_select_clk;
  logic [0:0] selector_fused_level_0_rd0_select_rst;
  logic [31:0] selector_fused_level_0_rd0_select_d0;
  logic [31:0] selector_fused_level_0_rd0_select_d1;
  logic [31:0] selector_fused_level_0_rd0_select_out;
  fused_level_0_rd0_select selector_fused_level_0_rd0_select(.clk(selector_fused_level_0_rd0_select_clk), .rst(selector_fused_level_0_rd0_select_rst), .d0(selector_fused_level_0_rd0_select_d0), .d1(selector_fused_level_0_rd0_select_d1), .out(selector_fused_level_0_rd0_select_out));
  assign selector_fused_level_0_rd0_select_clk = clk;
  assign selector_fused_level_0_rd0_select_rst = rst;
  // Bindings to selector_fused_level_0_rd0_select

  // selector_dark_weights_normed_gauss_blur_1_rd3_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd3_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd3_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd3_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd3_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd3_select_out;
  dark_weights_normed_gauss_blur_1_rd3_select selector_dark_weights_normed_gauss_blur_1_rd3_select(.clk(selector_dark_weights_normed_gauss_blur_1_rd3_select_clk), .rst(selector_dark_weights_normed_gauss_blur_1_rd3_select_rst), .d0(selector_dark_weights_normed_gauss_blur_1_rd3_select_d0), .d1(selector_dark_weights_normed_gauss_blur_1_rd3_select_d1), .out(selector_dark_weights_normed_gauss_blur_1_rd3_select_out));
  assign selector_dark_weights_normed_gauss_blur_1_rd3_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_1_rd3_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_1_rd3_select

  // selector_dark_weights_normed_gauss_blur_1_rd4_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd4_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd4_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd4_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd4_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd4_select_out;
  dark_weights_normed_gauss_blur_1_rd4_select selector_dark_weights_normed_gauss_blur_1_rd4_select(.clk(selector_dark_weights_normed_gauss_blur_1_rd4_select_clk), .rst(selector_dark_weights_normed_gauss_blur_1_rd4_select_rst), .d0(selector_dark_weights_normed_gauss_blur_1_rd4_select_d0), .d1(selector_dark_weights_normed_gauss_blur_1_rd4_select_d1), .out(selector_dark_weights_normed_gauss_blur_1_rd4_select_out));
  assign selector_dark_weights_normed_gauss_blur_1_rd4_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_1_rd4_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_1_rd4_select

  // selector_dark_weights_normed_gauss_blur_1_rd6_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd6_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd6_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd6_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd6_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd6_select_out;
  dark_weights_normed_gauss_blur_1_rd6_select selector_dark_weights_normed_gauss_blur_1_rd6_select(.clk(selector_dark_weights_normed_gauss_blur_1_rd6_select_clk), .rst(selector_dark_weights_normed_gauss_blur_1_rd6_select_rst), .d0(selector_dark_weights_normed_gauss_blur_1_rd6_select_d0), .d1(selector_dark_weights_normed_gauss_blur_1_rd6_select_d1), .out(selector_dark_weights_normed_gauss_blur_1_rd6_select_out));
  assign selector_dark_weights_normed_gauss_blur_1_rd6_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_1_rd6_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_1_rd6_select

  // selector_dark_weights_normed_gauss_blur_1_rd5_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd5_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd5_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd5_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd5_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd5_select_out;
  dark_weights_normed_gauss_blur_1_rd5_select selector_dark_weights_normed_gauss_blur_1_rd5_select(.clk(selector_dark_weights_normed_gauss_blur_1_rd5_select_clk), .rst(selector_dark_weights_normed_gauss_blur_1_rd5_select_rst), .d0(selector_dark_weights_normed_gauss_blur_1_rd5_select_d0), .d1(selector_dark_weights_normed_gauss_blur_1_rd5_select_d1), .out(selector_dark_weights_normed_gauss_blur_1_rd5_select_out));
  assign selector_dark_weights_normed_gauss_blur_1_rd5_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_1_rd5_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_1_rd5_select

  // selector_dark_weights_normed_gauss_blur_1_rd7_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd7_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd7_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd7_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd7_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd7_select_out;
  dark_weights_normed_gauss_blur_1_rd7_select selector_dark_weights_normed_gauss_blur_1_rd7_select(.clk(selector_dark_weights_normed_gauss_blur_1_rd7_select_clk), .rst(selector_dark_weights_normed_gauss_blur_1_rd7_select_rst), .d0(selector_dark_weights_normed_gauss_blur_1_rd7_select_d0), .d1(selector_dark_weights_normed_gauss_blur_1_rd7_select_d1), .out(selector_dark_weights_normed_gauss_blur_1_rd7_select_out));
  assign selector_dark_weights_normed_gauss_blur_1_rd7_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_1_rd7_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_1_rd7_select

  // selector_dark_weights_normed_gauss_blur_1_rd8_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd8_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_1_rd8_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd8_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd8_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_1_rd8_select_out;
  dark_weights_normed_gauss_blur_1_rd8_select selector_dark_weights_normed_gauss_blur_1_rd8_select(.clk(selector_dark_weights_normed_gauss_blur_1_rd8_select_clk), .rst(selector_dark_weights_normed_gauss_blur_1_rd8_select_rst), .d0(selector_dark_weights_normed_gauss_blur_1_rd8_select_d0), .d1(selector_dark_weights_normed_gauss_blur_1_rd8_select_d1), .out(selector_dark_weights_normed_gauss_blur_1_rd8_select_out));
  assign selector_dark_weights_normed_gauss_blur_1_rd8_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_1_rd8_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_1_rd8_select



endmodule


module weight_sums_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module fused_level_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_final_merged_1_rd0_select
  logic [0:0] selector_final_merged_1_rd0_select_clk;
  logic [0:0] selector_final_merged_1_rd0_select_rst;
  logic [31:0] selector_final_merged_1_rd0_select_d0;
  logic [31:0] selector_final_merged_1_rd0_select_d1;
  logic [31:0] selector_final_merged_1_rd0_select_out;
  final_merged_1_rd0_select selector_final_merged_1_rd0_select(.clk(selector_final_merged_1_rd0_select_clk), .rst(selector_final_merged_1_rd0_select_rst), .d0(selector_final_merged_1_rd0_select_d0), .d1(selector_final_merged_1_rd0_select_d1), .out(selector_final_merged_1_rd0_select_out));
  assign selector_final_merged_1_rd0_select_clk = clk;
  assign selector_final_merged_1_rd0_select_rst = rst;
  // Bindings to selector_final_merged_1_rd0_select

  // fused_level_1_fused_level_1_update_0_write0_merged_banks_1
  logic [-1:0] fused_level_1_fused_level_1_update_0_write0_merged_banks_1_raddr;
  logic [0:0] fused_level_1_fused_level_1_update_0_write0_merged_banks_1_wen;
  logic [31:0] fused_level_1_fused_level_1_update_0_write0_merged_banks_1_wdata;
  logic [0:0] fused_level_1_fused_level_1_update_0_write0_merged_banks_1_clk;
  logic [0:0] fused_level_1_fused_level_1_update_0_write0_merged_banks_1_rst;
  logic [31:0] fused_level_1_fused_level_1_update_0_write0_merged_banks_1_rdata;
  bank_32_1 fused_level_1_fused_level_1_update_0_write0_merged_banks_1(.raddr(fused_level_1_fused_level_1_update_0_write0_merged_banks_1_raddr), .wen(fused_level_1_fused_level_1_update_0_write0_merged_banks_1_wen), .wdata(fused_level_1_fused_level_1_update_0_write0_merged_banks_1_wdata), .clk(fused_level_1_fused_level_1_update_0_write0_merged_banks_1_clk), .rst(fused_level_1_fused_level_1_update_0_write0_merged_banks_1_rst), .rdata(fused_level_1_fused_level_1_update_0_write0_merged_banks_1_rdata));
  assign fused_level_1_fused_level_1_update_0_write0_merged_banks_1_clk = clk;
  assign fused_level_1_fused_level_1_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to fused_level_1_fused_level_1_update_0_write0_merged_banks_1



endmodule


module dark_weights_normed_gauss_ds_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module final_merged_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module fused_level_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // fused_level_2_fused_level_2_update_0_write0_merged_banks_1
  logic [-1:0] fused_level_2_fused_level_2_update_0_write0_merged_banks_1_raddr;
  logic [0:0] fused_level_2_fused_level_2_update_0_write0_merged_banks_1_wen;
  logic [31:0] fused_level_2_fused_level_2_update_0_write0_merged_banks_1_wdata;
  logic [0:0] fused_level_2_fused_level_2_update_0_write0_merged_banks_1_clk;
  logic [0:0] fused_level_2_fused_level_2_update_0_write0_merged_banks_1_rst;
  logic [31:0] fused_level_2_fused_level_2_update_0_write0_merged_banks_1_rdata;
  bank_32_1 fused_level_2_fused_level_2_update_0_write0_merged_banks_1(.raddr(fused_level_2_fused_level_2_update_0_write0_merged_banks_1_raddr), .wen(fused_level_2_fused_level_2_update_0_write0_merged_banks_1_wen), .wdata(fused_level_2_fused_level_2_update_0_write0_merged_banks_1_wdata), .clk(fused_level_2_fused_level_2_update_0_write0_merged_banks_1_clk), .rst(fused_level_2_fused_level_2_update_0_write0_merged_banks_1_rst), .rdata(fused_level_2_fused_level_2_update_0_write0_merged_banks_1_rdata));
  assign fused_level_2_fused_level_2_update_0_write0_merged_banks_1_clk = clk;
  assign fused_level_2_fused_level_2_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to fused_level_2_fused_level_2_update_0_write0_merged_banks_1

  // selector_final_merged_2_rd0_select
  logic [0:0] selector_final_merged_2_rd0_select_clk;
  logic [0:0] selector_final_merged_2_rd0_select_rst;
  logic [31:0] selector_final_merged_2_rd0_select_d0;
  logic [31:0] selector_final_merged_2_rd0_select_d1;
  logic [31:0] selector_final_merged_2_rd0_select_out;
  final_merged_2_rd0_select selector_final_merged_2_rd0_select(.clk(selector_final_merged_2_rd0_select_clk), .rst(selector_final_merged_2_rd0_select_rst), .d0(selector_final_merged_2_rd0_select_d0), .d1(selector_final_merged_2_rd0_select_d1), .out(selector_final_merged_2_rd0_select_out));
  assign selector_final_merged_2_rd0_select_clk = clk;
  assign selector_final_merged_2_rd0_select_rst = rst;
  // Bindings to selector_final_merged_2_rd0_select



endmodule


module final_merged_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = ((-1 - d1) % 2 == 0 && 47 - d0 >= 0) ? ((24 - floord(2*d0, 4))) : 0;
    end
  end

endmodule


module bright_laplace_us_0_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = ((d1 == 0 && -194 + d0 >= 0) || (-1 + d1 == 0)) ? ((720 - floord(d0, 2))) : (d1 == 0 && 193 - d0 >= 0) ? (624) : (((-d1) % 2 == 0 && -194 + d0 >= 0 && -2 + d1 >= 0 && 192 - d1 >= 0) || ((-1 - d1) % 2 == 0 && -3 + d1 >= 0 && 193 - d1 >= 0)) ? ((720 - floord(d0, 2))) : (-194 + d1 >= 0) ? (((10608 - floord(d0, 2)) - 103 * floord(d1, 2))) : ((-d1) % 2 == 0 && 193 - d0 >= 0 && -2 + d1 >= 0 && 192 - d1 >= 0) ? (624) : 0;
    end
  end

endmodule


module bright_gauss_blur_2_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 2;
    end
  end

endmodule


module bank_32_1(input [-1:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 1;

  reg [31:0] data [0:0];

  reg [31:0] rdata_d;

  reg [-1:0] waddr;

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


module bright_gauss_blur_2_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 207;
    end
  end

endmodule


module bright(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // bright_bright_update_0_write0_merged_banks_10
  logic [8:0] bright_bright_update_0_write0_merged_banks_10_raddr;
  logic [0:0] bright_bright_update_0_write0_merged_banks_10_wen;
  logic [31:0] bright_bright_update_0_write0_merged_banks_10_wdata;
  logic [0:0] bright_bright_update_0_write0_merged_banks_10_clk;
  logic [0:0] bright_bright_update_0_write0_merged_banks_10_rst;
  logic [31:0] bright_bright_update_0_write0_merged_banks_10_rdata;
  bank_32_417 bright_bright_update_0_write0_merged_banks_10(.raddr(bright_bright_update_0_write0_merged_banks_10_raddr), .wen(bright_bright_update_0_write0_merged_banks_10_wen), .wdata(bright_bright_update_0_write0_merged_banks_10_wdata), .clk(bright_bright_update_0_write0_merged_banks_10_clk), .rst(bright_bright_update_0_write0_merged_banks_10_rst), .rdata(bright_bright_update_0_write0_merged_banks_10_rdata));
  assign bright_bright_update_0_write0_merged_banks_10_clk = clk;
  assign bright_bright_update_0_write0_merged_banks_10_rst = rst;
  // Bindings to bright_bright_update_0_write0_merged_banks_10

  // selector_bright_gauss_blur_1_rd2_select
  logic [0:0] selector_bright_gauss_blur_1_rd2_select_clk;
  logic [0:0] selector_bright_gauss_blur_1_rd2_select_rst;
  logic [31:0] selector_bright_gauss_blur_1_rd2_select_d0;
  logic [31:0] selector_bright_gauss_blur_1_rd2_select_d1;
  logic [31:0] selector_bright_gauss_blur_1_rd2_select_out;
  bright_gauss_blur_1_rd2_select selector_bright_gauss_blur_1_rd2_select(.clk(selector_bright_gauss_blur_1_rd2_select_clk), .rst(selector_bright_gauss_blur_1_rd2_select_rst), .d0(selector_bright_gauss_blur_1_rd2_select_d0), .d1(selector_bright_gauss_blur_1_rd2_select_d1), .out(selector_bright_gauss_blur_1_rd2_select_out));
  assign selector_bright_gauss_blur_1_rd2_select_clk = clk;
  assign selector_bright_gauss_blur_1_rd2_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_1_rd2_select

  // selector_bright_weights_rd0_select
  logic [0:0] selector_bright_weights_rd0_select_clk;
  logic [0:0] selector_bright_weights_rd0_select_rst;
  logic [31:0] selector_bright_weights_rd0_select_d0;
  logic [31:0] selector_bright_weights_rd0_select_d1;
  logic [31:0] selector_bright_weights_rd0_select_out;
  bright_weights_rd0_select selector_bright_weights_rd0_select(.clk(selector_bright_weights_rd0_select_clk), .rst(selector_bright_weights_rd0_select_rst), .d0(selector_bright_weights_rd0_select_d0), .d1(selector_bright_weights_rd0_select_d1), .out(selector_bright_weights_rd0_select_out));
  assign selector_bright_weights_rd0_select_clk = clk;
  assign selector_bright_weights_rd0_select_rst = rst;
  // Bindings to selector_bright_weights_rd0_select

  // selector_bright_gauss_blur_1_rd4_select
  logic [0:0] selector_bright_gauss_blur_1_rd4_select_clk;
  logic [0:0] selector_bright_gauss_blur_1_rd4_select_rst;
  logic [31:0] selector_bright_gauss_blur_1_rd4_select_d0;
  logic [31:0] selector_bright_gauss_blur_1_rd4_select_d1;
  logic [31:0] selector_bright_gauss_blur_1_rd4_select_out;
  bright_gauss_blur_1_rd4_select selector_bright_gauss_blur_1_rd4_select(.clk(selector_bright_gauss_blur_1_rd4_select_clk), .rst(selector_bright_gauss_blur_1_rd4_select_rst), .d0(selector_bright_gauss_blur_1_rd4_select_d0), .d1(selector_bright_gauss_blur_1_rd4_select_d1), .out(selector_bright_gauss_blur_1_rd4_select_out));
  assign selector_bright_gauss_blur_1_rd4_select_clk = clk;
  assign selector_bright_gauss_blur_1_rd4_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_1_rd4_select

  // selector_bright_gauss_blur_1_rd5_select
  logic [0:0] selector_bright_gauss_blur_1_rd5_select_clk;
  logic [0:0] selector_bright_gauss_blur_1_rd5_select_rst;
  logic [31:0] selector_bright_gauss_blur_1_rd5_select_d0;
  logic [31:0] selector_bright_gauss_blur_1_rd5_select_d1;
  logic [31:0] selector_bright_gauss_blur_1_rd5_select_out;
  bright_gauss_blur_1_rd5_select selector_bright_gauss_blur_1_rd5_select(.clk(selector_bright_gauss_blur_1_rd5_select_clk), .rst(selector_bright_gauss_blur_1_rd5_select_rst), .d0(selector_bright_gauss_blur_1_rd5_select_d0), .d1(selector_bright_gauss_blur_1_rd5_select_d1), .out(selector_bright_gauss_blur_1_rd5_select_out));
  assign selector_bright_gauss_blur_1_rd5_select_clk = clk;
  assign selector_bright_gauss_blur_1_rd5_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_1_rd5_select

  // bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0
  logic [11:0] bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_raddr;
  logic [0:0] bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_wen;
  logic [31:0] bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_wdata;
  logic [0:0] bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_clk;
  logic [0:0] bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_rst;
  logic [31:0] bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_rdata;
  bank_32_2913 bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0(.raddr(bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_raddr), .wen(bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_wen), .wdata(bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_wdata), .clk(bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_clk), .rst(bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_rst), .rdata(bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_rdata));
  assign bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_clk = clk;
  assign bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_rst = rst;
  // Bindings to bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0

  // selector_bright_laplace_diff_0_rd0_select
  logic [0:0] selector_bright_laplace_diff_0_rd0_select_clk;
  logic [0:0] selector_bright_laplace_diff_0_rd0_select_rst;
  logic [31:0] selector_bright_laplace_diff_0_rd0_select_d0;
  logic [31:0] selector_bright_laplace_diff_0_rd0_select_d1;
  logic [31:0] selector_bright_laplace_diff_0_rd0_select_out;
  bright_laplace_diff_0_rd0_select selector_bright_laplace_diff_0_rd0_select(.clk(selector_bright_laplace_diff_0_rd0_select_clk), .rst(selector_bright_laplace_diff_0_rd0_select_rst), .d0(selector_bright_laplace_diff_0_rd0_select_d0), .d1(selector_bright_laplace_diff_0_rd0_select_d1), .out(selector_bright_laplace_diff_0_rd0_select_out));
  assign selector_bright_laplace_diff_0_rd0_select_clk = clk;
  assign selector_bright_laplace_diff_0_rd0_select_rst = rst;
  // Bindings to selector_bright_laplace_diff_0_rd0_select

  // selector_bright_gauss_blur_1_rd3_select
  logic [0:0] selector_bright_gauss_blur_1_rd3_select_clk;
  logic [0:0] selector_bright_gauss_blur_1_rd3_select_rst;
  logic [31:0] selector_bright_gauss_blur_1_rd3_select_d0;
  logic [31:0] selector_bright_gauss_blur_1_rd3_select_d1;
  logic [31:0] selector_bright_gauss_blur_1_rd3_select_out;
  bright_gauss_blur_1_rd3_select selector_bright_gauss_blur_1_rd3_select(.clk(selector_bright_gauss_blur_1_rd3_select_clk), .rst(selector_bright_gauss_blur_1_rd3_select_rst), .d0(selector_bright_gauss_blur_1_rd3_select_d0), .d1(selector_bright_gauss_blur_1_rd3_select_d1), .out(selector_bright_gauss_blur_1_rd3_select_out));
  assign selector_bright_gauss_blur_1_rd3_select_clk = clk;
  assign selector_bright_gauss_blur_1_rd3_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_1_rd3_select

  // selector_bright_gauss_blur_1_rd8_select
  logic [0:0] selector_bright_gauss_blur_1_rd8_select_clk;
  logic [0:0] selector_bright_gauss_blur_1_rd8_select_rst;
  logic [31:0] selector_bright_gauss_blur_1_rd8_select_d0;
  logic [31:0] selector_bright_gauss_blur_1_rd8_select_d1;
  logic [31:0] selector_bright_gauss_blur_1_rd8_select_out;
  bright_gauss_blur_1_rd8_select selector_bright_gauss_blur_1_rd8_select(.clk(selector_bright_gauss_blur_1_rd8_select_clk), .rst(selector_bright_gauss_blur_1_rd8_select_rst), .d0(selector_bright_gauss_blur_1_rd8_select_d0), .d1(selector_bright_gauss_blur_1_rd8_select_d1), .out(selector_bright_gauss_blur_1_rd8_select_out));
  assign selector_bright_gauss_blur_1_rd8_select_clk = clk;
  assign selector_bright_gauss_blur_1_rd8_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_1_rd8_select

  // selector_bright_gauss_blur_1_rd6_select
  logic [0:0] selector_bright_gauss_blur_1_rd6_select_clk;
  logic [0:0] selector_bright_gauss_blur_1_rd6_select_rst;
  logic [31:0] selector_bright_gauss_blur_1_rd6_select_d0;
  logic [31:0] selector_bright_gauss_blur_1_rd6_select_d1;
  logic [31:0] selector_bright_gauss_blur_1_rd6_select_out;
  bright_gauss_blur_1_rd6_select selector_bright_gauss_blur_1_rd6_select(.clk(selector_bright_gauss_blur_1_rd6_select_clk), .rst(selector_bright_gauss_blur_1_rd6_select_rst), .d0(selector_bright_gauss_blur_1_rd6_select_d0), .d1(selector_bright_gauss_blur_1_rd6_select_d1), .out(selector_bright_gauss_blur_1_rd6_select_out));
  assign selector_bright_gauss_blur_1_rd6_select_clk = clk;
  assign selector_bright_gauss_blur_1_rd6_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_1_rd6_select

  // selector_bright_gauss_blur_1_rd7_select
  logic [0:0] selector_bright_gauss_blur_1_rd7_select_clk;
  logic [0:0] selector_bright_gauss_blur_1_rd7_select_rst;
  logic [31:0] selector_bright_gauss_blur_1_rd7_select_d0;
  logic [31:0] selector_bright_gauss_blur_1_rd7_select_d1;
  logic [31:0] selector_bright_gauss_blur_1_rd7_select_out;
  bright_gauss_blur_1_rd7_select selector_bright_gauss_blur_1_rd7_select(.clk(selector_bright_gauss_blur_1_rd7_select_clk), .rst(selector_bright_gauss_blur_1_rd7_select_rst), .d0(selector_bright_gauss_blur_1_rd7_select_d0), .d1(selector_bright_gauss_blur_1_rd7_select_d1), .out(selector_bright_gauss_blur_1_rd7_select_out));
  assign selector_bright_gauss_blur_1_rd7_select_clk = clk;
  assign selector_bright_gauss_blur_1_rd7_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_1_rd7_select

  // selector_bright_gauss_blur_1_rd0_select
  logic [0:0] selector_bright_gauss_blur_1_rd0_select_clk;
  logic [0:0] selector_bright_gauss_blur_1_rd0_select_rst;
  logic [31:0] selector_bright_gauss_blur_1_rd0_select_d0;
  logic [31:0] selector_bright_gauss_blur_1_rd0_select_d1;
  logic [31:0] selector_bright_gauss_blur_1_rd0_select_out;
  bright_gauss_blur_1_rd0_select selector_bright_gauss_blur_1_rd0_select(.clk(selector_bright_gauss_blur_1_rd0_select_clk), .rst(selector_bright_gauss_blur_1_rd0_select_rst), .d0(selector_bright_gauss_blur_1_rd0_select_d0), .d1(selector_bright_gauss_blur_1_rd0_select_d1), .out(selector_bright_gauss_blur_1_rd0_select_out));
  assign selector_bright_gauss_blur_1_rd0_select_clk = clk;
  assign selector_bright_gauss_blur_1_rd0_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_1_rd0_select

  // selector_bright_gauss_blur_1_rd1_select
  logic [0:0] selector_bright_gauss_blur_1_rd1_select_clk;
  logic [0:0] selector_bright_gauss_blur_1_rd1_select_rst;
  logic [31:0] selector_bright_gauss_blur_1_rd1_select_d0;
  logic [31:0] selector_bright_gauss_blur_1_rd1_select_d1;
  logic [31:0] selector_bright_gauss_blur_1_rd1_select_out;
  bright_gauss_blur_1_rd1_select selector_bright_gauss_blur_1_rd1_select(.clk(selector_bright_gauss_blur_1_rd1_select_clk), .rst(selector_bright_gauss_blur_1_rd1_select_rst), .d0(selector_bright_gauss_blur_1_rd1_select_d0), .d1(selector_bright_gauss_blur_1_rd1_select_d1), .out(selector_bright_gauss_blur_1_rd1_select_out));
  assign selector_bright_gauss_blur_1_rd1_select_clk = clk;
  assign selector_bright_gauss_blur_1_rd1_select_rst = rst;
  // Bindings to selector_bright_gauss_blur_1_rd1_select



endmodule


module bank_32_721(input [9:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 721;

  reg [31:0] data [720:0];

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


module bright_weights_normed_gauss_blur_2_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 104;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_2_rd8_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_2_rd5_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module bright_gauss_blur_2_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 104;
    end
  end

endmodule


module bright_gauss_blur_2_rd5_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module bright_laplace_diff_0_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_gauss_blur_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 208;
    end
  end

endmodule


module bright_laplace_us_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1
  logic [-1:0] bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1(.raddr(bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_raddr), .wen(bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_wen), .wdata(bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_wdata), .clk(bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_clk), .rst(bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_rst), .rdata(bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_rdata));
  assign bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_clk = clk;
  assign bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1

  // selector_bright_laplace_diff_1_rd0_select
  logic [0:0] selector_bright_laplace_diff_1_rd0_select_clk;
  logic [0:0] selector_bright_laplace_diff_1_rd0_select_rst;
  logic [31:0] selector_bright_laplace_diff_1_rd0_select_d0;
  logic [31:0] selector_bright_laplace_diff_1_rd0_select_d1;
  logic [31:0] selector_bright_laplace_diff_1_rd0_select_out;
  bright_laplace_diff_1_rd0_select selector_bright_laplace_diff_1_rd0_select(.clk(selector_bright_laplace_diff_1_rd0_select_clk), .rst(selector_bright_laplace_diff_1_rd0_select_rst), .d0(selector_bright_laplace_diff_1_rd0_select_d0), .d1(selector_bright_laplace_diff_1_rd0_select_d1), .out(selector_bright_laplace_diff_1_rd0_select_out));
  assign selector_bright_laplace_diff_1_rd0_select_clk = clk;
  assign selector_bright_laplace_diff_1_rd0_select_rst = rst;
  // Bindings to selector_bright_laplace_diff_1_rd0_select



endmodule


module bright_gauss_blur_2_rd6_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (99 - d0 >= 0) ? (206) : (-100 + d0 == 0) ? (206) : 0;
    end
  end

endmodule


module bright_gauss_blur_2_rd7_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (99 - d0 >= 0) ? (103) : (-100 + d0 == 0) ? (103) : 0;
    end
  end

endmodule


module bright_laplace_diff_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_3(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1
  logic [-1:0] bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1(.raddr(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_raddr), .wen(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_wen), .wdata(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_wdata), .clk(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_clk), .rst(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_rst), .rdata(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_rdata));
  assign bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_clk = clk;
  assign bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1

  // selector_bright_weights_normed_gauss_ds_3_rd0_select
  logic [0:0] selector_bright_weights_normed_gauss_ds_3_rd0_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_ds_3_rd0_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_ds_3_rd0_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_ds_3_rd0_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_ds_3_rd0_select_out;
  bright_weights_normed_gauss_ds_3_rd0_select selector_bright_weights_normed_gauss_ds_3_rd0_select(.clk(selector_bright_weights_normed_gauss_ds_3_rd0_select_clk), .rst(selector_bright_weights_normed_gauss_ds_3_rd0_select_rst), .d0(selector_bright_weights_normed_gauss_ds_3_rd0_select_d0), .d1(selector_bright_weights_normed_gauss_ds_3_rd0_select_d1), .out(selector_bright_weights_normed_gauss_ds_3_rd0_select_out));
  assign selector_bright_weights_normed_gauss_ds_3_rd0_select_clk = clk;
  assign selector_bright_weights_normed_gauss_ds_3_rd0_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_ds_3_rd0_select



endmodule


module bright_weights_normed_gauss_ds_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_2_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 2;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 208;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_2_rd6_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (99 - d0 >= 0) ? (206) : (-100 + d0 == 0) ? (206) : 0;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_2_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 105;
    end
  end

endmodule


module bright_weights_normed_gauss_blur_2_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 207;
    end
  end

endmodule


module bank_32_625(input [9:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 625;

  reg [31:0] data [624:0];

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


module bank_32_209(input [7:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 209;

  reg [31:0] data [208:0];

  reg [31:0] rdata_d;

  reg [7:0] waddr;

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


module bright_gauss_blur_2_rd8_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_gauss_ds_3(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_fused_level_3_rd0_select
  logic [0:0] selector_fused_level_3_rd0_select_clk;
  logic [0:0] selector_fused_level_3_rd0_select_rst;
  logic [31:0] selector_fused_level_3_rd0_select_d0;
  logic [31:0] selector_fused_level_3_rd0_select_d1;
  logic [31:0] selector_fused_level_3_rd0_select_out;
  fused_level_3_rd0_select selector_fused_level_3_rd0_select(.clk(selector_fused_level_3_rd0_select_clk), .rst(selector_fused_level_3_rd0_select_rst), .d0(selector_fused_level_3_rd0_select_d0), .d1(selector_fused_level_3_rd0_select_d1), .out(selector_fused_level_3_rd0_select_out));
  assign selector_fused_level_3_rd0_select_clk = clk;
  assign selector_fused_level_3_rd0_select_rst = rst;
  // Bindings to selector_fused_level_3_rd0_select

  // bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1
  logic [-1:0] bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1(.raddr(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_raddr), .wen(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_wen), .wdata(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_wdata), .clk(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_clk), .rst(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_rst), .rdata(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_rdata));
  assign bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_clk = clk;
  assign bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1

  // selector_bright_laplace_us_2_rd0_select
  logic [0:0] selector_bright_laplace_us_2_rd0_select_clk;
  logic [0:0] selector_bright_laplace_us_2_rd0_select_rst;
  logic [31:0] selector_bright_laplace_us_2_rd0_select_d0;
  logic [31:0] selector_bright_laplace_us_2_rd0_select_d1;
  logic [31:0] selector_bright_laplace_us_2_rd0_select_out;
  bright_laplace_us_2_rd0_select selector_bright_laplace_us_2_rd0_select(.clk(selector_bright_laplace_us_2_rd0_select_clk), .rst(selector_bright_laplace_us_2_rd0_select_rst), .d0(selector_bright_laplace_us_2_rd0_select_d0), .d1(selector_bright_laplace_us_2_rd0_select_d1), .out(selector_bright_laplace_us_2_rd0_select_out));
  assign selector_bright_laplace_us_2_rd0_select_clk = clk;
  assign selector_bright_laplace_us_2_rd0_select_rst = rst;
  // Bindings to selector_bright_laplace_us_2_rd0_select

  // bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0
  logic [4:0] bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_raddr;
  logic [0:0] bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_wen;
  logic [31:0] bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_wdata;
  logic [0:0] bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_clk;
  logic [0:0] bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_rst;
  logic [31:0] bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_rdata;
  bank_32_25 bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0(.raddr(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_raddr), .wen(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_wen), .wdata(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_wdata), .clk(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_clk), .rst(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_rst), .rdata(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_rdata));
  assign bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_clk = clk;
  assign bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_rst = rst;
  // Bindings to bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0



endmodule


module bright_weights_normed_gauss_blur_2_rd7_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (99 - d0 >= 0) ? (103) : (-100 + d0 == 0) ? (103) : 0;
    end
  end

endmodule


module bright_gauss_ds_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module bright_gauss_blur_2_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 105;
    end
  end

endmodule


module bright_weights_normed(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0
  logic [11:0] bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_raddr;
  logic [0:0] bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_wen;
  logic [31:0] bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_wdata;
  logic [0:0] bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_clk;
  logic [0:0] bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_rst;
  logic [31:0] bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_rdata;
  bank_32_2913 bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0(.raddr(bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_raddr), .wen(bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_wen), .wdata(bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_wdata), .clk(bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_clk), .rst(bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_rst), .rdata(bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_rdata));
  assign bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_clk = clk;
  assign bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_rst = rst;
  // Bindings to bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0

  // bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9
  logic [8:0] bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_raddr;
  logic [0:0] bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_wen;
  logic [31:0] bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_wdata;
  logic [0:0] bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_clk;
  logic [0:0] bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_rst;
  logic [31:0] bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_rdata;
  bank_32_417 bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9(.raddr(bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_raddr), .wen(bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_wen), .wdata(bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_wdata), .clk(bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_clk), .rst(bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_rst), .rdata(bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_rdata));
  assign bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_clk = clk;
  assign bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_rst = rst;
  // Bindings to bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9

  // selector_bright_weights_normed_gauss_blur_1_rd2_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd2_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd2_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd2_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd2_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd2_select_out;
  bright_weights_normed_gauss_blur_1_rd2_select selector_bright_weights_normed_gauss_blur_1_rd2_select(.clk(selector_bright_weights_normed_gauss_blur_1_rd2_select_clk), .rst(selector_bright_weights_normed_gauss_blur_1_rd2_select_rst), .d0(selector_bright_weights_normed_gauss_blur_1_rd2_select_d0), .d1(selector_bright_weights_normed_gauss_blur_1_rd2_select_d1), .out(selector_bright_weights_normed_gauss_blur_1_rd2_select_out));
  assign selector_bright_weights_normed_gauss_blur_1_rd2_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_1_rd2_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_1_rd2_select

  // selector_bright_weights_normed_gauss_blur_1_rd0_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd0_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd0_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd0_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd0_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd0_select_out;
  bright_weights_normed_gauss_blur_1_rd0_select selector_bright_weights_normed_gauss_blur_1_rd0_select(.clk(selector_bright_weights_normed_gauss_blur_1_rd0_select_clk), .rst(selector_bright_weights_normed_gauss_blur_1_rd0_select_rst), .d0(selector_bright_weights_normed_gauss_blur_1_rd0_select_d0), .d1(selector_bright_weights_normed_gauss_blur_1_rd0_select_d1), .out(selector_bright_weights_normed_gauss_blur_1_rd0_select_out));
  assign selector_bright_weights_normed_gauss_blur_1_rd0_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_1_rd0_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_1_rd0_select

  // selector_bright_weights_normed_gauss_blur_1_rd1_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd1_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd1_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd1_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd1_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd1_select_out;
  bright_weights_normed_gauss_blur_1_rd1_select selector_bright_weights_normed_gauss_blur_1_rd1_select(.clk(selector_bright_weights_normed_gauss_blur_1_rd1_select_clk), .rst(selector_bright_weights_normed_gauss_blur_1_rd1_select_rst), .d0(selector_bright_weights_normed_gauss_blur_1_rd1_select_d0), .d1(selector_bright_weights_normed_gauss_blur_1_rd1_select_d1), .out(selector_bright_weights_normed_gauss_blur_1_rd1_select_out));
  assign selector_bright_weights_normed_gauss_blur_1_rd1_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_1_rd1_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_1_rd1_select

  // selector_fused_level_0_rd0_select
  logic [0:0] selector_fused_level_0_rd0_select_clk;
  logic [0:0] selector_fused_level_0_rd0_select_rst;
  logic [31:0] selector_fused_level_0_rd0_select_d0;
  logic [31:0] selector_fused_level_0_rd0_select_d1;
  logic [31:0] selector_fused_level_0_rd0_select_out;
  fused_level_0_rd0_select selector_fused_level_0_rd0_select(.clk(selector_fused_level_0_rd0_select_clk), .rst(selector_fused_level_0_rd0_select_rst), .d0(selector_fused_level_0_rd0_select_d0), .d1(selector_fused_level_0_rd0_select_d1), .out(selector_fused_level_0_rd0_select_out));
  assign selector_fused_level_0_rd0_select_clk = clk;
  assign selector_fused_level_0_rd0_select_rst = rst;
  // Bindings to selector_fused_level_0_rd0_select

  // selector_bright_weights_normed_gauss_blur_1_rd3_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd3_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd3_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd3_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd3_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd3_select_out;
  bright_weights_normed_gauss_blur_1_rd3_select selector_bright_weights_normed_gauss_blur_1_rd3_select(.clk(selector_bright_weights_normed_gauss_blur_1_rd3_select_clk), .rst(selector_bright_weights_normed_gauss_blur_1_rd3_select_rst), .d0(selector_bright_weights_normed_gauss_blur_1_rd3_select_d0), .d1(selector_bright_weights_normed_gauss_blur_1_rd3_select_d1), .out(selector_bright_weights_normed_gauss_blur_1_rd3_select_out));
  assign selector_bright_weights_normed_gauss_blur_1_rd3_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_1_rd3_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_1_rd3_select

  // selector_bright_weights_normed_gauss_blur_1_rd4_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd4_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd4_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd4_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd4_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd4_select_out;
  bright_weights_normed_gauss_blur_1_rd4_select selector_bright_weights_normed_gauss_blur_1_rd4_select(.clk(selector_bright_weights_normed_gauss_blur_1_rd4_select_clk), .rst(selector_bright_weights_normed_gauss_blur_1_rd4_select_rst), .d0(selector_bright_weights_normed_gauss_blur_1_rd4_select_d0), .d1(selector_bright_weights_normed_gauss_blur_1_rd4_select_d1), .out(selector_bright_weights_normed_gauss_blur_1_rd4_select_out));
  assign selector_bright_weights_normed_gauss_blur_1_rd4_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_1_rd4_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_1_rd4_select

  // selector_bright_weights_normed_gauss_blur_1_rd6_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd6_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd6_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd6_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd6_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd6_select_out;
  bright_weights_normed_gauss_blur_1_rd6_select selector_bright_weights_normed_gauss_blur_1_rd6_select(.clk(selector_bright_weights_normed_gauss_blur_1_rd6_select_clk), .rst(selector_bright_weights_normed_gauss_blur_1_rd6_select_rst), .d0(selector_bright_weights_normed_gauss_blur_1_rd6_select_d0), .d1(selector_bright_weights_normed_gauss_blur_1_rd6_select_d1), .out(selector_bright_weights_normed_gauss_blur_1_rd6_select_out));
  assign selector_bright_weights_normed_gauss_blur_1_rd6_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_1_rd6_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_1_rd6_select

  // selector_bright_weights_normed_gauss_blur_1_rd5_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd5_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd5_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd5_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd5_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd5_select_out;
  bright_weights_normed_gauss_blur_1_rd5_select selector_bright_weights_normed_gauss_blur_1_rd5_select(.clk(selector_bright_weights_normed_gauss_blur_1_rd5_select_clk), .rst(selector_bright_weights_normed_gauss_blur_1_rd5_select_rst), .d0(selector_bright_weights_normed_gauss_blur_1_rd5_select_d0), .d1(selector_bright_weights_normed_gauss_blur_1_rd5_select_d1), .out(selector_bright_weights_normed_gauss_blur_1_rd5_select_out));
  assign selector_bright_weights_normed_gauss_blur_1_rd5_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_1_rd5_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_1_rd5_select

  // selector_bright_weights_normed_gauss_blur_1_rd7_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd7_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd7_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd7_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd7_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd7_select_out;
  bright_weights_normed_gauss_blur_1_rd7_select selector_bright_weights_normed_gauss_blur_1_rd7_select(.clk(selector_bright_weights_normed_gauss_blur_1_rd7_select_clk), .rst(selector_bright_weights_normed_gauss_blur_1_rd7_select_rst), .d0(selector_bright_weights_normed_gauss_blur_1_rd7_select_d0), .d1(selector_bright_weights_normed_gauss_blur_1_rd7_select_d1), .out(selector_bright_weights_normed_gauss_blur_1_rd7_select_out));
  assign selector_bright_weights_normed_gauss_blur_1_rd7_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_1_rd7_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_1_rd7_select

  // selector_bright_weights_normed_gauss_blur_1_rd8_select
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd8_select_clk;
  logic [0:0] selector_bright_weights_normed_gauss_blur_1_rd8_select_rst;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd8_select_d0;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd8_select_d1;
  logic [31:0] selector_bright_weights_normed_gauss_blur_1_rd8_select_out;
  bright_weights_normed_gauss_blur_1_rd8_select selector_bright_weights_normed_gauss_blur_1_rd8_select(.clk(selector_bright_weights_normed_gauss_blur_1_rd8_select_clk), .rst(selector_bright_weights_normed_gauss_blur_1_rd8_select_rst), .d0(selector_bright_weights_normed_gauss_blur_1_rd8_select_d0), .d1(selector_bright_weights_normed_gauss_blur_1_rd8_select_d1), .out(selector_bright_weights_normed_gauss_blur_1_rd8_select_out));
  assign selector_bright_weights_normed_gauss_blur_1_rd8_select_clk = clk;
  assign selector_bright_weights_normed_gauss_blur_1_rd8_select_rst = rst;
  // Bindings to selector_bright_weights_normed_gauss_blur_1_rd8_select



endmodule


module dark_gauss_blur_1_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 209;
    end
  end

endmodule


module dark_gauss_blur_1_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 415;
    end
  end

endmodule


module dark_gauss_blur_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 416;
    end
  end

endmodule


module dark_gauss_blur_1_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 2;
    end
  end

endmodule


module bright_weights_normed_gauss_ds_3(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1
  logic [-1:0] bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_raddr;
  logic [0:0] bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_wen;
  logic [31:0] bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_wdata;
  logic [0:0] bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_clk;
  logic [0:0] bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_rst;
  logic [31:0] bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_rdata;
  bank_32_1 bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1(.raddr(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_raddr), .wen(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_wen), .wdata(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_wdata), .clk(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_clk), .rst(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_rst), .rdata(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_rdata));
  assign bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_clk = clk;
  assign bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1

  // selector_fused_level_3_rd0_select
  logic [0:0] selector_fused_level_3_rd0_select_clk;
  logic [0:0] selector_fused_level_3_rd0_select_rst;
  logic [31:0] selector_fused_level_3_rd0_select_d0;
  logic [31:0] selector_fused_level_3_rd0_select_d1;
  logic [31:0] selector_fused_level_3_rd0_select_out;
  fused_level_3_rd0_select selector_fused_level_3_rd0_select(.clk(selector_fused_level_3_rd0_select_clk), .rst(selector_fused_level_3_rd0_select_rst), .d0(selector_fused_level_3_rd0_select_d0), .d1(selector_fused_level_3_rd0_select_d1), .out(selector_fused_level_3_rd0_select_out));
  assign selector_fused_level_3_rd0_select_clk = clk;
  assign selector_fused_level_3_rd0_select_rst = rst;
  // Bindings to selector_fused_level_3_rd0_select



endmodule


module dark_gauss_blur_1_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 208;
    end
  end

endmodule


module dark_gauss_blur_1_rd5_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module dark_gauss_blur_1_rd8_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_weights_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_gauss_blur_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1
  logic [-1:0] dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1(.raddr(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_raddr), .wen(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_wen), .wdata(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_wdata), .clk(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_clk), .rst(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_rst), .rdata(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_rdata));
  assign dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_clk = clk;
  assign dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1

  // selector_dark_gauss_ds_2_rd0_select
  logic [0:0] selector_dark_gauss_ds_2_rd0_select_clk;
  logic [0:0] selector_dark_gauss_ds_2_rd0_select_rst;
  logic [31:0] selector_dark_gauss_ds_2_rd0_select_d0;
  logic [31:0] selector_dark_gauss_ds_2_rd0_select_d1;
  logic [31:0] selector_dark_gauss_ds_2_rd0_select_out;
  dark_gauss_ds_2_rd0_select selector_dark_gauss_ds_2_rd0_select(.clk(selector_dark_gauss_ds_2_rd0_select_clk), .rst(selector_dark_gauss_ds_2_rd0_select_rst), .d0(selector_dark_gauss_ds_2_rd0_select_d0), .d1(selector_dark_gauss_ds_2_rd0_select_d1), .out(selector_dark_gauss_ds_2_rd0_select_out));
  assign selector_dark_gauss_ds_2_rd0_select_clk = clk;
  assign selector_dark_gauss_ds_2_rd0_select_rst = rst;
  // Bindings to selector_dark_gauss_ds_2_rd0_select



endmodule


module dark_gauss_blur_1_rd6_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (203 - d0 >= 0) ? (414) : (-204 + d0 == 0) ? (414) : 0;
    end
  end

endmodule


module dark_gauss_blur_1_rd7_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (203 - d0 >= 0) ? (207) : (-204 + d0 == 0) ? (207) : 0;
    end
  end

endmodule


module dark_gauss_ds_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0
  logic [7:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_raddr;
  logic [0:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_wen;
  logic [31:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_wdata;
  logic [0:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_clk;
  logic [0:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_rst;
  logic [31:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_rdata;
  bank_32_153 dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0(.raddr(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_raddr), .wen(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_wen), .wdata(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_wdata), .clk(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_clk), .rst(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_rst), .rdata(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_rdata));
  assign dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_clk = clk;
  assign dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_rst = rst;
  // Bindings to dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0

  // dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9
  logic [6:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_raddr;
  logic [0:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_wen;
  logic [31:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_wdata;
  logic [0:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_clk;
  logic [0:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_rst;
  logic [31:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_rdata;
  bank_32_105 dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9(.raddr(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_raddr), .wen(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_wen), .wdata(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_wdata), .clk(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_clk), .rst(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_rst), .rdata(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_rdata));
  assign dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_clk = clk;
  assign dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_rst = rst;
  // Bindings to dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9

  // dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0
  logic [6:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_raddr;
  logic [0:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_wen;
  logic [31:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_wdata;
  logic [0:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_clk;
  logic [0:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_rst;
  logic [31:0] dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_rdata;
  bank_32_105 dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0(.raddr(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_raddr), .wen(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_wen), .wdata(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_wdata), .clk(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_clk), .rst(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_rst), .rdata(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_rdata));
  assign dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_clk = clk;
  assign dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_rst = rst;
  // Bindings to dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0

  // selector_dark_gauss_blur_3_rd0_select
  logic [0:0] selector_dark_gauss_blur_3_rd0_select_clk;
  logic [0:0] selector_dark_gauss_blur_3_rd0_select_rst;
  logic [31:0] selector_dark_gauss_blur_3_rd0_select_d0;
  logic [31:0] selector_dark_gauss_blur_3_rd0_select_d1;
  logic [31:0] selector_dark_gauss_blur_3_rd0_select_out;
  dark_gauss_blur_3_rd0_select selector_dark_gauss_blur_3_rd0_select(.clk(selector_dark_gauss_blur_3_rd0_select_clk), .rst(selector_dark_gauss_blur_3_rd0_select_rst), .d0(selector_dark_gauss_blur_3_rd0_select_d0), .d1(selector_dark_gauss_blur_3_rd0_select_d1), .out(selector_dark_gauss_blur_3_rd0_select_out));
  assign selector_dark_gauss_blur_3_rd0_select_clk = clk;
  assign selector_dark_gauss_blur_3_rd0_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_3_rd0_select

  // selector_dark_gauss_blur_3_rd1_select
  logic [0:0] selector_dark_gauss_blur_3_rd1_select_clk;
  logic [0:0] selector_dark_gauss_blur_3_rd1_select_rst;
  logic [31:0] selector_dark_gauss_blur_3_rd1_select_d0;
  logic [31:0] selector_dark_gauss_blur_3_rd1_select_d1;
  logic [31:0] selector_dark_gauss_blur_3_rd1_select_out;
  dark_gauss_blur_3_rd1_select selector_dark_gauss_blur_3_rd1_select(.clk(selector_dark_gauss_blur_3_rd1_select_clk), .rst(selector_dark_gauss_blur_3_rd1_select_rst), .d0(selector_dark_gauss_blur_3_rd1_select_d0), .d1(selector_dark_gauss_blur_3_rd1_select_d1), .out(selector_dark_gauss_blur_3_rd1_select_out));
  assign selector_dark_gauss_blur_3_rd1_select_clk = clk;
  assign selector_dark_gauss_blur_3_rd1_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_3_rd1_select

  // selector_dark_gauss_blur_3_rd2_select
  logic [0:0] selector_dark_gauss_blur_3_rd2_select_clk;
  logic [0:0] selector_dark_gauss_blur_3_rd2_select_rst;
  logic [31:0] selector_dark_gauss_blur_3_rd2_select_d0;
  logic [31:0] selector_dark_gauss_blur_3_rd2_select_d1;
  logic [31:0] selector_dark_gauss_blur_3_rd2_select_out;
  dark_gauss_blur_3_rd2_select selector_dark_gauss_blur_3_rd2_select(.clk(selector_dark_gauss_blur_3_rd2_select_clk), .rst(selector_dark_gauss_blur_3_rd2_select_rst), .d0(selector_dark_gauss_blur_3_rd2_select_d0), .d1(selector_dark_gauss_blur_3_rd2_select_d1), .out(selector_dark_gauss_blur_3_rd2_select_out));
  assign selector_dark_gauss_blur_3_rd2_select_clk = clk;
  assign selector_dark_gauss_blur_3_rd2_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_3_rd2_select

  // selector_dark_gauss_blur_3_rd3_select
  logic [0:0] selector_dark_gauss_blur_3_rd3_select_clk;
  logic [0:0] selector_dark_gauss_blur_3_rd3_select_rst;
  logic [31:0] selector_dark_gauss_blur_3_rd3_select_d0;
  logic [31:0] selector_dark_gauss_blur_3_rd3_select_d1;
  logic [31:0] selector_dark_gauss_blur_3_rd3_select_out;
  dark_gauss_blur_3_rd3_select selector_dark_gauss_blur_3_rd3_select(.clk(selector_dark_gauss_blur_3_rd3_select_clk), .rst(selector_dark_gauss_blur_3_rd3_select_rst), .d0(selector_dark_gauss_blur_3_rd3_select_d0), .d1(selector_dark_gauss_blur_3_rd3_select_d1), .out(selector_dark_gauss_blur_3_rd3_select_out));
  assign selector_dark_gauss_blur_3_rd3_select_clk = clk;
  assign selector_dark_gauss_blur_3_rd3_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_3_rd3_select

  // selector_dark_gauss_blur_3_rd4_select
  logic [0:0] selector_dark_gauss_blur_3_rd4_select_clk;
  logic [0:0] selector_dark_gauss_blur_3_rd4_select_rst;
  logic [31:0] selector_dark_gauss_blur_3_rd4_select_d0;
  logic [31:0] selector_dark_gauss_blur_3_rd4_select_d1;
  logic [31:0] selector_dark_gauss_blur_3_rd4_select_out;
  dark_gauss_blur_3_rd4_select selector_dark_gauss_blur_3_rd4_select(.clk(selector_dark_gauss_blur_3_rd4_select_clk), .rst(selector_dark_gauss_blur_3_rd4_select_rst), .d0(selector_dark_gauss_blur_3_rd4_select_d0), .d1(selector_dark_gauss_blur_3_rd4_select_d1), .out(selector_dark_gauss_blur_3_rd4_select_out));
  assign selector_dark_gauss_blur_3_rd4_select_clk = clk;
  assign selector_dark_gauss_blur_3_rd4_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_3_rd4_select

  // selector_dark_laplace_diff_2_rd0_select
  logic [0:0] selector_dark_laplace_diff_2_rd0_select_clk;
  logic [0:0] selector_dark_laplace_diff_2_rd0_select_rst;
  logic [31:0] selector_dark_laplace_diff_2_rd0_select_d0;
  logic [31:0] selector_dark_laplace_diff_2_rd0_select_d1;
  logic [31:0] selector_dark_laplace_diff_2_rd0_select_out;
  dark_laplace_diff_2_rd0_select selector_dark_laplace_diff_2_rd0_select(.clk(selector_dark_laplace_diff_2_rd0_select_clk), .rst(selector_dark_laplace_diff_2_rd0_select_rst), .d0(selector_dark_laplace_diff_2_rd0_select_d0), .d1(selector_dark_laplace_diff_2_rd0_select_d1), .out(selector_dark_laplace_diff_2_rd0_select_out));
  assign selector_dark_laplace_diff_2_rd0_select_clk = clk;
  assign selector_dark_laplace_diff_2_rd0_select_rst = rst;
  // Bindings to selector_dark_laplace_diff_2_rd0_select

  // selector_dark_gauss_blur_3_rd5_select
  logic [0:0] selector_dark_gauss_blur_3_rd5_select_clk;
  logic [0:0] selector_dark_gauss_blur_3_rd5_select_rst;
  logic [31:0] selector_dark_gauss_blur_3_rd5_select_d0;
  logic [31:0] selector_dark_gauss_blur_3_rd5_select_d1;
  logic [31:0] selector_dark_gauss_blur_3_rd5_select_out;
  dark_gauss_blur_3_rd5_select selector_dark_gauss_blur_3_rd5_select(.clk(selector_dark_gauss_blur_3_rd5_select_clk), .rst(selector_dark_gauss_blur_3_rd5_select_rst), .d0(selector_dark_gauss_blur_3_rd5_select_d0), .d1(selector_dark_gauss_blur_3_rd5_select_d1), .out(selector_dark_gauss_blur_3_rd5_select_out));
  assign selector_dark_gauss_blur_3_rd5_select_clk = clk;
  assign selector_dark_gauss_blur_3_rd5_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_3_rd5_select

  // selector_dark_gauss_blur_3_rd6_select
  logic [0:0] selector_dark_gauss_blur_3_rd6_select_clk;
  logic [0:0] selector_dark_gauss_blur_3_rd6_select_rst;
  logic [31:0] selector_dark_gauss_blur_3_rd6_select_d0;
  logic [31:0] selector_dark_gauss_blur_3_rd6_select_d1;
  logic [31:0] selector_dark_gauss_blur_3_rd6_select_out;
  dark_gauss_blur_3_rd6_select selector_dark_gauss_blur_3_rd6_select(.clk(selector_dark_gauss_blur_3_rd6_select_clk), .rst(selector_dark_gauss_blur_3_rd6_select_rst), .d0(selector_dark_gauss_blur_3_rd6_select_d0), .d1(selector_dark_gauss_blur_3_rd6_select_d1), .out(selector_dark_gauss_blur_3_rd6_select_out));
  assign selector_dark_gauss_blur_3_rd6_select_clk = clk;
  assign selector_dark_gauss_blur_3_rd6_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_3_rd6_select

  // selector_dark_gauss_blur_3_rd7_select
  logic [0:0] selector_dark_gauss_blur_3_rd7_select_clk;
  logic [0:0] selector_dark_gauss_blur_3_rd7_select_rst;
  logic [31:0] selector_dark_gauss_blur_3_rd7_select_d0;
  logic [31:0] selector_dark_gauss_blur_3_rd7_select_d1;
  logic [31:0] selector_dark_gauss_blur_3_rd7_select_out;
  dark_gauss_blur_3_rd7_select selector_dark_gauss_blur_3_rd7_select(.clk(selector_dark_gauss_blur_3_rd7_select_clk), .rst(selector_dark_gauss_blur_3_rd7_select_rst), .d0(selector_dark_gauss_blur_3_rd7_select_d0), .d1(selector_dark_gauss_blur_3_rd7_select_d1), .out(selector_dark_gauss_blur_3_rd7_select_out));
  assign selector_dark_gauss_blur_3_rd7_select_clk = clk;
  assign selector_dark_gauss_blur_3_rd7_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_3_rd7_select

  // selector_dark_gauss_blur_3_rd8_select
  logic [0:0] selector_dark_gauss_blur_3_rd8_select_clk;
  logic [0:0] selector_dark_gauss_blur_3_rd8_select_rst;
  logic [31:0] selector_dark_gauss_blur_3_rd8_select_d0;
  logic [31:0] selector_dark_gauss_blur_3_rd8_select_d1;
  logic [31:0] selector_dark_gauss_blur_3_rd8_select_out;
  dark_gauss_blur_3_rd8_select selector_dark_gauss_blur_3_rd8_select(.clk(selector_dark_gauss_blur_3_rd8_select_clk), .rst(selector_dark_gauss_blur_3_rd8_select_rst), .d0(selector_dark_gauss_blur_3_rd8_select_d0), .d1(selector_dark_gauss_blur_3_rd8_select_d1), .out(selector_dark_gauss_blur_3_rd8_select_out));
  assign selector_dark_gauss_blur_3_rd8_select_clk = clk;
  assign selector_dark_gauss_blur_3_rd8_select_rst = rst;
  // Bindings to selector_dark_gauss_blur_3_rd8_select

  // selector_dark_laplace_us_1_rd0_select
  logic [0:0] selector_dark_laplace_us_1_rd0_select_clk;
  logic [0:0] selector_dark_laplace_us_1_rd0_select_rst;
  logic [31:0] selector_dark_laplace_us_1_rd0_select_d0;
  logic [31:0] selector_dark_laplace_us_1_rd0_select_d1;
  logic [31:0] selector_dark_laplace_us_1_rd0_select_out;
  dark_laplace_us_1_rd0_select selector_dark_laplace_us_1_rd0_select(.clk(selector_dark_laplace_us_1_rd0_select_clk), .rst(selector_dark_laplace_us_1_rd0_select_rst), .d0(selector_dark_laplace_us_1_rd0_select_d0), .d1(selector_dark_laplace_us_1_rd0_select_d1), .out(selector_dark_laplace_us_1_rd0_select_out));
  assign selector_dark_laplace_us_1_rd0_select_clk = clk;
  assign selector_dark_laplace_us_1_rd0_select_rst = rst;
  // Bindings to selector_dark_laplace_us_1_rd0_select



endmodule


module dark_gauss_ds_3_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_laplace_us_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = ((-1 - d1) % 2 == 0 && 47 - d0 >= 0) ? ((24 - floord(2*d0, 4))) : 0;
    end
  end

endmodule


module dark_laplace_diff_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1
  logic [-1:0] dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1(.raddr(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_raddr), .wen(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_wen), .wdata(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_wdata), .clk(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_clk), .rst(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_rst), .rdata(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_rdata));
  assign dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_clk = clk;
  assign dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1

  // selector_fused_level_1_rd0_select
  logic [0:0] selector_fused_level_1_rd0_select_clk;
  logic [0:0] selector_fused_level_1_rd0_select_rst;
  logic [31:0] selector_fused_level_1_rd0_select_d0;
  logic [31:0] selector_fused_level_1_rd0_select_d1;
  logic [31:0] selector_fused_level_1_rd0_select_out;
  fused_level_1_rd0_select selector_fused_level_1_rd0_select(.clk(selector_fused_level_1_rd0_select_clk), .rst(selector_fused_level_1_rd0_select_rst), .d0(selector_fused_level_1_rd0_select_d0), .d1(selector_fused_level_1_rd0_select_d1), .out(selector_fused_level_1_rd0_select_out));
  assign selector_fused_level_1_rd0_select_clk = clk;
  assign selector_fused_level_1_rd0_select_rst = rst;
  // Bindings to selector_fused_level_1_rd0_select



endmodule


module dark_laplace_us_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1
  logic [-1:0] dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1(.raddr(dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_raddr), .wen(dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_wen), .wdata(dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_wdata), .clk(dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_clk), .rst(dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_rst), .rdata(dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_rdata));
  assign dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_clk = clk;
  assign dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1

  // selector_dark_laplace_diff_0_rd0_select
  logic [0:0] selector_dark_laplace_diff_0_rd0_select_clk;
  logic [0:0] selector_dark_laplace_diff_0_rd0_select_rst;
  logic [31:0] selector_dark_laplace_diff_0_rd0_select_d0;
  logic [31:0] selector_dark_laplace_diff_0_rd0_select_d1;
  logic [31:0] selector_dark_laplace_diff_0_rd0_select_out;
  dark_laplace_diff_0_rd0_select selector_dark_laplace_diff_0_rd0_select(.clk(selector_dark_laplace_diff_0_rd0_select_clk), .rst(selector_dark_laplace_diff_0_rd0_select_rst), .d0(selector_dark_laplace_diff_0_rd0_select_d0), .d1(selector_dark_laplace_diff_0_rd0_select_d1), .out(selector_dark_laplace_diff_0_rd0_select_out));
  assign selector_dark_laplace_diff_0_rd0_select_clk = clk;
  assign selector_dark_laplace_diff_0_rd0_select_rst = rst;
  // Bindings to selector_dark_laplace_diff_0_rd0_select



endmodule


module dark_laplace_diff_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_weights(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_weights_dark_weights_update_0_write0_merged_banks_2
  logic [-1:0] dark_weights_dark_weights_update_0_write0_merged_banks_2_raddr;
  logic [0:0] dark_weights_dark_weights_update_0_write0_merged_banks_2_wen;
  logic [31:0] dark_weights_dark_weights_update_0_write0_merged_banks_2_wdata;
  logic [0:0] dark_weights_dark_weights_update_0_write0_merged_banks_2_clk;
  logic [0:0] dark_weights_dark_weights_update_0_write0_merged_banks_2_rst;
  logic [31:0] dark_weights_dark_weights_update_0_write0_merged_banks_2_rdata;
  bank_32_1 dark_weights_dark_weights_update_0_write0_merged_banks_2(.raddr(dark_weights_dark_weights_update_0_write0_merged_banks_2_raddr), .wen(dark_weights_dark_weights_update_0_write0_merged_banks_2_wen), .wdata(dark_weights_dark_weights_update_0_write0_merged_banks_2_wdata), .clk(dark_weights_dark_weights_update_0_write0_merged_banks_2_clk), .rst(dark_weights_dark_weights_update_0_write0_merged_banks_2_rst), .rdata(dark_weights_dark_weights_update_0_write0_merged_banks_2_rdata));
  assign dark_weights_dark_weights_update_0_write0_merged_banks_2_clk = clk;
  assign dark_weights_dark_weights_update_0_write0_merged_banks_2_rst = rst;
  // Bindings to dark_weights_dark_weights_update_0_write0_merged_banks_2

  // selector_weight_sums_rd0_select
  logic [0:0] selector_weight_sums_rd0_select_clk;
  logic [0:0] selector_weight_sums_rd0_select_rst;
  logic [31:0] selector_weight_sums_rd0_select_d0;
  logic [31:0] selector_weight_sums_rd0_select_d1;
  logic [31:0] selector_weight_sums_rd0_select_out;
  weight_sums_rd0_select selector_weight_sums_rd0_select(.clk(selector_weight_sums_rd0_select_clk), .rst(selector_weight_sums_rd0_select_rst), .d0(selector_weight_sums_rd0_select_d0), .d1(selector_weight_sums_rd0_select_d1), .out(selector_weight_sums_rd0_select_out));
  assign selector_weight_sums_rd0_select_clk = clk;
  assign selector_weight_sums_rd0_select_rst = rst;
  // Bindings to selector_weight_sums_rd0_select

  // selector_dark_weights_normed_rd0_select
  logic [0:0] selector_dark_weights_normed_rd0_select_clk;
  logic [0:0] selector_dark_weights_normed_rd0_select_rst;
  logic [31:0] selector_dark_weights_normed_rd0_select_d0;
  logic [31:0] selector_dark_weights_normed_rd0_select_d1;
  logic [31:0] selector_dark_weights_normed_rd0_select_out;
  dark_weights_normed_rd0_select selector_dark_weights_normed_rd0_select(.clk(selector_dark_weights_normed_rd0_select_clk), .rst(selector_dark_weights_normed_rd0_select_rst), .d0(selector_dark_weights_normed_rd0_select_d0), .d1(selector_dark_weights_normed_rd0_select_d1), .out(selector_dark_weights_normed_rd0_select_out));
  assign selector_dark_weights_normed_rd0_select_clk = clk;
  assign selector_dark_weights_normed_rd0_select_rst = rst;
  // Bindings to selector_dark_weights_normed_rd0_select



endmodule


module dark_weights_normed_gauss_ds_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_dark_weights_normed_gauss_blur_2_rd2_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd2_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd2_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd2_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd2_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd2_select_out;
  dark_weights_normed_gauss_blur_2_rd2_select selector_dark_weights_normed_gauss_blur_2_rd2_select(.clk(selector_dark_weights_normed_gauss_blur_2_rd2_select_clk), .rst(selector_dark_weights_normed_gauss_blur_2_rd2_select_rst), .d0(selector_dark_weights_normed_gauss_blur_2_rd2_select_d0), .d1(selector_dark_weights_normed_gauss_blur_2_rd2_select_d1), .out(selector_dark_weights_normed_gauss_blur_2_rd2_select_out));
  assign selector_dark_weights_normed_gauss_blur_2_rd2_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_2_rd2_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_2_rd2_select

  // selector_dark_weights_normed_gauss_blur_2_rd3_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd3_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd3_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd3_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd3_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd3_select_out;
  dark_weights_normed_gauss_blur_2_rd3_select selector_dark_weights_normed_gauss_blur_2_rd3_select(.clk(selector_dark_weights_normed_gauss_blur_2_rd3_select_clk), .rst(selector_dark_weights_normed_gauss_blur_2_rd3_select_rst), .d0(selector_dark_weights_normed_gauss_blur_2_rd3_select_d0), .d1(selector_dark_weights_normed_gauss_blur_2_rd3_select_d1), .out(selector_dark_weights_normed_gauss_blur_2_rd3_select_out));
  assign selector_dark_weights_normed_gauss_blur_2_rd3_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_2_rd3_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_2_rd3_select

  // selector_fused_level_1_rd0_select
  logic [0:0] selector_fused_level_1_rd0_select_clk;
  logic [0:0] selector_fused_level_1_rd0_select_rst;
  logic [31:0] selector_fused_level_1_rd0_select_d0;
  logic [31:0] selector_fused_level_1_rd0_select_d1;
  logic [31:0] selector_fused_level_1_rd0_select_out;
  fused_level_1_rd0_select selector_fused_level_1_rd0_select(.clk(selector_fused_level_1_rd0_select_clk), .rst(selector_fused_level_1_rd0_select_rst), .d0(selector_fused_level_1_rd0_select_d0), .d1(selector_fused_level_1_rd0_select_d1), .out(selector_fused_level_1_rd0_select_out));
  assign selector_fused_level_1_rd0_select_clk = clk;
  assign selector_fused_level_1_rd0_select_rst = rst;
  // Bindings to selector_fused_level_1_rd0_select

  // selector_dark_weights_normed_gauss_blur_2_rd4_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd4_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd4_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd4_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd4_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd4_select_out;
  dark_weights_normed_gauss_blur_2_rd4_select selector_dark_weights_normed_gauss_blur_2_rd4_select(.clk(selector_dark_weights_normed_gauss_blur_2_rd4_select_clk), .rst(selector_dark_weights_normed_gauss_blur_2_rd4_select_rst), .d0(selector_dark_weights_normed_gauss_blur_2_rd4_select_d0), .d1(selector_dark_weights_normed_gauss_blur_2_rd4_select_d1), .out(selector_dark_weights_normed_gauss_blur_2_rd4_select_out));
  assign selector_dark_weights_normed_gauss_blur_2_rd4_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_2_rd4_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_2_rd4_select

  // selector_dark_weights_normed_gauss_blur_2_rd5_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd5_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd5_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd5_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd5_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd5_select_out;
  dark_weights_normed_gauss_blur_2_rd5_select selector_dark_weights_normed_gauss_blur_2_rd5_select(.clk(selector_dark_weights_normed_gauss_blur_2_rd5_select_clk), .rst(selector_dark_weights_normed_gauss_blur_2_rd5_select_rst), .d0(selector_dark_weights_normed_gauss_blur_2_rd5_select_d0), .d1(selector_dark_weights_normed_gauss_blur_2_rd5_select_d1), .out(selector_dark_weights_normed_gauss_blur_2_rd5_select_out));
  assign selector_dark_weights_normed_gauss_blur_2_rd5_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_2_rd5_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_2_rd5_select

  // selector_dark_weights_normed_gauss_blur_2_rd6_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd6_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd6_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd6_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd6_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd6_select_out;
  dark_weights_normed_gauss_blur_2_rd6_select selector_dark_weights_normed_gauss_blur_2_rd6_select(.clk(selector_dark_weights_normed_gauss_blur_2_rd6_select_clk), .rst(selector_dark_weights_normed_gauss_blur_2_rd6_select_rst), .d0(selector_dark_weights_normed_gauss_blur_2_rd6_select_d0), .d1(selector_dark_weights_normed_gauss_blur_2_rd6_select_d1), .out(selector_dark_weights_normed_gauss_blur_2_rd6_select_out));
  assign selector_dark_weights_normed_gauss_blur_2_rd6_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_2_rd6_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_2_rd6_select

  // selector_dark_weights_normed_gauss_blur_2_rd7_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd7_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd7_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd7_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd7_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd7_select_out;
  dark_weights_normed_gauss_blur_2_rd7_select selector_dark_weights_normed_gauss_blur_2_rd7_select(.clk(selector_dark_weights_normed_gauss_blur_2_rd7_select_clk), .rst(selector_dark_weights_normed_gauss_blur_2_rd7_select_rst), .d0(selector_dark_weights_normed_gauss_blur_2_rd7_select_d0), .d1(selector_dark_weights_normed_gauss_blur_2_rd7_select_d1), .out(selector_dark_weights_normed_gauss_blur_2_rd7_select_out));
  assign selector_dark_weights_normed_gauss_blur_2_rd7_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_2_rd7_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_2_rd7_select

  // selector_dark_weights_normed_gauss_blur_2_rd8_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd8_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd8_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd8_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd8_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd8_select_out;
  dark_weights_normed_gauss_blur_2_rd8_select selector_dark_weights_normed_gauss_blur_2_rd8_select(.clk(selector_dark_weights_normed_gauss_blur_2_rd8_select_clk), .rst(selector_dark_weights_normed_gauss_blur_2_rd8_select_rst), .d0(selector_dark_weights_normed_gauss_blur_2_rd8_select_d0), .d1(selector_dark_weights_normed_gauss_blur_2_rd8_select_d1), .out(selector_dark_weights_normed_gauss_blur_2_rd8_select_out));
  assign selector_dark_weights_normed_gauss_blur_2_rd8_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_2_rd8_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_2_rd8_select

  // dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0
  logic [9:0] dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_raddr;
  logic [0:0] dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_wen;
  logic [31:0] dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_wdata;
  logic [0:0] dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_clk;
  logic [0:0] dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_rst;
  logic [31:0] dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_rdata;
  bank_32_625 dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0(.raddr(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_raddr), .wen(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_wen), .wdata(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_wdata), .clk(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_clk), .rst(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_rst), .rdata(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_rdata));
  assign dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_clk = clk;
  assign dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_rst = rst;
  // Bindings to dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0

  // selector_dark_weights_normed_gauss_blur_2_rd0_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd0_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd0_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd0_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd0_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd0_select_out;
  dark_weights_normed_gauss_blur_2_rd0_select selector_dark_weights_normed_gauss_blur_2_rd0_select(.clk(selector_dark_weights_normed_gauss_blur_2_rd0_select_clk), .rst(selector_dark_weights_normed_gauss_blur_2_rd0_select_rst), .d0(selector_dark_weights_normed_gauss_blur_2_rd0_select_d0), .d1(selector_dark_weights_normed_gauss_blur_2_rd0_select_d1), .out(selector_dark_weights_normed_gauss_blur_2_rd0_select_out));
  assign selector_dark_weights_normed_gauss_blur_2_rd0_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_2_rd0_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_2_rd0_select

  // selector_dark_weights_normed_gauss_blur_2_rd1_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd1_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_2_rd1_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd1_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd1_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_2_rd1_select_out;
  dark_weights_normed_gauss_blur_2_rd1_select selector_dark_weights_normed_gauss_blur_2_rd1_select(.clk(selector_dark_weights_normed_gauss_blur_2_rd1_select_clk), .rst(selector_dark_weights_normed_gauss_blur_2_rd1_select_rst), .d0(selector_dark_weights_normed_gauss_blur_2_rd1_select_d0), .d1(selector_dark_weights_normed_gauss_blur_2_rd1_select_d1), .out(selector_dark_weights_normed_gauss_blur_2_rd1_select_out));
  assign selector_dark_weights_normed_gauss_blur_2_rd1_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_2_rd1_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_2_rd1_select

  // dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9
  logic [7:0] dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_raddr;
  logic [0:0] dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_wen;
  logic [31:0] dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_wdata;
  logic [0:0] dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_clk;
  logic [0:0] dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_rst;
  logic [31:0] dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_rdata;
  bank_32_209 dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9(.raddr(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_raddr), .wen(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_wen), .wdata(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_wdata), .clk(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_clk), .rst(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_rst), .rdata(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_rdata));
  assign dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_clk = clk;
  assign dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_rst = rst;
  // Bindings to dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9



endmodule


module dark_weights_normed_gauss_blur_1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 416;
    end
  end

endmodule


module fused_level_0_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (-193 + d0 == 0 && 192 - d1 >= 0) ? (2911) : (192 - d1 >= 0 && 192 - d0 >= 0) ? (2912) : (-193 + d1 == 0) ? ((2897 - d0)) : (-194 + d0 >= 0 && 192 - d1 >= 0) ? ((3104 - d0)) : (-194 + d1 >= 0) ? (((42848 - d0) - 207 * d1)) : 0;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_1_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 2;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_1_rd6_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (203 - d0 >= 0) ? (414) : (-204 + d0 == 0) ? (414) : 0;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_1_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 209;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_1_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 415;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_1_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 208;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_1_rd5_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_1_rd8_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_1_rd7_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (203 - d0 >= 0) ? (207) : (-204 + d0 == 0) ? (207) : 0;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_3_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 104;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_3_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 53;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_3_rd6_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (47 - d0 >= 0) ? (102) : (-48 + d0 == 0) ? (102) : 0;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_3_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 103;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_3_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 2;
    end
  end

endmodule


module fused_level_2_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (-49 + d0 == 0 && 48 - d1 >= 0) ? (103) : (48 - d1 >= 0 && 48 - d0 >= 0) ? (104) : (-49 + d1 == 0) ? ((101 - d0)) : 0;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_3_rd4_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 52;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_3_rd5_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_3_rd8_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_weights_normed_gauss_ds_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0
  logic [6:0] dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_raddr;
  logic [0:0] dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_wen;
  logic [31:0] dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_wdata;
  logic [0:0] dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_clk;
  logic [0:0] dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_rst;
  logic [31:0] dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_rdata;
  bank_32_105 dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0(.raddr(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_raddr), .wen(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_wen), .wdata(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_wdata), .clk(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_clk), .rst(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_rst), .rdata(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_rdata));
  assign dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_clk = clk;
  assign dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_rst = rst;
  // Bindings to dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0

  // dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9
  logic [6:0] dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_raddr;
  logic [0:0] dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_wen;
  logic [31:0] dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_wdata;
  logic [0:0] dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_clk;
  logic [0:0] dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_rst;
  logic [31:0] dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_rdata;
  bank_32_105 dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9(.raddr(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_raddr), .wen(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_wen), .wdata(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_wdata), .clk(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_clk), .rst(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_rst), .rdata(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_rdata));
  assign dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_clk = clk;
  assign dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_rst = rst;
  // Bindings to dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9

  // selector_fused_level_2_rd0_select
  logic [0:0] selector_fused_level_2_rd0_select_clk;
  logic [0:0] selector_fused_level_2_rd0_select_rst;
  logic [31:0] selector_fused_level_2_rd0_select_d0;
  logic [31:0] selector_fused_level_2_rd0_select_d1;
  logic [31:0] selector_fused_level_2_rd0_select_out;
  fused_level_2_rd0_select selector_fused_level_2_rd0_select(.clk(selector_fused_level_2_rd0_select_clk), .rst(selector_fused_level_2_rd0_select_rst), .d0(selector_fused_level_2_rd0_select_d0), .d1(selector_fused_level_2_rd0_select_d1), .out(selector_fused_level_2_rd0_select_out));
  assign selector_fused_level_2_rd0_select_clk = clk;
  assign selector_fused_level_2_rd0_select_rst = rst;
  // Bindings to selector_fused_level_2_rd0_select

  // selector_dark_weights_normed_gauss_blur_3_rd2_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd2_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd2_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd2_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd2_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd2_select_out;
  dark_weights_normed_gauss_blur_3_rd2_select selector_dark_weights_normed_gauss_blur_3_rd2_select(.clk(selector_dark_weights_normed_gauss_blur_3_rd2_select_clk), .rst(selector_dark_weights_normed_gauss_blur_3_rd2_select_rst), .d0(selector_dark_weights_normed_gauss_blur_3_rd2_select_d0), .d1(selector_dark_weights_normed_gauss_blur_3_rd2_select_d1), .out(selector_dark_weights_normed_gauss_blur_3_rd2_select_out));
  assign selector_dark_weights_normed_gauss_blur_3_rd2_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_3_rd2_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_3_rd2_select

  // selector_dark_weights_normed_gauss_blur_3_rd0_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd0_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd0_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd0_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd0_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd0_select_out;
  dark_weights_normed_gauss_blur_3_rd0_select selector_dark_weights_normed_gauss_blur_3_rd0_select(.clk(selector_dark_weights_normed_gauss_blur_3_rd0_select_clk), .rst(selector_dark_weights_normed_gauss_blur_3_rd0_select_rst), .d0(selector_dark_weights_normed_gauss_blur_3_rd0_select_d0), .d1(selector_dark_weights_normed_gauss_blur_3_rd0_select_d1), .out(selector_dark_weights_normed_gauss_blur_3_rd0_select_out));
  assign selector_dark_weights_normed_gauss_blur_3_rd0_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_3_rd0_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_3_rd0_select

  // selector_dark_weights_normed_gauss_blur_3_rd1_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd1_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd1_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd1_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd1_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd1_select_out;
  dark_weights_normed_gauss_blur_3_rd1_select selector_dark_weights_normed_gauss_blur_3_rd1_select(.clk(selector_dark_weights_normed_gauss_blur_3_rd1_select_clk), .rst(selector_dark_weights_normed_gauss_blur_3_rd1_select_rst), .d0(selector_dark_weights_normed_gauss_blur_3_rd1_select_d0), .d1(selector_dark_weights_normed_gauss_blur_3_rd1_select_d1), .out(selector_dark_weights_normed_gauss_blur_3_rd1_select_out));
  assign selector_dark_weights_normed_gauss_blur_3_rd1_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_3_rd1_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_3_rd1_select

  // selector_dark_weights_normed_gauss_blur_3_rd3_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd3_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd3_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd3_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd3_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd3_select_out;
  dark_weights_normed_gauss_blur_3_rd3_select selector_dark_weights_normed_gauss_blur_3_rd3_select(.clk(selector_dark_weights_normed_gauss_blur_3_rd3_select_clk), .rst(selector_dark_weights_normed_gauss_blur_3_rd3_select_rst), .d0(selector_dark_weights_normed_gauss_blur_3_rd3_select_d0), .d1(selector_dark_weights_normed_gauss_blur_3_rd3_select_d1), .out(selector_dark_weights_normed_gauss_blur_3_rd3_select_out));
  assign selector_dark_weights_normed_gauss_blur_3_rd3_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_3_rd3_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_3_rd3_select

  // selector_dark_weights_normed_gauss_blur_3_rd4_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd4_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd4_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd4_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd4_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd4_select_out;
  dark_weights_normed_gauss_blur_3_rd4_select selector_dark_weights_normed_gauss_blur_3_rd4_select(.clk(selector_dark_weights_normed_gauss_blur_3_rd4_select_clk), .rst(selector_dark_weights_normed_gauss_blur_3_rd4_select_rst), .d0(selector_dark_weights_normed_gauss_blur_3_rd4_select_d0), .d1(selector_dark_weights_normed_gauss_blur_3_rd4_select_d1), .out(selector_dark_weights_normed_gauss_blur_3_rd4_select_out));
  assign selector_dark_weights_normed_gauss_blur_3_rd4_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_3_rd4_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_3_rd4_select

  // selector_dark_weights_normed_gauss_blur_3_rd6_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd6_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd6_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd6_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd6_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd6_select_out;
  dark_weights_normed_gauss_blur_3_rd6_select selector_dark_weights_normed_gauss_blur_3_rd6_select(.clk(selector_dark_weights_normed_gauss_blur_3_rd6_select_clk), .rst(selector_dark_weights_normed_gauss_blur_3_rd6_select_rst), .d0(selector_dark_weights_normed_gauss_blur_3_rd6_select_d0), .d1(selector_dark_weights_normed_gauss_blur_3_rd6_select_d1), .out(selector_dark_weights_normed_gauss_blur_3_rd6_select_out));
  assign selector_dark_weights_normed_gauss_blur_3_rd6_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_3_rd6_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_3_rd6_select

  // selector_dark_weights_normed_gauss_blur_3_rd5_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd5_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd5_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd5_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd5_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd5_select_out;
  dark_weights_normed_gauss_blur_3_rd5_select selector_dark_weights_normed_gauss_blur_3_rd5_select(.clk(selector_dark_weights_normed_gauss_blur_3_rd5_select_clk), .rst(selector_dark_weights_normed_gauss_blur_3_rd5_select_rst), .d0(selector_dark_weights_normed_gauss_blur_3_rd5_select_d0), .d1(selector_dark_weights_normed_gauss_blur_3_rd5_select_d1), .out(selector_dark_weights_normed_gauss_blur_3_rd5_select_out));
  assign selector_dark_weights_normed_gauss_blur_3_rd5_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_3_rd5_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_3_rd5_select

  // selector_dark_weights_normed_gauss_blur_3_rd7_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd7_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd7_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd7_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd7_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd7_select_out;
  dark_weights_normed_gauss_blur_3_rd7_select selector_dark_weights_normed_gauss_blur_3_rd7_select(.clk(selector_dark_weights_normed_gauss_blur_3_rd7_select_clk), .rst(selector_dark_weights_normed_gauss_blur_3_rd7_select_rst), .d0(selector_dark_weights_normed_gauss_blur_3_rd7_select_d0), .d1(selector_dark_weights_normed_gauss_blur_3_rd7_select_d1), .out(selector_dark_weights_normed_gauss_blur_3_rd7_select_out));
  assign selector_dark_weights_normed_gauss_blur_3_rd7_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_3_rd7_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_3_rd7_select

  // selector_dark_weights_normed_gauss_blur_3_rd8_select
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd8_select_clk;
  logic [0:0] selector_dark_weights_normed_gauss_blur_3_rd8_select_rst;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd8_select_d0;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd8_select_d1;
  logic [31:0] selector_dark_weights_normed_gauss_blur_3_rd8_select_out;
  dark_weights_normed_gauss_blur_3_rd8_select selector_dark_weights_normed_gauss_blur_3_rd8_select(.clk(selector_dark_weights_normed_gauss_blur_3_rd8_select_clk), .rst(selector_dark_weights_normed_gauss_blur_3_rd8_select_rst), .d0(selector_dark_weights_normed_gauss_blur_3_rd8_select_d0), .d1(selector_dark_weights_normed_gauss_blur_3_rd8_select_d1), .out(selector_dark_weights_normed_gauss_blur_3_rd8_select_out));
  assign selector_dark_weights_normed_gauss_blur_3_rd8_select_clk = clk;
  assign selector_dark_weights_normed_gauss_blur_3_rd8_select_rst = rst;
  // Bindings to selector_dark_weights_normed_gauss_blur_3_rd8_select



endmodule


module fused_level_3_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_weights_normed_gauss_blur_3_rd7_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (47 - d0 >= 0) ? (51) : (-48 + d0 == 0) ? (51) : 0;
    end
  end

endmodule


module dark_weights_normed_gauss_ds_3(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1
  logic [-1:0] dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_raddr;
  logic [0:0] dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_wen;
  logic [31:0] dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_wdata;
  logic [0:0] dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_clk;
  logic [0:0] dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_rst;
  logic [31:0] dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_rdata;
  bank_32_1 dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1(.raddr(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_raddr), .wen(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_wen), .wdata(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_wdata), .clk(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_clk), .rst(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_rst), .rdata(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_rdata));
  assign dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_clk = clk;
  assign dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1

  // selector_fused_level_3_rd0_select
  logic [0:0] selector_fused_level_3_rd0_select_clk;
  logic [0:0] selector_fused_level_3_rd0_select_rst;
  logic [31:0] selector_fused_level_3_rd0_select_d0;
  logic [31:0] selector_fused_level_3_rd0_select_d1;
  logic [31:0] selector_fused_level_3_rd0_select_out;
  fused_level_3_rd0_select selector_fused_level_3_rd0_select(.clk(selector_fused_level_3_rd0_select_clk), .rst(selector_fused_level_3_rd0_select_rst), .d0(selector_fused_level_3_rd0_select_d0), .d1(selector_fused_level_3_rd0_select_d1), .out(selector_fused_level_3_rd0_select_out));
  assign selector_fused_level_3_rd0_select_clk = clk;
  assign selector_fused_level_3_rd0_select_rst = rst;
  // Bindings to selector_fused_level_3_rd0_select



endmodule


module final_merged_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // final_merged_0_final_merged_0_update_0_write0_merged_banks_1
  logic [-1:0] final_merged_0_final_merged_0_update_0_write0_merged_banks_1_raddr;
  logic [0:0] final_merged_0_final_merged_0_update_0_write0_merged_banks_1_wen;
  logic [31:0] final_merged_0_final_merged_0_update_0_write0_merged_banks_1_wdata;
  logic [0:0] final_merged_0_final_merged_0_update_0_write0_merged_banks_1_clk;
  logic [0:0] final_merged_0_final_merged_0_update_0_write0_merged_banks_1_rst;
  logic [31:0] final_merged_0_final_merged_0_update_0_write0_merged_banks_1_rdata;
  bank_32_1 final_merged_0_final_merged_0_update_0_write0_merged_banks_1(.raddr(final_merged_0_final_merged_0_update_0_write0_merged_banks_1_raddr), .wen(final_merged_0_final_merged_0_update_0_write0_merged_banks_1_wen), .wdata(final_merged_0_final_merged_0_update_0_write0_merged_banks_1_wdata), .clk(final_merged_0_final_merged_0_update_0_write0_merged_banks_1_clk), .rst(final_merged_0_final_merged_0_update_0_write0_merged_banks_1_rst), .rdata(final_merged_0_final_merged_0_update_0_write0_merged_banks_1_rdata));
  assign final_merged_0_final_merged_0_update_0_write0_merged_banks_1_clk = clk;
  assign final_merged_0_final_merged_0_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to final_merged_0_final_merged_0_update_0_write0_merged_banks_1

  // selector_pyramid_synthetic_exposure_fusion_rd0_select
  logic [0:0] selector_pyramid_synthetic_exposure_fusion_rd0_select_clk;
  logic [0:0] selector_pyramid_synthetic_exposure_fusion_rd0_select_rst;
  logic [31:0] selector_pyramid_synthetic_exposure_fusion_rd0_select_d0;
  logic [31:0] selector_pyramid_synthetic_exposure_fusion_rd0_select_d1;
  logic [31:0] selector_pyramid_synthetic_exposure_fusion_rd0_select_out;
  pyramid_synthetic_exposure_fusion_rd0_select selector_pyramid_synthetic_exposure_fusion_rd0_select(.clk(selector_pyramid_synthetic_exposure_fusion_rd0_select_clk), .rst(selector_pyramid_synthetic_exposure_fusion_rd0_select_rst), .d0(selector_pyramid_synthetic_exposure_fusion_rd0_select_d0), .d1(selector_pyramid_synthetic_exposure_fusion_rd0_select_d1), .out(selector_pyramid_synthetic_exposure_fusion_rd0_select_out));
  assign selector_pyramid_synthetic_exposure_fusion_rd0_select_clk = clk;
  assign selector_pyramid_synthetic_exposure_fusion_rd0_select_rst = rst;
  // Bindings to selector_pyramid_synthetic_exposure_fusion_rd0_select



endmodule


module final_merged_1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0
  logic [6:0] final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_raddr;
  logic [0:0] final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_wen;
  logic [31:0] final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_wdata;
  logic [0:0] final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_clk;
  logic [0:0] final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_rst;
  logic [31:0] final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_rdata;
  bank_32_100 final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0(.raddr(final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_raddr), .wen(final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_wen), .wdata(final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_wdata), .clk(final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_clk), .rst(final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_rst), .rdata(final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_rdata));
  assign final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_clk = clk;
  assign final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_rst = rst;
  // Bindings to final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0

  // selector_final_merged_0_rd0_select
  logic [0:0] selector_final_merged_0_rd0_select_clk;
  logic [0:0] selector_final_merged_0_rd0_select_rst;
  logic [31:0] selector_final_merged_0_rd0_select_d0;
  logic [31:0] selector_final_merged_0_rd0_select_d1;
  logic [31:0] selector_final_merged_0_rd0_select_out;
  final_merged_0_rd0_select selector_final_merged_0_rd0_select(.clk(selector_final_merged_0_rd0_select_clk), .rst(selector_final_merged_0_rd0_select_rst), .d0(selector_final_merged_0_rd0_select_d0), .d1(selector_final_merged_0_rd0_select_d1), .out(selector_final_merged_0_rd0_select_out));
  assign selector_final_merged_0_rd0_select_clk = clk;
  assign selector_final_merged_0_rd0_select_rst = rst;
  // Bindings to selector_final_merged_0_rd0_select



endmodule


module bank_32_100(input [6:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 100;

  reg [31:0] data [99:0];

  reg [31:0] rdata_d;

  reg [6:0] waddr;

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


module pyramid_synthetic_exposure_fusion_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module fused_level_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // fused_level_0_fused_level_0_update_0_write0_merged_banks_1
  logic [-1:0] fused_level_0_fused_level_0_update_0_write0_merged_banks_1_raddr;
  logic [0:0] fused_level_0_fused_level_0_update_0_write0_merged_banks_1_wen;
  logic [31:0] fused_level_0_fused_level_0_update_0_write0_merged_banks_1_wdata;
  logic [0:0] fused_level_0_fused_level_0_update_0_write0_merged_banks_1_clk;
  logic [0:0] fused_level_0_fused_level_0_update_0_write0_merged_banks_1_rst;
  logic [31:0] fused_level_0_fused_level_0_update_0_write0_merged_banks_1_rdata;
  bank_32_1 fused_level_0_fused_level_0_update_0_write0_merged_banks_1(.raddr(fused_level_0_fused_level_0_update_0_write0_merged_banks_1_raddr), .wen(fused_level_0_fused_level_0_update_0_write0_merged_banks_1_wen), .wdata(fused_level_0_fused_level_0_update_0_write0_merged_banks_1_wdata), .clk(fused_level_0_fused_level_0_update_0_write0_merged_banks_1_clk), .rst(fused_level_0_fused_level_0_update_0_write0_merged_banks_1_rst), .rdata(fused_level_0_fused_level_0_update_0_write0_merged_banks_1_rdata));
  assign fused_level_0_fused_level_0_update_0_write0_merged_banks_1_clk = clk;
  assign fused_level_0_fused_level_0_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to fused_level_0_fused_level_0_update_0_write0_merged_banks_1

  // selector_final_merged_0_rd0_select
  logic [0:0] selector_final_merged_0_rd0_select_clk;
  logic [0:0] selector_final_merged_0_rd0_select_rst;
  logic [31:0] selector_final_merged_0_rd0_select_d0;
  logic [31:0] selector_final_merged_0_rd0_select_d1;
  logic [31:0] selector_final_merged_0_rd0_select_out;
  final_merged_0_rd0_select selector_final_merged_0_rd0_select(.clk(selector_final_merged_0_rd0_select_clk), .rst(selector_final_merged_0_rd0_select_rst), .d0(selector_final_merged_0_rd0_select_d0), .d1(selector_final_merged_0_rd0_select_d1), .out(selector_final_merged_0_rd0_select_out));
  assign selector_final_merged_0_rd0_select_clk = clk;
  assign selector_final_merged_0_rd0_select_rst = rst;
  // Bindings to selector_final_merged_0_rd0_select



endmodule


module bank_32_50(input [5:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 50;

  reg [31:0] data [49:0];

  reg [31:0] rdata_d;

  reg [5:0] waddr;

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


module final_merged_2(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0
  logic [5:0] final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_raddr;
  logic [0:0] final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_wen;
  logic [31:0] final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_wdata;
  logic [0:0] final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_clk;
  logic [0:0] final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_rst;
  logic [31:0] final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_rdata;
  bank_32_50 final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0(.raddr(final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_raddr), .wen(final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_wen), .wdata(final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_wdata), .clk(final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_clk), .rst(final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_rst), .rdata(final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_rdata));
  assign final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_clk = clk;
  assign final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_rst = rst;
  // Bindings to final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0

  // selector_final_merged_1_rd0_select
  logic [0:0] selector_final_merged_1_rd0_select_clk;
  logic [0:0] selector_final_merged_1_rd0_select_rst;
  logic [31:0] selector_final_merged_1_rd0_select_d0;
  logic [31:0] selector_final_merged_1_rd0_select_d1;
  logic [31:0] selector_final_merged_1_rd0_select_out;
  final_merged_1_rd0_select selector_final_merged_1_rd0_select(.clk(selector_final_merged_1_rd0_select_clk), .rst(selector_final_merged_1_rd0_select_rst), .d0(selector_final_merged_1_rd0_select_d0), .d1(selector_final_merged_1_rd0_select_d1), .out(selector_final_merged_1_rd0_select_out));
  assign selector_final_merged_1_rd0_select_clk = clk;
  assign selector_final_merged_1_rd0_select_rst = rst;
  // Bindings to selector_final_merged_1_rd0_select



endmodule


module weight_sums(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_bright_weights_normed_rd0_select
  logic [0:0] selector_bright_weights_normed_rd0_select_clk;
  logic [0:0] selector_bright_weights_normed_rd0_select_rst;
  logic [31:0] selector_bright_weights_normed_rd0_select_d0;
  logic [31:0] selector_bright_weights_normed_rd0_select_d1;
  logic [31:0] selector_bright_weights_normed_rd0_select_out;
  bright_weights_normed_rd0_select selector_bright_weights_normed_rd0_select(.clk(selector_bright_weights_normed_rd0_select_clk), .rst(selector_bright_weights_normed_rd0_select_rst), .d0(selector_bright_weights_normed_rd0_select_d0), .d1(selector_bright_weights_normed_rd0_select_d1), .out(selector_bright_weights_normed_rd0_select_out));
  assign selector_bright_weights_normed_rd0_select_clk = clk;
  assign selector_bright_weights_normed_rd0_select_rst = rst;
  // Bindings to selector_bright_weights_normed_rd0_select

  // weight_sums_weight_sums_update_0_write0_merged_banks_2
  logic [-1:0] weight_sums_weight_sums_update_0_write0_merged_banks_2_raddr;
  logic [0:0] weight_sums_weight_sums_update_0_write0_merged_banks_2_wen;
  logic [31:0] weight_sums_weight_sums_update_0_write0_merged_banks_2_wdata;
  logic [0:0] weight_sums_weight_sums_update_0_write0_merged_banks_2_clk;
  logic [0:0] weight_sums_weight_sums_update_0_write0_merged_banks_2_rst;
  logic [31:0] weight_sums_weight_sums_update_0_write0_merged_banks_2_rdata;
  bank_32_1 weight_sums_weight_sums_update_0_write0_merged_banks_2(.raddr(weight_sums_weight_sums_update_0_write0_merged_banks_2_raddr), .wen(weight_sums_weight_sums_update_0_write0_merged_banks_2_wen), .wdata(weight_sums_weight_sums_update_0_write0_merged_banks_2_wdata), .clk(weight_sums_weight_sums_update_0_write0_merged_banks_2_clk), .rst(weight_sums_weight_sums_update_0_write0_merged_banks_2_rst), .rdata(weight_sums_weight_sums_update_0_write0_merged_banks_2_rdata));
  assign weight_sums_weight_sums_update_0_write0_merged_banks_2_clk = clk;
  assign weight_sums_weight_sums_update_0_write0_merged_banks_2_rst = rst;
  // Bindings to weight_sums_weight_sums_update_0_write0_merged_banks_2

  // selector_dark_weights_normed_rd0_select
  logic [0:0] selector_dark_weights_normed_rd0_select_clk;
  logic [0:0] selector_dark_weights_normed_rd0_select_rst;
  logic [31:0] selector_dark_weights_normed_rd0_select_d0;
  logic [31:0] selector_dark_weights_normed_rd0_select_d1;
  logic [31:0] selector_dark_weights_normed_rd0_select_out;
  dark_weights_normed_rd0_select selector_dark_weights_normed_rd0_select(.clk(selector_dark_weights_normed_rd0_select_clk), .rst(selector_dark_weights_normed_rd0_select_rst), .d0(selector_dark_weights_normed_rd0_select_d0), .d1(selector_dark_weights_normed_rd0_select_d1), .out(selector_dark_weights_normed_rd0_select_out));
  assign selector_dark_weights_normed_rd0_select_clk = clk;
  assign selector_dark_weights_normed_rd0_select_rst = rst;
  // Bindings to selector_dark_weights_normed_rd0_select



endmodule


module final_merged_0_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module dark_weights_normed_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_gauss_ds_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_gauss_blur_3_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_weights_normed_gauss_ds_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_weights_normed_gauss_blur_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_gauss_ds_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_gauss_blur_3_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_weights_normed_gauss_blur_3_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_gauss_ds_3_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_weights_normed_gauss_ds_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_weights_normed_gauss_blur_3_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_gauss_ds_3_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_laplace_diff_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_laplace_diff_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_laplace_diff_0_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_laplace_us_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_laplace_us_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_laplace_diff_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_laplace_us_0_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_laplace_diff_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_laplace_diff_0_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module final_merged_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module fused_level_0_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module final_merged_0_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module final_merged_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module pyramid_synthetic_exposure_fusion_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module weight_sums_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_gauss_blur_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_weights_normed_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_gauss_blur_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_gauss_ds_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_gauss_blur_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_weights_normed_gauss_blur_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_gauss_ds_1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_gauss_blur_2_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module in_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bright_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module dark_weights_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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



