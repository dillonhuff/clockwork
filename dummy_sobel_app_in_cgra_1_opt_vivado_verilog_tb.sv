`timescale 1ns / 1ps
module dummy_sobel_app_in_cgra_1_opt_tb;
  logic clk;
  logic rst;
  logic flush;


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
  initial begin
clk = 0;
rst = 0;
flush = 0;
      off_chip_img_img_update_0_read[0] = 0;
  end
  always #5 clk = ~clk;
initial begin
#2;
rst = 1;
flush = 1;
#10;
flush = 0;
end


  always @(negedge clk) begin
    if (dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write_valid) begin
      $display("Got data %d from dut.dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write_valid", dummy_sobel_app_in_cgra_1_dummy_sobel_app_in_cgra_1_update_0_write[0]);
    end
    if (off_chip_img_img_update_0_read_en) begin
      off_chip_img_img_update_0_read[0] <= off_chip_img_img_update_0_read[0] + 1;
    end
  end
endmodule