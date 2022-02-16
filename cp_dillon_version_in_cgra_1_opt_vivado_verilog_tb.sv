`timescale 1ns / 1ps
module cp_dillon_version_in_cgra_1_opt_tb;
  logic clk;
  logic rst;
  logic flush;


  logic cp_dillon_version_in_cgra_1_cp_dillon_version_in_cgra_1_update_0_write_valid;
  logic [15:0] cp_dillon_version_in_cgra_1_cp_dillon_version_in_cgra_1_update_0_write [0 :0];
  logic raw_oc_raw_update_0_read_en;
  logic [15:0] raw_oc_raw_update_0_read [0 :0];
cp_dillon_version_in_cgra_1_opt dut(
	
	.clk(clk),
	.flush(flush),
	.rst_n(rst),
	.cp_dillon_version_in_cgra_1_cp_dillon_version_in_cgra_1_update_0_write_valid(cp_dillon_version_in_cgra_1_cp_dillon_version_in_cgra_1_update_0_write_valid),
	.cp_dillon_version_in_cgra_1_cp_dillon_version_in_cgra_1_update_0_write(cp_dillon_version_in_cgra_1_cp_dillon_version_in_cgra_1_update_0_write),
	.raw_oc_raw_update_0_read_en(raw_oc_raw_update_0_read_en),
	.raw_oc_raw_update_0_read(raw_oc_raw_update_0_read)
	);
  initial begin
clk = 0;
rst = 0;
flush = 0;
      raw_oc_raw_update_0_read[0] = 0;
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
    if (cp_dillon_version_in_cgra_1_cp_dillon_version_in_cgra_1_update_0_write_valid) begin
      $display("Got data %d from dut.cp_dillon_version_in_cgra_1_cp_dillon_version_in_cgra_1_update_0_write_valid", cp_dillon_version_in_cgra_1_cp_dillon_version_in_cgra_1_update_0_write[0]);
    end
    if (raw_oc_raw_update_0_read_en) begin
      raw_oc_raw_update_0_read[0] <= raw_oc_raw_update_0_read[0] + 1;
    end
  end
endmodule