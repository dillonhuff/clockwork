// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8011 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module affine_controller__U0(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
      if(counter[0] ==8010) begin
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
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
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
module affine_controller__U23(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8013 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module affine_controller__U30(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
      if(counter[0] ==8012) begin
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
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
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
// { op_hcompute_conv_stencil_1[root, conv_s0_y, conv_s0_x] -> [(3 + 30conv_s0_y + conv_s0_x)] }
module affine_controller__U53(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
      if(counter[0] ==2) begin
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
        if(counter[1] == 29) begin
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
// { op_hcompute_conv_stencil_2[root, conv_s0_y, conv_s0_x] -> [(4 + 30conv_s0_y + conv_s0_x)] }
module affine_controller__U60(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
      if(counter[0] ==3) begin
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
        if(counter[1] == 29) begin
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
module affine_controller__U67(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
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
// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(2 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module affine_controller__U88(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
// { op_hcompute_conv_stencil[root, conv_s0_y, conv_s0_x] -> [(2 + 30conv_s0_y + conv_s0_x)] }
module affine_controller__U95(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
        if(counter[1] == 29) begin
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module affine_controller__U102(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
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

module conv_stencil_bank_selector(input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 3);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32] % 28);
  assign out = bank_index_0*1+bank_index_1*3+bank_index_2*3;

endmodule

// { op_hcompute_conv_stencil_1[root, conv_s0_y, conv_s0_x] -> [(3 + 30conv_s0_y + conv_s0_x)] }
module conv_stencil_op_hcompute_conv_stencil_1_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_1_write_ctrl_vars[2:0], output op_hcompute_conv_stencil_1_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_conv_stencil_1_write_wen =(on && on2 && op_hcompute_conv_stencil_1_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_1_write_ctrl_vars[1]<=27 && op_hcompute_conv_stencil_1_write_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_1_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_1_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_1_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==2) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_1_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_1_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_1_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 29) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_conv_stencil_1_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_1_write_ctrl_vars[1] <= op_hcompute_conv_stencil_1_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_conv_stencil_1_write_ctrl_vars[2] <= op_hcompute_conv_stencil_1_write_ctrl_vars[2] + 1;
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
// { op_hcompute_conv_stencil_2[root, conv_s0_y, conv_s0_x] -> [(4 + 30conv_s0_y + conv_s0_x)] }
module conv_stencil_op_hcompute_conv_stencil_2_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_2_write_ctrl_vars[2:0], output op_hcompute_conv_stencil_2_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_conv_stencil_2_write_wen =(on && on2 && op_hcompute_conv_stencil_2_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_2_write_ctrl_vars[1]<=27 && op_hcompute_conv_stencil_2_write_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_2_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_2_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_2_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==3) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_2_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_2_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_2_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 29) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_conv_stencil_2_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_2_write_ctrl_vars[1] <= op_hcompute_conv_stencil_2_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_conv_stencil_2_write_ctrl_vars[2] <= op_hcompute_conv_stencil_2_write_ctrl_vars[2] + 1;
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8010 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_3_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_3_write_ctrl_vars[4:0], output op_hcompute_conv_stencil_3_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_3_write_wen =(on && on2 && op_hcompute_conv_stencil_3_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_3_write_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_3_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_3_write_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_3_write_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_3_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_3_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_3_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_3_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8009) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_3_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_3_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_3_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_3_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[1] <= op_hcompute_conv_stencil_3_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[2] <= op_hcompute_conv_stencil_3_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[3] <= op_hcompute_conv_stencil_3_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4] <= op_hcompute_conv_stencil_3_write_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8012 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_4_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_4_write_ctrl_vars[4:0], output op_hcompute_conv_stencil_4_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_4_write_wen =(on && on2 && op_hcompute_conv_stencil_4_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_4_write_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_4_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_4_write_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_4_write_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_4_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_4_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_4_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_4_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8011) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_4_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_4_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_4_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_4_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[1] <= op_hcompute_conv_stencil_4_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[2] <= op_hcompute_conv_stencil_4_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[3] <= op_hcompute_conv_stencil_4_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4] <= op_hcompute_conv_stencil_4_write_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8014 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_5_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_5_write_ctrl_vars[4:0], output op_hcompute_conv_stencil_5_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_5_write_wen =(on && on2 && op_hcompute_conv_stencil_5_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_5_write_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_5_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_5_write_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_5_write_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_5_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_5_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_5_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_5_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8013) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_5_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_5_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_5_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_5_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[1] <= op_hcompute_conv_stencil_5_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[2] <= op_hcompute_conv_stencil_5_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[3] <= op_hcompute_conv_stencil_5_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4] <= op_hcompute_conv_stencil_5_write_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil[root, conv_s0_y, conv_s0_x] -> [(2 + 30conv_s0_y + conv_s0_x)] }
module conv_stencil_op_hcompute_conv_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_write_ctrl_vars[2:0], output op_hcompute_conv_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_conv_stencil_write_wen =(on && on2 && op_hcompute_conv_stencil_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_write_ctrl_vars[1]<=27 && op_hcompute_conv_stencil_write_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 29) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_conv_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_write_ctrl_vars[1] <= op_hcompute_conv_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_conv_stencil_write_ctrl_vars[2] <= op_hcompute_conv_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_3_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_3_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_3_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_3_read_ren =(on && on2 && op_hcompute_conv_stencil_3_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_3_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_3_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_3_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_3_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_3_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_3_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_3_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_3_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3] <= op_hcompute_conv_stencil_3_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4] <= op_hcompute_conv_stencil_3_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8011 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_4_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_4_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_4_read_ren =(on && on2 && op_hcompute_conv_stencil_4_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_4_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_4_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_4_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_4_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_4_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_4_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8010) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_4_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_4_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3] <= op_hcompute_conv_stencil_4_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4] <= op_hcompute_conv_stencil_4_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8013 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_5_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_5_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_5_read_ren =(on && on2 && op_hcompute_conv_stencil_5_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_5_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_5_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_5_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_5_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_5_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_5_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8012) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_5_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_5_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3] <= op_hcompute_conv_stencil_5_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4] <= op_hcompute_conv_stencil_5_read_ctrl_vars[4] + 1;
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
module conv_stencil_op_hcompute_hw_output_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars[3:0], output op_hcompute_hw_output_stencil_read_ren );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign op_hcompute_hw_output_stencil_read_ren =(on && on2 && op_hcompute_hw_output_stencil_read_ctrl_vars[0]==0 && op_hcompute_hw_output_stencil_read_ctrl_vars[1]<=2 && op_hcompute_hw_output_stencil_read_ctrl_vars[2]<=27 && op_hcompute_hw_output_stencil_read_ctrl_vars[3]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_output_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_output_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_output_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_hw_output_stencil_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==16016) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_output_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_output_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_output_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_hw_output_stencil_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 783) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[3]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[1] <= op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 27) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[3]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[2] <= op_hcompute_hw_output_stencil_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[3] <= op_hcompute_hw_output_stencil_read_ctrl_vars[3] + 1;
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
module conv_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv_stencil_1_write_wen,
	input [15:0] op_hcompute_conv_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv_stencil_1_write [0:0] ,
	input op_hcompute_conv_stencil_2_write_wen,
	input [15:0] op_hcompute_conv_stencil_2_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv_stencil_2_write [0:0] ,
	input op_hcompute_conv_stencil_3_read_ren,
	input [15:0] op_hcompute_conv_stencil_3_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_3_read [0:0] ,
	input op_hcompute_conv_stencil_3_write_wen,
	input [15:0] op_hcompute_conv_stencil_3_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_conv_stencil_3_write [0:0] ,
	input op_hcompute_conv_stencil_4_read_ren,
	input [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_4_read [0:0] ,
	input op_hcompute_conv_stencil_4_write_wen,
	input [15:0] op_hcompute_conv_stencil_4_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_conv_stencil_4_write [0:0] ,
	input op_hcompute_conv_stencil_5_read_ren,
	input [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_5_read [0:0] ,
	input op_hcompute_conv_stencil_5_write_wen,
	input [15:0] op_hcompute_conv_stencil_5_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_conv_stencil_5_write [0:0] ,
	input op_hcompute_conv_stencil_write_wen,
	input [15:0] op_hcompute_conv_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv_stencil_write [0:0] ,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [3:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] );


  // Storage capacity pre-banking: 2352
  logic [15:0]op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_conv_stencil_1_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_1_write_fsm conv_stencil_op_hcompute_conv_stencil_1_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_1_write_ctrl_vars( op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_1_write_wen(op_hcompute_conv_stencil_1_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_conv_stencil_2_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_2_write_fsm conv_stencil_op_hcompute_conv_stencil_2_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_2_write_ctrl_vars( op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_2_write_wen(op_hcompute_conv_stencil_2_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_3_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_3_write_fsm conv_stencil_op_hcompute_conv_stencil_3_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_3_write_ctrl_vars( op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_3_write_wen(op_hcompute_conv_stencil_3_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_4_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_4_write_fsm conv_stencil_op_hcompute_conv_stencil_4_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_4_write_ctrl_vars( op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_4_write_wen(op_hcompute_conv_stencil_4_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_5_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_5_write_fsm conv_stencil_op_hcompute_conv_stencil_5_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_5_write_ctrl_vars( op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_5_write_wen(op_hcompute_conv_stencil_5_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_conv_stencil_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_write_fsm conv_stencil_op_hcompute_conv_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_write_ctrl_vars( op_hcompute_conv_stencil_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_write_wen(op_hcompute_conv_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_3_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_3_read_fsm conv_stencil_op_hcompute_conv_stencil_3_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_3_read_ctrl_vars( op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_3_read_ren(op_hcompute_conv_stencil_3_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_4_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_4_read_fsm conv_stencil_op_hcompute_conv_stencil_4_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_4_read_ctrl_vars( op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_4_read_ren(op_hcompute_conv_stencil_4_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_5_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_5_read_fsm conv_stencil_op_hcompute_conv_stencil_5_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_5_read_ctrl_vars( op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_5_read_ren(op_hcompute_conv_stencil_5_read_ren_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[3:0];
  logic op_hcompute_hw_output_stencil_read_ren_fsm_out;
  conv_stencil_op_hcompute_hw_output_stencil_read_fsm conv_stencil_op_hcompute_hw_output_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_read_ctrl_vars( op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_read_ren(op_hcompute_hw_output_stencil_read_ren_fsm_out));
  // # of banks: 84
  logic [15:0] bank_0 [28];
  logic [15:0] bank_1 [28];
  logic [15:0] bank_2 [28];
  logic [15:0] bank_3 [28];
  logic [15:0] bank_4 [28];
  logic [15:0] bank_5 [28];
  logic [15:0] bank_6 [28];
  logic [15:0] bank_7 [28];
  logic [15:0] bank_8 [28];
  logic [15:0] bank_9 [28];
  logic [15:0] bank_10 [28];
  logic [15:0] bank_11 [28];
  logic [15:0] bank_12 [28];
  logic [15:0] bank_13 [28];
  logic [15:0] bank_14 [28];
  logic [15:0] bank_15 [28];
  logic [15:0] bank_16 [28];
  logic [15:0] bank_17 [28];
  logic [15:0] bank_18 [28];
  logic [15:0] bank_19 [28];
  logic [15:0] bank_20 [28];
  logic [15:0] bank_21 [28];
  logic [15:0] bank_22 [28];
  logic [15:0] bank_23 [28];
  logic [15:0] bank_24 [28];
  logic [15:0] bank_25 [28];
  logic [15:0] bank_26 [28];
  logic [15:0] bank_27 [28];
  logic [15:0] bank_28 [28];
  logic [15:0] bank_29 [28];
  logic [15:0] bank_30 [28];
  logic [15:0] bank_31 [28];
  logic [15:0] bank_32 [28];
  logic [15:0] bank_33 [28];
  logic [15:0] bank_34 [28];
  logic [15:0] bank_35 [28];
  logic [15:0] bank_36 [28];
  logic [15:0] bank_37 [28];
  logic [15:0] bank_38 [28];
  logic [15:0] bank_39 [28];
  logic [15:0] bank_40 [28];
  logic [15:0] bank_41 [28];
  logic [15:0] bank_42 [28];
  logic [15:0] bank_43 [28];
  logic [15:0] bank_44 [28];
  logic [15:0] bank_45 [28];
  logic [15:0] bank_46 [28];
  logic [15:0] bank_47 [28];
  logic [15:0] bank_48 [28];
  logic [15:0] bank_49 [28];
  logic [15:0] bank_50 [28];
  logic [15:0] bank_51 [28];
  logic [15:0] bank_52 [28];
  logic [15:0] bank_53 [28];
  logic [15:0] bank_54 [28];
  logic [15:0] bank_55 [28];
  logic [15:0] bank_56 [28];
  logic [15:0] bank_57 [28];
  logic [15:0] bank_58 [28];
  logic [15:0] bank_59 [28];
  logic [15:0] bank_60 [28];
  logic [15:0] bank_61 [28];
  logic [15:0] bank_62 [28];
  logic [15:0] bank_63 [28];
  logic [15:0] bank_64 [28];
  logic [15:0] bank_65 [28];
  logic [15:0] bank_66 [28];
  logic [15:0] bank_67 [28];
  logic [15:0] bank_68 [28];
  logic [15:0] bank_69 [28];
  logic [15:0] bank_70 [28];
  logic [15:0] bank_71 [28];
  logic [15:0] bank_72 [28];
  logic [15:0] bank_73 [28];
  logic [15:0] bank_74 [28];
  logic [15:0] bank_75 [28];
  logic [15:0] bank_76 [28];
  logic [15:0] bank_77 [28];
  logic [15:0] bank_78 [28];
  logic [15:0] bank_79 [28];
  logic [15:0] bank_80 [28];
  logic [15:0] bank_81 [28];
  logic [15:0] bank_82 [28];
  logic [15:0] bank_83 [28];
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_1 = (((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_2 = (((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_1 = (((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_2 = (((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_1 = (((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_2 = (((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_1 = (((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_2 = (((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_1 = (((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_2 = (((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_1 = (((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_2 = (((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_2 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_2 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_2 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_0 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_1 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_2 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[3])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_0}));

  logic [15:0] addr0;
  assign addr0 = ($rtoi($floor((((1)) - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+$rtoi($floor((((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[2])) - 0)/ 28))*28);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = ($rtoi($floor((((2)) - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+$rtoi($floor((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2])) - 0)/ 28))*28);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr2;
  assign addr2 = ($rtoi($floor((0 - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[3])) - 0)>>0)*1+$rtoi($floor((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[4])) - 0)/ 28))*28);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr3;
  assign addr3 = ($rtoi($floor((((1)) - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[3])) - 0)>>0)*1+$rtoi($floor((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[4])) - 0)/ 28))*28);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr4;
  assign addr4 = ($rtoi($floor((((2)) - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[3])) - 0)>>0)*1+$rtoi($floor((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[4])) - 0)/ 28))*28);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr5;
  assign addr5 = ($rtoi($floor((0 - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+$rtoi($floor((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2])) - 0)/ 28))*28);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr6;
  assign addr6 = ($rtoi($floor((0 - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+$rtoi($floor((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)/ 28))*28);
  always @(posedge clk) begin
  end
  logic [15:0] addr7;
  assign addr7 = ($rtoi($floor((((1)) - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+$rtoi($floor((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0)/ 28))*28);
  always @(posedge clk) begin
  end
  logic [15:0] addr8;
  assign addr8 = ($rtoi($floor((((2)) - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+$rtoi($floor((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0)/ 28))*28);
  always @(posedge clk) begin
  end
  logic [15:0] addr9;
  assign addr9 = ($rtoi($floor((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0)/ 3))*1+((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+$rtoi($floor((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[3])) - 0)/ 28))*28);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_1_write_wen_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_conv_stencil_1_write[0];
        1:bank_1[addr0] <= op_hcompute_conv_stencil_1_write[0];
        2:bank_2[addr0] <= op_hcompute_conv_stencil_1_write[0];
        3:bank_3[addr0] <= op_hcompute_conv_stencil_1_write[0];
        4:bank_4[addr0] <= op_hcompute_conv_stencil_1_write[0];
        5:bank_5[addr0] <= op_hcompute_conv_stencil_1_write[0];
        6:bank_6[addr0] <= op_hcompute_conv_stencil_1_write[0];
        7:bank_7[addr0] <= op_hcompute_conv_stencil_1_write[0];
        8:bank_8[addr0] <= op_hcompute_conv_stencil_1_write[0];
        9:bank_9[addr0] <= op_hcompute_conv_stencil_1_write[0];
        10:bank_10[addr0] <= op_hcompute_conv_stencil_1_write[0];
        11:bank_11[addr0] <= op_hcompute_conv_stencil_1_write[0];
        12:bank_12[addr0] <= op_hcompute_conv_stencil_1_write[0];
        13:bank_13[addr0] <= op_hcompute_conv_stencil_1_write[0];
        14:bank_14[addr0] <= op_hcompute_conv_stencil_1_write[0];
        15:bank_15[addr0] <= op_hcompute_conv_stencil_1_write[0];
        16:bank_16[addr0] <= op_hcompute_conv_stencil_1_write[0];
        17:bank_17[addr0] <= op_hcompute_conv_stencil_1_write[0];
        18:bank_18[addr0] <= op_hcompute_conv_stencil_1_write[0];
        19:bank_19[addr0] <= op_hcompute_conv_stencil_1_write[0];
        20:bank_20[addr0] <= op_hcompute_conv_stencil_1_write[0];
        21:bank_21[addr0] <= op_hcompute_conv_stencil_1_write[0];
        22:bank_22[addr0] <= op_hcompute_conv_stencil_1_write[0];
        23:bank_23[addr0] <= op_hcompute_conv_stencil_1_write[0];
        24:bank_24[addr0] <= op_hcompute_conv_stencil_1_write[0];
        25:bank_25[addr0] <= op_hcompute_conv_stencil_1_write[0];
        26:bank_26[addr0] <= op_hcompute_conv_stencil_1_write[0];
        27:bank_27[addr0] <= op_hcompute_conv_stencil_1_write[0];
        28:bank_28[addr0] <= op_hcompute_conv_stencil_1_write[0];
        29:bank_29[addr0] <= op_hcompute_conv_stencil_1_write[0];
        30:bank_30[addr0] <= op_hcompute_conv_stencil_1_write[0];
        31:bank_31[addr0] <= op_hcompute_conv_stencil_1_write[0];
        32:bank_32[addr0] <= op_hcompute_conv_stencil_1_write[0];
        33:bank_33[addr0] <= op_hcompute_conv_stencil_1_write[0];
        34:bank_34[addr0] <= op_hcompute_conv_stencil_1_write[0];
        35:bank_35[addr0] <= op_hcompute_conv_stencil_1_write[0];
        36:bank_36[addr0] <= op_hcompute_conv_stencil_1_write[0];
        37:bank_37[addr0] <= op_hcompute_conv_stencil_1_write[0];
        38:bank_38[addr0] <= op_hcompute_conv_stencil_1_write[0];
        39:bank_39[addr0] <= op_hcompute_conv_stencil_1_write[0];
        40:bank_40[addr0] <= op_hcompute_conv_stencil_1_write[0];
        41:bank_41[addr0] <= op_hcompute_conv_stencil_1_write[0];
        42:bank_42[addr0] <= op_hcompute_conv_stencil_1_write[0];
        43:bank_43[addr0] <= op_hcompute_conv_stencil_1_write[0];
        44:bank_44[addr0] <= op_hcompute_conv_stencil_1_write[0];
        45:bank_45[addr0] <= op_hcompute_conv_stencil_1_write[0];
        46:bank_46[addr0] <= op_hcompute_conv_stencil_1_write[0];
        47:bank_47[addr0] <= op_hcompute_conv_stencil_1_write[0];
        48:bank_48[addr0] <= op_hcompute_conv_stencil_1_write[0];
        49:bank_49[addr0] <= op_hcompute_conv_stencil_1_write[0];
        50:bank_50[addr0] <= op_hcompute_conv_stencil_1_write[0];
        51:bank_51[addr0] <= op_hcompute_conv_stencil_1_write[0];
        52:bank_52[addr0] <= op_hcompute_conv_stencil_1_write[0];
        53:bank_53[addr0] <= op_hcompute_conv_stencil_1_write[0];
        54:bank_54[addr0] <= op_hcompute_conv_stencil_1_write[0];
        55:bank_55[addr0] <= op_hcompute_conv_stencil_1_write[0];
        56:bank_56[addr0] <= op_hcompute_conv_stencil_1_write[0];
        57:bank_57[addr0] <= op_hcompute_conv_stencil_1_write[0];
        58:bank_58[addr0] <= op_hcompute_conv_stencil_1_write[0];
        59:bank_59[addr0] <= op_hcompute_conv_stencil_1_write[0];
        60:bank_60[addr0] <= op_hcompute_conv_stencil_1_write[0];
        61:bank_61[addr0] <= op_hcompute_conv_stencil_1_write[0];
        62:bank_62[addr0] <= op_hcompute_conv_stencil_1_write[0];
        63:bank_63[addr0] <= op_hcompute_conv_stencil_1_write[0];
        64:bank_64[addr0] <= op_hcompute_conv_stencil_1_write[0];
        65:bank_65[addr0] <= op_hcompute_conv_stencil_1_write[0];
        66:bank_66[addr0] <= op_hcompute_conv_stencil_1_write[0];
        67:bank_67[addr0] <= op_hcompute_conv_stencil_1_write[0];
        68:bank_68[addr0] <= op_hcompute_conv_stencil_1_write[0];
        69:bank_69[addr0] <= op_hcompute_conv_stencil_1_write[0];
        70:bank_70[addr0] <= op_hcompute_conv_stencil_1_write[0];
        71:bank_71[addr0] <= op_hcompute_conv_stencil_1_write[0];
        72:bank_72[addr0] <= op_hcompute_conv_stencil_1_write[0];
        73:bank_73[addr0] <= op_hcompute_conv_stencil_1_write[0];
        74:bank_74[addr0] <= op_hcompute_conv_stencil_1_write[0];
        75:bank_75[addr0] <= op_hcompute_conv_stencil_1_write[0];
        76:bank_76[addr0] <= op_hcompute_conv_stencil_1_write[0];
        77:bank_77[addr0] <= op_hcompute_conv_stencil_1_write[0];
        78:bank_78[addr0] <= op_hcompute_conv_stencil_1_write[0];
        79:bank_79[addr0] <= op_hcompute_conv_stencil_1_write[0];
        80:bank_80[addr0] <= op_hcompute_conv_stencil_1_write[0];
        81:bank_81[addr0] <= op_hcompute_conv_stencil_1_write[0];
        82:bank_82[addr0] <= op_hcompute_conv_stencil_1_write[0];
        83:bank_83[addr0] <= op_hcompute_conv_stencil_1_write[0];
      endcase
    end
    if (op_hcompute_conv_stencil_2_write_wen_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_bank_selector.out)
        0:bank_0[addr1] <= op_hcompute_conv_stencil_2_write[0];
        1:bank_1[addr1] <= op_hcompute_conv_stencil_2_write[0];
        2:bank_2[addr1] <= op_hcompute_conv_stencil_2_write[0];
        3:bank_3[addr1] <= op_hcompute_conv_stencil_2_write[0];
        4:bank_4[addr1] <= op_hcompute_conv_stencil_2_write[0];
        5:bank_5[addr1] <= op_hcompute_conv_stencil_2_write[0];
        6:bank_6[addr1] <= op_hcompute_conv_stencil_2_write[0];
        7:bank_7[addr1] <= op_hcompute_conv_stencil_2_write[0];
        8:bank_8[addr1] <= op_hcompute_conv_stencil_2_write[0];
        9:bank_9[addr1] <= op_hcompute_conv_stencil_2_write[0];
        10:bank_10[addr1] <= op_hcompute_conv_stencil_2_write[0];
        11:bank_11[addr1] <= op_hcompute_conv_stencil_2_write[0];
        12:bank_12[addr1] <= op_hcompute_conv_stencil_2_write[0];
        13:bank_13[addr1] <= op_hcompute_conv_stencil_2_write[0];
        14:bank_14[addr1] <= op_hcompute_conv_stencil_2_write[0];
        15:bank_15[addr1] <= op_hcompute_conv_stencil_2_write[0];
        16:bank_16[addr1] <= op_hcompute_conv_stencil_2_write[0];
        17:bank_17[addr1] <= op_hcompute_conv_stencil_2_write[0];
        18:bank_18[addr1] <= op_hcompute_conv_stencil_2_write[0];
        19:bank_19[addr1] <= op_hcompute_conv_stencil_2_write[0];
        20:bank_20[addr1] <= op_hcompute_conv_stencil_2_write[0];
        21:bank_21[addr1] <= op_hcompute_conv_stencil_2_write[0];
        22:bank_22[addr1] <= op_hcompute_conv_stencil_2_write[0];
        23:bank_23[addr1] <= op_hcompute_conv_stencil_2_write[0];
        24:bank_24[addr1] <= op_hcompute_conv_stencil_2_write[0];
        25:bank_25[addr1] <= op_hcompute_conv_stencil_2_write[0];
        26:bank_26[addr1] <= op_hcompute_conv_stencil_2_write[0];
        27:bank_27[addr1] <= op_hcompute_conv_stencil_2_write[0];
        28:bank_28[addr1] <= op_hcompute_conv_stencil_2_write[0];
        29:bank_29[addr1] <= op_hcompute_conv_stencil_2_write[0];
        30:bank_30[addr1] <= op_hcompute_conv_stencil_2_write[0];
        31:bank_31[addr1] <= op_hcompute_conv_stencil_2_write[0];
        32:bank_32[addr1] <= op_hcompute_conv_stencil_2_write[0];
        33:bank_33[addr1] <= op_hcompute_conv_stencil_2_write[0];
        34:bank_34[addr1] <= op_hcompute_conv_stencil_2_write[0];
        35:bank_35[addr1] <= op_hcompute_conv_stencil_2_write[0];
        36:bank_36[addr1] <= op_hcompute_conv_stencil_2_write[0];
        37:bank_37[addr1] <= op_hcompute_conv_stencil_2_write[0];
        38:bank_38[addr1] <= op_hcompute_conv_stencil_2_write[0];
        39:bank_39[addr1] <= op_hcompute_conv_stencil_2_write[0];
        40:bank_40[addr1] <= op_hcompute_conv_stencil_2_write[0];
        41:bank_41[addr1] <= op_hcompute_conv_stencil_2_write[0];
        42:bank_42[addr1] <= op_hcompute_conv_stencil_2_write[0];
        43:bank_43[addr1] <= op_hcompute_conv_stencil_2_write[0];
        44:bank_44[addr1] <= op_hcompute_conv_stencil_2_write[0];
        45:bank_45[addr1] <= op_hcompute_conv_stencil_2_write[0];
        46:bank_46[addr1] <= op_hcompute_conv_stencil_2_write[0];
        47:bank_47[addr1] <= op_hcompute_conv_stencil_2_write[0];
        48:bank_48[addr1] <= op_hcompute_conv_stencil_2_write[0];
        49:bank_49[addr1] <= op_hcompute_conv_stencil_2_write[0];
        50:bank_50[addr1] <= op_hcompute_conv_stencil_2_write[0];
        51:bank_51[addr1] <= op_hcompute_conv_stencil_2_write[0];
        52:bank_52[addr1] <= op_hcompute_conv_stencil_2_write[0];
        53:bank_53[addr1] <= op_hcompute_conv_stencil_2_write[0];
        54:bank_54[addr1] <= op_hcompute_conv_stencil_2_write[0];
        55:bank_55[addr1] <= op_hcompute_conv_stencil_2_write[0];
        56:bank_56[addr1] <= op_hcompute_conv_stencil_2_write[0];
        57:bank_57[addr1] <= op_hcompute_conv_stencil_2_write[0];
        58:bank_58[addr1] <= op_hcompute_conv_stencil_2_write[0];
        59:bank_59[addr1] <= op_hcompute_conv_stencil_2_write[0];
        60:bank_60[addr1] <= op_hcompute_conv_stencil_2_write[0];
        61:bank_61[addr1] <= op_hcompute_conv_stencil_2_write[0];
        62:bank_62[addr1] <= op_hcompute_conv_stencil_2_write[0];
        63:bank_63[addr1] <= op_hcompute_conv_stencil_2_write[0];
        64:bank_64[addr1] <= op_hcompute_conv_stencil_2_write[0];
        65:bank_65[addr1] <= op_hcompute_conv_stencil_2_write[0];
        66:bank_66[addr1] <= op_hcompute_conv_stencil_2_write[0];
        67:bank_67[addr1] <= op_hcompute_conv_stencil_2_write[0];
        68:bank_68[addr1] <= op_hcompute_conv_stencil_2_write[0];
        69:bank_69[addr1] <= op_hcompute_conv_stencil_2_write[0];
        70:bank_70[addr1] <= op_hcompute_conv_stencil_2_write[0];
        71:bank_71[addr1] <= op_hcompute_conv_stencil_2_write[0];
        72:bank_72[addr1] <= op_hcompute_conv_stencil_2_write[0];
        73:bank_73[addr1] <= op_hcompute_conv_stencil_2_write[0];
        74:bank_74[addr1] <= op_hcompute_conv_stencil_2_write[0];
        75:bank_75[addr1] <= op_hcompute_conv_stencil_2_write[0];
        76:bank_76[addr1] <= op_hcompute_conv_stencil_2_write[0];
        77:bank_77[addr1] <= op_hcompute_conv_stencil_2_write[0];
        78:bank_78[addr1] <= op_hcompute_conv_stencil_2_write[0];
        79:bank_79[addr1] <= op_hcompute_conv_stencil_2_write[0];
        80:bank_80[addr1] <= op_hcompute_conv_stencil_2_write[0];
        81:bank_81[addr1] <= op_hcompute_conv_stencil_2_write[0];
        82:bank_82[addr1] <= op_hcompute_conv_stencil_2_write[0];
        83:bank_83[addr1] <= op_hcompute_conv_stencil_2_write[0];
      endcase
    end
    if (op_hcompute_conv_stencil_3_write_wen_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_bank_selector.out)
        0:bank_0[addr2] <= op_hcompute_conv_stencil_3_write[0];
        1:bank_1[addr2] <= op_hcompute_conv_stencil_3_write[0];
        2:bank_2[addr2] <= op_hcompute_conv_stencil_3_write[0];
        3:bank_3[addr2] <= op_hcompute_conv_stencil_3_write[0];
        4:bank_4[addr2] <= op_hcompute_conv_stencil_3_write[0];
        5:bank_5[addr2] <= op_hcompute_conv_stencil_3_write[0];
        6:bank_6[addr2] <= op_hcompute_conv_stencil_3_write[0];
        7:bank_7[addr2] <= op_hcompute_conv_stencil_3_write[0];
        8:bank_8[addr2] <= op_hcompute_conv_stencil_3_write[0];
        9:bank_9[addr2] <= op_hcompute_conv_stencil_3_write[0];
        10:bank_10[addr2] <= op_hcompute_conv_stencil_3_write[0];
        11:bank_11[addr2] <= op_hcompute_conv_stencil_3_write[0];
        12:bank_12[addr2] <= op_hcompute_conv_stencil_3_write[0];
        13:bank_13[addr2] <= op_hcompute_conv_stencil_3_write[0];
        14:bank_14[addr2] <= op_hcompute_conv_stencil_3_write[0];
        15:bank_15[addr2] <= op_hcompute_conv_stencil_3_write[0];
        16:bank_16[addr2] <= op_hcompute_conv_stencil_3_write[0];
        17:bank_17[addr2] <= op_hcompute_conv_stencil_3_write[0];
        18:bank_18[addr2] <= op_hcompute_conv_stencil_3_write[0];
        19:bank_19[addr2] <= op_hcompute_conv_stencil_3_write[0];
        20:bank_20[addr2] <= op_hcompute_conv_stencil_3_write[0];
        21:bank_21[addr2] <= op_hcompute_conv_stencil_3_write[0];
        22:bank_22[addr2] <= op_hcompute_conv_stencil_3_write[0];
        23:bank_23[addr2] <= op_hcompute_conv_stencil_3_write[0];
        24:bank_24[addr2] <= op_hcompute_conv_stencil_3_write[0];
        25:bank_25[addr2] <= op_hcompute_conv_stencil_3_write[0];
        26:bank_26[addr2] <= op_hcompute_conv_stencil_3_write[0];
        27:bank_27[addr2] <= op_hcompute_conv_stencil_3_write[0];
        28:bank_28[addr2] <= op_hcompute_conv_stencil_3_write[0];
        29:bank_29[addr2] <= op_hcompute_conv_stencil_3_write[0];
        30:bank_30[addr2] <= op_hcompute_conv_stencil_3_write[0];
        31:bank_31[addr2] <= op_hcompute_conv_stencil_3_write[0];
        32:bank_32[addr2] <= op_hcompute_conv_stencil_3_write[0];
        33:bank_33[addr2] <= op_hcompute_conv_stencil_3_write[0];
        34:bank_34[addr2] <= op_hcompute_conv_stencil_3_write[0];
        35:bank_35[addr2] <= op_hcompute_conv_stencil_3_write[0];
        36:bank_36[addr2] <= op_hcompute_conv_stencil_3_write[0];
        37:bank_37[addr2] <= op_hcompute_conv_stencil_3_write[0];
        38:bank_38[addr2] <= op_hcompute_conv_stencil_3_write[0];
        39:bank_39[addr2] <= op_hcompute_conv_stencil_3_write[0];
        40:bank_40[addr2] <= op_hcompute_conv_stencil_3_write[0];
        41:bank_41[addr2] <= op_hcompute_conv_stencil_3_write[0];
        42:bank_42[addr2] <= op_hcompute_conv_stencil_3_write[0];
        43:bank_43[addr2] <= op_hcompute_conv_stencil_3_write[0];
        44:bank_44[addr2] <= op_hcompute_conv_stencil_3_write[0];
        45:bank_45[addr2] <= op_hcompute_conv_stencil_3_write[0];
        46:bank_46[addr2] <= op_hcompute_conv_stencil_3_write[0];
        47:bank_47[addr2] <= op_hcompute_conv_stencil_3_write[0];
        48:bank_48[addr2] <= op_hcompute_conv_stencil_3_write[0];
        49:bank_49[addr2] <= op_hcompute_conv_stencil_3_write[0];
        50:bank_50[addr2] <= op_hcompute_conv_stencil_3_write[0];
        51:bank_51[addr2] <= op_hcompute_conv_stencil_3_write[0];
        52:bank_52[addr2] <= op_hcompute_conv_stencil_3_write[0];
        53:bank_53[addr2] <= op_hcompute_conv_stencil_3_write[0];
        54:bank_54[addr2] <= op_hcompute_conv_stencil_3_write[0];
        55:bank_55[addr2] <= op_hcompute_conv_stencil_3_write[0];
        56:bank_56[addr2] <= op_hcompute_conv_stencil_3_write[0];
        57:bank_57[addr2] <= op_hcompute_conv_stencil_3_write[0];
        58:bank_58[addr2] <= op_hcompute_conv_stencil_3_write[0];
        59:bank_59[addr2] <= op_hcompute_conv_stencil_3_write[0];
        60:bank_60[addr2] <= op_hcompute_conv_stencil_3_write[0];
        61:bank_61[addr2] <= op_hcompute_conv_stencil_3_write[0];
        62:bank_62[addr2] <= op_hcompute_conv_stencil_3_write[0];
        63:bank_63[addr2] <= op_hcompute_conv_stencil_3_write[0];
        64:bank_64[addr2] <= op_hcompute_conv_stencil_3_write[0];
        65:bank_65[addr2] <= op_hcompute_conv_stencil_3_write[0];
        66:bank_66[addr2] <= op_hcompute_conv_stencil_3_write[0];
        67:bank_67[addr2] <= op_hcompute_conv_stencil_3_write[0];
        68:bank_68[addr2] <= op_hcompute_conv_stencil_3_write[0];
        69:bank_69[addr2] <= op_hcompute_conv_stencil_3_write[0];
        70:bank_70[addr2] <= op_hcompute_conv_stencil_3_write[0];
        71:bank_71[addr2] <= op_hcompute_conv_stencil_3_write[0];
        72:bank_72[addr2] <= op_hcompute_conv_stencil_3_write[0];
        73:bank_73[addr2] <= op_hcompute_conv_stencil_3_write[0];
        74:bank_74[addr2] <= op_hcompute_conv_stencil_3_write[0];
        75:bank_75[addr2] <= op_hcompute_conv_stencil_3_write[0];
        76:bank_76[addr2] <= op_hcompute_conv_stencil_3_write[0];
        77:bank_77[addr2] <= op_hcompute_conv_stencil_3_write[0];
        78:bank_78[addr2] <= op_hcompute_conv_stencil_3_write[0];
        79:bank_79[addr2] <= op_hcompute_conv_stencil_3_write[0];
        80:bank_80[addr2] <= op_hcompute_conv_stencil_3_write[0];
        81:bank_81[addr2] <= op_hcompute_conv_stencil_3_write[0];
        82:bank_82[addr2] <= op_hcompute_conv_stencil_3_write[0];
        83:bank_83[addr2] <= op_hcompute_conv_stencil_3_write[0];
      endcase
    end
    if (op_hcompute_conv_stencil_4_write_wen_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_bank_selector.out)
        0:bank_0[addr3] <= op_hcompute_conv_stencil_4_write[0];
        1:bank_1[addr3] <= op_hcompute_conv_stencil_4_write[0];
        2:bank_2[addr3] <= op_hcompute_conv_stencil_4_write[0];
        3:bank_3[addr3] <= op_hcompute_conv_stencil_4_write[0];
        4:bank_4[addr3] <= op_hcompute_conv_stencil_4_write[0];
        5:bank_5[addr3] <= op_hcompute_conv_stencil_4_write[0];
        6:bank_6[addr3] <= op_hcompute_conv_stencil_4_write[0];
        7:bank_7[addr3] <= op_hcompute_conv_stencil_4_write[0];
        8:bank_8[addr3] <= op_hcompute_conv_stencil_4_write[0];
        9:bank_9[addr3] <= op_hcompute_conv_stencil_4_write[0];
        10:bank_10[addr3] <= op_hcompute_conv_stencil_4_write[0];
        11:bank_11[addr3] <= op_hcompute_conv_stencil_4_write[0];
        12:bank_12[addr3] <= op_hcompute_conv_stencil_4_write[0];
        13:bank_13[addr3] <= op_hcompute_conv_stencil_4_write[0];
        14:bank_14[addr3] <= op_hcompute_conv_stencil_4_write[0];
        15:bank_15[addr3] <= op_hcompute_conv_stencil_4_write[0];
        16:bank_16[addr3] <= op_hcompute_conv_stencil_4_write[0];
        17:bank_17[addr3] <= op_hcompute_conv_stencil_4_write[0];
        18:bank_18[addr3] <= op_hcompute_conv_stencil_4_write[0];
        19:bank_19[addr3] <= op_hcompute_conv_stencil_4_write[0];
        20:bank_20[addr3] <= op_hcompute_conv_stencil_4_write[0];
        21:bank_21[addr3] <= op_hcompute_conv_stencil_4_write[0];
        22:bank_22[addr3] <= op_hcompute_conv_stencil_4_write[0];
        23:bank_23[addr3] <= op_hcompute_conv_stencil_4_write[0];
        24:bank_24[addr3] <= op_hcompute_conv_stencil_4_write[0];
        25:bank_25[addr3] <= op_hcompute_conv_stencil_4_write[0];
        26:bank_26[addr3] <= op_hcompute_conv_stencil_4_write[0];
        27:bank_27[addr3] <= op_hcompute_conv_stencil_4_write[0];
        28:bank_28[addr3] <= op_hcompute_conv_stencil_4_write[0];
        29:bank_29[addr3] <= op_hcompute_conv_stencil_4_write[0];
        30:bank_30[addr3] <= op_hcompute_conv_stencil_4_write[0];
        31:bank_31[addr3] <= op_hcompute_conv_stencil_4_write[0];
        32:bank_32[addr3] <= op_hcompute_conv_stencil_4_write[0];
        33:bank_33[addr3] <= op_hcompute_conv_stencil_4_write[0];
        34:bank_34[addr3] <= op_hcompute_conv_stencil_4_write[0];
        35:bank_35[addr3] <= op_hcompute_conv_stencil_4_write[0];
        36:bank_36[addr3] <= op_hcompute_conv_stencil_4_write[0];
        37:bank_37[addr3] <= op_hcompute_conv_stencil_4_write[0];
        38:bank_38[addr3] <= op_hcompute_conv_stencil_4_write[0];
        39:bank_39[addr3] <= op_hcompute_conv_stencil_4_write[0];
        40:bank_40[addr3] <= op_hcompute_conv_stencil_4_write[0];
        41:bank_41[addr3] <= op_hcompute_conv_stencil_4_write[0];
        42:bank_42[addr3] <= op_hcompute_conv_stencil_4_write[0];
        43:bank_43[addr3] <= op_hcompute_conv_stencil_4_write[0];
        44:bank_44[addr3] <= op_hcompute_conv_stencil_4_write[0];
        45:bank_45[addr3] <= op_hcompute_conv_stencil_4_write[0];
        46:bank_46[addr3] <= op_hcompute_conv_stencil_4_write[0];
        47:bank_47[addr3] <= op_hcompute_conv_stencil_4_write[0];
        48:bank_48[addr3] <= op_hcompute_conv_stencil_4_write[0];
        49:bank_49[addr3] <= op_hcompute_conv_stencil_4_write[0];
        50:bank_50[addr3] <= op_hcompute_conv_stencil_4_write[0];
        51:bank_51[addr3] <= op_hcompute_conv_stencil_4_write[0];
        52:bank_52[addr3] <= op_hcompute_conv_stencil_4_write[0];
        53:bank_53[addr3] <= op_hcompute_conv_stencil_4_write[0];
        54:bank_54[addr3] <= op_hcompute_conv_stencil_4_write[0];
        55:bank_55[addr3] <= op_hcompute_conv_stencil_4_write[0];
        56:bank_56[addr3] <= op_hcompute_conv_stencil_4_write[0];
        57:bank_57[addr3] <= op_hcompute_conv_stencil_4_write[0];
        58:bank_58[addr3] <= op_hcompute_conv_stencil_4_write[0];
        59:bank_59[addr3] <= op_hcompute_conv_stencil_4_write[0];
        60:bank_60[addr3] <= op_hcompute_conv_stencil_4_write[0];
        61:bank_61[addr3] <= op_hcompute_conv_stencil_4_write[0];
        62:bank_62[addr3] <= op_hcompute_conv_stencil_4_write[0];
        63:bank_63[addr3] <= op_hcompute_conv_stencil_4_write[0];
        64:bank_64[addr3] <= op_hcompute_conv_stencil_4_write[0];
        65:bank_65[addr3] <= op_hcompute_conv_stencil_4_write[0];
        66:bank_66[addr3] <= op_hcompute_conv_stencil_4_write[0];
        67:bank_67[addr3] <= op_hcompute_conv_stencil_4_write[0];
        68:bank_68[addr3] <= op_hcompute_conv_stencil_4_write[0];
        69:bank_69[addr3] <= op_hcompute_conv_stencil_4_write[0];
        70:bank_70[addr3] <= op_hcompute_conv_stencil_4_write[0];
        71:bank_71[addr3] <= op_hcompute_conv_stencil_4_write[0];
        72:bank_72[addr3] <= op_hcompute_conv_stencil_4_write[0];
        73:bank_73[addr3] <= op_hcompute_conv_stencil_4_write[0];
        74:bank_74[addr3] <= op_hcompute_conv_stencil_4_write[0];
        75:bank_75[addr3] <= op_hcompute_conv_stencil_4_write[0];
        76:bank_76[addr3] <= op_hcompute_conv_stencil_4_write[0];
        77:bank_77[addr3] <= op_hcompute_conv_stencil_4_write[0];
        78:bank_78[addr3] <= op_hcompute_conv_stencil_4_write[0];
        79:bank_79[addr3] <= op_hcompute_conv_stencil_4_write[0];
        80:bank_80[addr3] <= op_hcompute_conv_stencil_4_write[0];
        81:bank_81[addr3] <= op_hcompute_conv_stencil_4_write[0];
        82:bank_82[addr3] <= op_hcompute_conv_stencil_4_write[0];
        83:bank_83[addr3] <= op_hcompute_conv_stencil_4_write[0];
      endcase
    end
    if (op_hcompute_conv_stencil_5_write_wen_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_bank_selector.out)
        0:bank_0[addr4] <= op_hcompute_conv_stencil_5_write[0];
        1:bank_1[addr4] <= op_hcompute_conv_stencil_5_write[0];
        2:bank_2[addr4] <= op_hcompute_conv_stencil_5_write[0];
        3:bank_3[addr4] <= op_hcompute_conv_stencil_5_write[0];
        4:bank_4[addr4] <= op_hcompute_conv_stencil_5_write[0];
        5:bank_5[addr4] <= op_hcompute_conv_stencil_5_write[0];
        6:bank_6[addr4] <= op_hcompute_conv_stencil_5_write[0];
        7:bank_7[addr4] <= op_hcompute_conv_stencil_5_write[0];
        8:bank_8[addr4] <= op_hcompute_conv_stencil_5_write[0];
        9:bank_9[addr4] <= op_hcompute_conv_stencil_5_write[0];
        10:bank_10[addr4] <= op_hcompute_conv_stencil_5_write[0];
        11:bank_11[addr4] <= op_hcompute_conv_stencil_5_write[0];
        12:bank_12[addr4] <= op_hcompute_conv_stencil_5_write[0];
        13:bank_13[addr4] <= op_hcompute_conv_stencil_5_write[0];
        14:bank_14[addr4] <= op_hcompute_conv_stencil_5_write[0];
        15:bank_15[addr4] <= op_hcompute_conv_stencil_5_write[0];
        16:bank_16[addr4] <= op_hcompute_conv_stencil_5_write[0];
        17:bank_17[addr4] <= op_hcompute_conv_stencil_5_write[0];
        18:bank_18[addr4] <= op_hcompute_conv_stencil_5_write[0];
        19:bank_19[addr4] <= op_hcompute_conv_stencil_5_write[0];
        20:bank_20[addr4] <= op_hcompute_conv_stencil_5_write[0];
        21:bank_21[addr4] <= op_hcompute_conv_stencil_5_write[0];
        22:bank_22[addr4] <= op_hcompute_conv_stencil_5_write[0];
        23:bank_23[addr4] <= op_hcompute_conv_stencil_5_write[0];
        24:bank_24[addr4] <= op_hcompute_conv_stencil_5_write[0];
        25:bank_25[addr4] <= op_hcompute_conv_stencil_5_write[0];
        26:bank_26[addr4] <= op_hcompute_conv_stencil_5_write[0];
        27:bank_27[addr4] <= op_hcompute_conv_stencil_5_write[0];
        28:bank_28[addr4] <= op_hcompute_conv_stencil_5_write[0];
        29:bank_29[addr4] <= op_hcompute_conv_stencil_5_write[0];
        30:bank_30[addr4] <= op_hcompute_conv_stencil_5_write[0];
        31:bank_31[addr4] <= op_hcompute_conv_stencil_5_write[0];
        32:bank_32[addr4] <= op_hcompute_conv_stencil_5_write[0];
        33:bank_33[addr4] <= op_hcompute_conv_stencil_5_write[0];
        34:bank_34[addr4] <= op_hcompute_conv_stencil_5_write[0];
        35:bank_35[addr4] <= op_hcompute_conv_stencil_5_write[0];
        36:bank_36[addr4] <= op_hcompute_conv_stencil_5_write[0];
        37:bank_37[addr4] <= op_hcompute_conv_stencil_5_write[0];
        38:bank_38[addr4] <= op_hcompute_conv_stencil_5_write[0];
        39:bank_39[addr4] <= op_hcompute_conv_stencil_5_write[0];
        40:bank_40[addr4] <= op_hcompute_conv_stencil_5_write[0];
        41:bank_41[addr4] <= op_hcompute_conv_stencil_5_write[0];
        42:bank_42[addr4] <= op_hcompute_conv_stencil_5_write[0];
        43:bank_43[addr4] <= op_hcompute_conv_stencil_5_write[0];
        44:bank_44[addr4] <= op_hcompute_conv_stencil_5_write[0];
        45:bank_45[addr4] <= op_hcompute_conv_stencil_5_write[0];
        46:bank_46[addr4] <= op_hcompute_conv_stencil_5_write[0];
        47:bank_47[addr4] <= op_hcompute_conv_stencil_5_write[0];
        48:bank_48[addr4] <= op_hcompute_conv_stencil_5_write[0];
        49:bank_49[addr4] <= op_hcompute_conv_stencil_5_write[0];
        50:bank_50[addr4] <= op_hcompute_conv_stencil_5_write[0];
        51:bank_51[addr4] <= op_hcompute_conv_stencil_5_write[0];
        52:bank_52[addr4] <= op_hcompute_conv_stencil_5_write[0];
        53:bank_53[addr4] <= op_hcompute_conv_stencil_5_write[0];
        54:bank_54[addr4] <= op_hcompute_conv_stencil_5_write[0];
        55:bank_55[addr4] <= op_hcompute_conv_stencil_5_write[0];
        56:bank_56[addr4] <= op_hcompute_conv_stencil_5_write[0];
        57:bank_57[addr4] <= op_hcompute_conv_stencil_5_write[0];
        58:bank_58[addr4] <= op_hcompute_conv_stencil_5_write[0];
        59:bank_59[addr4] <= op_hcompute_conv_stencil_5_write[0];
        60:bank_60[addr4] <= op_hcompute_conv_stencil_5_write[0];
        61:bank_61[addr4] <= op_hcompute_conv_stencil_5_write[0];
        62:bank_62[addr4] <= op_hcompute_conv_stencil_5_write[0];
        63:bank_63[addr4] <= op_hcompute_conv_stencil_5_write[0];
        64:bank_64[addr4] <= op_hcompute_conv_stencil_5_write[0];
        65:bank_65[addr4] <= op_hcompute_conv_stencil_5_write[0];
        66:bank_66[addr4] <= op_hcompute_conv_stencil_5_write[0];
        67:bank_67[addr4] <= op_hcompute_conv_stencil_5_write[0];
        68:bank_68[addr4] <= op_hcompute_conv_stencil_5_write[0];
        69:bank_69[addr4] <= op_hcompute_conv_stencil_5_write[0];
        70:bank_70[addr4] <= op_hcompute_conv_stencil_5_write[0];
        71:bank_71[addr4] <= op_hcompute_conv_stencil_5_write[0];
        72:bank_72[addr4] <= op_hcompute_conv_stencil_5_write[0];
        73:bank_73[addr4] <= op_hcompute_conv_stencil_5_write[0];
        74:bank_74[addr4] <= op_hcompute_conv_stencil_5_write[0];
        75:bank_75[addr4] <= op_hcompute_conv_stencil_5_write[0];
        76:bank_76[addr4] <= op_hcompute_conv_stencil_5_write[0];
        77:bank_77[addr4] <= op_hcompute_conv_stencil_5_write[0];
        78:bank_78[addr4] <= op_hcompute_conv_stencil_5_write[0];
        79:bank_79[addr4] <= op_hcompute_conv_stencil_5_write[0];
        80:bank_80[addr4] <= op_hcompute_conv_stencil_5_write[0];
        81:bank_81[addr4] <= op_hcompute_conv_stencil_5_write[0];
        82:bank_82[addr4] <= op_hcompute_conv_stencil_5_write[0];
        83:bank_83[addr4] <= op_hcompute_conv_stencil_5_write[0];
      endcase
    end
    if (op_hcompute_conv_stencil_write_wen_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_bank_selector.out)
        0:bank_0[addr5] <= op_hcompute_conv_stencil_write[0];
        1:bank_1[addr5] <= op_hcompute_conv_stencil_write[0];
        2:bank_2[addr5] <= op_hcompute_conv_stencil_write[0];
        3:bank_3[addr5] <= op_hcompute_conv_stencil_write[0];
        4:bank_4[addr5] <= op_hcompute_conv_stencil_write[0];
        5:bank_5[addr5] <= op_hcompute_conv_stencil_write[0];
        6:bank_6[addr5] <= op_hcompute_conv_stencil_write[0];
        7:bank_7[addr5] <= op_hcompute_conv_stencil_write[0];
        8:bank_8[addr5] <= op_hcompute_conv_stencil_write[0];
        9:bank_9[addr5] <= op_hcompute_conv_stencil_write[0];
        10:bank_10[addr5] <= op_hcompute_conv_stencil_write[0];
        11:bank_11[addr5] <= op_hcompute_conv_stencil_write[0];
        12:bank_12[addr5] <= op_hcompute_conv_stencil_write[0];
        13:bank_13[addr5] <= op_hcompute_conv_stencil_write[0];
        14:bank_14[addr5] <= op_hcompute_conv_stencil_write[0];
        15:bank_15[addr5] <= op_hcompute_conv_stencil_write[0];
        16:bank_16[addr5] <= op_hcompute_conv_stencil_write[0];
        17:bank_17[addr5] <= op_hcompute_conv_stencil_write[0];
        18:bank_18[addr5] <= op_hcompute_conv_stencil_write[0];
        19:bank_19[addr5] <= op_hcompute_conv_stencil_write[0];
        20:bank_20[addr5] <= op_hcompute_conv_stencil_write[0];
        21:bank_21[addr5] <= op_hcompute_conv_stencil_write[0];
        22:bank_22[addr5] <= op_hcompute_conv_stencil_write[0];
        23:bank_23[addr5] <= op_hcompute_conv_stencil_write[0];
        24:bank_24[addr5] <= op_hcompute_conv_stencil_write[0];
        25:bank_25[addr5] <= op_hcompute_conv_stencil_write[0];
        26:bank_26[addr5] <= op_hcompute_conv_stencil_write[0];
        27:bank_27[addr5] <= op_hcompute_conv_stencil_write[0];
        28:bank_28[addr5] <= op_hcompute_conv_stencil_write[0];
        29:bank_29[addr5] <= op_hcompute_conv_stencil_write[0];
        30:bank_30[addr5] <= op_hcompute_conv_stencil_write[0];
        31:bank_31[addr5] <= op_hcompute_conv_stencil_write[0];
        32:bank_32[addr5] <= op_hcompute_conv_stencil_write[0];
        33:bank_33[addr5] <= op_hcompute_conv_stencil_write[0];
        34:bank_34[addr5] <= op_hcompute_conv_stencil_write[0];
        35:bank_35[addr5] <= op_hcompute_conv_stencil_write[0];
        36:bank_36[addr5] <= op_hcompute_conv_stencil_write[0];
        37:bank_37[addr5] <= op_hcompute_conv_stencil_write[0];
        38:bank_38[addr5] <= op_hcompute_conv_stencil_write[0];
        39:bank_39[addr5] <= op_hcompute_conv_stencil_write[0];
        40:bank_40[addr5] <= op_hcompute_conv_stencil_write[0];
        41:bank_41[addr5] <= op_hcompute_conv_stencil_write[0];
        42:bank_42[addr5] <= op_hcompute_conv_stencil_write[0];
        43:bank_43[addr5] <= op_hcompute_conv_stencil_write[0];
        44:bank_44[addr5] <= op_hcompute_conv_stencil_write[0];
        45:bank_45[addr5] <= op_hcompute_conv_stencil_write[0];
        46:bank_46[addr5] <= op_hcompute_conv_stencil_write[0];
        47:bank_47[addr5] <= op_hcompute_conv_stencil_write[0];
        48:bank_48[addr5] <= op_hcompute_conv_stencil_write[0];
        49:bank_49[addr5] <= op_hcompute_conv_stencil_write[0];
        50:bank_50[addr5] <= op_hcompute_conv_stencil_write[0];
        51:bank_51[addr5] <= op_hcompute_conv_stencil_write[0];
        52:bank_52[addr5] <= op_hcompute_conv_stencil_write[0];
        53:bank_53[addr5] <= op_hcompute_conv_stencil_write[0];
        54:bank_54[addr5] <= op_hcompute_conv_stencil_write[0];
        55:bank_55[addr5] <= op_hcompute_conv_stencil_write[0];
        56:bank_56[addr5] <= op_hcompute_conv_stencil_write[0];
        57:bank_57[addr5] <= op_hcompute_conv_stencil_write[0];
        58:bank_58[addr5] <= op_hcompute_conv_stencil_write[0];
        59:bank_59[addr5] <= op_hcompute_conv_stencil_write[0];
        60:bank_60[addr5] <= op_hcompute_conv_stencil_write[0];
        61:bank_61[addr5] <= op_hcompute_conv_stencil_write[0];
        62:bank_62[addr5] <= op_hcompute_conv_stencil_write[0];
        63:bank_63[addr5] <= op_hcompute_conv_stencil_write[0];
        64:bank_64[addr5] <= op_hcompute_conv_stencil_write[0];
        65:bank_65[addr5] <= op_hcompute_conv_stencil_write[0];
        66:bank_66[addr5] <= op_hcompute_conv_stencil_write[0];
        67:bank_67[addr5] <= op_hcompute_conv_stencil_write[0];
        68:bank_68[addr5] <= op_hcompute_conv_stencil_write[0];
        69:bank_69[addr5] <= op_hcompute_conv_stencil_write[0];
        70:bank_70[addr5] <= op_hcompute_conv_stencil_write[0];
        71:bank_71[addr5] <= op_hcompute_conv_stencil_write[0];
        72:bank_72[addr5] <= op_hcompute_conv_stencil_write[0];
        73:bank_73[addr5] <= op_hcompute_conv_stencil_write[0];
        74:bank_74[addr5] <= op_hcompute_conv_stencil_write[0];
        75:bank_75[addr5] <= op_hcompute_conv_stencil_write[0];
        76:bank_76[addr5] <= op_hcompute_conv_stencil_write[0];
        77:bank_77[addr5] <= op_hcompute_conv_stencil_write[0];
        78:bank_78[addr5] <= op_hcompute_conv_stencil_write[0];
        79:bank_79[addr5] <= op_hcompute_conv_stencil_write[0];
        80:bank_80[addr5] <= op_hcompute_conv_stencil_write[0];
        81:bank_81[addr5] <= op_hcompute_conv_stencil_write[0];
        82:bank_82[addr5] <= op_hcompute_conv_stencil_write[0];
        83:bank_83[addr5] <= op_hcompute_conv_stencil_write[0];
      endcase
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[0] <= bank_0[addr6];
        1:op_hcompute_conv_stencil_3_read[0] <= bank_1[addr6];
        2:op_hcompute_conv_stencil_3_read[0] <= bank_2[addr6];
        3:op_hcompute_conv_stencil_3_read[0] <= bank_3[addr6];
        4:op_hcompute_conv_stencil_3_read[0] <= bank_4[addr6];
        5:op_hcompute_conv_stencil_3_read[0] <= bank_5[addr6];
        6:op_hcompute_conv_stencil_3_read[0] <= bank_6[addr6];
        7:op_hcompute_conv_stencil_3_read[0] <= bank_7[addr6];
        8:op_hcompute_conv_stencil_3_read[0] <= bank_8[addr6];
        9:op_hcompute_conv_stencil_3_read[0] <= bank_9[addr6];
        10:op_hcompute_conv_stencil_3_read[0] <= bank_10[addr6];
        11:op_hcompute_conv_stencil_3_read[0] <= bank_11[addr6];
        12:op_hcompute_conv_stencil_3_read[0] <= bank_12[addr6];
        13:op_hcompute_conv_stencil_3_read[0] <= bank_13[addr6];
        14:op_hcompute_conv_stencil_3_read[0] <= bank_14[addr6];
        15:op_hcompute_conv_stencil_3_read[0] <= bank_15[addr6];
        16:op_hcompute_conv_stencil_3_read[0] <= bank_16[addr6];
        17:op_hcompute_conv_stencil_3_read[0] <= bank_17[addr6];
        18:op_hcompute_conv_stencil_3_read[0] <= bank_18[addr6];
        19:op_hcompute_conv_stencil_3_read[0] <= bank_19[addr6];
        20:op_hcompute_conv_stencil_3_read[0] <= bank_20[addr6];
        21:op_hcompute_conv_stencil_3_read[0] <= bank_21[addr6];
        22:op_hcompute_conv_stencil_3_read[0] <= bank_22[addr6];
        23:op_hcompute_conv_stencil_3_read[0] <= bank_23[addr6];
        24:op_hcompute_conv_stencil_3_read[0] <= bank_24[addr6];
        25:op_hcompute_conv_stencil_3_read[0] <= bank_25[addr6];
        26:op_hcompute_conv_stencil_3_read[0] <= bank_26[addr6];
        27:op_hcompute_conv_stencil_3_read[0] <= bank_27[addr6];
        28:op_hcompute_conv_stencil_3_read[0] <= bank_28[addr6];
        29:op_hcompute_conv_stencil_3_read[0] <= bank_29[addr6];
        30:op_hcompute_conv_stencil_3_read[0] <= bank_30[addr6];
        31:op_hcompute_conv_stencil_3_read[0] <= bank_31[addr6];
        32:op_hcompute_conv_stencil_3_read[0] <= bank_32[addr6];
        33:op_hcompute_conv_stencil_3_read[0] <= bank_33[addr6];
        34:op_hcompute_conv_stencil_3_read[0] <= bank_34[addr6];
        35:op_hcompute_conv_stencil_3_read[0] <= bank_35[addr6];
        36:op_hcompute_conv_stencil_3_read[0] <= bank_36[addr6];
        37:op_hcompute_conv_stencil_3_read[0] <= bank_37[addr6];
        38:op_hcompute_conv_stencil_3_read[0] <= bank_38[addr6];
        39:op_hcompute_conv_stencil_3_read[0] <= bank_39[addr6];
        40:op_hcompute_conv_stencil_3_read[0] <= bank_40[addr6];
        41:op_hcompute_conv_stencil_3_read[0] <= bank_41[addr6];
        42:op_hcompute_conv_stencil_3_read[0] <= bank_42[addr6];
        43:op_hcompute_conv_stencil_3_read[0] <= bank_43[addr6];
        44:op_hcompute_conv_stencil_3_read[0] <= bank_44[addr6];
        45:op_hcompute_conv_stencil_3_read[0] <= bank_45[addr6];
        46:op_hcompute_conv_stencil_3_read[0] <= bank_46[addr6];
        47:op_hcompute_conv_stencil_3_read[0] <= bank_47[addr6];
        48:op_hcompute_conv_stencil_3_read[0] <= bank_48[addr6];
        49:op_hcompute_conv_stencil_3_read[0] <= bank_49[addr6];
        50:op_hcompute_conv_stencil_3_read[0] <= bank_50[addr6];
        51:op_hcompute_conv_stencil_3_read[0] <= bank_51[addr6];
        52:op_hcompute_conv_stencil_3_read[0] <= bank_52[addr6];
        53:op_hcompute_conv_stencil_3_read[0] <= bank_53[addr6];
        54:op_hcompute_conv_stencil_3_read[0] <= bank_54[addr6];
        55:op_hcompute_conv_stencil_3_read[0] <= bank_55[addr6];
        56:op_hcompute_conv_stencil_3_read[0] <= bank_56[addr6];
        57:op_hcompute_conv_stencil_3_read[0] <= bank_57[addr6];
        58:op_hcompute_conv_stencil_3_read[0] <= bank_58[addr6];
        59:op_hcompute_conv_stencil_3_read[0] <= bank_59[addr6];
        60:op_hcompute_conv_stencil_3_read[0] <= bank_60[addr6];
        61:op_hcompute_conv_stencil_3_read[0] <= bank_61[addr6];
        62:op_hcompute_conv_stencil_3_read[0] <= bank_62[addr6];
        63:op_hcompute_conv_stencil_3_read[0] <= bank_63[addr6];
        64:op_hcompute_conv_stencil_3_read[0] <= bank_64[addr6];
        65:op_hcompute_conv_stencil_3_read[0] <= bank_65[addr6];
        66:op_hcompute_conv_stencil_3_read[0] <= bank_66[addr6];
        67:op_hcompute_conv_stencil_3_read[0] <= bank_67[addr6];
        68:op_hcompute_conv_stencil_3_read[0] <= bank_68[addr6];
        69:op_hcompute_conv_stencil_3_read[0] <= bank_69[addr6];
        70:op_hcompute_conv_stencil_3_read[0] <= bank_70[addr6];
        71:op_hcompute_conv_stencil_3_read[0] <= bank_71[addr6];
        72:op_hcompute_conv_stencil_3_read[0] <= bank_72[addr6];
        73:op_hcompute_conv_stencil_3_read[0] <= bank_73[addr6];
        74:op_hcompute_conv_stencil_3_read[0] <= bank_74[addr6];
        75:op_hcompute_conv_stencil_3_read[0] <= bank_75[addr6];
        76:op_hcompute_conv_stencil_3_read[0] <= bank_76[addr6];
        77:op_hcompute_conv_stencil_3_read[0] <= bank_77[addr6];
        78:op_hcompute_conv_stencil_3_read[0] <= bank_78[addr6];
        79:op_hcompute_conv_stencil_3_read[0] <= bank_79[addr6];
        80:op_hcompute_conv_stencil_3_read[0] <= bank_80[addr6];
        81:op_hcompute_conv_stencil_3_read[0] <= bank_81[addr6];
        82:op_hcompute_conv_stencil_3_read[0] <= bank_82[addr6];
        83:op_hcompute_conv_stencil_3_read[0] <= bank_83[addr6];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[0] <= bank_0[addr7];
        1:op_hcompute_conv_stencil_4_read[0] <= bank_1[addr7];
        2:op_hcompute_conv_stencil_4_read[0] <= bank_2[addr7];
        3:op_hcompute_conv_stencil_4_read[0] <= bank_3[addr7];
        4:op_hcompute_conv_stencil_4_read[0] <= bank_4[addr7];
        5:op_hcompute_conv_stencil_4_read[0] <= bank_5[addr7];
        6:op_hcompute_conv_stencil_4_read[0] <= bank_6[addr7];
        7:op_hcompute_conv_stencil_4_read[0] <= bank_7[addr7];
        8:op_hcompute_conv_stencil_4_read[0] <= bank_8[addr7];
        9:op_hcompute_conv_stencil_4_read[0] <= bank_9[addr7];
        10:op_hcompute_conv_stencil_4_read[0] <= bank_10[addr7];
        11:op_hcompute_conv_stencil_4_read[0] <= bank_11[addr7];
        12:op_hcompute_conv_stencil_4_read[0] <= bank_12[addr7];
        13:op_hcompute_conv_stencil_4_read[0] <= bank_13[addr7];
        14:op_hcompute_conv_stencil_4_read[0] <= bank_14[addr7];
        15:op_hcompute_conv_stencil_4_read[0] <= bank_15[addr7];
        16:op_hcompute_conv_stencil_4_read[0] <= bank_16[addr7];
        17:op_hcompute_conv_stencil_4_read[0] <= bank_17[addr7];
        18:op_hcompute_conv_stencil_4_read[0] <= bank_18[addr7];
        19:op_hcompute_conv_stencil_4_read[0] <= bank_19[addr7];
        20:op_hcompute_conv_stencil_4_read[0] <= bank_20[addr7];
        21:op_hcompute_conv_stencil_4_read[0] <= bank_21[addr7];
        22:op_hcompute_conv_stencil_4_read[0] <= bank_22[addr7];
        23:op_hcompute_conv_stencil_4_read[0] <= bank_23[addr7];
        24:op_hcompute_conv_stencil_4_read[0] <= bank_24[addr7];
        25:op_hcompute_conv_stencil_4_read[0] <= bank_25[addr7];
        26:op_hcompute_conv_stencil_4_read[0] <= bank_26[addr7];
        27:op_hcompute_conv_stencil_4_read[0] <= bank_27[addr7];
        28:op_hcompute_conv_stencil_4_read[0] <= bank_28[addr7];
        29:op_hcompute_conv_stencil_4_read[0] <= bank_29[addr7];
        30:op_hcompute_conv_stencil_4_read[0] <= bank_30[addr7];
        31:op_hcompute_conv_stencil_4_read[0] <= bank_31[addr7];
        32:op_hcompute_conv_stencil_4_read[0] <= bank_32[addr7];
        33:op_hcompute_conv_stencil_4_read[0] <= bank_33[addr7];
        34:op_hcompute_conv_stencil_4_read[0] <= bank_34[addr7];
        35:op_hcompute_conv_stencil_4_read[0] <= bank_35[addr7];
        36:op_hcompute_conv_stencil_4_read[0] <= bank_36[addr7];
        37:op_hcompute_conv_stencil_4_read[0] <= bank_37[addr7];
        38:op_hcompute_conv_stencil_4_read[0] <= bank_38[addr7];
        39:op_hcompute_conv_stencil_4_read[0] <= bank_39[addr7];
        40:op_hcompute_conv_stencil_4_read[0] <= bank_40[addr7];
        41:op_hcompute_conv_stencil_4_read[0] <= bank_41[addr7];
        42:op_hcompute_conv_stencil_4_read[0] <= bank_42[addr7];
        43:op_hcompute_conv_stencil_4_read[0] <= bank_43[addr7];
        44:op_hcompute_conv_stencil_4_read[0] <= bank_44[addr7];
        45:op_hcompute_conv_stencil_4_read[0] <= bank_45[addr7];
        46:op_hcompute_conv_stencil_4_read[0] <= bank_46[addr7];
        47:op_hcompute_conv_stencil_4_read[0] <= bank_47[addr7];
        48:op_hcompute_conv_stencil_4_read[0] <= bank_48[addr7];
        49:op_hcompute_conv_stencil_4_read[0] <= bank_49[addr7];
        50:op_hcompute_conv_stencil_4_read[0] <= bank_50[addr7];
        51:op_hcompute_conv_stencil_4_read[0] <= bank_51[addr7];
        52:op_hcompute_conv_stencil_4_read[0] <= bank_52[addr7];
        53:op_hcompute_conv_stencil_4_read[0] <= bank_53[addr7];
        54:op_hcompute_conv_stencil_4_read[0] <= bank_54[addr7];
        55:op_hcompute_conv_stencil_4_read[0] <= bank_55[addr7];
        56:op_hcompute_conv_stencil_4_read[0] <= bank_56[addr7];
        57:op_hcompute_conv_stencil_4_read[0] <= bank_57[addr7];
        58:op_hcompute_conv_stencil_4_read[0] <= bank_58[addr7];
        59:op_hcompute_conv_stencil_4_read[0] <= bank_59[addr7];
        60:op_hcompute_conv_stencil_4_read[0] <= bank_60[addr7];
        61:op_hcompute_conv_stencil_4_read[0] <= bank_61[addr7];
        62:op_hcompute_conv_stencil_4_read[0] <= bank_62[addr7];
        63:op_hcompute_conv_stencil_4_read[0] <= bank_63[addr7];
        64:op_hcompute_conv_stencil_4_read[0] <= bank_64[addr7];
        65:op_hcompute_conv_stencil_4_read[0] <= bank_65[addr7];
        66:op_hcompute_conv_stencil_4_read[0] <= bank_66[addr7];
        67:op_hcompute_conv_stencil_4_read[0] <= bank_67[addr7];
        68:op_hcompute_conv_stencil_4_read[0] <= bank_68[addr7];
        69:op_hcompute_conv_stencil_4_read[0] <= bank_69[addr7];
        70:op_hcompute_conv_stencil_4_read[0] <= bank_70[addr7];
        71:op_hcompute_conv_stencil_4_read[0] <= bank_71[addr7];
        72:op_hcompute_conv_stencil_4_read[0] <= bank_72[addr7];
        73:op_hcompute_conv_stencil_4_read[0] <= bank_73[addr7];
        74:op_hcompute_conv_stencil_4_read[0] <= bank_74[addr7];
        75:op_hcompute_conv_stencil_4_read[0] <= bank_75[addr7];
        76:op_hcompute_conv_stencil_4_read[0] <= bank_76[addr7];
        77:op_hcompute_conv_stencil_4_read[0] <= bank_77[addr7];
        78:op_hcompute_conv_stencil_4_read[0] <= bank_78[addr7];
        79:op_hcompute_conv_stencil_4_read[0] <= bank_79[addr7];
        80:op_hcompute_conv_stencil_4_read[0] <= bank_80[addr7];
        81:op_hcompute_conv_stencil_4_read[0] <= bank_81[addr7];
        82:op_hcompute_conv_stencil_4_read[0] <= bank_82[addr7];
        83:op_hcompute_conv_stencil_4_read[0] <= bank_83[addr7];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[0] <= bank_0[addr8];
        1:op_hcompute_conv_stencil_5_read[0] <= bank_1[addr8];
        2:op_hcompute_conv_stencil_5_read[0] <= bank_2[addr8];
        3:op_hcompute_conv_stencil_5_read[0] <= bank_3[addr8];
        4:op_hcompute_conv_stencil_5_read[0] <= bank_4[addr8];
        5:op_hcompute_conv_stencil_5_read[0] <= bank_5[addr8];
        6:op_hcompute_conv_stencil_5_read[0] <= bank_6[addr8];
        7:op_hcompute_conv_stencil_5_read[0] <= bank_7[addr8];
        8:op_hcompute_conv_stencil_5_read[0] <= bank_8[addr8];
        9:op_hcompute_conv_stencil_5_read[0] <= bank_9[addr8];
        10:op_hcompute_conv_stencil_5_read[0] <= bank_10[addr8];
        11:op_hcompute_conv_stencil_5_read[0] <= bank_11[addr8];
        12:op_hcompute_conv_stencil_5_read[0] <= bank_12[addr8];
        13:op_hcompute_conv_stencil_5_read[0] <= bank_13[addr8];
        14:op_hcompute_conv_stencil_5_read[0] <= bank_14[addr8];
        15:op_hcompute_conv_stencil_5_read[0] <= bank_15[addr8];
        16:op_hcompute_conv_stencil_5_read[0] <= bank_16[addr8];
        17:op_hcompute_conv_stencil_5_read[0] <= bank_17[addr8];
        18:op_hcompute_conv_stencil_5_read[0] <= bank_18[addr8];
        19:op_hcompute_conv_stencil_5_read[0] <= bank_19[addr8];
        20:op_hcompute_conv_stencil_5_read[0] <= bank_20[addr8];
        21:op_hcompute_conv_stencil_5_read[0] <= bank_21[addr8];
        22:op_hcompute_conv_stencil_5_read[0] <= bank_22[addr8];
        23:op_hcompute_conv_stencil_5_read[0] <= bank_23[addr8];
        24:op_hcompute_conv_stencil_5_read[0] <= bank_24[addr8];
        25:op_hcompute_conv_stencil_5_read[0] <= bank_25[addr8];
        26:op_hcompute_conv_stencil_5_read[0] <= bank_26[addr8];
        27:op_hcompute_conv_stencil_5_read[0] <= bank_27[addr8];
        28:op_hcompute_conv_stencil_5_read[0] <= bank_28[addr8];
        29:op_hcompute_conv_stencil_5_read[0] <= bank_29[addr8];
        30:op_hcompute_conv_stencil_5_read[0] <= bank_30[addr8];
        31:op_hcompute_conv_stencil_5_read[0] <= bank_31[addr8];
        32:op_hcompute_conv_stencil_5_read[0] <= bank_32[addr8];
        33:op_hcompute_conv_stencil_5_read[0] <= bank_33[addr8];
        34:op_hcompute_conv_stencil_5_read[0] <= bank_34[addr8];
        35:op_hcompute_conv_stencil_5_read[0] <= bank_35[addr8];
        36:op_hcompute_conv_stencil_5_read[0] <= bank_36[addr8];
        37:op_hcompute_conv_stencil_5_read[0] <= bank_37[addr8];
        38:op_hcompute_conv_stencil_5_read[0] <= bank_38[addr8];
        39:op_hcompute_conv_stencil_5_read[0] <= bank_39[addr8];
        40:op_hcompute_conv_stencil_5_read[0] <= bank_40[addr8];
        41:op_hcompute_conv_stencil_5_read[0] <= bank_41[addr8];
        42:op_hcompute_conv_stencil_5_read[0] <= bank_42[addr8];
        43:op_hcompute_conv_stencil_5_read[0] <= bank_43[addr8];
        44:op_hcompute_conv_stencil_5_read[0] <= bank_44[addr8];
        45:op_hcompute_conv_stencil_5_read[0] <= bank_45[addr8];
        46:op_hcompute_conv_stencil_5_read[0] <= bank_46[addr8];
        47:op_hcompute_conv_stencil_5_read[0] <= bank_47[addr8];
        48:op_hcompute_conv_stencil_5_read[0] <= bank_48[addr8];
        49:op_hcompute_conv_stencil_5_read[0] <= bank_49[addr8];
        50:op_hcompute_conv_stencil_5_read[0] <= bank_50[addr8];
        51:op_hcompute_conv_stencil_5_read[0] <= bank_51[addr8];
        52:op_hcompute_conv_stencil_5_read[0] <= bank_52[addr8];
        53:op_hcompute_conv_stencil_5_read[0] <= bank_53[addr8];
        54:op_hcompute_conv_stencil_5_read[0] <= bank_54[addr8];
        55:op_hcompute_conv_stencil_5_read[0] <= bank_55[addr8];
        56:op_hcompute_conv_stencil_5_read[0] <= bank_56[addr8];
        57:op_hcompute_conv_stencil_5_read[0] <= bank_57[addr8];
        58:op_hcompute_conv_stencil_5_read[0] <= bank_58[addr8];
        59:op_hcompute_conv_stencil_5_read[0] <= bank_59[addr8];
        60:op_hcompute_conv_stencil_5_read[0] <= bank_60[addr8];
        61:op_hcompute_conv_stencil_5_read[0] <= bank_61[addr8];
        62:op_hcompute_conv_stencil_5_read[0] <= bank_62[addr8];
        63:op_hcompute_conv_stencil_5_read[0] <= bank_63[addr8];
        64:op_hcompute_conv_stencil_5_read[0] <= bank_64[addr8];
        65:op_hcompute_conv_stencil_5_read[0] <= bank_65[addr8];
        66:op_hcompute_conv_stencil_5_read[0] <= bank_66[addr8];
        67:op_hcompute_conv_stencil_5_read[0] <= bank_67[addr8];
        68:op_hcompute_conv_stencil_5_read[0] <= bank_68[addr8];
        69:op_hcompute_conv_stencil_5_read[0] <= bank_69[addr8];
        70:op_hcompute_conv_stencil_5_read[0] <= bank_70[addr8];
        71:op_hcompute_conv_stencil_5_read[0] <= bank_71[addr8];
        72:op_hcompute_conv_stencil_5_read[0] <= bank_72[addr8];
        73:op_hcompute_conv_stencil_5_read[0] <= bank_73[addr8];
        74:op_hcompute_conv_stencil_5_read[0] <= bank_74[addr8];
        75:op_hcompute_conv_stencil_5_read[0] <= bank_75[addr8];
        76:op_hcompute_conv_stencil_5_read[0] <= bank_76[addr8];
        77:op_hcompute_conv_stencil_5_read[0] <= bank_77[addr8];
        78:op_hcompute_conv_stencil_5_read[0] <= bank_78[addr8];
        79:op_hcompute_conv_stencil_5_read[0] <= bank_79[addr8];
        80:op_hcompute_conv_stencil_5_read[0] <= bank_80[addr8];
        81:op_hcompute_conv_stencil_5_read[0] <= bank_81[addr8];
        82:op_hcompute_conv_stencil_5_read[0] <= bank_82[addr8];
        83:op_hcompute_conv_stencil_5_read[0] <= bank_83[addr8];
      endcase
    end
    if (op_hcompute_hw_output_stencil_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_bank_selector.out)
        0:op_hcompute_hw_output_stencil_read[0] <= bank_0[addr9];
        1:op_hcompute_hw_output_stencil_read[0] <= bank_1[addr9];
        2:op_hcompute_hw_output_stencil_read[0] <= bank_2[addr9];
        3:op_hcompute_hw_output_stencil_read[0] <= bank_3[addr9];
        4:op_hcompute_hw_output_stencil_read[0] <= bank_4[addr9];
        5:op_hcompute_hw_output_stencil_read[0] <= bank_5[addr9];
        6:op_hcompute_hw_output_stencil_read[0] <= bank_6[addr9];
        7:op_hcompute_hw_output_stencil_read[0] <= bank_7[addr9];
        8:op_hcompute_hw_output_stencil_read[0] <= bank_8[addr9];
        9:op_hcompute_hw_output_stencil_read[0] <= bank_9[addr9];
        10:op_hcompute_hw_output_stencil_read[0] <= bank_10[addr9];
        11:op_hcompute_hw_output_stencil_read[0] <= bank_11[addr9];
        12:op_hcompute_hw_output_stencil_read[0] <= bank_12[addr9];
        13:op_hcompute_hw_output_stencil_read[0] <= bank_13[addr9];
        14:op_hcompute_hw_output_stencil_read[0] <= bank_14[addr9];
        15:op_hcompute_hw_output_stencil_read[0] <= bank_15[addr9];
        16:op_hcompute_hw_output_stencil_read[0] <= bank_16[addr9];
        17:op_hcompute_hw_output_stencil_read[0] <= bank_17[addr9];
        18:op_hcompute_hw_output_stencil_read[0] <= bank_18[addr9];
        19:op_hcompute_hw_output_stencil_read[0] <= bank_19[addr9];
        20:op_hcompute_hw_output_stencil_read[0] <= bank_20[addr9];
        21:op_hcompute_hw_output_stencil_read[0] <= bank_21[addr9];
        22:op_hcompute_hw_output_stencil_read[0] <= bank_22[addr9];
        23:op_hcompute_hw_output_stencil_read[0] <= bank_23[addr9];
        24:op_hcompute_hw_output_stencil_read[0] <= bank_24[addr9];
        25:op_hcompute_hw_output_stencil_read[0] <= bank_25[addr9];
        26:op_hcompute_hw_output_stencil_read[0] <= bank_26[addr9];
        27:op_hcompute_hw_output_stencil_read[0] <= bank_27[addr9];
        28:op_hcompute_hw_output_stencil_read[0] <= bank_28[addr9];
        29:op_hcompute_hw_output_stencil_read[0] <= bank_29[addr9];
        30:op_hcompute_hw_output_stencil_read[0] <= bank_30[addr9];
        31:op_hcompute_hw_output_stencil_read[0] <= bank_31[addr9];
        32:op_hcompute_hw_output_stencil_read[0] <= bank_32[addr9];
        33:op_hcompute_hw_output_stencil_read[0] <= bank_33[addr9];
        34:op_hcompute_hw_output_stencil_read[0] <= bank_34[addr9];
        35:op_hcompute_hw_output_stencil_read[0] <= bank_35[addr9];
        36:op_hcompute_hw_output_stencil_read[0] <= bank_36[addr9];
        37:op_hcompute_hw_output_stencil_read[0] <= bank_37[addr9];
        38:op_hcompute_hw_output_stencil_read[0] <= bank_38[addr9];
        39:op_hcompute_hw_output_stencil_read[0] <= bank_39[addr9];
        40:op_hcompute_hw_output_stencil_read[0] <= bank_40[addr9];
        41:op_hcompute_hw_output_stencil_read[0] <= bank_41[addr9];
        42:op_hcompute_hw_output_stencil_read[0] <= bank_42[addr9];
        43:op_hcompute_hw_output_stencil_read[0] <= bank_43[addr9];
        44:op_hcompute_hw_output_stencil_read[0] <= bank_44[addr9];
        45:op_hcompute_hw_output_stencil_read[0] <= bank_45[addr9];
        46:op_hcompute_hw_output_stencil_read[0] <= bank_46[addr9];
        47:op_hcompute_hw_output_stencil_read[0] <= bank_47[addr9];
        48:op_hcompute_hw_output_stencil_read[0] <= bank_48[addr9];
        49:op_hcompute_hw_output_stencil_read[0] <= bank_49[addr9];
        50:op_hcompute_hw_output_stencil_read[0] <= bank_50[addr9];
        51:op_hcompute_hw_output_stencil_read[0] <= bank_51[addr9];
        52:op_hcompute_hw_output_stencil_read[0] <= bank_52[addr9];
        53:op_hcompute_hw_output_stencil_read[0] <= bank_53[addr9];
        54:op_hcompute_hw_output_stencil_read[0] <= bank_54[addr9];
        55:op_hcompute_hw_output_stencil_read[0] <= bank_55[addr9];
        56:op_hcompute_hw_output_stencil_read[0] <= bank_56[addr9];
        57:op_hcompute_hw_output_stencil_read[0] <= bank_57[addr9];
        58:op_hcompute_hw_output_stencil_read[0] <= bank_58[addr9];
        59:op_hcompute_hw_output_stencil_read[0] <= bank_59[addr9];
        60:op_hcompute_hw_output_stencil_read[0] <= bank_60[addr9];
        61:op_hcompute_hw_output_stencil_read[0] <= bank_61[addr9];
        62:op_hcompute_hw_output_stencil_read[0] <= bank_62[addr9];
        63:op_hcompute_hw_output_stencil_read[0] <= bank_63[addr9];
        64:op_hcompute_hw_output_stencil_read[0] <= bank_64[addr9];
        65:op_hcompute_hw_output_stencil_read[0] <= bank_65[addr9];
        66:op_hcompute_hw_output_stencil_read[0] <= bank_66[addr9];
        67:op_hcompute_hw_output_stencil_read[0] <= bank_67[addr9];
        68:op_hcompute_hw_output_stencil_read[0] <= bank_68[addr9];
        69:op_hcompute_hw_output_stencil_read[0] <= bank_69[addr9];
        70:op_hcompute_hw_output_stencil_read[0] <= bank_70[addr9];
        71:op_hcompute_hw_output_stencil_read[0] <= bank_71[addr9];
        72:op_hcompute_hw_output_stencil_read[0] <= bank_72[addr9];
        73:op_hcompute_hw_output_stencil_read[0] <= bank_73[addr9];
        74:op_hcompute_hw_output_stencil_read[0] <= bank_74[addr9];
        75:op_hcompute_hw_output_stencil_read[0] <= bank_75[addr9];
        76:op_hcompute_hw_output_stencil_read[0] <= bank_76[addr9];
        77:op_hcompute_hw_output_stencil_read[0] <= bank_77[addr9];
        78:op_hcompute_hw_output_stencil_read[0] <= bank_78[addr9];
        79:op_hcompute_hw_output_stencil_read[0] <= bank_79[addr9];
        80:op_hcompute_hw_output_stencil_read[0] <= bank_80[addr9];
        81:op_hcompute_hw_output_stencil_read[0] <= bank_81[addr9];
        82:op_hcompute_hw_output_stencil_read[0] <= bank_82[addr9];
        83:op_hcompute_hw_output_stencil_read[0] <= bank_83[addr9];
      endcase
    end
  end

endmodule


module hw_input_global_wrapper_stencil_bank_selector(input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32] % 8);
  assign out = bank_index_0*1+bank_index_1*1+bank_index_2*1;

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [1:0] read_addr;
  reg [1:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [1:0] read_addr;
  reg [1:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [1:0] read_addr;
  reg [1:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [1:0] read_addr;
  reg [1:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [1:0] read_addr;
  reg [1:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [1:0] read_addr;
  reg [1:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [1:0] read_addr;
  reg [1:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [3:0];

  reg [1:0] read_addr;
  reg [1:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 3;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 3 ? 0 : read_addr + 1;
      write_addr <= write_addr == 3 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [1:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 1;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 1 ? 0 : read_addr + 1;
      write_addr <= write_addr == 1 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(1 + 240hw_input_global_wrapper_s0_y + 8hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3:0], output op_hcompute_hw_input_global_wrapper_stencil_write_wen );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign op_hcompute_hw_input_global_wrapper_stencil_write_wen =(on && on2 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0]==0 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1]<=29 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<=29 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3]<=7);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 239) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] <= op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] <= op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3] <= op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3] + 1;
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_3_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_3_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_3_read_ren =(on && on2 && op_hcompute_conv_stencil_3_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_3_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_3_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_3_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_3_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_3_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_3_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_3_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_3_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3] <= op_hcompute_conv_stencil_3_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4] <= op_hcompute_conv_stencil_3_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8011 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_4_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_4_read_ren =(on && on2 && op_hcompute_conv_stencil_4_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_4_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_4_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_4_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_4_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_4_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_4_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8010) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_4_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_4_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3] <= op_hcompute_conv_stencil_4_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4] <= op_hcompute_conv_stencil_4_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8013 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_5_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_5_read_ren =(on && on2 && op_hcompute_conv_stencil_5_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_5_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_5_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_5_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_5_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_5_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_5_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8012) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_5_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_5_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3] <= op_hcompute_conv_stencil_5_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4] <= op_hcompute_conv_stencil_5_read_ctrl_vars[4] + 1;
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
module hw_input_global_wrapper_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv_stencil_3_read_ren,
	input [15:0] op_hcompute_conv_stencil_3_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_3_read [7:0] ,
	input op_hcompute_conv_stencil_4_read_ren,
	input [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_4_read [7:0] ,
	input op_hcompute_conv_stencil_5_read_ren,
	input [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_5_read [7:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [3:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0] );

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[1]), .out(op_hcompute_conv_stencil_4_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[2]), .out(op_hcompute_conv_stencil_4_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[3]), .out(op_hcompute_conv_stencil_4_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[4]), .out(op_hcompute_conv_stencil_4_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[5]), .out(op_hcompute_conv_stencil_4_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[6]), .out(op_hcompute_conv_stencil_4_read[5]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[7]), .out(op_hcompute_conv_stencil_4_read[6]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[0]), .out(op_hcompute_conv_stencil_4_read[7]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[2]), .out(op_hcompute_conv_stencil_5_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[3]), .out(op_hcompute_conv_stencil_5_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[4]), .out(op_hcompute_conv_stencil_5_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[5]), .out(op_hcompute_conv_stencil_5_read[5]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[6]), .out(op_hcompute_conv_stencil_5_read[6]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[7]), .out(op_hcompute_conv_stencil_5_read[7]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[0]), .out(op_hcompute_conv_stencil_5_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_3_read[1]), .out(op_hcompute_conv_stencil_5_read[1]));


  // Storage capacity pre-banking: 7200
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[3:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_write_wen(op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_3_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_3_read_ctrl_vars( op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_3_read_ren(op_hcompute_conv_stencil_3_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_4_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_4_read_ctrl_vars( op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_4_read_ren(op_hcompute_conv_stencil_4_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_5_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_5_read_ctrl_vars( op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_5_read_ren(op_hcompute_conv_stencil_5_read_ren_fsm_out));
  // # of banks: 8
  logic [15:0] bank_0 [900];
  logic [15:0] bank_1 [900];
  logic [15:0] bank_2 [900];
  logic [15:0] bank_3 [900];
  logic [15:0] bank_4 [900];
  logic [15:0] bank_5 [900];
  logic [15:0] bank_6 [900];
  logic [15:0] bank_7 [900];
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_2 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[3])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_2 = (0 - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_2 = (0 - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_2 = (0 - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0)>>0)*30+((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[3])) - 0)>>3)*900);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((0 - 0)>>3)*900);
  always @(posedge clk) begin
  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((1)) - 0)>>3)*900);
  always @(posedge clk) begin
  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((2)) - 0)>>3)*900);
  always @(posedge clk) begin
  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((3)) - 0)>>3)*900);
  always @(posedge clk) begin
  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((4)) - 0)>>3)*900);
  always @(posedge clk) begin
  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((5)) - 0)>>3)*900);
  always @(posedge clk) begin
  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((7)) - 0)>>3)*900);
  always @(posedge clk) begin
  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((6)) - 0)>>3)*900);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
        4:bank_4[addr0] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
        5:bank_5[addr0] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
        6:bank_6[addr0] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
        7:bank_7[addr0] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
      endcase
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[0] <= bank_0[addr1];
        1:op_hcompute_conv_stencil_3_read[0] <= bank_1[addr1];
        2:op_hcompute_conv_stencil_3_read[0] <= bank_2[addr1];
        3:op_hcompute_conv_stencil_3_read[0] <= bank_3[addr1];
        4:op_hcompute_conv_stencil_3_read[0] <= bank_4[addr1];
        5:op_hcompute_conv_stencil_3_read[0] <= bank_5[addr1];
        6:op_hcompute_conv_stencil_3_read[0] <= bank_6[addr1];
        7:op_hcompute_conv_stencil_3_read[0] <= bank_7[addr1];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[1] <= bank_0[addr2];
        1:op_hcompute_conv_stencil_3_read[1] <= bank_1[addr2];
        2:op_hcompute_conv_stencil_3_read[1] <= bank_2[addr2];
        3:op_hcompute_conv_stencil_3_read[1] <= bank_3[addr2];
        4:op_hcompute_conv_stencil_3_read[1] <= bank_4[addr2];
        5:op_hcompute_conv_stencil_3_read[1] <= bank_5[addr2];
        6:op_hcompute_conv_stencil_3_read[1] <= bank_6[addr2];
        7:op_hcompute_conv_stencil_3_read[1] <= bank_7[addr2];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[2] <= bank_0[addr3];
        1:op_hcompute_conv_stencil_3_read[2] <= bank_1[addr3];
        2:op_hcompute_conv_stencil_3_read[2] <= bank_2[addr3];
        3:op_hcompute_conv_stencil_3_read[2] <= bank_3[addr3];
        4:op_hcompute_conv_stencil_3_read[2] <= bank_4[addr3];
        5:op_hcompute_conv_stencil_3_read[2] <= bank_5[addr3];
        6:op_hcompute_conv_stencil_3_read[2] <= bank_6[addr3];
        7:op_hcompute_conv_stencil_3_read[2] <= bank_7[addr3];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[3] <= bank_0[addr4];
        1:op_hcompute_conv_stencil_3_read[3] <= bank_1[addr4];
        2:op_hcompute_conv_stencil_3_read[3] <= bank_2[addr4];
        3:op_hcompute_conv_stencil_3_read[3] <= bank_3[addr4];
        4:op_hcompute_conv_stencil_3_read[3] <= bank_4[addr4];
        5:op_hcompute_conv_stencil_3_read[3] <= bank_5[addr4];
        6:op_hcompute_conv_stencil_3_read[3] <= bank_6[addr4];
        7:op_hcompute_conv_stencil_3_read[3] <= bank_7[addr4];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[4] <= bank_0[addr5];
        1:op_hcompute_conv_stencil_3_read[4] <= bank_1[addr5];
        2:op_hcompute_conv_stencil_3_read[4] <= bank_2[addr5];
        3:op_hcompute_conv_stencil_3_read[4] <= bank_3[addr5];
        4:op_hcompute_conv_stencil_3_read[4] <= bank_4[addr5];
        5:op_hcompute_conv_stencil_3_read[4] <= bank_5[addr5];
        6:op_hcompute_conv_stencil_3_read[4] <= bank_6[addr5];
        7:op_hcompute_conv_stencil_3_read[4] <= bank_7[addr5];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[5] <= bank_0[addr6];
        1:op_hcompute_conv_stencil_3_read[5] <= bank_1[addr6];
        2:op_hcompute_conv_stencil_3_read[5] <= bank_2[addr6];
        3:op_hcompute_conv_stencil_3_read[5] <= bank_3[addr6];
        4:op_hcompute_conv_stencil_3_read[5] <= bank_4[addr6];
        5:op_hcompute_conv_stencil_3_read[5] <= bank_5[addr6];
        6:op_hcompute_conv_stencil_3_read[5] <= bank_6[addr6];
        7:op_hcompute_conv_stencil_3_read[5] <= bank_7[addr6];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[6] <= bank_0[addr7];
        1:op_hcompute_conv_stencil_3_read[6] <= bank_1[addr7];
        2:op_hcompute_conv_stencil_3_read[6] <= bank_2[addr7];
        3:op_hcompute_conv_stencil_3_read[6] <= bank_3[addr7];
        4:op_hcompute_conv_stencil_3_read[6] <= bank_4[addr7];
        5:op_hcompute_conv_stencil_3_read[6] <= bank_5[addr7];
        6:op_hcompute_conv_stencil_3_read[6] <= bank_6[addr7];
        7:op_hcompute_conv_stencil_3_read[6] <= bank_7[addr7];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[7] <= bank_0[addr8];
        1:op_hcompute_conv_stencil_3_read[7] <= bank_1[addr8];
        2:op_hcompute_conv_stencil_3_read[7] <= bank_2[addr8];
        3:op_hcompute_conv_stencil_3_read[7] <= bank_3[addr8];
        4:op_hcompute_conv_stencil_3_read[7] <= bank_4[addr8];
        5:op_hcompute_conv_stencil_3_read[7] <= bank_5[addr8];
        6:op_hcompute_conv_stencil_3_read[7] <= bank_6[addr8];
        7:op_hcompute_conv_stencil_3_read[7] <= bank_7[addr8];
      endcase
    end
  end

endmodule


module hw_kernel_global_wrapper_stencil_bank_selector(input logic [16*4 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32] % 1);
  logic [15:0] bank_index_3;
  assign bank_index_3 = (d[63:48] % 8);
  assign out = bank_index_0*1+bank_index_1*1+bank_index_2*1+bank_index_3*1;

endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(2 + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4:0], output op_hcompute_hw_kernel_global_wrapper_stencil_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_hw_kernel_global_wrapper_stencil_write_wen =(on && on2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[0]==0 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1]<=2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2]<=2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<=2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<=7);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 71) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_3_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_3_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_3_read_ren =(on && on2 && op_hcompute_conv_stencil_3_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_3_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_3_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_3_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_3_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_3_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_3_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_3_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_3_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3] <= op_hcompute_conv_stencil_3_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4] <= op_hcompute_conv_stencil_3_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8011 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_4_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_4_read_ren =(on && on2 && op_hcompute_conv_stencil_4_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_4_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_4_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_4_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_4_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_4_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_4_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8010) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_4_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_4_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3] <= op_hcompute_conv_stencil_4_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4] <= op_hcompute_conv_stencil_4_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8013 + 2772conv_s1_r_y + 924conv_s1_r_x + 33conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_5_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_5_read_ren =(on && on2 && op_hcompute_conv_stencil_5_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_5_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_5_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_5_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_5_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_5_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_5_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8012) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_5_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_5_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 2771) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 923) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 32) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3] <= op_hcompute_conv_stencil_5_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4] <= op_hcompute_conv_stencil_5_read_ctrl_vars[4] + 1;
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
module hw_kernel_global_wrapper_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv_stencil_3_read_ren,
	input [15:0] op_hcompute_conv_stencil_3_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_3_read [7:0] ,
	input op_hcompute_conv_stencil_4_read_ren,
	input [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_4_read [7:0] ,
	input op_hcompute_conv_stencil_5_read_ren,
	input [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_5_read [7:0] ,
	input op_hcompute_hw_kernel_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_hw_kernel_global_wrapper_stencil_write [0:0] );


  // Storage capacity pre-banking: 216
  logic [15:0]op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_fsm hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars( op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out), .op_hcompute_hw_kernel_global_wrapper_stencil_write_wen(op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_3_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_3_read_ctrl_vars( op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_3_read_ren(op_hcompute_conv_stencil_3_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_4_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_4_read_ctrl_vars( op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_4_read_ren(op_hcompute_conv_stencil_4_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_5_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_5_read_ctrl_vars( op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_5_read_ren(op_hcompute_conv_stencil_5_read_ren_fsm_out));
  // # of banks: 8
  logic [15:0] bank_0 [27];
  logic [15:0] bank_1 [27];
  logic [15:0] bank_2 [27];
  logic [15:0] bank_3 [27];
  logic [15:0] bank_4 [27];
  logic [15:0] bank_5 [27];
  logic [15:0] bank_6 [27];
  logic [15:0] bank_7 [27];
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_0 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_1 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_2 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_3 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[4])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[3])) - 0)>>0)*9+((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[4])) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((0 - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((1)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((2)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((3)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((4)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((5)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((7)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((6)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((1)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr10;
  assign addr10 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((2)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr11;
  assign addr11 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((3)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr12;
  assign addr12 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((4)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr13;
  assign addr13 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((5)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr14;
  assign addr14 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((7)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr15;
  assign addr15 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((6)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr16;
  assign addr16 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((0 - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr17;
  assign addr17 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((0 - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr18;
  assign addr18 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((1)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr19;
  assign addr19 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((2)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr20;
  assign addr20 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((3)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr21;
  assign addr21 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((4)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr22;
  assign addr22 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((5)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr23;
  assign addr23 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((7)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  logic [15:0] addr24;
  assign addr24 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((6)) - 0)>>3)*27);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];
        4:bank_4[addr0] <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];
        5:bank_5[addr0] <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];
        6:bank_6[addr0] <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];
        7:bank_7[addr0] <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];
      endcase
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[0] <= bank_0[addr1];
        1:op_hcompute_conv_stencil_3_read[0] <= bank_1[addr1];
        2:op_hcompute_conv_stencil_3_read[0] <= bank_2[addr1];
        3:op_hcompute_conv_stencil_3_read[0] <= bank_3[addr1];
        4:op_hcompute_conv_stencil_3_read[0] <= bank_4[addr1];
        5:op_hcompute_conv_stencil_3_read[0] <= bank_5[addr1];
        6:op_hcompute_conv_stencil_3_read[0] <= bank_6[addr1];
        7:op_hcompute_conv_stencil_3_read[0] <= bank_7[addr1];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[1] <= bank_0[addr2];
        1:op_hcompute_conv_stencil_3_read[1] <= bank_1[addr2];
        2:op_hcompute_conv_stencil_3_read[1] <= bank_2[addr2];
        3:op_hcompute_conv_stencil_3_read[1] <= bank_3[addr2];
        4:op_hcompute_conv_stencil_3_read[1] <= bank_4[addr2];
        5:op_hcompute_conv_stencil_3_read[1] <= bank_5[addr2];
        6:op_hcompute_conv_stencil_3_read[1] <= bank_6[addr2];
        7:op_hcompute_conv_stencil_3_read[1] <= bank_7[addr2];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[2] <= bank_0[addr3];
        1:op_hcompute_conv_stencil_3_read[2] <= bank_1[addr3];
        2:op_hcompute_conv_stencil_3_read[2] <= bank_2[addr3];
        3:op_hcompute_conv_stencil_3_read[2] <= bank_3[addr3];
        4:op_hcompute_conv_stencil_3_read[2] <= bank_4[addr3];
        5:op_hcompute_conv_stencil_3_read[2] <= bank_5[addr3];
        6:op_hcompute_conv_stencil_3_read[2] <= bank_6[addr3];
        7:op_hcompute_conv_stencil_3_read[2] <= bank_7[addr3];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[3] <= bank_0[addr4];
        1:op_hcompute_conv_stencil_3_read[3] <= bank_1[addr4];
        2:op_hcompute_conv_stencil_3_read[3] <= bank_2[addr4];
        3:op_hcompute_conv_stencil_3_read[3] <= bank_3[addr4];
        4:op_hcompute_conv_stencil_3_read[3] <= bank_4[addr4];
        5:op_hcompute_conv_stencil_3_read[3] <= bank_5[addr4];
        6:op_hcompute_conv_stencil_3_read[3] <= bank_6[addr4];
        7:op_hcompute_conv_stencil_3_read[3] <= bank_7[addr4];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[4] <= bank_0[addr5];
        1:op_hcompute_conv_stencil_3_read[4] <= bank_1[addr5];
        2:op_hcompute_conv_stencil_3_read[4] <= bank_2[addr5];
        3:op_hcompute_conv_stencil_3_read[4] <= bank_3[addr5];
        4:op_hcompute_conv_stencil_3_read[4] <= bank_4[addr5];
        5:op_hcompute_conv_stencil_3_read[4] <= bank_5[addr5];
        6:op_hcompute_conv_stencil_3_read[4] <= bank_6[addr5];
        7:op_hcompute_conv_stencil_3_read[4] <= bank_7[addr5];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[5] <= bank_0[addr6];
        1:op_hcompute_conv_stencil_3_read[5] <= bank_1[addr6];
        2:op_hcompute_conv_stencil_3_read[5] <= bank_2[addr6];
        3:op_hcompute_conv_stencil_3_read[5] <= bank_3[addr6];
        4:op_hcompute_conv_stencil_3_read[5] <= bank_4[addr6];
        5:op_hcompute_conv_stencil_3_read[5] <= bank_5[addr6];
        6:op_hcompute_conv_stencil_3_read[5] <= bank_6[addr6];
        7:op_hcompute_conv_stencil_3_read[5] <= bank_7[addr6];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[6] <= bank_0[addr7];
        1:op_hcompute_conv_stencil_3_read[6] <= bank_1[addr7];
        2:op_hcompute_conv_stencil_3_read[6] <= bank_2[addr7];
        3:op_hcompute_conv_stencil_3_read[6] <= bank_3[addr7];
        4:op_hcompute_conv_stencil_3_read[6] <= bank_4[addr7];
        5:op_hcompute_conv_stencil_3_read[6] <= bank_5[addr7];
        6:op_hcompute_conv_stencil_3_read[6] <= bank_6[addr7];
        7:op_hcompute_conv_stencil_3_read[6] <= bank_7[addr7];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[7] <= bank_0[addr8];
        1:op_hcompute_conv_stencil_3_read[7] <= bank_1[addr8];
        2:op_hcompute_conv_stencil_3_read[7] <= bank_2[addr8];
        3:op_hcompute_conv_stencil_3_read[7] <= bank_3[addr8];
        4:op_hcompute_conv_stencil_3_read[7] <= bank_4[addr8];
        5:op_hcompute_conv_stencil_3_read[7] <= bank_5[addr8];
        6:op_hcompute_conv_stencil_3_read[7] <= bank_6[addr8];
        7:op_hcompute_conv_stencil_3_read[7] <= bank_7[addr8];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[0] <= bank_0[addr9];
        1:op_hcompute_conv_stencil_4_read[0] <= bank_1[addr9];
        2:op_hcompute_conv_stencil_4_read[0] <= bank_2[addr9];
        3:op_hcompute_conv_stencil_4_read[0] <= bank_3[addr9];
        4:op_hcompute_conv_stencil_4_read[0] <= bank_4[addr9];
        5:op_hcompute_conv_stencil_4_read[0] <= bank_5[addr9];
        6:op_hcompute_conv_stencil_4_read[0] <= bank_6[addr9];
        7:op_hcompute_conv_stencil_4_read[0] <= bank_7[addr9];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[1] <= bank_0[addr10];
        1:op_hcompute_conv_stencil_4_read[1] <= bank_1[addr10];
        2:op_hcompute_conv_stencil_4_read[1] <= bank_2[addr10];
        3:op_hcompute_conv_stencil_4_read[1] <= bank_3[addr10];
        4:op_hcompute_conv_stencil_4_read[1] <= bank_4[addr10];
        5:op_hcompute_conv_stencil_4_read[1] <= bank_5[addr10];
        6:op_hcompute_conv_stencil_4_read[1] <= bank_6[addr10];
        7:op_hcompute_conv_stencil_4_read[1] <= bank_7[addr10];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[2] <= bank_0[addr11];
        1:op_hcompute_conv_stencil_4_read[2] <= bank_1[addr11];
        2:op_hcompute_conv_stencil_4_read[2] <= bank_2[addr11];
        3:op_hcompute_conv_stencil_4_read[2] <= bank_3[addr11];
        4:op_hcompute_conv_stencil_4_read[2] <= bank_4[addr11];
        5:op_hcompute_conv_stencil_4_read[2] <= bank_5[addr11];
        6:op_hcompute_conv_stencil_4_read[2] <= bank_6[addr11];
        7:op_hcompute_conv_stencil_4_read[2] <= bank_7[addr11];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[3] <= bank_0[addr12];
        1:op_hcompute_conv_stencil_4_read[3] <= bank_1[addr12];
        2:op_hcompute_conv_stencil_4_read[3] <= bank_2[addr12];
        3:op_hcompute_conv_stencil_4_read[3] <= bank_3[addr12];
        4:op_hcompute_conv_stencil_4_read[3] <= bank_4[addr12];
        5:op_hcompute_conv_stencil_4_read[3] <= bank_5[addr12];
        6:op_hcompute_conv_stencil_4_read[3] <= bank_6[addr12];
        7:op_hcompute_conv_stencil_4_read[3] <= bank_7[addr12];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[4] <= bank_0[addr13];
        1:op_hcompute_conv_stencil_4_read[4] <= bank_1[addr13];
        2:op_hcompute_conv_stencil_4_read[4] <= bank_2[addr13];
        3:op_hcompute_conv_stencil_4_read[4] <= bank_3[addr13];
        4:op_hcompute_conv_stencil_4_read[4] <= bank_4[addr13];
        5:op_hcompute_conv_stencil_4_read[4] <= bank_5[addr13];
        6:op_hcompute_conv_stencil_4_read[4] <= bank_6[addr13];
        7:op_hcompute_conv_stencil_4_read[4] <= bank_7[addr13];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[5] <= bank_0[addr14];
        1:op_hcompute_conv_stencil_4_read[5] <= bank_1[addr14];
        2:op_hcompute_conv_stencil_4_read[5] <= bank_2[addr14];
        3:op_hcompute_conv_stencil_4_read[5] <= bank_3[addr14];
        4:op_hcompute_conv_stencil_4_read[5] <= bank_4[addr14];
        5:op_hcompute_conv_stencil_4_read[5] <= bank_5[addr14];
        6:op_hcompute_conv_stencil_4_read[5] <= bank_6[addr14];
        7:op_hcompute_conv_stencil_4_read[5] <= bank_7[addr14];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[6] <= bank_0[addr15];
        1:op_hcompute_conv_stencil_4_read[6] <= bank_1[addr15];
        2:op_hcompute_conv_stencil_4_read[6] <= bank_2[addr15];
        3:op_hcompute_conv_stencil_4_read[6] <= bank_3[addr15];
        4:op_hcompute_conv_stencil_4_read[6] <= bank_4[addr15];
        5:op_hcompute_conv_stencil_4_read[6] <= bank_5[addr15];
        6:op_hcompute_conv_stencil_4_read[6] <= bank_6[addr15];
        7:op_hcompute_conv_stencil_4_read[6] <= bank_7[addr15];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[7] <= bank_0[addr16];
        1:op_hcompute_conv_stencil_4_read[7] <= bank_1[addr16];
        2:op_hcompute_conv_stencil_4_read[7] <= bank_2[addr16];
        3:op_hcompute_conv_stencil_4_read[7] <= bank_3[addr16];
        4:op_hcompute_conv_stencil_4_read[7] <= bank_4[addr16];
        5:op_hcompute_conv_stencil_4_read[7] <= bank_5[addr16];
        6:op_hcompute_conv_stencil_4_read[7] <= bank_6[addr16];
        7:op_hcompute_conv_stencil_4_read[7] <= bank_7[addr16];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[0] <= bank_0[addr17];
        1:op_hcompute_conv_stencil_5_read[0] <= bank_1[addr17];
        2:op_hcompute_conv_stencil_5_read[0] <= bank_2[addr17];
        3:op_hcompute_conv_stencil_5_read[0] <= bank_3[addr17];
        4:op_hcompute_conv_stencil_5_read[0] <= bank_4[addr17];
        5:op_hcompute_conv_stencil_5_read[0] <= bank_5[addr17];
        6:op_hcompute_conv_stencil_5_read[0] <= bank_6[addr17];
        7:op_hcompute_conv_stencil_5_read[0] <= bank_7[addr17];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[1] <= bank_0[addr18];
        1:op_hcompute_conv_stencil_5_read[1] <= bank_1[addr18];
        2:op_hcompute_conv_stencil_5_read[1] <= bank_2[addr18];
        3:op_hcompute_conv_stencil_5_read[1] <= bank_3[addr18];
        4:op_hcompute_conv_stencil_5_read[1] <= bank_4[addr18];
        5:op_hcompute_conv_stencil_5_read[1] <= bank_5[addr18];
        6:op_hcompute_conv_stencil_5_read[1] <= bank_6[addr18];
        7:op_hcompute_conv_stencil_5_read[1] <= bank_7[addr18];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[2] <= bank_0[addr19];
        1:op_hcompute_conv_stencil_5_read[2] <= bank_1[addr19];
        2:op_hcompute_conv_stencil_5_read[2] <= bank_2[addr19];
        3:op_hcompute_conv_stencil_5_read[2] <= bank_3[addr19];
        4:op_hcompute_conv_stencil_5_read[2] <= bank_4[addr19];
        5:op_hcompute_conv_stencil_5_read[2] <= bank_5[addr19];
        6:op_hcompute_conv_stencil_5_read[2] <= bank_6[addr19];
        7:op_hcompute_conv_stencil_5_read[2] <= bank_7[addr19];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[3] <= bank_0[addr20];
        1:op_hcompute_conv_stencil_5_read[3] <= bank_1[addr20];
        2:op_hcompute_conv_stencil_5_read[3] <= bank_2[addr20];
        3:op_hcompute_conv_stencil_5_read[3] <= bank_3[addr20];
        4:op_hcompute_conv_stencil_5_read[3] <= bank_4[addr20];
        5:op_hcompute_conv_stencil_5_read[3] <= bank_5[addr20];
        6:op_hcompute_conv_stencil_5_read[3] <= bank_6[addr20];
        7:op_hcompute_conv_stencil_5_read[3] <= bank_7[addr20];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[4] <= bank_0[addr21];
        1:op_hcompute_conv_stencil_5_read[4] <= bank_1[addr21];
        2:op_hcompute_conv_stencil_5_read[4] <= bank_2[addr21];
        3:op_hcompute_conv_stencil_5_read[4] <= bank_3[addr21];
        4:op_hcompute_conv_stencil_5_read[4] <= bank_4[addr21];
        5:op_hcompute_conv_stencil_5_read[4] <= bank_5[addr21];
        6:op_hcompute_conv_stencil_5_read[4] <= bank_6[addr21];
        7:op_hcompute_conv_stencil_5_read[4] <= bank_7[addr21];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[5] <= bank_0[addr22];
        1:op_hcompute_conv_stencil_5_read[5] <= bank_1[addr22];
        2:op_hcompute_conv_stencil_5_read[5] <= bank_2[addr22];
        3:op_hcompute_conv_stencil_5_read[5] <= bank_3[addr22];
        4:op_hcompute_conv_stencil_5_read[5] <= bank_4[addr22];
        5:op_hcompute_conv_stencil_5_read[5] <= bank_5[addr22];
        6:op_hcompute_conv_stencil_5_read[5] <= bank_6[addr22];
        7:op_hcompute_conv_stencil_5_read[5] <= bank_7[addr22];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[6] <= bank_0[addr23];
        1:op_hcompute_conv_stencil_5_read[6] <= bank_1[addr23];
        2:op_hcompute_conv_stencil_5_read[6] <= bank_2[addr23];
        3:op_hcompute_conv_stencil_5_read[6] <= bank_3[addr23];
        4:op_hcompute_conv_stencil_5_read[6] <= bank_4[addr23];
        5:op_hcompute_conv_stencil_5_read[6] <= bank_5[addr23];
        6:op_hcompute_conv_stencil_5_read[6] <= bank_6[addr23];
        7:op_hcompute_conv_stencil_5_read[6] <= bank_7[addr23];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[7] <= bank_0[addr24];
        1:op_hcompute_conv_stencil_5_read[7] <= bank_1[addr24];
        2:op_hcompute_conv_stencil_5_read[7] <= bank_2[addr24];
        3:op_hcompute_conv_stencil_5_read[7] <= bank_3[addr24];
        4:op_hcompute_conv_stencil_5_read[7] <= bank_4[addr24];
        5:op_hcompute_conv_stencil_5_read[7] <= bank_5[addr24];
        6:op_hcompute_conv_stencil_5_read[7] <= bank_6[addr24];
        7:op_hcompute_conv_stencil_5_read[7] <= bank_7[addr24];
      endcase
    end
  end

endmodule

