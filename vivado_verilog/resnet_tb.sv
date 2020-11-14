`timescale 1ns / 1ps

module resnet_tb;
    
    logic clk;
    logic rst;
    logic flush;
    logic [15:0]hw_input_stencil[7199:0];
    logic [15:0]hw_kernel_stencil[215:0];
    logic[15:0] hw_output_stencil ;
    logic hw_input_read_en;
    logic hw_kernel_read_en;
    logic[15:0] hw_input_read ;
    logic [15:0]hw_kernel_read ;
    logic hw_output_write_en;
    
    resnet dut(
    .clk(clk),
    .rst_n(rst),
    .flush(flush),
    .hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en(hw_input_read_en), //output
    .hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read('{hw_input_read}),
    .hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read_en(hw_kernel_read_en), //output
    .hw_kernel_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_read('{hw_kernel_read}),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write_valid(hw_output_write_en), //output
    .hw_output_stencil_op_hcompute_hw_output_stencil_write('{hw_output_stencil}) //outpu
    );
    
    logic[15:0] counter0;
    logic[15:0] counter1;
    
    initial begin
        clk = 0;
        rst = 0;
        flush = 0;
        counter0 = 0;
        counter1 = 0;
    end
    always #5 clk = ~clk;
    
    initial begin
    #2;
        rst = 1;
        flush = 1;
        #10;
        //rst = 0;
        flush = 0;
        
    end
    

    
    always @(negedge clk) begin
    
        if(hw_input_read_en) begin
            $display("send me data input");
            hw_input_read <= counter0; //hw_input_stencil[counter0];
            counter0 <= counter0 + 1;
        end
        if(hw_kernel_read_en) begin
            $display("send me data kernel");
            hw_kernel_read <= counter1; //hw_kernel_stencil[counter1];
            counter1 <= counter1 + 1;
        end
        if(hw_output_write_en) begin
            $display(hw_output_stencil);
        end
    
    end
    
endmodule
