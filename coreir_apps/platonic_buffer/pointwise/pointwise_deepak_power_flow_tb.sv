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

  logic hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en;
  logic [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0 :0];
  logic hw_output_stencil_op_hcompute_hw_output_stencil_write_valid;
  logic [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0 :0];
  pointwise dut(
		
		.clk(clk),
		.flush(flush),
		.rst_n(rst),
		.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en),
		.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read),
		.hw_output_stencil_op_hcompute_hw_output_stencil_write_valid(hw_output_stencil_op_hcompute_hw_output_stencil_write_valid),
		.hw_output_stencil_op_hcompute_hw_output_stencil_write(hw_output_stencil_op_hcompute_hw_output_stencil_write)
		);


  always @(negedge clk) begin
      hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] <= #`ASSIGNMENT_DELAY $urandom;
  end
endmodule