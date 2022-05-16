`define ASSIGNMENT_DELAY 0.1
`define CONFIG_TIME 4096
`define CLK_PERIOD 10
`define RUN_TIME 10000

module TB;
  logic clk;
  logic rst;
  logic flush;


  always #(`CLK_PERIOD/2) clk = ~clk;

initial begin
        rst = 1'b1;
        flush = 1'b0;
        #`CLK_PERIOD
        #`CLK_PERIOD
        rst = 1'b0;
  end

    initial begin
      clk <= 0;
    end

    initial begin
      $vcdplusfile("dump.vpd");
      $vcdplusmemon();
      $vcdpluson(0, TB);
      $set_toggle_region(TB);
      #(`CONFIG_TIME);
      $toggle_start();
      #(`RUN_TIME);
      $toggle_stop();
      $toggle_report("run.saif", 1e-9, TB);
      $finish(2);
    end

  logic hw_input_stencil_clkwrk_0_op_hcompute_hw_input_global_wrapper_stencil_4_read_en;
  logic [15:0] hw_input_stencil_clkwrk_0_op_hcompute_hw_input_global_wrapper_stencil_4_read [0 :0];
  logic hw_input_stencil_clkwrk_1_op_hcompute_hw_input_global_wrapper_stencil_5_read_en;
  logic [15:0] hw_input_stencil_clkwrk_1_op_hcompute_hw_input_global_wrapper_stencil_5_read [0 :0];
  logic hw_input_stencil_clkwrk_2_op_hcompute_hw_input_global_wrapper_stencil_6_read_en;
  logic [15:0] hw_input_stencil_clkwrk_2_op_hcompute_hw_input_global_wrapper_stencil_6_read [0 :0];
  logic hw_input_stencil_clkwrk_3_op_hcompute_hw_input_global_wrapper_stencil_1_read_en;
  logic [15:0] hw_input_stencil_clkwrk_3_op_hcompute_hw_input_global_wrapper_stencil_1_read [0 :0];
  logic hw_input_stencil_clkwrk_4_op_hcompute_hw_input_global_wrapper_stencil_3_read_en;
  logic [15:0] hw_input_stencil_clkwrk_4_op_hcompute_hw_input_global_wrapper_stencil_3_read [0 :0];
  logic hw_input_stencil_clkwrk_5_op_hcompute_hw_input_global_wrapper_stencil_2_read_en;
  logic [15:0] hw_input_stencil_clkwrk_5_op_hcompute_hw_input_global_wrapper_stencil_2_read [0 :0];
  logic hw_input_stencil_clkwrk_6_op_hcompute_hw_input_global_wrapper_stencil_read_en;
  logic [15:0] hw_input_stencil_clkwrk_6_op_hcompute_hw_input_global_wrapper_stencil_read [0 :0];
  logic hw_input_stencil_clkwrk_7_op_hcompute_hw_input_global_wrapper_stencil_7_read_en;
  logic [15:0] hw_input_stencil_clkwrk_7_op_hcompute_hw_input_global_wrapper_stencil_7_read [0 :0];
  logic hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_en;
  logic [15:0] hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read [0 :0];
  logic hw_output_stencil_clkwrk_10_op_hcompute_hw_output_stencil_2_write_valid;
  logic [15:0] hw_output_stencil_clkwrk_10_op_hcompute_hw_output_stencil_2_write [0 :0];
  logic hw_output_stencil_clkwrk_11_op_hcompute_hw_output_stencil_3_write_valid;
  logic [15:0] hw_output_stencil_clkwrk_11_op_hcompute_hw_output_stencil_3_write [0 :0];
  logic hw_output_stencil_clkwrk_12_op_hcompute_hw_output_stencil_4_write_valid;
  logic [15:0] hw_output_stencil_clkwrk_12_op_hcompute_hw_output_stencil_4_write [0 :0];
  logic hw_output_stencil_clkwrk_13_op_hcompute_hw_output_stencil_5_write_valid;
  logic [15:0] hw_output_stencil_clkwrk_13_op_hcompute_hw_output_stencil_5_write [0 :0];
  logic hw_output_stencil_clkwrk_14_op_hcompute_hw_output_stencil_6_write_valid;
  logic [15:0] hw_output_stencil_clkwrk_14_op_hcompute_hw_output_stencil_6_write [0 :0];
  logic hw_output_stencil_clkwrk_15_op_hcompute_hw_output_stencil_7_write_valid;
  logic [15:0] hw_output_stencil_clkwrk_15_op_hcompute_hw_output_stencil_7_write [0 :0];
  logic hw_output_stencil_clkwrk_8_op_hcompute_hw_output_stencil_write_valid;
  logic [15:0] hw_output_stencil_clkwrk_8_op_hcompute_hw_output_stencil_write [0 :0];
  logic hw_output_stencil_clkwrk_9_op_hcompute_hw_output_stencil_1_write_valid;
  logic [15:0] hw_output_stencil_clkwrk_9_op_hcompute_hw_output_stencil_1_write [0 :0];
  resnet88 dut(
		
		.clk(clk),
		.flush(flush),
		.rst_n(rst),
		.hw_input_stencil_clkwrk_0_op_hcompute_hw_input_global_wrapper_stencil_4_read_en(hw_input_stencil_clkwrk_0_op_hcompute_hw_input_global_wrapper_stencil_4_read_en),
		.hw_input_stencil_clkwrk_0_op_hcompute_hw_input_global_wrapper_stencil_4_read(hw_input_stencil_clkwrk_0_op_hcompute_hw_input_global_wrapper_stencil_4_read),
		.hw_input_stencil_clkwrk_1_op_hcompute_hw_input_global_wrapper_stencil_5_read_en(hw_input_stencil_clkwrk_1_op_hcompute_hw_input_global_wrapper_stencil_5_read_en),
		.hw_input_stencil_clkwrk_1_op_hcompute_hw_input_global_wrapper_stencil_5_read(hw_input_stencil_clkwrk_1_op_hcompute_hw_input_global_wrapper_stencil_5_read),
		.hw_input_stencil_clkwrk_2_op_hcompute_hw_input_global_wrapper_stencil_6_read_en(hw_input_stencil_clkwrk_2_op_hcompute_hw_input_global_wrapper_stencil_6_read_en),
		.hw_input_stencil_clkwrk_2_op_hcompute_hw_input_global_wrapper_stencil_6_read(hw_input_stencil_clkwrk_2_op_hcompute_hw_input_global_wrapper_stencil_6_read),
		.hw_input_stencil_clkwrk_3_op_hcompute_hw_input_global_wrapper_stencil_1_read_en(hw_input_stencil_clkwrk_3_op_hcompute_hw_input_global_wrapper_stencil_1_read_en),
		.hw_input_stencil_clkwrk_3_op_hcompute_hw_input_global_wrapper_stencil_1_read(hw_input_stencil_clkwrk_3_op_hcompute_hw_input_global_wrapper_stencil_1_read),
		.hw_input_stencil_clkwrk_4_op_hcompute_hw_input_global_wrapper_stencil_3_read_en(hw_input_stencil_clkwrk_4_op_hcompute_hw_input_global_wrapper_stencil_3_read_en),
		.hw_input_stencil_clkwrk_4_op_hcompute_hw_input_global_wrapper_stencil_3_read(hw_input_stencil_clkwrk_4_op_hcompute_hw_input_global_wrapper_stencil_3_read),
		.hw_input_stencil_clkwrk_5_op_hcompute_hw_input_global_wrapper_stencil_2_read_en(hw_input_stencil_clkwrk_5_op_hcompute_hw_input_global_wrapper_stencil_2_read_en),
		.hw_input_stencil_clkwrk_5_op_hcompute_hw_input_global_wrapper_stencil_2_read(hw_input_stencil_clkwrk_5_op_hcompute_hw_input_global_wrapper_stencil_2_read),
		.hw_input_stencil_clkwrk_6_op_hcompute_hw_input_global_wrapper_stencil_read_en(hw_input_stencil_clkwrk_6_op_hcompute_hw_input_global_wrapper_stencil_read_en),
		.hw_input_stencil_clkwrk_6_op_hcompute_hw_input_global_wrapper_stencil_read(hw_input_stencil_clkwrk_6_op_hcompute_hw_input_global_wrapper_stencil_read),
		.hw_input_stencil_clkwrk_7_op_hcompute_hw_input_global_wrapper_stencil_7_read_en(hw_input_stencil_clkwrk_7_op_hcompute_hw_input_global_wrapper_stencil_7_read_en),
		.hw_input_stencil_clkwrk_7_op_hcompute_hw_input_global_wrapper_stencil_7_read(hw_input_stencil_clkwrk_7_op_hcompute_hw_input_global_wrapper_stencil_7_read),
		.hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_en(hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_en),
		.hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read(hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read),
		.hw_output_stencil_clkwrk_10_op_hcompute_hw_output_stencil_2_write_valid(hw_output_stencil_clkwrk_10_op_hcompute_hw_output_stencil_2_write_valid),
		.hw_output_stencil_clkwrk_10_op_hcompute_hw_output_stencil_2_write(hw_output_stencil_clkwrk_10_op_hcompute_hw_output_stencil_2_write),
		.hw_output_stencil_clkwrk_11_op_hcompute_hw_output_stencil_3_write_valid(hw_output_stencil_clkwrk_11_op_hcompute_hw_output_stencil_3_write_valid),
		.hw_output_stencil_clkwrk_11_op_hcompute_hw_output_stencil_3_write(hw_output_stencil_clkwrk_11_op_hcompute_hw_output_stencil_3_write),
		.hw_output_stencil_clkwrk_12_op_hcompute_hw_output_stencil_4_write_valid(hw_output_stencil_clkwrk_12_op_hcompute_hw_output_stencil_4_write_valid),
		.hw_output_stencil_clkwrk_12_op_hcompute_hw_output_stencil_4_write(hw_output_stencil_clkwrk_12_op_hcompute_hw_output_stencil_4_write),
		.hw_output_stencil_clkwrk_13_op_hcompute_hw_output_stencil_5_write_valid(hw_output_stencil_clkwrk_13_op_hcompute_hw_output_stencil_5_write_valid),
		.hw_output_stencil_clkwrk_13_op_hcompute_hw_output_stencil_5_write(hw_output_stencil_clkwrk_13_op_hcompute_hw_output_stencil_5_write),
		.hw_output_stencil_clkwrk_14_op_hcompute_hw_output_stencil_6_write_valid(hw_output_stencil_clkwrk_14_op_hcompute_hw_output_stencil_6_write_valid),
		.hw_output_stencil_clkwrk_14_op_hcompute_hw_output_stencil_6_write(hw_output_stencil_clkwrk_14_op_hcompute_hw_output_stencil_6_write),
		.hw_output_stencil_clkwrk_15_op_hcompute_hw_output_stencil_7_write_valid(hw_output_stencil_clkwrk_15_op_hcompute_hw_output_stencil_7_write_valid),
		.hw_output_stencil_clkwrk_15_op_hcompute_hw_output_stencil_7_write(hw_output_stencil_clkwrk_15_op_hcompute_hw_output_stencil_7_write),
		.hw_output_stencil_clkwrk_8_op_hcompute_hw_output_stencil_write_valid(hw_output_stencil_clkwrk_8_op_hcompute_hw_output_stencil_write_valid),
		.hw_output_stencil_clkwrk_8_op_hcompute_hw_output_stencil_write(hw_output_stencil_clkwrk_8_op_hcompute_hw_output_stencil_write),
		.hw_output_stencil_clkwrk_9_op_hcompute_hw_output_stencil_1_write_valid(hw_output_stencil_clkwrk_9_op_hcompute_hw_output_stencil_1_write_valid),
		.hw_output_stencil_clkwrk_9_op_hcompute_hw_output_stencil_1_write(hw_output_stencil_clkwrk_9_op_hcompute_hw_output_stencil_1_write)
		);


  always @(negedge clk) begin
      hw_input_stencil_clkwrk_0_op_hcompute_hw_input_global_wrapper_stencil_4_read[0] <= #`ASSIGNMENT_DELAY $urandom;
      hw_input_stencil_clkwrk_1_op_hcompute_hw_input_global_wrapper_stencil_5_read[0] <= #`ASSIGNMENT_DELAY $urandom;
      hw_input_stencil_clkwrk_2_op_hcompute_hw_input_global_wrapper_stencil_6_read[0] <= #`ASSIGNMENT_DELAY $urandom;
      hw_input_stencil_clkwrk_3_op_hcompute_hw_input_global_wrapper_stencil_1_read[0] <= #`ASSIGNMENT_DELAY $urandom;
      hw_input_stencil_clkwrk_4_op_hcompute_hw_input_global_wrapper_stencil_3_read[0] <= #`ASSIGNMENT_DELAY $urandom;
      hw_input_stencil_clkwrk_5_op_hcompute_hw_input_global_wrapper_stencil_2_read[0] <= #`ASSIGNMENT_DELAY $urandom;
      hw_input_stencil_clkwrk_6_op_hcompute_hw_input_global_wrapper_stencil_read[0] <= #`ASSIGNMENT_DELAY $urandom;
      hw_input_stencil_clkwrk_7_op_hcompute_hw_input_global_wrapper_stencil_7_read[0] <= #`ASSIGNMENT_DELAY $urandom;
      hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read[0] <= #`ASSIGNMENT_DELAY $urandom;
  end
endmodule