  // min: { [2] }
  // max: { [785] }

  // min: { [8009] }
  // max: { [15315] }

  // min: { [8009] }
  // max: { [15315] }

  // min: { [1] }
  // max: { [7200] }

  // min: { [2] }
  // max: { [217] }

  // min: { [16017] }
  // max: { [18368] }

  // min: { [8009] }
  // max: { [15315] }

  // min: { [2] }
  // max: { [785] }

  // min: { [2] }
  // max: { [785] }

  // sched min: { [1] }
  // sched max: { [18368] }
// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(1 + 240hw_input_global_wrapper_s0_y + 8hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module affine_controller__U0(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=29 && d[2]<=29 && d[3]<=7);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 239) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          d[3]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(2 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module affine_controller__U7(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=2 && d[4]<=7);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_hw_output_stencil[root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(16017 + 784hw_output_s0_w + 28hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module affine_controller__U14(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=27 && d[3]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==16016) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 783) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 27) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          d[3]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8010 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8009) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil[root, conv_s0_y, conv_s0_x] -> [(2 + 28conv_s0_y + conv_s0_x)] }
module cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=27 && d[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 27) begin
          counter[1]<= 0;
          counter[2]<= 0;
          d[2]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_hw_output_stencil[root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(16017 + 784hw_output_s0_w + 28hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=0 && d[2]<=27 && d[3]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==16016) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 783) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 27) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          d[3]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] data_in_1,output logic [15:0] data_out_0,output data_out_0_valid,output logic [15:0] data_out_1,output data_out_1_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0.d[3] + 28*cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0.d[4]));
  cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo;
  assign cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo = ((1*cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1.d[2] + 28*cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1.d[3]));
  cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0.d[3] + 28*cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0.d[4]));
  cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ctrl cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo;
  assign cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo = ((1*cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1.d[1] + 28*cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  logic [15:0] data_out_1_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[9]) begin
    data_out_1_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end else begin
    data_out_1_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end
    data_out_1_valid <= cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1.valid;
    if (cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
    if (cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1.valid) begin
      if (cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo[8:0]] <= data_in_1;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo[8:0]] <= data_in_1;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
  assign data_out_1 = data_out_1_tmp;
endmodule

// { op_hcompute_conv_stencil_1[root, conv_s0_y, conv_s0_x] -> [(2 + 28conv_s0_y + conv_s0_x)] }
module cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=27 && d[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 27) begin
          counter[1]<= 0;
          counter[2]<= 0;
          d[2]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8010 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8009) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_hw_output_stencil[root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(16801 + 784hw_output_s0_w + 28hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=0 && d[2]<=27 && d[3]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==16800) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 783) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 27) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          d[3]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] data_in_1,output logic [15:0] data_out_0,output data_out_0_valid,output logic [15:0] data_out_1,output data_out_1_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0.d[3] + 28*cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0.d[4]));
  cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo;
  assign cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo = ((1*cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1.d[2] + 28*cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1.d[3]));
  cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0.d[1] + 28*cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0.d[2]));
  cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ctrl cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo;
  assign cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo = ((1*cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1.d[3] + 28*cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1.d[4]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  logic [15:0] data_out_1_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[9]) begin
    data_out_1_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end else begin
    data_out_1_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end
    data_out_1_valid <= cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1.valid;
    if (cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
    if (cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1.valid) begin
      if (cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo[8:0]] <= data_in_1;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo[8:0]] <= data_in_1;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
  assign data_out_1 = data_out_1_tmp;
endmodule

// { op_hcompute_conv_stencil_2[root, conv_s0_y, conv_s0_x] -> [(2 + 28conv_s0_y + conv_s0_x)] }
module cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=27 && d[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 27) begin
          counter[1]<= 0;
          counter[2]<= 0;
          d[2]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8010 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8009) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_hw_output_stencil[root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(17585 + 784hw_output_s0_w + 28hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=0 && d[2]<=27 && d[3]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==17584) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 783) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 27) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          d[3]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] data_in_1,output logic [15:0] data_out_0,output data_out_0_valid,output logic [15:0] data_out_1,output data_out_1_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0.d[3] + 28*cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0.d[4]));
  cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo;
  assign cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo = ((1*cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1.d[2] + 28*cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1.d[3]));
  cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0.d[1] + 28*cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0.d[2]));
  cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ctrl cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo;
  assign cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo = ((1*cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1.d[3] + 28*cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1.d[4]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  logic [15:0] data_out_1_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[9]) begin
    data_out_1_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end else begin
    data_out_1_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end
    data_out_1_valid <= cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_rd_1.valid;
    if (cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
    if (cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1.valid) begin
      if (cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo[8:0]] <= data_in_1;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16_wr_1_ibo[8:0]] <= data_in_1;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
  assign data_out_1 = data_out_1_tmp;
endmodule

// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(1 + 240hw_input_global_wrapper_s0_y + 8hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=29 && d[2]<=29 && d[3]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 239) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          d[3]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2] + 1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[3] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[4]));
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(2 + 240hw_input_global_wrapper_s0_y + 8hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=29 && d[2]<=29 && d[3]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 239) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          d[3]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2] + 1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[3] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[4]));
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(3 + 240hw_input_global_wrapper_s0_y + 8hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=29 && d[2]<=29 && d[3]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==2) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 239) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          d[3]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2] + 1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[3] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[4]));
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(4 + 240hw_input_global_wrapper_s0_y + 8hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=29 && d[2]<=29 && d[3]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==3) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 239) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          d[3]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2] + 1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[3] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[4]));
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(5 + 240hw_input_global_wrapper_s0_y + 8hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=29 && d[2]<=29 && d[3]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==4) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 239) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          d[3]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2] + 1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[3] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[4]));
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(6 + 240hw_input_global_wrapper_s0_y + 8hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=29 && d[2]<=29 && d[3]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==5) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 239) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          d[3]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2] + 1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[3] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[4]));
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(7 + 240hw_input_global_wrapper_s0_y + 8hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=29 && d[2]<=29 && d[3]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==6) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 239) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          d[3]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2] + 1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[3] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[4]));
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(8 + 240hw_input_global_wrapper_s0_y + 8hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=29 && d[2]<=29 && d[3]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==7) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 239) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          d[3]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2] + 1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[3] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[4]));
  cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 30*cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(2 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(10 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==9) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(18 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==17) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(3 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==2) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(11 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==10) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(19 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==18) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(4 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==3) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(12 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==11) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(20 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==19) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(5 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==4) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(13 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==12) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(21 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==20) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(6 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==5) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(14 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==13) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(22 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==21) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(7 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==6) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(15 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==14) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(23 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==22) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(8 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==7) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(16 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==15) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(24 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==23) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(9 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(17 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==16) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(25 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=0 && d[4]<=0);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==24) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=2 && d[2]<=2 && d[3]<=27 && d[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      d[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      d[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      d[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
        d[2]<= 16'b0;
        counter [2] <= 16'b0;
        d[3]<= 16'b0;
        counter [3] <= 16'b0;
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2435) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 811) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 28) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          d[4]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[2]));
  cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1] + 3*cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[2]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenFalse__has_flushFalse__has_read_validTrue__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

