module resnet_tb;
  logic clk;
  logic rst;
  logic flush;


  logic hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en;
  logic [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0 :0];
  logic [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_in;
  logic hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_en;
  logic [15:0] hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read [0 :0];
  logic [15:0] hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_in;
  logic hw_output_stencil_op_hcompute_hw_output_stencil_write_valid;
  logic [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0 :0];
resnet dut(
	
	.clk(clk),
	.flush(flush),
	.rst_n(rst_n),
	.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en),
	.hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read),
	.hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_en(hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_en),
	.hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read(hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read),
	.hw_output_stencil_op_hcompute_hw_output_stencil_write_valid(hw_output_stencil_op_hcompute_hw_output_stencil_write_valid),
	.hw_output_stencil_op_hcompute_hw_output_stencil_write(hw_output_stencil_op_hcompute_hw_output_stencil_write)
	);
  initial begin
clk = 0;
rst = 0;
flush = 0;
      hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_in = 0;
      hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_in = 0;
  end
  always #5 clk = ~clk;
initial begin
#2;
rst = 1;
flush = 1;
#10;
flush = 0;
end


  always @(posedge clk) begin
    if (hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en) begin
      hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_in <= hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_in + 1;
    end
    if (hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_en) begin
      hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_in <= hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_in + 1;
    end
  end
endmodule