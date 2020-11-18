`timescale 1ns / 1ps
module harris_tb;
  logic clk;
  logic rst;
  logic flush;


  logic hw_output_stencil_op_hcompute_hw_output_stencil_write_valid;
  logic [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0 :0];
  logic padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_en;
  logic [15:0] padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0 :0];
harris dut(
	
	.clk(clk),
	.flush(flush),
	.rst_n(rst),
	.hw_output_stencil_op_hcompute_hw_output_stencil_write_valid(hw_output_stencil_op_hcompute_hw_output_stencil_write_valid),
	.hw_output_stencil_op_hcompute_hw_output_stencil_write(hw_output_stencil_op_hcompute_hw_output_stencil_write),
	.padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_en(padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_en),
	.padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read(padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read)
	);
  initial begin
clk = 0;
rst = 0;
flush = 0;
      padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0] = 0;
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
    if (hw_output_stencil_op_hcompute_hw_output_stencil_write_valid) begin
      $display("Got data %d from dut.hw_output_stencil_op_hcompute_hw_output_stencil_write_valid", hw_output_stencil_op_hcompute_hw_output_stencil_write[0]);
    end
    if (padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_en) begin
      padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0] <= padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0] + 1;
    end
  end
endmodule