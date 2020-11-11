// { op_hcompute_hw_input_global_wrapper_stencil[root, gb_tile, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(1 + 7560gb_tile + 240hw_input_global_wrapper_s0_y + 8hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module affine_controller__U0(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=3 && d[2]<=29 && d[3]<=29 && d[4]<=7);
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
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 239) begin
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
// { op_hcompute_hw_kernel_global_wrapper_stencil[root, gb_tile, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(2 + 7560gb_tile + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module affine_controller__U7(input clk, input flush, input rst_n, output logic [15:0] d[5:0], output valid );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign valid =(on && on2 && d[0]==0 && d[1]<=3 && d[2]<=2 && d[3]<=2 && d[4]<=2 && d[5]<=7);
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
      d[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
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
        d[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[5]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 71) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[5]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          d[4]<= 0;
          d[5]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          d[5]<= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          d[5] <= d[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil[root, gb_tile, conv_s0_y, conv_s0_x] -> [(2 + 7560gb_tile + 30conv_s0_y + conv_s0_x)] }
module affine_controller__U14(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=3 && d[2]<=27 && d[3]<=27);
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
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 29) begin
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
// { op_hcompute_conv_stencil_1[root, gb_tile, conv_s0_y, conv_s0_x] -> [(3 + 7560gb_tile + 30conv_s0_y + conv_s0_x)] }
module affine_controller__U21(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=3 && d[2]<=27 && d[3]<=27);
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
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 29) begin
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
// { op_hcompute_conv_stencil_2[root, gb_tile, conv_s0_y, conv_s0_x] -> [(4 + 7560gb_tile + 30conv_s0_y + conv_s0_x)] }
module affine_controller__U28(input clk, input flush, input rst_n, output logic [15:0] d[3:0], output valid );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign valid =(on && on2 && d[0]==0 && d[1]<=3 && d[2]<=27 && d[3]<=27);
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
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 29) begin
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
// { op_hcompute_conv_stencil_3[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module affine_controller__U35(input clk, input flush, input rst_n, output logic [15:0] d[5:0], output valid );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign valid =(on && on2 && d[0]==0 && d[1]<=3 && d[2]<=2 && d[3]<=2 && d[4]<=27 && d[5]<=27);
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
      d[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
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
        d[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[5]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[5]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          d[4]<= 0;
          d[5]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          d[5]<= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          d[5] <= d[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8010 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module affine_controller__U42(input clk, input flush, input rst_n, output logic [15:0] d[5:0], output valid );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign valid =(on && on2 && d[0]==0 && d[1]<=3 && d[2]<=2 && d[3]<=2 && d[4]<=27 && d[5]<=27);
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
      d[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
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
        d[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[5]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[5]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          d[4]<= 0;
          d[5]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          d[5]<= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          d[5] <= d[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8011 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module affine_controller__U49(input clk, input flush, input rst_n, output logic [15:0] d[5:0], output valid );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign valid =(on && on2 && d[0]==0 && d[1]<=3 && d[2]<=2 && d[3]<=2 && d[4]<=27 && d[5]<=27);
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
      d[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
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
        d[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[5]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[5]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          d[4]<= 0;
          d[5]<= 0;
          d[3] <= d[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          d[5]<= 0;
          d[4] <= d[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          d[5] <= d[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_hw_output_stencil[root, gb_tile, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(16017 + 7560gb_tile + 784hw_output_s0_w + 28hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module affine_controller__U56(input clk, input flush, input rst_n, output logic [15:0] d[4:0], output valid );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign valid =(on && on2 && d[0]==0 && d[1]<=3 && d[2]<=2 && d[3]<=27 && d[4]<=27);
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
        d[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          d[2]<= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 783) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          d[3]<= 0;
          d[4]<= 0;
          d[2] <= d[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 27) begin
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

module conv_stencil_bank_selector(input logic [16*4 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 3);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32] % 1);
  logic [15:0] bank_index_3;
  assign bank_index_3 = (d[63:48] % 2);
  assign out = bank_index_0*1+bank_index_1*3+bank_index_2*3+bank_index_3*3;

endmodule

// { op_hcompute_conv_stencil_1[root, gb_tile, conv_s0_y, conv_s0_x] -> [(3 + 7560gb_tile + 30conv_s0_y + conv_s0_x)] }
module conv_stencil_op_hcompute_conv_stencil_1_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_1_write_ctrl_vars[3:0], output op_hcompute_conv_stencil_1_write_wen );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign op_hcompute_conv_stencil_1_write_wen =(on && on2 && op_hcompute_conv_stencil_1_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_1_write_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_1_write_ctrl_vars[2]<=27 && op_hcompute_conv_stencil_1_write_ctrl_vars[3]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_1_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_1_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_1_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_1_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
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
        op_hcompute_conv_stencil_1_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          op_hcompute_conv_stencil_1_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_1_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_1_write_ctrl_vars[1] <= op_hcompute_conv_stencil_1_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          op_hcompute_conv_stencil_1_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_1_write_ctrl_vars[2] <= op_hcompute_conv_stencil_1_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          op_hcompute_conv_stencil_1_write_ctrl_vars[3] <= op_hcompute_conv_stencil_1_write_ctrl_vars[3] + 1;
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
// { op_hcompute_conv_stencil_2[root, gb_tile, conv_s0_y, conv_s0_x] -> [(4 + 7560gb_tile + 30conv_s0_y + conv_s0_x)] }
module conv_stencil_op_hcompute_conv_stencil_2_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_2_write_ctrl_vars[3:0], output op_hcompute_conv_stencil_2_write_wen );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign op_hcompute_conv_stencil_2_write_wen =(on && on2 && op_hcompute_conv_stencil_2_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_2_write_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_2_write_ctrl_vars[2]<=27 && op_hcompute_conv_stencil_2_write_ctrl_vars[3]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_2_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_2_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_2_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_2_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
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
        op_hcompute_conv_stencil_2_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          op_hcompute_conv_stencil_2_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_2_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_2_write_ctrl_vars[1] <= op_hcompute_conv_stencil_2_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          op_hcompute_conv_stencil_2_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_2_write_ctrl_vars[2] <= op_hcompute_conv_stencil_2_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          op_hcompute_conv_stencil_2_write_ctrl_vars[3] <= op_hcompute_conv_stencil_2_write_ctrl_vars[3] + 1;
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
// { op_hcompute_conv_stencil_3[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_3_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_3_write_ctrl_vars[5:0], output op_hcompute_conv_stencil_3_write_wen );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign op_hcompute_conv_stencil_3_write_wen =(on && on2 && op_hcompute_conv_stencil_3_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_3_write_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_3_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_3_write_ctrl_vars[3]<=2 && op_hcompute_conv_stencil_3_write_ctrl_vars[4]<=27 && op_hcompute_conv_stencil_3_write_ctrl_vars[5]<=27);
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
      op_hcompute_conv_stencil_3_write_ctrl_vars[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8008) begin
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
        op_hcompute_conv_stencil_3_write_ctrl_vars[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[1] <= op_hcompute_conv_stencil_3_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[2] <= op_hcompute_conv_stencil_3_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[3] <= op_hcompute_conv_stencil_3_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4] <= op_hcompute_conv_stencil_3_write_ctrl_vars[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[5] <= op_hcompute_conv_stencil_3_write_ctrl_vars[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8010 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_4_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_4_write_ctrl_vars[5:0], output op_hcompute_conv_stencil_4_write_wen );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign op_hcompute_conv_stencil_4_write_wen =(on && on2 && op_hcompute_conv_stencil_4_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_4_write_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_4_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_4_write_ctrl_vars[3]<=2 && op_hcompute_conv_stencil_4_write_ctrl_vars[4]<=27 && op_hcompute_conv_stencil_4_write_ctrl_vars[5]<=27);
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
      op_hcompute_conv_stencil_4_write_ctrl_vars[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8009) begin
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
        op_hcompute_conv_stencil_4_write_ctrl_vars[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[1] <= op_hcompute_conv_stencil_4_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[2] <= op_hcompute_conv_stencil_4_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[3] <= op_hcompute_conv_stencil_4_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4] <= op_hcompute_conv_stencil_4_write_ctrl_vars[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[5] <= op_hcompute_conv_stencil_4_write_ctrl_vars[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8011 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_5_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_5_write_ctrl_vars[5:0], output op_hcompute_conv_stencil_5_write_wen );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign op_hcompute_conv_stencil_5_write_wen =(on && on2 && op_hcompute_conv_stencil_5_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_5_write_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_5_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_5_write_ctrl_vars[3]<=2 && op_hcompute_conv_stencil_5_write_ctrl_vars[4]<=27 && op_hcompute_conv_stencil_5_write_ctrl_vars[5]<=27);
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
      op_hcompute_conv_stencil_5_write_ctrl_vars[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8010) begin
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
        op_hcompute_conv_stencil_5_write_ctrl_vars[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[1] <= op_hcompute_conv_stencil_5_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[2] <= op_hcompute_conv_stencil_5_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[3] <= op_hcompute_conv_stencil_5_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4] <= op_hcompute_conv_stencil_5_write_ctrl_vars[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[5] <= op_hcompute_conv_stencil_5_write_ctrl_vars[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil[root, gb_tile, conv_s0_y, conv_s0_x] -> [(2 + 7560gb_tile + 30conv_s0_y + conv_s0_x)] }
module conv_stencil_op_hcompute_conv_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_write_ctrl_vars[3:0], output op_hcompute_conv_stencil_write_wen );
  logic [15:0] counter[4:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 4;
  assign op_hcompute_conv_stencil_write_wen =(on && on2 && op_hcompute_conv_stencil_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_write_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_write_ctrl_vars[2]<=27 && op_hcompute_conv_stencil_write_ctrl_vars[3]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
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
        op_hcompute_conv_stencil_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          op_hcompute_conv_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_write_ctrl_vars[1] <= op_hcompute_conv_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          op_hcompute_conv_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_write_ctrl_vars[2] <= op_hcompute_conv_stencil_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          op_hcompute_conv_stencil_write_ctrl_vars[3] <= op_hcompute_conv_stencil_write_ctrl_vars[3] + 1;
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
// { op_hcompute_conv_stencil_3[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_3_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_3_read_ctrl_vars[5:0], output op_hcompute_conv_stencil_3_read_ren );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign op_hcompute_conv_stencil_3_read_ren =(on && on2 && op_hcompute_conv_stencil_3_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_3_read_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_3_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_3_read_ctrl_vars[3]<=2 && op_hcompute_conv_stencil_3_read_ctrl_vars[4]<=27 && op_hcompute_conv_stencil_3_read_ctrl_vars[5]<=27);
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
      op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
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
        op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3] <= op_hcompute_conv_stencil_3_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4] <= op_hcompute_conv_stencil_3_read_ctrl_vars[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5] <= op_hcompute_conv_stencil_3_read_ctrl_vars[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8010 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_4_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars[5:0], output op_hcompute_conv_stencil_4_read_ren );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign op_hcompute_conv_stencil_4_read_ren =(on && on2 && op_hcompute_conv_stencil_4_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_4_read_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_4_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_4_read_ctrl_vars[3]<=2 && op_hcompute_conv_stencil_4_read_ctrl_vars[4]<=27 && op_hcompute_conv_stencil_4_read_ctrl_vars[5]<=27);
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
      op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8009) begin
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
        op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3] <= op_hcompute_conv_stencil_4_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4] <= op_hcompute_conv_stencil_4_read_ctrl_vars[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5] <= op_hcompute_conv_stencil_4_read_ctrl_vars[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8011 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_5_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars[5:0], output op_hcompute_conv_stencil_5_read_ren );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign op_hcompute_conv_stencil_5_read_ren =(on && on2 && op_hcompute_conv_stencil_5_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_5_read_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_5_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_5_read_ctrl_vars[3]<=2 && op_hcompute_conv_stencil_5_read_ctrl_vars[4]<=27 && op_hcompute_conv_stencil_5_read_ctrl_vars[5]<=27);
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
      op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8010) begin
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
        op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3] <= op_hcompute_conv_stencil_5_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4] <= op_hcompute_conv_stencil_5_read_ctrl_vars[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5] <= op_hcompute_conv_stencil_5_read_ctrl_vars[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_hw_output_stencil[root, gb_tile, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(16017 + 7560gb_tile + 784hw_output_s0_w + 28hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module conv_stencil_op_hcompute_hw_output_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars[4:0], output op_hcompute_hw_output_stencil_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_hw_output_stencil_read_ren =(on && on2 && op_hcompute_hw_output_stencil_read_ctrl_vars[0]==0 && op_hcompute_hw_output_stencil_read_ctrl_vars[1]<=3 && op_hcompute_hw_output_stencil_read_ctrl_vars[2]<=2 && op_hcompute_hw_output_stencil_read_ctrl_vars[3]<=27 && op_hcompute_hw_output_stencil_read_ctrl_vars[4]<=27);
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
      op_hcompute_hw_output_stencil_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
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
        op_hcompute_hw_output_stencil_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[3]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[4]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[1] <= op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 783) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[3]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[4]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[2] <= op_hcompute_hw_output_stencil_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 27) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[4]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[3] <= op_hcompute_hw_output_stencil_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[4] <= op_hcompute_hw_output_stencil_read_ctrl_vars[4] + 1;
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
module conv_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_conv_stencil_1_write_wen,
	input [15:0] op_hcompute_conv_stencil_1_write_ctrl_vars [3:0] ,
	input logic [15:0] op_hcompute_conv_stencil_1_write [0:0] ,
	input op_hcompute_conv_stencil_2_write_wen,
	input [15:0] op_hcompute_conv_stencil_2_write_ctrl_vars [3:0] ,
	input logic [15:0] op_hcompute_conv_stencil_2_write [0:0] ,
	input op_hcompute_conv_stencil_3_read_ren,
	input [15:0] op_hcompute_conv_stencil_3_read_ctrl_vars [5:0] ,
	output logic [15:0] op_hcompute_conv_stencil_3_read [0:0] ,
	input op_hcompute_conv_stencil_3_write_wen,
	input [15:0] op_hcompute_conv_stencil_3_write_ctrl_vars [5:0] ,
	input logic [15:0] op_hcompute_conv_stencil_3_write [0:0] ,
	input op_hcompute_conv_stencil_4_read_ren,
	input [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars [5:0] ,
	output logic [15:0] op_hcompute_conv_stencil_4_read [0:0] ,
	input op_hcompute_conv_stencil_4_write_wen,
	input [15:0] op_hcompute_conv_stencil_4_write_ctrl_vars [5:0] ,
	input logic [15:0] op_hcompute_conv_stencil_4_write [0:0] ,
	input op_hcompute_conv_stencil_5_read_ren,
	input [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars [5:0] ,
	output logic [15:0] op_hcompute_conv_stencil_5_read [0:0] ,
	input op_hcompute_conv_stencil_5_write_wen,
	input [15:0] op_hcompute_conv_stencil_5_write_ctrl_vars [5:0] ,
	input logic [15:0] op_hcompute_conv_stencil_5_write [0:0] ,
	input op_hcompute_conv_stencil_write_wen,
	input [15:0] op_hcompute_conv_stencil_write_ctrl_vars [3:0] ,
	input logic [15:0] op_hcompute_conv_stencil_write [0:0] ,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] );


  // Storage capacity pre-banking: 9408
  logic [15:0]op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[3:0];
  logic op_hcompute_conv_stencil_1_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_1_write_fsm conv_stencil_op_hcompute_conv_stencil_1_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_1_write_ctrl_vars( op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_1_write_wen(op_hcompute_conv_stencil_1_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[3:0];
  logic op_hcompute_conv_stencil_2_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_2_write_fsm conv_stencil_op_hcompute_conv_stencil_2_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_2_write_ctrl_vars( op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_2_write_wen(op_hcompute_conv_stencil_2_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[5:0];
  logic op_hcompute_conv_stencil_3_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_3_write_fsm conv_stencil_op_hcompute_conv_stencil_3_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_3_write_ctrl_vars( op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_3_write_wen(op_hcompute_conv_stencil_3_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[5:0];
  logic op_hcompute_conv_stencil_4_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_4_write_fsm conv_stencil_op_hcompute_conv_stencil_4_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_4_write_ctrl_vars( op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_4_write_wen(op_hcompute_conv_stencil_4_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[5:0];
  logic op_hcompute_conv_stencil_5_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_5_write_fsm conv_stencil_op_hcompute_conv_stencil_5_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_5_write_ctrl_vars( op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_5_write_wen(op_hcompute_conv_stencil_5_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[3:0];
  logic op_hcompute_conv_stencil_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_write_fsm conv_stencil_op_hcompute_conv_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_write_ctrl_vars( op_hcompute_conv_stencil_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_write_wen(op_hcompute_conv_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5:0];
  logic op_hcompute_conv_stencil_3_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_3_read_fsm conv_stencil_op_hcompute_conv_stencil_3_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_3_read_ctrl_vars( op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_3_read_ren(op_hcompute_conv_stencil_3_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[5:0];
  logic op_hcompute_conv_stencil_4_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_4_read_fsm conv_stencil_op_hcompute_conv_stencil_4_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_4_read_ctrl_vars( op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_4_read_ren(op_hcompute_conv_stencil_4_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[5:0];
  logic op_hcompute_conv_stencil_5_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_5_read_fsm conv_stencil_op_hcompute_conv_stencil_5_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_5_read_ctrl_vars( op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_5_read_ren(op_hcompute_conv_stencil_5_read_ren_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_hw_output_stencil_read_ren_fsm_out;
  conv_stencil_op_hcompute_hw_output_stencil_read_fsm conv_stencil_op_hcompute_hw_output_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_read_ctrl_vars( op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_read_ren(op_hcompute_hw_output_stencil_read_ren_fsm_out));
  // # of banks: 6
  logic [15:0] bank_0 [1568];
  logic [15:0] bank_1 [1568];
  logic [15:0] bank_2 [1568];
  logic [15:0] bank_3 [1568];
  logic [15:0] bank_4 [1568];
  logic [15:0] bank_5 [1568];
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_1 = (((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_2 = (((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_3;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_3 = (((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[1])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_3,conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_1 = (((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_2 = (((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_3;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_3 = (((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[1])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_3,conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_1 = (((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_2 = (((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_3;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_3 = (((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[1])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_3,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_1 = (((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_2 = (((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_3;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_3 = (((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[1])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_3,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_1 = (((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_2 = (((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_3;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_3 = (((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[1])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_3,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_1 = (((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_2 = (((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_3;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_3 = (((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[1])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_3,conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_2 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_3;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_3 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_3,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_2 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_3;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_3 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_3,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_2 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_3;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_3 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_3,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_0 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_1 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_2 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0);
conv_stencil_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_0}));

  logic [15:0] addr0;
  assign addr0 = ($rtoi($floor((((1)) - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[3])) - 0)>>0)*28+((((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[1])) - 0)>>1)*784);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = ($rtoi($floor((((2)) - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[3])) - 0)>>0)*28+((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[1])) - 0)>>1)*784);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr2;
  assign addr2 = ($rtoi($floor((0 - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[5])) - 0)>>0)*28+((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[1])) - 0)>>1)*784);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr3;
  assign addr3 = ($rtoi($floor((((1)) - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[5])) - 0)>>0)*28+((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[1])) - 0)>>1)*784);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr4;
  assign addr4 = ($rtoi($floor((((2)) - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[5])) - 0)>>0)*28+((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[1])) - 0)>>1)*784);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr5;
  assign addr5 = ($rtoi($floor((0 - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[3])) - 0)>>0)*28+((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[1])) - 0)>>1)*784);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr6;
  assign addr6 = ($rtoi($floor((0 - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0)>>0)*28+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>1)*784);
  logic [15:0] addr7;
  assign addr7 = ($rtoi($floor((((1)) - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[5])) - 0)>>0)*28+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>1)*784);
  logic [15:0] addr8;
  assign addr8 = ($rtoi($floor((((2)) - 0)/ 3))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[5])) - 0)>>0)*28+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>1)*784);
  logic [15:0] addr9;
  assign addr9 = ($rtoi($floor((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0)/ 3))*1+((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[4])) - 0)>>0)*28+((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0)>>1)*784);
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_1_write_wen_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_conv_stencil_1_write[0];
        1:bank_1[addr0] <= op_hcompute_conv_stencil_1_write[0];
        2:bank_2[addr0] <= op_hcompute_conv_stencil_1_write[0];
        3:bank_3[addr0] <= op_hcompute_conv_stencil_1_write[0];
        4:bank_4[addr0] <= op_hcompute_conv_stencil_1_write[0];
        5:bank_5[addr0] <= op_hcompute_conv_stencil_1_write[0];
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
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[0] = bank_0[addr6];
        1:op_hcompute_conv_stencil_3_read[0] = bank_1[addr6];
        2:op_hcompute_conv_stencil_3_read[0] = bank_2[addr6];
        3:op_hcompute_conv_stencil_3_read[0] = bank_3[addr6];
        4:op_hcompute_conv_stencil_3_read[0] = bank_4[addr6];
        5:op_hcompute_conv_stencil_3_read[0] = bank_5[addr6];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[0] = bank_0[addr7];
        1:op_hcompute_conv_stencil_4_read[0] = bank_1[addr7];
        2:op_hcompute_conv_stencil_4_read[0] = bank_2[addr7];
        3:op_hcompute_conv_stencil_4_read[0] = bank_3[addr7];
        4:op_hcompute_conv_stencil_4_read[0] = bank_4[addr7];
        5:op_hcompute_conv_stencil_4_read[0] = bank_5[addr7];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[0] = bank_0[addr8];
        1:op_hcompute_conv_stencil_5_read[0] = bank_1[addr8];
        2:op_hcompute_conv_stencil_5_read[0] = bank_2[addr8];
        3:op_hcompute_conv_stencil_5_read[0] = bank_3[addr8];
        4:op_hcompute_conv_stencil_5_read[0] = bank_4[addr8];
        5:op_hcompute_conv_stencil_5_read[0] = bank_5[addr8];
      endcase
    end
    if (op_hcompute_hw_output_stencil_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_bank_selector.out)
        0:op_hcompute_hw_output_stencil_read[0] = bank_0[addr9];
        1:op_hcompute_hw_output_stencil_read[0] = bank_1[addr9];
        2:op_hcompute_hw_output_stencil_read[0] = bank_2[addr9];
        3:op_hcompute_hw_output_stencil_read[0] = bank_3[addr9];
        4:op_hcompute_hw_output_stencil_read[0] = bank_4[addr9];
        5:op_hcompute_hw_output_stencil_read[0] = bank_5[addr9];
      endcase
    end
  end

endmodule


module hw_input_global_wrapper_stencil_bank_selector(input logic [16*4 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32] % 1);
  logic [15:0] bank_index_3;
  assign bank_index_3 = (d[63:48] % 1);
  assign out = bank_index_0*1+bank_index_1*1+bank_index_2*1+bank_index_3*1;

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [0:0] read_addr;
  reg [0:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

// { op_hcompute_hw_input_global_wrapper_stencil[root, gb_tile, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [(1 + 7560gb_tile + 240hw_input_global_wrapper_s0_y + 8hw_input_global_wrapper_s0_x + hw_input_global_wrapper_s0_z)] }
module hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[4:0], output op_hcompute_hw_input_global_wrapper_stencil_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_hw_input_global_wrapper_stencil_write_wen =(on && on2 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0]==0 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1]<=3 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<=29 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3]<=29 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[4]<=7);
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
      op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
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
        op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] <= op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 239) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] <= op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3] <= op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[4] <= op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_3[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_3_read_ctrl_vars[5:0], output op_hcompute_conv_stencil_3_read_ren );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign op_hcompute_conv_stencil_3_read_ren =(on && on2 && op_hcompute_conv_stencil_3_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_3_read_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_3_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_3_read_ctrl_vars[3]<=2 && op_hcompute_conv_stencil_3_read_ctrl_vars[4]<=27 && op_hcompute_conv_stencil_3_read_ctrl_vars[5]<=27);
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
      op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
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
        op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3] <= op_hcompute_conv_stencil_3_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4] <= op_hcompute_conv_stencil_3_read_ctrl_vars[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5] <= op_hcompute_conv_stencil_3_read_ctrl_vars[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8010 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars[5:0], output op_hcompute_conv_stencil_4_read_ren );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign op_hcompute_conv_stencil_4_read_ren =(on && on2 && op_hcompute_conv_stencil_4_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_4_read_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_4_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_4_read_ctrl_vars[3]<=2 && op_hcompute_conv_stencil_4_read_ctrl_vars[4]<=27 && op_hcompute_conv_stencil_4_read_ctrl_vars[5]<=27);
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
      op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8009) begin
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
        op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3] <= op_hcompute_conv_stencil_4_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4] <= op_hcompute_conv_stencil_4_read_ctrl_vars[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5] <= op_hcompute_conv_stencil_4_read_ctrl_vars[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8011 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars[5:0], output op_hcompute_conv_stencil_5_read_ren );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign op_hcompute_conv_stencil_5_read_ren =(on && on2 && op_hcompute_conv_stencil_5_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_5_read_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_5_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_5_read_ctrl_vars[3]<=2 && op_hcompute_conv_stencil_5_read_ctrl_vars[4]<=27 && op_hcompute_conv_stencil_5_read_ctrl_vars[5]<=27);
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
      op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8010) begin
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
        op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3] <= op_hcompute_conv_stencil_5_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4] <= op_hcompute_conv_stencil_5_read_ctrl_vars[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5] <= op_hcompute_conv_stencil_5_read_ctrl_vars[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
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
	input [15:0] op_hcompute_conv_stencil_3_read_ctrl_vars [5:0] ,
	output logic [15:0] op_hcompute_conv_stencil_3_read [7:0] ,
	input op_hcompute_conv_stencil_4_read_ren,
	input [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars [5:0] ,
	output logic [15:0] op_hcompute_conv_stencil_4_read [7:0] ,
	input op_hcompute_conv_stencil_5_read_ren,
	input [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars [5:0] ,
	output logic [15:0] op_hcompute_conv_stencil_5_read [7:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [4:0] ,
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


  // Storage capacity pre-banking: 28800
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_write_wen(op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5:0];
  logic op_hcompute_conv_stencil_3_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_3_read_ctrl_vars( op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_3_read_ren(op_hcompute_conv_stencil_3_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[5:0];
  logic op_hcompute_conv_stencil_4_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_4_read_ctrl_vars( op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_4_read_ren(op_hcompute_conv_stencil_4_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[5:0];
  logic op_hcompute_conv_stencil_5_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_5_read_ctrl_vars( op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_5_read_ren(op_hcompute_conv_stencil_5_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [28800];
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_2 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_3 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_2 = (0 - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_3 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_2 = (((1)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_3 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_2 = (((2)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_3 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_2 = (((3)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_3 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_2 = (((4)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_3 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_2 = (((5)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_3 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_2 = (((7)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_3 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_2 = (((6)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_3 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_2 = (((1)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_3 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_2 = (((2)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_3 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_2 = (((3)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_3 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_2 = (((4)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_3 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_2 = (((5)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_3 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_2 = (((7)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_3 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_2 = (((6)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_3 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_2 = (0 - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_3 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_2 = (((2)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_3 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_2 = (((3)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_3 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_2 = (((4)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_3 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_2 = (((5)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_3 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_2 = (((7)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_3 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_2 = (((6)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_3 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_2 = (0 - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_3 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_2 = (((1)) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_3;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_3 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_3,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[3])) - 0)>>0)*30+((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[4])) - 0)>>0)*900+((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0)>>0)*7200);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0)>>0)*30+((0 - 0)>>0)*900+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*7200);
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0)>>0)*30+((((1)) - 0)>>0)*900+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*7200);
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0)>>0)*30+((((2)) - 0)>>0)*900+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*7200);
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0)>>0)*30+((((3)) - 0)>>0)*900+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*7200);
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0)>>0)*30+((((4)) - 0)>>0)*900+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*7200);
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0)>>0)*30+((((5)) - 0)>>0)*900+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*7200);
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0)>>0)*30+((((7)) - 0)>>0)*900+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*7200);
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5])) - 0)>>0)*30+((((6)) - 0)>>0)*900+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*7200);
  always @(posedge clk) begin
    if (op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[0] = bank_0[addr1];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[1] = bank_0[addr2];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[2] = bank_0[addr3];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[3] = bank_0[addr4];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[4] = bank_0[addr5];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[5] = bank_0[addr6];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[6] = bank_0[addr7];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[7] = bank_0[addr8];
      endcase
    end
  end

endmodule


module hw_kernel_global_wrapper_stencil_bank_selector(input logic [16*5 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32] % 1);
  logic [15:0] bank_index_3;
  assign bank_index_3 = (d[63:48] % 1);
  logic [15:0] bank_index_4;
  assign bank_index_4 = (d[79:64] % 1);
  assign out = bank_index_0*1+bank_index_1*1+bank_index_2*1+bank_index_3*1+bank_index_4*1;

endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, gb_tile, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(2 + 7560gb_tile + 72hw_kernel_global_wrapper_s0_y + 24hw_kernel_global_wrapper_s0_x + 8hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[5:0], output op_hcompute_hw_kernel_global_wrapper_stencil_write_wen );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign op_hcompute_hw_kernel_global_wrapper_stencil_write_wen =(on && on2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[0]==0 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1]<=3 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2]<=2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<=2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<=2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[5]<=7);
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
      op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
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
        op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[5]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 71) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[5]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 23) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[5]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 7) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[5]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[5] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_3[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8009 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_3_read_ctrl_vars[5:0], output op_hcompute_conv_stencil_3_read_ren );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign op_hcompute_conv_stencil_3_read_ren =(on && on2 && op_hcompute_conv_stencil_3_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_3_read_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_3_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_3_read_ctrl_vars[3]<=2 && op_hcompute_conv_stencil_3_read_ctrl_vars[4]<=27 && op_hcompute_conv_stencil_3_read_ctrl_vars[5]<=27);
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
      op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
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
        op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3] <= op_hcompute_conv_stencil_3_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4] <= op_hcompute_conv_stencil_3_read_ctrl_vars[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[5] <= op_hcompute_conv_stencil_3_read_ctrl_vars[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_4[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8010 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars[5:0], output op_hcompute_conv_stencil_4_read_ren );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign op_hcompute_conv_stencil_4_read_ren =(on && on2 && op_hcompute_conv_stencil_4_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_4_read_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_4_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_4_read_ctrl_vars[3]<=2 && op_hcompute_conv_stencil_4_read_ctrl_vars[4]<=27 && op_hcompute_conv_stencil_4_read_ctrl_vars[5]<=27);
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
      op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8009) begin
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
        op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3] <= op_hcompute_conv_stencil_4_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4] <= op_hcompute_conv_stencil_4_read_ctrl_vars[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[5] <= op_hcompute_conv_stencil_4_read_ctrl_vars[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { op_hcompute_conv_stencil_5[root, gb_tile, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(8011 + 7560gb_tile + 2520conv_s1_r_y + 840conv_s1_r_x + 30conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars[5:0], output op_hcompute_conv_stencil_5_read_ren );
  logic [15:0] counter[6:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 6;
  assign op_hcompute_conv_stencil_5_read_ren =(on && on2 && op_hcompute_conv_stencil_5_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_5_read_ctrl_vars[1]<=3 && op_hcompute_conv_stencil_5_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_5_read_ctrl_vars[3]<=2 && op_hcompute_conv_stencil_5_read_ctrl_vars[4]<=27 && op_hcompute_conv_stencil_5_read_ctrl_vars[5]<=27);
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
      op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 16'b1010101010101010;
      counter[5] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==8010) begin
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
        op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 16'b0;
        counter [5] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 7559) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          counter[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 2519) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 839) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3] <= op_hcompute_conv_stencil_5_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 29) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4] <= op_hcompute_conv_stencil_5_read_ctrl_vars[4] + 1;
          on2 <= 1;
        end else if(counter[5] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[5] <= op_hcompute_conv_stencil_5_read_ctrl_vars[5] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= counter[4] + 1;
          counter[5] <= counter[5] + 1;
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
	input [15:0] op_hcompute_conv_stencil_3_read_ctrl_vars [5:0] ,
	output logic [15:0] op_hcompute_conv_stencil_3_read [7:0] ,
	input op_hcompute_conv_stencil_4_read_ren,
	input [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars [5:0] ,
	output logic [15:0] op_hcompute_conv_stencil_4_read [7:0] ,
	input op_hcompute_conv_stencil_5_read_ren,
	input [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars [5:0] ,
	output logic [15:0] op_hcompute_conv_stencil_5_read [7:0] ,
	input op_hcompute_hw_kernel_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars [5:0] ,
	input logic [15:0] op_hcompute_hw_kernel_global_wrapper_stencil_write [0:0] );


  // Storage capacity pre-banking: 864
  logic [15:0]op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[5:0];
  logic op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_fsm hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars( op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out), .op_hcompute_hw_kernel_global_wrapper_stencil_write_wen(op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[5:0];
  logic op_hcompute_conv_stencil_3_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_3_read_ctrl_vars( op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_3_read_ren(op_hcompute_conv_stencil_3_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[5:0];
  logic op_hcompute_conv_stencil_4_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_4_read_ctrl_vars( op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_4_read_ren(op_hcompute_conv_stencil_4_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[5:0];
  logic op_hcompute_conv_stencil_5_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_5_read_ctrl_vars( op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_5_read_ren(op_hcompute_conv_stencil_5_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [864];
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_0 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_1 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_2 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_3 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[5])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_4 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_3 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_4 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_3 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_4 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_3 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_4 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_3 = (((3)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_4 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_3 = (((4)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_4 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_3 = (((5)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_4 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_3 = (((7)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_4 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_3 = (((6)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_4 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_3 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_4 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_3 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_4 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_3 = (((3)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_4 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_3 = (((4)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_4 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_3 = (((5)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_4 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_3 = (((7)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_4 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_3 = (((6)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_4 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_3 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_4 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_3 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_4 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_3 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_4 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_3 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_4 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_3 = (((3)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_4 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_3 = (((4)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_4 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_3 = (((5)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_4 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_3 = (((7)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_4 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_3 = (((6)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_4;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_4 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
hw_kernel_global_wrapper_stencil_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_4,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[4])) - 0)>>0)*9+((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[5])) - 0)>>0)*27+((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((0 - 0)>>0)*9+((0 - 0)>>0)*27+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((0 - 0)>>0)*9+((((1)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((0 - 0)>>0)*9+((((2)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((0 - 0)>>0)*9+((((3)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((0 - 0)>>0)*9+((((4)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((0 - 0)>>0)*9+((((5)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((0 - 0)>>0)*9+((((7)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((0 - 0)>>0)*9+((((6)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((1)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr10;
  assign addr10 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((2)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr11;
  assign addr11 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((3)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr12;
  assign addr12 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((4)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr13;
  assign addr13 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((5)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr14;
  assign addr14 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((7)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr15;
  assign addr15 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((((6)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr16;
  assign addr16 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((1)) - 0)>>0)*9+((0 - 0)>>0)*27+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr17;
  assign addr17 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((0 - 0)>>0)*27+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr18;
  assign addr18 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((1)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr19;
  assign addr19 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((2)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr20;
  assign addr20 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((3)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr21;
  assign addr21 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((4)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr22;
  assign addr22 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((5)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr23;
  assign addr23 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((7)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  logic [15:0] addr24;
  assign addr24 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0)>>0)*3+((((2)) - 0)>>0)*9+((((6)) - 0)>>0)*27+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0)>>0)*216);
  always @(posedge clk) begin
    if (op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[0] = bank_0[addr1];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[1] = bank_0[addr2];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[2] = bank_0[addr3];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[3] = bank_0[addr4];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[4] = bank_0[addr5];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[5] = bank_0[addr6];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[6] = bank_0[addr7];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out)
        0:op_hcompute_conv_stencil_3_read[7] = bank_0[addr8];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[0] = bank_0[addr9];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[1] = bank_0[addr10];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[2] = bank_0[addr11];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[3] = bank_0[addr12];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[4] = bank_0[addr13];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[5] = bank_0[addr14];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[6] = bank_0[addr15];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out)
        0:op_hcompute_conv_stencil_4_read[7] = bank_0[addr16];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[0] = bank_0[addr17];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[1] = bank_0[addr18];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[2] = bank_0[addr19];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[3] = bank_0[addr20];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[4] = bank_0[addr21];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[5] = bank_0[addr22];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[6] = bank_0[addr23];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out)
        0:op_hcompute_conv_stencil_5_read[7] = bank_0[addr24];
      endcase
    end
  end

endmodule

