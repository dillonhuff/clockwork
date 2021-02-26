// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(1 + 270hw_input_global_wrapper_s0_y + 9hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module affine_controller__U159(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
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
        if(counter[1] == 269) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 8) begin
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
// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(2 + 81hw_kernel_global_wrapper_s0_y + 27hw_kernel_global_wrapper_s0_x + 9hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module affine_controller__U166(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
        if(counter[1] == 80) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 26) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 8) begin
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
// { op_hcompute_conv_stencil[root, conv_s0_y, conv_s0_x] -> [(2 + 29conv_s0_y + conv_s0_x)] }
module affine_controller__U173(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
        if(counter[1] == 28) begin
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
// { op_hcompute_conv_stencil_1[root, conv_s0_y, conv_s0_x] -> [(2 + 29conv_s0_y + conv_s0_x)] }
module affine_controller__U180(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
        if(counter[1] == 28) begin
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
// { op_hcompute_conv_stencil_2[root, conv_s0_y, conv_s0_x] -> [(2 + 29conv_s0_y + conv_s0_x)] }
module affine_controller__U187(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
        if(counter[1] == 28) begin
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module affine_controller__U194(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
// { op_hcompute_hw_output_stencil[root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(32033 + 812hw_output_s0_w + 29hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module affine_controller__U512(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
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
      if(counter[0] ==32032) begin
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
        if(counter[1] == 811) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 28) begin
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

module conv_stencil_embarassing_bank_selector(input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0]);
  assign out = bank_index_0*1;

endmodule

// { op_hcompute_conv_stencil_1[root, conv_s0_y, conv_s0_x] -> [(2 + 29conv_s0_y + conv_s0_x)] }
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
      if(counter[0] ==1) begin
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
        if(counter[1] == 28) begin
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
// { op_hcompute_conv_stencil_2[root, conv_s0_y, conv_s0_x] -> [(2 + 29conv_s0_y + conv_s0_x)] }
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
      if(counter[0] ==1) begin
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
        if(counter[1] == 28) begin
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8026 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8025) begin
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[1] <= op_hcompute_conv_stencil_3_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[2] <= op_hcompute_conv_stencil_3_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8026 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8025) begin
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[1] <= op_hcompute_conv_stencil_4_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[2] <= op_hcompute_conv_stencil_4_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8026 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8025) begin
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[1] <= op_hcompute_conv_stencil_5_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[2] <= op_hcompute_conv_stencil_5_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
// { op_hcompute_conv_stencil[root, conv_s0_y, conv_s0_x] -> [(2 + 29conv_s0_y + conv_s0_x)] }
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
        if(counter[1] == 28) begin
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8008) begin
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8008) begin
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
// { op_hcompute_hw_output_stencil[root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(32033 + 812hw_output_s0_w + 29hw_output_s0_y_yi + hw_output_s0_x_xi)] }
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
      if(counter[0] ==32032) begin
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
        if(counter[1] == 811) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[3]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[1] <= op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 28) begin
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
  // # of banks: 3
  (* ram_style = "block" *) logic [15:0]  bank_0 [784];
  (* ram_style = "block" *) logic [15:0]  bank_1 [784];
  (* ram_style = "block" *) logic [15:0]  bank_2 [784];
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_1 = (((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_2 = (((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_1 = (((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_2 = (((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_1 = (((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_2 = (((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_1 = (((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_2 = (((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_1 = (((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_2 = (((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_1 = (((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_2 = (((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_2 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_2 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_2 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_0 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_1 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_2 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[3])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_0;
  always @(posedge clk) begin
    delay_wire_0 <= addr0;  end
  logic [15:0] delay_wire_1;
  always @(posedge clk) begin
    delay_wire_1 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_bank_selector.out;  end
  logic [15:0] delay_wire_2;
  always @(posedge clk) begin
    delay_wire_2 <= op_hcompute_conv_stencil_1_write_wen_fsm_out;  end
  logic [15:0] delay_wire_3;
  always @(posedge clk) begin
    delay_wire_3 <= op_hcompute_conv_stencil_1_write[0];  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_4;
  always @(posedge clk) begin
    delay_wire_4 <= addr1;  end
  logic [15:0] delay_wire_5;
  always @(posedge clk) begin
    delay_wire_5 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_bank_selector.out;  end
  logic [15:0] delay_wire_6;
  always @(posedge clk) begin
    delay_wire_6 <= op_hcompute_conv_stencil_2_write_wen_fsm_out;  end
  logic [15:0] delay_wire_7;
  always @(posedge clk) begin
    delay_wire_7 <= op_hcompute_conv_stencil_2_write[0];  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_8;
  always @(posedge clk) begin
    delay_wire_8 <= addr2;  end
  logic [15:0] delay_wire_9;
  always @(posedge clk) begin
    delay_wire_9 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_bank_selector.out;  end
  logic [15:0] delay_wire_10;
  always @(posedge clk) begin
    delay_wire_10 <= op_hcompute_conv_stencil_3_write_wen_fsm_out;  end
  logic [15:0] delay_wire_11;
  always @(posedge clk) begin
    delay_wire_11 <= op_hcompute_conv_stencil_3_write[0];  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_12;
  always @(posedge clk) begin
    delay_wire_12 <= addr3;  end
  logic [15:0] delay_wire_13;
  always @(posedge clk) begin
    delay_wire_13 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_bank_selector.out;  end
  logic [15:0] delay_wire_14;
  always @(posedge clk) begin
    delay_wire_14 <= op_hcompute_conv_stencil_4_write_wen_fsm_out;  end
  logic [15:0] delay_wire_15;
  always @(posedge clk) begin
    delay_wire_15 <= op_hcompute_conv_stencil_4_write[0];  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_16;
  always @(posedge clk) begin
    delay_wire_16 <= addr4;  end
  logic [15:0] delay_wire_17;
  always @(posedge clk) begin
    delay_wire_17 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_bank_selector.out;  end
  logic [15:0] delay_wire_18;
  always @(posedge clk) begin
    delay_wire_18 <= op_hcompute_conv_stencil_5_write_wen_fsm_out;  end
  logic [15:0] delay_wire_19;
  always @(posedge clk) begin
    delay_wire_19 <= op_hcompute_conv_stencil_5_write[0];  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_20;
  always @(posedge clk) begin
    delay_wire_20 <= addr5;  end
  logic [15:0] delay_wire_21;
  always @(posedge clk) begin
    delay_wire_21 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_bank_selector.out;  end
  logic [15:0] delay_wire_22;
  always @(posedge clk) begin
    delay_wire_22 <= op_hcompute_conv_stencil_write_wen_fsm_out;  end
  logic [15:0] delay_wire_23;
  always @(posedge clk) begin
    delay_wire_23 <= op_hcompute_conv_stencil_write[0];  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_24;
  always @(posedge clk) begin
    delay_wire_24 <= addr6;  end
  logic [15:0] delay_wire_25;
  always @(posedge clk) begin
    delay_wire_25 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_bank_selector.out;  end
  logic [15:0] delay_wire_26;
  always @(posedge clk) begin
    delay_wire_26 <= op_hcompute_conv_stencil_3_read_ren_fsm_out;  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_27;
  always @(posedge clk) begin
    delay_wire_27 <= addr7;  end
  logic [15:0] delay_wire_28;
  always @(posedge clk) begin
    delay_wire_28 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_bank_selector.out;  end
  logic [15:0] delay_wire_29;
  always @(posedge clk) begin
    delay_wire_29 <= op_hcompute_conv_stencil_4_read_ren_fsm_out;  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_30;
  always @(posedge clk) begin
    delay_wire_30 <= addr8;  end
  logic [15:0] delay_wire_31;
  always @(posedge clk) begin
    delay_wire_31 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_bank_selector.out;  end
  logic [15:0] delay_wire_32;
  always @(posedge clk) begin
    delay_wire_32 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0))*1+((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[3])) - 0))*28);
  logic [15:0] delay_wire_33;
  always @(posedge clk) begin
    delay_wire_33 <= addr9;  end
  logic [15:0] delay_wire_34;
  always @(posedge clk) begin
    delay_wire_34 <= conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_bank_selector.out;  end
  logic [15:0] delay_wire_35;
  always @(posedge clk) begin
    delay_wire_35 <= op_hcompute_hw_output_stencil_read_ren_fsm_out;  end
  always @(posedge clk) begin
    if (delay_wire_2 &&delay_wire_1==0) begin
        bank_0[delay_wire_0] <= delay_wire_3;
    end
    else if (delay_wire_6 &&delay_wire_5==0) begin
        bank_0[delay_wire_4] <= delay_wire_7;
    end
    else if (delay_wire_10 &&delay_wire_9==0) begin
        bank_0[delay_wire_8] <= delay_wire_11;
    end
    else if (delay_wire_14 &&delay_wire_13==0) begin
        bank_0[delay_wire_12] <= delay_wire_15;
    end
    else if (delay_wire_18 &&delay_wire_17==0) begin
        bank_0[delay_wire_16] <= delay_wire_19;
    end
    else if (delay_wire_22 &&delay_wire_21==0) begin
        bank_0[delay_wire_20] <= delay_wire_23;
    end
    if (delay_wire_2 &&delay_wire_1==1) begin
        bank_1[delay_wire_0] <= delay_wire_3;
    end
    else if (delay_wire_6 &&delay_wire_5==1) begin
        bank_1[delay_wire_4] <= delay_wire_7;
    end
    else if (delay_wire_10 &&delay_wire_9==1) begin
        bank_1[delay_wire_8] <= delay_wire_11;
    end
    else if (delay_wire_14 &&delay_wire_13==1) begin
        bank_1[delay_wire_12] <= delay_wire_15;
    end
    else if (delay_wire_18 &&delay_wire_17==1) begin
        bank_1[delay_wire_16] <= delay_wire_19;
    end
    else if (delay_wire_22 &&delay_wire_21==1) begin
        bank_1[delay_wire_20] <= delay_wire_23;
    end
    if (delay_wire_2 &&delay_wire_1==2) begin
        bank_2[delay_wire_0] <= delay_wire_3;
    end
    else if (delay_wire_6 &&delay_wire_5==2) begin
        bank_2[delay_wire_4] <= delay_wire_7;
    end
    else if (delay_wire_10 &&delay_wire_9==2) begin
        bank_2[delay_wire_8] <= delay_wire_11;
    end
    else if (delay_wire_14 &&delay_wire_13==2) begin
        bank_2[delay_wire_12] <= delay_wire_15;
    end
    else if (delay_wire_18 &&delay_wire_17==2) begin
        bank_2[delay_wire_16] <= delay_wire_19;
    end
    else if (delay_wire_22 &&delay_wire_21==2) begin
        bank_2[delay_wire_20] <= delay_wire_23;
    end
  end
  always @(posedge clk) begin
    if (delay_wire_26 &&delay_wire_25==0) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_0[delay_wire_24];
    end
    else if (delay_wire_29 &&delay_wire_28==0) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_0[delay_wire_27];
    end
    else if (delay_wire_32 &&delay_wire_31==0) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_0[delay_wire_30];
    end
    else if (delay_wire_35 &&delay_wire_34==0) begin
        op_hcompute_hw_output_stencil_read[0] <= bank_0[delay_wire_33];
    end
    if (delay_wire_26 &&delay_wire_25==1) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_1[delay_wire_24];
    end
    else if (delay_wire_29 &&delay_wire_28==1) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_1[delay_wire_27];
    end
    else if (delay_wire_32 &&delay_wire_31==1) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_1[delay_wire_30];
    end
    else if (delay_wire_35 &&delay_wire_34==1) begin
        op_hcompute_hw_output_stencil_read[0] <= bank_1[delay_wire_33];
    end
    if (delay_wire_26 &&delay_wire_25==2) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_2[delay_wire_24];
    end
    else if (delay_wire_29 &&delay_wire_28==2) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_2[delay_wire_27];
    end
    else if (delay_wire_32 &&delay_wire_31==2) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_2[delay_wire_30];
    end
    else if (delay_wire_35 &&delay_wire_34==2) begin
        op_hcompute_hw_output_stencil_read[0] <= bank_2[delay_wire_33];
    end
  end

endmodule


module hw_input_global_wrapper_stencil_embarassing_bank_selector(input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32]);
  assign out = bank_index_2*1;

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(1 + 270hw_input_global_wrapper_s0_y + 9hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
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
        if(counter[1] == 269) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] <= op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 8) begin
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8008) begin
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8008) begin
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_4_read[7]), .out(op_hcompute_conv_stencil_3_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_4_read[0]), .out(op_hcompute_conv_stencil_3_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_4_read[1]), .out(op_hcompute_conv_stencil_3_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_4_read[2]), .out(op_hcompute_conv_stencil_3_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_4_read[3]), .out(op_hcompute_conv_stencil_3_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_4_read[4]), .out(op_hcompute_conv_stencil_3_read[5]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_4_read[5]), .out(op_hcompute_conv_stencil_3_read[6]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_4_read[6]), .out(op_hcompute_conv_stencil_3_read[7]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_5_read[1]), .out(op_hcompute_conv_stencil_4_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_5_read[2]), .out(op_hcompute_conv_stencil_4_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_5_read[3]), .out(op_hcompute_conv_stencil_4_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_5_read[4]), .out(op_hcompute_conv_stencil_4_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_5_read[5]), .out(op_hcompute_conv_stencil_4_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_5_read[6]), .out(op_hcompute_conv_stencil_4_read[5]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_5_read[7]), .out(op_hcompute_conv_stencil_4_read[6]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_5_read[0]), .out(op_hcompute_conv_stencil_4_read[7]));


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
  (* ram_style = "block" *) logic [15:0]  bank_0 [900];
  (* ram_style = "block" *) logic [15:0]  bank_1 [900];
  (* ram_style = "block" *) logic [15:0]  bank_2 [900];
  (* ram_style = "block" *) logic [15:0]  bank_3 [900];
  (* ram_style = "block" *) logic [15:0]  bank_4 [900];
  (* ram_style = "block" *) logic [15:0]  bank_5 [900];
  (* ram_style = "block" *) logic [15:0]  bank_6 [900];
  (* ram_style = "block" *) logic [15:0]  bank_7 [900];
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_2 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[3])) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_2 = (0 - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_2 = (0 - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_2 = (0 - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0))*30);
  logic [15:0] delay_wire_36;
  always @(posedge clk) begin
    delay_wire_36 <= addr0;  end
  logic [15:0] delay_wire_37;
  always @(posedge clk) begin
    delay_wire_37 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out;  end
  logic [15:0] delay_wire_38;
  always @(posedge clk) begin
    delay_wire_38 <= op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out;  end
  logic [15:0] delay_wire_39;
  always @(posedge clk) begin
    delay_wire_39 <= op_hcompute_hw_input_global_wrapper_stencil_write[0];  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] delay_wire_40;
  always @(posedge clk) begin
    delay_wire_40 <= addr1;  end
  logic [15:0] delay_wire_41;
  always @(posedge clk) begin
    delay_wire_41 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_bank_selector.out;  end
  logic [15:0] delay_wire_42;
  always @(posedge clk) begin
    delay_wire_42 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] delay_wire_43;
  always @(posedge clk) begin
    delay_wire_43 <= addr2;  end
  logic [15:0] delay_wire_44;
  always @(posedge clk) begin
    delay_wire_44 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_bank_selector.out;  end
  logic [15:0] delay_wire_45;
  always @(posedge clk) begin
    delay_wire_45 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] delay_wire_46;
  always @(posedge clk) begin
    delay_wire_46 <= addr3;  end
  logic [15:0] delay_wire_47;
  always @(posedge clk) begin
    delay_wire_47 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_bank_selector.out;  end
  logic [15:0] delay_wire_48;
  always @(posedge clk) begin
    delay_wire_48 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] delay_wire_49;
  always @(posedge clk) begin
    delay_wire_49 <= addr4;  end
  logic [15:0] delay_wire_50;
  always @(posedge clk) begin
    delay_wire_50 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_bank_selector.out;  end
  logic [15:0] delay_wire_51;
  always @(posedge clk) begin
    delay_wire_51 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] delay_wire_52;
  always @(posedge clk) begin
    delay_wire_52 <= addr5;  end
  logic [15:0] delay_wire_53;
  always @(posedge clk) begin
    delay_wire_53 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_bank_selector.out;  end
  logic [15:0] delay_wire_54;
  always @(posedge clk) begin
    delay_wire_54 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] delay_wire_55;
  always @(posedge clk) begin
    delay_wire_55 <= addr6;  end
  logic [15:0] delay_wire_56;
  always @(posedge clk) begin
    delay_wire_56 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_bank_selector.out;  end
  logic [15:0] delay_wire_57;
  always @(posedge clk) begin
    delay_wire_57 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] delay_wire_58;
  always @(posedge clk) begin
    delay_wire_58 <= addr7;  end
  logic [15:0] delay_wire_59;
  always @(posedge clk) begin
    delay_wire_59 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_bank_selector.out;  end
  logic [15:0] delay_wire_60;
  always @(posedge clk) begin
    delay_wire_60 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] delay_wire_61;
  always @(posedge clk) begin
    delay_wire_61 <= addr8;  end
  logic [15:0] delay_wire_62;
  always @(posedge clk) begin
    delay_wire_62 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_bank_selector.out;  end
  logic [15:0] delay_wire_63;
  always @(posedge clk) begin
    delay_wire_63 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  always @(posedge clk) begin
    if (delay_wire_38 &&delay_wire_37==0) begin
        bank_0[delay_wire_36] <= delay_wire_39;
    end
    if (delay_wire_38 &&delay_wire_37==1) begin
        bank_1[delay_wire_36] <= delay_wire_39;
    end
    if (delay_wire_38 &&delay_wire_37==2) begin
        bank_2[delay_wire_36] <= delay_wire_39;
    end
    if (delay_wire_38 &&delay_wire_37==3) begin
        bank_3[delay_wire_36] <= delay_wire_39;
    end
    if (delay_wire_38 &&delay_wire_37==4) begin
        bank_4[delay_wire_36] <= delay_wire_39;
    end
    if (delay_wire_38 &&delay_wire_37==5) begin
        bank_5[delay_wire_36] <= delay_wire_39;
    end
    if (delay_wire_38 &&delay_wire_37==6) begin
        bank_6[delay_wire_36] <= delay_wire_39;
    end
    if (delay_wire_38 &&delay_wire_37==7) begin
        bank_7[delay_wire_36] <= delay_wire_39;
    end
  end
  always @(posedge clk) begin
    if (delay_wire_42 &&delay_wire_41==0) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_0[delay_wire_40];
    end
    else if (delay_wire_45 &&delay_wire_44==0) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_0[delay_wire_43];
    end
    else if (delay_wire_48 &&delay_wire_47==0) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_0[delay_wire_46];
    end
    else if (delay_wire_51 &&delay_wire_50==0) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_0[delay_wire_49];
    end
    else if (delay_wire_54 &&delay_wire_53==0) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_0[delay_wire_52];
    end
    else if (delay_wire_57 &&delay_wire_56==0) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_0[delay_wire_55];
    end
    else if (delay_wire_60 &&delay_wire_59==0) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_0[delay_wire_58];
    end
    else if (delay_wire_63 &&delay_wire_62==0) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_0[delay_wire_61];
    end
    if (delay_wire_42 &&delay_wire_41==1) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_1[delay_wire_40];
    end
    else if (delay_wire_45 &&delay_wire_44==1) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_1[delay_wire_43];
    end
    else if (delay_wire_48 &&delay_wire_47==1) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_1[delay_wire_46];
    end
    else if (delay_wire_51 &&delay_wire_50==1) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_1[delay_wire_49];
    end
    else if (delay_wire_54 &&delay_wire_53==1) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_1[delay_wire_52];
    end
    else if (delay_wire_57 &&delay_wire_56==1) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_1[delay_wire_55];
    end
    else if (delay_wire_60 &&delay_wire_59==1) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_1[delay_wire_58];
    end
    else if (delay_wire_63 &&delay_wire_62==1) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_1[delay_wire_61];
    end
    if (delay_wire_42 &&delay_wire_41==2) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_2[delay_wire_40];
    end
    else if (delay_wire_45 &&delay_wire_44==2) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_2[delay_wire_43];
    end
    else if (delay_wire_48 &&delay_wire_47==2) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_2[delay_wire_46];
    end
    else if (delay_wire_51 &&delay_wire_50==2) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_2[delay_wire_49];
    end
    else if (delay_wire_54 &&delay_wire_53==2) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_2[delay_wire_52];
    end
    else if (delay_wire_57 &&delay_wire_56==2) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_2[delay_wire_55];
    end
    else if (delay_wire_60 &&delay_wire_59==2) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_2[delay_wire_58];
    end
    else if (delay_wire_63 &&delay_wire_62==2) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_2[delay_wire_61];
    end
    if (delay_wire_42 &&delay_wire_41==3) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_3[delay_wire_40];
    end
    else if (delay_wire_45 &&delay_wire_44==3) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_3[delay_wire_43];
    end
    else if (delay_wire_48 &&delay_wire_47==3) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_3[delay_wire_46];
    end
    else if (delay_wire_51 &&delay_wire_50==3) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_3[delay_wire_49];
    end
    else if (delay_wire_54 &&delay_wire_53==3) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_3[delay_wire_52];
    end
    else if (delay_wire_57 &&delay_wire_56==3) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_3[delay_wire_55];
    end
    else if (delay_wire_60 &&delay_wire_59==3) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_3[delay_wire_58];
    end
    else if (delay_wire_63 &&delay_wire_62==3) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_3[delay_wire_61];
    end
    if (delay_wire_42 &&delay_wire_41==4) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_4[delay_wire_40];
    end
    else if (delay_wire_45 &&delay_wire_44==4) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_4[delay_wire_43];
    end
    else if (delay_wire_48 &&delay_wire_47==4) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_4[delay_wire_46];
    end
    else if (delay_wire_51 &&delay_wire_50==4) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_4[delay_wire_49];
    end
    else if (delay_wire_54 &&delay_wire_53==4) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_4[delay_wire_52];
    end
    else if (delay_wire_57 &&delay_wire_56==4) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_4[delay_wire_55];
    end
    else if (delay_wire_60 &&delay_wire_59==4) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_4[delay_wire_58];
    end
    else if (delay_wire_63 &&delay_wire_62==4) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_4[delay_wire_61];
    end
    if (delay_wire_42 &&delay_wire_41==5) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_5[delay_wire_40];
    end
    else if (delay_wire_45 &&delay_wire_44==5) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_5[delay_wire_43];
    end
    else if (delay_wire_48 &&delay_wire_47==5) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_5[delay_wire_46];
    end
    else if (delay_wire_51 &&delay_wire_50==5) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_5[delay_wire_49];
    end
    else if (delay_wire_54 &&delay_wire_53==5) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_5[delay_wire_52];
    end
    else if (delay_wire_57 &&delay_wire_56==5) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_5[delay_wire_55];
    end
    else if (delay_wire_60 &&delay_wire_59==5) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_5[delay_wire_58];
    end
    else if (delay_wire_63 &&delay_wire_62==5) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_5[delay_wire_61];
    end
    if (delay_wire_42 &&delay_wire_41==6) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_6[delay_wire_40];
    end
    else if (delay_wire_45 &&delay_wire_44==6) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_6[delay_wire_43];
    end
    else if (delay_wire_48 &&delay_wire_47==6) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_6[delay_wire_46];
    end
    else if (delay_wire_51 &&delay_wire_50==6) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_6[delay_wire_49];
    end
    else if (delay_wire_54 &&delay_wire_53==6) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_6[delay_wire_52];
    end
    else if (delay_wire_57 &&delay_wire_56==6) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_6[delay_wire_55];
    end
    else if (delay_wire_60 &&delay_wire_59==6) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_6[delay_wire_58];
    end
    else if (delay_wire_63 &&delay_wire_62==6) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_6[delay_wire_61];
    end
    if (delay_wire_42 &&delay_wire_41==7) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_7[delay_wire_40];
    end
    else if (delay_wire_45 &&delay_wire_44==7) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_7[delay_wire_43];
    end
    else if (delay_wire_48 &&delay_wire_47==7) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_7[delay_wire_46];
    end
    else if (delay_wire_51 &&delay_wire_50==7) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_7[delay_wire_49];
    end
    else if (delay_wire_54 &&delay_wire_53==7) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_7[delay_wire_52];
    end
    else if (delay_wire_57 &&delay_wire_56==7) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_7[delay_wire_55];
    end
    else if (delay_wire_60 &&delay_wire_59==7) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_7[delay_wire_58];
    end
    else if (delay_wire_63 &&delay_wire_62==7) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_7[delay_wire_61];
    end
  end

endmodule


module hw_kernel_global_wrapper_stencil_embarassing_bank_selector(input logic [16*4 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32]);
  logic [15:0] bank_index_3;
  assign bank_index_3 = (d[63:48]);
  assign out = bank_index_2*1+bank_index_3*3;

endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(2 + 81hw_kernel_global_wrapper_s0_y + 27hw_kernel_global_wrapper_s0_x + 9hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
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
        if(counter[1] == 80) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 26) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 8) begin
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8008) begin
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8008) begin
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
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
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
  // # of banks: 24
  (* ram_style = "block" *) logic [15:0]  bank_0 [9];
  (* ram_style = "block" *) logic [15:0]  bank_1 [9];
  (* ram_style = "block" *) logic [15:0]  bank_2 [9];
  (* ram_style = "block" *) logic [15:0]  bank_3 [9];
  (* ram_style = "block" *) logic [15:0]  bank_4 [9];
  (* ram_style = "block" *) logic [15:0]  bank_5 [9];
  (* ram_style = "block" *) logic [15:0]  bank_6 [9];
  (* ram_style = "block" *) logic [15:0]  bank_7 [9];
  (* ram_style = "block" *) logic [15:0]  bank_8 [9];
  (* ram_style = "block" *) logic [15:0]  bank_9 [9];
  (* ram_style = "block" *) logic [15:0]  bank_10 [9];
  (* ram_style = "block" *) logic [15:0]  bank_11 [9];
  (* ram_style = "block" *) logic [15:0]  bank_12 [9];
  (* ram_style = "block" *) logic [15:0]  bank_13 [9];
  (* ram_style = "block" *) logic [15:0]  bank_14 [9];
  (* ram_style = "block" *) logic [15:0]  bank_15 [9];
  (* ram_style = "block" *) logic [15:0]  bank_16 [9];
  (* ram_style = "block" *) logic [15:0]  bank_17 [9];
  (* ram_style = "block" *) logic [15:0]  bank_18 [9];
  (* ram_style = "block" *) logic [15:0]  bank_19 [9];
  (* ram_style = "block" *) logic [15:0]  bank_20 [9];
  (* ram_style = "block" *) logic [15:0]  bank_21 [9];
  (* ram_style = "block" *) logic [15:0]  bank_22 [9];
  (* ram_style = "block" *) logic [15:0]  bank_23 [9];
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_0 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_1 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_2 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_3 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[4])) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_64;
  always @(posedge clk) begin
    delay_wire_64 <= addr0;  end
  logic [15:0] delay_wire_65;
  always @(posedge clk) begin
    delay_wire_65 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_bank_selector.out;  end
  logic [15:0] delay_wire_66;
  always @(posedge clk) begin
    delay_wire_66 <= op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out;  end
  logic [15:0] delay_wire_67;
  always @(posedge clk) begin
    delay_wire_67 <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_68;
  always @(posedge clk) begin
    delay_wire_68 <= addr1;  end
  logic [15:0] delay_wire_69;
  always @(posedge clk) begin
    delay_wire_69 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out;  end
  logic [15:0] delay_wire_70;
  always @(posedge clk) begin
    delay_wire_70 <= op_hcompute_conv_stencil_3_read_ren_fsm_out;  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_71;
  always @(posedge clk) begin
    delay_wire_71 <= addr2;  end
  logic [15:0] delay_wire_72;
  always @(posedge clk) begin
    delay_wire_72 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out;  end
  logic [15:0] delay_wire_73;
  always @(posedge clk) begin
    delay_wire_73 <= op_hcompute_conv_stencil_3_read_ren_fsm_out;  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_74;
  always @(posedge clk) begin
    delay_wire_74 <= addr3;  end
  logic [15:0] delay_wire_75;
  always @(posedge clk) begin
    delay_wire_75 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out;  end
  logic [15:0] delay_wire_76;
  always @(posedge clk) begin
    delay_wire_76 <= op_hcompute_conv_stencil_3_read_ren_fsm_out;  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_77;
  always @(posedge clk) begin
    delay_wire_77 <= addr4;  end
  logic [15:0] delay_wire_78;
  always @(posedge clk) begin
    delay_wire_78 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out;  end
  logic [15:0] delay_wire_79;
  always @(posedge clk) begin
    delay_wire_79 <= op_hcompute_conv_stencil_3_read_ren_fsm_out;  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_80;
  always @(posedge clk) begin
    delay_wire_80 <= addr5;  end
  logic [15:0] delay_wire_81;
  always @(posedge clk) begin
    delay_wire_81 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out;  end
  logic [15:0] delay_wire_82;
  always @(posedge clk) begin
    delay_wire_82 <= op_hcompute_conv_stencil_3_read_ren_fsm_out;  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_83;
  always @(posedge clk) begin
    delay_wire_83 <= addr6;  end
  logic [15:0] delay_wire_84;
  always @(posedge clk) begin
    delay_wire_84 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out;  end
  logic [15:0] delay_wire_85;
  always @(posedge clk) begin
    delay_wire_85 <= op_hcompute_conv_stencil_3_read_ren_fsm_out;  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_86;
  always @(posedge clk) begin
    delay_wire_86 <= addr7;  end
  logic [15:0] delay_wire_87;
  always @(posedge clk) begin
    delay_wire_87 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out;  end
  logic [15:0] delay_wire_88;
  always @(posedge clk) begin
    delay_wire_88 <= op_hcompute_conv_stencil_3_read_ren_fsm_out;  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_89;
  always @(posedge clk) begin
    delay_wire_89 <= addr8;  end
  logic [15:0] delay_wire_90;
  always @(posedge clk) begin
    delay_wire_90 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out;  end
  logic [15:0] delay_wire_91;
  always @(posedge clk) begin
    delay_wire_91 <= op_hcompute_conv_stencil_3_read_ren_fsm_out;  end
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_92;
  always @(posedge clk) begin
    delay_wire_92 <= addr9;  end
  logic [15:0] delay_wire_93;
  always @(posedge clk) begin
    delay_wire_93 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out;  end
  logic [15:0] delay_wire_94;
  always @(posedge clk) begin
    delay_wire_94 <= op_hcompute_conv_stencil_4_read_ren_fsm_out;  end
  logic [15:0] addr10;
  assign addr10 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_95;
  always @(posedge clk) begin
    delay_wire_95 <= addr10;  end
  logic [15:0] delay_wire_96;
  always @(posedge clk) begin
    delay_wire_96 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out;  end
  logic [15:0] delay_wire_97;
  always @(posedge clk) begin
    delay_wire_97 <= op_hcompute_conv_stencil_4_read_ren_fsm_out;  end
  logic [15:0] addr11;
  assign addr11 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_98;
  always @(posedge clk) begin
    delay_wire_98 <= addr11;  end
  logic [15:0] delay_wire_99;
  always @(posedge clk) begin
    delay_wire_99 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out;  end
  logic [15:0] delay_wire_100;
  always @(posedge clk) begin
    delay_wire_100 <= op_hcompute_conv_stencil_4_read_ren_fsm_out;  end
  logic [15:0] addr12;
  assign addr12 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_101;
  always @(posedge clk) begin
    delay_wire_101 <= addr12;  end
  logic [15:0] delay_wire_102;
  always @(posedge clk) begin
    delay_wire_102 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out;  end
  logic [15:0] delay_wire_103;
  always @(posedge clk) begin
    delay_wire_103 <= op_hcompute_conv_stencil_4_read_ren_fsm_out;  end
  logic [15:0] addr13;
  assign addr13 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_104;
  always @(posedge clk) begin
    delay_wire_104 <= addr13;  end
  logic [15:0] delay_wire_105;
  always @(posedge clk) begin
    delay_wire_105 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out;  end
  logic [15:0] delay_wire_106;
  always @(posedge clk) begin
    delay_wire_106 <= op_hcompute_conv_stencil_4_read_ren_fsm_out;  end
  logic [15:0] addr14;
  assign addr14 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_107;
  always @(posedge clk) begin
    delay_wire_107 <= addr14;  end
  logic [15:0] delay_wire_108;
  always @(posedge clk) begin
    delay_wire_108 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out;  end
  logic [15:0] delay_wire_109;
  always @(posedge clk) begin
    delay_wire_109 <= op_hcompute_conv_stencil_4_read_ren_fsm_out;  end
  logic [15:0] addr15;
  assign addr15 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_110;
  always @(posedge clk) begin
    delay_wire_110 <= addr15;  end
  logic [15:0] delay_wire_111;
  always @(posedge clk) begin
    delay_wire_111 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out;  end
  logic [15:0] delay_wire_112;
  always @(posedge clk) begin
    delay_wire_112 <= op_hcompute_conv_stencil_4_read_ren_fsm_out;  end
  logic [15:0] addr16;
  assign addr16 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_113;
  always @(posedge clk) begin
    delay_wire_113 <= addr16;  end
  logic [15:0] delay_wire_114;
  always @(posedge clk) begin
    delay_wire_114 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out;  end
  logic [15:0] delay_wire_115;
  always @(posedge clk) begin
    delay_wire_115 <= op_hcompute_conv_stencil_4_read_ren_fsm_out;  end
  logic [15:0] addr17;
  assign addr17 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_116;
  always @(posedge clk) begin
    delay_wire_116 <= addr17;  end
  logic [15:0] delay_wire_117;
  always @(posedge clk) begin
    delay_wire_117 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out;  end
  logic [15:0] delay_wire_118;
  always @(posedge clk) begin
    delay_wire_118 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr18;
  assign addr18 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_119;
  always @(posedge clk) begin
    delay_wire_119 <= addr18;  end
  logic [15:0] delay_wire_120;
  always @(posedge clk) begin
    delay_wire_120 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out;  end
  logic [15:0] delay_wire_121;
  always @(posedge clk) begin
    delay_wire_121 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr19;
  assign addr19 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_122;
  always @(posedge clk) begin
    delay_wire_122 <= addr19;  end
  logic [15:0] delay_wire_123;
  always @(posedge clk) begin
    delay_wire_123 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out;  end
  logic [15:0] delay_wire_124;
  always @(posedge clk) begin
    delay_wire_124 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr20;
  assign addr20 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_125;
  always @(posedge clk) begin
    delay_wire_125 <= addr20;  end
  logic [15:0] delay_wire_126;
  always @(posedge clk) begin
    delay_wire_126 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out;  end
  logic [15:0] delay_wire_127;
  always @(posedge clk) begin
    delay_wire_127 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr21;
  assign addr21 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_128;
  always @(posedge clk) begin
    delay_wire_128 <= addr21;  end
  logic [15:0] delay_wire_129;
  always @(posedge clk) begin
    delay_wire_129 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out;  end
  logic [15:0] delay_wire_130;
  always @(posedge clk) begin
    delay_wire_130 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr22;
  assign addr22 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_131;
  always @(posedge clk) begin
    delay_wire_131 <= addr22;  end
  logic [15:0] delay_wire_132;
  always @(posedge clk) begin
    delay_wire_132 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out;  end
  logic [15:0] delay_wire_133;
  always @(posedge clk) begin
    delay_wire_133 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr23;
  assign addr23 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_134;
  always @(posedge clk) begin
    delay_wire_134 <= addr23;  end
  logic [15:0] delay_wire_135;
  always @(posedge clk) begin
    delay_wire_135 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out;  end
  logic [15:0] delay_wire_136;
  always @(posedge clk) begin
    delay_wire_136 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  logic [15:0] addr24;
  assign addr24 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_137;
  always @(posedge clk) begin
    delay_wire_137 <= addr24;  end
  logic [15:0] delay_wire_138;
  always @(posedge clk) begin
    delay_wire_138 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out;  end
  logic [15:0] delay_wire_139;
  always @(posedge clk) begin
    delay_wire_139 <= op_hcompute_conv_stencil_5_read_ren_fsm_out;  end
  always @(posedge clk) begin
    if (delay_wire_66 &&delay_wire_65==0) begin
        bank_0[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==1) begin
        bank_1[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==2) begin
        bank_2[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==3) begin
        bank_3[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==4) begin
        bank_4[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==5) begin
        bank_5[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==6) begin
        bank_6[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==7) begin
        bank_7[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==8) begin
        bank_8[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==9) begin
        bank_9[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==10) begin
        bank_10[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==11) begin
        bank_11[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==12) begin
        bank_12[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==13) begin
        bank_13[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==14) begin
        bank_14[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==15) begin
        bank_15[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==16) begin
        bank_16[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==17) begin
        bank_17[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==18) begin
        bank_18[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==19) begin
        bank_19[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==20) begin
        bank_20[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==21) begin
        bank_21[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==22) begin
        bank_22[delay_wire_64] <= delay_wire_67;
    end
    if (delay_wire_66 &&delay_wire_65==23) begin
        bank_23[delay_wire_64] <= delay_wire_67;
    end
  end
  always @(posedge clk) begin
    if (delay_wire_70 &&delay_wire_69==0) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_0[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==0) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_0[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==0) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_0[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==0) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_0[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==0) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_0[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==0) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_0[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==0) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_0[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==0) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_0[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==0) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_0[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==0) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_0[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==0) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_0[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==0) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_0[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==0) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_0[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==0) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_0[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==0) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_0[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==0) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_0[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==0) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_0[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==0) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_0[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==0) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_0[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==0) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_0[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==0) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_0[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==0) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_0[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==0) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_0[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==0) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_0[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==1) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_1[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==1) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_1[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==1) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_1[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==1) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_1[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==1) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_1[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==1) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_1[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==1) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_1[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==1) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_1[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==1) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_1[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==1) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_1[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==1) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_1[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==1) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_1[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==1) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_1[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==1) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_1[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==1) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_1[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==1) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_1[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==1) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_1[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==1) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_1[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==1) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_1[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==1) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_1[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==1) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_1[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==1) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_1[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==1) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_1[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==1) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_1[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==2) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_2[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==2) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_2[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==2) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_2[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==2) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_2[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==2) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_2[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==2) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_2[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==2) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_2[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==2) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_2[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==2) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_2[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==2) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_2[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==2) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_2[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==2) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_2[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==2) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_2[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==2) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_2[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==2) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_2[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==2) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_2[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==2) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_2[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==2) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_2[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==2) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_2[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==2) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_2[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==2) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_2[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==2) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_2[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==2) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_2[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==2) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_2[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==3) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_3[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==3) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_3[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==3) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_3[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==3) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_3[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==3) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_3[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==3) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_3[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==3) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_3[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==3) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_3[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==3) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_3[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==3) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_3[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==3) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_3[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==3) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_3[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==3) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_3[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==3) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_3[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==3) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_3[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==3) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_3[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==3) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_3[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==3) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_3[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==3) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_3[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==3) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_3[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==3) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_3[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==3) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_3[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==3) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_3[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==3) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_3[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==4) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_4[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==4) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_4[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==4) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_4[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==4) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_4[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==4) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_4[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==4) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_4[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==4) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_4[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==4) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_4[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==4) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_4[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==4) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_4[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==4) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_4[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==4) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_4[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==4) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_4[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==4) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_4[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==4) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_4[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==4) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_4[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==4) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_4[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==4) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_4[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==4) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_4[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==4) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_4[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==4) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_4[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==4) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_4[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==4) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_4[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==4) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_4[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==5) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_5[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==5) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_5[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==5) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_5[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==5) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_5[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==5) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_5[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==5) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_5[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==5) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_5[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==5) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_5[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==5) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_5[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==5) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_5[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==5) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_5[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==5) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_5[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==5) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_5[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==5) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_5[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==5) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_5[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==5) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_5[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==5) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_5[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==5) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_5[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==5) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_5[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==5) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_5[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==5) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_5[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==5) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_5[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==5) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_5[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==5) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_5[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==6) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_6[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==6) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_6[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==6) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_6[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==6) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_6[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==6) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_6[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==6) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_6[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==6) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_6[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==6) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_6[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==6) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_6[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==6) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_6[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==6) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_6[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==6) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_6[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==6) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_6[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==6) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_6[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==6) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_6[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==6) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_6[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==6) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_6[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==6) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_6[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==6) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_6[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==6) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_6[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==6) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_6[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==6) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_6[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==6) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_6[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==6) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_6[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==7) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_7[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==7) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_7[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==7) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_7[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==7) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_7[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==7) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_7[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==7) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_7[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==7) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_7[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==7) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_7[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==7) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_7[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==7) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_7[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==7) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_7[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==7) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_7[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==7) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_7[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==7) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_7[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==7) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_7[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==7) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_7[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==7) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_7[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==7) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_7[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==7) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_7[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==7) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_7[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==7) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_7[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==7) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_7[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==7) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_7[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==7) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_7[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==8) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_8[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==8) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_8[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==8) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_8[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==8) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_8[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==8) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_8[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==8) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_8[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==8) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_8[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==8) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_8[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==8) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_8[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==8) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_8[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==8) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_8[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==8) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_8[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==8) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_8[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==8) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_8[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==8) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_8[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==8) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_8[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==8) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_8[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==8) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_8[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==8) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_8[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==8) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_8[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==8) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_8[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==8) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_8[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==8) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_8[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==8) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_8[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==9) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_9[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==9) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_9[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==9) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_9[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==9) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_9[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==9) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_9[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==9) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_9[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==9) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_9[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==9) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_9[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==9) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_9[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==9) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_9[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==9) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_9[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==9) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_9[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==9) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_9[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==9) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_9[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==9) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_9[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==9) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_9[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==9) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_9[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==9) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_9[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==9) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_9[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==9) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_9[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==9) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_9[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==9) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_9[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==9) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_9[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==9) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_9[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==10) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_10[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==10) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_10[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==10) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_10[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==10) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_10[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==10) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_10[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==10) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_10[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==10) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_10[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==10) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_10[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==10) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_10[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==10) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_10[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==10) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_10[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==10) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_10[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==10) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_10[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==10) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_10[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==10) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_10[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==10) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_10[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==10) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_10[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==10) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_10[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==10) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_10[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==10) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_10[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==10) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_10[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==10) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_10[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==10) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_10[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==10) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_10[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==11) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_11[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==11) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_11[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==11) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_11[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==11) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_11[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==11) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_11[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==11) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_11[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==11) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_11[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==11) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_11[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==11) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_11[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==11) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_11[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==11) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_11[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==11) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_11[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==11) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_11[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==11) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_11[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==11) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_11[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==11) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_11[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==11) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_11[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==11) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_11[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==11) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_11[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==11) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_11[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==11) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_11[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==11) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_11[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==11) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_11[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==11) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_11[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==12) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_12[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==12) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_12[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==12) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_12[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==12) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_12[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==12) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_12[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==12) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_12[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==12) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_12[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==12) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_12[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==12) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_12[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==12) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_12[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==12) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_12[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==12) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_12[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==12) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_12[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==12) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_12[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==12) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_12[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==12) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_12[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==12) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_12[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==12) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_12[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==12) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_12[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==12) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_12[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==12) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_12[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==12) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_12[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==12) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_12[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==12) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_12[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==13) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_13[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==13) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_13[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==13) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_13[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==13) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_13[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==13) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_13[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==13) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_13[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==13) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_13[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==13) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_13[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==13) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_13[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==13) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_13[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==13) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_13[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==13) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_13[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==13) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_13[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==13) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_13[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==13) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_13[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==13) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_13[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==13) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_13[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==13) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_13[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==13) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_13[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==13) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_13[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==13) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_13[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==13) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_13[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==13) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_13[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==13) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_13[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==14) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_14[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==14) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_14[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==14) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_14[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==14) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_14[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==14) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_14[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==14) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_14[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==14) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_14[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==14) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_14[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==14) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_14[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==14) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_14[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==14) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_14[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==14) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_14[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==14) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_14[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==14) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_14[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==14) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_14[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==14) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_14[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==14) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_14[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==14) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_14[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==14) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_14[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==14) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_14[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==14) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_14[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==14) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_14[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==14) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_14[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==14) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_14[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==15) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_15[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==15) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_15[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==15) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_15[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==15) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_15[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==15) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_15[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==15) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_15[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==15) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_15[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==15) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_15[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==15) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_15[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==15) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_15[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==15) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_15[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==15) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_15[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==15) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_15[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==15) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_15[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==15) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_15[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==15) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_15[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==15) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_15[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==15) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_15[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==15) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_15[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==15) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_15[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==15) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_15[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==15) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_15[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==15) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_15[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==15) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_15[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==16) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_16[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==16) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_16[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==16) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_16[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==16) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_16[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==16) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_16[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==16) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_16[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==16) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_16[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==16) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_16[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==16) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_16[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==16) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_16[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==16) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_16[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==16) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_16[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==16) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_16[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==16) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_16[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==16) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_16[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==16) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_16[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==16) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_16[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==16) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_16[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==16) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_16[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==16) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_16[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==16) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_16[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==16) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_16[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==16) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_16[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==16) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_16[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==17) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_17[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==17) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_17[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==17) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_17[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==17) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_17[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==17) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_17[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==17) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_17[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==17) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_17[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==17) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_17[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==17) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_17[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==17) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_17[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==17) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_17[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==17) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_17[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==17) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_17[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==17) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_17[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==17) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_17[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==17) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_17[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==17) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_17[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==17) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_17[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==17) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_17[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==17) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_17[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==17) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_17[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==17) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_17[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==17) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_17[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==17) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_17[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==18) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_18[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==18) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_18[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==18) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_18[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==18) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_18[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==18) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_18[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==18) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_18[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==18) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_18[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==18) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_18[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==18) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_18[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==18) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_18[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==18) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_18[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==18) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_18[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==18) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_18[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==18) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_18[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==18) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_18[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==18) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_18[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==18) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_18[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==18) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_18[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==18) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_18[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==18) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_18[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==18) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_18[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==18) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_18[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==18) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_18[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==18) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_18[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==19) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_19[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==19) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_19[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==19) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_19[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==19) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_19[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==19) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_19[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==19) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_19[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==19) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_19[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==19) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_19[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==19) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_19[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==19) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_19[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==19) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_19[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==19) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_19[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==19) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_19[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==19) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_19[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==19) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_19[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==19) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_19[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==19) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_19[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==19) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_19[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==19) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_19[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==19) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_19[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==19) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_19[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==19) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_19[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==19) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_19[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==19) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_19[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==20) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_20[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==20) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_20[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==20) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_20[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==20) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_20[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==20) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_20[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==20) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_20[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==20) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_20[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==20) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_20[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==20) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_20[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==20) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_20[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==20) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_20[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==20) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_20[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==20) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_20[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==20) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_20[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==20) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_20[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==20) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_20[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==20) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_20[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==20) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_20[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==20) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_20[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==20) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_20[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==20) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_20[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==20) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_20[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==20) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_20[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==20) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_20[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==21) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_21[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==21) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_21[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==21) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_21[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==21) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_21[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==21) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_21[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==21) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_21[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==21) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_21[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==21) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_21[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==21) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_21[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==21) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_21[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==21) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_21[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==21) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_21[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==21) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_21[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==21) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_21[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==21) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_21[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==21) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_21[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==21) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_21[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==21) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_21[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==21) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_21[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==21) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_21[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==21) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_21[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==21) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_21[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==21) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_21[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==21) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_21[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==22) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_22[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==22) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_22[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==22) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_22[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==22) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_22[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==22) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_22[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==22) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_22[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==22) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_22[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==22) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_22[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==22) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_22[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==22) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_22[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==22) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_22[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==22) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_22[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==22) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_22[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==22) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_22[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==22) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_22[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==22) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_22[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==22) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_22[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==22) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_22[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==22) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_22[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==22) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_22[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==22) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_22[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==22) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_22[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==22) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_22[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==22) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_22[delay_wire_137];
    end
    if (delay_wire_70 &&delay_wire_69==23) begin
        op_hcompute_conv_stencil_3_read[0] <= bank_23[delay_wire_68];
    end
    else if (delay_wire_73 &&delay_wire_72==23) begin
        op_hcompute_conv_stencil_3_read[1] <= bank_23[delay_wire_71];
    end
    else if (delay_wire_76 &&delay_wire_75==23) begin
        op_hcompute_conv_stencil_3_read[2] <= bank_23[delay_wire_74];
    end
    else if (delay_wire_79 &&delay_wire_78==23) begin
        op_hcompute_conv_stencil_3_read[3] <= bank_23[delay_wire_77];
    end
    else if (delay_wire_82 &&delay_wire_81==23) begin
        op_hcompute_conv_stencil_3_read[4] <= bank_23[delay_wire_80];
    end
    else if (delay_wire_85 &&delay_wire_84==23) begin
        op_hcompute_conv_stencil_3_read[5] <= bank_23[delay_wire_83];
    end
    else if (delay_wire_88 &&delay_wire_87==23) begin
        op_hcompute_conv_stencil_3_read[6] <= bank_23[delay_wire_86];
    end
    else if (delay_wire_91 &&delay_wire_90==23) begin
        op_hcompute_conv_stencil_3_read[7] <= bank_23[delay_wire_89];
    end
    else if (delay_wire_94 &&delay_wire_93==23) begin
        op_hcompute_conv_stencil_4_read[0] <= bank_23[delay_wire_92];
    end
    else if (delay_wire_97 &&delay_wire_96==23) begin
        op_hcompute_conv_stencil_4_read[1] <= bank_23[delay_wire_95];
    end
    else if (delay_wire_100 &&delay_wire_99==23) begin
        op_hcompute_conv_stencil_4_read[2] <= bank_23[delay_wire_98];
    end
    else if (delay_wire_103 &&delay_wire_102==23) begin
        op_hcompute_conv_stencil_4_read[3] <= bank_23[delay_wire_101];
    end
    else if (delay_wire_106 &&delay_wire_105==23) begin
        op_hcompute_conv_stencil_4_read[4] <= bank_23[delay_wire_104];
    end
    else if (delay_wire_109 &&delay_wire_108==23) begin
        op_hcompute_conv_stencil_4_read[5] <= bank_23[delay_wire_107];
    end
    else if (delay_wire_112 &&delay_wire_111==23) begin
        op_hcompute_conv_stencil_4_read[6] <= bank_23[delay_wire_110];
    end
    else if (delay_wire_115 &&delay_wire_114==23) begin
        op_hcompute_conv_stencil_4_read[7] <= bank_23[delay_wire_113];
    end
    else if (delay_wire_118 &&delay_wire_117==23) begin
        op_hcompute_conv_stencil_5_read[0] <= bank_23[delay_wire_116];
    end
    else if (delay_wire_121 &&delay_wire_120==23) begin
        op_hcompute_conv_stencil_5_read[1] <= bank_23[delay_wire_119];
    end
    else if (delay_wire_124 &&delay_wire_123==23) begin
        op_hcompute_conv_stencil_5_read[2] <= bank_23[delay_wire_122];
    end
    else if (delay_wire_127 &&delay_wire_126==23) begin
        op_hcompute_conv_stencil_5_read[3] <= bank_23[delay_wire_125];
    end
    else if (delay_wire_130 &&delay_wire_129==23) begin
        op_hcompute_conv_stencil_5_read[4] <= bank_23[delay_wire_128];
    end
    else if (delay_wire_133 &&delay_wire_132==23) begin
        op_hcompute_conv_stencil_5_read[5] <= bank_23[delay_wire_131];
    end
    else if (delay_wire_136 &&delay_wire_135==23) begin
        op_hcompute_conv_stencil_5_read[6] <= bank_23[delay_wire_134];
    end
    else if (delay_wire_139 &&delay_wire_138==23) begin
        op_hcompute_conv_stencil_5_read[7] <= bank_23[delay_wire_137];
    end
  end

endmodule

