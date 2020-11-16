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
// { op_hcompute_conv_stencil[root, conv_s0_y, conv_s0_x] -> [(2 + 28conv_s0_y + conv_s0_x)] }
module affine_controller__U14(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
// { op_hcompute_conv_stencil_1[root, conv_s0_y, conv_s0_x] -> [(2 + 28conv_s0_y + conv_s0_x)] }
module affine_controller__U21(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
// { op_hcompute_conv_stencil_2[root, conv_s0_y, conv_s0_x] -> [(2 + 28conv_s0_y + conv_s0_x)] }
module affine_controller__U28(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
module affine_controller__U35(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module affine_controller__U58(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module affine_controller__U81(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
module affine_controller__U104(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
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
// { op_hcompute_conv_stencil_1[root, conv_s0_y, conv_s0_x] -> [(2 + 28conv_s0_y + conv_s0_x)] }
module affine_controller__U125(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
// { op_hcompute_conv_stencil_2[root, conv_s0_y, conv_s0_x] -> [(2 + 28conv_s0_y + conv_s0_x)] }
module affine_controller__U126(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
module affine_controller__U127(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8010 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module affine_controller__U128(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
module affine_controller__U129(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8010 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module affine_controller__U130(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
module affine_controller__U131(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8010 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module affine_controller__U132(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
module affine_controller__U133(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
// { op_hcompute_hw_output_stencil[root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(16017 + 784hw_output_s0_w + 28hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module affine_controller__U134(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
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
module cgralib_Mem_amber__IDconv_stencil_0__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,input [15:0] data_in_1,input [15:0] write_addr_1,input wen_1,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,output logic [15:0] data_out_1,input [15:0] read_addr_1,input ren_1,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  logic [15:0] data_out_1_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_1;
    data_out_0_tmp <= SRAM[read_addr_0];
    data_out_1_tmp <= SRAM[read_addr_1];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
    if (wen_1) begin
      SRAM[write_addr_1] <= data_in_1;
    end
  end
  assign chain_data_out = chain_ren ? data_out_1_tmp : 512;
  assign data_out_0 = data_out_0_tmp;
  assign data_out_1 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDconv_stencil_1__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,input [15:0] data_in_1,input [15:0] write_addr_1,input wen_1,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,output logic [15:0] data_out_1,input [15:0] read_addr_1,input ren_1,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  logic [15:0] data_out_1_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_1;
    data_out_0_tmp <= SRAM[read_addr_0];
    data_out_1_tmp <= SRAM[read_addr_1];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
    if (wen_1) begin
      SRAM[write_addr_1] <= data_in_1;
    end
  end
  assign chain_data_out = chain_ren ? data_out_1_tmp : 512;
  assign data_out_0 = data_out_0_tmp;
  assign data_out_1 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDconv_stencil_2__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,input [15:0] data_in_1,input [15:0] write_addr_1,input wen_1,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,output logic [15:0] data_out_1,input [15:0] read_addr_1,input ren_1,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  logic [15:0] data_out_1_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_1;
    data_out_0_tmp <= SRAM[read_addr_0];
    data_out_1_tmp <= SRAM[read_addr_1];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
    if (wen_1) begin
      SRAM[write_addr_1] <= data_in_1;
    end
  end
  assign chain_data_out = chain_ren ? data_out_1_tmp : 512;
  assign data_out_0 = data_out_0_tmp;
  assign data_out_1 = chain_data_out;
endmodule

// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module affine_controller__U353(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(1 + 240hw_input_global_wrapper_s0_y + 8hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module affine_controller__U354(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
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
module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module affine_controller__U561(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module affine_controller__U562(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2436conv_s1_r_y + 812conv_s1_r_x + 29conv_s1_y + conv_s1_x)] }
module affine_controller__U563(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(2 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module affine_controller__U564(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__has_external_addrgenTrue__has_flushFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

