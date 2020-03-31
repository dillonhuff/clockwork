module denoise2d_opt(input clk, input rst, input start, output done);


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
  // op_u_update_0
  logic [0:0] op_u_update_0_clk;
  logic [0:0] op_u_update_0_rst;
  logic [0:0] op_u_update_0_start;
  logic [0:0] op_u_update_0_done;
  u_update_0 op_u_update_0(.clk(op_u_update_0_clk), .rst(op_u_update_0_rst), .start(op_u_update_0_start), .done(op_u_update_0_done));
  assign op_u_update_0_clk = clk;
  assign op_u_update_0_rst = rst;
  assign op_u_update_0_start = start;
  // Bindings to op_u_update_0

  // buf_f
  logic [0:0] buf_f_clk;
  logic [0:0] buf_f_rst;
  logic [0:0] buf_f_start;
  logic [0:0] buf_f_done;
  f buf_f(.clk(buf_f_clk), .rst(buf_f_rst), .start(buf_f_start), .done(buf_f_done));
  assign buf_f_clk = clk;
  assign buf_f_rst = rst;
  assign buf_f_start = start;
  // Bindings to buf_f

  // op_diff_r_update_0
  logic [0:0] op_diff_r_update_0_clk;
  logic [0:0] op_diff_r_update_0_rst;
  logic [0:0] op_diff_r_update_0_start;
  logic [0:0] op_diff_r_update_0_done;
  diff_r_update_0 op_diff_r_update_0(.clk(op_diff_r_update_0_clk), .rst(op_diff_r_update_0_rst), .start(op_diff_r_update_0_start), .done(op_diff_r_update_0_done));
  assign op_diff_r_update_0_clk = clk;
  assign op_diff_r_update_0_rst = rst;
  assign op_diff_r_update_0_start = start;
  // Bindings to op_diff_r_update_0

  // op_f_update_0
  logic [0:0] op_f_update_0_clk;
  logic [0:0] op_f_update_0_rst;
  logic [0:0] op_f_update_0_start;
  logic [0:0] op_f_update_0_done;
  f_update_0 op_f_update_0(.clk(op_f_update_0_clk), .rst(op_f_update_0_rst), .start(op_f_update_0_start), .done(op_f_update_0_done));
  assign op_f_update_0_clk = clk;
  assign op_f_update_0_rst = rst;
  assign op_f_update_0_start = start;
  // Bindings to op_f_update_0

  // op_g_update_0
  logic [0:0] op_g_update_0_clk;
  logic [0:0] op_g_update_0_rst;
  logic [0:0] op_g_update_0_start;
  logic [0:0] op_g_update_0_done;
  g_update_0 op_g_update_0(.clk(op_g_update_0_clk), .rst(op_g_update_0_rst), .start(op_g_update_0_start), .done(op_g_update_0_done));
  assign op_g_update_0_clk = clk;
  assign op_g_update_0_rst = rst;
  assign op_g_update_0_start = start;
  // Bindings to op_g_update_0

  // op_r0_update_0
  logic [0:0] op_r0_update_0_clk;
  logic [0:0] op_r0_update_0_rst;
  logic [0:0] op_r0_update_0_start;
  logic [0:0] op_r0_update_0_done;
  r0_update_0 op_r0_update_0(.clk(op_r0_update_0_clk), .rst(op_r0_update_0_rst), .start(op_r0_update_0_start), .done(op_r0_update_0_done));
  assign op_r0_update_0_clk = clk;
  assign op_r0_update_0_rst = rst;
  assign op_r0_update_0_start = start;
  // Bindings to op_r0_update_0

  // op_r1_update_0
  logic [0:0] op_r1_update_0_clk;
  logic [0:0] op_r1_update_0_rst;
  logic [0:0] op_r1_update_0_start;
  logic [0:0] op_r1_update_0_done;
  r1_update_0 op_r1_update_0(.clk(op_r1_update_0_clk), .rst(op_r1_update_0_rst), .start(op_r1_update_0_start), .done(op_r1_update_0_done));
  assign op_r1_update_0_clk = clk;
  assign op_r1_update_0_rst = rst;
  assign op_r1_update_0_start = start;
  // Bindings to op_r1_update_0

  // buf_diff_r
  logic [0:0] buf_diff_r_clk;
  logic [0:0] buf_diff_r_rst;
  logic [0:0] buf_diff_r_start;
  logic [0:0] buf_diff_r_done;
  diff_r buf_diff_r(.clk(buf_diff_r_clk), .rst(buf_diff_r_rst), .start(buf_diff_r_start), .done(buf_diff_r_done));
  assign buf_diff_r_clk = clk;
  assign buf_diff_r_rst = rst;
  assign buf_diff_r_start = start;
  // Bindings to buf_diff_r

  // buf_r0
  logic [0:0] buf_r0_clk;
  logic [0:0] buf_r0_rst;
  logic [0:0] buf_r0_start;
  logic [0:0] buf_r0_done;
  r0 buf_r0(.clk(buf_r0_clk), .rst(buf_r0_rst), .start(buf_r0_start), .done(buf_r0_done));
  assign buf_r0_clk = clk;
  assign buf_r0_rst = rst;
  assign buf_r0_start = start;
  // Bindings to buf_r0

  // buf_diff_l
  logic [0:0] buf_diff_l_clk;
  logic [0:0] buf_diff_l_rst;
  logic [0:0] buf_diff_l_start;
  logic [0:0] buf_diff_l_done;
  diff_l buf_diff_l(.clk(buf_diff_l_clk), .rst(buf_diff_l_rst), .start(buf_diff_l_start), .done(buf_diff_l_done));
  assign buf_diff_l_clk = clk;
  assign buf_diff_l_rst = rst;
  assign buf_diff_l_start = start;
  // Bindings to buf_diff_l

  // buf_diff_qwe
  logic [0:0] buf_diff_qwe_clk;
  logic [0:0] buf_diff_qwe_rst;
  logic [0:0] buf_diff_qwe_start;
  logic [0:0] buf_diff_qwe_done;
  diff_qwe buf_diff_qwe(.clk(buf_diff_qwe_clk), .rst(buf_diff_qwe_rst), .start(buf_diff_qwe_start), .done(buf_diff_qwe_done));
  assign buf_diff_qwe_clk = clk;
  assign buf_diff_qwe_rst = rst;
  assign buf_diff_qwe_start = start;
  // Bindings to buf_diff_qwe

  // buf_denoise2d
  logic [0:0] buf_denoise2d_clk;
  logic [0:0] buf_denoise2d_rst;
  logic [0:0] buf_denoise2d_start;
  logic [0:0] buf_denoise2d_done;
  denoise2d buf_denoise2d(.clk(buf_denoise2d_clk), .rst(buf_denoise2d_rst), .start(buf_denoise2d_start), .done(buf_denoise2d_done));
  assign buf_denoise2d_clk = clk;
  assign buf_denoise2d_rst = rst;
  assign buf_denoise2d_start = start;
  // Bindings to buf_denoise2d

  // buf_u
  logic [0:0] buf_u_clk;
  logic [0:0] buf_u_rst;
  logic [0:0] buf_u_start;
  logic [0:0] buf_u_done;
  u buf_u(.clk(buf_u_clk), .rst(buf_u_rst), .start(buf_u_start), .done(buf_u_done));
  assign buf_u_clk = clk;
  assign buf_u_rst = rst;
  assign buf_u_start = start;
  // Bindings to buf_u

  // buf_u_off_chip
  logic [0:0] buf_u_off_chip_clk;
  logic [0:0] buf_u_off_chip_rst;
  logic [0:0] buf_u_off_chip_start;
  logic [0:0] buf_u_off_chip_done;
  u_off_chip buf_u_off_chip(.clk(buf_u_off_chip_clk), .rst(buf_u_off_chip_rst), .start(buf_u_off_chip_start), .done(buf_u_off_chip_done));
  assign buf_u_off_chip_clk = clk;
  assign buf_u_off_chip_rst = rst;
  assign buf_u_off_chip_start = start;
  // Bindings to buf_u_off_chip

  // buf_diff_d
  logic [0:0] buf_diff_d_clk;
  logic [0:0] buf_diff_d_rst;
  logic [0:0] buf_diff_d_start;
  logic [0:0] buf_diff_d_done;
  diff_d buf_diff_d(.clk(buf_diff_d_clk), .rst(buf_diff_d_rst), .start(buf_diff_d_start), .done(buf_diff_d_done));
  assign buf_diff_d_clk = clk;
  assign buf_diff_d_rst = rst;
  assign buf_diff_d_start = start;
  // Bindings to buf_diff_d

  // op_denoise2d_update_0
  logic [0:0] op_denoise2d_update_0_clk;
  logic [0:0] op_denoise2d_update_0_rst;
  logic [0:0] op_denoise2d_update_0_start;
  logic [0:0] op_denoise2d_update_0_done;
  denoise2d_update_0 op_denoise2d_update_0(.clk(op_denoise2d_update_0_clk), .rst(op_denoise2d_update_0_rst), .start(op_denoise2d_update_0_start), .done(op_denoise2d_update_0_done));
  assign op_denoise2d_update_0_clk = clk;
  assign op_denoise2d_update_0_rst = rst;
  assign op_denoise2d_update_0_start = start;
  // Bindings to op_denoise2d_update_0

  // op_diff_d_update_0
  logic [0:0] op_diff_d_update_0_clk;
  logic [0:0] op_diff_d_update_0_rst;
  logic [0:0] op_diff_d_update_0_start;
  logic [0:0] op_diff_d_update_0_done;
  diff_d_update_0 op_diff_d_update_0(.clk(op_diff_d_update_0_clk), .rst(op_diff_d_update_0_rst), .start(op_diff_d_update_0_start), .done(op_diff_d_update_0_done));
  assign op_diff_d_update_0_clk = clk;
  assign op_diff_d_update_0_rst = rst;
  assign op_diff_d_update_0_start = start;
  // Bindings to op_diff_d_update_0

  // op_diff_l_update_0
  logic [0:0] op_diff_l_update_0_clk;
  logic [0:0] op_diff_l_update_0_rst;
  logic [0:0] op_diff_l_update_0_start;
  logic [0:0] op_diff_l_update_0_done;
  diff_l_update_0 op_diff_l_update_0(.clk(op_diff_l_update_0_clk), .rst(op_diff_l_update_0_rst), .start(op_diff_l_update_0_start), .done(op_diff_l_update_0_done));
  assign op_diff_l_update_0_clk = clk;
  assign op_diff_l_update_0_rst = rst;
  assign op_diff_l_update_0_start = start;
  // Bindings to op_diff_l_update_0

  // op_diff_qwe_update_0
  logic [0:0] op_diff_qwe_update_0_clk;
  logic [0:0] op_diff_qwe_update_0_rst;
  logic [0:0] op_diff_qwe_update_0_start;
  logic [0:0] op_diff_qwe_update_0_done;
  diff_qwe_update_0 op_diff_qwe_update_0(.clk(op_diff_qwe_update_0_clk), .rst(op_diff_qwe_update_0_rst), .start(op_diff_qwe_update_0_start), .done(op_diff_qwe_update_0_done));
  assign op_diff_qwe_update_0_clk = clk;
  assign op_diff_qwe_update_0_rst = rst;
  assign op_diff_qwe_update_0_start = start;
  // Bindings to op_diff_qwe_update_0

  // buf_f_off_chip
  logic [0:0] buf_f_off_chip_clk;
  logic [0:0] buf_f_off_chip_rst;
  logic [0:0] buf_f_off_chip_start;
  logic [0:0] buf_f_off_chip_done;
  f_off_chip buf_f_off_chip(.clk(buf_f_off_chip_clk), .rst(buf_f_off_chip_rst), .start(buf_f_off_chip_start), .done(buf_f_off_chip_done));
  assign buf_f_off_chip_clk = clk;
  assign buf_f_off_chip_rst = rst;
  assign buf_f_off_chip_start = start;
  // Bindings to buf_f_off_chip

  // buf_g
  logic [0:0] buf_g_clk;
  logic [0:0] buf_g_rst;
  logic [0:0] buf_g_start;
  logic [0:0] buf_g_done;
  g buf_g(.clk(buf_g_clk), .rst(buf_g_rst), .start(buf_g_start), .done(buf_g_done));
  assign buf_g_clk = clk;
  assign buf_g_rst = rst;
  assign buf_g_start = start;
  // Bindings to buf_g

  // buf_r1
  logic [0:0] buf_r1_clk;
  logic [0:0] buf_r1_rst;
  logic [0:0] buf_r1_start;
  logic [0:0] buf_r1_done;
  r1 buf_r1(.clk(buf_r1_clk), .rst(buf_r1_rst), .start(buf_r1_start), .done(buf_r1_done));
  assign buf_r1_clk = clk;
  assign buf_r1_rst = rst;
  assign buf_r1_start = start;
  // Bindings to buf_r1


endmodule
