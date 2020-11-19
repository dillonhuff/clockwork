`timescale 1ns / 1ps


module pointwise_tb;
    
    logic clk;
    logic rst;
    logic flush;
    logic[15:0] hw_write ;
    logic hw_read_en;
    logic[15:0] hw_read ;

    logic hw_write_en;

    pointwise dut(
    .clk(clk),
    .rst_n(rst),
    .flush(flush),
    .hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_en(hw_read_en),
    .hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read('{hw_read}),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write_valid(hw_write_en),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write('{hw_write})
);
    
    logic[15:0] counter0;
    
    initial begin
        clk = 0;
        rst = 0;
        flush = 0;
        counter0 = 0;
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
    
        if(hw_read_en) begin
           // $display("send me data input");
            hw_read <= counter0; //hw_input_stencil[counter0];
            counter0 <= counter0 + 1;
        end
        
        if(hw_write_en) begin
            $display(hw_write);
        end
    
    end
    
endmodule
