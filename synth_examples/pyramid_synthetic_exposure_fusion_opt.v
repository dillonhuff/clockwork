module pyramid_synthetic_exposure_fusion_opt(input clk, input rst, input start, output done);


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
  // buf_bright
  logic [0:0] buf_bright_clk;
  logic [0:0] buf_bright_rst;
  logic [0:0] buf_bright_start;
  logic [0:0] buf_bright_done;
  bright buf_bright(.clk(buf_bright_clk), .rst(buf_bright_rst), .start(buf_bright_start), .done(buf_bright_done));
  assign buf_bright_clk = clk;
  assign buf_bright_rst = rst;
  assign buf_bright_start = start;
  // Bindings to buf_bright

  // buf_bright_laplace_us_0
  logic [0:0] buf_bright_laplace_us_0_clk;
  logic [0:0] buf_bright_laplace_us_0_rst;
  logic [0:0] buf_bright_laplace_us_0_start;
  logic [0:0] buf_bright_laplace_us_0_done;
  bright_laplace_us_0 buf_bright_laplace_us_0(.clk(buf_bright_laplace_us_0_clk), .rst(buf_bright_laplace_us_0_rst), .start(buf_bright_laplace_us_0_start), .done(buf_bright_laplace_us_0_done));
  assign buf_bright_laplace_us_0_clk = clk;
  assign buf_bright_laplace_us_0_rst = rst;
  assign buf_bright_laplace_us_0_start = start;
  // Bindings to buf_bright_laplace_us_0

  // buf_bright_laplace_us_1
  logic [0:0] buf_bright_laplace_us_1_clk;
  logic [0:0] buf_bright_laplace_us_1_rst;
  logic [0:0] buf_bright_laplace_us_1_start;
  logic [0:0] buf_bright_laplace_us_1_done;
  bright_laplace_us_1 buf_bright_laplace_us_1(.clk(buf_bright_laplace_us_1_clk), .rst(buf_bright_laplace_us_1_rst), .start(buf_bright_laplace_us_1_start), .done(buf_bright_laplace_us_1_done));
  assign buf_bright_laplace_us_1_clk = clk;
  assign buf_bright_laplace_us_1_rst = rst;
  assign buf_bright_laplace_us_1_start = start;
  // Bindings to buf_bright_laplace_us_1

  // buf_bright_laplace_us_2
  logic [0:0] buf_bright_laplace_us_2_clk;
  logic [0:0] buf_bright_laplace_us_2_rst;
  logic [0:0] buf_bright_laplace_us_2_start;
  logic [0:0] buf_bright_laplace_us_2_done;
  bright_laplace_us_2 buf_bright_laplace_us_2(.clk(buf_bright_laplace_us_2_clk), .rst(buf_bright_laplace_us_2_rst), .start(buf_bright_laplace_us_2_start), .done(buf_bright_laplace_us_2_done));
  assign buf_bright_laplace_us_2_clk = clk;
  assign buf_bright_laplace_us_2_rst = rst;
  assign buf_bright_laplace_us_2_start = start;
  // Bindings to buf_bright_laplace_us_2

  // buf_dark
  logic [0:0] buf_dark_clk;
  logic [0:0] buf_dark_rst;
  logic [0:0] buf_dark_start;
  logic [0:0] buf_dark_done;
  dark buf_dark(.clk(buf_dark_clk), .rst(buf_dark_rst), .start(buf_dark_start), .done(buf_dark_done));
  assign buf_dark_clk = clk;
  assign buf_dark_rst = rst;
  assign buf_dark_start = start;
  // Bindings to buf_dark

  // buf_bright_weights_normed
  logic [0:0] buf_bright_weights_normed_clk;
  logic [0:0] buf_bright_weights_normed_rst;
  logic [0:0] buf_bright_weights_normed_start;
  logic [0:0] buf_bright_weights_normed_done;
  bright_weights_normed buf_bright_weights_normed(.clk(buf_bright_weights_normed_clk), .rst(buf_bright_weights_normed_rst), .start(buf_bright_weights_normed_start), .done(buf_bright_weights_normed_done));
  assign buf_bright_weights_normed_clk = clk;
  assign buf_bright_weights_normed_rst = rst;
  assign buf_bright_weights_normed_start = start;
  // Bindings to buf_bright_weights_normed

  // buf_dark_gauss_blur_1
  logic [0:0] buf_dark_gauss_blur_1_clk;
  logic [0:0] buf_dark_gauss_blur_1_rst;
  logic [0:0] buf_dark_gauss_blur_1_start;
  logic [0:0] buf_dark_gauss_blur_1_done;
  dark_gauss_blur_1 buf_dark_gauss_blur_1(.clk(buf_dark_gauss_blur_1_clk), .rst(buf_dark_gauss_blur_1_rst), .start(buf_dark_gauss_blur_1_start), .done(buf_dark_gauss_blur_1_done));
  assign buf_dark_gauss_blur_1_clk = clk;
  assign buf_dark_gauss_blur_1_rst = rst;
  assign buf_dark_gauss_blur_1_start = start;
  // Bindings to buf_dark_gauss_blur_1

  // buf_bright_weights_normed_gauss_blur_1
  logic [0:0] buf_bright_weights_normed_gauss_blur_1_clk;
  logic [0:0] buf_bright_weights_normed_gauss_blur_1_rst;
  logic [0:0] buf_bright_weights_normed_gauss_blur_1_start;
  logic [0:0] buf_bright_weights_normed_gauss_blur_1_done;
  bright_weights_normed_gauss_blur_1 buf_bright_weights_normed_gauss_blur_1(.clk(buf_bright_weights_normed_gauss_blur_1_clk), .rst(buf_bright_weights_normed_gauss_blur_1_rst), .start(buf_bright_weights_normed_gauss_blur_1_start), .done(buf_bright_weights_normed_gauss_blur_1_done));
  assign buf_bright_weights_normed_gauss_blur_1_clk = clk;
  assign buf_bright_weights_normed_gauss_blur_1_rst = rst;
  assign buf_bright_weights_normed_gauss_blur_1_start = start;
  // Bindings to buf_bright_weights_normed_gauss_blur_1

  // buf_bright_weights_normed_gauss_blur_2
  logic [0:0] buf_bright_weights_normed_gauss_blur_2_clk;
  logic [0:0] buf_bright_weights_normed_gauss_blur_2_rst;
  logic [0:0] buf_bright_weights_normed_gauss_blur_2_start;
  logic [0:0] buf_bright_weights_normed_gauss_blur_2_done;
  bright_weights_normed_gauss_blur_2 buf_bright_weights_normed_gauss_blur_2(.clk(buf_bright_weights_normed_gauss_blur_2_clk), .rst(buf_bright_weights_normed_gauss_blur_2_rst), .start(buf_bright_weights_normed_gauss_blur_2_start), .done(buf_bright_weights_normed_gauss_blur_2_done));
  assign buf_bright_weights_normed_gauss_blur_2_clk = clk;
  assign buf_bright_weights_normed_gauss_blur_2_rst = rst;
  assign buf_bright_weights_normed_gauss_blur_2_start = start;
  // Bindings to buf_bright_weights_normed_gauss_blur_2

  // buf_bright_weights_normed_gauss_blur_3
  logic [0:0] buf_bright_weights_normed_gauss_blur_3_clk;
  logic [0:0] buf_bright_weights_normed_gauss_blur_3_rst;
  logic [0:0] buf_bright_weights_normed_gauss_blur_3_start;
  logic [0:0] buf_bright_weights_normed_gauss_blur_3_done;
  bright_weights_normed_gauss_blur_3 buf_bright_weights_normed_gauss_blur_3(.clk(buf_bright_weights_normed_gauss_blur_3_clk), .rst(buf_bright_weights_normed_gauss_blur_3_rst), .start(buf_bright_weights_normed_gauss_blur_3_start), .done(buf_bright_weights_normed_gauss_blur_3_done));
  assign buf_bright_weights_normed_gauss_blur_3_clk = clk;
  assign buf_bright_weights_normed_gauss_blur_3_rst = rst;
  assign buf_bright_weights_normed_gauss_blur_3_start = start;
  // Bindings to buf_bright_weights_normed_gauss_blur_3

  // buf_bright_weights_normed_gauss_ds_1
  logic [0:0] buf_bright_weights_normed_gauss_ds_1_clk;
  logic [0:0] buf_bright_weights_normed_gauss_ds_1_rst;
  logic [0:0] buf_bright_weights_normed_gauss_ds_1_start;
  logic [0:0] buf_bright_weights_normed_gauss_ds_1_done;
  bright_weights_normed_gauss_ds_1 buf_bright_weights_normed_gauss_ds_1(.clk(buf_bright_weights_normed_gauss_ds_1_clk), .rst(buf_bright_weights_normed_gauss_ds_1_rst), .start(buf_bright_weights_normed_gauss_ds_1_start), .done(buf_bright_weights_normed_gauss_ds_1_done));
  assign buf_bright_weights_normed_gauss_ds_1_clk = clk;
  assign buf_bright_weights_normed_gauss_ds_1_rst = rst;
  assign buf_bright_weights_normed_gauss_ds_1_start = start;
  // Bindings to buf_bright_weights_normed_gauss_ds_1

  // buf_bright_weights_normed_gauss_ds_2
  logic [0:0] buf_bright_weights_normed_gauss_ds_2_clk;
  logic [0:0] buf_bright_weights_normed_gauss_ds_2_rst;
  logic [0:0] buf_bright_weights_normed_gauss_ds_2_start;
  logic [0:0] buf_bright_weights_normed_gauss_ds_2_done;
  bright_weights_normed_gauss_ds_2 buf_bright_weights_normed_gauss_ds_2(.clk(buf_bright_weights_normed_gauss_ds_2_clk), .rst(buf_bright_weights_normed_gauss_ds_2_rst), .start(buf_bright_weights_normed_gauss_ds_2_start), .done(buf_bright_weights_normed_gauss_ds_2_done));
  assign buf_bright_weights_normed_gauss_ds_2_clk = clk;
  assign buf_bright_weights_normed_gauss_ds_2_rst = rst;
  assign buf_bright_weights_normed_gauss_ds_2_start = start;
  // Bindings to buf_bright_weights_normed_gauss_ds_2

  // buf_bright_gauss_ds_1
  logic [0:0] buf_bright_gauss_ds_1_clk;
  logic [0:0] buf_bright_gauss_ds_1_rst;
  logic [0:0] buf_bright_gauss_ds_1_start;
  logic [0:0] buf_bright_gauss_ds_1_done;
  bright_gauss_ds_1 buf_bright_gauss_ds_1(.clk(buf_bright_gauss_ds_1_clk), .rst(buf_bright_gauss_ds_1_rst), .start(buf_bright_gauss_ds_1_start), .done(buf_bright_gauss_ds_1_done));
  assign buf_bright_gauss_ds_1_clk = clk;
  assign buf_bright_gauss_ds_1_rst = rst;
  assign buf_bright_gauss_ds_1_start = start;
  // Bindings to buf_bright_gauss_ds_1

  // buf_bright_gauss_blur_1
  logic [0:0] buf_bright_gauss_blur_1_clk;
  logic [0:0] buf_bright_gauss_blur_1_rst;
  logic [0:0] buf_bright_gauss_blur_1_start;
  logic [0:0] buf_bright_gauss_blur_1_done;
  bright_gauss_blur_1 buf_bright_gauss_blur_1(.clk(buf_bright_gauss_blur_1_clk), .rst(buf_bright_gauss_blur_1_rst), .start(buf_bright_gauss_blur_1_start), .done(buf_bright_gauss_blur_1_done));
  assign buf_bright_gauss_blur_1_clk = clk;
  assign buf_bright_gauss_blur_1_rst = rst;
  assign buf_bright_gauss_blur_1_start = start;
  // Bindings to buf_bright_gauss_blur_1

  // buf_bright_gauss_blur_2
  logic [0:0] buf_bright_gauss_blur_2_clk;
  logic [0:0] buf_bright_gauss_blur_2_rst;
  logic [0:0] buf_bright_gauss_blur_2_start;
  logic [0:0] buf_bright_gauss_blur_2_done;
  bright_gauss_blur_2 buf_bright_gauss_blur_2(.clk(buf_bright_gauss_blur_2_clk), .rst(buf_bright_gauss_blur_2_rst), .start(buf_bright_gauss_blur_2_start), .done(buf_bright_gauss_blur_2_done));
  assign buf_bright_gauss_blur_2_clk = clk;
  assign buf_bright_gauss_blur_2_rst = rst;
  assign buf_bright_gauss_blur_2_start = start;
  // Bindings to buf_bright_gauss_blur_2

  // buf_bright_gauss_blur_3
  logic [0:0] buf_bright_gauss_blur_3_clk;
  logic [0:0] buf_bright_gauss_blur_3_rst;
  logic [0:0] buf_bright_gauss_blur_3_start;
  logic [0:0] buf_bright_gauss_blur_3_done;
  bright_gauss_blur_3 buf_bright_gauss_blur_3(.clk(buf_bright_gauss_blur_3_clk), .rst(buf_bright_gauss_blur_3_rst), .start(buf_bright_gauss_blur_3_start), .done(buf_bright_gauss_blur_3_done));
  assign buf_bright_gauss_blur_3_clk = clk;
  assign buf_bright_gauss_blur_3_rst = rst;
  assign buf_bright_gauss_blur_3_start = start;
  // Bindings to buf_bright_gauss_blur_3

  // buf_bright_gauss_ds_2
  logic [0:0] buf_bright_gauss_ds_2_clk;
  logic [0:0] buf_bright_gauss_ds_2_rst;
  logic [0:0] buf_bright_gauss_ds_2_start;
  logic [0:0] buf_bright_gauss_ds_2_done;
  bright_gauss_ds_2 buf_bright_gauss_ds_2(.clk(buf_bright_gauss_ds_2_clk), .rst(buf_bright_gauss_ds_2_rst), .start(buf_bright_gauss_ds_2_start), .done(buf_bright_gauss_ds_2_done));
  assign buf_bright_gauss_ds_2_clk = clk;
  assign buf_bright_gauss_ds_2_rst = rst;
  assign buf_bright_gauss_ds_2_start = start;
  // Bindings to buf_bright_gauss_ds_2

  // buf_bright_gauss_ds_3
  logic [0:0] buf_bright_gauss_ds_3_clk;
  logic [0:0] buf_bright_gauss_ds_3_rst;
  logic [0:0] buf_bright_gauss_ds_3_start;
  logic [0:0] buf_bright_gauss_ds_3_done;
  bright_gauss_ds_3 buf_bright_gauss_ds_3(.clk(buf_bright_gauss_ds_3_clk), .rst(buf_bright_gauss_ds_3_rst), .start(buf_bright_gauss_ds_3_start), .done(buf_bright_gauss_ds_3_done));
  assign buf_bright_gauss_ds_3_clk = clk;
  assign buf_bright_gauss_ds_3_rst = rst;
  assign buf_bright_gauss_ds_3_start = start;
  // Bindings to buf_bright_gauss_ds_3

  // buf_bright_weights
  logic [0:0] buf_bright_weights_clk;
  logic [0:0] buf_bright_weights_rst;
  logic [0:0] buf_bright_weights_start;
  logic [0:0] buf_bright_weights_done;
  bright_weights buf_bright_weights(.clk(buf_bright_weights_clk), .rst(buf_bright_weights_rst), .start(buf_bright_weights_start), .done(buf_bright_weights_done));
  assign buf_bright_weights_clk = clk;
  assign buf_bright_weights_rst = rst;
  assign buf_bright_weights_start = start;
  // Bindings to buf_bright_weights

  // buf_bright_laplace_diff_0
  logic [0:0] buf_bright_laplace_diff_0_clk;
  logic [0:0] buf_bright_laplace_diff_0_rst;
  logic [0:0] buf_bright_laplace_diff_0_start;
  logic [0:0] buf_bright_laplace_diff_0_done;
  bright_laplace_diff_0 buf_bright_laplace_diff_0(.clk(buf_bright_laplace_diff_0_clk), .rst(buf_bright_laplace_diff_0_rst), .start(buf_bright_laplace_diff_0_start), .done(buf_bright_laplace_diff_0_done));
  assign buf_bright_laplace_diff_0_clk = clk;
  assign buf_bright_laplace_diff_0_rst = rst;
  assign buf_bright_laplace_diff_0_start = start;
  // Bindings to buf_bright_laplace_diff_0

  // buf_bright_laplace_diff_1
  logic [0:0] buf_bright_laplace_diff_1_clk;
  logic [0:0] buf_bright_laplace_diff_1_rst;
  logic [0:0] buf_bright_laplace_diff_1_start;
  logic [0:0] buf_bright_laplace_diff_1_done;
  bright_laplace_diff_1 buf_bright_laplace_diff_1(.clk(buf_bright_laplace_diff_1_clk), .rst(buf_bright_laplace_diff_1_rst), .start(buf_bright_laplace_diff_1_start), .done(buf_bright_laplace_diff_1_done));
  assign buf_bright_laplace_diff_1_clk = clk;
  assign buf_bright_laplace_diff_1_rst = rst;
  assign buf_bright_laplace_diff_1_start = start;
  // Bindings to buf_bright_laplace_diff_1

  // buf_bright_laplace_diff_2
  logic [0:0] buf_bright_laplace_diff_2_clk;
  logic [0:0] buf_bright_laplace_diff_2_rst;
  logic [0:0] buf_bright_laplace_diff_2_start;
  logic [0:0] buf_bright_laplace_diff_2_done;
  bright_laplace_diff_2 buf_bright_laplace_diff_2(.clk(buf_bright_laplace_diff_2_clk), .rst(buf_bright_laplace_diff_2_rst), .start(buf_bright_laplace_diff_2_start), .done(buf_bright_laplace_diff_2_done));
  assign buf_bright_laplace_diff_2_clk = clk;
  assign buf_bright_laplace_diff_2_rst = rst;
  assign buf_bright_laplace_diff_2_start = start;
  // Bindings to buf_bright_laplace_diff_2

  // buf_bright_weights_normed_gauss_ds_3
  logic [0:0] buf_bright_weights_normed_gauss_ds_3_clk;
  logic [0:0] buf_bright_weights_normed_gauss_ds_3_rst;
  logic [0:0] buf_bright_weights_normed_gauss_ds_3_start;
  logic [0:0] buf_bright_weights_normed_gauss_ds_3_done;
  bright_weights_normed_gauss_ds_3 buf_bright_weights_normed_gauss_ds_3(.clk(buf_bright_weights_normed_gauss_ds_3_clk), .rst(buf_bright_weights_normed_gauss_ds_3_rst), .start(buf_bright_weights_normed_gauss_ds_3_start), .done(buf_bright_weights_normed_gauss_ds_3_done));
  assign buf_bright_weights_normed_gauss_ds_3_clk = clk;
  assign buf_bright_weights_normed_gauss_ds_3_rst = rst;
  assign buf_bright_weights_normed_gauss_ds_3_start = start;
  // Bindings to buf_bright_weights_normed_gauss_ds_3

  // buf_dark_gauss_blur_2
  logic [0:0] buf_dark_gauss_blur_2_clk;
  logic [0:0] buf_dark_gauss_blur_2_rst;
  logic [0:0] buf_dark_gauss_blur_2_start;
  logic [0:0] buf_dark_gauss_blur_2_done;
  dark_gauss_blur_2 buf_dark_gauss_blur_2(.clk(buf_dark_gauss_blur_2_clk), .rst(buf_dark_gauss_blur_2_rst), .start(buf_dark_gauss_blur_2_start), .done(buf_dark_gauss_blur_2_done));
  assign buf_dark_gauss_blur_2_clk = clk;
  assign buf_dark_gauss_blur_2_rst = rst;
  assign buf_dark_gauss_blur_2_start = start;
  // Bindings to buf_dark_gauss_blur_2

  // buf_dark_gauss_blur_3
  logic [0:0] buf_dark_gauss_blur_3_clk;
  logic [0:0] buf_dark_gauss_blur_3_rst;
  logic [0:0] buf_dark_gauss_blur_3_start;
  logic [0:0] buf_dark_gauss_blur_3_done;
  dark_gauss_blur_3 buf_dark_gauss_blur_3(.clk(buf_dark_gauss_blur_3_clk), .rst(buf_dark_gauss_blur_3_rst), .start(buf_dark_gauss_blur_3_start), .done(buf_dark_gauss_blur_3_done));
  assign buf_dark_gauss_blur_3_clk = clk;
  assign buf_dark_gauss_blur_3_rst = rst;
  assign buf_dark_gauss_blur_3_start = start;
  // Bindings to buf_dark_gauss_blur_3

  // buf_dark_gauss_ds_1
  logic [0:0] buf_dark_gauss_ds_1_clk;
  logic [0:0] buf_dark_gauss_ds_1_rst;
  logic [0:0] buf_dark_gauss_ds_1_start;
  logic [0:0] buf_dark_gauss_ds_1_done;
  dark_gauss_ds_1 buf_dark_gauss_ds_1(.clk(buf_dark_gauss_ds_1_clk), .rst(buf_dark_gauss_ds_1_rst), .start(buf_dark_gauss_ds_1_start), .done(buf_dark_gauss_ds_1_done));
  assign buf_dark_gauss_ds_1_clk = clk;
  assign buf_dark_gauss_ds_1_rst = rst;
  assign buf_dark_gauss_ds_1_start = start;
  // Bindings to buf_dark_gauss_ds_1

  // buf_dark_gauss_ds_2
  logic [0:0] buf_dark_gauss_ds_2_clk;
  logic [0:0] buf_dark_gauss_ds_2_rst;
  logic [0:0] buf_dark_gauss_ds_2_start;
  logic [0:0] buf_dark_gauss_ds_2_done;
  dark_gauss_ds_2 buf_dark_gauss_ds_2(.clk(buf_dark_gauss_ds_2_clk), .rst(buf_dark_gauss_ds_2_rst), .start(buf_dark_gauss_ds_2_start), .done(buf_dark_gauss_ds_2_done));
  assign buf_dark_gauss_ds_2_clk = clk;
  assign buf_dark_gauss_ds_2_rst = rst;
  assign buf_dark_gauss_ds_2_start = start;
  // Bindings to buf_dark_gauss_ds_2

  // buf_dark_gauss_ds_3
  logic [0:0] buf_dark_gauss_ds_3_clk;
  logic [0:0] buf_dark_gauss_ds_3_rst;
  logic [0:0] buf_dark_gauss_ds_3_start;
  logic [0:0] buf_dark_gauss_ds_3_done;
  dark_gauss_ds_3 buf_dark_gauss_ds_3(.clk(buf_dark_gauss_ds_3_clk), .rst(buf_dark_gauss_ds_3_rst), .start(buf_dark_gauss_ds_3_start), .done(buf_dark_gauss_ds_3_done));
  assign buf_dark_gauss_ds_3_clk = clk;
  assign buf_dark_gauss_ds_3_rst = rst;
  assign buf_dark_gauss_ds_3_start = start;
  // Bindings to buf_dark_gauss_ds_3

  // buf_dark_laplace_us_0
  logic [0:0] buf_dark_laplace_us_0_clk;
  logic [0:0] buf_dark_laplace_us_0_rst;
  logic [0:0] buf_dark_laplace_us_0_start;
  logic [0:0] buf_dark_laplace_us_0_done;
  dark_laplace_us_0 buf_dark_laplace_us_0(.clk(buf_dark_laplace_us_0_clk), .rst(buf_dark_laplace_us_0_rst), .start(buf_dark_laplace_us_0_start), .done(buf_dark_laplace_us_0_done));
  assign buf_dark_laplace_us_0_clk = clk;
  assign buf_dark_laplace_us_0_rst = rst;
  assign buf_dark_laplace_us_0_start = start;
  // Bindings to buf_dark_laplace_us_0

  // buf_dark_laplace_diff_0
  logic [0:0] buf_dark_laplace_diff_0_clk;
  logic [0:0] buf_dark_laplace_diff_0_rst;
  logic [0:0] buf_dark_laplace_diff_0_start;
  logic [0:0] buf_dark_laplace_diff_0_done;
  dark_laplace_diff_0 buf_dark_laplace_diff_0(.clk(buf_dark_laplace_diff_0_clk), .rst(buf_dark_laplace_diff_0_rst), .start(buf_dark_laplace_diff_0_start), .done(buf_dark_laplace_diff_0_done));
  assign buf_dark_laplace_diff_0_clk = clk;
  assign buf_dark_laplace_diff_0_rst = rst;
  assign buf_dark_laplace_diff_0_start = start;
  // Bindings to buf_dark_laplace_diff_0

  // buf_dark_laplace_diff_1
  logic [0:0] buf_dark_laplace_diff_1_clk;
  logic [0:0] buf_dark_laplace_diff_1_rst;
  logic [0:0] buf_dark_laplace_diff_1_start;
  logic [0:0] buf_dark_laplace_diff_1_done;
  dark_laplace_diff_1 buf_dark_laplace_diff_1(.clk(buf_dark_laplace_diff_1_clk), .rst(buf_dark_laplace_diff_1_rst), .start(buf_dark_laplace_diff_1_start), .done(buf_dark_laplace_diff_1_done));
  assign buf_dark_laplace_diff_1_clk = clk;
  assign buf_dark_laplace_diff_1_rst = rst;
  assign buf_dark_laplace_diff_1_start = start;
  // Bindings to buf_dark_laplace_diff_1

  // buf_dark_laplace_diff_2
  logic [0:0] buf_dark_laplace_diff_2_clk;
  logic [0:0] buf_dark_laplace_diff_2_rst;
  logic [0:0] buf_dark_laplace_diff_2_start;
  logic [0:0] buf_dark_laplace_diff_2_done;
  dark_laplace_diff_2 buf_dark_laplace_diff_2(.clk(buf_dark_laplace_diff_2_clk), .rst(buf_dark_laplace_diff_2_rst), .start(buf_dark_laplace_diff_2_start), .done(buf_dark_laplace_diff_2_done));
  assign buf_dark_laplace_diff_2_clk = clk;
  assign buf_dark_laplace_diff_2_rst = rst;
  assign buf_dark_laplace_diff_2_start = start;
  // Bindings to buf_dark_laplace_diff_2

  // buf_dark_laplace_us_1
  logic [0:0] buf_dark_laplace_us_1_clk;
  logic [0:0] buf_dark_laplace_us_1_rst;
  logic [0:0] buf_dark_laplace_us_1_start;
  logic [0:0] buf_dark_laplace_us_1_done;
  dark_laplace_us_1 buf_dark_laplace_us_1(.clk(buf_dark_laplace_us_1_clk), .rst(buf_dark_laplace_us_1_rst), .start(buf_dark_laplace_us_1_start), .done(buf_dark_laplace_us_1_done));
  assign buf_dark_laplace_us_1_clk = clk;
  assign buf_dark_laplace_us_1_rst = rst;
  assign buf_dark_laplace_us_1_start = start;
  // Bindings to buf_dark_laplace_us_1

  // buf_dark_laplace_us_2
  logic [0:0] buf_dark_laplace_us_2_clk;
  logic [0:0] buf_dark_laplace_us_2_rst;
  logic [0:0] buf_dark_laplace_us_2_start;
  logic [0:0] buf_dark_laplace_us_2_done;
  dark_laplace_us_2 buf_dark_laplace_us_2(.clk(buf_dark_laplace_us_2_clk), .rst(buf_dark_laplace_us_2_rst), .start(buf_dark_laplace_us_2_start), .done(buf_dark_laplace_us_2_done));
  assign buf_dark_laplace_us_2_clk = clk;
  assign buf_dark_laplace_us_2_rst = rst;
  assign buf_dark_laplace_us_2_start = start;
  // Bindings to buf_dark_laplace_us_2

  // buf_dark_weights
  logic [0:0] buf_dark_weights_clk;
  logic [0:0] buf_dark_weights_rst;
  logic [0:0] buf_dark_weights_start;
  logic [0:0] buf_dark_weights_done;
  dark_weights buf_dark_weights(.clk(buf_dark_weights_clk), .rst(buf_dark_weights_rst), .start(buf_dark_weights_start), .done(buf_dark_weights_done));
  assign buf_dark_weights_clk = clk;
  assign buf_dark_weights_rst = rst;
  assign buf_dark_weights_start = start;
  // Bindings to buf_dark_weights

  // buf_dark_weights_normed_gauss_ds_1
  logic [0:0] buf_dark_weights_normed_gauss_ds_1_clk;
  logic [0:0] buf_dark_weights_normed_gauss_ds_1_rst;
  logic [0:0] buf_dark_weights_normed_gauss_ds_1_start;
  logic [0:0] buf_dark_weights_normed_gauss_ds_1_done;
  dark_weights_normed_gauss_ds_1 buf_dark_weights_normed_gauss_ds_1(.clk(buf_dark_weights_normed_gauss_ds_1_clk), .rst(buf_dark_weights_normed_gauss_ds_1_rst), .start(buf_dark_weights_normed_gauss_ds_1_start), .done(buf_dark_weights_normed_gauss_ds_1_done));
  assign buf_dark_weights_normed_gauss_ds_1_clk = clk;
  assign buf_dark_weights_normed_gauss_ds_1_rst = rst;
  assign buf_dark_weights_normed_gauss_ds_1_start = start;
  // Bindings to buf_dark_weights_normed_gauss_ds_1

  // buf_dark_weights_normed
  logic [0:0] buf_dark_weights_normed_clk;
  logic [0:0] buf_dark_weights_normed_rst;
  logic [0:0] buf_dark_weights_normed_start;
  logic [0:0] buf_dark_weights_normed_done;
  dark_weights_normed buf_dark_weights_normed(.clk(buf_dark_weights_normed_clk), .rst(buf_dark_weights_normed_rst), .start(buf_dark_weights_normed_start), .done(buf_dark_weights_normed_done));
  assign buf_dark_weights_normed_clk = clk;
  assign buf_dark_weights_normed_rst = rst;
  assign buf_dark_weights_normed_start = start;
  // Bindings to buf_dark_weights_normed

  // op_bright_update_0
  logic [0:0] op_bright_update_0_clk;
  logic [0:0] op_bright_update_0_rst;
  logic [0:0] op_bright_update_0_start;
  logic [0:0] op_bright_update_0_done;
  bright_update_0 op_bright_update_0(.clk(op_bright_update_0_clk), .rst(op_bright_update_0_rst), .start(op_bright_update_0_start), .done(op_bright_update_0_done));
  assign op_bright_update_0_clk = clk;
  assign op_bright_update_0_rst = rst;
  assign op_bright_update_0_start = start;
  // Bindings to op_bright_update_0

  // buf_dark_weights_normed_gauss_blur_1
  logic [0:0] buf_dark_weights_normed_gauss_blur_1_clk;
  logic [0:0] buf_dark_weights_normed_gauss_blur_1_rst;
  logic [0:0] buf_dark_weights_normed_gauss_blur_1_start;
  logic [0:0] buf_dark_weights_normed_gauss_blur_1_done;
  dark_weights_normed_gauss_blur_1 buf_dark_weights_normed_gauss_blur_1(.clk(buf_dark_weights_normed_gauss_blur_1_clk), .rst(buf_dark_weights_normed_gauss_blur_1_rst), .start(buf_dark_weights_normed_gauss_blur_1_start), .done(buf_dark_weights_normed_gauss_blur_1_done));
  assign buf_dark_weights_normed_gauss_blur_1_clk = clk;
  assign buf_dark_weights_normed_gauss_blur_1_rst = rst;
  assign buf_dark_weights_normed_gauss_blur_1_start = start;
  // Bindings to buf_dark_weights_normed_gauss_blur_1

  // buf_dark_weights_normed_gauss_blur_2
  logic [0:0] buf_dark_weights_normed_gauss_blur_2_clk;
  logic [0:0] buf_dark_weights_normed_gauss_blur_2_rst;
  logic [0:0] buf_dark_weights_normed_gauss_blur_2_start;
  logic [0:0] buf_dark_weights_normed_gauss_blur_2_done;
  dark_weights_normed_gauss_blur_2 buf_dark_weights_normed_gauss_blur_2(.clk(buf_dark_weights_normed_gauss_blur_2_clk), .rst(buf_dark_weights_normed_gauss_blur_2_rst), .start(buf_dark_weights_normed_gauss_blur_2_start), .done(buf_dark_weights_normed_gauss_blur_2_done));
  assign buf_dark_weights_normed_gauss_blur_2_clk = clk;
  assign buf_dark_weights_normed_gauss_blur_2_rst = rst;
  assign buf_dark_weights_normed_gauss_blur_2_start = start;
  // Bindings to buf_dark_weights_normed_gauss_blur_2

  // buf_dark_weights_normed_gauss_blur_3
  logic [0:0] buf_dark_weights_normed_gauss_blur_3_clk;
  logic [0:0] buf_dark_weights_normed_gauss_blur_3_rst;
  logic [0:0] buf_dark_weights_normed_gauss_blur_3_start;
  logic [0:0] buf_dark_weights_normed_gauss_blur_3_done;
  dark_weights_normed_gauss_blur_3 buf_dark_weights_normed_gauss_blur_3(.clk(buf_dark_weights_normed_gauss_blur_3_clk), .rst(buf_dark_weights_normed_gauss_blur_3_rst), .start(buf_dark_weights_normed_gauss_blur_3_start), .done(buf_dark_weights_normed_gauss_blur_3_done));
  assign buf_dark_weights_normed_gauss_blur_3_clk = clk;
  assign buf_dark_weights_normed_gauss_blur_3_rst = rst;
  assign buf_dark_weights_normed_gauss_blur_3_start = start;
  // Bindings to buf_dark_weights_normed_gauss_blur_3

  // buf_final_merged_0
  logic [0:0] buf_final_merged_0_clk;
  logic [0:0] buf_final_merged_0_rst;
  logic [0:0] buf_final_merged_0_start;
  logic [0:0] buf_final_merged_0_done;
  final_merged_0 buf_final_merged_0(.clk(buf_final_merged_0_clk), .rst(buf_final_merged_0_rst), .start(buf_final_merged_0_start), .done(buf_final_merged_0_done));
  assign buf_final_merged_0_clk = clk;
  assign buf_final_merged_0_rst = rst;
  assign buf_final_merged_0_start = start;
  // Bindings to buf_final_merged_0

  // buf_final_merged_1
  logic [0:0] buf_final_merged_1_clk;
  logic [0:0] buf_final_merged_1_rst;
  logic [0:0] buf_final_merged_1_start;
  logic [0:0] buf_final_merged_1_done;
  final_merged_1 buf_final_merged_1(.clk(buf_final_merged_1_clk), .rst(buf_final_merged_1_rst), .start(buf_final_merged_1_start), .done(buf_final_merged_1_done));
  assign buf_final_merged_1_clk = clk;
  assign buf_final_merged_1_rst = rst;
  assign buf_final_merged_1_start = start;
  // Bindings to buf_final_merged_1

  // buf_dark_weights_normed_gauss_ds_2
  logic [0:0] buf_dark_weights_normed_gauss_ds_2_clk;
  logic [0:0] buf_dark_weights_normed_gauss_ds_2_rst;
  logic [0:0] buf_dark_weights_normed_gauss_ds_2_start;
  logic [0:0] buf_dark_weights_normed_gauss_ds_2_done;
  dark_weights_normed_gauss_ds_2 buf_dark_weights_normed_gauss_ds_2(.clk(buf_dark_weights_normed_gauss_ds_2_clk), .rst(buf_dark_weights_normed_gauss_ds_2_rst), .start(buf_dark_weights_normed_gauss_ds_2_start), .done(buf_dark_weights_normed_gauss_ds_2_done));
  assign buf_dark_weights_normed_gauss_ds_2_clk = clk;
  assign buf_dark_weights_normed_gauss_ds_2_rst = rst;
  assign buf_dark_weights_normed_gauss_ds_2_start = start;
  // Bindings to buf_dark_weights_normed_gauss_ds_2

  // buf_dark_weights_normed_gauss_ds_3
  logic [0:0] buf_dark_weights_normed_gauss_ds_3_clk;
  logic [0:0] buf_dark_weights_normed_gauss_ds_3_rst;
  logic [0:0] buf_dark_weights_normed_gauss_ds_3_start;
  logic [0:0] buf_dark_weights_normed_gauss_ds_3_done;
  dark_weights_normed_gauss_ds_3 buf_dark_weights_normed_gauss_ds_3(.clk(buf_dark_weights_normed_gauss_ds_3_clk), .rst(buf_dark_weights_normed_gauss_ds_3_rst), .start(buf_dark_weights_normed_gauss_ds_3_start), .done(buf_dark_weights_normed_gauss_ds_3_done));
  assign buf_dark_weights_normed_gauss_ds_3_clk = clk;
  assign buf_dark_weights_normed_gauss_ds_3_rst = rst;
  assign buf_dark_weights_normed_gauss_ds_3_start = start;
  // Bindings to buf_dark_weights_normed_gauss_ds_3

  // buf_final_merged_2
  logic [0:0] buf_final_merged_2_clk;
  logic [0:0] buf_final_merged_2_rst;
  logic [0:0] buf_final_merged_2_start;
  logic [0:0] buf_final_merged_2_done;
  final_merged_2 buf_final_merged_2(.clk(buf_final_merged_2_clk), .rst(buf_final_merged_2_rst), .start(buf_final_merged_2_start), .done(buf_final_merged_2_done));
  assign buf_final_merged_2_clk = clk;
  assign buf_final_merged_2_rst = rst;
  assign buf_final_merged_2_start = start;
  // Bindings to buf_final_merged_2

  // buf_fused_level_0
  logic [0:0] buf_fused_level_0_clk;
  logic [0:0] buf_fused_level_0_rst;
  logic [0:0] buf_fused_level_0_start;
  logic [0:0] buf_fused_level_0_done;
  fused_level_0 buf_fused_level_0(.clk(buf_fused_level_0_clk), .rst(buf_fused_level_0_rst), .start(buf_fused_level_0_start), .done(buf_fused_level_0_done));
  assign buf_fused_level_0_clk = clk;
  assign buf_fused_level_0_rst = rst;
  assign buf_fused_level_0_start = start;
  // Bindings to buf_fused_level_0

  // buf_fused_level_1
  logic [0:0] buf_fused_level_1_clk;
  logic [0:0] buf_fused_level_1_rst;
  logic [0:0] buf_fused_level_1_start;
  logic [0:0] buf_fused_level_1_done;
  fused_level_1 buf_fused_level_1(.clk(buf_fused_level_1_clk), .rst(buf_fused_level_1_rst), .start(buf_fused_level_1_start), .done(buf_fused_level_1_done));
  assign buf_fused_level_1_clk = clk;
  assign buf_fused_level_1_rst = rst;
  assign buf_fused_level_1_start = start;
  // Bindings to buf_fused_level_1

  // buf_fused_level_2
  logic [0:0] buf_fused_level_2_clk;
  logic [0:0] buf_fused_level_2_rst;
  logic [0:0] buf_fused_level_2_start;
  logic [0:0] buf_fused_level_2_done;
  fused_level_2 buf_fused_level_2(.clk(buf_fused_level_2_clk), .rst(buf_fused_level_2_rst), .start(buf_fused_level_2_start), .done(buf_fused_level_2_done));
  assign buf_fused_level_2_clk = clk;
  assign buf_fused_level_2_rst = rst;
  assign buf_fused_level_2_start = start;
  // Bindings to buf_fused_level_2

  // buf_fused_level_3
  logic [0:0] buf_fused_level_3_clk;
  logic [0:0] buf_fused_level_3_rst;
  logic [0:0] buf_fused_level_3_start;
  logic [0:0] buf_fused_level_3_done;
  fused_level_3 buf_fused_level_3(.clk(buf_fused_level_3_clk), .rst(buf_fused_level_3_rst), .start(buf_fused_level_3_start), .done(buf_fused_level_3_done));
  assign buf_fused_level_3_clk = clk;
  assign buf_fused_level_3_rst = rst;
  assign buf_fused_level_3_start = start;
  // Bindings to buf_fused_level_3

  // buf_in
  logic [0:0] buf_in_clk;
  logic [0:0] buf_in_rst;
  logic [0:0] buf_in_start;
  logic [0:0] buf_in_done;
  in buf_in(.clk(buf_in_clk), .rst(buf_in_rst), .start(buf_in_start), .done(buf_in_done));
  assign buf_in_clk = clk;
  assign buf_in_rst = rst;
  assign buf_in_start = start;
  // Bindings to buf_in

  // buf_in_off_chip
  logic [0:0] buf_in_off_chip_clk;
  logic [0:0] buf_in_off_chip_rst;
  logic [0:0] buf_in_off_chip_start;
  logic [0:0] buf_in_off_chip_done;
  in_off_chip buf_in_off_chip(.clk(buf_in_off_chip_clk), .rst(buf_in_off_chip_rst), .start(buf_in_off_chip_start), .done(buf_in_off_chip_done));
  assign buf_in_off_chip_clk = clk;
  assign buf_in_off_chip_rst = rst;
  assign buf_in_off_chip_start = start;
  // Bindings to buf_in_off_chip

  // buf_weight_sums
  logic [0:0] buf_weight_sums_clk;
  logic [0:0] buf_weight_sums_rst;
  logic [0:0] buf_weight_sums_start;
  logic [0:0] buf_weight_sums_done;
  weight_sums buf_weight_sums(.clk(buf_weight_sums_clk), .rst(buf_weight_sums_rst), .start(buf_weight_sums_start), .done(buf_weight_sums_done));
  assign buf_weight_sums_clk = clk;
  assign buf_weight_sums_rst = rst;
  assign buf_weight_sums_start = start;
  // Bindings to buf_weight_sums

  // op_bright_weights_normed_gauss_blur_2_update_0
  logic [0:0] op_bright_weights_normed_gauss_blur_2_update_0_clk;
  logic [0:0] op_bright_weights_normed_gauss_blur_2_update_0_rst;
  logic [0:0] op_bright_weights_normed_gauss_blur_2_update_0_start;
  logic [0:0] op_bright_weights_normed_gauss_blur_2_update_0_done;
  bright_weights_normed_gauss_blur_2_update_0 op_bright_weights_normed_gauss_blur_2_update_0(.clk(op_bright_weights_normed_gauss_blur_2_update_0_clk), .rst(op_bright_weights_normed_gauss_blur_2_update_0_rst), .start(op_bright_weights_normed_gauss_blur_2_update_0_start), .done(op_bright_weights_normed_gauss_blur_2_update_0_done));
  assign op_bright_weights_normed_gauss_blur_2_update_0_clk = clk;
  assign op_bright_weights_normed_gauss_blur_2_update_0_rst = rst;
  assign op_bright_weights_normed_gauss_blur_2_update_0_start = start;
  // Bindings to op_bright_weights_normed_gauss_blur_2_update_0

  // buf_pyramid_synthetic_exposure_fusion
  logic [0:0] buf_pyramid_synthetic_exposure_fusion_clk;
  logic [0:0] buf_pyramid_synthetic_exposure_fusion_rst;
  logic [0:0] buf_pyramid_synthetic_exposure_fusion_start;
  logic [0:0] buf_pyramid_synthetic_exposure_fusion_done;
  pyramid_synthetic_exposure_fusion buf_pyramid_synthetic_exposure_fusion(.clk(buf_pyramid_synthetic_exposure_fusion_clk), .rst(buf_pyramid_synthetic_exposure_fusion_rst), .start(buf_pyramid_synthetic_exposure_fusion_start), .done(buf_pyramid_synthetic_exposure_fusion_done));
  assign buf_pyramid_synthetic_exposure_fusion_clk = clk;
  assign buf_pyramid_synthetic_exposure_fusion_rst = rst;
  assign buf_pyramid_synthetic_exposure_fusion_start = start;
  // Bindings to buf_pyramid_synthetic_exposure_fusion

  // op_bright_gauss_blur_1_update_0
  logic [0:0] op_bright_gauss_blur_1_update_0_clk;
  logic [0:0] op_bright_gauss_blur_1_update_0_rst;
  logic [0:0] op_bright_gauss_blur_1_update_0_start;
  logic [0:0] op_bright_gauss_blur_1_update_0_done;
  bright_gauss_blur_1_update_0 op_bright_gauss_blur_1_update_0(.clk(op_bright_gauss_blur_1_update_0_clk), .rst(op_bright_gauss_blur_1_update_0_rst), .start(op_bright_gauss_blur_1_update_0_start), .done(op_bright_gauss_blur_1_update_0_done));
  assign op_bright_gauss_blur_1_update_0_clk = clk;
  assign op_bright_gauss_blur_1_update_0_rst = rst;
  assign op_bright_gauss_blur_1_update_0_start = start;
  // Bindings to op_bright_gauss_blur_1_update_0

  // op_bright_gauss_blur_2_update_0
  logic [0:0] op_bright_gauss_blur_2_update_0_clk;
  logic [0:0] op_bright_gauss_blur_2_update_0_rst;
  logic [0:0] op_bright_gauss_blur_2_update_0_start;
  logic [0:0] op_bright_gauss_blur_2_update_0_done;
  bright_gauss_blur_2_update_0 op_bright_gauss_blur_2_update_0(.clk(op_bright_gauss_blur_2_update_0_clk), .rst(op_bright_gauss_blur_2_update_0_rst), .start(op_bright_gauss_blur_2_update_0_start), .done(op_bright_gauss_blur_2_update_0_done));
  assign op_bright_gauss_blur_2_update_0_clk = clk;
  assign op_bright_gauss_blur_2_update_0_rst = rst;
  assign op_bright_gauss_blur_2_update_0_start = start;
  // Bindings to op_bright_gauss_blur_2_update_0

  // op_bright_gauss_blur_3_update_0
  logic [0:0] op_bright_gauss_blur_3_update_0_clk;
  logic [0:0] op_bright_gauss_blur_3_update_0_rst;
  logic [0:0] op_bright_gauss_blur_3_update_0_start;
  logic [0:0] op_bright_gauss_blur_3_update_0_done;
  bright_gauss_blur_3_update_0 op_bright_gauss_blur_3_update_0(.clk(op_bright_gauss_blur_3_update_0_clk), .rst(op_bright_gauss_blur_3_update_0_rst), .start(op_bright_gauss_blur_3_update_0_start), .done(op_bright_gauss_blur_3_update_0_done));
  assign op_bright_gauss_blur_3_update_0_clk = clk;
  assign op_bright_gauss_blur_3_update_0_rst = rst;
  assign op_bright_gauss_blur_3_update_0_start = start;
  // Bindings to op_bright_gauss_blur_3_update_0

  // op_bright_gauss_ds_1_update_0
  logic [0:0] op_bright_gauss_ds_1_update_0_clk;
  logic [0:0] op_bright_gauss_ds_1_update_0_rst;
  logic [0:0] op_bright_gauss_ds_1_update_0_start;
  logic [0:0] op_bright_gauss_ds_1_update_0_done;
  bright_gauss_ds_1_update_0 op_bright_gauss_ds_1_update_0(.clk(op_bright_gauss_ds_1_update_0_clk), .rst(op_bright_gauss_ds_1_update_0_rst), .start(op_bright_gauss_ds_1_update_0_start), .done(op_bright_gauss_ds_1_update_0_done));
  assign op_bright_gauss_ds_1_update_0_clk = clk;
  assign op_bright_gauss_ds_1_update_0_rst = rst;
  assign op_bright_gauss_ds_1_update_0_start = start;
  // Bindings to op_bright_gauss_ds_1_update_0

  // op_bright_gauss_ds_2_update_0
  logic [0:0] op_bright_gauss_ds_2_update_0_clk;
  logic [0:0] op_bright_gauss_ds_2_update_0_rst;
  logic [0:0] op_bright_gauss_ds_2_update_0_start;
  logic [0:0] op_bright_gauss_ds_2_update_0_done;
  bright_gauss_ds_2_update_0 op_bright_gauss_ds_2_update_0(.clk(op_bright_gauss_ds_2_update_0_clk), .rst(op_bright_gauss_ds_2_update_0_rst), .start(op_bright_gauss_ds_2_update_0_start), .done(op_bright_gauss_ds_2_update_0_done));
  assign op_bright_gauss_ds_2_update_0_clk = clk;
  assign op_bright_gauss_ds_2_update_0_rst = rst;
  assign op_bright_gauss_ds_2_update_0_start = start;
  // Bindings to op_bright_gauss_ds_2_update_0

  // op_bright_gauss_ds_3_update_0
  logic [0:0] op_bright_gauss_ds_3_update_0_clk;
  logic [0:0] op_bright_gauss_ds_3_update_0_rst;
  logic [0:0] op_bright_gauss_ds_3_update_0_start;
  logic [0:0] op_bright_gauss_ds_3_update_0_done;
  bright_gauss_ds_3_update_0 op_bright_gauss_ds_3_update_0(.clk(op_bright_gauss_ds_3_update_0_clk), .rst(op_bright_gauss_ds_3_update_0_rst), .start(op_bright_gauss_ds_3_update_0_start), .done(op_bright_gauss_ds_3_update_0_done));
  assign op_bright_gauss_ds_3_update_0_clk = clk;
  assign op_bright_gauss_ds_3_update_0_rst = rst;
  assign op_bright_gauss_ds_3_update_0_start = start;
  // Bindings to op_bright_gauss_ds_3_update_0

  // op_bright_laplace_us_0_update_0
  logic [0:0] op_bright_laplace_us_0_update_0_clk;
  logic [0:0] op_bright_laplace_us_0_update_0_rst;
  logic [0:0] op_bright_laplace_us_0_update_0_start;
  logic [0:0] op_bright_laplace_us_0_update_0_done;
  bright_laplace_us_0_update_0 op_bright_laplace_us_0_update_0(.clk(op_bright_laplace_us_0_update_0_clk), .rst(op_bright_laplace_us_0_update_0_rst), .start(op_bright_laplace_us_0_update_0_start), .done(op_bright_laplace_us_0_update_0_done));
  assign op_bright_laplace_us_0_update_0_clk = clk;
  assign op_bright_laplace_us_0_update_0_rst = rst;
  assign op_bright_laplace_us_0_update_0_start = start;
  // Bindings to op_bright_laplace_us_0_update_0

  // op_bright_laplace_diff_0_update_0
  logic [0:0] op_bright_laplace_diff_0_update_0_clk;
  logic [0:0] op_bright_laplace_diff_0_update_0_rst;
  logic [0:0] op_bright_laplace_diff_0_update_0_start;
  logic [0:0] op_bright_laplace_diff_0_update_0_done;
  bright_laplace_diff_0_update_0 op_bright_laplace_diff_0_update_0(.clk(op_bright_laplace_diff_0_update_0_clk), .rst(op_bright_laplace_diff_0_update_0_rst), .start(op_bright_laplace_diff_0_update_0_start), .done(op_bright_laplace_diff_0_update_0_done));
  assign op_bright_laplace_diff_0_update_0_clk = clk;
  assign op_bright_laplace_diff_0_update_0_rst = rst;
  assign op_bright_laplace_diff_0_update_0_start = start;
  // Bindings to op_bright_laplace_diff_0_update_0

  // op_bright_laplace_diff_1_update_0
  logic [0:0] op_bright_laplace_diff_1_update_0_clk;
  logic [0:0] op_bright_laplace_diff_1_update_0_rst;
  logic [0:0] op_bright_laplace_diff_1_update_0_start;
  logic [0:0] op_bright_laplace_diff_1_update_0_done;
  bright_laplace_diff_1_update_0 op_bright_laplace_diff_1_update_0(.clk(op_bright_laplace_diff_1_update_0_clk), .rst(op_bright_laplace_diff_1_update_0_rst), .start(op_bright_laplace_diff_1_update_0_start), .done(op_bright_laplace_diff_1_update_0_done));
  assign op_bright_laplace_diff_1_update_0_clk = clk;
  assign op_bright_laplace_diff_1_update_0_rst = rst;
  assign op_bright_laplace_diff_1_update_0_start = start;
  // Bindings to op_bright_laplace_diff_1_update_0

  // op_bright_laplace_diff_2_update_0
  logic [0:0] op_bright_laplace_diff_2_update_0_clk;
  logic [0:0] op_bright_laplace_diff_2_update_0_rst;
  logic [0:0] op_bright_laplace_diff_2_update_0_start;
  logic [0:0] op_bright_laplace_diff_2_update_0_done;
  bright_laplace_diff_2_update_0 op_bright_laplace_diff_2_update_0(.clk(op_bright_laplace_diff_2_update_0_clk), .rst(op_bright_laplace_diff_2_update_0_rst), .start(op_bright_laplace_diff_2_update_0_start), .done(op_bright_laplace_diff_2_update_0_done));
  assign op_bright_laplace_diff_2_update_0_clk = clk;
  assign op_bright_laplace_diff_2_update_0_rst = rst;
  assign op_bright_laplace_diff_2_update_0_start = start;
  // Bindings to op_bright_laplace_diff_2_update_0

  // op_bright_laplace_us_1_update_0
  logic [0:0] op_bright_laplace_us_1_update_0_clk;
  logic [0:0] op_bright_laplace_us_1_update_0_rst;
  logic [0:0] op_bright_laplace_us_1_update_0_start;
  logic [0:0] op_bright_laplace_us_1_update_0_done;
  bright_laplace_us_1_update_0 op_bright_laplace_us_1_update_0(.clk(op_bright_laplace_us_1_update_0_clk), .rst(op_bright_laplace_us_1_update_0_rst), .start(op_bright_laplace_us_1_update_0_start), .done(op_bright_laplace_us_1_update_0_done));
  assign op_bright_laplace_us_1_update_0_clk = clk;
  assign op_bright_laplace_us_1_update_0_rst = rst;
  assign op_bright_laplace_us_1_update_0_start = start;
  // Bindings to op_bright_laplace_us_1_update_0

  // op_bright_laplace_us_2_update_0
  logic [0:0] op_bright_laplace_us_2_update_0_clk;
  logic [0:0] op_bright_laplace_us_2_update_0_rst;
  logic [0:0] op_bright_laplace_us_2_update_0_start;
  logic [0:0] op_bright_laplace_us_2_update_0_done;
  bright_laplace_us_2_update_0 op_bright_laplace_us_2_update_0(.clk(op_bright_laplace_us_2_update_0_clk), .rst(op_bright_laplace_us_2_update_0_rst), .start(op_bright_laplace_us_2_update_0_start), .done(op_bright_laplace_us_2_update_0_done));
  assign op_bright_laplace_us_2_update_0_clk = clk;
  assign op_bright_laplace_us_2_update_0_rst = rst;
  assign op_bright_laplace_us_2_update_0_start = start;
  // Bindings to op_bright_laplace_us_2_update_0

  // op_bright_weights_normed_update_0
  logic [0:0] op_bright_weights_normed_update_0_clk;
  logic [0:0] op_bright_weights_normed_update_0_rst;
  logic [0:0] op_bright_weights_normed_update_0_start;
  logic [0:0] op_bright_weights_normed_update_0_done;
  bright_weights_normed_update_0 op_bright_weights_normed_update_0(.clk(op_bright_weights_normed_update_0_clk), .rst(op_bright_weights_normed_update_0_rst), .start(op_bright_weights_normed_update_0_start), .done(op_bright_weights_normed_update_0_done));
  assign op_bright_weights_normed_update_0_clk = clk;
  assign op_bright_weights_normed_update_0_rst = rst;
  assign op_bright_weights_normed_update_0_start = start;
  // Bindings to op_bright_weights_normed_update_0

  // op_dark_weights_normed_gauss_blur_2_update_0
  logic [0:0] op_dark_weights_normed_gauss_blur_2_update_0_clk;
  logic [0:0] op_dark_weights_normed_gauss_blur_2_update_0_rst;
  logic [0:0] op_dark_weights_normed_gauss_blur_2_update_0_start;
  logic [0:0] op_dark_weights_normed_gauss_blur_2_update_0_done;
  dark_weights_normed_gauss_blur_2_update_0 op_dark_weights_normed_gauss_blur_2_update_0(.clk(op_dark_weights_normed_gauss_blur_2_update_0_clk), .rst(op_dark_weights_normed_gauss_blur_2_update_0_rst), .start(op_dark_weights_normed_gauss_blur_2_update_0_start), .done(op_dark_weights_normed_gauss_blur_2_update_0_done));
  assign op_dark_weights_normed_gauss_blur_2_update_0_clk = clk;
  assign op_dark_weights_normed_gauss_blur_2_update_0_rst = rst;
  assign op_dark_weights_normed_gauss_blur_2_update_0_start = start;
  // Bindings to op_dark_weights_normed_gauss_blur_2_update_0

  // op_bright_weights_normed_gauss_blur_1_update_0
  logic [0:0] op_bright_weights_normed_gauss_blur_1_update_0_clk;
  logic [0:0] op_bright_weights_normed_gauss_blur_1_update_0_rst;
  logic [0:0] op_bright_weights_normed_gauss_blur_1_update_0_start;
  logic [0:0] op_bright_weights_normed_gauss_blur_1_update_0_done;
  bright_weights_normed_gauss_blur_1_update_0 op_bright_weights_normed_gauss_blur_1_update_0(.clk(op_bright_weights_normed_gauss_blur_1_update_0_clk), .rst(op_bright_weights_normed_gauss_blur_1_update_0_rst), .start(op_bright_weights_normed_gauss_blur_1_update_0_start), .done(op_bright_weights_normed_gauss_blur_1_update_0_done));
  assign op_bright_weights_normed_gauss_blur_1_update_0_clk = clk;
  assign op_bright_weights_normed_gauss_blur_1_update_0_rst = rst;
  assign op_bright_weights_normed_gauss_blur_1_update_0_start = start;
  // Bindings to op_bright_weights_normed_gauss_blur_1_update_0

  // op_bright_weights_normed_gauss_blur_3_update_0
  logic [0:0] op_bright_weights_normed_gauss_blur_3_update_0_clk;
  logic [0:0] op_bright_weights_normed_gauss_blur_3_update_0_rst;
  logic [0:0] op_bright_weights_normed_gauss_blur_3_update_0_start;
  logic [0:0] op_bright_weights_normed_gauss_blur_3_update_0_done;
  bright_weights_normed_gauss_blur_3_update_0 op_bright_weights_normed_gauss_blur_3_update_0(.clk(op_bright_weights_normed_gauss_blur_3_update_0_clk), .rst(op_bright_weights_normed_gauss_blur_3_update_0_rst), .start(op_bright_weights_normed_gauss_blur_3_update_0_start), .done(op_bright_weights_normed_gauss_blur_3_update_0_done));
  assign op_bright_weights_normed_gauss_blur_3_update_0_clk = clk;
  assign op_bright_weights_normed_gauss_blur_3_update_0_rst = rst;
  assign op_bright_weights_normed_gauss_blur_3_update_0_start = start;
  // Bindings to op_bright_weights_normed_gauss_blur_3_update_0

  // op_bright_weights_normed_gauss_ds_1_update_0
  logic [0:0] op_bright_weights_normed_gauss_ds_1_update_0_clk;
  logic [0:0] op_bright_weights_normed_gauss_ds_1_update_0_rst;
  logic [0:0] op_bright_weights_normed_gauss_ds_1_update_0_start;
  logic [0:0] op_bright_weights_normed_gauss_ds_1_update_0_done;
  bright_weights_normed_gauss_ds_1_update_0 op_bright_weights_normed_gauss_ds_1_update_0(.clk(op_bright_weights_normed_gauss_ds_1_update_0_clk), .rst(op_bright_weights_normed_gauss_ds_1_update_0_rst), .start(op_bright_weights_normed_gauss_ds_1_update_0_start), .done(op_bright_weights_normed_gauss_ds_1_update_0_done));
  assign op_bright_weights_normed_gauss_ds_1_update_0_clk = clk;
  assign op_bright_weights_normed_gauss_ds_1_update_0_rst = rst;
  assign op_bright_weights_normed_gauss_ds_1_update_0_start = start;
  // Bindings to op_bright_weights_normed_gauss_ds_1_update_0

  // op_bright_weights_normed_gauss_ds_2_update_0
  logic [0:0] op_bright_weights_normed_gauss_ds_2_update_0_clk;
  logic [0:0] op_bright_weights_normed_gauss_ds_2_update_0_rst;
  logic [0:0] op_bright_weights_normed_gauss_ds_2_update_0_start;
  logic [0:0] op_bright_weights_normed_gauss_ds_2_update_0_done;
  bright_weights_normed_gauss_ds_2_update_0 op_bright_weights_normed_gauss_ds_2_update_0(.clk(op_bright_weights_normed_gauss_ds_2_update_0_clk), .rst(op_bright_weights_normed_gauss_ds_2_update_0_rst), .start(op_bright_weights_normed_gauss_ds_2_update_0_start), .done(op_bright_weights_normed_gauss_ds_2_update_0_done));
  assign op_bright_weights_normed_gauss_ds_2_update_0_clk = clk;
  assign op_bright_weights_normed_gauss_ds_2_update_0_rst = rst;
  assign op_bright_weights_normed_gauss_ds_2_update_0_start = start;
  // Bindings to op_bright_weights_normed_gauss_ds_2_update_0

  // op_bright_weights_normed_gauss_ds_3_update_0
  logic [0:0] op_bright_weights_normed_gauss_ds_3_update_0_clk;
  logic [0:0] op_bright_weights_normed_gauss_ds_3_update_0_rst;
  logic [0:0] op_bright_weights_normed_gauss_ds_3_update_0_start;
  logic [0:0] op_bright_weights_normed_gauss_ds_3_update_0_done;
  bright_weights_normed_gauss_ds_3_update_0 op_bright_weights_normed_gauss_ds_3_update_0(.clk(op_bright_weights_normed_gauss_ds_3_update_0_clk), .rst(op_bright_weights_normed_gauss_ds_3_update_0_rst), .start(op_bright_weights_normed_gauss_ds_3_update_0_start), .done(op_bright_weights_normed_gauss_ds_3_update_0_done));
  assign op_bright_weights_normed_gauss_ds_3_update_0_clk = clk;
  assign op_bright_weights_normed_gauss_ds_3_update_0_rst = rst;
  assign op_bright_weights_normed_gauss_ds_3_update_0_start = start;
  // Bindings to op_bright_weights_normed_gauss_ds_3_update_0

  // op_bright_weights_update_0
  logic [0:0] op_bright_weights_update_0_clk;
  logic [0:0] op_bright_weights_update_0_rst;
  logic [0:0] op_bright_weights_update_0_start;
  logic [0:0] op_bright_weights_update_0_done;
  bright_weights_update_0 op_bright_weights_update_0(.clk(op_bright_weights_update_0_clk), .rst(op_bright_weights_update_0_rst), .start(op_bright_weights_update_0_start), .done(op_bright_weights_update_0_done));
  assign op_bright_weights_update_0_clk = clk;
  assign op_bright_weights_update_0_rst = rst;
  assign op_bright_weights_update_0_start = start;
  // Bindings to op_bright_weights_update_0

  // op_dark_gauss_blur_1_update_0
  logic [0:0] op_dark_gauss_blur_1_update_0_clk;
  logic [0:0] op_dark_gauss_blur_1_update_0_rst;
  logic [0:0] op_dark_gauss_blur_1_update_0_start;
  logic [0:0] op_dark_gauss_blur_1_update_0_done;
  dark_gauss_blur_1_update_0 op_dark_gauss_blur_1_update_0(.clk(op_dark_gauss_blur_1_update_0_clk), .rst(op_dark_gauss_blur_1_update_0_rst), .start(op_dark_gauss_blur_1_update_0_start), .done(op_dark_gauss_blur_1_update_0_done));
  assign op_dark_gauss_blur_1_update_0_clk = clk;
  assign op_dark_gauss_blur_1_update_0_rst = rst;
  assign op_dark_gauss_blur_1_update_0_start = start;
  // Bindings to op_dark_gauss_blur_1_update_0

  // op_dark_gauss_blur_2_update_0
  logic [0:0] op_dark_gauss_blur_2_update_0_clk;
  logic [0:0] op_dark_gauss_blur_2_update_0_rst;
  logic [0:0] op_dark_gauss_blur_2_update_0_start;
  logic [0:0] op_dark_gauss_blur_2_update_0_done;
  dark_gauss_blur_2_update_0 op_dark_gauss_blur_2_update_0(.clk(op_dark_gauss_blur_2_update_0_clk), .rst(op_dark_gauss_blur_2_update_0_rst), .start(op_dark_gauss_blur_2_update_0_start), .done(op_dark_gauss_blur_2_update_0_done));
  assign op_dark_gauss_blur_2_update_0_clk = clk;
  assign op_dark_gauss_blur_2_update_0_rst = rst;
  assign op_dark_gauss_blur_2_update_0_start = start;
  // Bindings to op_dark_gauss_blur_2_update_0

  // op_dark_gauss_blur_3_update_0
  logic [0:0] op_dark_gauss_blur_3_update_0_clk;
  logic [0:0] op_dark_gauss_blur_3_update_0_rst;
  logic [0:0] op_dark_gauss_blur_3_update_0_start;
  logic [0:0] op_dark_gauss_blur_3_update_0_done;
  dark_gauss_blur_3_update_0 op_dark_gauss_blur_3_update_0(.clk(op_dark_gauss_blur_3_update_0_clk), .rst(op_dark_gauss_blur_3_update_0_rst), .start(op_dark_gauss_blur_3_update_0_start), .done(op_dark_gauss_blur_3_update_0_done));
  assign op_dark_gauss_blur_3_update_0_clk = clk;
  assign op_dark_gauss_blur_3_update_0_rst = rst;
  assign op_dark_gauss_blur_3_update_0_start = start;
  // Bindings to op_dark_gauss_blur_3_update_0

  // op_dark_gauss_ds_1_update_0
  logic [0:0] op_dark_gauss_ds_1_update_0_clk;
  logic [0:0] op_dark_gauss_ds_1_update_0_rst;
  logic [0:0] op_dark_gauss_ds_1_update_0_start;
  logic [0:0] op_dark_gauss_ds_1_update_0_done;
  dark_gauss_ds_1_update_0 op_dark_gauss_ds_1_update_0(.clk(op_dark_gauss_ds_1_update_0_clk), .rst(op_dark_gauss_ds_1_update_0_rst), .start(op_dark_gauss_ds_1_update_0_start), .done(op_dark_gauss_ds_1_update_0_done));
  assign op_dark_gauss_ds_1_update_0_clk = clk;
  assign op_dark_gauss_ds_1_update_0_rst = rst;
  assign op_dark_gauss_ds_1_update_0_start = start;
  // Bindings to op_dark_gauss_ds_1_update_0

  // op_dark_gauss_ds_2_update_0
  logic [0:0] op_dark_gauss_ds_2_update_0_clk;
  logic [0:0] op_dark_gauss_ds_2_update_0_rst;
  logic [0:0] op_dark_gauss_ds_2_update_0_start;
  logic [0:0] op_dark_gauss_ds_2_update_0_done;
  dark_gauss_ds_2_update_0 op_dark_gauss_ds_2_update_0(.clk(op_dark_gauss_ds_2_update_0_clk), .rst(op_dark_gauss_ds_2_update_0_rst), .start(op_dark_gauss_ds_2_update_0_start), .done(op_dark_gauss_ds_2_update_0_done));
  assign op_dark_gauss_ds_2_update_0_clk = clk;
  assign op_dark_gauss_ds_2_update_0_rst = rst;
  assign op_dark_gauss_ds_2_update_0_start = start;
  // Bindings to op_dark_gauss_ds_2_update_0

  // op_dark_gauss_ds_3_update_0
  logic [0:0] op_dark_gauss_ds_3_update_0_clk;
  logic [0:0] op_dark_gauss_ds_3_update_0_rst;
  logic [0:0] op_dark_gauss_ds_3_update_0_start;
  logic [0:0] op_dark_gauss_ds_3_update_0_done;
  dark_gauss_ds_3_update_0 op_dark_gauss_ds_3_update_0(.clk(op_dark_gauss_ds_3_update_0_clk), .rst(op_dark_gauss_ds_3_update_0_rst), .start(op_dark_gauss_ds_3_update_0_start), .done(op_dark_gauss_ds_3_update_0_done));
  assign op_dark_gauss_ds_3_update_0_clk = clk;
  assign op_dark_gauss_ds_3_update_0_rst = rst;
  assign op_dark_gauss_ds_3_update_0_start = start;
  // Bindings to op_dark_gauss_ds_3_update_0

  // op_dark_laplace_diff_0_update_0
  logic [0:0] op_dark_laplace_diff_0_update_0_clk;
  logic [0:0] op_dark_laplace_diff_0_update_0_rst;
  logic [0:0] op_dark_laplace_diff_0_update_0_start;
  logic [0:0] op_dark_laplace_diff_0_update_0_done;
  dark_laplace_diff_0_update_0 op_dark_laplace_diff_0_update_0(.clk(op_dark_laplace_diff_0_update_0_clk), .rst(op_dark_laplace_diff_0_update_0_rst), .start(op_dark_laplace_diff_0_update_0_start), .done(op_dark_laplace_diff_0_update_0_done));
  assign op_dark_laplace_diff_0_update_0_clk = clk;
  assign op_dark_laplace_diff_0_update_0_rst = rst;
  assign op_dark_laplace_diff_0_update_0_start = start;
  // Bindings to op_dark_laplace_diff_0_update_0

  // op_dark_laplace_diff_1_update_0
  logic [0:0] op_dark_laplace_diff_1_update_0_clk;
  logic [0:0] op_dark_laplace_diff_1_update_0_rst;
  logic [0:0] op_dark_laplace_diff_1_update_0_start;
  logic [0:0] op_dark_laplace_diff_1_update_0_done;
  dark_laplace_diff_1_update_0 op_dark_laplace_diff_1_update_0(.clk(op_dark_laplace_diff_1_update_0_clk), .rst(op_dark_laplace_diff_1_update_0_rst), .start(op_dark_laplace_diff_1_update_0_start), .done(op_dark_laplace_diff_1_update_0_done));
  assign op_dark_laplace_diff_1_update_0_clk = clk;
  assign op_dark_laplace_diff_1_update_0_rst = rst;
  assign op_dark_laplace_diff_1_update_0_start = start;
  // Bindings to op_dark_laplace_diff_1_update_0

  // op_dark_laplace_diff_2_update_0
  logic [0:0] op_dark_laplace_diff_2_update_0_clk;
  logic [0:0] op_dark_laplace_diff_2_update_0_rst;
  logic [0:0] op_dark_laplace_diff_2_update_0_start;
  logic [0:0] op_dark_laplace_diff_2_update_0_done;
  dark_laplace_diff_2_update_0 op_dark_laplace_diff_2_update_0(.clk(op_dark_laplace_diff_2_update_0_clk), .rst(op_dark_laplace_diff_2_update_0_rst), .start(op_dark_laplace_diff_2_update_0_start), .done(op_dark_laplace_diff_2_update_0_done));
  assign op_dark_laplace_diff_2_update_0_clk = clk;
  assign op_dark_laplace_diff_2_update_0_rst = rst;
  assign op_dark_laplace_diff_2_update_0_start = start;
  // Bindings to op_dark_laplace_diff_2_update_0

  // op_dark_laplace_us_0_update_0
  logic [0:0] op_dark_laplace_us_0_update_0_clk;
  logic [0:0] op_dark_laplace_us_0_update_0_rst;
  logic [0:0] op_dark_laplace_us_0_update_0_start;
  logic [0:0] op_dark_laplace_us_0_update_0_done;
  dark_laplace_us_0_update_0 op_dark_laplace_us_0_update_0(.clk(op_dark_laplace_us_0_update_0_clk), .rst(op_dark_laplace_us_0_update_0_rst), .start(op_dark_laplace_us_0_update_0_start), .done(op_dark_laplace_us_0_update_0_done));
  assign op_dark_laplace_us_0_update_0_clk = clk;
  assign op_dark_laplace_us_0_update_0_rst = rst;
  assign op_dark_laplace_us_0_update_0_start = start;
  // Bindings to op_dark_laplace_us_0_update_0

  // op_dark_laplace_us_1_update_0
  logic [0:0] op_dark_laplace_us_1_update_0_clk;
  logic [0:0] op_dark_laplace_us_1_update_0_rst;
  logic [0:0] op_dark_laplace_us_1_update_0_start;
  logic [0:0] op_dark_laplace_us_1_update_0_done;
  dark_laplace_us_1_update_0 op_dark_laplace_us_1_update_0(.clk(op_dark_laplace_us_1_update_0_clk), .rst(op_dark_laplace_us_1_update_0_rst), .start(op_dark_laplace_us_1_update_0_start), .done(op_dark_laplace_us_1_update_0_done));
  assign op_dark_laplace_us_1_update_0_clk = clk;
  assign op_dark_laplace_us_1_update_0_rst = rst;
  assign op_dark_laplace_us_1_update_0_start = start;
  // Bindings to op_dark_laplace_us_1_update_0

  // op_dark_laplace_us_2_update_0
  logic [0:0] op_dark_laplace_us_2_update_0_clk;
  logic [0:0] op_dark_laplace_us_2_update_0_rst;
  logic [0:0] op_dark_laplace_us_2_update_0_start;
  logic [0:0] op_dark_laplace_us_2_update_0_done;
  dark_laplace_us_2_update_0 op_dark_laplace_us_2_update_0(.clk(op_dark_laplace_us_2_update_0_clk), .rst(op_dark_laplace_us_2_update_0_rst), .start(op_dark_laplace_us_2_update_0_start), .done(op_dark_laplace_us_2_update_0_done));
  assign op_dark_laplace_us_2_update_0_clk = clk;
  assign op_dark_laplace_us_2_update_0_rst = rst;
  assign op_dark_laplace_us_2_update_0_start = start;
  // Bindings to op_dark_laplace_us_2_update_0

  // op_dark_update_0
  logic [0:0] op_dark_update_0_clk;
  logic [0:0] op_dark_update_0_rst;
  logic [0:0] op_dark_update_0_start;
  logic [0:0] op_dark_update_0_done;
  dark_update_0 op_dark_update_0(.clk(op_dark_update_0_clk), .rst(op_dark_update_0_rst), .start(op_dark_update_0_start), .done(op_dark_update_0_done));
  assign op_dark_update_0_clk = clk;
  assign op_dark_update_0_rst = rst;
  assign op_dark_update_0_start = start;
  // Bindings to op_dark_update_0

  // op_dark_weights_normed_update_0
  logic [0:0] op_dark_weights_normed_update_0_clk;
  logic [0:0] op_dark_weights_normed_update_0_rst;
  logic [0:0] op_dark_weights_normed_update_0_start;
  logic [0:0] op_dark_weights_normed_update_0_done;
  dark_weights_normed_update_0 op_dark_weights_normed_update_0(.clk(op_dark_weights_normed_update_0_clk), .rst(op_dark_weights_normed_update_0_rst), .start(op_dark_weights_normed_update_0_start), .done(op_dark_weights_normed_update_0_done));
  assign op_dark_weights_normed_update_0_clk = clk;
  assign op_dark_weights_normed_update_0_rst = rst;
  assign op_dark_weights_normed_update_0_start = start;
  // Bindings to op_dark_weights_normed_update_0

  // op_final_merged_0_update_0
  logic [0:0] op_final_merged_0_update_0_clk;
  logic [0:0] op_final_merged_0_update_0_rst;
  logic [0:0] op_final_merged_0_update_0_start;
  logic [0:0] op_final_merged_0_update_0_done;
  final_merged_0_update_0 op_final_merged_0_update_0(.clk(op_final_merged_0_update_0_clk), .rst(op_final_merged_0_update_0_rst), .start(op_final_merged_0_update_0_start), .done(op_final_merged_0_update_0_done));
  assign op_final_merged_0_update_0_clk = clk;
  assign op_final_merged_0_update_0_rst = rst;
  assign op_final_merged_0_update_0_start = start;
  // Bindings to op_final_merged_0_update_0

  // op_dark_weights_normed_gauss_blur_1_update_0
  logic [0:0] op_dark_weights_normed_gauss_blur_1_update_0_clk;
  logic [0:0] op_dark_weights_normed_gauss_blur_1_update_0_rst;
  logic [0:0] op_dark_weights_normed_gauss_blur_1_update_0_start;
  logic [0:0] op_dark_weights_normed_gauss_blur_1_update_0_done;
  dark_weights_normed_gauss_blur_1_update_0 op_dark_weights_normed_gauss_blur_1_update_0(.clk(op_dark_weights_normed_gauss_blur_1_update_0_clk), .rst(op_dark_weights_normed_gauss_blur_1_update_0_rst), .start(op_dark_weights_normed_gauss_blur_1_update_0_start), .done(op_dark_weights_normed_gauss_blur_1_update_0_done));
  assign op_dark_weights_normed_gauss_blur_1_update_0_clk = clk;
  assign op_dark_weights_normed_gauss_blur_1_update_0_rst = rst;
  assign op_dark_weights_normed_gauss_blur_1_update_0_start = start;
  // Bindings to op_dark_weights_normed_gauss_blur_1_update_0

  // op_dark_weights_normed_gauss_blur_3_update_0
  logic [0:0] op_dark_weights_normed_gauss_blur_3_update_0_clk;
  logic [0:0] op_dark_weights_normed_gauss_blur_3_update_0_rst;
  logic [0:0] op_dark_weights_normed_gauss_blur_3_update_0_start;
  logic [0:0] op_dark_weights_normed_gauss_blur_3_update_0_done;
  dark_weights_normed_gauss_blur_3_update_0 op_dark_weights_normed_gauss_blur_3_update_0(.clk(op_dark_weights_normed_gauss_blur_3_update_0_clk), .rst(op_dark_weights_normed_gauss_blur_3_update_0_rst), .start(op_dark_weights_normed_gauss_blur_3_update_0_start), .done(op_dark_weights_normed_gauss_blur_3_update_0_done));
  assign op_dark_weights_normed_gauss_blur_3_update_0_clk = clk;
  assign op_dark_weights_normed_gauss_blur_3_update_0_rst = rst;
  assign op_dark_weights_normed_gauss_blur_3_update_0_start = start;
  // Bindings to op_dark_weights_normed_gauss_blur_3_update_0

  // op_dark_weights_normed_gauss_ds_1_update_0
  logic [0:0] op_dark_weights_normed_gauss_ds_1_update_0_clk;
  logic [0:0] op_dark_weights_normed_gauss_ds_1_update_0_rst;
  logic [0:0] op_dark_weights_normed_gauss_ds_1_update_0_start;
  logic [0:0] op_dark_weights_normed_gauss_ds_1_update_0_done;
  dark_weights_normed_gauss_ds_1_update_0 op_dark_weights_normed_gauss_ds_1_update_0(.clk(op_dark_weights_normed_gauss_ds_1_update_0_clk), .rst(op_dark_weights_normed_gauss_ds_1_update_0_rst), .start(op_dark_weights_normed_gauss_ds_1_update_0_start), .done(op_dark_weights_normed_gauss_ds_1_update_0_done));
  assign op_dark_weights_normed_gauss_ds_1_update_0_clk = clk;
  assign op_dark_weights_normed_gauss_ds_1_update_0_rst = rst;
  assign op_dark_weights_normed_gauss_ds_1_update_0_start = start;
  // Bindings to op_dark_weights_normed_gauss_ds_1_update_0

  // op_dark_weights_normed_gauss_ds_2_update_0
  logic [0:0] op_dark_weights_normed_gauss_ds_2_update_0_clk;
  logic [0:0] op_dark_weights_normed_gauss_ds_2_update_0_rst;
  logic [0:0] op_dark_weights_normed_gauss_ds_2_update_0_start;
  logic [0:0] op_dark_weights_normed_gauss_ds_2_update_0_done;
  dark_weights_normed_gauss_ds_2_update_0 op_dark_weights_normed_gauss_ds_2_update_0(.clk(op_dark_weights_normed_gauss_ds_2_update_0_clk), .rst(op_dark_weights_normed_gauss_ds_2_update_0_rst), .start(op_dark_weights_normed_gauss_ds_2_update_0_start), .done(op_dark_weights_normed_gauss_ds_2_update_0_done));
  assign op_dark_weights_normed_gauss_ds_2_update_0_clk = clk;
  assign op_dark_weights_normed_gauss_ds_2_update_0_rst = rst;
  assign op_dark_weights_normed_gauss_ds_2_update_0_start = start;
  // Bindings to op_dark_weights_normed_gauss_ds_2_update_0

  // op_dark_weights_normed_gauss_ds_3_update_0
  logic [0:0] op_dark_weights_normed_gauss_ds_3_update_0_clk;
  logic [0:0] op_dark_weights_normed_gauss_ds_3_update_0_rst;
  logic [0:0] op_dark_weights_normed_gauss_ds_3_update_0_start;
  logic [0:0] op_dark_weights_normed_gauss_ds_3_update_0_done;
  dark_weights_normed_gauss_ds_3_update_0 op_dark_weights_normed_gauss_ds_3_update_0(.clk(op_dark_weights_normed_gauss_ds_3_update_0_clk), .rst(op_dark_weights_normed_gauss_ds_3_update_0_rst), .start(op_dark_weights_normed_gauss_ds_3_update_0_start), .done(op_dark_weights_normed_gauss_ds_3_update_0_done));
  assign op_dark_weights_normed_gauss_ds_3_update_0_clk = clk;
  assign op_dark_weights_normed_gauss_ds_3_update_0_rst = rst;
  assign op_dark_weights_normed_gauss_ds_3_update_0_start = start;
  // Bindings to op_dark_weights_normed_gauss_ds_3_update_0

  // op_dark_weights_update_0
  logic [0:0] op_dark_weights_update_0_clk;
  logic [0:0] op_dark_weights_update_0_rst;
  logic [0:0] op_dark_weights_update_0_start;
  logic [0:0] op_dark_weights_update_0_done;
  dark_weights_update_0 op_dark_weights_update_0(.clk(op_dark_weights_update_0_clk), .rst(op_dark_weights_update_0_rst), .start(op_dark_weights_update_0_start), .done(op_dark_weights_update_0_done));
  assign op_dark_weights_update_0_clk = clk;
  assign op_dark_weights_update_0_rst = rst;
  assign op_dark_weights_update_0_start = start;
  // Bindings to op_dark_weights_update_0

  // op_final_merged_1_update_0
  logic [0:0] op_final_merged_1_update_0_clk;
  logic [0:0] op_final_merged_1_update_0_rst;
  logic [0:0] op_final_merged_1_update_0_start;
  logic [0:0] op_final_merged_1_update_0_done;
  final_merged_1_update_0 op_final_merged_1_update_0(.clk(op_final_merged_1_update_0_clk), .rst(op_final_merged_1_update_0_rst), .start(op_final_merged_1_update_0_start), .done(op_final_merged_1_update_0_done));
  assign op_final_merged_1_update_0_clk = clk;
  assign op_final_merged_1_update_0_rst = rst;
  assign op_final_merged_1_update_0_start = start;
  // Bindings to op_final_merged_1_update_0

  // op_final_merged_2_update_0
  logic [0:0] op_final_merged_2_update_0_clk;
  logic [0:0] op_final_merged_2_update_0_rst;
  logic [0:0] op_final_merged_2_update_0_start;
  logic [0:0] op_final_merged_2_update_0_done;
  final_merged_2_update_0 op_final_merged_2_update_0(.clk(op_final_merged_2_update_0_clk), .rst(op_final_merged_2_update_0_rst), .start(op_final_merged_2_update_0_start), .done(op_final_merged_2_update_0_done));
  assign op_final_merged_2_update_0_clk = clk;
  assign op_final_merged_2_update_0_rst = rst;
  assign op_final_merged_2_update_0_start = start;
  // Bindings to op_final_merged_2_update_0

  // op_in_update_0
  logic [0:0] op_in_update_0_clk;
  logic [0:0] op_in_update_0_rst;
  logic [0:0] op_in_update_0_start;
  logic [0:0] op_in_update_0_done;
  in_update_0 op_in_update_0(.clk(op_in_update_0_clk), .rst(op_in_update_0_rst), .start(op_in_update_0_start), .done(op_in_update_0_done));
  assign op_in_update_0_clk = clk;
  assign op_in_update_0_rst = rst;
  assign op_in_update_0_start = start;
  // Bindings to op_in_update_0

  // op_fused_level_0_update_0
  logic [0:0] op_fused_level_0_update_0_clk;
  logic [0:0] op_fused_level_0_update_0_rst;
  logic [0:0] op_fused_level_0_update_0_start;
  logic [0:0] op_fused_level_0_update_0_done;
  fused_level_0_update_0 op_fused_level_0_update_0(.clk(op_fused_level_0_update_0_clk), .rst(op_fused_level_0_update_0_rst), .start(op_fused_level_0_update_0_start), .done(op_fused_level_0_update_0_done));
  assign op_fused_level_0_update_0_clk = clk;
  assign op_fused_level_0_update_0_rst = rst;
  assign op_fused_level_0_update_0_start = start;
  // Bindings to op_fused_level_0_update_0

  // op_fused_level_1_update_0
  logic [0:0] op_fused_level_1_update_0_clk;
  logic [0:0] op_fused_level_1_update_0_rst;
  logic [0:0] op_fused_level_1_update_0_start;
  logic [0:0] op_fused_level_1_update_0_done;
  fused_level_1_update_0 op_fused_level_1_update_0(.clk(op_fused_level_1_update_0_clk), .rst(op_fused_level_1_update_0_rst), .start(op_fused_level_1_update_0_start), .done(op_fused_level_1_update_0_done));
  assign op_fused_level_1_update_0_clk = clk;
  assign op_fused_level_1_update_0_rst = rst;
  assign op_fused_level_1_update_0_start = start;
  // Bindings to op_fused_level_1_update_0

  // op_fused_level_2_update_0
  logic [0:0] op_fused_level_2_update_0_clk;
  logic [0:0] op_fused_level_2_update_0_rst;
  logic [0:0] op_fused_level_2_update_0_start;
  logic [0:0] op_fused_level_2_update_0_done;
  fused_level_2_update_0 op_fused_level_2_update_0(.clk(op_fused_level_2_update_0_clk), .rst(op_fused_level_2_update_0_rst), .start(op_fused_level_2_update_0_start), .done(op_fused_level_2_update_0_done));
  assign op_fused_level_2_update_0_clk = clk;
  assign op_fused_level_2_update_0_rst = rst;
  assign op_fused_level_2_update_0_start = start;
  // Bindings to op_fused_level_2_update_0

  // op_fused_level_3_update_0
  logic [0:0] op_fused_level_3_update_0_clk;
  logic [0:0] op_fused_level_3_update_0_rst;
  logic [0:0] op_fused_level_3_update_0_start;
  logic [0:0] op_fused_level_3_update_0_done;
  fused_level_3_update_0 op_fused_level_3_update_0(.clk(op_fused_level_3_update_0_clk), .rst(op_fused_level_3_update_0_rst), .start(op_fused_level_3_update_0_start), .done(op_fused_level_3_update_0_done));
  assign op_fused_level_3_update_0_clk = clk;
  assign op_fused_level_3_update_0_rst = rst;
  assign op_fused_level_3_update_0_start = start;
  // Bindings to op_fused_level_3_update_0

  // op_weight_sums_update_0
  logic [0:0] op_weight_sums_update_0_clk;
  logic [0:0] op_weight_sums_update_0_rst;
  logic [0:0] op_weight_sums_update_0_start;
  logic [0:0] op_weight_sums_update_0_done;
  weight_sums_update_0 op_weight_sums_update_0(.clk(op_weight_sums_update_0_clk), .rst(op_weight_sums_update_0_rst), .start(op_weight_sums_update_0_start), .done(op_weight_sums_update_0_done));
  assign op_weight_sums_update_0_clk = clk;
  assign op_weight_sums_update_0_rst = rst;
  assign op_weight_sums_update_0_start = start;
  // Bindings to op_weight_sums_update_0

  // op_pyramid_synthetic_exposure_fusion_update_0
  logic [0:0] op_pyramid_synthetic_exposure_fusion_update_0_clk;
  logic [0:0] op_pyramid_synthetic_exposure_fusion_update_0_rst;
  logic [0:0] op_pyramid_synthetic_exposure_fusion_update_0_start;
  logic [0:0] op_pyramid_synthetic_exposure_fusion_update_0_done;
  pyramid_synthetic_exposure_fusion_update_0 op_pyramid_synthetic_exposure_fusion_update_0(.clk(op_pyramid_synthetic_exposure_fusion_update_0_clk), .rst(op_pyramid_synthetic_exposure_fusion_update_0_rst), .start(op_pyramid_synthetic_exposure_fusion_update_0_start), .done(op_pyramid_synthetic_exposure_fusion_update_0_done));
  assign op_pyramid_synthetic_exposure_fusion_update_0_clk = clk;
  assign op_pyramid_synthetic_exposure_fusion_update_0_rst = rst;
  assign op_pyramid_synthetic_exposure_fusion_update_0_start = start;
  // Bindings to op_pyramid_synthetic_exposure_fusion_update_0


endmodule
