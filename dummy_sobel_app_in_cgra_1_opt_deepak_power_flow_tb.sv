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

  logic dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write_valid;
  logic [15:0] dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write [0 :0];
  logic off_chip_img_img_update_0_read_en;
  logic [15:0] off_chip_img_img_update_0_read [0 :0];
  dummy_sobel_app_in_cgra_1_opt dut(
		
		.clk(clk),
		.flush(flush),
		.rst_n(rst),
		.dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write_valid(dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write_valid),
		.dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write(dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write),
		.off_chip_img_img_update_0_read_en(off_chip_img_img_update_0_read_en),
		.off_chip_img_img_update_0_read(off_chip_img_img_update_0_read)
		);


  always @(negedge clk) begin
      off_chip_img_img_update_0_read[0] <= #`ASSIGNMENT_DELAY $urandom;
  end
endmodule