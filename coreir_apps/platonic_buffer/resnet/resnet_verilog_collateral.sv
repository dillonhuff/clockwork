// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8047 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8046) begin
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
// { op_hcompute_conv_stencil_2[root, conv_s0_y, conv_s0_x] -> [(6 + 33conv_s0_y + conv_s0_x)] }
module affine_controller__U159(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
      if(counter[0] ==5) begin
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
        if(counter[1] == 32) begin
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
// { op_hcompute_conv_stencil_1[root, conv_s0_y, conv_s0_x] -> [(4 + 33conv_s0_y + conv_s0_x)] }
module affine_controller__U166(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
        if(counter[1] == 32) begin
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
// { op_hcompute_conv_stencil[root, conv_s0_y, conv_s0_x] -> [(2 + 33conv_s0_y + conv_s0_x)] }
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
        if(counter[1] == 32) begin
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8028 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
module affine_controller__U180(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
      if(counter[0] ==8027) begin
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
module affine_controller__U339(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
module affine_controller__U498(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
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
module affine_controller__U505(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
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

module conv_stencil_bank_selector(input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32] % 20);
  assign out = bank_index_0*1+bank_index_1*2+bank_index_2*2;

endmodule

// { op_hcompute_conv_stencil_1[root, conv_s0_y, conv_s0_x] -> [(4 + 33conv_s0_y + conv_s0_x)] }
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
      if(counter[0] ==3) begin
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
        if(counter[1] == 32) begin
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
// { op_hcompute_conv_stencil_2[root, conv_s0_y, conv_s0_x] -> [(6 + 33conv_s0_y + conv_s0_x)] }
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
      if(counter[0] ==5) begin
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
        if(counter[1] == 32) begin
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8026 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[1] <= op_hcompute_conv_stencil_3_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[2] <= op_hcompute_conv_stencil_3_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8045 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8044) begin
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[1] <= op_hcompute_conv_stencil_4_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[2] <= op_hcompute_conv_stencil_4_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8064 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8063) begin
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[1] <= op_hcompute_conv_stencil_5_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[2] <= op_hcompute_conv_stencil_5_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
// { op_hcompute_conv_stencil[root, conv_s0_y, conv_s0_x] -> [(2 + 33conv_s0_y + conv_s0_x)] }
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
        if(counter[1] == 32) begin
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8028 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8027) begin
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8047 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8046) begin
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
  // # of banks: 40
  logic [15:0] bank_0 [112];
  logic [15:0] bank_1 [112];
  logic [15:0] bank_2 [112];
  logic [15:0] bank_3 [112];
  logic [15:0] bank_4 [112];
  logic [15:0] bank_5 [112];
  logic [15:0] bank_6 [112];
  logic [15:0] bank_7 [112];
  logic [15:0] bank_8 [112];
  logic [15:0] bank_9 [112];
  logic [15:0] bank_10 [112];
  logic [15:0] bank_11 [112];
  logic [15:0] bank_12 [112];
  logic [15:0] bank_13 [112];
  logic [15:0] bank_14 [112];
  logic [15:0] bank_15 [112];
  logic [15:0] bank_16 [112];
  logic [15:0] bank_17 [112];
  logic [15:0] bank_18 [112];
  logic [15:0] bank_19 [112];
  logic [15:0] bank_20 [112];
  logic [15:0] bank_21 [112];
  logic [15:0] bank_22 [112];
  logic [15:0] bank_23 [112];
  logic [15:0] bank_24 [112];
  logic [15:0] bank_25 [112];
  logic [15:0] bank_26 [112];
  logic [15:0] bank_27 [112];
  logic [15:0] bank_28 [112];
  logic [15:0] bank_29 [112];
  logic [15:0] bank_30 [112];
  logic [15:0] bank_31 [112];
  logic [15:0] bank_32 [112];
  logic [15:0] bank_33 [112];
  logic [15:0] bank_34 [112];
  logic [15:0] bank_35 [112];
  logic [15:0] bank_36 [112];
  logic [15:0] bank_37 [112];
  logic [15:0] bank_38 [112];
  logic [15:0] bank_39 [112];
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
  assign addr0 = (((((1)) - 0)>>1)*1+((((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[1])) - 0)>>0)*2+$rtoi($floor((((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[2])) - 0)/ 20))*56);
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
  assign addr1 = (((((2)) - 0)>>1)*1+((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[1])) - 0)>>0)*2+$rtoi($floor((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2])) - 0)/ 20))*56);
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
  assign addr2 = (((0 - 0)>>1)*1+((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[3])) - 0)>>0)*2+$rtoi($floor((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[4])) - 0)/ 20))*56);
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
  assign addr3 = (((((1)) - 0)>>1)*1+((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[3])) - 0)>>0)*2+$rtoi($floor((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[4])) - 0)/ 20))*56);
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
  assign addr4 = (((((2)) - 0)>>1)*1+((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[3])) - 0)>>0)*2+$rtoi($floor((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[4])) - 0)/ 20))*56);
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
  assign addr5 = (((0 - 0)>>1)*1+((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[1])) - 0)>>0)*2+$rtoi($floor((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2])) - 0)/ 20))*56);
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
  assign addr6 = (((0 - 0)>>1)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*2+$rtoi($floor((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)/ 20))*56);
  logic [15:0] end_delay_wire_24;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[0] <= end_delay_wire_24;  end
  logic [15:0] addr7;
  assign addr7 = (((((1)) - 0)>>1)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0)>>0)*2+$rtoi($floor((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0)/ 20))*56);
  logic [15:0] end_delay_wire_25;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[0] <= end_delay_wire_25;  end
  logic [15:0] addr8;
  assign addr8 = (((((2)) - 0)>>1)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0)>>0)*2+$rtoi($floor((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0)/ 20))*56);
  logic [15:0] end_delay_wire_26;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[0] <= end_delay_wire_26;  end
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0)>>1)*1+((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0)>>0)*2+$rtoi($floor((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[3])) - 0)/ 20))*56);
  logic [15:0] end_delay_wire_27;
  always @(posedge clk) begin
    op_hcompute_hw_output_stencil_read[0] <= end_delay_wire_27;  end
  always @(posedge clk) begin
    if (delay_wire_2) begin
      case( delay_wire_1)
        0:bank_0[delay_wire_0] <= delay_wire_3;
        1:bank_1[delay_wire_0] <= delay_wire_3;
        2:bank_2[delay_wire_0] <= delay_wire_3;
        3:bank_3[delay_wire_0] <= delay_wire_3;
        4:bank_4[delay_wire_0] <= delay_wire_3;
        5:bank_5[delay_wire_0] <= delay_wire_3;
        6:bank_6[delay_wire_0] <= delay_wire_3;
        7:bank_7[delay_wire_0] <= delay_wire_3;
        8:bank_8[delay_wire_0] <= delay_wire_3;
        9:bank_9[delay_wire_0] <= delay_wire_3;
        10:bank_10[delay_wire_0] <= delay_wire_3;
        11:bank_11[delay_wire_0] <= delay_wire_3;
        12:bank_12[delay_wire_0] <= delay_wire_3;
        13:bank_13[delay_wire_0] <= delay_wire_3;
        14:bank_14[delay_wire_0] <= delay_wire_3;
        15:bank_15[delay_wire_0] <= delay_wire_3;
        16:bank_16[delay_wire_0] <= delay_wire_3;
        17:bank_17[delay_wire_0] <= delay_wire_3;
        18:bank_18[delay_wire_0] <= delay_wire_3;
        19:bank_19[delay_wire_0] <= delay_wire_3;
        20:bank_20[delay_wire_0] <= delay_wire_3;
        21:bank_21[delay_wire_0] <= delay_wire_3;
        22:bank_22[delay_wire_0] <= delay_wire_3;
        23:bank_23[delay_wire_0] <= delay_wire_3;
        24:bank_24[delay_wire_0] <= delay_wire_3;
        25:bank_25[delay_wire_0] <= delay_wire_3;
        26:bank_26[delay_wire_0] <= delay_wire_3;
        27:bank_27[delay_wire_0] <= delay_wire_3;
        28:bank_28[delay_wire_0] <= delay_wire_3;
        29:bank_29[delay_wire_0] <= delay_wire_3;
        30:bank_30[delay_wire_0] <= delay_wire_3;
        31:bank_31[delay_wire_0] <= delay_wire_3;
        32:bank_32[delay_wire_0] <= delay_wire_3;
        33:bank_33[delay_wire_0] <= delay_wire_3;
        34:bank_34[delay_wire_0] <= delay_wire_3;
        35:bank_35[delay_wire_0] <= delay_wire_3;
        36:bank_36[delay_wire_0] <= delay_wire_3;
        37:bank_37[delay_wire_0] <= delay_wire_3;
        38:bank_38[delay_wire_0] <= delay_wire_3;
        39:bank_39[delay_wire_0] <= delay_wire_3;
      endcase
    end
    if (delay_wire_6) begin
      case( delay_wire_5)
        0:bank_0[delay_wire_4] <= delay_wire_7;
        1:bank_1[delay_wire_4] <= delay_wire_7;
        2:bank_2[delay_wire_4] <= delay_wire_7;
        3:bank_3[delay_wire_4] <= delay_wire_7;
        4:bank_4[delay_wire_4] <= delay_wire_7;
        5:bank_5[delay_wire_4] <= delay_wire_7;
        6:bank_6[delay_wire_4] <= delay_wire_7;
        7:bank_7[delay_wire_4] <= delay_wire_7;
        8:bank_8[delay_wire_4] <= delay_wire_7;
        9:bank_9[delay_wire_4] <= delay_wire_7;
        10:bank_10[delay_wire_4] <= delay_wire_7;
        11:bank_11[delay_wire_4] <= delay_wire_7;
        12:bank_12[delay_wire_4] <= delay_wire_7;
        13:bank_13[delay_wire_4] <= delay_wire_7;
        14:bank_14[delay_wire_4] <= delay_wire_7;
        15:bank_15[delay_wire_4] <= delay_wire_7;
        16:bank_16[delay_wire_4] <= delay_wire_7;
        17:bank_17[delay_wire_4] <= delay_wire_7;
        18:bank_18[delay_wire_4] <= delay_wire_7;
        19:bank_19[delay_wire_4] <= delay_wire_7;
        20:bank_20[delay_wire_4] <= delay_wire_7;
        21:bank_21[delay_wire_4] <= delay_wire_7;
        22:bank_22[delay_wire_4] <= delay_wire_7;
        23:bank_23[delay_wire_4] <= delay_wire_7;
        24:bank_24[delay_wire_4] <= delay_wire_7;
        25:bank_25[delay_wire_4] <= delay_wire_7;
        26:bank_26[delay_wire_4] <= delay_wire_7;
        27:bank_27[delay_wire_4] <= delay_wire_7;
        28:bank_28[delay_wire_4] <= delay_wire_7;
        29:bank_29[delay_wire_4] <= delay_wire_7;
        30:bank_30[delay_wire_4] <= delay_wire_7;
        31:bank_31[delay_wire_4] <= delay_wire_7;
        32:bank_32[delay_wire_4] <= delay_wire_7;
        33:bank_33[delay_wire_4] <= delay_wire_7;
        34:bank_34[delay_wire_4] <= delay_wire_7;
        35:bank_35[delay_wire_4] <= delay_wire_7;
        36:bank_36[delay_wire_4] <= delay_wire_7;
        37:bank_37[delay_wire_4] <= delay_wire_7;
        38:bank_38[delay_wire_4] <= delay_wire_7;
        39:bank_39[delay_wire_4] <= delay_wire_7;
      endcase
    end
    if (delay_wire_10) begin
      case( delay_wire_9)
        0:bank_0[delay_wire_8] <= delay_wire_11;
        1:bank_1[delay_wire_8] <= delay_wire_11;
        2:bank_2[delay_wire_8] <= delay_wire_11;
        3:bank_3[delay_wire_8] <= delay_wire_11;
        4:bank_4[delay_wire_8] <= delay_wire_11;
        5:bank_5[delay_wire_8] <= delay_wire_11;
        6:bank_6[delay_wire_8] <= delay_wire_11;
        7:bank_7[delay_wire_8] <= delay_wire_11;
        8:bank_8[delay_wire_8] <= delay_wire_11;
        9:bank_9[delay_wire_8] <= delay_wire_11;
        10:bank_10[delay_wire_8] <= delay_wire_11;
        11:bank_11[delay_wire_8] <= delay_wire_11;
        12:bank_12[delay_wire_8] <= delay_wire_11;
        13:bank_13[delay_wire_8] <= delay_wire_11;
        14:bank_14[delay_wire_8] <= delay_wire_11;
        15:bank_15[delay_wire_8] <= delay_wire_11;
        16:bank_16[delay_wire_8] <= delay_wire_11;
        17:bank_17[delay_wire_8] <= delay_wire_11;
        18:bank_18[delay_wire_8] <= delay_wire_11;
        19:bank_19[delay_wire_8] <= delay_wire_11;
        20:bank_20[delay_wire_8] <= delay_wire_11;
        21:bank_21[delay_wire_8] <= delay_wire_11;
        22:bank_22[delay_wire_8] <= delay_wire_11;
        23:bank_23[delay_wire_8] <= delay_wire_11;
        24:bank_24[delay_wire_8] <= delay_wire_11;
        25:bank_25[delay_wire_8] <= delay_wire_11;
        26:bank_26[delay_wire_8] <= delay_wire_11;
        27:bank_27[delay_wire_8] <= delay_wire_11;
        28:bank_28[delay_wire_8] <= delay_wire_11;
        29:bank_29[delay_wire_8] <= delay_wire_11;
        30:bank_30[delay_wire_8] <= delay_wire_11;
        31:bank_31[delay_wire_8] <= delay_wire_11;
        32:bank_32[delay_wire_8] <= delay_wire_11;
        33:bank_33[delay_wire_8] <= delay_wire_11;
        34:bank_34[delay_wire_8] <= delay_wire_11;
        35:bank_35[delay_wire_8] <= delay_wire_11;
        36:bank_36[delay_wire_8] <= delay_wire_11;
        37:bank_37[delay_wire_8] <= delay_wire_11;
        38:bank_38[delay_wire_8] <= delay_wire_11;
        39:bank_39[delay_wire_8] <= delay_wire_11;
      endcase
    end
    if (delay_wire_14) begin
      case( delay_wire_13)
        0:bank_0[delay_wire_12] <= delay_wire_15;
        1:bank_1[delay_wire_12] <= delay_wire_15;
        2:bank_2[delay_wire_12] <= delay_wire_15;
        3:bank_3[delay_wire_12] <= delay_wire_15;
        4:bank_4[delay_wire_12] <= delay_wire_15;
        5:bank_5[delay_wire_12] <= delay_wire_15;
        6:bank_6[delay_wire_12] <= delay_wire_15;
        7:bank_7[delay_wire_12] <= delay_wire_15;
        8:bank_8[delay_wire_12] <= delay_wire_15;
        9:bank_9[delay_wire_12] <= delay_wire_15;
        10:bank_10[delay_wire_12] <= delay_wire_15;
        11:bank_11[delay_wire_12] <= delay_wire_15;
        12:bank_12[delay_wire_12] <= delay_wire_15;
        13:bank_13[delay_wire_12] <= delay_wire_15;
        14:bank_14[delay_wire_12] <= delay_wire_15;
        15:bank_15[delay_wire_12] <= delay_wire_15;
        16:bank_16[delay_wire_12] <= delay_wire_15;
        17:bank_17[delay_wire_12] <= delay_wire_15;
        18:bank_18[delay_wire_12] <= delay_wire_15;
        19:bank_19[delay_wire_12] <= delay_wire_15;
        20:bank_20[delay_wire_12] <= delay_wire_15;
        21:bank_21[delay_wire_12] <= delay_wire_15;
        22:bank_22[delay_wire_12] <= delay_wire_15;
        23:bank_23[delay_wire_12] <= delay_wire_15;
        24:bank_24[delay_wire_12] <= delay_wire_15;
        25:bank_25[delay_wire_12] <= delay_wire_15;
        26:bank_26[delay_wire_12] <= delay_wire_15;
        27:bank_27[delay_wire_12] <= delay_wire_15;
        28:bank_28[delay_wire_12] <= delay_wire_15;
        29:bank_29[delay_wire_12] <= delay_wire_15;
        30:bank_30[delay_wire_12] <= delay_wire_15;
        31:bank_31[delay_wire_12] <= delay_wire_15;
        32:bank_32[delay_wire_12] <= delay_wire_15;
        33:bank_33[delay_wire_12] <= delay_wire_15;
        34:bank_34[delay_wire_12] <= delay_wire_15;
        35:bank_35[delay_wire_12] <= delay_wire_15;
        36:bank_36[delay_wire_12] <= delay_wire_15;
        37:bank_37[delay_wire_12] <= delay_wire_15;
        38:bank_38[delay_wire_12] <= delay_wire_15;
        39:bank_39[delay_wire_12] <= delay_wire_15;
      endcase
    end
    if (delay_wire_18) begin
      case( delay_wire_17)
        0:bank_0[delay_wire_16] <= delay_wire_19;
        1:bank_1[delay_wire_16] <= delay_wire_19;
        2:bank_2[delay_wire_16] <= delay_wire_19;
        3:bank_3[delay_wire_16] <= delay_wire_19;
        4:bank_4[delay_wire_16] <= delay_wire_19;
        5:bank_5[delay_wire_16] <= delay_wire_19;
        6:bank_6[delay_wire_16] <= delay_wire_19;
        7:bank_7[delay_wire_16] <= delay_wire_19;
        8:bank_8[delay_wire_16] <= delay_wire_19;
        9:bank_9[delay_wire_16] <= delay_wire_19;
        10:bank_10[delay_wire_16] <= delay_wire_19;
        11:bank_11[delay_wire_16] <= delay_wire_19;
        12:bank_12[delay_wire_16] <= delay_wire_19;
        13:bank_13[delay_wire_16] <= delay_wire_19;
        14:bank_14[delay_wire_16] <= delay_wire_19;
        15:bank_15[delay_wire_16] <= delay_wire_19;
        16:bank_16[delay_wire_16] <= delay_wire_19;
        17:bank_17[delay_wire_16] <= delay_wire_19;
        18:bank_18[delay_wire_16] <= delay_wire_19;
        19:bank_19[delay_wire_16] <= delay_wire_19;
        20:bank_20[delay_wire_16] <= delay_wire_19;
        21:bank_21[delay_wire_16] <= delay_wire_19;
        22:bank_22[delay_wire_16] <= delay_wire_19;
        23:bank_23[delay_wire_16] <= delay_wire_19;
        24:bank_24[delay_wire_16] <= delay_wire_19;
        25:bank_25[delay_wire_16] <= delay_wire_19;
        26:bank_26[delay_wire_16] <= delay_wire_19;
        27:bank_27[delay_wire_16] <= delay_wire_19;
        28:bank_28[delay_wire_16] <= delay_wire_19;
        29:bank_29[delay_wire_16] <= delay_wire_19;
        30:bank_30[delay_wire_16] <= delay_wire_19;
        31:bank_31[delay_wire_16] <= delay_wire_19;
        32:bank_32[delay_wire_16] <= delay_wire_19;
        33:bank_33[delay_wire_16] <= delay_wire_19;
        34:bank_34[delay_wire_16] <= delay_wire_19;
        35:bank_35[delay_wire_16] <= delay_wire_19;
        36:bank_36[delay_wire_16] <= delay_wire_19;
        37:bank_37[delay_wire_16] <= delay_wire_19;
        38:bank_38[delay_wire_16] <= delay_wire_19;
        39:bank_39[delay_wire_16] <= delay_wire_19;
      endcase
    end
    if (delay_wire_22) begin
      case( delay_wire_21)
        0:bank_0[delay_wire_20] <= delay_wire_23;
        1:bank_1[delay_wire_20] <= delay_wire_23;
        2:bank_2[delay_wire_20] <= delay_wire_23;
        3:bank_3[delay_wire_20] <= delay_wire_23;
        4:bank_4[delay_wire_20] <= delay_wire_23;
        5:bank_5[delay_wire_20] <= delay_wire_23;
        6:bank_6[delay_wire_20] <= delay_wire_23;
        7:bank_7[delay_wire_20] <= delay_wire_23;
        8:bank_8[delay_wire_20] <= delay_wire_23;
        9:bank_9[delay_wire_20] <= delay_wire_23;
        10:bank_10[delay_wire_20] <= delay_wire_23;
        11:bank_11[delay_wire_20] <= delay_wire_23;
        12:bank_12[delay_wire_20] <= delay_wire_23;
        13:bank_13[delay_wire_20] <= delay_wire_23;
        14:bank_14[delay_wire_20] <= delay_wire_23;
        15:bank_15[delay_wire_20] <= delay_wire_23;
        16:bank_16[delay_wire_20] <= delay_wire_23;
        17:bank_17[delay_wire_20] <= delay_wire_23;
        18:bank_18[delay_wire_20] <= delay_wire_23;
        19:bank_19[delay_wire_20] <= delay_wire_23;
        20:bank_20[delay_wire_20] <= delay_wire_23;
        21:bank_21[delay_wire_20] <= delay_wire_23;
        22:bank_22[delay_wire_20] <= delay_wire_23;
        23:bank_23[delay_wire_20] <= delay_wire_23;
        24:bank_24[delay_wire_20] <= delay_wire_23;
        25:bank_25[delay_wire_20] <= delay_wire_23;
        26:bank_26[delay_wire_20] <= delay_wire_23;
        27:bank_27[delay_wire_20] <= delay_wire_23;
        28:bank_28[delay_wire_20] <= delay_wire_23;
        29:bank_29[delay_wire_20] <= delay_wire_23;
        30:bank_30[delay_wire_20] <= delay_wire_23;
        31:bank_31[delay_wire_20] <= delay_wire_23;
        32:bank_32[delay_wire_20] <= delay_wire_23;
        33:bank_33[delay_wire_20] <= delay_wire_23;
        34:bank_34[delay_wire_20] <= delay_wire_23;
        35:bank_35[delay_wire_20] <= delay_wire_23;
        36:bank_36[delay_wire_20] <= delay_wire_23;
        37:bank_37[delay_wire_20] <= delay_wire_23;
        38:bank_38[delay_wire_20] <= delay_wire_23;
        39:bank_39[delay_wire_20] <= delay_wire_23;
      endcase
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_bank_selector.out)
        0:end_delay_wire_24 <= bank_0[addr6];
        1:end_delay_wire_24 <= bank_1[addr6];
        2:end_delay_wire_24 <= bank_2[addr6];
        3:end_delay_wire_24 <= bank_3[addr6];
        4:end_delay_wire_24 <= bank_4[addr6];
        5:end_delay_wire_24 <= bank_5[addr6];
        6:end_delay_wire_24 <= bank_6[addr6];
        7:end_delay_wire_24 <= bank_7[addr6];
        8:end_delay_wire_24 <= bank_8[addr6];
        9:end_delay_wire_24 <= bank_9[addr6];
        10:end_delay_wire_24 <= bank_10[addr6];
        11:end_delay_wire_24 <= bank_11[addr6];
        12:end_delay_wire_24 <= bank_12[addr6];
        13:end_delay_wire_24 <= bank_13[addr6];
        14:end_delay_wire_24 <= bank_14[addr6];
        15:end_delay_wire_24 <= bank_15[addr6];
        16:end_delay_wire_24 <= bank_16[addr6];
        17:end_delay_wire_24 <= bank_17[addr6];
        18:end_delay_wire_24 <= bank_18[addr6];
        19:end_delay_wire_24 <= bank_19[addr6];
        20:end_delay_wire_24 <= bank_20[addr6];
        21:end_delay_wire_24 <= bank_21[addr6];
        22:end_delay_wire_24 <= bank_22[addr6];
        23:end_delay_wire_24 <= bank_23[addr6];
        24:end_delay_wire_24 <= bank_24[addr6];
        25:end_delay_wire_24 <= bank_25[addr6];
        26:end_delay_wire_24 <= bank_26[addr6];
        27:end_delay_wire_24 <= bank_27[addr6];
        28:end_delay_wire_24 <= bank_28[addr6];
        29:end_delay_wire_24 <= bank_29[addr6];
        30:end_delay_wire_24 <= bank_30[addr6];
        31:end_delay_wire_24 <= bank_31[addr6];
        32:end_delay_wire_24 <= bank_32[addr6];
        33:end_delay_wire_24 <= bank_33[addr6];
        34:end_delay_wire_24 <= bank_34[addr6];
        35:end_delay_wire_24 <= bank_35[addr6];
        36:end_delay_wire_24 <= bank_36[addr6];
        37:end_delay_wire_24 <= bank_37[addr6];
        38:end_delay_wire_24 <= bank_38[addr6];
        39:end_delay_wire_24 <= bank_39[addr6];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_bank_selector.out)
        0:end_delay_wire_25 <= bank_0[addr7];
        1:end_delay_wire_25 <= bank_1[addr7];
        2:end_delay_wire_25 <= bank_2[addr7];
        3:end_delay_wire_25 <= bank_3[addr7];
        4:end_delay_wire_25 <= bank_4[addr7];
        5:end_delay_wire_25 <= bank_5[addr7];
        6:end_delay_wire_25 <= bank_6[addr7];
        7:end_delay_wire_25 <= bank_7[addr7];
        8:end_delay_wire_25 <= bank_8[addr7];
        9:end_delay_wire_25 <= bank_9[addr7];
        10:end_delay_wire_25 <= bank_10[addr7];
        11:end_delay_wire_25 <= bank_11[addr7];
        12:end_delay_wire_25 <= bank_12[addr7];
        13:end_delay_wire_25 <= bank_13[addr7];
        14:end_delay_wire_25 <= bank_14[addr7];
        15:end_delay_wire_25 <= bank_15[addr7];
        16:end_delay_wire_25 <= bank_16[addr7];
        17:end_delay_wire_25 <= bank_17[addr7];
        18:end_delay_wire_25 <= bank_18[addr7];
        19:end_delay_wire_25 <= bank_19[addr7];
        20:end_delay_wire_25 <= bank_20[addr7];
        21:end_delay_wire_25 <= bank_21[addr7];
        22:end_delay_wire_25 <= bank_22[addr7];
        23:end_delay_wire_25 <= bank_23[addr7];
        24:end_delay_wire_25 <= bank_24[addr7];
        25:end_delay_wire_25 <= bank_25[addr7];
        26:end_delay_wire_25 <= bank_26[addr7];
        27:end_delay_wire_25 <= bank_27[addr7];
        28:end_delay_wire_25 <= bank_28[addr7];
        29:end_delay_wire_25 <= bank_29[addr7];
        30:end_delay_wire_25 <= bank_30[addr7];
        31:end_delay_wire_25 <= bank_31[addr7];
        32:end_delay_wire_25 <= bank_32[addr7];
        33:end_delay_wire_25 <= bank_33[addr7];
        34:end_delay_wire_25 <= bank_34[addr7];
        35:end_delay_wire_25 <= bank_35[addr7];
        36:end_delay_wire_25 <= bank_36[addr7];
        37:end_delay_wire_25 <= bank_37[addr7];
        38:end_delay_wire_25 <= bank_38[addr7];
        39:end_delay_wire_25 <= bank_39[addr7];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_bank_selector.out)
        0:end_delay_wire_26 <= bank_0[addr8];
        1:end_delay_wire_26 <= bank_1[addr8];
        2:end_delay_wire_26 <= bank_2[addr8];
        3:end_delay_wire_26 <= bank_3[addr8];
        4:end_delay_wire_26 <= bank_4[addr8];
        5:end_delay_wire_26 <= bank_5[addr8];
        6:end_delay_wire_26 <= bank_6[addr8];
        7:end_delay_wire_26 <= bank_7[addr8];
        8:end_delay_wire_26 <= bank_8[addr8];
        9:end_delay_wire_26 <= bank_9[addr8];
        10:end_delay_wire_26 <= bank_10[addr8];
        11:end_delay_wire_26 <= bank_11[addr8];
        12:end_delay_wire_26 <= bank_12[addr8];
        13:end_delay_wire_26 <= bank_13[addr8];
        14:end_delay_wire_26 <= bank_14[addr8];
        15:end_delay_wire_26 <= bank_15[addr8];
        16:end_delay_wire_26 <= bank_16[addr8];
        17:end_delay_wire_26 <= bank_17[addr8];
        18:end_delay_wire_26 <= bank_18[addr8];
        19:end_delay_wire_26 <= bank_19[addr8];
        20:end_delay_wire_26 <= bank_20[addr8];
        21:end_delay_wire_26 <= bank_21[addr8];
        22:end_delay_wire_26 <= bank_22[addr8];
        23:end_delay_wire_26 <= bank_23[addr8];
        24:end_delay_wire_26 <= bank_24[addr8];
        25:end_delay_wire_26 <= bank_25[addr8];
        26:end_delay_wire_26 <= bank_26[addr8];
        27:end_delay_wire_26 <= bank_27[addr8];
        28:end_delay_wire_26 <= bank_28[addr8];
        29:end_delay_wire_26 <= bank_29[addr8];
        30:end_delay_wire_26 <= bank_30[addr8];
        31:end_delay_wire_26 <= bank_31[addr8];
        32:end_delay_wire_26 <= bank_32[addr8];
        33:end_delay_wire_26 <= bank_33[addr8];
        34:end_delay_wire_26 <= bank_34[addr8];
        35:end_delay_wire_26 <= bank_35[addr8];
        36:end_delay_wire_26 <= bank_36[addr8];
        37:end_delay_wire_26 <= bank_37[addr8];
        38:end_delay_wire_26 <= bank_38[addr8];
        39:end_delay_wire_26 <= bank_39[addr8];
      endcase
    end
    if (op_hcompute_hw_output_stencil_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_bank_selector.out)
        0:end_delay_wire_27 <= bank_0[addr9];
        1:end_delay_wire_27 <= bank_1[addr9];
        2:end_delay_wire_27 <= bank_2[addr9];
        3:end_delay_wire_27 <= bank_3[addr9];
        4:end_delay_wire_27 <= bank_4[addr9];
        5:end_delay_wire_27 <= bank_5[addr9];
        6:end_delay_wire_27 <= bank_6[addr9];
        7:end_delay_wire_27 <= bank_7[addr9];
        8:end_delay_wire_27 <= bank_8[addr9];
        9:end_delay_wire_27 <= bank_9[addr9];
        10:end_delay_wire_27 <= bank_10[addr9];
        11:end_delay_wire_27 <= bank_11[addr9];
        12:end_delay_wire_27 <= bank_12[addr9];
        13:end_delay_wire_27 <= bank_13[addr9];
        14:end_delay_wire_27 <= bank_14[addr9];
        15:end_delay_wire_27 <= bank_15[addr9];
        16:end_delay_wire_27 <= bank_16[addr9];
        17:end_delay_wire_27 <= bank_17[addr9];
        18:end_delay_wire_27 <= bank_18[addr9];
        19:end_delay_wire_27 <= bank_19[addr9];
        20:end_delay_wire_27 <= bank_20[addr9];
        21:end_delay_wire_27 <= bank_21[addr9];
        22:end_delay_wire_27 <= bank_22[addr9];
        23:end_delay_wire_27 <= bank_23[addr9];
        24:end_delay_wire_27 <= bank_24[addr9];
        25:end_delay_wire_27 <= bank_25[addr9];
        26:end_delay_wire_27 <= bank_26[addr9];
        27:end_delay_wire_27 <= bank_27[addr9];
        28:end_delay_wire_27 <= bank_28[addr9];
        29:end_delay_wire_27 <= bank_29[addr9];
        30:end_delay_wire_27 <= bank_30[addr9];
        31:end_delay_wire_27 <= bank_31[addr9];
        32:end_delay_wire_27 <= bank_32[addr9];
        33:end_delay_wire_27 <= bank_33[addr9];
        34:end_delay_wire_27 <= bank_34[addr9];
        35:end_delay_wire_27 <= bank_35[addr9];
        36:end_delay_wire_27 <= bank_36[addr9];
        37:end_delay_wire_27 <= bank_37[addr9];
        38:end_delay_wire_27 <= bank_38[addr9];
        39:end_delay_wire_27 <= bank_39[addr9];
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
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [37:0];

  reg [5:0] read_addr;
  reg [5:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 37;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 37 ? 0 : read_addr + 1;
      write_addr <= write_addr == 37 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [37:0];

  reg [5:0] read_addr;
  reg [5:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 37;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 37 ? 0 : read_addr + 1;
      write_addr <= write_addr == 37 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [37:0];

  reg [5:0] read_addr;
  reg [5:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 37;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 37 ? 0 : read_addr + 1;
      write_addr <= write_addr == 37 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [37:0];

  reg [5:0] read_addr;
  reg [5:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 37;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 37 ? 0 : read_addr + 1;
      write_addr <= write_addr == 37 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [37:0];

  reg [5:0] read_addr;
  reg [5:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 37;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 37 ? 0 : read_addr + 1;
      write_addr <= write_addr == 37 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [37:0];

  reg [5:0] read_addr;
  reg [5:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 37;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 37 ? 0 : read_addr + 1;
      write_addr <= write_addr == 37 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [37:0];

  reg [5:0] read_addr;
  reg [5:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 37;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 37 ? 0 : read_addr + 1;
      write_addr <= write_addr == 37 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [37:0];

  reg [5:0] read_addr;
  reg [5:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 37;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 37 ? 0 : read_addr + 1;
      write_addr <= write_addr == 37 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [18:0];

  reg [4:0] read_addr;
  reg [4:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 18;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 18 ? 0 : read_addr + 1;
      write_addr <= write_addr == 18 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8028 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8027) begin
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8047 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8046) begin
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
  logic [15:0] delay_wire_28;
  always @(posedge clk) begin
    delay_wire_28 <= addr0;  end
  logic [15:0] delay_wire_29;
  always @(posedge clk) begin
    delay_wire_29 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out;  end
  logic [15:0] delay_wire_30;
  always @(posedge clk) begin
    delay_wire_30 <= op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out;  end
  logic [15:0] delay_wire_31;
  always @(posedge clk) begin
    delay_wire_31 <= op_hcompute_hw_input_global_wrapper_stencil_write[0];  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((0 - 0)>>3)*900);
  logic [15:0] end_delay_wire_32;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[0] <= end_delay_wire_32;  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((1)) - 0)>>3)*900);
  logic [15:0] end_delay_wire_33;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[1] <= end_delay_wire_33;  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((2)) - 0)>>3)*900);
  logic [15:0] end_delay_wire_34;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[2] <= end_delay_wire_34;  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((3)) - 0)>>3)*900);
  logic [15:0] end_delay_wire_35;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[3] <= end_delay_wire_35;  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((4)) - 0)>>3)*900);
  logic [15:0] end_delay_wire_36;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[4] <= end_delay_wire_36;  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((5)) - 0)>>3)*900);
  logic [15:0] end_delay_wire_37;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[5] <= end_delay_wire_37;  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((7)) - 0)>>3)*900);
  logic [15:0] end_delay_wire_38;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[6] <= end_delay_wire_38;  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((6)) - 0)>>3)*900);
  logic [15:0] end_delay_wire_39;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[7] <= end_delay_wire_39;  end
  always @(posedge clk) begin
    if (delay_wire_30) begin
      case( delay_wire_29)
        0:bank_0[delay_wire_28] <= delay_wire_31;
        1:bank_1[delay_wire_28] <= delay_wire_31;
        2:bank_2[delay_wire_28] <= delay_wire_31;
        3:bank_3[delay_wire_28] <= delay_wire_31;
        4:bank_4[delay_wire_28] <= delay_wire_31;
        5:bank_5[delay_wire_28] <= delay_wire_31;
        6:bank_6[delay_wire_28] <= delay_wire_31;
        7:bank_7[delay_wire_28] <= delay_wire_31;
      endcase
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_bank_selector.out)
        0:end_delay_wire_32 <= bank_0[addr1];
        1:end_delay_wire_32 <= bank_1[addr1];
        2:end_delay_wire_32 <= bank_2[addr1];
        3:end_delay_wire_32 <= bank_3[addr1];
        4:end_delay_wire_32 <= bank_4[addr1];
        5:end_delay_wire_32 <= bank_5[addr1];
        6:end_delay_wire_32 <= bank_6[addr1];
        7:end_delay_wire_32 <= bank_7[addr1];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_bank_selector.out)
        0:end_delay_wire_33 <= bank_0[addr2];
        1:end_delay_wire_33 <= bank_1[addr2];
        2:end_delay_wire_33 <= bank_2[addr2];
        3:end_delay_wire_33 <= bank_3[addr2];
        4:end_delay_wire_33 <= bank_4[addr2];
        5:end_delay_wire_33 <= bank_5[addr2];
        6:end_delay_wire_33 <= bank_6[addr2];
        7:end_delay_wire_33 <= bank_7[addr2];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_bank_selector.out)
        0:end_delay_wire_34 <= bank_0[addr3];
        1:end_delay_wire_34 <= bank_1[addr3];
        2:end_delay_wire_34 <= bank_2[addr3];
        3:end_delay_wire_34 <= bank_3[addr3];
        4:end_delay_wire_34 <= bank_4[addr3];
        5:end_delay_wire_34 <= bank_5[addr3];
        6:end_delay_wire_34 <= bank_6[addr3];
        7:end_delay_wire_34 <= bank_7[addr3];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_bank_selector.out)
        0:end_delay_wire_35 <= bank_0[addr4];
        1:end_delay_wire_35 <= bank_1[addr4];
        2:end_delay_wire_35 <= bank_2[addr4];
        3:end_delay_wire_35 <= bank_3[addr4];
        4:end_delay_wire_35 <= bank_4[addr4];
        5:end_delay_wire_35 <= bank_5[addr4];
        6:end_delay_wire_35 <= bank_6[addr4];
        7:end_delay_wire_35 <= bank_7[addr4];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_bank_selector.out)
        0:end_delay_wire_36 <= bank_0[addr5];
        1:end_delay_wire_36 <= bank_1[addr5];
        2:end_delay_wire_36 <= bank_2[addr5];
        3:end_delay_wire_36 <= bank_3[addr5];
        4:end_delay_wire_36 <= bank_4[addr5];
        5:end_delay_wire_36 <= bank_5[addr5];
        6:end_delay_wire_36 <= bank_6[addr5];
        7:end_delay_wire_36 <= bank_7[addr5];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_bank_selector.out)
        0:end_delay_wire_37 <= bank_0[addr6];
        1:end_delay_wire_37 <= bank_1[addr6];
        2:end_delay_wire_37 <= bank_2[addr6];
        3:end_delay_wire_37 <= bank_3[addr6];
        4:end_delay_wire_37 <= bank_4[addr6];
        5:end_delay_wire_37 <= bank_5[addr6];
        6:end_delay_wire_37 <= bank_6[addr6];
        7:end_delay_wire_37 <= bank_7[addr6];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_bank_selector.out)
        0:end_delay_wire_38 <= bank_0[addr7];
        1:end_delay_wire_38 <= bank_1[addr7];
        2:end_delay_wire_38 <= bank_2[addr7];
        3:end_delay_wire_38 <= bank_3[addr7];
        4:end_delay_wire_38 <= bank_4[addr7];
        5:end_delay_wire_38 <= bank_5[addr7];
        6:end_delay_wire_38 <= bank_6[addr7];
        7:end_delay_wire_38 <= bank_7[addr7];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_bank_selector.out)
        0:end_delay_wire_39 <= bank_0[addr8];
        1:end_delay_wire_39 <= bank_1[addr8];
        2:end_delay_wire_39 <= bank_2[addr8];
        3:end_delay_wire_39 <= bank_3[addr8];
        4:end_delay_wire_39 <= bank_4[addr8];
        5:end_delay_wire_39 <= bank_5[addr8];
        6:end_delay_wire_39 <= bank_6[addr8];
        7:end_delay_wire_39 <= bank_7[addr8];
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8028 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8027) begin
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8047 + 7056conv_s1_r_y + 2352conv_s1_r_x + 84conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==8046) begin
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
        if(counter[1] == 7055) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2351) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 83) begin
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
  logic [15:0] delay_wire_40;
  always @(posedge clk) begin
    delay_wire_40 <= addr0;  end
  logic [15:0] delay_wire_41;
  always @(posedge clk) begin
    delay_wire_41 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_bank_selector.out;  end
  logic [15:0] delay_wire_42;
  always @(posedge clk) begin
    delay_wire_42 <= op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out;  end
  logic [15:0] delay_wire_43;
  always @(posedge clk) begin
    delay_wire_43 <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((0 - 0)>>3)*27);
  logic [15:0] end_delay_wire_44;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[0] <= end_delay_wire_44;  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((1)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_45;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[1] <= end_delay_wire_45;  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((2)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_46;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[2] <= end_delay_wire_46;  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((3)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_47;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[3] <= end_delay_wire_47;  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((4)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_48;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[4] <= end_delay_wire_48;  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((5)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_49;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[5] <= end_delay_wire_49;  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((7)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_50;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[6] <= end_delay_wire_50;  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((0 - 0)>>0)*9+((((6)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_51;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[7] <= end_delay_wire_51;  end
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((1)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_52;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[0] <= end_delay_wire_52;  end
  logic [15:0] addr10;
  assign addr10 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((2)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_53;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[1] <= end_delay_wire_53;  end
  logic [15:0] addr11;
  assign addr11 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((3)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_54;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[2] <= end_delay_wire_54;  end
  logic [15:0] addr12;
  assign addr12 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((4)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_55;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[3] <= end_delay_wire_55;  end
  logic [15:0] addr13;
  assign addr13 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((5)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_56;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[4] <= end_delay_wire_56;  end
  logic [15:0] addr14;
  assign addr14 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((7)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_57;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[5] <= end_delay_wire_57;  end
  logic [15:0] addr15;
  assign addr15 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((6)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_58;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[6] <= end_delay_wire_58;  end
  logic [15:0] addr16;
  assign addr16 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((0 - 0)>>3)*27);
  logic [15:0] end_delay_wire_59;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[7] <= end_delay_wire_59;  end
  logic [15:0] addr17;
  assign addr17 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((0 - 0)>>3)*27);
  logic [15:0] end_delay_wire_60;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[0] <= end_delay_wire_60;  end
  logic [15:0] addr18;
  assign addr18 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((1)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_61;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[1] <= end_delay_wire_61;  end
  logic [15:0] addr19;
  assign addr19 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((2)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_62;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[2] <= end_delay_wire_62;  end
  logic [15:0] addr20;
  assign addr20 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((3)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_63;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[3] <= end_delay_wire_63;  end
  logic [15:0] addr21;
  assign addr21 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((4)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_64;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[4] <= end_delay_wire_64;  end
  logic [15:0] addr22;
  assign addr22 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((5)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_65;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[5] <= end_delay_wire_65;  end
  logic [15:0] addr23;
  assign addr23 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((7)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_66;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[6] <= end_delay_wire_66;  end
  logic [15:0] addr24;
  assign addr24 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((6)) - 0)>>3)*27);
  logic [15:0] end_delay_wire_67;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[7] <= end_delay_wire_67;  end
  always @(posedge clk) begin
    if (delay_wire_42) begin
      case( delay_wire_41)
        0:bank_0[delay_wire_40] <= delay_wire_43;
        1:bank_1[delay_wire_40] <= delay_wire_43;
        2:bank_2[delay_wire_40] <= delay_wire_43;
        3:bank_3[delay_wire_40] <= delay_wire_43;
        4:bank_4[delay_wire_40] <= delay_wire_43;
        5:bank_5[delay_wire_40] <= delay_wire_43;
        6:bank_6[delay_wire_40] <= delay_wire_43;
        7:bank_7[delay_wire_40] <= delay_wire_43;
      endcase
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out)
        0:end_delay_wire_44 <= bank_0[addr1];
        1:end_delay_wire_44 <= bank_1[addr1];
        2:end_delay_wire_44 <= bank_2[addr1];
        3:end_delay_wire_44 <= bank_3[addr1];
        4:end_delay_wire_44 <= bank_4[addr1];
        5:end_delay_wire_44 <= bank_5[addr1];
        6:end_delay_wire_44 <= bank_6[addr1];
        7:end_delay_wire_44 <= bank_7[addr1];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out)
        0:end_delay_wire_45 <= bank_0[addr2];
        1:end_delay_wire_45 <= bank_1[addr2];
        2:end_delay_wire_45 <= bank_2[addr2];
        3:end_delay_wire_45 <= bank_3[addr2];
        4:end_delay_wire_45 <= bank_4[addr2];
        5:end_delay_wire_45 <= bank_5[addr2];
        6:end_delay_wire_45 <= bank_6[addr2];
        7:end_delay_wire_45 <= bank_7[addr2];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out)
        0:end_delay_wire_46 <= bank_0[addr3];
        1:end_delay_wire_46 <= bank_1[addr3];
        2:end_delay_wire_46 <= bank_2[addr3];
        3:end_delay_wire_46 <= bank_3[addr3];
        4:end_delay_wire_46 <= bank_4[addr3];
        5:end_delay_wire_46 <= bank_5[addr3];
        6:end_delay_wire_46 <= bank_6[addr3];
        7:end_delay_wire_46 <= bank_7[addr3];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out)
        0:end_delay_wire_47 <= bank_0[addr4];
        1:end_delay_wire_47 <= bank_1[addr4];
        2:end_delay_wire_47 <= bank_2[addr4];
        3:end_delay_wire_47 <= bank_3[addr4];
        4:end_delay_wire_47 <= bank_4[addr4];
        5:end_delay_wire_47 <= bank_5[addr4];
        6:end_delay_wire_47 <= bank_6[addr4];
        7:end_delay_wire_47 <= bank_7[addr4];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out)
        0:end_delay_wire_48 <= bank_0[addr5];
        1:end_delay_wire_48 <= bank_1[addr5];
        2:end_delay_wire_48 <= bank_2[addr5];
        3:end_delay_wire_48 <= bank_3[addr5];
        4:end_delay_wire_48 <= bank_4[addr5];
        5:end_delay_wire_48 <= bank_5[addr5];
        6:end_delay_wire_48 <= bank_6[addr5];
        7:end_delay_wire_48 <= bank_7[addr5];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out)
        0:end_delay_wire_49 <= bank_0[addr6];
        1:end_delay_wire_49 <= bank_1[addr6];
        2:end_delay_wire_49 <= bank_2[addr6];
        3:end_delay_wire_49 <= bank_3[addr6];
        4:end_delay_wire_49 <= bank_4[addr6];
        5:end_delay_wire_49 <= bank_5[addr6];
        6:end_delay_wire_49 <= bank_6[addr6];
        7:end_delay_wire_49 <= bank_7[addr6];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out)
        0:end_delay_wire_50 <= bank_0[addr7];
        1:end_delay_wire_50 <= bank_1[addr7];
        2:end_delay_wire_50 <= bank_2[addr7];
        3:end_delay_wire_50 <= bank_3[addr7];
        4:end_delay_wire_50 <= bank_4[addr7];
        5:end_delay_wire_50 <= bank_5[addr7];
        6:end_delay_wire_50 <= bank_6[addr7];
        7:end_delay_wire_50 <= bank_7[addr7];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out)
        0:end_delay_wire_51 <= bank_0[addr8];
        1:end_delay_wire_51 <= bank_1[addr8];
        2:end_delay_wire_51 <= bank_2[addr8];
        3:end_delay_wire_51 <= bank_3[addr8];
        4:end_delay_wire_51 <= bank_4[addr8];
        5:end_delay_wire_51 <= bank_5[addr8];
        6:end_delay_wire_51 <= bank_6[addr8];
        7:end_delay_wire_51 <= bank_7[addr8];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out)
        0:end_delay_wire_52 <= bank_0[addr9];
        1:end_delay_wire_52 <= bank_1[addr9];
        2:end_delay_wire_52 <= bank_2[addr9];
        3:end_delay_wire_52 <= bank_3[addr9];
        4:end_delay_wire_52 <= bank_4[addr9];
        5:end_delay_wire_52 <= bank_5[addr9];
        6:end_delay_wire_52 <= bank_6[addr9];
        7:end_delay_wire_52 <= bank_7[addr9];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out)
        0:end_delay_wire_53 <= bank_0[addr10];
        1:end_delay_wire_53 <= bank_1[addr10];
        2:end_delay_wire_53 <= bank_2[addr10];
        3:end_delay_wire_53 <= bank_3[addr10];
        4:end_delay_wire_53 <= bank_4[addr10];
        5:end_delay_wire_53 <= bank_5[addr10];
        6:end_delay_wire_53 <= bank_6[addr10];
        7:end_delay_wire_53 <= bank_7[addr10];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out)
        0:end_delay_wire_54 <= bank_0[addr11];
        1:end_delay_wire_54 <= bank_1[addr11];
        2:end_delay_wire_54 <= bank_2[addr11];
        3:end_delay_wire_54 <= bank_3[addr11];
        4:end_delay_wire_54 <= bank_4[addr11];
        5:end_delay_wire_54 <= bank_5[addr11];
        6:end_delay_wire_54 <= bank_6[addr11];
        7:end_delay_wire_54 <= bank_7[addr11];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out)
        0:end_delay_wire_55 <= bank_0[addr12];
        1:end_delay_wire_55 <= bank_1[addr12];
        2:end_delay_wire_55 <= bank_2[addr12];
        3:end_delay_wire_55 <= bank_3[addr12];
        4:end_delay_wire_55 <= bank_4[addr12];
        5:end_delay_wire_55 <= bank_5[addr12];
        6:end_delay_wire_55 <= bank_6[addr12];
        7:end_delay_wire_55 <= bank_7[addr12];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out)
        0:end_delay_wire_56 <= bank_0[addr13];
        1:end_delay_wire_56 <= bank_1[addr13];
        2:end_delay_wire_56 <= bank_2[addr13];
        3:end_delay_wire_56 <= bank_3[addr13];
        4:end_delay_wire_56 <= bank_4[addr13];
        5:end_delay_wire_56 <= bank_5[addr13];
        6:end_delay_wire_56 <= bank_6[addr13];
        7:end_delay_wire_56 <= bank_7[addr13];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out)
        0:end_delay_wire_57 <= bank_0[addr14];
        1:end_delay_wire_57 <= bank_1[addr14];
        2:end_delay_wire_57 <= bank_2[addr14];
        3:end_delay_wire_57 <= bank_3[addr14];
        4:end_delay_wire_57 <= bank_4[addr14];
        5:end_delay_wire_57 <= bank_5[addr14];
        6:end_delay_wire_57 <= bank_6[addr14];
        7:end_delay_wire_57 <= bank_7[addr14];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out)
        0:end_delay_wire_58 <= bank_0[addr15];
        1:end_delay_wire_58 <= bank_1[addr15];
        2:end_delay_wire_58 <= bank_2[addr15];
        3:end_delay_wire_58 <= bank_3[addr15];
        4:end_delay_wire_58 <= bank_4[addr15];
        5:end_delay_wire_58 <= bank_5[addr15];
        6:end_delay_wire_58 <= bank_6[addr15];
        7:end_delay_wire_58 <= bank_7[addr15];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out)
        0:end_delay_wire_59 <= bank_0[addr16];
        1:end_delay_wire_59 <= bank_1[addr16];
        2:end_delay_wire_59 <= bank_2[addr16];
        3:end_delay_wire_59 <= bank_3[addr16];
        4:end_delay_wire_59 <= bank_4[addr16];
        5:end_delay_wire_59 <= bank_5[addr16];
        6:end_delay_wire_59 <= bank_6[addr16];
        7:end_delay_wire_59 <= bank_7[addr16];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out)
        0:end_delay_wire_60 <= bank_0[addr17];
        1:end_delay_wire_60 <= bank_1[addr17];
        2:end_delay_wire_60 <= bank_2[addr17];
        3:end_delay_wire_60 <= bank_3[addr17];
        4:end_delay_wire_60 <= bank_4[addr17];
        5:end_delay_wire_60 <= bank_5[addr17];
        6:end_delay_wire_60 <= bank_6[addr17];
        7:end_delay_wire_60 <= bank_7[addr17];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out)
        0:end_delay_wire_61 <= bank_0[addr18];
        1:end_delay_wire_61 <= bank_1[addr18];
        2:end_delay_wire_61 <= bank_2[addr18];
        3:end_delay_wire_61 <= bank_3[addr18];
        4:end_delay_wire_61 <= bank_4[addr18];
        5:end_delay_wire_61 <= bank_5[addr18];
        6:end_delay_wire_61 <= bank_6[addr18];
        7:end_delay_wire_61 <= bank_7[addr18];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out)
        0:end_delay_wire_62 <= bank_0[addr19];
        1:end_delay_wire_62 <= bank_1[addr19];
        2:end_delay_wire_62 <= bank_2[addr19];
        3:end_delay_wire_62 <= bank_3[addr19];
        4:end_delay_wire_62 <= bank_4[addr19];
        5:end_delay_wire_62 <= bank_5[addr19];
        6:end_delay_wire_62 <= bank_6[addr19];
        7:end_delay_wire_62 <= bank_7[addr19];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out)
        0:end_delay_wire_63 <= bank_0[addr20];
        1:end_delay_wire_63 <= bank_1[addr20];
        2:end_delay_wire_63 <= bank_2[addr20];
        3:end_delay_wire_63 <= bank_3[addr20];
        4:end_delay_wire_63 <= bank_4[addr20];
        5:end_delay_wire_63 <= bank_5[addr20];
        6:end_delay_wire_63 <= bank_6[addr20];
        7:end_delay_wire_63 <= bank_7[addr20];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out)
        0:end_delay_wire_64 <= bank_0[addr21];
        1:end_delay_wire_64 <= bank_1[addr21];
        2:end_delay_wire_64 <= bank_2[addr21];
        3:end_delay_wire_64 <= bank_3[addr21];
        4:end_delay_wire_64 <= bank_4[addr21];
        5:end_delay_wire_64 <= bank_5[addr21];
        6:end_delay_wire_64 <= bank_6[addr21];
        7:end_delay_wire_64 <= bank_7[addr21];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out)
        0:end_delay_wire_65 <= bank_0[addr22];
        1:end_delay_wire_65 <= bank_1[addr22];
        2:end_delay_wire_65 <= bank_2[addr22];
        3:end_delay_wire_65 <= bank_3[addr22];
        4:end_delay_wire_65 <= bank_4[addr22];
        5:end_delay_wire_65 <= bank_5[addr22];
        6:end_delay_wire_65 <= bank_6[addr22];
        7:end_delay_wire_65 <= bank_7[addr22];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out)
        0:end_delay_wire_66 <= bank_0[addr23];
        1:end_delay_wire_66 <= bank_1[addr23];
        2:end_delay_wire_66 <= bank_2[addr23];
        3:end_delay_wire_66 <= bank_3[addr23];
        4:end_delay_wire_66 <= bank_4[addr23];
        5:end_delay_wire_66 <= bank_5[addr23];
        6:end_delay_wire_66 <= bank_6[addr23];
        7:end_delay_wire_66 <= bank_7[addr23];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out)
        0:end_delay_wire_67 <= bank_0[addr24];
        1:end_delay_wire_67 <= bank_1[addr24];
        2:end_delay_wire_67 <= bank_2[addr24];
        3:end_delay_wire_67 <= bank_3[addr24];
        4:end_delay_wire_67 <= bank_4[addr24];
        5:end_delay_wire_67 <= bank_5[addr24];
        6:end_delay_wire_67 <= bank_6[addr24];
        7:end_delay_wire_67 <= bank_7[addr24];
      endcase
    end
  end

endmodule

