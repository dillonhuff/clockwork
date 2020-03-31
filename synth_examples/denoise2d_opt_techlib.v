module u_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module g(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // g_g_update_0_write0_merged_banks_4
  logic [6:0] g_g_update_0_write0_merged_banks_4_raddr;
  logic [0:0] g_g_update_0_write0_merged_banks_4_wen;
  logic [31:0] g_g_update_0_write0_merged_banks_4_wdata;
  logic [0:0] g_g_update_0_write0_merged_banks_4_clk;
  logic [0:0] g_g_update_0_write0_merged_banks_4_rst;
  logic [31:0] g_g_update_0_write0_merged_banks_4_rdata;
  bank_32_66 g_g_update_0_write0_merged_banks_4(.raddr(g_g_update_0_write0_merged_banks_4_raddr), .wen(g_g_update_0_write0_merged_banks_4_wen), .wdata(g_g_update_0_write0_merged_banks_4_wdata), .clk(g_g_update_0_write0_merged_banks_4_clk), .rst(g_g_update_0_write0_merged_banks_4_rst), .rdata(g_g_update_0_write0_merged_banks_4_rdata));
  assign g_g_update_0_write0_merged_banks_4_clk = clk;
  assign g_g_update_0_write0_merged_banks_4_rst = rst;
  // Bindings to g_g_update_0_write0_merged_banks_4

  // selector_denoise2d_rd0_select
  logic [0:0] selector_denoise2d_rd0_select_clk;
  logic [0:0] selector_denoise2d_rd0_select_rst;
  logic [31:0] selector_denoise2d_rd0_select_d0;
  logic [31:0] selector_denoise2d_rd0_select_d1;
  logic [31:0] selector_denoise2d_rd0_select_out;
  denoise2d_rd0_select selector_denoise2d_rd0_select(.clk(selector_denoise2d_rd0_select_clk), .rst(selector_denoise2d_rd0_select_rst), .d0(selector_denoise2d_rd0_select_d0), .d1(selector_denoise2d_rd0_select_d1), .out(selector_denoise2d_rd0_select_out));
  assign selector_denoise2d_rd0_select_clk = clk;
  assign selector_denoise2d_rd0_select_rst = rst;
  // Bindings to selector_denoise2d_rd0_select

  // selector_denoise2d_rd2_select
  logic [0:0] selector_denoise2d_rd2_select_clk;
  logic [0:0] selector_denoise2d_rd2_select_rst;
  logic [31:0] selector_denoise2d_rd2_select_d0;
  logic [31:0] selector_denoise2d_rd2_select_d1;
  logic [31:0] selector_denoise2d_rd2_select_out;
  denoise2d_rd2_select selector_denoise2d_rd2_select(.clk(selector_denoise2d_rd2_select_clk), .rst(selector_denoise2d_rd2_select_rst), .d0(selector_denoise2d_rd2_select_d0), .d1(selector_denoise2d_rd2_select_d1), .out(selector_denoise2d_rd2_select_out));
  assign selector_denoise2d_rd2_select_clk = clk;
  assign selector_denoise2d_rd2_select_rst = rst;
  // Bindings to selector_denoise2d_rd2_select

  // selector_denoise2d_rd1_select
  logic [0:0] selector_denoise2d_rd1_select_clk;
  logic [0:0] selector_denoise2d_rd1_select_rst;
  logic [31:0] selector_denoise2d_rd1_select_d0;
  logic [31:0] selector_denoise2d_rd1_select_d1;
  logic [31:0] selector_denoise2d_rd1_select_out;
  denoise2d_rd1_select selector_denoise2d_rd1_select(.clk(selector_denoise2d_rd1_select_clk), .rst(selector_denoise2d_rd1_select_rst), .d0(selector_denoise2d_rd1_select_d0), .d1(selector_denoise2d_rd1_select_d1), .out(selector_denoise2d_rd1_select_out));
  assign selector_denoise2d_rd1_select_clk = clk;
  assign selector_denoise2d_rd1_select_rst = rst;
  // Bindings to selector_denoise2d_rd1_select

  // selector_denoise2d_rd3_select
  logic [0:0] selector_denoise2d_rd3_select_clk;
  logic [0:0] selector_denoise2d_rd3_select_rst;
  logic [31:0] selector_denoise2d_rd3_select_d0;
  logic [31:0] selector_denoise2d_rd3_select_d1;
  logic [31:0] selector_denoise2d_rd3_select_out;
  denoise2d_rd3_select selector_denoise2d_rd3_select(.clk(selector_denoise2d_rd3_select_clk), .rst(selector_denoise2d_rd3_select_rst), .d0(selector_denoise2d_rd3_select_d0), .d1(selector_denoise2d_rd3_select_d1), .out(selector_denoise2d_rd3_select_out));
  assign selector_denoise2d_rd3_select_clk = clk;
  assign selector_denoise2d_rd3_select_rst = rst;
  // Bindings to selector_denoise2d_rd3_select



endmodule


module diff_d(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_g_rd0_select
  logic [0:0] selector_g_rd0_select_clk;
  logic [0:0] selector_g_rd0_select_rst;
  logic [31:0] selector_g_rd0_select_d0;
  logic [31:0] selector_g_rd0_select_d1;
  logic [31:0] selector_g_rd0_select_out;
  g_rd0_select selector_g_rd0_select(.clk(selector_g_rd0_select_clk), .rst(selector_g_rd0_select_rst), .d0(selector_g_rd0_select_d0), .d1(selector_g_rd0_select_d1), .out(selector_g_rd0_select_out));
  assign selector_g_rd0_select_clk = clk;
  assign selector_g_rd0_select_rst = rst;
  // Bindings to selector_g_rd0_select

  // diff_d_diff_d_update_0_write0_merged_banks_1
  logic [-1:0] diff_d_diff_d_update_0_write0_merged_banks_1_raddr;
  logic [0:0] diff_d_diff_d_update_0_write0_merged_banks_1_wen;
  logic [31:0] diff_d_diff_d_update_0_write0_merged_banks_1_wdata;
  logic [0:0] diff_d_diff_d_update_0_write0_merged_banks_1_clk;
  logic [0:0] diff_d_diff_d_update_0_write0_merged_banks_1_rst;
  logic [31:0] diff_d_diff_d_update_0_write0_merged_banks_1_rdata;
  bank_32_1 diff_d_diff_d_update_0_write0_merged_banks_1(.raddr(diff_d_diff_d_update_0_write0_merged_banks_1_raddr), .wen(diff_d_diff_d_update_0_write0_merged_banks_1_wen), .wdata(diff_d_diff_d_update_0_write0_merged_banks_1_wdata), .clk(diff_d_diff_d_update_0_write0_merged_banks_1_clk), .rst(diff_d_diff_d_update_0_write0_merged_banks_1_rst), .rdata(diff_d_diff_d_update_0_write0_merged_banks_1_rdata));
  assign diff_d_diff_d_update_0_write0_merged_banks_1_clk = clk;
  assign diff_d_diff_d_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to diff_d_diff_d_update_0_write0_merged_banks_1



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


module diff_l(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // diff_l_diff_l_update_0_write0_merged_banks_1
  logic [-1:0] diff_l_diff_l_update_0_write0_merged_banks_1_raddr;
  logic [0:0] diff_l_diff_l_update_0_write0_merged_banks_1_wen;
  logic [31:0] diff_l_diff_l_update_0_write0_merged_banks_1_wdata;
  logic [0:0] diff_l_diff_l_update_0_write0_merged_banks_1_clk;
  logic [0:0] diff_l_diff_l_update_0_write0_merged_banks_1_rst;
  logic [31:0] diff_l_diff_l_update_0_write0_merged_banks_1_rdata;
  bank_32_1 diff_l_diff_l_update_0_write0_merged_banks_1(.raddr(diff_l_diff_l_update_0_write0_merged_banks_1_raddr), .wen(diff_l_diff_l_update_0_write0_merged_banks_1_wen), .wdata(diff_l_diff_l_update_0_write0_merged_banks_1_wdata), .clk(diff_l_diff_l_update_0_write0_merged_banks_1_clk), .rst(diff_l_diff_l_update_0_write0_merged_banks_1_rst), .rdata(diff_l_diff_l_update_0_write0_merged_banks_1_rdata));
  assign diff_l_diff_l_update_0_write0_merged_banks_1_clk = clk;
  assign diff_l_diff_l_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to diff_l_diff_l_update_0_write0_merged_banks_1

  // selector_g_rd0_select
  logic [0:0] selector_g_rd0_select_clk;
  logic [0:0] selector_g_rd0_select_rst;
  logic [31:0] selector_g_rd0_select_d0;
  logic [31:0] selector_g_rd0_select_d1;
  logic [31:0] selector_g_rd0_select_out;
  g_rd0_select selector_g_rd0_select(.clk(selector_g_rd0_select_clk), .rst(selector_g_rd0_select_rst), .d0(selector_g_rd0_select_d0), .d1(selector_g_rd0_select_d1), .out(selector_g_rd0_select_out));
  assign selector_g_rd0_select_clk = clk;
  assign selector_g_rd0_select_rst = rst;
  // Bindings to selector_g_rd0_select



endmodule


module f(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_r0_rd0_select
  logic [0:0] selector_r0_rd0_select_clk;
  logic [0:0] selector_r0_rd0_select_rst;
  logic [31:0] selector_r0_rd0_select_d0;
  logic [31:0] selector_r0_rd0_select_d1;
  logic [31:0] selector_r0_rd0_select_out;
  r0_rd0_select selector_r0_rd0_select(.clk(selector_r0_rd0_select_clk), .rst(selector_r0_rd0_select_rst), .d0(selector_r0_rd0_select_d0), .d1(selector_r0_rd0_select_d1), .out(selector_r0_rd0_select_out));
  assign selector_r0_rd0_select_clk = clk;
  assign selector_r0_rd0_select_rst = rst;
  // Bindings to selector_r0_rd0_select

  // f_f_update_0_write0_merged_banks_2
  logic [-1:0] f_f_update_0_write0_merged_banks_2_raddr;
  logic [0:0] f_f_update_0_write0_merged_banks_2_wen;
  logic [31:0] f_f_update_0_write0_merged_banks_2_wdata;
  logic [0:0] f_f_update_0_write0_merged_banks_2_clk;
  logic [0:0] f_f_update_0_write0_merged_banks_2_rst;
  logic [31:0] f_f_update_0_write0_merged_banks_2_rdata;
  bank_32_1 f_f_update_0_write0_merged_banks_2(.raddr(f_f_update_0_write0_merged_banks_2_raddr), .wen(f_f_update_0_write0_merged_banks_2_wen), .wdata(f_f_update_0_write0_merged_banks_2_wdata), .clk(f_f_update_0_write0_merged_banks_2_clk), .rst(f_f_update_0_write0_merged_banks_2_rst), .rdata(f_f_update_0_write0_merged_banks_2_rdata));
  assign f_f_update_0_write0_merged_banks_2_clk = clk;
  assign f_f_update_0_write0_merged_banks_2_rst = rst;
  // Bindings to f_f_update_0_write0_merged_banks_2

  // selector_denoise2d_rd0_select
  logic [0:0] selector_denoise2d_rd0_select_clk;
  logic [0:0] selector_denoise2d_rd0_select_rst;
  logic [31:0] selector_denoise2d_rd0_select_d0;
  logic [31:0] selector_denoise2d_rd0_select_d1;
  logic [31:0] selector_denoise2d_rd0_select_out;
  denoise2d_rd0_select selector_denoise2d_rd0_select(.clk(selector_denoise2d_rd0_select_clk), .rst(selector_denoise2d_rd0_select_rst), .d0(selector_denoise2d_rd0_select_d0), .d1(selector_denoise2d_rd0_select_d1), .out(selector_denoise2d_rd0_select_out));
  assign selector_denoise2d_rd0_select_clk = clk;
  assign selector_denoise2d_rd0_select_rst = rst;
  // Bindings to selector_denoise2d_rd0_select



endmodule


module diff_qwe(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // diff_qwe_diff_qwe_update_0_write0_merged_banks_1
  logic [-1:0] diff_qwe_diff_qwe_update_0_write0_merged_banks_1_raddr;
  logic [0:0] diff_qwe_diff_qwe_update_0_write0_merged_banks_1_wen;
  logic [31:0] diff_qwe_diff_qwe_update_0_write0_merged_banks_1_wdata;
  logic [0:0] diff_qwe_diff_qwe_update_0_write0_merged_banks_1_clk;
  logic [0:0] diff_qwe_diff_qwe_update_0_write0_merged_banks_1_rst;
  logic [31:0] diff_qwe_diff_qwe_update_0_write0_merged_banks_1_rdata;
  bank_32_1 diff_qwe_diff_qwe_update_0_write0_merged_banks_1(.raddr(diff_qwe_diff_qwe_update_0_write0_merged_banks_1_raddr), .wen(diff_qwe_diff_qwe_update_0_write0_merged_banks_1_wen), .wdata(diff_qwe_diff_qwe_update_0_write0_merged_banks_1_wdata), .clk(diff_qwe_diff_qwe_update_0_write0_merged_banks_1_clk), .rst(diff_qwe_diff_qwe_update_0_write0_merged_banks_1_rst), .rdata(diff_qwe_diff_qwe_update_0_write0_merged_banks_1_rdata));
  assign diff_qwe_diff_qwe_update_0_write0_merged_banks_1_clk = clk;
  assign diff_qwe_diff_qwe_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to diff_qwe_diff_qwe_update_0_write0_merged_banks_1

  // selector_g_rd0_select
  logic [0:0] selector_g_rd0_select_clk;
  logic [0:0] selector_g_rd0_select_rst;
  logic [31:0] selector_g_rd0_select_d0;
  logic [31:0] selector_g_rd0_select_d1;
  logic [31:0] selector_g_rd0_select_out;
  g_rd0_select selector_g_rd0_select(.clk(selector_g_rd0_select_clk), .rst(selector_g_rd0_select_rst), .d0(selector_g_rd0_select_d0), .d1(selector_g_rd0_select_d1), .out(selector_g_rd0_select_out));
  assign selector_g_rd0_select_clk = clk;
  assign selector_g_rd0_select_rst = rst;
  // Bindings to selector_g_rd0_select



endmodule


module diff_r(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_g_rd0_select
  logic [0:0] selector_g_rd0_select_clk;
  logic [0:0] selector_g_rd0_select_rst;
  logic [31:0] selector_g_rd0_select_d0;
  logic [31:0] selector_g_rd0_select_d1;
  logic [31:0] selector_g_rd0_select_out;
  g_rd0_select selector_g_rd0_select(.clk(selector_g_rd0_select_clk), .rst(selector_g_rd0_select_rst), .d0(selector_g_rd0_select_d0), .d1(selector_g_rd0_select_d1), .out(selector_g_rd0_select_out));
  assign selector_g_rd0_select_clk = clk;
  assign selector_g_rd0_select_rst = rst;
  // Bindings to selector_g_rd0_select

  // diff_r_diff_r_update_0_write0_merged_banks_1
  logic [-1:0] diff_r_diff_r_update_0_write0_merged_banks_1_raddr;
  logic [0:0] diff_r_diff_r_update_0_write0_merged_banks_1_wen;
  logic [31:0] diff_r_diff_r_update_0_write0_merged_banks_1_wdata;
  logic [0:0] diff_r_diff_r_update_0_write0_merged_banks_1_clk;
  logic [0:0] diff_r_diff_r_update_0_write0_merged_banks_1_rst;
  logic [31:0] diff_r_diff_r_update_0_write0_merged_banks_1_rdata;
  bank_32_1 diff_r_diff_r_update_0_write0_merged_banks_1(.raddr(diff_r_diff_r_update_0_write0_merged_banks_1_raddr), .wen(diff_r_diff_r_update_0_write0_merged_banks_1_wen), .wdata(diff_r_diff_r_update_0_write0_merged_banks_1_wdata), .clk(diff_r_diff_r_update_0_write0_merged_banks_1_clk), .rst(diff_r_diff_r_update_0_write0_merged_banks_1_rst), .rdata(diff_r_diff_r_update_0_write0_merged_banks_1_rdata));
  assign diff_r_diff_r_update_0_write0_merged_banks_1_clk = clk;
  assign diff_r_diff_r_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to diff_r_diff_r_update_0_write0_merged_banks_1



endmodule


module g_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module f_off_chip(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module bank_32_66(input [6:0] raddr, input [0:0] wen, input [31:0] wdata, input [0:0] clk, input [0:0] rst, output [31:0] rdata);
  localparam DEPTH = 66;

  reg [31:0] data [65:0];

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


module denoise2d(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module r1(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // r1_r1_update_0_write0_merged_banks_1
  logic [-1:0] r1_r1_update_0_write0_merged_banks_1_raddr;
  logic [0:0] r1_r1_update_0_write0_merged_banks_1_wen;
  logic [31:0] r1_r1_update_0_write0_merged_banks_1_wdata;
  logic [0:0] r1_r1_update_0_write0_merged_banks_1_clk;
  logic [0:0] r1_r1_update_0_write0_merged_banks_1_rst;
  logic [31:0] r1_r1_update_0_write0_merged_banks_1_rdata;
  bank_32_1 r1_r1_update_0_write0_merged_banks_1(.raddr(r1_r1_update_0_write0_merged_banks_1_raddr), .wen(r1_r1_update_0_write0_merged_banks_1_wen), .wdata(r1_r1_update_0_write0_merged_banks_1_wdata), .clk(r1_r1_update_0_write0_merged_banks_1_clk), .rst(r1_r1_update_0_write0_merged_banks_1_rst), .rdata(r1_r1_update_0_write0_merged_banks_1_rdata));
  assign r1_r1_update_0_write0_merged_banks_1_clk = clk;
  assign r1_r1_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to r1_r1_update_0_write0_merged_banks_1

  // selector_denoise2d_rd0_select
  logic [0:0] selector_denoise2d_rd0_select_clk;
  logic [0:0] selector_denoise2d_rd0_select_rst;
  logic [31:0] selector_denoise2d_rd0_select_d0;
  logic [31:0] selector_denoise2d_rd0_select_d1;
  logic [31:0] selector_denoise2d_rd0_select_out;
  denoise2d_rd0_select selector_denoise2d_rd0_select(.clk(selector_denoise2d_rd0_select_clk), .rst(selector_denoise2d_rd0_select_rst), .d0(selector_denoise2d_rd0_select_d0), .d1(selector_denoise2d_rd0_select_d1), .out(selector_denoise2d_rd0_select_out));
  assign selector_denoise2d_rd0_select_clk = clk;
  assign selector_denoise2d_rd0_select_rst = rst;
  // Bindings to selector_denoise2d_rd0_select



endmodule


module r0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // r0_r0_update_0_write0_merged_banks_1
  logic [-1:0] r0_r0_update_0_write0_merged_banks_1_raddr;
  logic [0:0] r0_r0_update_0_write0_merged_banks_1_wen;
  logic [31:0] r0_r0_update_0_write0_merged_banks_1_wdata;
  logic [0:0] r0_r0_update_0_write0_merged_banks_1_clk;
  logic [0:0] r0_r0_update_0_write0_merged_banks_1_rst;
  logic [31:0] r0_r0_update_0_write0_merged_banks_1_rdata;
  bank_32_1 r0_r0_update_0_write0_merged_banks_1(.raddr(r0_r0_update_0_write0_merged_banks_1_raddr), .wen(r0_r0_update_0_write0_merged_banks_1_wen), .wdata(r0_r0_update_0_write0_merged_banks_1_wdata), .clk(r0_r0_update_0_write0_merged_banks_1_clk), .rst(r0_r0_update_0_write0_merged_banks_1_rst), .rdata(r0_r0_update_0_write0_merged_banks_1_rdata));
  assign r0_r0_update_0_write0_merged_banks_1_clk = clk;
  assign r0_r0_update_0_write0_merged_banks_1_rst = rst;
  // Bindings to r0_r0_update_0_write0_merged_banks_1

  // selector_r1_rd0_select
  logic [0:0] selector_r1_rd0_select_clk;
  logic [0:0] selector_r1_rd0_select_rst;
  logic [31:0] selector_r1_rd0_select_d0;
  logic [31:0] selector_r1_rd0_select_d1;
  logic [31:0] selector_r1_rd0_select_out;
  r1_rd0_select selector_r1_rd0_select(.clk(selector_r1_rd0_select_clk), .rst(selector_r1_rd0_select_rst), .d0(selector_r1_rd0_select_d0), .d1(selector_r1_rd0_select_d1), .out(selector_r1_rd0_select_out));
  assign selector_r1_rd0_select_clk = clk;
  assign selector_r1_rd0_select_rst = rst;
  // Bindings to selector_r1_rd0_select



endmodule


module r1_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 0;
    end
  end

endmodule


module r0_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module diff_r_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = (29 - d0 >= 0) ? (34) : (-30 + d0 == 0) ? (34) : 0;
    end
  end

endmodule


module diff_l_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module r0_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 70;
    end
  end

endmodule


module diff_d_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module g_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module denoise2d_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module r1_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module u(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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
  // selector_diff_l_rd1_select
  logic [0:0] selector_diff_l_rd1_select_clk;
  logic [0:0] selector_diff_l_rd1_select_rst;
  logic [31:0] selector_diff_l_rd1_select_d0;
  logic [31:0] selector_diff_l_rd1_select_d1;
  logic [31:0] selector_diff_l_rd1_select_out;
  diff_l_rd1_select selector_diff_l_rd1_select(.clk(selector_diff_l_rd1_select_clk), .rst(selector_diff_l_rd1_select_rst), .d0(selector_diff_l_rd1_select_d0), .d1(selector_diff_l_rd1_select_d1), .out(selector_diff_l_rd1_select_out));
  assign selector_diff_l_rd1_select_clk = clk;
  assign selector_diff_l_rd1_select_rst = rst;
  // Bindings to selector_diff_l_rd1_select

  // selector_diff_r_rd1_select
  logic [0:0] selector_diff_r_rd1_select_clk;
  logic [0:0] selector_diff_r_rd1_select_rst;
  logic [31:0] selector_diff_r_rd1_select_d0;
  logic [31:0] selector_diff_r_rd1_select_d1;
  logic [31:0] selector_diff_r_rd1_select_out;
  diff_r_rd1_select selector_diff_r_rd1_select(.clk(selector_diff_r_rd1_select_clk), .rst(selector_diff_r_rd1_select_rst), .d0(selector_diff_r_rd1_select_d0), .d1(selector_diff_r_rd1_select_d1), .out(selector_diff_r_rd1_select_out));
  assign selector_diff_r_rd1_select_clk = clk;
  assign selector_diff_r_rd1_select_rst = rst;
  // Bindings to selector_diff_r_rd1_select

  // selector_diff_r_rd0_select
  logic [0:0] selector_diff_r_rd0_select_clk;
  logic [0:0] selector_diff_r_rd0_select_rst;
  logic [31:0] selector_diff_r_rd0_select_d0;
  logic [31:0] selector_diff_r_rd0_select_d1;
  logic [31:0] selector_diff_r_rd0_select_out;
  diff_r_rd0_select selector_diff_r_rd0_select(.clk(selector_diff_r_rd0_select_clk), .rst(selector_diff_r_rd0_select_rst), .d0(selector_diff_r_rd0_select_d0), .d1(selector_diff_r_rd0_select_d1), .out(selector_diff_r_rd0_select_out));
  assign selector_diff_r_rd0_select_clk = clk;
  assign selector_diff_r_rd0_select_rst = rst;
  // Bindings to selector_diff_r_rd0_select

  // selector_diff_qwe_rd1_select
  logic [0:0] selector_diff_qwe_rd1_select_clk;
  logic [0:0] selector_diff_qwe_rd1_select_rst;
  logic [31:0] selector_diff_qwe_rd1_select_d0;
  logic [31:0] selector_diff_qwe_rd1_select_d1;
  logic [31:0] selector_diff_qwe_rd1_select_out;
  diff_qwe_rd1_select selector_diff_qwe_rd1_select(.clk(selector_diff_qwe_rd1_select_clk), .rst(selector_diff_qwe_rd1_select_rst), .d0(selector_diff_qwe_rd1_select_d0), .d1(selector_diff_qwe_rd1_select_d1), .out(selector_diff_qwe_rd1_select_out));
  assign selector_diff_qwe_rd1_select_clk = clk;
  assign selector_diff_qwe_rd1_select_rst = rst;
  // Bindings to selector_diff_qwe_rd1_select

  // selector_diff_l_rd0_select
  logic [0:0] selector_diff_l_rd0_select_clk;
  logic [0:0] selector_diff_l_rd0_select_rst;
  logic [31:0] selector_diff_l_rd0_select_d0;
  logic [31:0] selector_diff_l_rd0_select_d1;
  logic [31:0] selector_diff_l_rd0_select_out;
  diff_l_rd0_select selector_diff_l_rd0_select(.clk(selector_diff_l_rd0_select_clk), .rst(selector_diff_l_rd0_select_rst), .d0(selector_diff_l_rd0_select_d0), .d1(selector_diff_l_rd0_select_d1), .out(selector_diff_l_rd0_select_out));
  assign selector_diff_l_rd0_select_clk = clk;
  assign selector_diff_l_rd0_select_rst = rst;
  // Bindings to selector_diff_l_rd0_select

  // selector_r0_rd0_select
  logic [0:0] selector_r0_rd0_select_clk;
  logic [0:0] selector_r0_rd0_select_rst;
  logic [31:0] selector_r0_rd0_select_d0;
  logic [31:0] selector_r0_rd0_select_d1;
  logic [31:0] selector_r0_rd0_select_out;
  r0_rd0_select selector_r0_rd0_select(.clk(selector_r0_rd0_select_clk), .rst(selector_r0_rd0_select_rst), .d0(selector_r0_rd0_select_d0), .d1(selector_r0_rd0_select_d1), .out(selector_r0_rd0_select_out));
  assign selector_r0_rd0_select_clk = clk;
  assign selector_r0_rd0_select_rst = rst;
  // Bindings to selector_r0_rd0_select

  // selector_denoise2d_rd1_select
  logic [0:0] selector_denoise2d_rd1_select_clk;
  logic [0:0] selector_denoise2d_rd1_select_rst;
  logic [31:0] selector_denoise2d_rd1_select_d0;
  logic [31:0] selector_denoise2d_rd1_select_d1;
  logic [31:0] selector_denoise2d_rd1_select_out;
  denoise2d_rd1_select selector_denoise2d_rd1_select(.clk(selector_denoise2d_rd1_select_clk), .rst(selector_denoise2d_rd1_select_rst), .d0(selector_denoise2d_rd1_select_d0), .d1(selector_denoise2d_rd1_select_d1), .out(selector_denoise2d_rd1_select_out));
  assign selector_denoise2d_rd1_select_clk = clk;
  assign selector_denoise2d_rd1_select_rst = rst;
  // Bindings to selector_denoise2d_rd1_select

  // u_u_update_0_write0_merged_banks_13
  logic [6:0] u_u_update_0_write0_merged_banks_13_raddr;
  logic [0:0] u_u_update_0_write0_merged_banks_13_wen;
  logic [31:0] u_u_update_0_write0_merged_banks_13_wdata;
  logic [0:0] u_u_update_0_write0_merged_banks_13_clk;
  logic [0:0] u_u_update_0_write0_merged_banks_13_rst;
  logic [31:0] u_u_update_0_write0_merged_banks_13_rdata;
  bank_32_105 u_u_update_0_write0_merged_banks_13(.raddr(u_u_update_0_write0_merged_banks_13_raddr), .wen(u_u_update_0_write0_merged_banks_13_wen), .wdata(u_u_update_0_write0_merged_banks_13_wdata), .clk(u_u_update_0_write0_merged_banks_13_clk), .rst(u_u_update_0_write0_merged_banks_13_rst), .rdata(u_u_update_0_write0_merged_banks_13_rdata));
  assign u_u_update_0_write0_merged_banks_13_clk = clk;
  assign u_u_update_0_write0_merged_banks_13_rst = rst;
  // Bindings to u_u_update_0_write0_merged_banks_13

  // selector_diff_d_rd0_select
  logic [0:0] selector_diff_d_rd0_select_clk;
  logic [0:0] selector_diff_d_rd0_select_rst;
  logic [31:0] selector_diff_d_rd0_select_d0;
  logic [31:0] selector_diff_d_rd0_select_d1;
  logic [31:0] selector_diff_d_rd0_select_out;
  diff_d_rd0_select selector_diff_d_rd0_select(.clk(selector_diff_d_rd0_select_clk), .rst(selector_diff_d_rd0_select_rst), .d0(selector_diff_d_rd0_select_d0), .d1(selector_diff_d_rd0_select_d1), .out(selector_diff_d_rd0_select_out));
  assign selector_diff_d_rd0_select_clk = clk;
  assign selector_diff_d_rd0_select_rst = rst;
  // Bindings to selector_diff_d_rd0_select

  // selector_denoise2d_rd2_select
  logic [0:0] selector_denoise2d_rd2_select_clk;
  logic [0:0] selector_denoise2d_rd2_select_rst;
  logic [31:0] selector_denoise2d_rd2_select_d0;
  logic [31:0] selector_denoise2d_rd2_select_d1;
  logic [31:0] selector_denoise2d_rd2_select_out;
  denoise2d_rd2_select selector_denoise2d_rd2_select(.clk(selector_denoise2d_rd2_select_clk), .rst(selector_denoise2d_rd2_select_rst), .d0(selector_denoise2d_rd2_select_d0), .d1(selector_denoise2d_rd2_select_d1), .out(selector_denoise2d_rd2_select_out));
  assign selector_denoise2d_rd2_select_clk = clk;
  assign selector_denoise2d_rd2_select_rst = rst;
  // Bindings to selector_denoise2d_rd2_select

  // selector_diff_d_rd1_select
  logic [0:0] selector_diff_d_rd1_select_clk;
  logic [0:0] selector_diff_d_rd1_select_rst;
  logic [31:0] selector_diff_d_rd1_select_d0;
  logic [31:0] selector_diff_d_rd1_select_d1;
  logic [31:0] selector_diff_d_rd1_select_out;
  diff_d_rd1_select selector_diff_d_rd1_select(.clk(selector_diff_d_rd1_select_clk), .rst(selector_diff_d_rd1_select_rst), .d0(selector_diff_d_rd1_select_d0), .d1(selector_diff_d_rd1_select_d1), .out(selector_diff_d_rd1_select_out));
  assign selector_diff_d_rd1_select_clk = clk;
  assign selector_diff_d_rd1_select_rst = rst;
  // Bindings to selector_diff_d_rd1_select

  // selector_denoise2d_rd0_select
  logic [0:0] selector_denoise2d_rd0_select_clk;
  logic [0:0] selector_denoise2d_rd0_select_rst;
  logic [31:0] selector_denoise2d_rd0_select_d0;
  logic [31:0] selector_denoise2d_rd0_select_d1;
  logic [31:0] selector_denoise2d_rd0_select_out;
  denoise2d_rd0_select selector_denoise2d_rd0_select(.clk(selector_denoise2d_rd0_select_clk), .rst(selector_denoise2d_rd0_select_rst), .d0(selector_denoise2d_rd0_select_d0), .d1(selector_denoise2d_rd0_select_d1), .out(selector_denoise2d_rd0_select_out));
  assign selector_denoise2d_rd0_select_clk = clk;
  assign selector_denoise2d_rd0_select_rst = rst;
  // Bindings to selector_denoise2d_rd0_select

  // selector_denoise2d_rd3_select
  logic [0:0] selector_denoise2d_rd3_select_clk;
  logic [0:0] selector_denoise2d_rd3_select_rst;
  logic [31:0] selector_denoise2d_rd3_select_d0;
  logic [31:0] selector_denoise2d_rd3_select_d1;
  logic [31:0] selector_denoise2d_rd3_select_out;
  denoise2d_rd3_select selector_denoise2d_rd3_select(.clk(selector_denoise2d_rd3_select_clk), .rst(selector_denoise2d_rd3_select_rst), .d0(selector_denoise2d_rd3_select_d0), .d1(selector_denoise2d_rd3_select_d1), .out(selector_denoise2d_rd3_select_out));
  assign selector_denoise2d_rd3_select_clk = clk;
  assign selector_denoise2d_rd3_select_rst = rst;
  // Bindings to selector_denoise2d_rd3_select

  // selector_diff_qwe_rd0_select
  logic [0:0] selector_diff_qwe_rd0_select_clk;
  logic [0:0] selector_diff_qwe_rd0_select_rst;
  logic [31:0] selector_diff_qwe_rd0_select_d0;
  logic [31:0] selector_diff_qwe_rd0_select_d1;
  logic [31:0] selector_diff_qwe_rd0_select_out;
  diff_qwe_rd0_select selector_diff_qwe_rd0_select(.clk(selector_diff_qwe_rd0_select_clk), .rst(selector_diff_qwe_rd0_select_rst), .d0(selector_diff_qwe_rd0_select_d0), .d1(selector_diff_qwe_rd0_select_d1), .out(selector_diff_qwe_rd0_select_out));
  assign selector_diff_qwe_rd0_select_clk = clk;
  assign selector_diff_qwe_rd0_select_rst = rst;
  // Bindings to selector_diff_qwe_rd0_select



endmodule


module diff_r_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 35;
    end
  end

endmodule


module diff_l_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 35;
    end
  end

endmodule


module diff_qwe_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 69;
    end
  end

endmodule


module u_off_chip(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module diff_qwe_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 35;
    end
  end

endmodule


module diff_l_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 36;
    end
  end

endmodule


module f_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module diff_qwe_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module diff_r_update_0(input [0:0] clk, input [0:0] rst, input [0:0] start, output [0:0] done);


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


module denoise2d_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 71;
    end
  end

endmodule


module denoise2d_rd2_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 70;
    end
  end

endmodule


module denoise2d_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 104;
    end
  end

endmodule


module denoise2d_rd3_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 69;
    end
  end

endmodule


module diff_d_rd0_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 35;
    end
  end

endmodule


module diff_d_rd1_select(input [0:0] clk, input [0:0] rst, input [31:0] d0, input [31:0] d1, output [31:0] out);
  always @(*) begin
    if (1) begin
      out = 1;
    end
  end

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



