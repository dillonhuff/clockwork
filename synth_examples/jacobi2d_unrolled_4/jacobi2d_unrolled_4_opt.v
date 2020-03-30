module jacobi2d_unrolled_4_opt(input clk, input rst, input start, output done);


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
  // buf_t1_arg
  logic [0:0] buf_t1_arg_clk;
  logic [0:0] buf_t1_arg_rst;
  logic [0:0] buf_t1_arg_start;
  logic [0:0] buf_t1_arg_done;
  t1_arg buf_t1_arg(.clk(buf_t1_arg_clk), .rst(buf_t1_arg_rst), .start(buf_t1_arg_start), .done(buf_t1_arg_done));
  assign buf_t1_arg_clk = clk;
  assign buf_t1_arg_rst = rst;
  assign buf_t1_arg_start = start;
  // Bindings to buf_t1_arg

  // buf_t1
  logic [0:0] buf_t1_clk;
  logic [0:0] buf_t1_rst;
  logic [0:0] buf_t1_start;
  logic [0:0] buf_t1_done;
  t1 buf_t1(.clk(buf_t1_clk), .rst(buf_t1_rst), .start(buf_t1_start), .done(buf_t1_done));
  assign buf_t1_clk = clk;
  assign buf_t1_rst = rst;
  assign buf_t1_start = start;
  // Bindings to buf_t1

  // buf_jacobi2d_unrolled_4
  logic [0:0] buf_jacobi2d_unrolled_4_clk;
  logic [0:0] buf_jacobi2d_unrolled_4_rst;
  logic [0:0] buf_jacobi2d_unrolled_4_start;
  logic [0:0] buf_jacobi2d_unrolled_4_done;
  jacobi2d_unrolled_4 buf_jacobi2d_unrolled_4(.clk(buf_jacobi2d_unrolled_4_clk), .rst(buf_jacobi2d_unrolled_4_rst), .start(buf_jacobi2d_unrolled_4_start), .done(buf_jacobi2d_unrolled_4_done));
  assign buf_jacobi2d_unrolled_4_clk = clk;
  assign buf_jacobi2d_unrolled_4_rst = rst;
  assign buf_jacobi2d_unrolled_4_start = start;
  // Bindings to buf_jacobi2d_unrolled_4

  // op_jacobi2d_unrolled_4_update_0
  logic [0:0] op_jacobi2d_unrolled_4_update_0_clk;
  logic [0:0] op_jacobi2d_unrolled_4_update_0_rst;
  logic [0:0] op_jacobi2d_unrolled_4_update_0_start;
  logic [0:0] op_jacobi2d_unrolled_4_update_0_done;
  jacobi2d_unrolled_4_update_0 op_jacobi2d_unrolled_4_update_0(.clk(op_jacobi2d_unrolled_4_update_0_clk), .rst(op_jacobi2d_unrolled_4_update_0_rst), .start(op_jacobi2d_unrolled_4_update_0_start), .done(op_jacobi2d_unrolled_4_update_0_done));
  assign op_jacobi2d_unrolled_4_update_0_clk = clk;
  assign op_jacobi2d_unrolled_4_update_0_rst = rst;
  assign op_jacobi2d_unrolled_4_update_0_start = start;
  // Bindings to op_jacobi2d_unrolled_4_update_0

  // op_t1_update_0
  logic [0:0] op_t1_update_0_clk;
  logic [0:0] op_t1_update_0_rst;
  logic [0:0] op_t1_update_0_start;
  logic [0:0] op_t1_update_0_done;
  t1_update_0 op_t1_update_0(.clk(op_t1_update_0_clk), .rst(op_t1_update_0_rst), .start(op_t1_update_0_start), .done(op_t1_update_0_done));
  assign op_t1_update_0_clk = clk;
  assign op_t1_update_0_rst = rst;
  assign op_t1_update_0_start = start;
  // Bindings to op_t1_update_0


endmodule
