// { op_hcompute_lyy_stencil[root, lyy_s0_y, lyy_s0_x] -> [(140 + 64lyy_s0_y + lyy_s0_x)] }
module affine_controller__U0(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=61 && d[2]<=61);
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
      if(counter[0] ==139) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_lgyy_stencil[root, lgyy_s0_y, lgyy_s0_x] -> [(271 + 64lgyy_s0_y + lgyy_s0_x)] }
module affine_controller__U7(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=59 && d[2]<=59);
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
      if(counter[0] ==270) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_lxy_stencil[root, lxy_s0_y, lxy_s0_x] -> [(137 + 64lxy_s0_y + lxy_s0_x)] }
module affine_controller__U14(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=61 && d[2]<=61);
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
      if(counter[0] ==136) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_lgxy_stencil[root, lgxy_s0_y, lgxy_s0_x] -> [(268 + 64lgxy_s0_y + lgxy_s0_x)] }
module affine_controller__U21(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=59 && d[2]<=59);
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
      if(counter[0] ==267) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_lgxy_stencil_1[root, lgxy_s1_y, lgxy_s1_x] -> [(269 + 64lgxy_s1_y + lgxy_s1_x)] }
module affine_controller__U28(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=59 && d[2]<=59);
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
      if(counter[0] ==268) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_padded16_global_wrapper_stencil[root, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x] -> [(1 + 64padded16_global_wrapper_s0_y + padded16_global_wrapper_s0_x)] }
module affine_controller__U35(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=63 && d[2]<=63);
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
      if(counter[0] ==0) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_lxx_stencil[root, lxx_s0_y, lxx_s0_x] -> [(133 + 64lxx_s0_y + lxx_s0_x)] }
module affine_controller__U42(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=61 && d[2]<=61);
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
      if(counter[0] ==132) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_lgxx_stencil[root, lgxx_s0_y, lgxx_s0_x] -> [(264 + 64lgxx_s0_y + lgxx_s0_x)] }
module affine_controller__U49(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=59 && d[2]<=59);
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
      if(counter[0] ==263) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_grad_x_stencil[root, grad_x_s0_y, grad_x_s0_x] -> [(132 + 64grad_x_s0_y + grad_x_s0_x)] }
module affine_controller__U56(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=61 && d[2]<=61);
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
      if(counter[0] ==131) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_lgxx_stencil_1[root, lgxx_s1_y, lgxx_s1_x] -> [(265 + 64lgxx_s1_y + lgxx_s1_x)] }
module affine_controller__U63(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=59 && d[2]<=59);
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
      if(counter[0] ==264) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_grad_y_stencil[root, grad_y_s0_y, grad_y_s0_x] -> [(136 + 64grad_y_s0_y + grad_y_s0_x)] }
module affine_controller__U70(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=61 && d[2]<=61);
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
      if(counter[0] ==135) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_hw_output_stencil[root, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(405 + 64hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module affine_controller__U77(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=57 && d[2]<=57);
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
      if(counter[0] ==404) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_lgyy_stencil_1[root, lgyy_s1_y, lgyy_s1_x] -> [(272 + 64lgyy_s1_y + lgyy_s1_x)] }
module affine_controller__U84(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=59 && d[2]<=59);
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
      if(counter[0] ==271) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_cim_stencil[root, cim_s0_y, cim_s0_x] -> [(273 + 64cim_s0_y + cim_s0_x)] }
module affine_controller__U91(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=59 && d[2]<=59);
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
      if(counter[0] ==272) begin
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
        if(counter[1] == 63) begin
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
// { op_hcompute_cim_output_stencil[root, cim_output_s0_y, cim_output_s0_x] -> [(404 + 64cim_output_s0_y + cim_output_s0_x)] }
module affine_controller__U98(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign valid =(on && on2 && d[0]==0 && d[1]<=57 && d[2]<=57);
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
      if(counter[0] ==403) begin
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
        if(counter[1] == 63) begin
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

module cim_output_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

// { op_hcompute_cim_output_stencil[root, cim_output_s0_y, cim_output_s0_x] -> [(404 + 64cim_output_s0_y + cim_output_s0_x)] }
module cim_output_stencil_op_hcompute_cim_output_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_cim_output_stencil_write_ctrl_vars[2:0], output op_hcompute_cim_output_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_cim_output_stencil_write_wen =(on && on2 && op_hcompute_cim_output_stencil_write_ctrl_vars[0]==0 && op_hcompute_cim_output_stencil_write_ctrl_vars[1]<=57 && op_hcompute_cim_output_stencil_write_ctrl_vars[2]<=57);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_cim_output_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_cim_output_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_cim_output_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==403) begin
        on <=1;
        on2 <= 1;
        op_hcompute_cim_output_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_cim_output_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_cim_output_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_cim_output_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_cim_output_stencil_write_ctrl_vars[1] <= op_hcompute_cim_output_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_cim_output_stencil_write_ctrl_vars[2] <= op_hcompute_cim_output_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_output_stencil[root, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(405 + 64hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module cim_output_stencil_op_hcompute_hw_output_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars[2:0], output op_hcompute_hw_output_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_output_stencil_read_ren =(on && on2 && op_hcompute_hw_output_stencil_read_ctrl_vars[0]==0 && op_hcompute_hw_output_stencil_read_ctrl_vars[1]<=57 && op_hcompute_hw_output_stencil_read_ctrl_vars[2]<=57);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_output_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_output_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_output_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==404) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_output_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_output_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_output_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[1] <= op_hcompute_hw_output_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_output_stencil_read_ctrl_vars[2] <= op_hcompute_hw_output_stencil_read_ctrl_vars[2] + 1;
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
module cim_output_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_output_stencil_write_wen,
	input [15:0] op_hcompute_cim_output_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_cim_output_stencil_write [0:0] ,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] );


  // Storage capacity pre-banking: 3364
  logic [15:0]op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_output_stencil_write_wen_fsm_out;
  cim_output_stencil_op_hcompute_cim_output_stencil_write_fsm cim_output_stencil_op_hcompute_cim_output_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_output_stencil_write_ctrl_vars( op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out), .op_hcompute_cim_output_stencil_write_wen(op_hcompute_cim_output_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_read_ren_fsm_out;
  cim_output_stencil_op_hcompute_hw_output_stencil_read_fsm cim_output_stencil_op_hcompute_hw_output_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_read_ctrl_vars( op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_read_ren(op_hcompute_hw_output_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [3364];
  logic [15:0] cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_0;
  assign cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_0 = (((1*op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_1;
  assign cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_1 = (((1*op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out[2])) - 0);
cim_output_stencil_bank_selector cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_bank_selector(.d({cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_1,cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_0}));
  logic [15:0] cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_0;
  assign cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_0 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_1;
  assign cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_1 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0);
cim_output_stencil_bank_selector cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_bank_selector(.d({cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_1,cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out[2])) - 0)>>0)*58);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0)>>0)*58);
  always @(posedge clk) begin
    if (op_hcompute_cim_output_stencil_write_wen_fsm_out) begin
      case( cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_cim_output_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_hw_output_stencil_read_ren_fsm_out) begin
      case( cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_bank_selector.out)
        0:op_hcompute_hw_output_stencil_read[0] = bank_0[addr1];
      endcase
    end
  end

endmodule


module cim_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 3);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 3);
  assign out = bank_index_0*1+bank_index_1*3;

endmodule

// { op_hcompute_cim_stencil[root, cim_s0_y, cim_s0_x] -> [(273 + 64cim_s0_y + cim_s0_x)] }
module cim_stencil_op_hcompute_cim_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_cim_stencil_write_ctrl_vars[2:0], output op_hcompute_cim_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_cim_stencil_write_wen =(on && on2 && op_hcompute_cim_stencil_write_ctrl_vars[0]==0 && op_hcompute_cim_stencil_write_ctrl_vars[1]<=59 && op_hcompute_cim_stencil_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_cim_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_cim_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_cim_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==272) begin
        on <=1;
        on2 <= 1;
        op_hcompute_cim_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_cim_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_cim_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_cim_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_cim_stencil_write_ctrl_vars[1] <= op_hcompute_cim_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_cim_stencil_write_ctrl_vars[2] <= op_hcompute_cim_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_cim_output_stencil[root, cim_output_s0_y, cim_output_s0_x] -> [(404 + 64cim_output_s0_y + cim_output_s0_x)] }
module cim_stencil_op_hcompute_cim_output_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_cim_output_stencil_read_ctrl_vars[2:0], output op_hcompute_cim_output_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_cim_output_stencil_read_ren =(on && on2 && op_hcompute_cim_output_stencil_read_ctrl_vars[0]==0 && op_hcompute_cim_output_stencil_read_ctrl_vars[1]<=57 && op_hcompute_cim_output_stencil_read_ctrl_vars[2]<=57);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_cim_output_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_cim_output_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_cim_output_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==403) begin
        on <=1;
        on2 <= 1;
        op_hcompute_cim_output_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_cim_output_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_cim_output_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_cim_output_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_cim_output_stencil_read_ctrl_vars[1] <= op_hcompute_cim_output_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_cim_output_stencil_read_ctrl_vars[2] <= op_hcompute_cim_output_stencil_read_ctrl_vars[2] + 1;
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
module cim_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_output_stencil_read_ren,
	input [15:0] op_hcompute_cim_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_cim_output_stencil_read [8:0] ,
	input op_hcompute_cim_stencil_write_wen,
	input [15:0] op_hcompute_cim_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_cim_stencil_write [0:0] );


  // Storage capacity pre-banking: 3600
  logic [15:0]op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_stencil_write_wen_fsm_out;
  cim_stencil_op_hcompute_cim_stencil_write_fsm cim_stencil_op_hcompute_cim_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_stencil_write_ctrl_vars( op_hcompute_cim_stencil_write_ctrl_vars_fsm_out), .op_hcompute_cim_stencil_write_wen(op_hcompute_cim_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_output_stencil_read_ren_fsm_out;
  cim_stencil_op_hcompute_cim_output_stencil_read_fsm cim_stencil_op_hcompute_cim_output_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_output_stencil_read_ctrl_vars( op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out), .op_hcompute_cim_output_stencil_read_ren(op_hcompute_cim_output_stencil_read_ren_fsm_out));
  // # of banks: 9
  logic [15:0] bank_0 [400];
  logic [15:0] bank_1 [400];
  logic [15:0] bank_2 [400];
  logic [15:0] bank_3 [400];
  logic [15:0] bank_4 [400];
  logic [15:0] bank_5 [400];
  logic [15:0] bank_6 [400];
  logic [15:0] bank_7 [400];
  logic [15:0] bank_8 [400];
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_0 = (((-1 + 1*op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_1 = (((-1 + 1*op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_1,cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_0 = (((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_1 = (((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_0 = (((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_1 = (((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_0 = (((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_1 = (((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_0 = (((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_1 = (((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_0 = (((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_1 = (((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_0 = (((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_1 = (((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_0 = (((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_1 = (((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_0 = (((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_1 = (((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_0}));
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_0;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_0 = (((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_1;
  assign cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_1 = (((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1);
cim_stencil_bank_selector cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_bank_selector(.d({cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_1,cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_0}));

  logic [15:0] addr0;
  assign addr0 = ($rtoi($floor((((-1 + 1*op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[1])) - -1)/ 3))*1+$rtoi($floor((((-1 + 1*op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[2])) - -1)/ 3))*20);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = ($rtoi($floor((((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)/ 3))*1+$rtoi($floor((((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)/ 3))*20);
  logic [15:0] addr2;
  assign addr2 = ($rtoi($floor((((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)/ 3))*1+$rtoi($floor((((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)/ 3))*20);
  logic [15:0] addr3;
  assign addr3 = ($rtoi($floor((((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)/ 3))*1+$rtoi($floor((((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)/ 3))*20);
  logic [15:0] addr4;
  assign addr4 = ($rtoi($floor((((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)/ 3))*1+$rtoi($floor((((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)/ 3))*20);
  logic [15:0] addr5;
  assign addr5 = ($rtoi($floor((((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)/ 3))*1+$rtoi($floor((((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)/ 3))*20);
  logic [15:0] addr6;
  assign addr6 = ($rtoi($floor((((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)/ 3))*1+$rtoi($floor((((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)/ 3))*20);
  logic [15:0] addr7;
  assign addr7 = ($rtoi($floor((((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)/ 3))*1+$rtoi($floor((((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)/ 3))*20);
  logic [15:0] addr8;
  assign addr8 = ($rtoi($floor((((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)/ 3))*1+$rtoi($floor((((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)/ 3))*20);
  logic [15:0] addr9;
  assign addr9 = ($rtoi($floor((((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)/ 3))*1+$rtoi($floor((((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)/ 3))*20);
  always @(posedge clk) begin
    if (op_hcompute_cim_stencil_write_wen_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_cim_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_cim_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_cim_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_cim_stencil_write[0];
        4:bank_4[addr0] <= op_hcompute_cim_stencil_write[0];
        5:bank_5[addr0] <= op_hcompute_cim_stencil_write[0];
        6:bank_6[addr0] <= op_hcompute_cim_stencil_write[0];
        7:bank_7[addr0] <= op_hcompute_cim_stencil_write[0];
        8:bank_8[addr0] <= op_hcompute_cim_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[0] = bank_0[addr1];
        1:op_hcompute_cim_output_stencil_read[0] = bank_1[addr1];
        2:op_hcompute_cim_output_stencil_read[0] = bank_2[addr1];
        3:op_hcompute_cim_output_stencil_read[0] = bank_3[addr1];
        4:op_hcompute_cim_output_stencil_read[0] = bank_4[addr1];
        5:op_hcompute_cim_output_stencil_read[0] = bank_5[addr1];
        6:op_hcompute_cim_output_stencil_read[0] = bank_6[addr1];
        7:op_hcompute_cim_output_stencil_read[0] = bank_7[addr1];
        8:op_hcompute_cim_output_stencil_read[0] = bank_8[addr1];
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[1] = bank_0[addr2];
        1:op_hcompute_cim_output_stencil_read[1] = bank_1[addr2];
        2:op_hcompute_cim_output_stencil_read[1] = bank_2[addr2];
        3:op_hcompute_cim_output_stencil_read[1] = bank_3[addr2];
        4:op_hcompute_cim_output_stencil_read[1] = bank_4[addr2];
        5:op_hcompute_cim_output_stencil_read[1] = bank_5[addr2];
        6:op_hcompute_cim_output_stencil_read[1] = bank_6[addr2];
        7:op_hcompute_cim_output_stencil_read[1] = bank_7[addr2];
        8:op_hcompute_cim_output_stencil_read[1] = bank_8[addr2];
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[2] = bank_0[addr3];
        1:op_hcompute_cim_output_stencil_read[2] = bank_1[addr3];
        2:op_hcompute_cim_output_stencil_read[2] = bank_2[addr3];
        3:op_hcompute_cim_output_stencil_read[2] = bank_3[addr3];
        4:op_hcompute_cim_output_stencil_read[2] = bank_4[addr3];
        5:op_hcompute_cim_output_stencil_read[2] = bank_5[addr3];
        6:op_hcompute_cim_output_stencil_read[2] = bank_6[addr3];
        7:op_hcompute_cim_output_stencil_read[2] = bank_7[addr3];
        8:op_hcompute_cim_output_stencil_read[2] = bank_8[addr3];
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[3] = bank_0[addr4];
        1:op_hcompute_cim_output_stencil_read[3] = bank_1[addr4];
        2:op_hcompute_cim_output_stencil_read[3] = bank_2[addr4];
        3:op_hcompute_cim_output_stencil_read[3] = bank_3[addr4];
        4:op_hcompute_cim_output_stencil_read[3] = bank_4[addr4];
        5:op_hcompute_cim_output_stencil_read[3] = bank_5[addr4];
        6:op_hcompute_cim_output_stencil_read[3] = bank_6[addr4];
        7:op_hcompute_cim_output_stencil_read[3] = bank_7[addr4];
        8:op_hcompute_cim_output_stencil_read[3] = bank_8[addr4];
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[4] = bank_0[addr5];
        1:op_hcompute_cim_output_stencil_read[4] = bank_1[addr5];
        2:op_hcompute_cim_output_stencil_read[4] = bank_2[addr5];
        3:op_hcompute_cim_output_stencil_read[4] = bank_3[addr5];
        4:op_hcompute_cim_output_stencil_read[4] = bank_4[addr5];
        5:op_hcompute_cim_output_stencil_read[4] = bank_5[addr5];
        6:op_hcompute_cim_output_stencil_read[4] = bank_6[addr5];
        7:op_hcompute_cim_output_stencil_read[4] = bank_7[addr5];
        8:op_hcompute_cim_output_stencil_read[4] = bank_8[addr5];
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[5] = bank_0[addr6];
        1:op_hcompute_cim_output_stencil_read[5] = bank_1[addr6];
        2:op_hcompute_cim_output_stencil_read[5] = bank_2[addr6];
        3:op_hcompute_cim_output_stencil_read[5] = bank_3[addr6];
        4:op_hcompute_cim_output_stencil_read[5] = bank_4[addr6];
        5:op_hcompute_cim_output_stencil_read[5] = bank_5[addr6];
        6:op_hcompute_cim_output_stencil_read[5] = bank_6[addr6];
        7:op_hcompute_cim_output_stencil_read[5] = bank_7[addr6];
        8:op_hcompute_cim_output_stencil_read[5] = bank_8[addr6];
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[6] = bank_0[addr7];
        1:op_hcompute_cim_output_stencil_read[6] = bank_1[addr7];
        2:op_hcompute_cim_output_stencil_read[6] = bank_2[addr7];
        3:op_hcompute_cim_output_stencil_read[6] = bank_3[addr7];
        4:op_hcompute_cim_output_stencil_read[6] = bank_4[addr7];
        5:op_hcompute_cim_output_stencil_read[6] = bank_5[addr7];
        6:op_hcompute_cim_output_stencil_read[6] = bank_6[addr7];
        7:op_hcompute_cim_output_stencil_read[6] = bank_7[addr7];
        8:op_hcompute_cim_output_stencil_read[6] = bank_8[addr7];
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[7] = bank_0[addr8];
        1:op_hcompute_cim_output_stencil_read[7] = bank_1[addr8];
        2:op_hcompute_cim_output_stencil_read[7] = bank_2[addr8];
        3:op_hcompute_cim_output_stencil_read[7] = bank_3[addr8];
        4:op_hcompute_cim_output_stencil_read[7] = bank_4[addr8];
        5:op_hcompute_cim_output_stencil_read[7] = bank_5[addr8];
        6:op_hcompute_cim_output_stencil_read[7] = bank_6[addr8];
        7:op_hcompute_cim_output_stencil_read[7] = bank_7[addr8];
        8:op_hcompute_cim_output_stencil_read[7] = bank_8[addr8];
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[8] = bank_0[addr9];
        1:op_hcompute_cim_output_stencil_read[8] = bank_1[addr9];
        2:op_hcompute_cim_output_stencil_read[8] = bank_2[addr9];
        3:op_hcompute_cim_output_stencil_read[8] = bank_3[addr9];
        4:op_hcompute_cim_output_stencil_read[8] = bank_4[addr9];
        5:op_hcompute_cim_output_stencil_read[8] = bank_5[addr9];
        6:op_hcompute_cim_output_stencil_read[8] = bank_6[addr9];
        7:op_hcompute_cim_output_stencil_read[8] = bank_7[addr9];
        8:op_hcompute_cim_output_stencil_read[8] = bank_8[addr9];
      endcase
    end
  end

endmodule


module grad_x_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_to_grad_x_stencil_op_hcompute_lxx_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_0;
  logic [15:0] delay_wire_1;
  logic [15:0] delay_wire_2;
  logic [15:0] delay_wire_3;
  always @(posedge clk) begin
    delay_wire_0 <= in;    delay_wire_1 <= delay_wire_0;    delay_wire_2 <= delay_wire_1;    delay_wire_3 <= delay_wire_2;  end
  assign out = delay_wire_3;
endmodule

// { op_hcompute_grad_x_stencil[root, grad_x_s0_y, grad_x_s0_x] -> [(132 + 64grad_x_s0_y + grad_x_s0_x)] }
module grad_x_stencil_op_hcompute_grad_x_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_grad_x_stencil_write_ctrl_vars[2:0], output op_hcompute_grad_x_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_grad_x_stencil_write_wen =(on && on2 && op_hcompute_grad_x_stencil_write_ctrl_vars[0]==0 && op_hcompute_grad_x_stencil_write_ctrl_vars[1]<=61 && op_hcompute_grad_x_stencil_write_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_grad_x_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_grad_x_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_grad_x_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==131) begin
        on <=1;
        on2 <= 1;
        op_hcompute_grad_x_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_grad_x_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_grad_x_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_grad_x_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_grad_x_stencil_write_ctrl_vars[1] <= op_hcompute_grad_x_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_grad_x_stencil_write_ctrl_vars[2] <= op_hcompute_grad_x_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lxx_stencil[root, lxx_s0_y, lxx_s0_x] -> [(133 + 64lxx_s0_y + lxx_s0_x)] }
module grad_x_stencil_op_hcompute_lxx_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lxx_stencil_read_ctrl_vars[2:0], output op_hcompute_lxx_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lxx_stencil_read_ren =(on && on2 && op_hcompute_lxx_stencil_read_ctrl_vars[0]==0 && op_hcompute_lxx_stencil_read_ctrl_vars[1]<=61 && op_hcompute_lxx_stencil_read_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lxx_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lxx_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lxx_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==132) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lxx_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lxx_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lxx_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lxx_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_lxx_stencil_read_ctrl_vars[1] <= op_hcompute_lxx_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lxx_stencil_read_ctrl_vars[2] <= op_hcompute_lxx_stencil_read_ctrl_vars[2] + 1;
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
// { op_hcompute_lxy_stencil[root, lxy_s0_y, lxy_s0_x] -> [(137 + 64lxy_s0_y + lxy_s0_x)] }
module grad_x_stencil_op_hcompute_lxy_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lxy_stencil_read_ctrl_vars[2:0], output op_hcompute_lxy_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lxy_stencil_read_ren =(on && on2 && op_hcompute_lxy_stencil_read_ctrl_vars[0]==0 && op_hcompute_lxy_stencil_read_ctrl_vars[1]<=61 && op_hcompute_lxy_stencil_read_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lxy_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lxy_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lxy_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==136) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lxy_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lxy_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lxy_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lxy_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_lxy_stencil_read_ctrl_vars[1] <= op_hcompute_lxy_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lxy_stencil_read_ctrl_vars[2] <= op_hcompute_lxy_stencil_read_ctrl_vars[2] + 1;
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
module grad_x_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_grad_x_stencil_write_wen,
	input [15:0] op_hcompute_grad_x_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_grad_x_stencil_write [0:0] ,
	input op_hcompute_lxx_stencil_read_ren,
	input [15:0] op_hcompute_lxx_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lxx_stencil_read [0:0] ,
	input op_hcompute_lxy_stencil_read_ren,
	input [15:0] op_hcompute_lxy_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lxy_stencil_read [0:0] );

    grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_to_grad_x_stencil_op_hcompute_lxx_stencil_8_sr grad_x_stencil_op_hcompute_lxy_stencil_5_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxx_stencil_read[0]), .out(op_hcompute_lxy_stencil_read[0]));


  // Storage capacity pre-banking: 3844
  logic [15:0]op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_grad_x_stencil_write_wen_fsm_out;
  grad_x_stencil_op_hcompute_grad_x_stencil_write_fsm grad_x_stencil_op_hcompute_grad_x_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_grad_x_stencil_write_ctrl_vars( op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out), .op_hcompute_grad_x_stencil_write_wen(op_hcompute_grad_x_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_lxx_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lxx_stencil_read_ren_fsm_out;
  grad_x_stencil_op_hcompute_lxx_stencil_read_fsm grad_x_stencil_op_hcompute_lxx_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lxx_stencil_read_ctrl_vars( op_hcompute_lxx_stencil_read_ctrl_vars_fsm_out), .op_hcompute_lxx_stencil_read_ren(op_hcompute_lxx_stencil_read_ren_fsm_out));
  logic [15:0]op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lxy_stencil_read_ren_fsm_out;
  grad_x_stencil_op_hcompute_lxy_stencil_read_fsm grad_x_stencil_op_hcompute_lxy_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lxy_stencil_read_ctrl_vars( op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out), .op_hcompute_lxy_stencil_read_ren(op_hcompute_lxy_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [3844];
  logic [15:0] grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_0;
  assign grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_0 = (((-2 + 1*op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_1;
  assign grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_1 = (((-2 + 1*op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out[2])) - -2);
grad_x_stencil_bank_selector grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_bank_selector(.d({grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_1,grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_0}));
  logic [15:0] grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_0;
  assign grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_0 = (((-2 + 1*op_hcompute_lxx_stencil_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_1;
  assign grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_1 = (((-2 + 1*op_hcompute_lxx_stencil_read_ctrl_vars_fsm_out[2])) - -2);
grad_x_stencil_bank_selector grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_bank_selector(.d({grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_1,grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_0}));
  logic [15:0] grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_0;
  assign grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_0 = (((-2 + 1*op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_1;
  assign grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_1 = (((-2 + 1*op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[2])) - -2);
grad_x_stencil_bank_selector grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_bank_selector(.d({grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_1,grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-2 + 1*op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out[1])) - -2)>>0)*1+((((-2 + 1*op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out[2])) - -2)>>0)*62);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-2 + 1*op_hcompute_lxx_stencil_read_ctrl_vars_fsm_out[1])) - -2)>>0)*1+((((-2 + 1*op_hcompute_lxx_stencil_read_ctrl_vars_fsm_out[2])) - -2)>>0)*62);
  always @(posedge clk) begin
    if (op_hcompute_grad_x_stencil_write_wen_fsm_out) begin
      case( grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_grad_x_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_lxx_stencil_read_ren_fsm_out) begin
      case( grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_bank_selector.out)
        0:op_hcompute_lxx_stencil_read[0] = bank_0[addr1];
      endcase
    end
  end

endmodule


module grad_y_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_to_grad_y_stencil_op_hcompute_lxy_stencil_6_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_4;
  logic [15:0] delay_wire_5;
  logic [15:0] delay_wire_6;
  always @(posedge clk) begin
    delay_wire_4 <= in;    delay_wire_5 <= delay_wire_4;    delay_wire_6 <= delay_wire_5;  end
  assign out = delay_wire_6;
endmodule

// { op_hcompute_grad_y_stencil[root, grad_y_s0_y, grad_y_s0_x] -> [(136 + 64grad_y_s0_y + grad_y_s0_x)] }
module grad_y_stencil_op_hcompute_grad_y_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_grad_y_stencil_write_ctrl_vars[2:0], output op_hcompute_grad_y_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_grad_y_stencil_write_wen =(on && on2 && op_hcompute_grad_y_stencil_write_ctrl_vars[0]==0 && op_hcompute_grad_y_stencil_write_ctrl_vars[1]<=61 && op_hcompute_grad_y_stencil_write_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_grad_y_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_grad_y_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_grad_y_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==135) begin
        on <=1;
        on2 <= 1;
        op_hcompute_grad_y_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_grad_y_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_grad_y_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_grad_y_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_grad_y_stencil_write_ctrl_vars[1] <= op_hcompute_grad_y_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_grad_y_stencil_write_ctrl_vars[2] <= op_hcompute_grad_y_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lxy_stencil[root, lxy_s0_y, lxy_s0_x] -> [(137 + 64lxy_s0_y + lxy_s0_x)] }
module grad_y_stencil_op_hcompute_lxy_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lxy_stencil_read_ctrl_vars[2:0], output op_hcompute_lxy_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lxy_stencil_read_ren =(on && on2 && op_hcompute_lxy_stencil_read_ctrl_vars[0]==0 && op_hcompute_lxy_stencil_read_ctrl_vars[1]<=61 && op_hcompute_lxy_stencil_read_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lxy_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lxy_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lxy_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==136) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lxy_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lxy_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lxy_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lxy_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_lxy_stencil_read_ctrl_vars[1] <= op_hcompute_lxy_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lxy_stencil_read_ctrl_vars[2] <= op_hcompute_lxy_stencil_read_ctrl_vars[2] + 1;
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
// { op_hcompute_lyy_stencil[root, lyy_s0_y, lyy_s0_x] -> [(140 + 64lyy_s0_y + lyy_s0_x)] }
module grad_y_stencil_op_hcompute_lyy_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lyy_stencil_read_ctrl_vars[2:0], output op_hcompute_lyy_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lyy_stencil_read_ren =(on && on2 && op_hcompute_lyy_stencil_read_ctrl_vars[0]==0 && op_hcompute_lyy_stencil_read_ctrl_vars[1]<=61 && op_hcompute_lyy_stencil_read_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lyy_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lyy_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lyy_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==139) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lyy_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lyy_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lyy_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lyy_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_lyy_stencil_read_ctrl_vars[1] <= op_hcompute_lyy_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lyy_stencil_read_ctrl_vars[2] <= op_hcompute_lyy_stencil_read_ctrl_vars[2] + 1;
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
module grad_y_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_grad_y_stencil_write_wen,
	input [15:0] op_hcompute_grad_y_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_grad_y_stencil_write [0:0] ,
	input op_hcompute_lxy_stencil_read_ren,
	input [15:0] op_hcompute_lxy_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lxy_stencil_read [0:0] ,
	input op_hcompute_lyy_stencil_read_ren,
	input [15:0] op_hcompute_lyy_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lyy_stencil_read [0:0] );

    grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_to_grad_y_stencil_op_hcompute_lxy_stencil_6_sr grad_y_stencil_op_hcompute_lyy_stencil_3_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_lxy_stencil_read[0]), .out(op_hcompute_lyy_stencil_read[0]));


  // Storage capacity pre-banking: 3844
  logic [15:0]op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_grad_y_stencil_write_wen_fsm_out;
  grad_y_stencil_op_hcompute_grad_y_stencil_write_fsm grad_y_stencil_op_hcompute_grad_y_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_grad_y_stencil_write_ctrl_vars( op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out), .op_hcompute_grad_y_stencil_write_wen(op_hcompute_grad_y_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lxy_stencil_read_ren_fsm_out;
  grad_y_stencil_op_hcompute_lxy_stencil_read_fsm grad_y_stencil_op_hcompute_lxy_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lxy_stencil_read_ctrl_vars( op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out), .op_hcompute_lxy_stencil_read_ren(op_hcompute_lxy_stencil_read_ren_fsm_out));
  logic [15:0]op_hcompute_lyy_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lyy_stencil_read_ren_fsm_out;
  grad_y_stencil_op_hcompute_lyy_stencil_read_fsm grad_y_stencil_op_hcompute_lyy_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lyy_stencil_read_ctrl_vars( op_hcompute_lyy_stencil_read_ctrl_vars_fsm_out), .op_hcompute_lyy_stencil_read_ren(op_hcompute_lyy_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [3844];
  logic [15:0] grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_0;
  assign grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_0 = (((-2 + 1*op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_1;
  assign grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_1 = (((-2 + 1*op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out[2])) - -2);
grad_y_stencil_bank_selector grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_bank_selector(.d({grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_1,grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_0}));
  logic [15:0] grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_0;
  assign grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_0 = (((-2 + 1*op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_1;
  assign grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_1 = (((-2 + 1*op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[2])) - -2);
grad_y_stencil_bank_selector grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_bank_selector(.d({grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_1,grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_0}));
  logic [15:0] grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_0;
  assign grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_0 = (((-2 + 1*op_hcompute_lyy_stencil_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_1;
  assign grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_1 = (((-2 + 1*op_hcompute_lyy_stencil_read_ctrl_vars_fsm_out[2])) - -2);
grad_y_stencil_bank_selector grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_bank_selector(.d({grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_1,grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-2 + 1*op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out[1])) - -2)>>0)*1+((((-2 + 1*op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out[2])) - -2)>>0)*62);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-2 + 1*op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[1])) - -2)>>0)*1+((((-2 + 1*op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[2])) - -2)>>0)*62);
  always @(posedge clk) begin
    if (op_hcompute_grad_y_stencil_write_wen_fsm_out) begin
      case( grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_grad_y_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_lxy_stencil_read_ren_fsm_out) begin
      case( grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_bank_selector.out)
        0:op_hcompute_lxy_stencil_read[0] = bank_0[addr1];
      endcase
    end
  end

endmodule


module lgxx_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 57);
  assign out = bank_index_0*1+bank_index_1*2;

endmodule

// { op_hcompute_lgxx_stencil_1[root, lgxx_s1_y, lgxx_s1_x] -> [(265 + 64lgxx_s1_y + lgxx_s1_x)] }
module lgxx_stencil_op_hcompute_lgxx_stencil_1_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxx_stencil_1_write_ctrl_vars[2:0], output op_hcompute_lgxx_stencil_1_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxx_stencil_1_write_wen =(on && on2 && op_hcompute_lgxx_stencil_1_write_ctrl_vars[0]==0 && op_hcompute_lgxx_stencil_1_write_ctrl_vars[1]<=59 && op_hcompute_lgxx_stencil_1_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxx_stencil_1_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxx_stencil_1_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxx_stencil_1_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==264) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxx_stencil_1_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxx_stencil_1_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxx_stencil_1_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxx_stencil_1_write_ctrl_vars[2]<= 0;
          op_hcompute_lgxx_stencil_1_write_ctrl_vars[1] <= op_hcompute_lgxx_stencil_1_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxx_stencil_1_write_ctrl_vars[2] <= op_hcompute_lgxx_stencil_1_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lgxx_stencil[root, lgxx_s0_y, lgxx_s0_x] -> [(264 + 64lgxx_s0_y + lgxx_s0_x)] }
module lgxx_stencil_op_hcompute_lgxx_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxx_stencil_write_ctrl_vars[2:0], output op_hcompute_lgxx_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxx_stencil_write_wen =(on && on2 && op_hcompute_lgxx_stencil_write_ctrl_vars[0]==0 && op_hcompute_lgxx_stencil_write_ctrl_vars[1]<=59 && op_hcompute_lgxx_stencil_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxx_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxx_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxx_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==263) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxx_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxx_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxx_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxx_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_lgxx_stencil_write_ctrl_vars[1] <= op_hcompute_lgxx_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxx_stencil_write_ctrl_vars[2] <= op_hcompute_lgxx_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_cim_stencil[root, cim_s0_y, cim_s0_x] -> [(273 + 64cim_s0_y + cim_s0_x)] }
module lgxx_stencil_op_hcompute_cim_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_cim_stencil_read_ctrl_vars[2:0], output op_hcompute_cim_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_cim_stencil_read_ren =(on && on2 && op_hcompute_cim_stencil_read_ctrl_vars[0]==0 && op_hcompute_cim_stencil_read_ctrl_vars[1]<=59 && op_hcompute_cim_stencil_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_cim_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_cim_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_cim_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==272) begin
        on <=1;
        on2 <= 1;
        op_hcompute_cim_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_cim_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_cim_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[1] <= op_hcompute_cim_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[2] <= op_hcompute_cim_stencil_read_ctrl_vars[2] + 1;
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
// { op_hcompute_lgxx_stencil_1[root, lgxx_s1_y, lgxx_s1_x] -> [(265 + 64lgxx_s1_y + lgxx_s1_x)] }
module lgxx_stencil_op_hcompute_lgxx_stencil_1_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars[2:0], output op_hcompute_lgxx_stencil_1_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxx_stencil_1_read_ren =(on && on2 && op_hcompute_lgxx_stencil_1_read_ctrl_vars[0]==0 && op_hcompute_lgxx_stencil_1_read_ctrl_vars[1]<=59 && op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxx_stencil_1_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxx_stencil_1_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==264) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxx_stencil_1_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxx_stencil_1_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<= 0;
          op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] <= op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] <= op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] + 1;
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
module lgxx_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_stencil_read_ren,
	input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_cim_stencil_read [0:0] ,
	input op_hcompute_lgxx_stencil_1_read_ren,
	input [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgxx_stencil_1_read [0:0] ,
	input op_hcompute_lgxx_stencil_1_write_wen,
	input [15:0] op_hcompute_lgxx_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgxx_stencil_1_write [0:0] ,
	input op_hcompute_lgxx_stencil_write_wen,
	input [15:0] op_hcompute_lgxx_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgxx_stencil_write [0:0] );


  // Storage capacity pre-banking: 3600
  logic [15:0]op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxx_stencil_1_write_wen_fsm_out;
  lgxx_stencil_op_hcompute_lgxx_stencil_1_write_fsm lgxx_stencil_op_hcompute_lgxx_stencil_1_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxx_stencil_1_write_ctrl_vars( op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out), .op_hcompute_lgxx_stencil_1_write_wen(op_hcompute_lgxx_stencil_1_write_wen_fsm_out));
  logic [15:0]op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxx_stencil_write_wen_fsm_out;
  lgxx_stencil_op_hcompute_lgxx_stencil_write_fsm lgxx_stencil_op_hcompute_lgxx_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxx_stencil_write_ctrl_vars( op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out), .op_hcompute_lgxx_stencil_write_wen(op_hcompute_lgxx_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_stencil_read_ren_fsm_out;
  lgxx_stencil_op_hcompute_cim_stencil_read_fsm lgxx_stencil_op_hcompute_cim_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_stencil_read_ctrl_vars( op_hcompute_cim_stencil_read_ctrl_vars_fsm_out), .op_hcompute_cim_stencil_read_ren(op_hcompute_cim_stencil_read_ren_fsm_out));
  logic [15:0]op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxx_stencil_1_read_ren_fsm_out;
  lgxx_stencil_op_hcompute_lgxx_stencil_1_read_fsm lgxx_stencil_op_hcompute_lgxx_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxx_stencil_1_read_ctrl_vars( op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_lgxx_stencil_1_read_ren(op_hcompute_lgxx_stencil_1_read_ren_fsm_out));
  // # of banks: 114
  logic [15:0] bank_0 [60];
  logic [15:0] bank_1 [60];
  logic [15:0] bank_2 [60];
  logic [15:0] bank_3 [60];
  logic [15:0] bank_4 [60];
  logic [15:0] bank_5 [60];
  logic [15:0] bank_6 [60];
  logic [15:0] bank_7 [60];
  logic [15:0] bank_8 [60];
  logic [15:0] bank_9 [60];
  logic [15:0] bank_10 [60];
  logic [15:0] bank_11 [60];
  logic [15:0] bank_12 [60];
  logic [15:0] bank_13 [60];
  logic [15:0] bank_14 [60];
  logic [15:0] bank_15 [60];
  logic [15:0] bank_16 [60];
  logic [15:0] bank_17 [60];
  logic [15:0] bank_18 [60];
  logic [15:0] bank_19 [60];
  logic [15:0] bank_20 [60];
  logic [15:0] bank_21 [60];
  logic [15:0] bank_22 [60];
  logic [15:0] bank_23 [60];
  logic [15:0] bank_24 [60];
  logic [15:0] bank_25 [60];
  logic [15:0] bank_26 [60];
  logic [15:0] bank_27 [60];
  logic [15:0] bank_28 [60];
  logic [15:0] bank_29 [60];
  logic [15:0] bank_30 [60];
  logic [15:0] bank_31 [60];
  logic [15:0] bank_32 [60];
  logic [15:0] bank_33 [60];
  logic [15:0] bank_34 [60];
  logic [15:0] bank_35 [60];
  logic [15:0] bank_36 [60];
  logic [15:0] bank_37 [60];
  logic [15:0] bank_38 [60];
  logic [15:0] bank_39 [60];
  logic [15:0] bank_40 [60];
  logic [15:0] bank_41 [60];
  logic [15:0] bank_42 [60];
  logic [15:0] bank_43 [60];
  logic [15:0] bank_44 [60];
  logic [15:0] bank_45 [60];
  logic [15:0] bank_46 [60];
  logic [15:0] bank_47 [60];
  logic [15:0] bank_48 [60];
  logic [15:0] bank_49 [60];
  logic [15:0] bank_50 [60];
  logic [15:0] bank_51 [60];
  logic [15:0] bank_52 [60];
  logic [15:0] bank_53 [60];
  logic [15:0] bank_54 [60];
  logic [15:0] bank_55 [60];
  logic [15:0] bank_56 [60];
  logic [15:0] bank_57 [60];
  logic [15:0] bank_58 [60];
  logic [15:0] bank_59 [60];
  logic [15:0] bank_60 [60];
  logic [15:0] bank_61 [60];
  logic [15:0] bank_62 [60];
  logic [15:0] bank_63 [60];
  logic [15:0] bank_64 [60];
  logic [15:0] bank_65 [60];
  logic [15:0] bank_66 [60];
  logic [15:0] bank_67 [60];
  logic [15:0] bank_68 [60];
  logic [15:0] bank_69 [60];
  logic [15:0] bank_70 [60];
  logic [15:0] bank_71 [60];
  logic [15:0] bank_72 [60];
  logic [15:0] bank_73 [60];
  logic [15:0] bank_74 [60];
  logic [15:0] bank_75 [60];
  logic [15:0] bank_76 [60];
  logic [15:0] bank_77 [60];
  logic [15:0] bank_78 [60];
  logic [15:0] bank_79 [60];
  logic [15:0] bank_80 [60];
  logic [15:0] bank_81 [60];
  logic [15:0] bank_82 [60];
  logic [15:0] bank_83 [60];
  logic [15:0] bank_84 [60];
  logic [15:0] bank_85 [60];
  logic [15:0] bank_86 [60];
  logic [15:0] bank_87 [60];
  logic [15:0] bank_88 [60];
  logic [15:0] bank_89 [60];
  logic [15:0] bank_90 [60];
  logic [15:0] bank_91 [60];
  logic [15:0] bank_92 [60];
  logic [15:0] bank_93 [60];
  logic [15:0] bank_94 [60];
  logic [15:0] bank_95 [60];
  logic [15:0] bank_96 [60];
  logic [15:0] bank_97 [60];
  logic [15:0] bank_98 [60];
  logic [15:0] bank_99 [60];
  logic [15:0] bank_100 [60];
  logic [15:0] bank_101 [60];
  logic [15:0] bank_102 [60];
  logic [15:0] bank_103 [60];
  logic [15:0] bank_104 [60];
  logic [15:0] bank_105 [60];
  logic [15:0] bank_106 [60];
  logic [15:0] bank_107 [60];
  logic [15:0] bank_108 [60];
  logic [15:0] bank_109 [60];
  logic [15:0] bank_110 [60];
  logic [15:0] bank_111 [60];
  logic [15:0] bank_112 [60];
  logic [15:0] bank_113 [60];
  logic [15:0] lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_0;
  assign lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_0 = (((-1 + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_1;
  assign lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_1 = (((-1 + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out[2])) - -1);
lgxx_stencil_bank_selector lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector(.d({lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_1,lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_0}));
  logic [15:0] lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_0;
  assign lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_0 = (((-1 + 1*op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_1;
  assign lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_1 = (((-1 + 1*op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out[2])) - -1);
lgxx_stencil_bank_selector lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector(.d({lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_1,lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_0}));
  logic [15:0] lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_0;
  assign lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_0 = (((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_1;
  assign lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_1 = (((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2])) - -1);
lgxx_stencil_bank_selector lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector(.d({lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_1,lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_0}));
  logic [15:0] lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_0;
  assign lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_0 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_1;
  assign lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_1 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -1);
lgxx_stencil_bank_selector lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector(.d({lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_1,lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-1 + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out[1])) - -1)>>1)*1+$rtoi($floor((((-1 + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out[2])) - -1)/ 57))*30);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-1 + 1*op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out[1])) - -1)>>1)*1+$rtoi($floor((((-1 + 1*op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out[2])) - -1)/ 57))*30);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr2;
  assign addr2 = (((((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+$rtoi($floor((((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2])) - -1)/ 57))*30);
  logic [15:0] addr3;
  assign addr3 = (((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+$rtoi($floor((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -1)/ 57))*30);
  always @(posedge clk) begin
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out) begin
      case( lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        1:bank_1[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        2:bank_2[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        3:bank_3[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        4:bank_4[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        5:bank_5[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        6:bank_6[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        7:bank_7[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        8:bank_8[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        9:bank_9[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        10:bank_10[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        11:bank_11[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        12:bank_12[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        13:bank_13[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        14:bank_14[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        15:bank_15[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        16:bank_16[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        17:bank_17[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        18:bank_18[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        19:bank_19[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        20:bank_20[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        21:bank_21[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        22:bank_22[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        23:bank_23[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        24:bank_24[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        25:bank_25[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        26:bank_26[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        27:bank_27[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        28:bank_28[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        29:bank_29[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        30:bank_30[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        31:bank_31[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        32:bank_32[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        33:bank_33[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        34:bank_34[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        35:bank_35[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        36:bank_36[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        37:bank_37[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        38:bank_38[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        39:bank_39[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        40:bank_40[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        41:bank_41[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        42:bank_42[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        43:bank_43[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        44:bank_44[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        45:bank_45[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        46:bank_46[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        47:bank_47[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        48:bank_48[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        49:bank_49[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        50:bank_50[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        51:bank_51[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        52:bank_52[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        53:bank_53[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        54:bank_54[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        55:bank_55[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        56:bank_56[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        57:bank_57[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        58:bank_58[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        59:bank_59[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        60:bank_60[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        61:bank_61[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        62:bank_62[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        63:bank_63[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        64:bank_64[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        65:bank_65[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        66:bank_66[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        67:bank_67[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        68:bank_68[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        69:bank_69[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        70:bank_70[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        71:bank_71[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        72:bank_72[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        73:bank_73[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        74:bank_74[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        75:bank_75[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        76:bank_76[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        77:bank_77[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        78:bank_78[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        79:bank_79[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        80:bank_80[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        81:bank_81[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        82:bank_82[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        83:bank_83[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        84:bank_84[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        85:bank_85[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        86:bank_86[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        87:bank_87[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        88:bank_88[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        89:bank_89[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        90:bank_90[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        91:bank_91[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        92:bank_92[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        93:bank_93[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        94:bank_94[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        95:bank_95[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        96:bank_96[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        97:bank_97[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        98:bank_98[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        99:bank_99[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        100:bank_100[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        101:bank_101[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        102:bank_102[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        103:bank_103[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        104:bank_104[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        105:bank_105[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        106:bank_106[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        107:bank_107[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        108:bank_108[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        109:bank_109[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        110:bank_110[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        111:bank_111[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        112:bank_112[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        113:bank_113[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
      endcase
    end
    if (op_hcompute_lgxx_stencil_write_wen_fsm_out) begin
      case( lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out)
        0:bank_0[addr1] <= op_hcompute_lgxx_stencil_write[0];
        1:bank_1[addr1] <= op_hcompute_lgxx_stencil_write[0];
        2:bank_2[addr1] <= op_hcompute_lgxx_stencil_write[0];
        3:bank_3[addr1] <= op_hcompute_lgxx_stencil_write[0];
        4:bank_4[addr1] <= op_hcompute_lgxx_stencil_write[0];
        5:bank_5[addr1] <= op_hcompute_lgxx_stencil_write[0];
        6:bank_6[addr1] <= op_hcompute_lgxx_stencil_write[0];
        7:bank_7[addr1] <= op_hcompute_lgxx_stencil_write[0];
        8:bank_8[addr1] <= op_hcompute_lgxx_stencil_write[0];
        9:bank_9[addr1] <= op_hcompute_lgxx_stencil_write[0];
        10:bank_10[addr1] <= op_hcompute_lgxx_stencil_write[0];
        11:bank_11[addr1] <= op_hcompute_lgxx_stencil_write[0];
        12:bank_12[addr1] <= op_hcompute_lgxx_stencil_write[0];
        13:bank_13[addr1] <= op_hcompute_lgxx_stencil_write[0];
        14:bank_14[addr1] <= op_hcompute_lgxx_stencil_write[0];
        15:bank_15[addr1] <= op_hcompute_lgxx_stencil_write[0];
        16:bank_16[addr1] <= op_hcompute_lgxx_stencil_write[0];
        17:bank_17[addr1] <= op_hcompute_lgxx_stencil_write[0];
        18:bank_18[addr1] <= op_hcompute_lgxx_stencil_write[0];
        19:bank_19[addr1] <= op_hcompute_lgxx_stencil_write[0];
        20:bank_20[addr1] <= op_hcompute_lgxx_stencil_write[0];
        21:bank_21[addr1] <= op_hcompute_lgxx_stencil_write[0];
        22:bank_22[addr1] <= op_hcompute_lgxx_stencil_write[0];
        23:bank_23[addr1] <= op_hcompute_lgxx_stencil_write[0];
        24:bank_24[addr1] <= op_hcompute_lgxx_stencil_write[0];
        25:bank_25[addr1] <= op_hcompute_lgxx_stencil_write[0];
        26:bank_26[addr1] <= op_hcompute_lgxx_stencil_write[0];
        27:bank_27[addr1] <= op_hcompute_lgxx_stencil_write[0];
        28:bank_28[addr1] <= op_hcompute_lgxx_stencil_write[0];
        29:bank_29[addr1] <= op_hcompute_lgxx_stencil_write[0];
        30:bank_30[addr1] <= op_hcompute_lgxx_stencil_write[0];
        31:bank_31[addr1] <= op_hcompute_lgxx_stencil_write[0];
        32:bank_32[addr1] <= op_hcompute_lgxx_stencil_write[0];
        33:bank_33[addr1] <= op_hcompute_lgxx_stencil_write[0];
        34:bank_34[addr1] <= op_hcompute_lgxx_stencil_write[0];
        35:bank_35[addr1] <= op_hcompute_lgxx_stencil_write[0];
        36:bank_36[addr1] <= op_hcompute_lgxx_stencil_write[0];
        37:bank_37[addr1] <= op_hcompute_lgxx_stencil_write[0];
        38:bank_38[addr1] <= op_hcompute_lgxx_stencil_write[0];
        39:bank_39[addr1] <= op_hcompute_lgxx_stencil_write[0];
        40:bank_40[addr1] <= op_hcompute_lgxx_stencil_write[0];
        41:bank_41[addr1] <= op_hcompute_lgxx_stencil_write[0];
        42:bank_42[addr1] <= op_hcompute_lgxx_stencil_write[0];
        43:bank_43[addr1] <= op_hcompute_lgxx_stencil_write[0];
        44:bank_44[addr1] <= op_hcompute_lgxx_stencil_write[0];
        45:bank_45[addr1] <= op_hcompute_lgxx_stencil_write[0];
        46:bank_46[addr1] <= op_hcompute_lgxx_stencil_write[0];
        47:bank_47[addr1] <= op_hcompute_lgxx_stencil_write[0];
        48:bank_48[addr1] <= op_hcompute_lgxx_stencil_write[0];
        49:bank_49[addr1] <= op_hcompute_lgxx_stencil_write[0];
        50:bank_50[addr1] <= op_hcompute_lgxx_stencil_write[0];
        51:bank_51[addr1] <= op_hcompute_lgxx_stencil_write[0];
        52:bank_52[addr1] <= op_hcompute_lgxx_stencil_write[0];
        53:bank_53[addr1] <= op_hcompute_lgxx_stencil_write[0];
        54:bank_54[addr1] <= op_hcompute_lgxx_stencil_write[0];
        55:bank_55[addr1] <= op_hcompute_lgxx_stencil_write[0];
        56:bank_56[addr1] <= op_hcompute_lgxx_stencil_write[0];
        57:bank_57[addr1] <= op_hcompute_lgxx_stencil_write[0];
        58:bank_58[addr1] <= op_hcompute_lgxx_stencil_write[0];
        59:bank_59[addr1] <= op_hcompute_lgxx_stencil_write[0];
        60:bank_60[addr1] <= op_hcompute_lgxx_stencil_write[0];
        61:bank_61[addr1] <= op_hcompute_lgxx_stencil_write[0];
        62:bank_62[addr1] <= op_hcompute_lgxx_stencil_write[0];
        63:bank_63[addr1] <= op_hcompute_lgxx_stencil_write[0];
        64:bank_64[addr1] <= op_hcompute_lgxx_stencil_write[0];
        65:bank_65[addr1] <= op_hcompute_lgxx_stencil_write[0];
        66:bank_66[addr1] <= op_hcompute_lgxx_stencil_write[0];
        67:bank_67[addr1] <= op_hcompute_lgxx_stencil_write[0];
        68:bank_68[addr1] <= op_hcompute_lgxx_stencil_write[0];
        69:bank_69[addr1] <= op_hcompute_lgxx_stencil_write[0];
        70:bank_70[addr1] <= op_hcompute_lgxx_stencil_write[0];
        71:bank_71[addr1] <= op_hcompute_lgxx_stencil_write[0];
        72:bank_72[addr1] <= op_hcompute_lgxx_stencil_write[0];
        73:bank_73[addr1] <= op_hcompute_lgxx_stencil_write[0];
        74:bank_74[addr1] <= op_hcompute_lgxx_stencil_write[0];
        75:bank_75[addr1] <= op_hcompute_lgxx_stencil_write[0];
        76:bank_76[addr1] <= op_hcompute_lgxx_stencil_write[0];
        77:bank_77[addr1] <= op_hcompute_lgxx_stencil_write[0];
        78:bank_78[addr1] <= op_hcompute_lgxx_stencil_write[0];
        79:bank_79[addr1] <= op_hcompute_lgxx_stencil_write[0];
        80:bank_80[addr1] <= op_hcompute_lgxx_stencil_write[0];
        81:bank_81[addr1] <= op_hcompute_lgxx_stencil_write[0];
        82:bank_82[addr1] <= op_hcompute_lgxx_stencil_write[0];
        83:bank_83[addr1] <= op_hcompute_lgxx_stencil_write[0];
        84:bank_84[addr1] <= op_hcompute_lgxx_stencil_write[0];
        85:bank_85[addr1] <= op_hcompute_lgxx_stencil_write[0];
        86:bank_86[addr1] <= op_hcompute_lgxx_stencil_write[0];
        87:bank_87[addr1] <= op_hcompute_lgxx_stencil_write[0];
        88:bank_88[addr1] <= op_hcompute_lgxx_stencil_write[0];
        89:bank_89[addr1] <= op_hcompute_lgxx_stencil_write[0];
        90:bank_90[addr1] <= op_hcompute_lgxx_stencil_write[0];
        91:bank_91[addr1] <= op_hcompute_lgxx_stencil_write[0];
        92:bank_92[addr1] <= op_hcompute_lgxx_stencil_write[0];
        93:bank_93[addr1] <= op_hcompute_lgxx_stencil_write[0];
        94:bank_94[addr1] <= op_hcompute_lgxx_stencil_write[0];
        95:bank_95[addr1] <= op_hcompute_lgxx_stencil_write[0];
        96:bank_96[addr1] <= op_hcompute_lgxx_stencil_write[0];
        97:bank_97[addr1] <= op_hcompute_lgxx_stencil_write[0];
        98:bank_98[addr1] <= op_hcompute_lgxx_stencil_write[0];
        99:bank_99[addr1] <= op_hcompute_lgxx_stencil_write[0];
        100:bank_100[addr1] <= op_hcompute_lgxx_stencil_write[0];
        101:bank_101[addr1] <= op_hcompute_lgxx_stencil_write[0];
        102:bank_102[addr1] <= op_hcompute_lgxx_stencil_write[0];
        103:bank_103[addr1] <= op_hcompute_lgxx_stencil_write[0];
        104:bank_104[addr1] <= op_hcompute_lgxx_stencil_write[0];
        105:bank_105[addr1] <= op_hcompute_lgxx_stencil_write[0];
        106:bank_106[addr1] <= op_hcompute_lgxx_stencil_write[0];
        107:bank_107[addr1] <= op_hcompute_lgxx_stencil_write[0];
        108:bank_108[addr1] <= op_hcompute_lgxx_stencil_write[0];
        109:bank_109[addr1] <= op_hcompute_lgxx_stencil_write[0];
        110:bank_110[addr1] <= op_hcompute_lgxx_stencil_write[0];
        111:bank_111[addr1] <= op_hcompute_lgxx_stencil_write[0];
        112:bank_112[addr1] <= op_hcompute_lgxx_stencil_write[0];
        113:bank_113[addr1] <= op_hcompute_lgxx_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_cim_stencil_read_ren_fsm_out) begin
      case( lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out)
        0:op_hcompute_cim_stencil_read[0] = bank_0[addr2];
        1:op_hcompute_cim_stencil_read[0] = bank_1[addr2];
        2:op_hcompute_cim_stencil_read[0] = bank_2[addr2];
        3:op_hcompute_cim_stencil_read[0] = bank_3[addr2];
        4:op_hcompute_cim_stencil_read[0] = bank_4[addr2];
        5:op_hcompute_cim_stencil_read[0] = bank_5[addr2];
        6:op_hcompute_cim_stencil_read[0] = bank_6[addr2];
        7:op_hcompute_cim_stencil_read[0] = bank_7[addr2];
        8:op_hcompute_cim_stencil_read[0] = bank_8[addr2];
        9:op_hcompute_cim_stencil_read[0] = bank_9[addr2];
        10:op_hcompute_cim_stencil_read[0] = bank_10[addr2];
        11:op_hcompute_cim_stencil_read[0] = bank_11[addr2];
        12:op_hcompute_cim_stencil_read[0] = bank_12[addr2];
        13:op_hcompute_cim_stencil_read[0] = bank_13[addr2];
        14:op_hcompute_cim_stencil_read[0] = bank_14[addr2];
        15:op_hcompute_cim_stencil_read[0] = bank_15[addr2];
        16:op_hcompute_cim_stencil_read[0] = bank_16[addr2];
        17:op_hcompute_cim_stencil_read[0] = bank_17[addr2];
        18:op_hcompute_cim_stencil_read[0] = bank_18[addr2];
        19:op_hcompute_cim_stencil_read[0] = bank_19[addr2];
        20:op_hcompute_cim_stencil_read[0] = bank_20[addr2];
        21:op_hcompute_cim_stencil_read[0] = bank_21[addr2];
        22:op_hcompute_cim_stencil_read[0] = bank_22[addr2];
        23:op_hcompute_cim_stencil_read[0] = bank_23[addr2];
        24:op_hcompute_cim_stencil_read[0] = bank_24[addr2];
        25:op_hcompute_cim_stencil_read[0] = bank_25[addr2];
        26:op_hcompute_cim_stencil_read[0] = bank_26[addr2];
        27:op_hcompute_cim_stencil_read[0] = bank_27[addr2];
        28:op_hcompute_cim_stencil_read[0] = bank_28[addr2];
        29:op_hcompute_cim_stencil_read[0] = bank_29[addr2];
        30:op_hcompute_cim_stencil_read[0] = bank_30[addr2];
        31:op_hcompute_cim_stencil_read[0] = bank_31[addr2];
        32:op_hcompute_cim_stencil_read[0] = bank_32[addr2];
        33:op_hcompute_cim_stencil_read[0] = bank_33[addr2];
        34:op_hcompute_cim_stencil_read[0] = bank_34[addr2];
        35:op_hcompute_cim_stencil_read[0] = bank_35[addr2];
        36:op_hcompute_cim_stencil_read[0] = bank_36[addr2];
        37:op_hcompute_cim_stencil_read[0] = bank_37[addr2];
        38:op_hcompute_cim_stencil_read[0] = bank_38[addr2];
        39:op_hcompute_cim_stencil_read[0] = bank_39[addr2];
        40:op_hcompute_cim_stencil_read[0] = bank_40[addr2];
        41:op_hcompute_cim_stencil_read[0] = bank_41[addr2];
        42:op_hcompute_cim_stencil_read[0] = bank_42[addr2];
        43:op_hcompute_cim_stencil_read[0] = bank_43[addr2];
        44:op_hcompute_cim_stencil_read[0] = bank_44[addr2];
        45:op_hcompute_cim_stencil_read[0] = bank_45[addr2];
        46:op_hcompute_cim_stencil_read[0] = bank_46[addr2];
        47:op_hcompute_cim_stencil_read[0] = bank_47[addr2];
        48:op_hcompute_cim_stencil_read[0] = bank_48[addr2];
        49:op_hcompute_cim_stencil_read[0] = bank_49[addr2];
        50:op_hcompute_cim_stencil_read[0] = bank_50[addr2];
        51:op_hcompute_cim_stencil_read[0] = bank_51[addr2];
        52:op_hcompute_cim_stencil_read[0] = bank_52[addr2];
        53:op_hcompute_cim_stencil_read[0] = bank_53[addr2];
        54:op_hcompute_cim_stencil_read[0] = bank_54[addr2];
        55:op_hcompute_cim_stencil_read[0] = bank_55[addr2];
        56:op_hcompute_cim_stencil_read[0] = bank_56[addr2];
        57:op_hcompute_cim_stencil_read[0] = bank_57[addr2];
        58:op_hcompute_cim_stencil_read[0] = bank_58[addr2];
        59:op_hcompute_cim_stencil_read[0] = bank_59[addr2];
        60:op_hcompute_cim_stencil_read[0] = bank_60[addr2];
        61:op_hcompute_cim_stencil_read[0] = bank_61[addr2];
        62:op_hcompute_cim_stencil_read[0] = bank_62[addr2];
        63:op_hcompute_cim_stencil_read[0] = bank_63[addr2];
        64:op_hcompute_cim_stencil_read[0] = bank_64[addr2];
        65:op_hcompute_cim_stencil_read[0] = bank_65[addr2];
        66:op_hcompute_cim_stencil_read[0] = bank_66[addr2];
        67:op_hcompute_cim_stencil_read[0] = bank_67[addr2];
        68:op_hcompute_cim_stencil_read[0] = bank_68[addr2];
        69:op_hcompute_cim_stencil_read[0] = bank_69[addr2];
        70:op_hcompute_cim_stencil_read[0] = bank_70[addr2];
        71:op_hcompute_cim_stencil_read[0] = bank_71[addr2];
        72:op_hcompute_cim_stencil_read[0] = bank_72[addr2];
        73:op_hcompute_cim_stencil_read[0] = bank_73[addr2];
        74:op_hcompute_cim_stencil_read[0] = bank_74[addr2];
        75:op_hcompute_cim_stencil_read[0] = bank_75[addr2];
        76:op_hcompute_cim_stencil_read[0] = bank_76[addr2];
        77:op_hcompute_cim_stencil_read[0] = bank_77[addr2];
        78:op_hcompute_cim_stencil_read[0] = bank_78[addr2];
        79:op_hcompute_cim_stencil_read[0] = bank_79[addr2];
        80:op_hcompute_cim_stencil_read[0] = bank_80[addr2];
        81:op_hcompute_cim_stencil_read[0] = bank_81[addr2];
        82:op_hcompute_cim_stencil_read[0] = bank_82[addr2];
        83:op_hcompute_cim_stencil_read[0] = bank_83[addr2];
        84:op_hcompute_cim_stencil_read[0] = bank_84[addr2];
        85:op_hcompute_cim_stencil_read[0] = bank_85[addr2];
        86:op_hcompute_cim_stencil_read[0] = bank_86[addr2];
        87:op_hcompute_cim_stencil_read[0] = bank_87[addr2];
        88:op_hcompute_cim_stencil_read[0] = bank_88[addr2];
        89:op_hcompute_cim_stencil_read[0] = bank_89[addr2];
        90:op_hcompute_cim_stencil_read[0] = bank_90[addr2];
        91:op_hcompute_cim_stencil_read[0] = bank_91[addr2];
        92:op_hcompute_cim_stencil_read[0] = bank_92[addr2];
        93:op_hcompute_cim_stencil_read[0] = bank_93[addr2];
        94:op_hcompute_cim_stencil_read[0] = bank_94[addr2];
        95:op_hcompute_cim_stencil_read[0] = bank_95[addr2];
        96:op_hcompute_cim_stencil_read[0] = bank_96[addr2];
        97:op_hcompute_cim_stencil_read[0] = bank_97[addr2];
        98:op_hcompute_cim_stencil_read[0] = bank_98[addr2];
        99:op_hcompute_cim_stencil_read[0] = bank_99[addr2];
        100:op_hcompute_cim_stencil_read[0] = bank_100[addr2];
        101:op_hcompute_cim_stencil_read[0] = bank_101[addr2];
        102:op_hcompute_cim_stencil_read[0] = bank_102[addr2];
        103:op_hcompute_cim_stencil_read[0] = bank_103[addr2];
        104:op_hcompute_cim_stencil_read[0] = bank_104[addr2];
        105:op_hcompute_cim_stencil_read[0] = bank_105[addr2];
        106:op_hcompute_cim_stencil_read[0] = bank_106[addr2];
        107:op_hcompute_cim_stencil_read[0] = bank_107[addr2];
        108:op_hcompute_cim_stencil_read[0] = bank_108[addr2];
        109:op_hcompute_cim_stencil_read[0] = bank_109[addr2];
        110:op_hcompute_cim_stencil_read[0] = bank_110[addr2];
        111:op_hcompute_cim_stencil_read[0] = bank_111[addr2];
        112:op_hcompute_cim_stencil_read[0] = bank_112[addr2];
        113:op_hcompute_cim_stencil_read[0] = bank_113[addr2];
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[0] = bank_0[addr3];
        1:op_hcompute_lgxx_stencil_1_read[0] = bank_1[addr3];
        2:op_hcompute_lgxx_stencil_1_read[0] = bank_2[addr3];
        3:op_hcompute_lgxx_stencil_1_read[0] = bank_3[addr3];
        4:op_hcompute_lgxx_stencil_1_read[0] = bank_4[addr3];
        5:op_hcompute_lgxx_stencil_1_read[0] = bank_5[addr3];
        6:op_hcompute_lgxx_stencil_1_read[0] = bank_6[addr3];
        7:op_hcompute_lgxx_stencil_1_read[0] = bank_7[addr3];
        8:op_hcompute_lgxx_stencil_1_read[0] = bank_8[addr3];
        9:op_hcompute_lgxx_stencil_1_read[0] = bank_9[addr3];
        10:op_hcompute_lgxx_stencil_1_read[0] = bank_10[addr3];
        11:op_hcompute_lgxx_stencil_1_read[0] = bank_11[addr3];
        12:op_hcompute_lgxx_stencil_1_read[0] = bank_12[addr3];
        13:op_hcompute_lgxx_stencil_1_read[0] = bank_13[addr3];
        14:op_hcompute_lgxx_stencil_1_read[0] = bank_14[addr3];
        15:op_hcompute_lgxx_stencil_1_read[0] = bank_15[addr3];
        16:op_hcompute_lgxx_stencil_1_read[0] = bank_16[addr3];
        17:op_hcompute_lgxx_stencil_1_read[0] = bank_17[addr3];
        18:op_hcompute_lgxx_stencil_1_read[0] = bank_18[addr3];
        19:op_hcompute_lgxx_stencil_1_read[0] = bank_19[addr3];
        20:op_hcompute_lgxx_stencil_1_read[0] = bank_20[addr3];
        21:op_hcompute_lgxx_stencil_1_read[0] = bank_21[addr3];
        22:op_hcompute_lgxx_stencil_1_read[0] = bank_22[addr3];
        23:op_hcompute_lgxx_stencil_1_read[0] = bank_23[addr3];
        24:op_hcompute_lgxx_stencil_1_read[0] = bank_24[addr3];
        25:op_hcompute_lgxx_stencil_1_read[0] = bank_25[addr3];
        26:op_hcompute_lgxx_stencil_1_read[0] = bank_26[addr3];
        27:op_hcompute_lgxx_stencil_1_read[0] = bank_27[addr3];
        28:op_hcompute_lgxx_stencil_1_read[0] = bank_28[addr3];
        29:op_hcompute_lgxx_stencil_1_read[0] = bank_29[addr3];
        30:op_hcompute_lgxx_stencil_1_read[0] = bank_30[addr3];
        31:op_hcompute_lgxx_stencil_1_read[0] = bank_31[addr3];
        32:op_hcompute_lgxx_stencil_1_read[0] = bank_32[addr3];
        33:op_hcompute_lgxx_stencil_1_read[0] = bank_33[addr3];
        34:op_hcompute_lgxx_stencil_1_read[0] = bank_34[addr3];
        35:op_hcompute_lgxx_stencil_1_read[0] = bank_35[addr3];
        36:op_hcompute_lgxx_stencil_1_read[0] = bank_36[addr3];
        37:op_hcompute_lgxx_stencil_1_read[0] = bank_37[addr3];
        38:op_hcompute_lgxx_stencil_1_read[0] = bank_38[addr3];
        39:op_hcompute_lgxx_stencil_1_read[0] = bank_39[addr3];
        40:op_hcompute_lgxx_stencil_1_read[0] = bank_40[addr3];
        41:op_hcompute_lgxx_stencil_1_read[0] = bank_41[addr3];
        42:op_hcompute_lgxx_stencil_1_read[0] = bank_42[addr3];
        43:op_hcompute_lgxx_stencil_1_read[0] = bank_43[addr3];
        44:op_hcompute_lgxx_stencil_1_read[0] = bank_44[addr3];
        45:op_hcompute_lgxx_stencil_1_read[0] = bank_45[addr3];
        46:op_hcompute_lgxx_stencil_1_read[0] = bank_46[addr3];
        47:op_hcompute_lgxx_stencil_1_read[0] = bank_47[addr3];
        48:op_hcompute_lgxx_stencil_1_read[0] = bank_48[addr3];
        49:op_hcompute_lgxx_stencil_1_read[0] = bank_49[addr3];
        50:op_hcompute_lgxx_stencil_1_read[0] = bank_50[addr3];
        51:op_hcompute_lgxx_stencil_1_read[0] = bank_51[addr3];
        52:op_hcompute_lgxx_stencil_1_read[0] = bank_52[addr3];
        53:op_hcompute_lgxx_stencil_1_read[0] = bank_53[addr3];
        54:op_hcompute_lgxx_stencil_1_read[0] = bank_54[addr3];
        55:op_hcompute_lgxx_stencil_1_read[0] = bank_55[addr3];
        56:op_hcompute_lgxx_stencil_1_read[0] = bank_56[addr3];
        57:op_hcompute_lgxx_stencil_1_read[0] = bank_57[addr3];
        58:op_hcompute_lgxx_stencil_1_read[0] = bank_58[addr3];
        59:op_hcompute_lgxx_stencil_1_read[0] = bank_59[addr3];
        60:op_hcompute_lgxx_stencil_1_read[0] = bank_60[addr3];
        61:op_hcompute_lgxx_stencil_1_read[0] = bank_61[addr3];
        62:op_hcompute_lgxx_stencil_1_read[0] = bank_62[addr3];
        63:op_hcompute_lgxx_stencil_1_read[0] = bank_63[addr3];
        64:op_hcompute_lgxx_stencil_1_read[0] = bank_64[addr3];
        65:op_hcompute_lgxx_stencil_1_read[0] = bank_65[addr3];
        66:op_hcompute_lgxx_stencil_1_read[0] = bank_66[addr3];
        67:op_hcompute_lgxx_stencil_1_read[0] = bank_67[addr3];
        68:op_hcompute_lgxx_stencil_1_read[0] = bank_68[addr3];
        69:op_hcompute_lgxx_stencil_1_read[0] = bank_69[addr3];
        70:op_hcompute_lgxx_stencil_1_read[0] = bank_70[addr3];
        71:op_hcompute_lgxx_stencil_1_read[0] = bank_71[addr3];
        72:op_hcompute_lgxx_stencil_1_read[0] = bank_72[addr3];
        73:op_hcompute_lgxx_stencil_1_read[0] = bank_73[addr3];
        74:op_hcompute_lgxx_stencil_1_read[0] = bank_74[addr3];
        75:op_hcompute_lgxx_stencil_1_read[0] = bank_75[addr3];
        76:op_hcompute_lgxx_stencil_1_read[0] = bank_76[addr3];
        77:op_hcompute_lgxx_stencil_1_read[0] = bank_77[addr3];
        78:op_hcompute_lgxx_stencil_1_read[0] = bank_78[addr3];
        79:op_hcompute_lgxx_stencil_1_read[0] = bank_79[addr3];
        80:op_hcompute_lgxx_stencil_1_read[0] = bank_80[addr3];
        81:op_hcompute_lgxx_stencil_1_read[0] = bank_81[addr3];
        82:op_hcompute_lgxx_stencil_1_read[0] = bank_82[addr3];
        83:op_hcompute_lgxx_stencil_1_read[0] = bank_83[addr3];
        84:op_hcompute_lgxx_stencil_1_read[0] = bank_84[addr3];
        85:op_hcompute_lgxx_stencil_1_read[0] = bank_85[addr3];
        86:op_hcompute_lgxx_stencil_1_read[0] = bank_86[addr3];
        87:op_hcompute_lgxx_stencil_1_read[0] = bank_87[addr3];
        88:op_hcompute_lgxx_stencil_1_read[0] = bank_88[addr3];
        89:op_hcompute_lgxx_stencil_1_read[0] = bank_89[addr3];
        90:op_hcompute_lgxx_stencil_1_read[0] = bank_90[addr3];
        91:op_hcompute_lgxx_stencil_1_read[0] = bank_91[addr3];
        92:op_hcompute_lgxx_stencil_1_read[0] = bank_92[addr3];
        93:op_hcompute_lgxx_stencil_1_read[0] = bank_93[addr3];
        94:op_hcompute_lgxx_stencil_1_read[0] = bank_94[addr3];
        95:op_hcompute_lgxx_stencil_1_read[0] = bank_95[addr3];
        96:op_hcompute_lgxx_stencil_1_read[0] = bank_96[addr3];
        97:op_hcompute_lgxx_stencil_1_read[0] = bank_97[addr3];
        98:op_hcompute_lgxx_stencil_1_read[0] = bank_98[addr3];
        99:op_hcompute_lgxx_stencil_1_read[0] = bank_99[addr3];
        100:op_hcompute_lgxx_stencil_1_read[0] = bank_100[addr3];
        101:op_hcompute_lgxx_stencil_1_read[0] = bank_101[addr3];
        102:op_hcompute_lgxx_stencil_1_read[0] = bank_102[addr3];
        103:op_hcompute_lgxx_stencil_1_read[0] = bank_103[addr3];
        104:op_hcompute_lgxx_stencil_1_read[0] = bank_104[addr3];
        105:op_hcompute_lgxx_stencil_1_read[0] = bank_105[addr3];
        106:op_hcompute_lgxx_stencil_1_read[0] = bank_106[addr3];
        107:op_hcompute_lgxx_stencil_1_read[0] = bank_107[addr3];
        108:op_hcompute_lgxx_stencil_1_read[0] = bank_108[addr3];
        109:op_hcompute_lgxx_stencil_1_read[0] = bank_109[addr3];
        110:op_hcompute_lgxx_stencil_1_read[0] = bank_110[addr3];
        111:op_hcompute_lgxx_stencil_1_read[0] = bank_111[addr3];
        112:op_hcompute_lgxx_stencil_1_read[0] = bank_112[addr3];
        113:op_hcompute_lgxx_stencil_1_read[0] = bank_113[addr3];
      endcase
    end
  end

endmodule


module lgxy_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 5);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

// { op_hcompute_lgxy_stencil_1[root, lgxy_s1_y, lgxy_s1_x] -> [(269 + 64lgxy_s1_y + lgxy_s1_x)] }
module lgxy_stencil_op_hcompute_lgxy_stencil_1_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxy_stencil_1_write_ctrl_vars[2:0], output op_hcompute_lgxy_stencil_1_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxy_stencil_1_write_wen =(on && on2 && op_hcompute_lgxy_stencil_1_write_ctrl_vars[0]==0 && op_hcompute_lgxy_stencil_1_write_ctrl_vars[1]<=59 && op_hcompute_lgxy_stencil_1_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxy_stencil_1_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxy_stencil_1_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxy_stencil_1_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==268) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxy_stencil_1_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxy_stencil_1_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxy_stencil_1_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxy_stencil_1_write_ctrl_vars[2]<= 0;
          op_hcompute_lgxy_stencil_1_write_ctrl_vars[1] <= op_hcompute_lgxy_stencil_1_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxy_stencil_1_write_ctrl_vars[2] <= op_hcompute_lgxy_stencil_1_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lgxy_stencil[root, lgxy_s0_y, lgxy_s0_x] -> [(268 + 64lgxy_s0_y + lgxy_s0_x)] }
module lgxy_stencil_op_hcompute_lgxy_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxy_stencil_write_ctrl_vars[2:0], output op_hcompute_lgxy_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxy_stencil_write_wen =(on && on2 && op_hcompute_lgxy_stencil_write_ctrl_vars[0]==0 && op_hcompute_lgxy_stencil_write_ctrl_vars[1]<=59 && op_hcompute_lgxy_stencil_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxy_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxy_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxy_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==267) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxy_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxy_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxy_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxy_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_lgxy_stencil_write_ctrl_vars[1] <= op_hcompute_lgxy_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxy_stencil_write_ctrl_vars[2] <= op_hcompute_lgxy_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_cim_stencil[root, cim_s0_y, cim_s0_x] -> [(273 + 64cim_s0_y + cim_s0_x)] }
module lgxy_stencil_op_hcompute_cim_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_cim_stencil_read_ctrl_vars[2:0], output op_hcompute_cim_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_cim_stencil_read_ren =(on && on2 && op_hcompute_cim_stencil_read_ctrl_vars[0]==0 && op_hcompute_cim_stencil_read_ctrl_vars[1]<=59 && op_hcompute_cim_stencil_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_cim_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_cim_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_cim_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==272) begin
        on <=1;
        on2 <= 1;
        op_hcompute_cim_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_cim_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_cim_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[1] <= op_hcompute_cim_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[2] <= op_hcompute_cim_stencil_read_ctrl_vars[2] + 1;
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
// { op_hcompute_lgxy_stencil_1[root, lgxy_s1_y, lgxy_s1_x] -> [(269 + 64lgxy_s1_y + lgxy_s1_x)] }
module lgxy_stencil_op_hcompute_lgxy_stencil_1_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars[2:0], output op_hcompute_lgxy_stencil_1_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxy_stencil_1_read_ren =(on && on2 && op_hcompute_lgxy_stencil_1_read_ctrl_vars[0]==0 && op_hcompute_lgxy_stencil_1_read_ctrl_vars[1]<=59 && op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxy_stencil_1_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxy_stencil_1_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==268) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxy_stencil_1_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxy_stencil_1_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<= 0;
          op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] <= op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] <= op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] + 1;
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
module lgxy_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_stencil_read_ren,
	input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_cim_stencil_read [0:0] ,
	input op_hcompute_lgxy_stencil_1_read_ren,
	input [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgxy_stencil_1_read [0:0] ,
	input op_hcompute_lgxy_stencil_1_write_wen,
	input [15:0] op_hcompute_lgxy_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgxy_stencil_1_write [0:0] ,
	input op_hcompute_lgxy_stencil_write_wen,
	input [15:0] op_hcompute_lgxy_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgxy_stencil_write [0:0] );


  // Storage capacity pre-banking: 3600
  logic [15:0]op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxy_stencil_1_write_wen_fsm_out;
  lgxy_stencil_op_hcompute_lgxy_stencil_1_write_fsm lgxy_stencil_op_hcompute_lgxy_stencil_1_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxy_stencil_1_write_ctrl_vars( op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out), .op_hcompute_lgxy_stencil_1_write_wen(op_hcompute_lgxy_stencil_1_write_wen_fsm_out));
  logic [15:0]op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxy_stencil_write_wen_fsm_out;
  lgxy_stencil_op_hcompute_lgxy_stencil_write_fsm lgxy_stencil_op_hcompute_lgxy_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxy_stencil_write_ctrl_vars( op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out), .op_hcompute_lgxy_stencil_write_wen(op_hcompute_lgxy_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_stencil_read_ren_fsm_out;
  lgxy_stencil_op_hcompute_cim_stencil_read_fsm lgxy_stencil_op_hcompute_cim_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_stencil_read_ctrl_vars( op_hcompute_cim_stencil_read_ctrl_vars_fsm_out), .op_hcompute_cim_stencil_read_ren(op_hcompute_cim_stencil_read_ren_fsm_out));
  logic [15:0]op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxy_stencil_1_read_ren_fsm_out;
  lgxy_stencil_op_hcompute_lgxy_stencil_1_read_fsm lgxy_stencil_op_hcompute_lgxy_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxy_stencil_1_read_ctrl_vars( op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_lgxy_stencil_1_read_ren(op_hcompute_lgxy_stencil_1_read_ren_fsm_out));
  // # of banks: 5
  logic [15:0] bank_0 [720];
  logic [15:0] bank_1 [720];
  logic [15:0] bank_2 [720];
  logic [15:0] bank_3 [720];
  logic [15:0] bank_4 [720];
  logic [15:0] lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_0;
  assign lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_0 = (((-1 + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_1;
  assign lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_1 = (((-1 + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out[2])) - -1);
lgxy_stencil_bank_selector lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_bank_selector(.d({lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_1,lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_0}));
  logic [15:0] lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_0;
  assign lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_0 = (((-1 + 1*op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_1;
  assign lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_1 = (((-1 + 1*op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out[2])) - -1);
lgxy_stencil_bank_selector lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_bank_selector(.d({lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_1,lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_0}));
  logic [15:0] lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_0;
  assign lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_0 = (((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_1;
  assign lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_1 = (((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2])) - -1);
lgxy_stencil_bank_selector lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_bank_selector(.d({lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_1,lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_0}));
  logic [15:0] lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_0;
  assign lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_0 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_1;
  assign lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_1 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -1);
lgxy_stencil_bank_selector lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_bank_selector(.d({lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_1,lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-1 + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out[1])) - -1)>>0)*1+$rtoi($floor((((-1 + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out[2])) - -1)/ 5))*60);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-1 + 1*op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out[1])) - -1)>>0)*1+$rtoi($floor((((-1 + 1*op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out[2])) - -1)/ 5))*60);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr2;
  assign addr2 = (((((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>0)*1+$rtoi($floor((((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2])) - -1)/ 5))*60);
  logic [15:0] addr3;
  assign addr3 = (((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -1)>>0)*1+$rtoi($floor((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -1)/ 5))*60);
  always @(posedge clk) begin
    if (op_hcompute_lgxy_stencil_1_write_wen_fsm_out) begin
      case( lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
        1:bank_1[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
        2:bank_2[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
        3:bank_3[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
        4:bank_4[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
      endcase
    end
    if (op_hcompute_lgxy_stencil_write_wen_fsm_out) begin
      case( lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_bank_selector.out)
        0:bank_0[addr1] <= op_hcompute_lgxy_stencil_write[0];
        1:bank_1[addr1] <= op_hcompute_lgxy_stencil_write[0];
        2:bank_2[addr1] <= op_hcompute_lgxy_stencil_write[0];
        3:bank_3[addr1] <= op_hcompute_lgxy_stencil_write[0];
        4:bank_4[addr1] <= op_hcompute_lgxy_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_cim_stencil_read_ren_fsm_out) begin
      case( lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_bank_selector.out)
        0:op_hcompute_cim_stencil_read[0] = bank_0[addr2];
        1:op_hcompute_cim_stencil_read[0] = bank_1[addr2];
        2:op_hcompute_cim_stencil_read[0] = bank_2[addr2];
        3:op_hcompute_cim_stencil_read[0] = bank_3[addr2];
        4:op_hcompute_cim_stencil_read[0] = bank_4[addr2];
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[0] = bank_0[addr3];
        1:op_hcompute_lgxy_stencil_1_read[0] = bank_1[addr3];
        2:op_hcompute_lgxy_stencil_1_read[0] = bank_2[addr3];
        3:op_hcompute_lgxy_stencil_1_read[0] = bank_3[addr3];
        4:op_hcompute_lgxy_stencil_1_read[0] = bank_4[addr3];
      endcase
    end
  end

endmodule


module lgyy_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 2);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

// { op_hcompute_lgyy_stencil_1[root, lgyy_s1_y, lgyy_s1_x] -> [(272 + 64lgyy_s1_y + lgyy_s1_x)] }
module lgyy_stencil_op_hcompute_lgyy_stencil_1_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgyy_stencil_1_write_ctrl_vars[2:0], output op_hcompute_lgyy_stencil_1_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgyy_stencil_1_write_wen =(on && on2 && op_hcompute_lgyy_stencil_1_write_ctrl_vars[0]==0 && op_hcompute_lgyy_stencil_1_write_ctrl_vars[1]<=59 && op_hcompute_lgyy_stencil_1_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgyy_stencil_1_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgyy_stencil_1_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgyy_stencil_1_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==271) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgyy_stencil_1_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgyy_stencil_1_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgyy_stencil_1_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgyy_stencil_1_write_ctrl_vars[2]<= 0;
          op_hcompute_lgyy_stencil_1_write_ctrl_vars[1] <= op_hcompute_lgyy_stencil_1_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgyy_stencil_1_write_ctrl_vars[2] <= op_hcompute_lgyy_stencil_1_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lgyy_stencil[root, lgyy_s0_y, lgyy_s0_x] -> [(271 + 64lgyy_s0_y + lgyy_s0_x)] }
module lgyy_stencil_op_hcompute_lgyy_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgyy_stencil_write_ctrl_vars[2:0], output op_hcompute_lgyy_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgyy_stencil_write_wen =(on && on2 && op_hcompute_lgyy_stencil_write_ctrl_vars[0]==0 && op_hcompute_lgyy_stencil_write_ctrl_vars[1]<=59 && op_hcompute_lgyy_stencil_write_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgyy_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgyy_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgyy_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==270) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgyy_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgyy_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgyy_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgyy_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_lgyy_stencil_write_ctrl_vars[1] <= op_hcompute_lgyy_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgyy_stencil_write_ctrl_vars[2] <= op_hcompute_lgyy_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_cim_stencil[root, cim_s0_y, cim_s0_x] -> [(273 + 64cim_s0_y + cim_s0_x)] }
module lgyy_stencil_op_hcompute_cim_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_cim_stencil_read_ctrl_vars[2:0], output op_hcompute_cim_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_cim_stencil_read_ren =(on && on2 && op_hcompute_cim_stencil_read_ctrl_vars[0]==0 && op_hcompute_cim_stencil_read_ctrl_vars[1]<=59 && op_hcompute_cim_stencil_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_cim_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_cim_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_cim_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==272) begin
        on <=1;
        on2 <= 1;
        op_hcompute_cim_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_cim_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_cim_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[1] <= op_hcompute_cim_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_cim_stencil_read_ctrl_vars[2] <= op_hcompute_cim_stencil_read_ctrl_vars[2] + 1;
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
// { op_hcompute_lgyy_stencil_1[root, lgyy_s1_y, lgyy_s1_x] -> [(272 + 64lgyy_s1_y + lgyy_s1_x)] }
module lgyy_stencil_op_hcompute_lgyy_stencil_1_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars[2:0], output op_hcompute_lgyy_stencil_1_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgyy_stencil_1_read_ren =(on && on2 && op_hcompute_lgyy_stencil_1_read_ctrl_vars[0]==0 && op_hcompute_lgyy_stencil_1_read_ctrl_vars[1]<=59 && op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgyy_stencil_1_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgyy_stencil_1_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==271) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgyy_stencil_1_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgyy_stencil_1_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<= 0;
          op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] <= op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] <= op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] + 1;
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
module lgyy_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_cim_stencil_read_ren,
	input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_cim_stencil_read [0:0] ,
	input op_hcompute_lgyy_stencil_1_read_ren,
	input [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgyy_stencil_1_read [0:0] ,
	input op_hcompute_lgyy_stencil_1_write_wen,
	input [15:0] op_hcompute_lgyy_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgyy_stencil_1_write [0:0] ,
	input op_hcompute_lgyy_stencil_write_wen,
	input [15:0] op_hcompute_lgyy_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lgyy_stencil_write [0:0] );


  // Storage capacity pre-banking: 3600
  logic [15:0]op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgyy_stencil_1_write_wen_fsm_out;
  lgyy_stencil_op_hcompute_lgyy_stencil_1_write_fsm lgyy_stencil_op_hcompute_lgyy_stencil_1_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgyy_stencil_1_write_ctrl_vars( op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out), .op_hcompute_lgyy_stencil_1_write_wen(op_hcompute_lgyy_stencil_1_write_wen_fsm_out));
  logic [15:0]op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgyy_stencil_write_wen_fsm_out;
  lgyy_stencil_op_hcompute_lgyy_stencil_write_fsm lgyy_stencil_op_hcompute_lgyy_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgyy_stencil_write_ctrl_vars( op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out), .op_hcompute_lgyy_stencil_write_wen(op_hcompute_lgyy_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_stencil_read_ren_fsm_out;
  lgyy_stencil_op_hcompute_cim_stencil_read_fsm lgyy_stencil_op_hcompute_cim_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_stencil_read_ctrl_vars( op_hcompute_cim_stencil_read_ctrl_vars_fsm_out), .op_hcompute_cim_stencil_read_ren(op_hcompute_cim_stencil_read_ren_fsm_out));
  logic [15:0]op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgyy_stencil_1_read_ren_fsm_out;
  lgyy_stencil_op_hcompute_lgyy_stencil_1_read_fsm lgyy_stencil_op_hcompute_lgyy_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgyy_stencil_1_read_ctrl_vars( op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_lgyy_stencil_1_read_ren(op_hcompute_lgyy_stencil_1_read_ren_fsm_out));
  // # of banks: 2
  logic [15:0] bank_0 [1800];
  logic [15:0] bank_1 [1800];
  logic [15:0] lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_0;
  assign lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_0 = (((-1 + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_1;
  assign lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_1 = (((-1 + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out[2])) - -1);
lgyy_stencil_bank_selector lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_bank_selector(.d({lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_1,lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_0}));
  logic [15:0] lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_20_0;
  assign lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_20_0 = (((-1 + 1*op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_20_1;
  assign lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_20_1 = (((-1 + 1*op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out[2])) - -1);
lgyy_stencil_bank_selector lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_20_bank_selector(.d({lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_20_1,lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_20_0}));
  logic [15:0] lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_0;
  assign lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_0 = (((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_1;
  assign lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_1 = (((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2])) - -1);
lgyy_stencil_bank_selector lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_bank_selector(.d({lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_1,lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_0}));
  logic [15:0] lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_10_0;
  assign lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_10_0 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -1);
  logic [15:0] lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_10_1;
  assign lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_10_1 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -1);
lgyy_stencil_bank_selector lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_10_bank_selector(.d({lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_10_1,lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_10_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-1 + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out[1])) - -1)>>0)*1+((((-1 + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out[2])) - -1)>>1)*60);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-1 + 1*op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out[1])) - -1)>>0)*1+((((-1 + 1*op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out[2])) - -1)>>1)*60);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr2;
  assign addr2 = (((((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>0)*1+((((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2])) - -1)>>1)*60);
  logic [15:0] addr3;
  assign addr3 = (((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -1)>>0)*1+((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -1)>>1)*60);
  always @(posedge clk) begin
    if (op_hcompute_lgyy_stencil_1_write_wen_fsm_out) begin
      case( lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lgyy_stencil_1_write[0];
        1:bank_1[addr0] <= op_hcompute_lgyy_stencil_1_write[0];
      endcase
    end
    if (op_hcompute_lgyy_stencil_write_wen_fsm_out) begin
      case( lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_20_bank_selector.out)
        0:bank_0[addr1] <= op_hcompute_lgyy_stencil_write[0];
        1:bank_1[addr1] <= op_hcompute_lgyy_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_cim_stencil_read_ren_fsm_out) begin
      case( lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_bank_selector.out)
        0:op_hcompute_cim_stencil_read[0] = bank_0[addr2];
        1:op_hcompute_cim_stencil_read[0] = bank_1[addr2];
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_10_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[0] = bank_0[addr3];
        1:op_hcompute_lgyy_stencil_1_read[0] = bank_1[addr3];
      endcase
    end
  end

endmodule


module lxx_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 3);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 3);
  assign out = bank_index_0*1+bank_index_1*3;

endmodule

// { op_hcompute_lxx_stencil[root, lxx_s0_y, lxx_s0_x] -> [(133 + 64lxx_s0_y + lxx_s0_x)] }
module lxx_stencil_op_hcompute_lxx_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lxx_stencil_write_ctrl_vars[2:0], output op_hcompute_lxx_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lxx_stencil_write_wen =(on && on2 && op_hcompute_lxx_stencil_write_ctrl_vars[0]==0 && op_hcompute_lxx_stencil_write_ctrl_vars[1]<=61 && op_hcompute_lxx_stencil_write_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lxx_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lxx_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lxx_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==132) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lxx_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lxx_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lxx_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lxx_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_lxx_stencil_write_ctrl_vars[1] <= op_hcompute_lxx_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lxx_stencil_write_ctrl_vars[2] <= op_hcompute_lxx_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lgxx_stencil_1[root, lgxx_s1_y, lgxx_s1_x] -> [(265 + 64lgxx_s1_y + lgxx_s1_x)] }
module lxx_stencil_op_hcompute_lgxx_stencil_1_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars[2:0], output op_hcompute_lgxx_stencil_1_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxx_stencil_1_read_ren =(on && on2 && op_hcompute_lgxx_stencil_1_read_ctrl_vars[0]==0 && op_hcompute_lgxx_stencil_1_read_ctrl_vars[1]<=59 && op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxx_stencil_1_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxx_stencil_1_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==264) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxx_stencil_1_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxx_stencil_1_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxx_stencil_1_read_ctrl_vars[2]<= 0;
          op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] <= op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] <= op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] + 1;
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
module lxx_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgxx_stencil_1_read_ren,
	input [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgxx_stencil_1_read [8:0] ,
	input op_hcompute_lxx_stencil_write_wen,
	input [15:0] op_hcompute_lxx_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lxx_stencil_write [0:0] );


  // Storage capacity pre-banking: 3844
  logic [15:0]op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lxx_stencil_write_wen_fsm_out;
  lxx_stencil_op_hcompute_lxx_stencil_write_fsm lxx_stencil_op_hcompute_lxx_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lxx_stencil_write_ctrl_vars( op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out), .op_hcompute_lxx_stencil_write_wen(op_hcompute_lxx_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxx_stencil_1_read_ren_fsm_out;
  lxx_stencil_op_hcompute_lgxx_stencil_1_read_fsm lxx_stencil_op_hcompute_lgxx_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxx_stencil_1_read_ctrl_vars( op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_lgxx_stencil_1_read_ren(op_hcompute_lgxx_stencil_1_read_ren_fsm_out));
  // # of banks: 9
  logic [15:0] bank_0 [441];
  logic [15:0] bank_1 [441];
  logic [15:0] bank_2 [441];
  logic [15:0] bank_3 [441];
  logic [15:0] bank_4 [441];
  logic [15:0] bank_5 [441];
  logic [15:0] bank_6 [441];
  logic [15:0] bank_7 [441];
  logic [15:0] bank_8 [441];
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_0 = (((-2 + 1*op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_1 = (((-2 + 1*op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_1,lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_0 = (((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_1 = (((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_0 = (((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_1 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_0 = (((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_1 = (((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_0 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_1 = (((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_0 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_1 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_0 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_1 = (((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_0 = (((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_1 = (((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_0 = (((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_1 = (((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_0}));
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_0;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_0 = (((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_1;
  assign lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_1 = (((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxx_stencil_bank_selector lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_bank_selector(.d({lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_1,lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_0}));

  logic [15:0] addr0;
  assign addr0 = ($rtoi($floor((((-2 + 1*op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-2 + 1*op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = ($rtoi($floor((((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr2;
  assign addr2 = ($rtoi($floor((((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr3;
  assign addr3 = ($rtoi($floor((((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr4;
  assign addr4 = ($rtoi($floor((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr5;
  assign addr5 = ($rtoi($floor((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr6;
  assign addr6 = ($rtoi($floor((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr7;
  assign addr7 = ($rtoi($floor((((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr8;
  assign addr8 = ($rtoi($floor((((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr9;
  assign addr9 = ($rtoi($floor((((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  always @(posedge clk) begin
    if (op_hcompute_lxx_stencil_write_wen_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lxx_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_lxx_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_lxx_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_lxx_stencil_write[0];
        4:bank_4[addr0] <= op_hcompute_lxx_stencil_write[0];
        5:bank_5[addr0] <= op_hcompute_lxx_stencil_write[0];
        6:bank_6[addr0] <= op_hcompute_lxx_stencil_write[0];
        7:bank_7[addr0] <= op_hcompute_lxx_stencil_write[0];
        8:bank_8[addr0] <= op_hcompute_lxx_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[0] = bank_0[addr1];
        1:op_hcompute_lgxx_stencil_1_read[0] = bank_1[addr1];
        2:op_hcompute_lgxx_stencil_1_read[0] = bank_2[addr1];
        3:op_hcompute_lgxx_stencil_1_read[0] = bank_3[addr1];
        4:op_hcompute_lgxx_stencil_1_read[0] = bank_4[addr1];
        5:op_hcompute_lgxx_stencil_1_read[0] = bank_5[addr1];
        6:op_hcompute_lgxx_stencil_1_read[0] = bank_6[addr1];
        7:op_hcompute_lgxx_stencil_1_read[0] = bank_7[addr1];
        8:op_hcompute_lgxx_stencil_1_read[0] = bank_8[addr1];
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[1] = bank_0[addr2];
        1:op_hcompute_lgxx_stencil_1_read[1] = bank_1[addr2];
        2:op_hcompute_lgxx_stencil_1_read[1] = bank_2[addr2];
        3:op_hcompute_lgxx_stencil_1_read[1] = bank_3[addr2];
        4:op_hcompute_lgxx_stencil_1_read[1] = bank_4[addr2];
        5:op_hcompute_lgxx_stencil_1_read[1] = bank_5[addr2];
        6:op_hcompute_lgxx_stencil_1_read[1] = bank_6[addr2];
        7:op_hcompute_lgxx_stencil_1_read[1] = bank_7[addr2];
        8:op_hcompute_lgxx_stencil_1_read[1] = bank_8[addr2];
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[2] = bank_0[addr3];
        1:op_hcompute_lgxx_stencil_1_read[2] = bank_1[addr3];
        2:op_hcompute_lgxx_stencil_1_read[2] = bank_2[addr3];
        3:op_hcompute_lgxx_stencil_1_read[2] = bank_3[addr3];
        4:op_hcompute_lgxx_stencil_1_read[2] = bank_4[addr3];
        5:op_hcompute_lgxx_stencil_1_read[2] = bank_5[addr3];
        6:op_hcompute_lgxx_stencil_1_read[2] = bank_6[addr3];
        7:op_hcompute_lgxx_stencil_1_read[2] = bank_7[addr3];
        8:op_hcompute_lgxx_stencil_1_read[2] = bank_8[addr3];
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[3] = bank_0[addr4];
        1:op_hcompute_lgxx_stencil_1_read[3] = bank_1[addr4];
        2:op_hcompute_lgxx_stencil_1_read[3] = bank_2[addr4];
        3:op_hcompute_lgxx_stencil_1_read[3] = bank_3[addr4];
        4:op_hcompute_lgxx_stencil_1_read[3] = bank_4[addr4];
        5:op_hcompute_lgxx_stencil_1_read[3] = bank_5[addr4];
        6:op_hcompute_lgxx_stencil_1_read[3] = bank_6[addr4];
        7:op_hcompute_lgxx_stencil_1_read[3] = bank_7[addr4];
        8:op_hcompute_lgxx_stencil_1_read[3] = bank_8[addr4];
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[4] = bank_0[addr5];
        1:op_hcompute_lgxx_stencil_1_read[4] = bank_1[addr5];
        2:op_hcompute_lgxx_stencil_1_read[4] = bank_2[addr5];
        3:op_hcompute_lgxx_stencil_1_read[4] = bank_3[addr5];
        4:op_hcompute_lgxx_stencil_1_read[4] = bank_4[addr5];
        5:op_hcompute_lgxx_stencil_1_read[4] = bank_5[addr5];
        6:op_hcompute_lgxx_stencil_1_read[4] = bank_6[addr5];
        7:op_hcompute_lgxx_stencil_1_read[4] = bank_7[addr5];
        8:op_hcompute_lgxx_stencil_1_read[4] = bank_8[addr5];
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[5] = bank_0[addr6];
        1:op_hcompute_lgxx_stencil_1_read[5] = bank_1[addr6];
        2:op_hcompute_lgxx_stencil_1_read[5] = bank_2[addr6];
        3:op_hcompute_lgxx_stencil_1_read[5] = bank_3[addr6];
        4:op_hcompute_lgxx_stencil_1_read[5] = bank_4[addr6];
        5:op_hcompute_lgxx_stencil_1_read[5] = bank_5[addr6];
        6:op_hcompute_lgxx_stencil_1_read[5] = bank_6[addr6];
        7:op_hcompute_lgxx_stencil_1_read[5] = bank_7[addr6];
        8:op_hcompute_lgxx_stencil_1_read[5] = bank_8[addr6];
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[6] = bank_0[addr7];
        1:op_hcompute_lgxx_stencil_1_read[6] = bank_1[addr7];
        2:op_hcompute_lgxx_stencil_1_read[6] = bank_2[addr7];
        3:op_hcompute_lgxx_stencil_1_read[6] = bank_3[addr7];
        4:op_hcompute_lgxx_stencil_1_read[6] = bank_4[addr7];
        5:op_hcompute_lgxx_stencil_1_read[6] = bank_5[addr7];
        6:op_hcompute_lgxx_stencil_1_read[6] = bank_6[addr7];
        7:op_hcompute_lgxx_stencil_1_read[6] = bank_7[addr7];
        8:op_hcompute_lgxx_stencil_1_read[6] = bank_8[addr7];
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[7] = bank_0[addr8];
        1:op_hcompute_lgxx_stencil_1_read[7] = bank_1[addr8];
        2:op_hcompute_lgxx_stencil_1_read[7] = bank_2[addr8];
        3:op_hcompute_lgxx_stencil_1_read[7] = bank_3[addr8];
        4:op_hcompute_lgxx_stencil_1_read[7] = bank_4[addr8];
        5:op_hcompute_lgxx_stencil_1_read[7] = bank_5[addr8];
        6:op_hcompute_lgxx_stencil_1_read[7] = bank_6[addr8];
        7:op_hcompute_lgxx_stencil_1_read[7] = bank_7[addr8];
        8:op_hcompute_lgxx_stencil_1_read[7] = bank_8[addr8];
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[8] = bank_0[addr9];
        1:op_hcompute_lgxx_stencil_1_read[8] = bank_1[addr9];
        2:op_hcompute_lgxx_stencil_1_read[8] = bank_2[addr9];
        3:op_hcompute_lgxx_stencil_1_read[8] = bank_3[addr9];
        4:op_hcompute_lgxx_stencil_1_read[8] = bank_4[addr9];
        5:op_hcompute_lgxx_stencil_1_read[8] = bank_5[addr9];
        6:op_hcompute_lgxx_stencil_1_read[8] = bank_6[addr9];
        7:op_hcompute_lgxx_stencil_1_read[8] = bank_7[addr9];
        8:op_hcompute_lgxx_stencil_1_read[8] = bank_8[addr9];
      endcase
    end
  end

endmodule


module lxy_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 3);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 3);
  assign out = bank_index_0*1+bank_index_1*3;

endmodule

// { op_hcompute_lxy_stencil[root, lxy_s0_y, lxy_s0_x] -> [(137 + 64lxy_s0_y + lxy_s0_x)] }
module lxy_stencil_op_hcompute_lxy_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lxy_stencil_write_ctrl_vars[2:0], output op_hcompute_lxy_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lxy_stencil_write_wen =(on && on2 && op_hcompute_lxy_stencil_write_ctrl_vars[0]==0 && op_hcompute_lxy_stencil_write_ctrl_vars[1]<=61 && op_hcompute_lxy_stencil_write_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lxy_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lxy_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lxy_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==136) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lxy_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lxy_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lxy_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lxy_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_lxy_stencil_write_ctrl_vars[1] <= op_hcompute_lxy_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lxy_stencil_write_ctrl_vars[2] <= op_hcompute_lxy_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lgxy_stencil_1[root, lgxy_s1_y, lgxy_s1_x] -> [(269 + 64lgxy_s1_y + lgxy_s1_x)] }
module lxy_stencil_op_hcompute_lgxy_stencil_1_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars[2:0], output op_hcompute_lgxy_stencil_1_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgxy_stencil_1_read_ren =(on && on2 && op_hcompute_lgxy_stencil_1_read_ctrl_vars[0]==0 && op_hcompute_lgxy_stencil_1_read_ctrl_vars[1]<=59 && op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgxy_stencil_1_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgxy_stencil_1_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==268) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgxy_stencil_1_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgxy_stencil_1_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgxy_stencil_1_read_ctrl_vars[2]<= 0;
          op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] <= op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] <= op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] + 1;
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
module lxy_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgxy_stencil_1_read_ren,
	input [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgxy_stencil_1_read [8:0] ,
	input op_hcompute_lxy_stencil_write_wen,
	input [15:0] op_hcompute_lxy_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lxy_stencil_write [0:0] );


  // Storage capacity pre-banking: 3844
  logic [15:0]op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lxy_stencil_write_wen_fsm_out;
  lxy_stencil_op_hcompute_lxy_stencil_write_fsm lxy_stencil_op_hcompute_lxy_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lxy_stencil_write_ctrl_vars( op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out), .op_hcompute_lxy_stencil_write_wen(op_hcompute_lxy_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgxy_stencil_1_read_ren_fsm_out;
  lxy_stencil_op_hcompute_lgxy_stencil_1_read_fsm lxy_stencil_op_hcompute_lgxy_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgxy_stencil_1_read_ctrl_vars( op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_lgxy_stencil_1_read_ren(op_hcompute_lgxy_stencil_1_read_ren_fsm_out));
  // # of banks: 9
  logic [15:0] bank_0 [441];
  logic [15:0] bank_1 [441];
  logic [15:0] bank_2 [441];
  logic [15:0] bank_3 [441];
  logic [15:0] bank_4 [441];
  logic [15:0] bank_5 [441];
  logic [15:0] bank_6 [441];
  logic [15:0] bank_7 [441];
  logic [15:0] bank_8 [441];
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_0 = (((-2 + 1*op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_1 = (((-2 + 1*op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_1,lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_0 = (((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_1 = (((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_0 = (((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_1 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_0 = (((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_1 = (((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_0 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_1 = (((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_0 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_1 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_0 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_1 = (((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_0 = (((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_1 = (((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_0 = (((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_1 = (((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_0}));
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_0;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_0 = (((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_1;
  assign lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_1 = (((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lxy_stencil_bank_selector lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_bank_selector(.d({lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_1,lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_0}));

  logic [15:0] addr0;
  assign addr0 = ($rtoi($floor((((-2 + 1*op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-2 + 1*op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = ($rtoi($floor((((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr2;
  assign addr2 = ($rtoi($floor((((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr3;
  assign addr3 = ($rtoi($floor((((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr4;
  assign addr4 = ($rtoi($floor((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr5;
  assign addr5 = ($rtoi($floor((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr6;
  assign addr6 = ($rtoi($floor((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr7;
  assign addr7 = ($rtoi($floor((((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr8;
  assign addr8 = ($rtoi($floor((((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr9;
  assign addr9 = ($rtoi($floor((((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  always @(posedge clk) begin
    if (op_hcompute_lxy_stencil_write_wen_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lxy_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_lxy_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_lxy_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_lxy_stencil_write[0];
        4:bank_4[addr0] <= op_hcompute_lxy_stencil_write[0];
        5:bank_5[addr0] <= op_hcompute_lxy_stencil_write[0];
        6:bank_6[addr0] <= op_hcompute_lxy_stencil_write[0];
        7:bank_7[addr0] <= op_hcompute_lxy_stencil_write[0];
        8:bank_8[addr0] <= op_hcompute_lxy_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[0] = bank_0[addr1];
        1:op_hcompute_lgxy_stencil_1_read[0] = bank_1[addr1];
        2:op_hcompute_lgxy_stencil_1_read[0] = bank_2[addr1];
        3:op_hcompute_lgxy_stencil_1_read[0] = bank_3[addr1];
        4:op_hcompute_lgxy_stencil_1_read[0] = bank_4[addr1];
        5:op_hcompute_lgxy_stencil_1_read[0] = bank_5[addr1];
        6:op_hcompute_lgxy_stencil_1_read[0] = bank_6[addr1];
        7:op_hcompute_lgxy_stencil_1_read[0] = bank_7[addr1];
        8:op_hcompute_lgxy_stencil_1_read[0] = bank_8[addr1];
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[1] = bank_0[addr2];
        1:op_hcompute_lgxy_stencil_1_read[1] = bank_1[addr2];
        2:op_hcompute_lgxy_stencil_1_read[1] = bank_2[addr2];
        3:op_hcompute_lgxy_stencil_1_read[1] = bank_3[addr2];
        4:op_hcompute_lgxy_stencil_1_read[1] = bank_4[addr2];
        5:op_hcompute_lgxy_stencil_1_read[1] = bank_5[addr2];
        6:op_hcompute_lgxy_stencil_1_read[1] = bank_6[addr2];
        7:op_hcompute_lgxy_stencil_1_read[1] = bank_7[addr2];
        8:op_hcompute_lgxy_stencil_1_read[1] = bank_8[addr2];
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[2] = bank_0[addr3];
        1:op_hcompute_lgxy_stencil_1_read[2] = bank_1[addr3];
        2:op_hcompute_lgxy_stencil_1_read[2] = bank_2[addr3];
        3:op_hcompute_lgxy_stencil_1_read[2] = bank_3[addr3];
        4:op_hcompute_lgxy_stencil_1_read[2] = bank_4[addr3];
        5:op_hcompute_lgxy_stencil_1_read[2] = bank_5[addr3];
        6:op_hcompute_lgxy_stencil_1_read[2] = bank_6[addr3];
        7:op_hcompute_lgxy_stencil_1_read[2] = bank_7[addr3];
        8:op_hcompute_lgxy_stencil_1_read[2] = bank_8[addr3];
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[3] = bank_0[addr4];
        1:op_hcompute_lgxy_stencil_1_read[3] = bank_1[addr4];
        2:op_hcompute_lgxy_stencil_1_read[3] = bank_2[addr4];
        3:op_hcompute_lgxy_stencil_1_read[3] = bank_3[addr4];
        4:op_hcompute_lgxy_stencil_1_read[3] = bank_4[addr4];
        5:op_hcompute_lgxy_stencil_1_read[3] = bank_5[addr4];
        6:op_hcompute_lgxy_stencil_1_read[3] = bank_6[addr4];
        7:op_hcompute_lgxy_stencil_1_read[3] = bank_7[addr4];
        8:op_hcompute_lgxy_stencil_1_read[3] = bank_8[addr4];
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[4] = bank_0[addr5];
        1:op_hcompute_lgxy_stencil_1_read[4] = bank_1[addr5];
        2:op_hcompute_lgxy_stencil_1_read[4] = bank_2[addr5];
        3:op_hcompute_lgxy_stencil_1_read[4] = bank_3[addr5];
        4:op_hcompute_lgxy_stencil_1_read[4] = bank_4[addr5];
        5:op_hcompute_lgxy_stencil_1_read[4] = bank_5[addr5];
        6:op_hcompute_lgxy_stencil_1_read[4] = bank_6[addr5];
        7:op_hcompute_lgxy_stencil_1_read[4] = bank_7[addr5];
        8:op_hcompute_lgxy_stencil_1_read[4] = bank_8[addr5];
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[5] = bank_0[addr6];
        1:op_hcompute_lgxy_stencil_1_read[5] = bank_1[addr6];
        2:op_hcompute_lgxy_stencil_1_read[5] = bank_2[addr6];
        3:op_hcompute_lgxy_stencil_1_read[5] = bank_3[addr6];
        4:op_hcompute_lgxy_stencil_1_read[5] = bank_4[addr6];
        5:op_hcompute_lgxy_stencil_1_read[5] = bank_5[addr6];
        6:op_hcompute_lgxy_stencil_1_read[5] = bank_6[addr6];
        7:op_hcompute_lgxy_stencil_1_read[5] = bank_7[addr6];
        8:op_hcompute_lgxy_stencil_1_read[5] = bank_8[addr6];
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[6] = bank_0[addr7];
        1:op_hcompute_lgxy_stencil_1_read[6] = bank_1[addr7];
        2:op_hcompute_lgxy_stencil_1_read[6] = bank_2[addr7];
        3:op_hcompute_lgxy_stencil_1_read[6] = bank_3[addr7];
        4:op_hcompute_lgxy_stencil_1_read[6] = bank_4[addr7];
        5:op_hcompute_lgxy_stencil_1_read[6] = bank_5[addr7];
        6:op_hcompute_lgxy_stencil_1_read[6] = bank_6[addr7];
        7:op_hcompute_lgxy_stencil_1_read[6] = bank_7[addr7];
        8:op_hcompute_lgxy_stencil_1_read[6] = bank_8[addr7];
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[7] = bank_0[addr8];
        1:op_hcompute_lgxy_stencil_1_read[7] = bank_1[addr8];
        2:op_hcompute_lgxy_stencil_1_read[7] = bank_2[addr8];
        3:op_hcompute_lgxy_stencil_1_read[7] = bank_3[addr8];
        4:op_hcompute_lgxy_stencil_1_read[7] = bank_4[addr8];
        5:op_hcompute_lgxy_stencil_1_read[7] = bank_5[addr8];
        6:op_hcompute_lgxy_stencil_1_read[7] = bank_6[addr8];
        7:op_hcompute_lgxy_stencil_1_read[7] = bank_7[addr8];
        8:op_hcompute_lgxy_stencil_1_read[7] = bank_8[addr8];
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[8] = bank_0[addr9];
        1:op_hcompute_lgxy_stencil_1_read[8] = bank_1[addr9];
        2:op_hcompute_lgxy_stencil_1_read[8] = bank_2[addr9];
        3:op_hcompute_lgxy_stencil_1_read[8] = bank_3[addr9];
        4:op_hcompute_lgxy_stencil_1_read[8] = bank_4[addr9];
        5:op_hcompute_lgxy_stencil_1_read[8] = bank_5[addr9];
        6:op_hcompute_lgxy_stencil_1_read[8] = bank_6[addr9];
        7:op_hcompute_lgxy_stencil_1_read[8] = bank_7[addr9];
        8:op_hcompute_lgxy_stencil_1_read[8] = bank_8[addr9];
      endcase
    end
  end

endmodule


module lyy_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 3);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 3);
  assign out = bank_index_0*1+bank_index_1*3;

endmodule

// { op_hcompute_lyy_stencil[root, lyy_s0_y, lyy_s0_x] -> [(140 + 64lyy_s0_y + lyy_s0_x)] }
module lyy_stencil_op_hcompute_lyy_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lyy_stencil_write_ctrl_vars[2:0], output op_hcompute_lyy_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lyy_stencil_write_wen =(on && on2 && op_hcompute_lyy_stencil_write_ctrl_vars[0]==0 && op_hcompute_lyy_stencil_write_ctrl_vars[1]<=61 && op_hcompute_lyy_stencil_write_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lyy_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lyy_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lyy_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==139) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lyy_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lyy_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lyy_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lyy_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_lyy_stencil_write_ctrl_vars[1] <= op_hcompute_lyy_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lyy_stencil_write_ctrl_vars[2] <= op_hcompute_lyy_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_lgyy_stencil_1[root, lgyy_s1_y, lgyy_s1_x] -> [(272 + 64lgyy_s1_y + lgyy_s1_x)] }
module lyy_stencil_op_hcompute_lgyy_stencil_1_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars[2:0], output op_hcompute_lgyy_stencil_1_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_lgyy_stencil_1_read_ren =(on && on2 && op_hcompute_lgyy_stencil_1_read_ctrl_vars[0]==0 && op_hcompute_lgyy_stencil_1_read_ctrl_vars[1]<=59 && op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<=59);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_lgyy_stencil_1_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_lgyy_stencil_1_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==271) begin
        on <=1;
        on2 <= 1;
        op_hcompute_lgyy_stencil_1_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_lgyy_stencil_1_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_lgyy_stencil_1_read_ctrl_vars[2]<= 0;
          op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] <= op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] <= op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] + 1;
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
module lyy_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_lgyy_stencil_1_read_ren,
	input [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_lgyy_stencil_1_read [8:0] ,
	input op_hcompute_lyy_stencil_write_wen,
	input [15:0] op_hcompute_lyy_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_lyy_stencil_write [0:0] );


  // Storage capacity pre-banking: 3844
  logic [15:0]op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lyy_stencil_write_wen_fsm_out;
  lyy_stencil_op_hcompute_lyy_stencil_write_fsm lyy_stencil_op_hcompute_lyy_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lyy_stencil_write_ctrl_vars( op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out), .op_hcompute_lyy_stencil_write_wen(op_hcompute_lyy_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_lgyy_stencil_1_read_ren_fsm_out;
  lyy_stencil_op_hcompute_lgyy_stencil_1_read_fsm lyy_stencil_op_hcompute_lgyy_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_lgyy_stencil_1_read_ctrl_vars( op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_lgyy_stencil_1_read_ren(op_hcompute_lgyy_stencil_1_read_ren_fsm_out));
  // # of banks: 9
  logic [15:0] bank_0 [441];
  logic [15:0] bank_1 [441];
  logic [15:0] bank_2 [441];
  logic [15:0] bank_3 [441];
  logic [15:0] bank_4 [441];
  logic [15:0] bank_5 [441];
  logic [15:0] bank_6 [441];
  logic [15:0] bank_7 [441];
  logic [15:0] bank_8 [441];
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_0 = (((-2 + 1*op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_1 = (((-2 + 1*op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_1,lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_0 = (((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_1 = (((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_0 = (((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_1 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_0 = (((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_1 = (((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_0 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_1 = (((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_0 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_1 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_0 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_1 = (((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_0 = (((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_1 = (((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_0 = (((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_1 = (((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_0}));
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_0;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_0 = (((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2);
  logic [15:0] lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_1;
  assign lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_1 = (((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2);
lyy_stencil_bank_selector lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_bank_selector(.d({lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_1,lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_0}));

  logic [15:0] addr0;
  assign addr0 = ($rtoi($floor((((-2 + 1*op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-2 + 1*op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = ($rtoi($floor((((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr2;
  assign addr2 = ($rtoi($floor((((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr3;
  assign addr3 = ($rtoi($floor((((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr4;
  assign addr4 = ($rtoi($floor((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr5;
  assign addr5 = ($rtoi($floor((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr6;
  assign addr6 = ($rtoi($floor((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr7;
  assign addr7 = ($rtoi($floor((((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr8;
  assign addr8 = ($rtoi($floor((((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  logic [15:0] addr9;
  assign addr9 = ($rtoi($floor((((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)/ 3))*1+$rtoi($floor((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)/ 3))*21);
  always @(posedge clk) begin
    if (op_hcompute_lyy_stencil_write_wen_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lyy_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_lyy_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_lyy_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_lyy_stencil_write[0];
        4:bank_4[addr0] <= op_hcompute_lyy_stencil_write[0];
        5:bank_5[addr0] <= op_hcompute_lyy_stencil_write[0];
        6:bank_6[addr0] <= op_hcompute_lyy_stencil_write[0];
        7:bank_7[addr0] <= op_hcompute_lyy_stencil_write[0];
        8:bank_8[addr0] <= op_hcompute_lyy_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[0] = bank_0[addr1];
        1:op_hcompute_lgyy_stencil_1_read[0] = bank_1[addr1];
        2:op_hcompute_lgyy_stencil_1_read[0] = bank_2[addr1];
        3:op_hcompute_lgyy_stencil_1_read[0] = bank_3[addr1];
        4:op_hcompute_lgyy_stencil_1_read[0] = bank_4[addr1];
        5:op_hcompute_lgyy_stencil_1_read[0] = bank_5[addr1];
        6:op_hcompute_lgyy_stencil_1_read[0] = bank_6[addr1];
        7:op_hcompute_lgyy_stencil_1_read[0] = bank_7[addr1];
        8:op_hcompute_lgyy_stencil_1_read[0] = bank_8[addr1];
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[1] = bank_0[addr2];
        1:op_hcompute_lgyy_stencil_1_read[1] = bank_1[addr2];
        2:op_hcompute_lgyy_stencil_1_read[1] = bank_2[addr2];
        3:op_hcompute_lgyy_stencil_1_read[1] = bank_3[addr2];
        4:op_hcompute_lgyy_stencil_1_read[1] = bank_4[addr2];
        5:op_hcompute_lgyy_stencil_1_read[1] = bank_5[addr2];
        6:op_hcompute_lgyy_stencil_1_read[1] = bank_6[addr2];
        7:op_hcompute_lgyy_stencil_1_read[1] = bank_7[addr2];
        8:op_hcompute_lgyy_stencil_1_read[1] = bank_8[addr2];
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[2] = bank_0[addr3];
        1:op_hcompute_lgyy_stencil_1_read[2] = bank_1[addr3];
        2:op_hcompute_lgyy_stencil_1_read[2] = bank_2[addr3];
        3:op_hcompute_lgyy_stencil_1_read[2] = bank_3[addr3];
        4:op_hcompute_lgyy_stencil_1_read[2] = bank_4[addr3];
        5:op_hcompute_lgyy_stencil_1_read[2] = bank_5[addr3];
        6:op_hcompute_lgyy_stencil_1_read[2] = bank_6[addr3];
        7:op_hcompute_lgyy_stencil_1_read[2] = bank_7[addr3];
        8:op_hcompute_lgyy_stencil_1_read[2] = bank_8[addr3];
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[3] = bank_0[addr4];
        1:op_hcompute_lgyy_stencil_1_read[3] = bank_1[addr4];
        2:op_hcompute_lgyy_stencil_1_read[3] = bank_2[addr4];
        3:op_hcompute_lgyy_stencil_1_read[3] = bank_3[addr4];
        4:op_hcompute_lgyy_stencil_1_read[3] = bank_4[addr4];
        5:op_hcompute_lgyy_stencil_1_read[3] = bank_5[addr4];
        6:op_hcompute_lgyy_stencil_1_read[3] = bank_6[addr4];
        7:op_hcompute_lgyy_stencil_1_read[3] = bank_7[addr4];
        8:op_hcompute_lgyy_stencil_1_read[3] = bank_8[addr4];
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[4] = bank_0[addr5];
        1:op_hcompute_lgyy_stencil_1_read[4] = bank_1[addr5];
        2:op_hcompute_lgyy_stencil_1_read[4] = bank_2[addr5];
        3:op_hcompute_lgyy_stencil_1_read[4] = bank_3[addr5];
        4:op_hcompute_lgyy_stencil_1_read[4] = bank_4[addr5];
        5:op_hcompute_lgyy_stencil_1_read[4] = bank_5[addr5];
        6:op_hcompute_lgyy_stencil_1_read[4] = bank_6[addr5];
        7:op_hcompute_lgyy_stencil_1_read[4] = bank_7[addr5];
        8:op_hcompute_lgyy_stencil_1_read[4] = bank_8[addr5];
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[5] = bank_0[addr6];
        1:op_hcompute_lgyy_stencil_1_read[5] = bank_1[addr6];
        2:op_hcompute_lgyy_stencil_1_read[5] = bank_2[addr6];
        3:op_hcompute_lgyy_stencil_1_read[5] = bank_3[addr6];
        4:op_hcompute_lgyy_stencil_1_read[5] = bank_4[addr6];
        5:op_hcompute_lgyy_stencil_1_read[5] = bank_5[addr6];
        6:op_hcompute_lgyy_stencil_1_read[5] = bank_6[addr6];
        7:op_hcompute_lgyy_stencil_1_read[5] = bank_7[addr6];
        8:op_hcompute_lgyy_stencil_1_read[5] = bank_8[addr6];
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[6] = bank_0[addr7];
        1:op_hcompute_lgyy_stencil_1_read[6] = bank_1[addr7];
        2:op_hcompute_lgyy_stencil_1_read[6] = bank_2[addr7];
        3:op_hcompute_lgyy_stencil_1_read[6] = bank_3[addr7];
        4:op_hcompute_lgyy_stencil_1_read[6] = bank_4[addr7];
        5:op_hcompute_lgyy_stencil_1_read[6] = bank_5[addr7];
        6:op_hcompute_lgyy_stencil_1_read[6] = bank_6[addr7];
        7:op_hcompute_lgyy_stencil_1_read[6] = bank_7[addr7];
        8:op_hcompute_lgyy_stencil_1_read[6] = bank_8[addr7];
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[7] = bank_0[addr8];
        1:op_hcompute_lgyy_stencil_1_read[7] = bank_1[addr8];
        2:op_hcompute_lgyy_stencil_1_read[7] = bank_2[addr8];
        3:op_hcompute_lgyy_stencil_1_read[7] = bank_3[addr8];
        4:op_hcompute_lgyy_stencil_1_read[7] = bank_4[addr8];
        5:op_hcompute_lgyy_stencil_1_read[7] = bank_5[addr8];
        6:op_hcompute_lgyy_stencil_1_read[7] = bank_6[addr8];
        7:op_hcompute_lgyy_stencil_1_read[7] = bank_7[addr8];
        8:op_hcompute_lgyy_stencil_1_read[7] = bank_8[addr8];
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[8] = bank_0[addr9];
        1:op_hcompute_lgyy_stencil_1_read[8] = bank_1[addr9];
        2:op_hcompute_lgyy_stencil_1_read[8] = bank_2[addr9];
        3:op_hcompute_lgyy_stencil_1_read[8] = bank_3[addr9];
        4:op_hcompute_lgyy_stencil_1_read[8] = bank_4[addr9];
        5:op_hcompute_lgyy_stencil_1_read[8] = bank_5[addr9];
        6:op_hcompute_lgyy_stencil_1_read[8] = bank_6[addr9];
        7:op_hcompute_lgyy_stencil_1_read[8] = bank_7[addr9];
        8:op_hcompute_lgyy_stencil_1_read[8] = bank_8[addr9];
      endcase
    end
  end

endmodule


module padded16_global_wrapper_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 4);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 62);
  assign out = bank_index_0*1+bank_index_1*4;

endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_7;
  logic [15:0] delay_wire_8;
  logic [15:0] delay_wire_9;
  logic [15:0] delay_wire_10;
  always @(posedge clk) begin
    delay_wire_7 <= in;    delay_wire_8 <= delay_wire_7;    delay_wire_9 <= delay_wire_8;    delay_wire_10 <= delay_wire_9;  end
  assign out = delay_wire_10;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_11;
  logic [15:0] delay_wire_12;
  logic [15:0] delay_wire_13;
  logic [15:0] delay_wire_14;
  always @(posedge clk) begin
    delay_wire_11 <= in;    delay_wire_12 <= delay_wire_11;    delay_wire_13 <= delay_wire_12;    delay_wire_14 <= delay_wire_13;  end
  assign out = delay_wire_14;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_15;
  logic [15:0] delay_wire_16;
  logic [15:0] delay_wire_17;
  logic [15:0] delay_wire_18;
  always @(posedge clk) begin
    delay_wire_15 <= in;    delay_wire_16 <= delay_wire_15;    delay_wire_17 <= delay_wire_16;    delay_wire_18 <= delay_wire_17;  end
  assign out = delay_wire_18;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_19;
  logic [15:0] delay_wire_20;
  logic [15:0] delay_wire_21;
  logic [15:0] delay_wire_22;
  always @(posedge clk) begin
    delay_wire_19 <= in;    delay_wire_20 <= delay_wire_19;    delay_wire_21 <= delay_wire_20;    delay_wire_22 <= delay_wire_21;  end
  assign out = delay_wire_22;
endmodule

// { op_hcompute_padded16_global_wrapper_stencil[root, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x] -> [(1 + 64padded16_global_wrapper_s0_y + padded16_global_wrapper_s0_x)] }
module padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2:0], output op_hcompute_padded16_global_wrapper_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_padded16_global_wrapper_stencil_write_wen =(on && on2 && op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[0]==0 && op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1]<=63 && op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2]<=63);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1] <= op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2] <= op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_grad_x_stencil[root, grad_x_s0_y, grad_x_s0_x] -> [(132 + 64grad_x_s0_y + grad_x_s0_x)] }
module padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_grad_x_stencil_read_ctrl_vars[2:0], output op_hcompute_grad_x_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_grad_x_stencil_read_ren =(on && on2 && op_hcompute_grad_x_stencil_read_ctrl_vars[0]==0 && op_hcompute_grad_x_stencil_read_ctrl_vars[1]<=61 && op_hcompute_grad_x_stencil_read_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_grad_x_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_grad_x_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_grad_x_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==131) begin
        on <=1;
        on2 <= 1;
        op_hcompute_grad_x_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_grad_x_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_grad_x_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_grad_x_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_grad_x_stencil_read_ctrl_vars[1] <= op_hcompute_grad_x_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_grad_x_stencil_read_ctrl_vars[2] <= op_hcompute_grad_x_stencil_read_ctrl_vars[2] + 1;
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
// { op_hcompute_grad_y_stencil[root, grad_y_s0_y, grad_y_s0_x] -> [(136 + 64grad_y_s0_y + grad_y_s0_x)] }
module padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_grad_y_stencil_read_ctrl_vars[2:0], output op_hcompute_grad_y_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_grad_y_stencil_read_ren =(on && on2 && op_hcompute_grad_y_stencil_read_ctrl_vars[0]==0 && op_hcompute_grad_y_stencil_read_ctrl_vars[1]<=61 && op_hcompute_grad_y_stencil_read_ctrl_vars[2]<=61);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_grad_y_stencil_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_grad_y_stencil_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_grad_y_stencil_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==135) begin
        on <=1;
        on2 <= 1;
        op_hcompute_grad_y_stencil_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_grad_y_stencil_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_grad_y_stencil_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 63) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_grad_y_stencil_read_ctrl_vars[2]<= 0;
          op_hcompute_grad_y_stencil_read_ctrl_vars[1] <= op_hcompute_grad_y_stencil_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_grad_y_stencil_read_ctrl_vars[2] <= op_hcompute_grad_y_stencil_read_ctrl_vars[2] + 1;
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
module padded16_global_wrapper_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_grad_x_stencil_read_ren,
	input [15:0] op_hcompute_grad_x_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_grad_x_stencil_read [5:0] ,
	input op_hcompute_grad_y_stencil_read_ren,
	input [15:0] op_hcompute_grad_y_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_grad_y_stencil_read [5:0] ,
	input op_hcompute_padded16_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_padded16_global_wrapper_stencil_write [0:0] );

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_x_stencil_read[3]), .out(op_hcompute_grad_y_stencil_read[0]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_x_stencil_read[0]), .out(op_hcompute_grad_y_stencil_read[2]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_x_stencil_read[5]), .out(op_hcompute_grad_y_stencil_read[3]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_x_stencil_read[1]), .out(op_hcompute_grad_y_stencil_read[4]));


  // Storage capacity pre-banking: 4096
  logic [15:0]op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out;
  padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_fsm padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars( op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out), .op_hcompute_padded16_global_wrapper_stencil_write_wen(op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_grad_x_stencil_read_ren_fsm_out;
  padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_fsm padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_grad_x_stencil_read_ctrl_vars( op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out), .op_hcompute_grad_x_stencil_read_ren(op_hcompute_grad_x_stencil_read_ren_fsm_out));
  logic [15:0]op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_grad_y_stencil_read_ren_fsm_out;
  padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_fsm padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_grad_y_stencil_read_ctrl_vars( op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out), .op_hcompute_grad_y_stencil_read_ren(op_hcompute_grad_y_stencil_read_ren_fsm_out));
  // # of banks: 248
  logic [15:0] bank_0 [32];
  logic [15:0] bank_1 [32];
  logic [15:0] bank_2 [32];
  logic [15:0] bank_3 [32];
  logic [15:0] bank_4 [32];
  logic [15:0] bank_5 [32];
  logic [15:0] bank_6 [32];
  logic [15:0] bank_7 [32];
  logic [15:0] bank_8 [32];
  logic [15:0] bank_9 [32];
  logic [15:0] bank_10 [32];
  logic [15:0] bank_11 [32];
  logic [15:0] bank_12 [32];
  logic [15:0] bank_13 [32];
  logic [15:0] bank_14 [32];
  logic [15:0] bank_15 [32];
  logic [15:0] bank_16 [32];
  logic [15:0] bank_17 [32];
  logic [15:0] bank_18 [32];
  logic [15:0] bank_19 [32];
  logic [15:0] bank_20 [32];
  logic [15:0] bank_21 [32];
  logic [15:0] bank_22 [32];
  logic [15:0] bank_23 [32];
  logic [15:0] bank_24 [32];
  logic [15:0] bank_25 [32];
  logic [15:0] bank_26 [32];
  logic [15:0] bank_27 [32];
  logic [15:0] bank_28 [32];
  logic [15:0] bank_29 [32];
  logic [15:0] bank_30 [32];
  logic [15:0] bank_31 [32];
  logic [15:0] bank_32 [32];
  logic [15:0] bank_33 [32];
  logic [15:0] bank_34 [32];
  logic [15:0] bank_35 [32];
  logic [15:0] bank_36 [32];
  logic [15:0] bank_37 [32];
  logic [15:0] bank_38 [32];
  logic [15:0] bank_39 [32];
  logic [15:0] bank_40 [32];
  logic [15:0] bank_41 [32];
  logic [15:0] bank_42 [32];
  logic [15:0] bank_43 [32];
  logic [15:0] bank_44 [32];
  logic [15:0] bank_45 [32];
  logic [15:0] bank_46 [32];
  logic [15:0] bank_47 [32];
  logic [15:0] bank_48 [32];
  logic [15:0] bank_49 [32];
  logic [15:0] bank_50 [32];
  logic [15:0] bank_51 [32];
  logic [15:0] bank_52 [32];
  logic [15:0] bank_53 [32];
  logic [15:0] bank_54 [32];
  logic [15:0] bank_55 [32];
  logic [15:0] bank_56 [32];
  logic [15:0] bank_57 [32];
  logic [15:0] bank_58 [32];
  logic [15:0] bank_59 [32];
  logic [15:0] bank_60 [32];
  logic [15:0] bank_61 [32];
  logic [15:0] bank_62 [32];
  logic [15:0] bank_63 [32];
  logic [15:0] bank_64 [32];
  logic [15:0] bank_65 [32];
  logic [15:0] bank_66 [32];
  logic [15:0] bank_67 [32];
  logic [15:0] bank_68 [32];
  logic [15:0] bank_69 [32];
  logic [15:0] bank_70 [32];
  logic [15:0] bank_71 [32];
  logic [15:0] bank_72 [32];
  logic [15:0] bank_73 [32];
  logic [15:0] bank_74 [32];
  logic [15:0] bank_75 [32];
  logic [15:0] bank_76 [32];
  logic [15:0] bank_77 [32];
  logic [15:0] bank_78 [32];
  logic [15:0] bank_79 [32];
  logic [15:0] bank_80 [32];
  logic [15:0] bank_81 [32];
  logic [15:0] bank_82 [32];
  logic [15:0] bank_83 [32];
  logic [15:0] bank_84 [32];
  logic [15:0] bank_85 [32];
  logic [15:0] bank_86 [32];
  logic [15:0] bank_87 [32];
  logic [15:0] bank_88 [32];
  logic [15:0] bank_89 [32];
  logic [15:0] bank_90 [32];
  logic [15:0] bank_91 [32];
  logic [15:0] bank_92 [32];
  logic [15:0] bank_93 [32];
  logic [15:0] bank_94 [32];
  logic [15:0] bank_95 [32];
  logic [15:0] bank_96 [32];
  logic [15:0] bank_97 [32];
  logic [15:0] bank_98 [32];
  logic [15:0] bank_99 [32];
  logic [15:0] bank_100 [32];
  logic [15:0] bank_101 [32];
  logic [15:0] bank_102 [32];
  logic [15:0] bank_103 [32];
  logic [15:0] bank_104 [32];
  logic [15:0] bank_105 [32];
  logic [15:0] bank_106 [32];
  logic [15:0] bank_107 [32];
  logic [15:0] bank_108 [32];
  logic [15:0] bank_109 [32];
  logic [15:0] bank_110 [32];
  logic [15:0] bank_111 [32];
  logic [15:0] bank_112 [32];
  logic [15:0] bank_113 [32];
  logic [15:0] bank_114 [32];
  logic [15:0] bank_115 [32];
  logic [15:0] bank_116 [32];
  logic [15:0] bank_117 [32];
  logic [15:0] bank_118 [32];
  logic [15:0] bank_119 [32];
  logic [15:0] bank_120 [32];
  logic [15:0] bank_121 [32];
  logic [15:0] bank_122 [32];
  logic [15:0] bank_123 [32];
  logic [15:0] bank_124 [32];
  logic [15:0] bank_125 [32];
  logic [15:0] bank_126 [32];
  logic [15:0] bank_127 [32];
  logic [15:0] bank_128 [32];
  logic [15:0] bank_129 [32];
  logic [15:0] bank_130 [32];
  logic [15:0] bank_131 [32];
  logic [15:0] bank_132 [32];
  logic [15:0] bank_133 [32];
  logic [15:0] bank_134 [32];
  logic [15:0] bank_135 [32];
  logic [15:0] bank_136 [32];
  logic [15:0] bank_137 [32];
  logic [15:0] bank_138 [32];
  logic [15:0] bank_139 [32];
  logic [15:0] bank_140 [32];
  logic [15:0] bank_141 [32];
  logic [15:0] bank_142 [32];
  logic [15:0] bank_143 [32];
  logic [15:0] bank_144 [32];
  logic [15:0] bank_145 [32];
  logic [15:0] bank_146 [32];
  logic [15:0] bank_147 [32];
  logic [15:0] bank_148 [32];
  logic [15:0] bank_149 [32];
  logic [15:0] bank_150 [32];
  logic [15:0] bank_151 [32];
  logic [15:0] bank_152 [32];
  logic [15:0] bank_153 [32];
  logic [15:0] bank_154 [32];
  logic [15:0] bank_155 [32];
  logic [15:0] bank_156 [32];
  logic [15:0] bank_157 [32];
  logic [15:0] bank_158 [32];
  logic [15:0] bank_159 [32];
  logic [15:0] bank_160 [32];
  logic [15:0] bank_161 [32];
  logic [15:0] bank_162 [32];
  logic [15:0] bank_163 [32];
  logic [15:0] bank_164 [32];
  logic [15:0] bank_165 [32];
  logic [15:0] bank_166 [32];
  logic [15:0] bank_167 [32];
  logic [15:0] bank_168 [32];
  logic [15:0] bank_169 [32];
  logic [15:0] bank_170 [32];
  logic [15:0] bank_171 [32];
  logic [15:0] bank_172 [32];
  logic [15:0] bank_173 [32];
  logic [15:0] bank_174 [32];
  logic [15:0] bank_175 [32];
  logic [15:0] bank_176 [32];
  logic [15:0] bank_177 [32];
  logic [15:0] bank_178 [32];
  logic [15:0] bank_179 [32];
  logic [15:0] bank_180 [32];
  logic [15:0] bank_181 [32];
  logic [15:0] bank_182 [32];
  logic [15:0] bank_183 [32];
  logic [15:0] bank_184 [32];
  logic [15:0] bank_185 [32];
  logic [15:0] bank_186 [32];
  logic [15:0] bank_187 [32];
  logic [15:0] bank_188 [32];
  logic [15:0] bank_189 [32];
  logic [15:0] bank_190 [32];
  logic [15:0] bank_191 [32];
  logic [15:0] bank_192 [32];
  logic [15:0] bank_193 [32];
  logic [15:0] bank_194 [32];
  logic [15:0] bank_195 [32];
  logic [15:0] bank_196 [32];
  logic [15:0] bank_197 [32];
  logic [15:0] bank_198 [32];
  logic [15:0] bank_199 [32];
  logic [15:0] bank_200 [32];
  logic [15:0] bank_201 [32];
  logic [15:0] bank_202 [32];
  logic [15:0] bank_203 [32];
  logic [15:0] bank_204 [32];
  logic [15:0] bank_205 [32];
  logic [15:0] bank_206 [32];
  logic [15:0] bank_207 [32];
  logic [15:0] bank_208 [32];
  logic [15:0] bank_209 [32];
  logic [15:0] bank_210 [32];
  logic [15:0] bank_211 [32];
  logic [15:0] bank_212 [32];
  logic [15:0] bank_213 [32];
  logic [15:0] bank_214 [32];
  logic [15:0] bank_215 [32];
  logic [15:0] bank_216 [32];
  logic [15:0] bank_217 [32];
  logic [15:0] bank_218 [32];
  logic [15:0] bank_219 [32];
  logic [15:0] bank_220 [32];
  logic [15:0] bank_221 [32];
  logic [15:0] bank_222 [32];
  logic [15:0] bank_223 [32];
  logic [15:0] bank_224 [32];
  logic [15:0] bank_225 [32];
  logic [15:0] bank_226 [32];
  logic [15:0] bank_227 [32];
  logic [15:0] bank_228 [32];
  logic [15:0] bank_229 [32];
  logic [15:0] bank_230 [32];
  logic [15:0] bank_231 [32];
  logic [15:0] bank_232 [32];
  logic [15:0] bank_233 [32];
  logic [15:0] bank_234 [32];
  logic [15:0] bank_235 [32];
  logic [15:0] bank_236 [32];
  logic [15:0] bank_237 [32];
  logic [15:0] bank_238 [32];
  logic [15:0] bank_239 [32];
  logic [15:0] bank_240 [32];
  logic [15:0] bank_241 [32];
  logic [15:0] bank_242 [32];
  logic [15:0] bank_243 [32];
  logic [15:0] bank_244 [32];
  logic [15:0] bank_245 [32];
  logic [15:0] bank_246 [32];
  logic [15:0] bank_247 [32];
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_0 = (((-3 + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_1 = (((-3 + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_0 = (((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_1 = (((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_0 = (((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_1 = (((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_0 = (((-2 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_1 = (((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_0 = (((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_1 = (((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_0 = (((-2 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_1 = (((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_0 = (((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_1 = (((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_0 = (((-3 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_1 = (((-3 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_0 = (((-3 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_1 = (((-2 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_0 = (((-3 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_1 = (((-1 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_0 = (((-1 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_1 = (((-3 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_0 = (((-1 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_1 = (((-1 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_0}));
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_0;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_0 = (((-1 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3);
  logic [15:0] padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_1;
  assign padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_1 = (((-2 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3);
padded16_global_wrapper_stencil_bank_selector padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector(.d({padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_1,padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_0}));

  logic [15:0] addr0;
  assign addr0 = (((((-3 + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - -3)>>2)*1+$rtoi($floor((((-3 + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - -3)/ 62))*16);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>2)*1+$rtoi($floor((((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3)/ 62))*16);
  logic [15:0] addr2;
  assign addr2 = (((((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>2)*1+$rtoi($floor((((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3)/ 62))*16);
  logic [15:0] addr3;
  assign addr3 = (((((-2 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>2)*1+$rtoi($floor((((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3)/ 62))*16);
  logic [15:0] addr4;
  assign addr4 = (((((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>2)*1+$rtoi($floor((((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3)/ 62))*16);
  logic [15:0] addr5;
  assign addr5 = (((((-2 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>2)*1+$rtoi($floor((((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3)/ 62))*16);
  logic [15:0] addr6;
  assign addr6 = (((((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>2)*1+$rtoi($floor((((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3)/ 62))*16);
  logic [15:0] addr7;
  assign addr7 = (((((-3 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>2)*1+$rtoi($floor((((-2 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3)/ 62))*16);
  logic [15:0] addr8;
  assign addr8 = (((((-1 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>2)*1+$rtoi($floor((((-2 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3)/ 62))*16);
  always @(posedge clk) begin
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        4:bank_4[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        5:bank_5[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        6:bank_6[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        7:bank_7[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        8:bank_8[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        9:bank_9[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        10:bank_10[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        11:bank_11[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        12:bank_12[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        13:bank_13[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        14:bank_14[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        15:bank_15[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        16:bank_16[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        17:bank_17[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        18:bank_18[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        19:bank_19[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        20:bank_20[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        21:bank_21[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        22:bank_22[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        23:bank_23[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        24:bank_24[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        25:bank_25[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        26:bank_26[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        27:bank_27[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        28:bank_28[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        29:bank_29[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        30:bank_30[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        31:bank_31[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        32:bank_32[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        33:bank_33[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        34:bank_34[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        35:bank_35[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        36:bank_36[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        37:bank_37[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        38:bank_38[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        39:bank_39[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        40:bank_40[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        41:bank_41[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        42:bank_42[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        43:bank_43[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        44:bank_44[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        45:bank_45[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        46:bank_46[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        47:bank_47[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        48:bank_48[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        49:bank_49[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        50:bank_50[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        51:bank_51[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        52:bank_52[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        53:bank_53[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        54:bank_54[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        55:bank_55[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        56:bank_56[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        57:bank_57[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        58:bank_58[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        59:bank_59[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        60:bank_60[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        61:bank_61[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        62:bank_62[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        63:bank_63[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        64:bank_64[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        65:bank_65[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        66:bank_66[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        67:bank_67[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        68:bank_68[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        69:bank_69[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        70:bank_70[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        71:bank_71[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        72:bank_72[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        73:bank_73[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        74:bank_74[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        75:bank_75[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        76:bank_76[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        77:bank_77[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        78:bank_78[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        79:bank_79[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        80:bank_80[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        81:bank_81[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        82:bank_82[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        83:bank_83[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        84:bank_84[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        85:bank_85[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        86:bank_86[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        87:bank_87[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        88:bank_88[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        89:bank_89[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        90:bank_90[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        91:bank_91[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        92:bank_92[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        93:bank_93[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        94:bank_94[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        95:bank_95[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        96:bank_96[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        97:bank_97[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        98:bank_98[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        99:bank_99[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        100:bank_100[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        101:bank_101[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        102:bank_102[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        103:bank_103[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        104:bank_104[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        105:bank_105[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        106:bank_106[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        107:bank_107[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        108:bank_108[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        109:bank_109[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        110:bank_110[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        111:bank_111[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        112:bank_112[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        113:bank_113[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        114:bank_114[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        115:bank_115[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        116:bank_116[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        117:bank_117[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        118:bank_118[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        119:bank_119[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        120:bank_120[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        121:bank_121[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        122:bank_122[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        123:bank_123[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        124:bank_124[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        125:bank_125[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        126:bank_126[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        127:bank_127[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        128:bank_128[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        129:bank_129[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        130:bank_130[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        131:bank_131[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        132:bank_132[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        133:bank_133[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        134:bank_134[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        135:bank_135[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        136:bank_136[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        137:bank_137[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        138:bank_138[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        139:bank_139[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        140:bank_140[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        141:bank_141[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        142:bank_142[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        143:bank_143[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        144:bank_144[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        145:bank_145[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        146:bank_146[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        147:bank_147[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        148:bank_148[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        149:bank_149[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        150:bank_150[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        151:bank_151[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        152:bank_152[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        153:bank_153[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        154:bank_154[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        155:bank_155[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        156:bank_156[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        157:bank_157[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        158:bank_158[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        159:bank_159[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        160:bank_160[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        161:bank_161[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        162:bank_162[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        163:bank_163[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        164:bank_164[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        165:bank_165[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        166:bank_166[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        167:bank_167[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        168:bank_168[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        169:bank_169[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        170:bank_170[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        171:bank_171[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        172:bank_172[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        173:bank_173[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        174:bank_174[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        175:bank_175[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        176:bank_176[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        177:bank_177[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        178:bank_178[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        179:bank_179[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        180:bank_180[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        181:bank_181[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        182:bank_182[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        183:bank_183[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        184:bank_184[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        185:bank_185[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        186:bank_186[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        187:bank_187[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        188:bank_188[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        189:bank_189[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        190:bank_190[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        191:bank_191[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        192:bank_192[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        193:bank_193[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        194:bank_194[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        195:bank_195[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        196:bank_196[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        197:bank_197[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        198:bank_198[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        199:bank_199[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        200:bank_200[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        201:bank_201[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        202:bank_202[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        203:bank_203[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        204:bank_204[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        205:bank_205[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        206:bank_206[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        207:bank_207[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        208:bank_208[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        209:bank_209[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        210:bank_210[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        211:bank_211[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        212:bank_212[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        213:bank_213[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        214:bank_214[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        215:bank_215[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        216:bank_216[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        217:bank_217[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        218:bank_218[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        219:bank_219[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        220:bank_220[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        221:bank_221[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        222:bank_222[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        223:bank_223[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        224:bank_224[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        225:bank_225[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        226:bank_226[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        227:bank_227[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        228:bank_228[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        229:bank_229[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        230:bank_230[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        231:bank_231[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        232:bank_232[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        233:bank_233[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        234:bank_234[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        235:bank_235[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        236:bank_236[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        237:bank_237[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        238:bank_238[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        239:bank_239[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        240:bank_240[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        241:bank_241[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        242:bank_242[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        243:bank_243[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        244:bank_244[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        245:bank_245[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        246:bank_246[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        247:bank_247[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out)
        0:op_hcompute_grad_x_stencil_read[0] = bank_0[addr1];
        1:op_hcompute_grad_x_stencil_read[0] = bank_1[addr1];
        2:op_hcompute_grad_x_stencil_read[0] = bank_2[addr1];
        3:op_hcompute_grad_x_stencil_read[0] = bank_3[addr1];
        4:op_hcompute_grad_x_stencil_read[0] = bank_4[addr1];
        5:op_hcompute_grad_x_stencil_read[0] = bank_5[addr1];
        6:op_hcompute_grad_x_stencil_read[0] = bank_6[addr1];
        7:op_hcompute_grad_x_stencil_read[0] = bank_7[addr1];
        8:op_hcompute_grad_x_stencil_read[0] = bank_8[addr1];
        9:op_hcompute_grad_x_stencil_read[0] = bank_9[addr1];
        10:op_hcompute_grad_x_stencil_read[0] = bank_10[addr1];
        11:op_hcompute_grad_x_stencil_read[0] = bank_11[addr1];
        12:op_hcompute_grad_x_stencil_read[0] = bank_12[addr1];
        13:op_hcompute_grad_x_stencil_read[0] = bank_13[addr1];
        14:op_hcompute_grad_x_stencil_read[0] = bank_14[addr1];
        15:op_hcompute_grad_x_stencil_read[0] = bank_15[addr1];
        16:op_hcompute_grad_x_stencil_read[0] = bank_16[addr1];
        17:op_hcompute_grad_x_stencil_read[0] = bank_17[addr1];
        18:op_hcompute_grad_x_stencil_read[0] = bank_18[addr1];
        19:op_hcompute_grad_x_stencil_read[0] = bank_19[addr1];
        20:op_hcompute_grad_x_stencil_read[0] = bank_20[addr1];
        21:op_hcompute_grad_x_stencil_read[0] = bank_21[addr1];
        22:op_hcompute_grad_x_stencil_read[0] = bank_22[addr1];
        23:op_hcompute_grad_x_stencil_read[0] = bank_23[addr1];
        24:op_hcompute_grad_x_stencil_read[0] = bank_24[addr1];
        25:op_hcompute_grad_x_stencil_read[0] = bank_25[addr1];
        26:op_hcompute_grad_x_stencil_read[0] = bank_26[addr1];
        27:op_hcompute_grad_x_stencil_read[0] = bank_27[addr1];
        28:op_hcompute_grad_x_stencil_read[0] = bank_28[addr1];
        29:op_hcompute_grad_x_stencil_read[0] = bank_29[addr1];
        30:op_hcompute_grad_x_stencil_read[0] = bank_30[addr1];
        31:op_hcompute_grad_x_stencil_read[0] = bank_31[addr1];
        32:op_hcompute_grad_x_stencil_read[0] = bank_32[addr1];
        33:op_hcompute_grad_x_stencil_read[0] = bank_33[addr1];
        34:op_hcompute_grad_x_stencil_read[0] = bank_34[addr1];
        35:op_hcompute_grad_x_stencil_read[0] = bank_35[addr1];
        36:op_hcompute_grad_x_stencil_read[0] = bank_36[addr1];
        37:op_hcompute_grad_x_stencil_read[0] = bank_37[addr1];
        38:op_hcompute_grad_x_stencil_read[0] = bank_38[addr1];
        39:op_hcompute_grad_x_stencil_read[0] = bank_39[addr1];
        40:op_hcompute_grad_x_stencil_read[0] = bank_40[addr1];
        41:op_hcompute_grad_x_stencil_read[0] = bank_41[addr1];
        42:op_hcompute_grad_x_stencil_read[0] = bank_42[addr1];
        43:op_hcompute_grad_x_stencil_read[0] = bank_43[addr1];
        44:op_hcompute_grad_x_stencil_read[0] = bank_44[addr1];
        45:op_hcompute_grad_x_stencil_read[0] = bank_45[addr1];
        46:op_hcompute_grad_x_stencil_read[0] = bank_46[addr1];
        47:op_hcompute_grad_x_stencil_read[0] = bank_47[addr1];
        48:op_hcompute_grad_x_stencil_read[0] = bank_48[addr1];
        49:op_hcompute_grad_x_stencil_read[0] = bank_49[addr1];
        50:op_hcompute_grad_x_stencil_read[0] = bank_50[addr1];
        51:op_hcompute_grad_x_stencil_read[0] = bank_51[addr1];
        52:op_hcompute_grad_x_stencil_read[0] = bank_52[addr1];
        53:op_hcompute_grad_x_stencil_read[0] = bank_53[addr1];
        54:op_hcompute_grad_x_stencil_read[0] = bank_54[addr1];
        55:op_hcompute_grad_x_stencil_read[0] = bank_55[addr1];
        56:op_hcompute_grad_x_stencil_read[0] = bank_56[addr1];
        57:op_hcompute_grad_x_stencil_read[0] = bank_57[addr1];
        58:op_hcompute_grad_x_stencil_read[0] = bank_58[addr1];
        59:op_hcompute_grad_x_stencil_read[0] = bank_59[addr1];
        60:op_hcompute_grad_x_stencil_read[0] = bank_60[addr1];
        61:op_hcompute_grad_x_stencil_read[0] = bank_61[addr1];
        62:op_hcompute_grad_x_stencil_read[0] = bank_62[addr1];
        63:op_hcompute_grad_x_stencil_read[0] = bank_63[addr1];
        64:op_hcompute_grad_x_stencil_read[0] = bank_64[addr1];
        65:op_hcompute_grad_x_stencil_read[0] = bank_65[addr1];
        66:op_hcompute_grad_x_stencil_read[0] = bank_66[addr1];
        67:op_hcompute_grad_x_stencil_read[0] = bank_67[addr1];
        68:op_hcompute_grad_x_stencil_read[0] = bank_68[addr1];
        69:op_hcompute_grad_x_stencil_read[0] = bank_69[addr1];
        70:op_hcompute_grad_x_stencil_read[0] = bank_70[addr1];
        71:op_hcompute_grad_x_stencil_read[0] = bank_71[addr1];
        72:op_hcompute_grad_x_stencil_read[0] = bank_72[addr1];
        73:op_hcompute_grad_x_stencil_read[0] = bank_73[addr1];
        74:op_hcompute_grad_x_stencil_read[0] = bank_74[addr1];
        75:op_hcompute_grad_x_stencil_read[0] = bank_75[addr1];
        76:op_hcompute_grad_x_stencil_read[0] = bank_76[addr1];
        77:op_hcompute_grad_x_stencil_read[0] = bank_77[addr1];
        78:op_hcompute_grad_x_stencil_read[0] = bank_78[addr1];
        79:op_hcompute_grad_x_stencil_read[0] = bank_79[addr1];
        80:op_hcompute_grad_x_stencil_read[0] = bank_80[addr1];
        81:op_hcompute_grad_x_stencil_read[0] = bank_81[addr1];
        82:op_hcompute_grad_x_stencil_read[0] = bank_82[addr1];
        83:op_hcompute_grad_x_stencil_read[0] = bank_83[addr1];
        84:op_hcompute_grad_x_stencil_read[0] = bank_84[addr1];
        85:op_hcompute_grad_x_stencil_read[0] = bank_85[addr1];
        86:op_hcompute_grad_x_stencil_read[0] = bank_86[addr1];
        87:op_hcompute_grad_x_stencil_read[0] = bank_87[addr1];
        88:op_hcompute_grad_x_stencil_read[0] = bank_88[addr1];
        89:op_hcompute_grad_x_stencil_read[0] = bank_89[addr1];
        90:op_hcompute_grad_x_stencil_read[0] = bank_90[addr1];
        91:op_hcompute_grad_x_stencil_read[0] = bank_91[addr1];
        92:op_hcompute_grad_x_stencil_read[0] = bank_92[addr1];
        93:op_hcompute_grad_x_stencil_read[0] = bank_93[addr1];
        94:op_hcompute_grad_x_stencil_read[0] = bank_94[addr1];
        95:op_hcompute_grad_x_stencil_read[0] = bank_95[addr1];
        96:op_hcompute_grad_x_stencil_read[0] = bank_96[addr1];
        97:op_hcompute_grad_x_stencil_read[0] = bank_97[addr1];
        98:op_hcompute_grad_x_stencil_read[0] = bank_98[addr1];
        99:op_hcompute_grad_x_stencil_read[0] = bank_99[addr1];
        100:op_hcompute_grad_x_stencil_read[0] = bank_100[addr1];
        101:op_hcompute_grad_x_stencil_read[0] = bank_101[addr1];
        102:op_hcompute_grad_x_stencil_read[0] = bank_102[addr1];
        103:op_hcompute_grad_x_stencil_read[0] = bank_103[addr1];
        104:op_hcompute_grad_x_stencil_read[0] = bank_104[addr1];
        105:op_hcompute_grad_x_stencil_read[0] = bank_105[addr1];
        106:op_hcompute_grad_x_stencil_read[0] = bank_106[addr1];
        107:op_hcompute_grad_x_stencil_read[0] = bank_107[addr1];
        108:op_hcompute_grad_x_stencil_read[0] = bank_108[addr1];
        109:op_hcompute_grad_x_stencil_read[0] = bank_109[addr1];
        110:op_hcompute_grad_x_stencil_read[0] = bank_110[addr1];
        111:op_hcompute_grad_x_stencil_read[0] = bank_111[addr1];
        112:op_hcompute_grad_x_stencil_read[0] = bank_112[addr1];
        113:op_hcompute_grad_x_stencil_read[0] = bank_113[addr1];
        114:op_hcompute_grad_x_stencil_read[0] = bank_114[addr1];
        115:op_hcompute_grad_x_stencil_read[0] = bank_115[addr1];
        116:op_hcompute_grad_x_stencil_read[0] = bank_116[addr1];
        117:op_hcompute_grad_x_stencil_read[0] = bank_117[addr1];
        118:op_hcompute_grad_x_stencil_read[0] = bank_118[addr1];
        119:op_hcompute_grad_x_stencil_read[0] = bank_119[addr1];
        120:op_hcompute_grad_x_stencil_read[0] = bank_120[addr1];
        121:op_hcompute_grad_x_stencil_read[0] = bank_121[addr1];
        122:op_hcompute_grad_x_stencil_read[0] = bank_122[addr1];
        123:op_hcompute_grad_x_stencil_read[0] = bank_123[addr1];
        124:op_hcompute_grad_x_stencil_read[0] = bank_124[addr1];
        125:op_hcompute_grad_x_stencil_read[0] = bank_125[addr1];
        126:op_hcompute_grad_x_stencil_read[0] = bank_126[addr1];
        127:op_hcompute_grad_x_stencil_read[0] = bank_127[addr1];
        128:op_hcompute_grad_x_stencil_read[0] = bank_128[addr1];
        129:op_hcompute_grad_x_stencil_read[0] = bank_129[addr1];
        130:op_hcompute_grad_x_stencil_read[0] = bank_130[addr1];
        131:op_hcompute_grad_x_stencil_read[0] = bank_131[addr1];
        132:op_hcompute_grad_x_stencil_read[0] = bank_132[addr1];
        133:op_hcompute_grad_x_stencil_read[0] = bank_133[addr1];
        134:op_hcompute_grad_x_stencil_read[0] = bank_134[addr1];
        135:op_hcompute_grad_x_stencil_read[0] = bank_135[addr1];
        136:op_hcompute_grad_x_stencil_read[0] = bank_136[addr1];
        137:op_hcompute_grad_x_stencil_read[0] = bank_137[addr1];
        138:op_hcompute_grad_x_stencil_read[0] = bank_138[addr1];
        139:op_hcompute_grad_x_stencil_read[0] = bank_139[addr1];
        140:op_hcompute_grad_x_stencil_read[0] = bank_140[addr1];
        141:op_hcompute_grad_x_stencil_read[0] = bank_141[addr1];
        142:op_hcompute_grad_x_stencil_read[0] = bank_142[addr1];
        143:op_hcompute_grad_x_stencil_read[0] = bank_143[addr1];
        144:op_hcompute_grad_x_stencil_read[0] = bank_144[addr1];
        145:op_hcompute_grad_x_stencil_read[0] = bank_145[addr1];
        146:op_hcompute_grad_x_stencil_read[0] = bank_146[addr1];
        147:op_hcompute_grad_x_stencil_read[0] = bank_147[addr1];
        148:op_hcompute_grad_x_stencil_read[0] = bank_148[addr1];
        149:op_hcompute_grad_x_stencil_read[0] = bank_149[addr1];
        150:op_hcompute_grad_x_stencil_read[0] = bank_150[addr1];
        151:op_hcompute_grad_x_stencil_read[0] = bank_151[addr1];
        152:op_hcompute_grad_x_stencil_read[0] = bank_152[addr1];
        153:op_hcompute_grad_x_stencil_read[0] = bank_153[addr1];
        154:op_hcompute_grad_x_stencil_read[0] = bank_154[addr1];
        155:op_hcompute_grad_x_stencil_read[0] = bank_155[addr1];
        156:op_hcompute_grad_x_stencil_read[0] = bank_156[addr1];
        157:op_hcompute_grad_x_stencil_read[0] = bank_157[addr1];
        158:op_hcompute_grad_x_stencil_read[0] = bank_158[addr1];
        159:op_hcompute_grad_x_stencil_read[0] = bank_159[addr1];
        160:op_hcompute_grad_x_stencil_read[0] = bank_160[addr1];
        161:op_hcompute_grad_x_stencil_read[0] = bank_161[addr1];
        162:op_hcompute_grad_x_stencil_read[0] = bank_162[addr1];
        163:op_hcompute_grad_x_stencil_read[0] = bank_163[addr1];
        164:op_hcompute_grad_x_stencil_read[0] = bank_164[addr1];
        165:op_hcompute_grad_x_stencil_read[0] = bank_165[addr1];
        166:op_hcompute_grad_x_stencil_read[0] = bank_166[addr1];
        167:op_hcompute_grad_x_stencil_read[0] = bank_167[addr1];
        168:op_hcompute_grad_x_stencil_read[0] = bank_168[addr1];
        169:op_hcompute_grad_x_stencil_read[0] = bank_169[addr1];
        170:op_hcompute_grad_x_stencil_read[0] = bank_170[addr1];
        171:op_hcompute_grad_x_stencil_read[0] = bank_171[addr1];
        172:op_hcompute_grad_x_stencil_read[0] = bank_172[addr1];
        173:op_hcompute_grad_x_stencil_read[0] = bank_173[addr1];
        174:op_hcompute_grad_x_stencil_read[0] = bank_174[addr1];
        175:op_hcompute_grad_x_stencil_read[0] = bank_175[addr1];
        176:op_hcompute_grad_x_stencil_read[0] = bank_176[addr1];
        177:op_hcompute_grad_x_stencil_read[0] = bank_177[addr1];
        178:op_hcompute_grad_x_stencil_read[0] = bank_178[addr1];
        179:op_hcompute_grad_x_stencil_read[0] = bank_179[addr1];
        180:op_hcompute_grad_x_stencil_read[0] = bank_180[addr1];
        181:op_hcompute_grad_x_stencil_read[0] = bank_181[addr1];
        182:op_hcompute_grad_x_stencil_read[0] = bank_182[addr1];
        183:op_hcompute_grad_x_stencil_read[0] = bank_183[addr1];
        184:op_hcompute_grad_x_stencil_read[0] = bank_184[addr1];
        185:op_hcompute_grad_x_stencil_read[0] = bank_185[addr1];
        186:op_hcompute_grad_x_stencil_read[0] = bank_186[addr1];
        187:op_hcompute_grad_x_stencil_read[0] = bank_187[addr1];
        188:op_hcompute_grad_x_stencil_read[0] = bank_188[addr1];
        189:op_hcompute_grad_x_stencil_read[0] = bank_189[addr1];
        190:op_hcompute_grad_x_stencil_read[0] = bank_190[addr1];
        191:op_hcompute_grad_x_stencil_read[0] = bank_191[addr1];
        192:op_hcompute_grad_x_stencil_read[0] = bank_192[addr1];
        193:op_hcompute_grad_x_stencil_read[0] = bank_193[addr1];
        194:op_hcompute_grad_x_stencil_read[0] = bank_194[addr1];
        195:op_hcompute_grad_x_stencil_read[0] = bank_195[addr1];
        196:op_hcompute_grad_x_stencil_read[0] = bank_196[addr1];
        197:op_hcompute_grad_x_stencil_read[0] = bank_197[addr1];
        198:op_hcompute_grad_x_stencil_read[0] = bank_198[addr1];
        199:op_hcompute_grad_x_stencil_read[0] = bank_199[addr1];
        200:op_hcompute_grad_x_stencil_read[0] = bank_200[addr1];
        201:op_hcompute_grad_x_stencil_read[0] = bank_201[addr1];
        202:op_hcompute_grad_x_stencil_read[0] = bank_202[addr1];
        203:op_hcompute_grad_x_stencil_read[0] = bank_203[addr1];
        204:op_hcompute_grad_x_stencil_read[0] = bank_204[addr1];
        205:op_hcompute_grad_x_stencil_read[0] = bank_205[addr1];
        206:op_hcompute_grad_x_stencil_read[0] = bank_206[addr1];
        207:op_hcompute_grad_x_stencil_read[0] = bank_207[addr1];
        208:op_hcompute_grad_x_stencil_read[0] = bank_208[addr1];
        209:op_hcompute_grad_x_stencil_read[0] = bank_209[addr1];
        210:op_hcompute_grad_x_stencil_read[0] = bank_210[addr1];
        211:op_hcompute_grad_x_stencil_read[0] = bank_211[addr1];
        212:op_hcompute_grad_x_stencil_read[0] = bank_212[addr1];
        213:op_hcompute_grad_x_stencil_read[0] = bank_213[addr1];
        214:op_hcompute_grad_x_stencil_read[0] = bank_214[addr1];
        215:op_hcompute_grad_x_stencil_read[0] = bank_215[addr1];
        216:op_hcompute_grad_x_stencil_read[0] = bank_216[addr1];
        217:op_hcompute_grad_x_stencil_read[0] = bank_217[addr1];
        218:op_hcompute_grad_x_stencil_read[0] = bank_218[addr1];
        219:op_hcompute_grad_x_stencil_read[0] = bank_219[addr1];
        220:op_hcompute_grad_x_stencil_read[0] = bank_220[addr1];
        221:op_hcompute_grad_x_stencil_read[0] = bank_221[addr1];
        222:op_hcompute_grad_x_stencil_read[0] = bank_222[addr1];
        223:op_hcompute_grad_x_stencil_read[0] = bank_223[addr1];
        224:op_hcompute_grad_x_stencil_read[0] = bank_224[addr1];
        225:op_hcompute_grad_x_stencil_read[0] = bank_225[addr1];
        226:op_hcompute_grad_x_stencil_read[0] = bank_226[addr1];
        227:op_hcompute_grad_x_stencil_read[0] = bank_227[addr1];
        228:op_hcompute_grad_x_stencil_read[0] = bank_228[addr1];
        229:op_hcompute_grad_x_stencil_read[0] = bank_229[addr1];
        230:op_hcompute_grad_x_stencil_read[0] = bank_230[addr1];
        231:op_hcompute_grad_x_stencil_read[0] = bank_231[addr1];
        232:op_hcompute_grad_x_stencil_read[0] = bank_232[addr1];
        233:op_hcompute_grad_x_stencil_read[0] = bank_233[addr1];
        234:op_hcompute_grad_x_stencil_read[0] = bank_234[addr1];
        235:op_hcompute_grad_x_stencil_read[0] = bank_235[addr1];
        236:op_hcompute_grad_x_stencil_read[0] = bank_236[addr1];
        237:op_hcompute_grad_x_stencil_read[0] = bank_237[addr1];
        238:op_hcompute_grad_x_stencil_read[0] = bank_238[addr1];
        239:op_hcompute_grad_x_stencil_read[0] = bank_239[addr1];
        240:op_hcompute_grad_x_stencil_read[0] = bank_240[addr1];
        241:op_hcompute_grad_x_stencil_read[0] = bank_241[addr1];
        242:op_hcompute_grad_x_stencil_read[0] = bank_242[addr1];
        243:op_hcompute_grad_x_stencil_read[0] = bank_243[addr1];
        244:op_hcompute_grad_x_stencil_read[0] = bank_244[addr1];
        245:op_hcompute_grad_x_stencil_read[0] = bank_245[addr1];
        246:op_hcompute_grad_x_stencil_read[0] = bank_246[addr1];
        247:op_hcompute_grad_x_stencil_read[0] = bank_247[addr1];
      endcase
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out)
        0:op_hcompute_grad_x_stencil_read[1] = bank_0[addr2];
        1:op_hcompute_grad_x_stencil_read[1] = bank_1[addr2];
        2:op_hcompute_grad_x_stencil_read[1] = bank_2[addr2];
        3:op_hcompute_grad_x_stencil_read[1] = bank_3[addr2];
        4:op_hcompute_grad_x_stencil_read[1] = bank_4[addr2];
        5:op_hcompute_grad_x_stencil_read[1] = bank_5[addr2];
        6:op_hcompute_grad_x_stencil_read[1] = bank_6[addr2];
        7:op_hcompute_grad_x_stencil_read[1] = bank_7[addr2];
        8:op_hcompute_grad_x_stencil_read[1] = bank_8[addr2];
        9:op_hcompute_grad_x_stencil_read[1] = bank_9[addr2];
        10:op_hcompute_grad_x_stencil_read[1] = bank_10[addr2];
        11:op_hcompute_grad_x_stencil_read[1] = bank_11[addr2];
        12:op_hcompute_grad_x_stencil_read[1] = bank_12[addr2];
        13:op_hcompute_grad_x_stencil_read[1] = bank_13[addr2];
        14:op_hcompute_grad_x_stencil_read[1] = bank_14[addr2];
        15:op_hcompute_grad_x_stencil_read[1] = bank_15[addr2];
        16:op_hcompute_grad_x_stencil_read[1] = bank_16[addr2];
        17:op_hcompute_grad_x_stencil_read[1] = bank_17[addr2];
        18:op_hcompute_grad_x_stencil_read[1] = bank_18[addr2];
        19:op_hcompute_grad_x_stencil_read[1] = bank_19[addr2];
        20:op_hcompute_grad_x_stencil_read[1] = bank_20[addr2];
        21:op_hcompute_grad_x_stencil_read[1] = bank_21[addr2];
        22:op_hcompute_grad_x_stencil_read[1] = bank_22[addr2];
        23:op_hcompute_grad_x_stencil_read[1] = bank_23[addr2];
        24:op_hcompute_grad_x_stencil_read[1] = bank_24[addr2];
        25:op_hcompute_grad_x_stencil_read[1] = bank_25[addr2];
        26:op_hcompute_grad_x_stencil_read[1] = bank_26[addr2];
        27:op_hcompute_grad_x_stencil_read[1] = bank_27[addr2];
        28:op_hcompute_grad_x_stencil_read[1] = bank_28[addr2];
        29:op_hcompute_grad_x_stencil_read[1] = bank_29[addr2];
        30:op_hcompute_grad_x_stencil_read[1] = bank_30[addr2];
        31:op_hcompute_grad_x_stencil_read[1] = bank_31[addr2];
        32:op_hcompute_grad_x_stencil_read[1] = bank_32[addr2];
        33:op_hcompute_grad_x_stencil_read[1] = bank_33[addr2];
        34:op_hcompute_grad_x_stencil_read[1] = bank_34[addr2];
        35:op_hcompute_grad_x_stencil_read[1] = bank_35[addr2];
        36:op_hcompute_grad_x_stencil_read[1] = bank_36[addr2];
        37:op_hcompute_grad_x_stencil_read[1] = bank_37[addr2];
        38:op_hcompute_grad_x_stencil_read[1] = bank_38[addr2];
        39:op_hcompute_grad_x_stencil_read[1] = bank_39[addr2];
        40:op_hcompute_grad_x_stencil_read[1] = bank_40[addr2];
        41:op_hcompute_grad_x_stencil_read[1] = bank_41[addr2];
        42:op_hcompute_grad_x_stencil_read[1] = bank_42[addr2];
        43:op_hcompute_grad_x_stencil_read[1] = bank_43[addr2];
        44:op_hcompute_grad_x_stencil_read[1] = bank_44[addr2];
        45:op_hcompute_grad_x_stencil_read[1] = bank_45[addr2];
        46:op_hcompute_grad_x_stencil_read[1] = bank_46[addr2];
        47:op_hcompute_grad_x_stencil_read[1] = bank_47[addr2];
        48:op_hcompute_grad_x_stencil_read[1] = bank_48[addr2];
        49:op_hcompute_grad_x_stencil_read[1] = bank_49[addr2];
        50:op_hcompute_grad_x_stencil_read[1] = bank_50[addr2];
        51:op_hcompute_grad_x_stencil_read[1] = bank_51[addr2];
        52:op_hcompute_grad_x_stencil_read[1] = bank_52[addr2];
        53:op_hcompute_grad_x_stencil_read[1] = bank_53[addr2];
        54:op_hcompute_grad_x_stencil_read[1] = bank_54[addr2];
        55:op_hcompute_grad_x_stencil_read[1] = bank_55[addr2];
        56:op_hcompute_grad_x_stencil_read[1] = bank_56[addr2];
        57:op_hcompute_grad_x_stencil_read[1] = bank_57[addr2];
        58:op_hcompute_grad_x_stencil_read[1] = bank_58[addr2];
        59:op_hcompute_grad_x_stencil_read[1] = bank_59[addr2];
        60:op_hcompute_grad_x_stencil_read[1] = bank_60[addr2];
        61:op_hcompute_grad_x_stencil_read[1] = bank_61[addr2];
        62:op_hcompute_grad_x_stencil_read[1] = bank_62[addr2];
        63:op_hcompute_grad_x_stencil_read[1] = bank_63[addr2];
        64:op_hcompute_grad_x_stencil_read[1] = bank_64[addr2];
        65:op_hcompute_grad_x_stencil_read[1] = bank_65[addr2];
        66:op_hcompute_grad_x_stencil_read[1] = bank_66[addr2];
        67:op_hcompute_grad_x_stencil_read[1] = bank_67[addr2];
        68:op_hcompute_grad_x_stencil_read[1] = bank_68[addr2];
        69:op_hcompute_grad_x_stencil_read[1] = bank_69[addr2];
        70:op_hcompute_grad_x_stencil_read[1] = bank_70[addr2];
        71:op_hcompute_grad_x_stencil_read[1] = bank_71[addr2];
        72:op_hcompute_grad_x_stencil_read[1] = bank_72[addr2];
        73:op_hcompute_grad_x_stencil_read[1] = bank_73[addr2];
        74:op_hcompute_grad_x_stencil_read[1] = bank_74[addr2];
        75:op_hcompute_grad_x_stencil_read[1] = bank_75[addr2];
        76:op_hcompute_grad_x_stencil_read[1] = bank_76[addr2];
        77:op_hcompute_grad_x_stencil_read[1] = bank_77[addr2];
        78:op_hcompute_grad_x_stencil_read[1] = bank_78[addr2];
        79:op_hcompute_grad_x_stencil_read[1] = bank_79[addr2];
        80:op_hcompute_grad_x_stencil_read[1] = bank_80[addr2];
        81:op_hcompute_grad_x_stencil_read[1] = bank_81[addr2];
        82:op_hcompute_grad_x_stencil_read[1] = bank_82[addr2];
        83:op_hcompute_grad_x_stencil_read[1] = bank_83[addr2];
        84:op_hcompute_grad_x_stencil_read[1] = bank_84[addr2];
        85:op_hcompute_grad_x_stencil_read[1] = bank_85[addr2];
        86:op_hcompute_grad_x_stencil_read[1] = bank_86[addr2];
        87:op_hcompute_grad_x_stencil_read[1] = bank_87[addr2];
        88:op_hcompute_grad_x_stencil_read[1] = bank_88[addr2];
        89:op_hcompute_grad_x_stencil_read[1] = bank_89[addr2];
        90:op_hcompute_grad_x_stencil_read[1] = bank_90[addr2];
        91:op_hcompute_grad_x_stencil_read[1] = bank_91[addr2];
        92:op_hcompute_grad_x_stencil_read[1] = bank_92[addr2];
        93:op_hcompute_grad_x_stencil_read[1] = bank_93[addr2];
        94:op_hcompute_grad_x_stencil_read[1] = bank_94[addr2];
        95:op_hcompute_grad_x_stencil_read[1] = bank_95[addr2];
        96:op_hcompute_grad_x_stencil_read[1] = bank_96[addr2];
        97:op_hcompute_grad_x_stencil_read[1] = bank_97[addr2];
        98:op_hcompute_grad_x_stencil_read[1] = bank_98[addr2];
        99:op_hcompute_grad_x_stencil_read[1] = bank_99[addr2];
        100:op_hcompute_grad_x_stencil_read[1] = bank_100[addr2];
        101:op_hcompute_grad_x_stencil_read[1] = bank_101[addr2];
        102:op_hcompute_grad_x_stencil_read[1] = bank_102[addr2];
        103:op_hcompute_grad_x_stencil_read[1] = bank_103[addr2];
        104:op_hcompute_grad_x_stencil_read[1] = bank_104[addr2];
        105:op_hcompute_grad_x_stencil_read[1] = bank_105[addr2];
        106:op_hcompute_grad_x_stencil_read[1] = bank_106[addr2];
        107:op_hcompute_grad_x_stencil_read[1] = bank_107[addr2];
        108:op_hcompute_grad_x_stencil_read[1] = bank_108[addr2];
        109:op_hcompute_grad_x_stencil_read[1] = bank_109[addr2];
        110:op_hcompute_grad_x_stencil_read[1] = bank_110[addr2];
        111:op_hcompute_grad_x_stencil_read[1] = bank_111[addr2];
        112:op_hcompute_grad_x_stencil_read[1] = bank_112[addr2];
        113:op_hcompute_grad_x_stencil_read[1] = bank_113[addr2];
        114:op_hcompute_grad_x_stencil_read[1] = bank_114[addr2];
        115:op_hcompute_grad_x_stencil_read[1] = bank_115[addr2];
        116:op_hcompute_grad_x_stencil_read[1] = bank_116[addr2];
        117:op_hcompute_grad_x_stencil_read[1] = bank_117[addr2];
        118:op_hcompute_grad_x_stencil_read[1] = bank_118[addr2];
        119:op_hcompute_grad_x_stencil_read[1] = bank_119[addr2];
        120:op_hcompute_grad_x_stencil_read[1] = bank_120[addr2];
        121:op_hcompute_grad_x_stencil_read[1] = bank_121[addr2];
        122:op_hcompute_grad_x_stencil_read[1] = bank_122[addr2];
        123:op_hcompute_grad_x_stencil_read[1] = bank_123[addr2];
        124:op_hcompute_grad_x_stencil_read[1] = bank_124[addr2];
        125:op_hcompute_grad_x_stencil_read[1] = bank_125[addr2];
        126:op_hcompute_grad_x_stencil_read[1] = bank_126[addr2];
        127:op_hcompute_grad_x_stencil_read[1] = bank_127[addr2];
        128:op_hcompute_grad_x_stencil_read[1] = bank_128[addr2];
        129:op_hcompute_grad_x_stencil_read[1] = bank_129[addr2];
        130:op_hcompute_grad_x_stencil_read[1] = bank_130[addr2];
        131:op_hcompute_grad_x_stencil_read[1] = bank_131[addr2];
        132:op_hcompute_grad_x_stencil_read[1] = bank_132[addr2];
        133:op_hcompute_grad_x_stencil_read[1] = bank_133[addr2];
        134:op_hcompute_grad_x_stencil_read[1] = bank_134[addr2];
        135:op_hcompute_grad_x_stencil_read[1] = bank_135[addr2];
        136:op_hcompute_grad_x_stencil_read[1] = bank_136[addr2];
        137:op_hcompute_grad_x_stencil_read[1] = bank_137[addr2];
        138:op_hcompute_grad_x_stencil_read[1] = bank_138[addr2];
        139:op_hcompute_grad_x_stencil_read[1] = bank_139[addr2];
        140:op_hcompute_grad_x_stencil_read[1] = bank_140[addr2];
        141:op_hcompute_grad_x_stencil_read[1] = bank_141[addr2];
        142:op_hcompute_grad_x_stencil_read[1] = bank_142[addr2];
        143:op_hcompute_grad_x_stencil_read[1] = bank_143[addr2];
        144:op_hcompute_grad_x_stencil_read[1] = bank_144[addr2];
        145:op_hcompute_grad_x_stencil_read[1] = bank_145[addr2];
        146:op_hcompute_grad_x_stencil_read[1] = bank_146[addr2];
        147:op_hcompute_grad_x_stencil_read[1] = bank_147[addr2];
        148:op_hcompute_grad_x_stencil_read[1] = bank_148[addr2];
        149:op_hcompute_grad_x_stencil_read[1] = bank_149[addr2];
        150:op_hcompute_grad_x_stencil_read[1] = bank_150[addr2];
        151:op_hcompute_grad_x_stencil_read[1] = bank_151[addr2];
        152:op_hcompute_grad_x_stencil_read[1] = bank_152[addr2];
        153:op_hcompute_grad_x_stencil_read[1] = bank_153[addr2];
        154:op_hcompute_grad_x_stencil_read[1] = bank_154[addr2];
        155:op_hcompute_grad_x_stencil_read[1] = bank_155[addr2];
        156:op_hcompute_grad_x_stencil_read[1] = bank_156[addr2];
        157:op_hcompute_grad_x_stencil_read[1] = bank_157[addr2];
        158:op_hcompute_grad_x_stencil_read[1] = bank_158[addr2];
        159:op_hcompute_grad_x_stencil_read[1] = bank_159[addr2];
        160:op_hcompute_grad_x_stencil_read[1] = bank_160[addr2];
        161:op_hcompute_grad_x_stencil_read[1] = bank_161[addr2];
        162:op_hcompute_grad_x_stencil_read[1] = bank_162[addr2];
        163:op_hcompute_grad_x_stencil_read[1] = bank_163[addr2];
        164:op_hcompute_grad_x_stencil_read[1] = bank_164[addr2];
        165:op_hcompute_grad_x_stencil_read[1] = bank_165[addr2];
        166:op_hcompute_grad_x_stencil_read[1] = bank_166[addr2];
        167:op_hcompute_grad_x_stencil_read[1] = bank_167[addr2];
        168:op_hcompute_grad_x_stencil_read[1] = bank_168[addr2];
        169:op_hcompute_grad_x_stencil_read[1] = bank_169[addr2];
        170:op_hcompute_grad_x_stencil_read[1] = bank_170[addr2];
        171:op_hcompute_grad_x_stencil_read[1] = bank_171[addr2];
        172:op_hcompute_grad_x_stencil_read[1] = bank_172[addr2];
        173:op_hcompute_grad_x_stencil_read[1] = bank_173[addr2];
        174:op_hcompute_grad_x_stencil_read[1] = bank_174[addr2];
        175:op_hcompute_grad_x_stencil_read[1] = bank_175[addr2];
        176:op_hcompute_grad_x_stencil_read[1] = bank_176[addr2];
        177:op_hcompute_grad_x_stencil_read[1] = bank_177[addr2];
        178:op_hcompute_grad_x_stencil_read[1] = bank_178[addr2];
        179:op_hcompute_grad_x_stencil_read[1] = bank_179[addr2];
        180:op_hcompute_grad_x_stencil_read[1] = bank_180[addr2];
        181:op_hcompute_grad_x_stencil_read[1] = bank_181[addr2];
        182:op_hcompute_grad_x_stencil_read[1] = bank_182[addr2];
        183:op_hcompute_grad_x_stencil_read[1] = bank_183[addr2];
        184:op_hcompute_grad_x_stencil_read[1] = bank_184[addr2];
        185:op_hcompute_grad_x_stencil_read[1] = bank_185[addr2];
        186:op_hcompute_grad_x_stencil_read[1] = bank_186[addr2];
        187:op_hcompute_grad_x_stencil_read[1] = bank_187[addr2];
        188:op_hcompute_grad_x_stencil_read[1] = bank_188[addr2];
        189:op_hcompute_grad_x_stencil_read[1] = bank_189[addr2];
        190:op_hcompute_grad_x_stencil_read[1] = bank_190[addr2];
        191:op_hcompute_grad_x_stencil_read[1] = bank_191[addr2];
        192:op_hcompute_grad_x_stencil_read[1] = bank_192[addr2];
        193:op_hcompute_grad_x_stencil_read[1] = bank_193[addr2];
        194:op_hcompute_grad_x_stencil_read[1] = bank_194[addr2];
        195:op_hcompute_grad_x_stencil_read[1] = bank_195[addr2];
        196:op_hcompute_grad_x_stencil_read[1] = bank_196[addr2];
        197:op_hcompute_grad_x_stencil_read[1] = bank_197[addr2];
        198:op_hcompute_grad_x_stencil_read[1] = bank_198[addr2];
        199:op_hcompute_grad_x_stencil_read[1] = bank_199[addr2];
        200:op_hcompute_grad_x_stencil_read[1] = bank_200[addr2];
        201:op_hcompute_grad_x_stencil_read[1] = bank_201[addr2];
        202:op_hcompute_grad_x_stencil_read[1] = bank_202[addr2];
        203:op_hcompute_grad_x_stencil_read[1] = bank_203[addr2];
        204:op_hcompute_grad_x_stencil_read[1] = bank_204[addr2];
        205:op_hcompute_grad_x_stencil_read[1] = bank_205[addr2];
        206:op_hcompute_grad_x_stencil_read[1] = bank_206[addr2];
        207:op_hcompute_grad_x_stencil_read[1] = bank_207[addr2];
        208:op_hcompute_grad_x_stencil_read[1] = bank_208[addr2];
        209:op_hcompute_grad_x_stencil_read[1] = bank_209[addr2];
        210:op_hcompute_grad_x_stencil_read[1] = bank_210[addr2];
        211:op_hcompute_grad_x_stencil_read[1] = bank_211[addr2];
        212:op_hcompute_grad_x_stencil_read[1] = bank_212[addr2];
        213:op_hcompute_grad_x_stencil_read[1] = bank_213[addr2];
        214:op_hcompute_grad_x_stencil_read[1] = bank_214[addr2];
        215:op_hcompute_grad_x_stencil_read[1] = bank_215[addr2];
        216:op_hcompute_grad_x_stencil_read[1] = bank_216[addr2];
        217:op_hcompute_grad_x_stencil_read[1] = bank_217[addr2];
        218:op_hcompute_grad_x_stencil_read[1] = bank_218[addr2];
        219:op_hcompute_grad_x_stencil_read[1] = bank_219[addr2];
        220:op_hcompute_grad_x_stencil_read[1] = bank_220[addr2];
        221:op_hcompute_grad_x_stencil_read[1] = bank_221[addr2];
        222:op_hcompute_grad_x_stencil_read[1] = bank_222[addr2];
        223:op_hcompute_grad_x_stencil_read[1] = bank_223[addr2];
        224:op_hcompute_grad_x_stencil_read[1] = bank_224[addr2];
        225:op_hcompute_grad_x_stencil_read[1] = bank_225[addr2];
        226:op_hcompute_grad_x_stencil_read[1] = bank_226[addr2];
        227:op_hcompute_grad_x_stencil_read[1] = bank_227[addr2];
        228:op_hcompute_grad_x_stencil_read[1] = bank_228[addr2];
        229:op_hcompute_grad_x_stencil_read[1] = bank_229[addr2];
        230:op_hcompute_grad_x_stencil_read[1] = bank_230[addr2];
        231:op_hcompute_grad_x_stencil_read[1] = bank_231[addr2];
        232:op_hcompute_grad_x_stencil_read[1] = bank_232[addr2];
        233:op_hcompute_grad_x_stencil_read[1] = bank_233[addr2];
        234:op_hcompute_grad_x_stencil_read[1] = bank_234[addr2];
        235:op_hcompute_grad_x_stencil_read[1] = bank_235[addr2];
        236:op_hcompute_grad_x_stencil_read[1] = bank_236[addr2];
        237:op_hcompute_grad_x_stencil_read[1] = bank_237[addr2];
        238:op_hcompute_grad_x_stencil_read[1] = bank_238[addr2];
        239:op_hcompute_grad_x_stencil_read[1] = bank_239[addr2];
        240:op_hcompute_grad_x_stencil_read[1] = bank_240[addr2];
        241:op_hcompute_grad_x_stencil_read[1] = bank_241[addr2];
        242:op_hcompute_grad_x_stencil_read[1] = bank_242[addr2];
        243:op_hcompute_grad_x_stencil_read[1] = bank_243[addr2];
        244:op_hcompute_grad_x_stencil_read[1] = bank_244[addr2];
        245:op_hcompute_grad_x_stencil_read[1] = bank_245[addr2];
        246:op_hcompute_grad_x_stencil_read[1] = bank_246[addr2];
        247:op_hcompute_grad_x_stencil_read[1] = bank_247[addr2];
      endcase
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out)
        0:op_hcompute_grad_x_stencil_read[2] = bank_0[addr3];
        1:op_hcompute_grad_x_stencil_read[2] = bank_1[addr3];
        2:op_hcompute_grad_x_stencil_read[2] = bank_2[addr3];
        3:op_hcompute_grad_x_stencil_read[2] = bank_3[addr3];
        4:op_hcompute_grad_x_stencil_read[2] = bank_4[addr3];
        5:op_hcompute_grad_x_stencil_read[2] = bank_5[addr3];
        6:op_hcompute_grad_x_stencil_read[2] = bank_6[addr3];
        7:op_hcompute_grad_x_stencil_read[2] = bank_7[addr3];
        8:op_hcompute_grad_x_stencil_read[2] = bank_8[addr3];
        9:op_hcompute_grad_x_stencil_read[2] = bank_9[addr3];
        10:op_hcompute_grad_x_stencil_read[2] = bank_10[addr3];
        11:op_hcompute_grad_x_stencil_read[2] = bank_11[addr3];
        12:op_hcompute_grad_x_stencil_read[2] = bank_12[addr3];
        13:op_hcompute_grad_x_stencil_read[2] = bank_13[addr3];
        14:op_hcompute_grad_x_stencil_read[2] = bank_14[addr3];
        15:op_hcompute_grad_x_stencil_read[2] = bank_15[addr3];
        16:op_hcompute_grad_x_stencil_read[2] = bank_16[addr3];
        17:op_hcompute_grad_x_stencil_read[2] = bank_17[addr3];
        18:op_hcompute_grad_x_stencil_read[2] = bank_18[addr3];
        19:op_hcompute_grad_x_stencil_read[2] = bank_19[addr3];
        20:op_hcompute_grad_x_stencil_read[2] = bank_20[addr3];
        21:op_hcompute_grad_x_stencil_read[2] = bank_21[addr3];
        22:op_hcompute_grad_x_stencil_read[2] = bank_22[addr3];
        23:op_hcompute_grad_x_stencil_read[2] = bank_23[addr3];
        24:op_hcompute_grad_x_stencil_read[2] = bank_24[addr3];
        25:op_hcompute_grad_x_stencil_read[2] = bank_25[addr3];
        26:op_hcompute_grad_x_stencil_read[2] = bank_26[addr3];
        27:op_hcompute_grad_x_stencil_read[2] = bank_27[addr3];
        28:op_hcompute_grad_x_stencil_read[2] = bank_28[addr3];
        29:op_hcompute_grad_x_stencil_read[2] = bank_29[addr3];
        30:op_hcompute_grad_x_stencil_read[2] = bank_30[addr3];
        31:op_hcompute_grad_x_stencil_read[2] = bank_31[addr3];
        32:op_hcompute_grad_x_stencil_read[2] = bank_32[addr3];
        33:op_hcompute_grad_x_stencil_read[2] = bank_33[addr3];
        34:op_hcompute_grad_x_stencil_read[2] = bank_34[addr3];
        35:op_hcompute_grad_x_stencil_read[2] = bank_35[addr3];
        36:op_hcompute_grad_x_stencil_read[2] = bank_36[addr3];
        37:op_hcompute_grad_x_stencil_read[2] = bank_37[addr3];
        38:op_hcompute_grad_x_stencil_read[2] = bank_38[addr3];
        39:op_hcompute_grad_x_stencil_read[2] = bank_39[addr3];
        40:op_hcompute_grad_x_stencil_read[2] = bank_40[addr3];
        41:op_hcompute_grad_x_stencil_read[2] = bank_41[addr3];
        42:op_hcompute_grad_x_stencil_read[2] = bank_42[addr3];
        43:op_hcompute_grad_x_stencil_read[2] = bank_43[addr3];
        44:op_hcompute_grad_x_stencil_read[2] = bank_44[addr3];
        45:op_hcompute_grad_x_stencil_read[2] = bank_45[addr3];
        46:op_hcompute_grad_x_stencil_read[2] = bank_46[addr3];
        47:op_hcompute_grad_x_stencil_read[2] = bank_47[addr3];
        48:op_hcompute_grad_x_stencil_read[2] = bank_48[addr3];
        49:op_hcompute_grad_x_stencil_read[2] = bank_49[addr3];
        50:op_hcompute_grad_x_stencil_read[2] = bank_50[addr3];
        51:op_hcompute_grad_x_stencil_read[2] = bank_51[addr3];
        52:op_hcompute_grad_x_stencil_read[2] = bank_52[addr3];
        53:op_hcompute_grad_x_stencil_read[2] = bank_53[addr3];
        54:op_hcompute_grad_x_stencil_read[2] = bank_54[addr3];
        55:op_hcompute_grad_x_stencil_read[2] = bank_55[addr3];
        56:op_hcompute_grad_x_stencil_read[2] = bank_56[addr3];
        57:op_hcompute_grad_x_stencil_read[2] = bank_57[addr3];
        58:op_hcompute_grad_x_stencil_read[2] = bank_58[addr3];
        59:op_hcompute_grad_x_stencil_read[2] = bank_59[addr3];
        60:op_hcompute_grad_x_stencil_read[2] = bank_60[addr3];
        61:op_hcompute_grad_x_stencil_read[2] = bank_61[addr3];
        62:op_hcompute_grad_x_stencil_read[2] = bank_62[addr3];
        63:op_hcompute_grad_x_stencil_read[2] = bank_63[addr3];
        64:op_hcompute_grad_x_stencil_read[2] = bank_64[addr3];
        65:op_hcompute_grad_x_stencil_read[2] = bank_65[addr3];
        66:op_hcompute_grad_x_stencil_read[2] = bank_66[addr3];
        67:op_hcompute_grad_x_stencil_read[2] = bank_67[addr3];
        68:op_hcompute_grad_x_stencil_read[2] = bank_68[addr3];
        69:op_hcompute_grad_x_stencil_read[2] = bank_69[addr3];
        70:op_hcompute_grad_x_stencil_read[2] = bank_70[addr3];
        71:op_hcompute_grad_x_stencil_read[2] = bank_71[addr3];
        72:op_hcompute_grad_x_stencil_read[2] = bank_72[addr3];
        73:op_hcompute_grad_x_stencil_read[2] = bank_73[addr3];
        74:op_hcompute_grad_x_stencil_read[2] = bank_74[addr3];
        75:op_hcompute_grad_x_stencil_read[2] = bank_75[addr3];
        76:op_hcompute_grad_x_stencil_read[2] = bank_76[addr3];
        77:op_hcompute_grad_x_stencil_read[2] = bank_77[addr3];
        78:op_hcompute_grad_x_stencil_read[2] = bank_78[addr3];
        79:op_hcompute_grad_x_stencil_read[2] = bank_79[addr3];
        80:op_hcompute_grad_x_stencil_read[2] = bank_80[addr3];
        81:op_hcompute_grad_x_stencil_read[2] = bank_81[addr3];
        82:op_hcompute_grad_x_stencil_read[2] = bank_82[addr3];
        83:op_hcompute_grad_x_stencil_read[2] = bank_83[addr3];
        84:op_hcompute_grad_x_stencil_read[2] = bank_84[addr3];
        85:op_hcompute_grad_x_stencil_read[2] = bank_85[addr3];
        86:op_hcompute_grad_x_stencil_read[2] = bank_86[addr3];
        87:op_hcompute_grad_x_stencil_read[2] = bank_87[addr3];
        88:op_hcompute_grad_x_stencil_read[2] = bank_88[addr3];
        89:op_hcompute_grad_x_stencil_read[2] = bank_89[addr3];
        90:op_hcompute_grad_x_stencil_read[2] = bank_90[addr3];
        91:op_hcompute_grad_x_stencil_read[2] = bank_91[addr3];
        92:op_hcompute_grad_x_stencil_read[2] = bank_92[addr3];
        93:op_hcompute_grad_x_stencil_read[2] = bank_93[addr3];
        94:op_hcompute_grad_x_stencil_read[2] = bank_94[addr3];
        95:op_hcompute_grad_x_stencil_read[2] = bank_95[addr3];
        96:op_hcompute_grad_x_stencil_read[2] = bank_96[addr3];
        97:op_hcompute_grad_x_stencil_read[2] = bank_97[addr3];
        98:op_hcompute_grad_x_stencil_read[2] = bank_98[addr3];
        99:op_hcompute_grad_x_stencil_read[2] = bank_99[addr3];
        100:op_hcompute_grad_x_stencil_read[2] = bank_100[addr3];
        101:op_hcompute_grad_x_stencil_read[2] = bank_101[addr3];
        102:op_hcompute_grad_x_stencil_read[2] = bank_102[addr3];
        103:op_hcompute_grad_x_stencil_read[2] = bank_103[addr3];
        104:op_hcompute_grad_x_stencil_read[2] = bank_104[addr3];
        105:op_hcompute_grad_x_stencil_read[2] = bank_105[addr3];
        106:op_hcompute_grad_x_stencil_read[2] = bank_106[addr3];
        107:op_hcompute_grad_x_stencil_read[2] = bank_107[addr3];
        108:op_hcompute_grad_x_stencil_read[2] = bank_108[addr3];
        109:op_hcompute_grad_x_stencil_read[2] = bank_109[addr3];
        110:op_hcompute_grad_x_stencil_read[2] = bank_110[addr3];
        111:op_hcompute_grad_x_stencil_read[2] = bank_111[addr3];
        112:op_hcompute_grad_x_stencil_read[2] = bank_112[addr3];
        113:op_hcompute_grad_x_stencil_read[2] = bank_113[addr3];
        114:op_hcompute_grad_x_stencil_read[2] = bank_114[addr3];
        115:op_hcompute_grad_x_stencil_read[2] = bank_115[addr3];
        116:op_hcompute_grad_x_stencil_read[2] = bank_116[addr3];
        117:op_hcompute_grad_x_stencil_read[2] = bank_117[addr3];
        118:op_hcompute_grad_x_stencil_read[2] = bank_118[addr3];
        119:op_hcompute_grad_x_stencil_read[2] = bank_119[addr3];
        120:op_hcompute_grad_x_stencil_read[2] = bank_120[addr3];
        121:op_hcompute_grad_x_stencil_read[2] = bank_121[addr3];
        122:op_hcompute_grad_x_stencil_read[2] = bank_122[addr3];
        123:op_hcompute_grad_x_stencil_read[2] = bank_123[addr3];
        124:op_hcompute_grad_x_stencil_read[2] = bank_124[addr3];
        125:op_hcompute_grad_x_stencil_read[2] = bank_125[addr3];
        126:op_hcompute_grad_x_stencil_read[2] = bank_126[addr3];
        127:op_hcompute_grad_x_stencil_read[2] = bank_127[addr3];
        128:op_hcompute_grad_x_stencil_read[2] = bank_128[addr3];
        129:op_hcompute_grad_x_stencil_read[2] = bank_129[addr3];
        130:op_hcompute_grad_x_stencil_read[2] = bank_130[addr3];
        131:op_hcompute_grad_x_stencil_read[2] = bank_131[addr3];
        132:op_hcompute_grad_x_stencil_read[2] = bank_132[addr3];
        133:op_hcompute_grad_x_stencil_read[2] = bank_133[addr3];
        134:op_hcompute_grad_x_stencil_read[2] = bank_134[addr3];
        135:op_hcompute_grad_x_stencil_read[2] = bank_135[addr3];
        136:op_hcompute_grad_x_stencil_read[2] = bank_136[addr3];
        137:op_hcompute_grad_x_stencil_read[2] = bank_137[addr3];
        138:op_hcompute_grad_x_stencil_read[2] = bank_138[addr3];
        139:op_hcompute_grad_x_stencil_read[2] = bank_139[addr3];
        140:op_hcompute_grad_x_stencil_read[2] = bank_140[addr3];
        141:op_hcompute_grad_x_stencil_read[2] = bank_141[addr3];
        142:op_hcompute_grad_x_stencil_read[2] = bank_142[addr3];
        143:op_hcompute_grad_x_stencil_read[2] = bank_143[addr3];
        144:op_hcompute_grad_x_stencil_read[2] = bank_144[addr3];
        145:op_hcompute_grad_x_stencil_read[2] = bank_145[addr3];
        146:op_hcompute_grad_x_stencil_read[2] = bank_146[addr3];
        147:op_hcompute_grad_x_stencil_read[2] = bank_147[addr3];
        148:op_hcompute_grad_x_stencil_read[2] = bank_148[addr3];
        149:op_hcompute_grad_x_stencil_read[2] = bank_149[addr3];
        150:op_hcompute_grad_x_stencil_read[2] = bank_150[addr3];
        151:op_hcompute_grad_x_stencil_read[2] = bank_151[addr3];
        152:op_hcompute_grad_x_stencil_read[2] = bank_152[addr3];
        153:op_hcompute_grad_x_stencil_read[2] = bank_153[addr3];
        154:op_hcompute_grad_x_stencil_read[2] = bank_154[addr3];
        155:op_hcompute_grad_x_stencil_read[2] = bank_155[addr3];
        156:op_hcompute_grad_x_stencil_read[2] = bank_156[addr3];
        157:op_hcompute_grad_x_stencil_read[2] = bank_157[addr3];
        158:op_hcompute_grad_x_stencil_read[2] = bank_158[addr3];
        159:op_hcompute_grad_x_stencil_read[2] = bank_159[addr3];
        160:op_hcompute_grad_x_stencil_read[2] = bank_160[addr3];
        161:op_hcompute_grad_x_stencil_read[2] = bank_161[addr3];
        162:op_hcompute_grad_x_stencil_read[2] = bank_162[addr3];
        163:op_hcompute_grad_x_stencil_read[2] = bank_163[addr3];
        164:op_hcompute_grad_x_stencil_read[2] = bank_164[addr3];
        165:op_hcompute_grad_x_stencil_read[2] = bank_165[addr3];
        166:op_hcompute_grad_x_stencil_read[2] = bank_166[addr3];
        167:op_hcompute_grad_x_stencil_read[2] = bank_167[addr3];
        168:op_hcompute_grad_x_stencil_read[2] = bank_168[addr3];
        169:op_hcompute_grad_x_stencil_read[2] = bank_169[addr3];
        170:op_hcompute_grad_x_stencil_read[2] = bank_170[addr3];
        171:op_hcompute_grad_x_stencil_read[2] = bank_171[addr3];
        172:op_hcompute_grad_x_stencil_read[2] = bank_172[addr3];
        173:op_hcompute_grad_x_stencil_read[2] = bank_173[addr3];
        174:op_hcompute_grad_x_stencil_read[2] = bank_174[addr3];
        175:op_hcompute_grad_x_stencil_read[2] = bank_175[addr3];
        176:op_hcompute_grad_x_stencil_read[2] = bank_176[addr3];
        177:op_hcompute_grad_x_stencil_read[2] = bank_177[addr3];
        178:op_hcompute_grad_x_stencil_read[2] = bank_178[addr3];
        179:op_hcompute_grad_x_stencil_read[2] = bank_179[addr3];
        180:op_hcompute_grad_x_stencil_read[2] = bank_180[addr3];
        181:op_hcompute_grad_x_stencil_read[2] = bank_181[addr3];
        182:op_hcompute_grad_x_stencil_read[2] = bank_182[addr3];
        183:op_hcompute_grad_x_stencil_read[2] = bank_183[addr3];
        184:op_hcompute_grad_x_stencil_read[2] = bank_184[addr3];
        185:op_hcompute_grad_x_stencil_read[2] = bank_185[addr3];
        186:op_hcompute_grad_x_stencil_read[2] = bank_186[addr3];
        187:op_hcompute_grad_x_stencil_read[2] = bank_187[addr3];
        188:op_hcompute_grad_x_stencil_read[2] = bank_188[addr3];
        189:op_hcompute_grad_x_stencil_read[2] = bank_189[addr3];
        190:op_hcompute_grad_x_stencil_read[2] = bank_190[addr3];
        191:op_hcompute_grad_x_stencil_read[2] = bank_191[addr3];
        192:op_hcompute_grad_x_stencil_read[2] = bank_192[addr3];
        193:op_hcompute_grad_x_stencil_read[2] = bank_193[addr3];
        194:op_hcompute_grad_x_stencil_read[2] = bank_194[addr3];
        195:op_hcompute_grad_x_stencil_read[2] = bank_195[addr3];
        196:op_hcompute_grad_x_stencil_read[2] = bank_196[addr3];
        197:op_hcompute_grad_x_stencil_read[2] = bank_197[addr3];
        198:op_hcompute_grad_x_stencil_read[2] = bank_198[addr3];
        199:op_hcompute_grad_x_stencil_read[2] = bank_199[addr3];
        200:op_hcompute_grad_x_stencil_read[2] = bank_200[addr3];
        201:op_hcompute_grad_x_stencil_read[2] = bank_201[addr3];
        202:op_hcompute_grad_x_stencil_read[2] = bank_202[addr3];
        203:op_hcompute_grad_x_stencil_read[2] = bank_203[addr3];
        204:op_hcompute_grad_x_stencil_read[2] = bank_204[addr3];
        205:op_hcompute_grad_x_stencil_read[2] = bank_205[addr3];
        206:op_hcompute_grad_x_stencil_read[2] = bank_206[addr3];
        207:op_hcompute_grad_x_stencil_read[2] = bank_207[addr3];
        208:op_hcompute_grad_x_stencil_read[2] = bank_208[addr3];
        209:op_hcompute_grad_x_stencil_read[2] = bank_209[addr3];
        210:op_hcompute_grad_x_stencil_read[2] = bank_210[addr3];
        211:op_hcompute_grad_x_stencil_read[2] = bank_211[addr3];
        212:op_hcompute_grad_x_stencil_read[2] = bank_212[addr3];
        213:op_hcompute_grad_x_stencil_read[2] = bank_213[addr3];
        214:op_hcompute_grad_x_stencil_read[2] = bank_214[addr3];
        215:op_hcompute_grad_x_stencil_read[2] = bank_215[addr3];
        216:op_hcompute_grad_x_stencil_read[2] = bank_216[addr3];
        217:op_hcompute_grad_x_stencil_read[2] = bank_217[addr3];
        218:op_hcompute_grad_x_stencil_read[2] = bank_218[addr3];
        219:op_hcompute_grad_x_stencil_read[2] = bank_219[addr3];
        220:op_hcompute_grad_x_stencil_read[2] = bank_220[addr3];
        221:op_hcompute_grad_x_stencil_read[2] = bank_221[addr3];
        222:op_hcompute_grad_x_stencil_read[2] = bank_222[addr3];
        223:op_hcompute_grad_x_stencil_read[2] = bank_223[addr3];
        224:op_hcompute_grad_x_stencil_read[2] = bank_224[addr3];
        225:op_hcompute_grad_x_stencil_read[2] = bank_225[addr3];
        226:op_hcompute_grad_x_stencil_read[2] = bank_226[addr3];
        227:op_hcompute_grad_x_stencil_read[2] = bank_227[addr3];
        228:op_hcompute_grad_x_stencil_read[2] = bank_228[addr3];
        229:op_hcompute_grad_x_stencil_read[2] = bank_229[addr3];
        230:op_hcompute_grad_x_stencil_read[2] = bank_230[addr3];
        231:op_hcompute_grad_x_stencil_read[2] = bank_231[addr3];
        232:op_hcompute_grad_x_stencil_read[2] = bank_232[addr3];
        233:op_hcompute_grad_x_stencil_read[2] = bank_233[addr3];
        234:op_hcompute_grad_x_stencil_read[2] = bank_234[addr3];
        235:op_hcompute_grad_x_stencil_read[2] = bank_235[addr3];
        236:op_hcompute_grad_x_stencil_read[2] = bank_236[addr3];
        237:op_hcompute_grad_x_stencil_read[2] = bank_237[addr3];
        238:op_hcompute_grad_x_stencil_read[2] = bank_238[addr3];
        239:op_hcompute_grad_x_stencil_read[2] = bank_239[addr3];
        240:op_hcompute_grad_x_stencil_read[2] = bank_240[addr3];
        241:op_hcompute_grad_x_stencil_read[2] = bank_241[addr3];
        242:op_hcompute_grad_x_stencil_read[2] = bank_242[addr3];
        243:op_hcompute_grad_x_stencil_read[2] = bank_243[addr3];
        244:op_hcompute_grad_x_stencil_read[2] = bank_244[addr3];
        245:op_hcompute_grad_x_stencil_read[2] = bank_245[addr3];
        246:op_hcompute_grad_x_stencil_read[2] = bank_246[addr3];
        247:op_hcompute_grad_x_stencil_read[2] = bank_247[addr3];
      endcase
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out)
        0:op_hcompute_grad_x_stencil_read[3] = bank_0[addr4];
        1:op_hcompute_grad_x_stencil_read[3] = bank_1[addr4];
        2:op_hcompute_grad_x_stencil_read[3] = bank_2[addr4];
        3:op_hcompute_grad_x_stencil_read[3] = bank_3[addr4];
        4:op_hcompute_grad_x_stencil_read[3] = bank_4[addr4];
        5:op_hcompute_grad_x_stencil_read[3] = bank_5[addr4];
        6:op_hcompute_grad_x_stencil_read[3] = bank_6[addr4];
        7:op_hcompute_grad_x_stencil_read[3] = bank_7[addr4];
        8:op_hcompute_grad_x_stencil_read[3] = bank_8[addr4];
        9:op_hcompute_grad_x_stencil_read[3] = bank_9[addr4];
        10:op_hcompute_grad_x_stencil_read[3] = bank_10[addr4];
        11:op_hcompute_grad_x_stencil_read[3] = bank_11[addr4];
        12:op_hcompute_grad_x_stencil_read[3] = bank_12[addr4];
        13:op_hcompute_grad_x_stencil_read[3] = bank_13[addr4];
        14:op_hcompute_grad_x_stencil_read[3] = bank_14[addr4];
        15:op_hcompute_grad_x_stencil_read[3] = bank_15[addr4];
        16:op_hcompute_grad_x_stencil_read[3] = bank_16[addr4];
        17:op_hcompute_grad_x_stencil_read[3] = bank_17[addr4];
        18:op_hcompute_grad_x_stencil_read[3] = bank_18[addr4];
        19:op_hcompute_grad_x_stencil_read[3] = bank_19[addr4];
        20:op_hcompute_grad_x_stencil_read[3] = bank_20[addr4];
        21:op_hcompute_grad_x_stencil_read[3] = bank_21[addr4];
        22:op_hcompute_grad_x_stencil_read[3] = bank_22[addr4];
        23:op_hcompute_grad_x_stencil_read[3] = bank_23[addr4];
        24:op_hcompute_grad_x_stencil_read[3] = bank_24[addr4];
        25:op_hcompute_grad_x_stencil_read[3] = bank_25[addr4];
        26:op_hcompute_grad_x_stencil_read[3] = bank_26[addr4];
        27:op_hcompute_grad_x_stencil_read[3] = bank_27[addr4];
        28:op_hcompute_grad_x_stencil_read[3] = bank_28[addr4];
        29:op_hcompute_grad_x_stencil_read[3] = bank_29[addr4];
        30:op_hcompute_grad_x_stencil_read[3] = bank_30[addr4];
        31:op_hcompute_grad_x_stencil_read[3] = bank_31[addr4];
        32:op_hcompute_grad_x_stencil_read[3] = bank_32[addr4];
        33:op_hcompute_grad_x_stencil_read[3] = bank_33[addr4];
        34:op_hcompute_grad_x_stencil_read[3] = bank_34[addr4];
        35:op_hcompute_grad_x_stencil_read[3] = bank_35[addr4];
        36:op_hcompute_grad_x_stencil_read[3] = bank_36[addr4];
        37:op_hcompute_grad_x_stencil_read[3] = bank_37[addr4];
        38:op_hcompute_grad_x_stencil_read[3] = bank_38[addr4];
        39:op_hcompute_grad_x_stencil_read[3] = bank_39[addr4];
        40:op_hcompute_grad_x_stencil_read[3] = bank_40[addr4];
        41:op_hcompute_grad_x_stencil_read[3] = bank_41[addr4];
        42:op_hcompute_grad_x_stencil_read[3] = bank_42[addr4];
        43:op_hcompute_grad_x_stencil_read[3] = bank_43[addr4];
        44:op_hcompute_grad_x_stencil_read[3] = bank_44[addr4];
        45:op_hcompute_grad_x_stencil_read[3] = bank_45[addr4];
        46:op_hcompute_grad_x_stencil_read[3] = bank_46[addr4];
        47:op_hcompute_grad_x_stencil_read[3] = bank_47[addr4];
        48:op_hcompute_grad_x_stencil_read[3] = bank_48[addr4];
        49:op_hcompute_grad_x_stencil_read[3] = bank_49[addr4];
        50:op_hcompute_grad_x_stencil_read[3] = bank_50[addr4];
        51:op_hcompute_grad_x_stencil_read[3] = bank_51[addr4];
        52:op_hcompute_grad_x_stencil_read[3] = bank_52[addr4];
        53:op_hcompute_grad_x_stencil_read[3] = bank_53[addr4];
        54:op_hcompute_grad_x_stencil_read[3] = bank_54[addr4];
        55:op_hcompute_grad_x_stencil_read[3] = bank_55[addr4];
        56:op_hcompute_grad_x_stencil_read[3] = bank_56[addr4];
        57:op_hcompute_grad_x_stencil_read[3] = bank_57[addr4];
        58:op_hcompute_grad_x_stencil_read[3] = bank_58[addr4];
        59:op_hcompute_grad_x_stencil_read[3] = bank_59[addr4];
        60:op_hcompute_grad_x_stencil_read[3] = bank_60[addr4];
        61:op_hcompute_grad_x_stencil_read[3] = bank_61[addr4];
        62:op_hcompute_grad_x_stencil_read[3] = bank_62[addr4];
        63:op_hcompute_grad_x_stencil_read[3] = bank_63[addr4];
        64:op_hcompute_grad_x_stencil_read[3] = bank_64[addr4];
        65:op_hcompute_grad_x_stencil_read[3] = bank_65[addr4];
        66:op_hcompute_grad_x_stencil_read[3] = bank_66[addr4];
        67:op_hcompute_grad_x_stencil_read[3] = bank_67[addr4];
        68:op_hcompute_grad_x_stencil_read[3] = bank_68[addr4];
        69:op_hcompute_grad_x_stencil_read[3] = bank_69[addr4];
        70:op_hcompute_grad_x_stencil_read[3] = bank_70[addr4];
        71:op_hcompute_grad_x_stencil_read[3] = bank_71[addr4];
        72:op_hcompute_grad_x_stencil_read[3] = bank_72[addr4];
        73:op_hcompute_grad_x_stencil_read[3] = bank_73[addr4];
        74:op_hcompute_grad_x_stencil_read[3] = bank_74[addr4];
        75:op_hcompute_grad_x_stencil_read[3] = bank_75[addr4];
        76:op_hcompute_grad_x_stencil_read[3] = bank_76[addr4];
        77:op_hcompute_grad_x_stencil_read[3] = bank_77[addr4];
        78:op_hcompute_grad_x_stencil_read[3] = bank_78[addr4];
        79:op_hcompute_grad_x_stencil_read[3] = bank_79[addr4];
        80:op_hcompute_grad_x_stencil_read[3] = bank_80[addr4];
        81:op_hcompute_grad_x_stencil_read[3] = bank_81[addr4];
        82:op_hcompute_grad_x_stencil_read[3] = bank_82[addr4];
        83:op_hcompute_grad_x_stencil_read[3] = bank_83[addr4];
        84:op_hcompute_grad_x_stencil_read[3] = bank_84[addr4];
        85:op_hcompute_grad_x_stencil_read[3] = bank_85[addr4];
        86:op_hcompute_grad_x_stencil_read[3] = bank_86[addr4];
        87:op_hcompute_grad_x_stencil_read[3] = bank_87[addr4];
        88:op_hcompute_grad_x_stencil_read[3] = bank_88[addr4];
        89:op_hcompute_grad_x_stencil_read[3] = bank_89[addr4];
        90:op_hcompute_grad_x_stencil_read[3] = bank_90[addr4];
        91:op_hcompute_grad_x_stencil_read[3] = bank_91[addr4];
        92:op_hcompute_grad_x_stencil_read[3] = bank_92[addr4];
        93:op_hcompute_grad_x_stencil_read[3] = bank_93[addr4];
        94:op_hcompute_grad_x_stencil_read[3] = bank_94[addr4];
        95:op_hcompute_grad_x_stencil_read[3] = bank_95[addr4];
        96:op_hcompute_grad_x_stencil_read[3] = bank_96[addr4];
        97:op_hcompute_grad_x_stencil_read[3] = bank_97[addr4];
        98:op_hcompute_grad_x_stencil_read[3] = bank_98[addr4];
        99:op_hcompute_grad_x_stencil_read[3] = bank_99[addr4];
        100:op_hcompute_grad_x_stencil_read[3] = bank_100[addr4];
        101:op_hcompute_grad_x_stencil_read[3] = bank_101[addr4];
        102:op_hcompute_grad_x_stencil_read[3] = bank_102[addr4];
        103:op_hcompute_grad_x_stencil_read[3] = bank_103[addr4];
        104:op_hcompute_grad_x_stencil_read[3] = bank_104[addr4];
        105:op_hcompute_grad_x_stencil_read[3] = bank_105[addr4];
        106:op_hcompute_grad_x_stencil_read[3] = bank_106[addr4];
        107:op_hcompute_grad_x_stencil_read[3] = bank_107[addr4];
        108:op_hcompute_grad_x_stencil_read[3] = bank_108[addr4];
        109:op_hcompute_grad_x_stencil_read[3] = bank_109[addr4];
        110:op_hcompute_grad_x_stencil_read[3] = bank_110[addr4];
        111:op_hcompute_grad_x_stencil_read[3] = bank_111[addr4];
        112:op_hcompute_grad_x_stencil_read[3] = bank_112[addr4];
        113:op_hcompute_grad_x_stencil_read[3] = bank_113[addr4];
        114:op_hcompute_grad_x_stencil_read[3] = bank_114[addr4];
        115:op_hcompute_grad_x_stencil_read[3] = bank_115[addr4];
        116:op_hcompute_grad_x_stencil_read[3] = bank_116[addr4];
        117:op_hcompute_grad_x_stencil_read[3] = bank_117[addr4];
        118:op_hcompute_grad_x_stencil_read[3] = bank_118[addr4];
        119:op_hcompute_grad_x_stencil_read[3] = bank_119[addr4];
        120:op_hcompute_grad_x_stencil_read[3] = bank_120[addr4];
        121:op_hcompute_grad_x_stencil_read[3] = bank_121[addr4];
        122:op_hcompute_grad_x_stencil_read[3] = bank_122[addr4];
        123:op_hcompute_grad_x_stencil_read[3] = bank_123[addr4];
        124:op_hcompute_grad_x_stencil_read[3] = bank_124[addr4];
        125:op_hcompute_grad_x_stencil_read[3] = bank_125[addr4];
        126:op_hcompute_grad_x_stencil_read[3] = bank_126[addr4];
        127:op_hcompute_grad_x_stencil_read[3] = bank_127[addr4];
        128:op_hcompute_grad_x_stencil_read[3] = bank_128[addr4];
        129:op_hcompute_grad_x_stencil_read[3] = bank_129[addr4];
        130:op_hcompute_grad_x_stencil_read[3] = bank_130[addr4];
        131:op_hcompute_grad_x_stencil_read[3] = bank_131[addr4];
        132:op_hcompute_grad_x_stencil_read[3] = bank_132[addr4];
        133:op_hcompute_grad_x_stencil_read[3] = bank_133[addr4];
        134:op_hcompute_grad_x_stencil_read[3] = bank_134[addr4];
        135:op_hcompute_grad_x_stencil_read[3] = bank_135[addr4];
        136:op_hcompute_grad_x_stencil_read[3] = bank_136[addr4];
        137:op_hcompute_grad_x_stencil_read[3] = bank_137[addr4];
        138:op_hcompute_grad_x_stencil_read[3] = bank_138[addr4];
        139:op_hcompute_grad_x_stencil_read[3] = bank_139[addr4];
        140:op_hcompute_grad_x_stencil_read[3] = bank_140[addr4];
        141:op_hcompute_grad_x_stencil_read[3] = bank_141[addr4];
        142:op_hcompute_grad_x_stencil_read[3] = bank_142[addr4];
        143:op_hcompute_grad_x_stencil_read[3] = bank_143[addr4];
        144:op_hcompute_grad_x_stencil_read[3] = bank_144[addr4];
        145:op_hcompute_grad_x_stencil_read[3] = bank_145[addr4];
        146:op_hcompute_grad_x_stencil_read[3] = bank_146[addr4];
        147:op_hcompute_grad_x_stencil_read[3] = bank_147[addr4];
        148:op_hcompute_grad_x_stencil_read[3] = bank_148[addr4];
        149:op_hcompute_grad_x_stencil_read[3] = bank_149[addr4];
        150:op_hcompute_grad_x_stencil_read[3] = bank_150[addr4];
        151:op_hcompute_grad_x_stencil_read[3] = bank_151[addr4];
        152:op_hcompute_grad_x_stencil_read[3] = bank_152[addr4];
        153:op_hcompute_grad_x_stencil_read[3] = bank_153[addr4];
        154:op_hcompute_grad_x_stencil_read[3] = bank_154[addr4];
        155:op_hcompute_grad_x_stencil_read[3] = bank_155[addr4];
        156:op_hcompute_grad_x_stencil_read[3] = bank_156[addr4];
        157:op_hcompute_grad_x_stencil_read[3] = bank_157[addr4];
        158:op_hcompute_grad_x_stencil_read[3] = bank_158[addr4];
        159:op_hcompute_grad_x_stencil_read[3] = bank_159[addr4];
        160:op_hcompute_grad_x_stencil_read[3] = bank_160[addr4];
        161:op_hcompute_grad_x_stencil_read[3] = bank_161[addr4];
        162:op_hcompute_grad_x_stencil_read[3] = bank_162[addr4];
        163:op_hcompute_grad_x_stencil_read[3] = bank_163[addr4];
        164:op_hcompute_grad_x_stencil_read[3] = bank_164[addr4];
        165:op_hcompute_grad_x_stencil_read[3] = bank_165[addr4];
        166:op_hcompute_grad_x_stencil_read[3] = bank_166[addr4];
        167:op_hcompute_grad_x_stencil_read[3] = bank_167[addr4];
        168:op_hcompute_grad_x_stencil_read[3] = bank_168[addr4];
        169:op_hcompute_grad_x_stencil_read[3] = bank_169[addr4];
        170:op_hcompute_grad_x_stencil_read[3] = bank_170[addr4];
        171:op_hcompute_grad_x_stencil_read[3] = bank_171[addr4];
        172:op_hcompute_grad_x_stencil_read[3] = bank_172[addr4];
        173:op_hcompute_grad_x_stencil_read[3] = bank_173[addr4];
        174:op_hcompute_grad_x_stencil_read[3] = bank_174[addr4];
        175:op_hcompute_grad_x_stencil_read[3] = bank_175[addr4];
        176:op_hcompute_grad_x_stencil_read[3] = bank_176[addr4];
        177:op_hcompute_grad_x_stencil_read[3] = bank_177[addr4];
        178:op_hcompute_grad_x_stencil_read[3] = bank_178[addr4];
        179:op_hcompute_grad_x_stencil_read[3] = bank_179[addr4];
        180:op_hcompute_grad_x_stencil_read[3] = bank_180[addr4];
        181:op_hcompute_grad_x_stencil_read[3] = bank_181[addr4];
        182:op_hcompute_grad_x_stencil_read[3] = bank_182[addr4];
        183:op_hcompute_grad_x_stencil_read[3] = bank_183[addr4];
        184:op_hcompute_grad_x_stencil_read[3] = bank_184[addr4];
        185:op_hcompute_grad_x_stencil_read[3] = bank_185[addr4];
        186:op_hcompute_grad_x_stencil_read[3] = bank_186[addr4];
        187:op_hcompute_grad_x_stencil_read[3] = bank_187[addr4];
        188:op_hcompute_grad_x_stencil_read[3] = bank_188[addr4];
        189:op_hcompute_grad_x_stencil_read[3] = bank_189[addr4];
        190:op_hcompute_grad_x_stencil_read[3] = bank_190[addr4];
        191:op_hcompute_grad_x_stencil_read[3] = bank_191[addr4];
        192:op_hcompute_grad_x_stencil_read[3] = bank_192[addr4];
        193:op_hcompute_grad_x_stencil_read[3] = bank_193[addr4];
        194:op_hcompute_grad_x_stencil_read[3] = bank_194[addr4];
        195:op_hcompute_grad_x_stencil_read[3] = bank_195[addr4];
        196:op_hcompute_grad_x_stencil_read[3] = bank_196[addr4];
        197:op_hcompute_grad_x_stencil_read[3] = bank_197[addr4];
        198:op_hcompute_grad_x_stencil_read[3] = bank_198[addr4];
        199:op_hcompute_grad_x_stencil_read[3] = bank_199[addr4];
        200:op_hcompute_grad_x_stencil_read[3] = bank_200[addr4];
        201:op_hcompute_grad_x_stencil_read[3] = bank_201[addr4];
        202:op_hcompute_grad_x_stencil_read[3] = bank_202[addr4];
        203:op_hcompute_grad_x_stencil_read[3] = bank_203[addr4];
        204:op_hcompute_grad_x_stencil_read[3] = bank_204[addr4];
        205:op_hcompute_grad_x_stencil_read[3] = bank_205[addr4];
        206:op_hcompute_grad_x_stencil_read[3] = bank_206[addr4];
        207:op_hcompute_grad_x_stencil_read[3] = bank_207[addr4];
        208:op_hcompute_grad_x_stencil_read[3] = bank_208[addr4];
        209:op_hcompute_grad_x_stencil_read[3] = bank_209[addr4];
        210:op_hcompute_grad_x_stencil_read[3] = bank_210[addr4];
        211:op_hcompute_grad_x_stencil_read[3] = bank_211[addr4];
        212:op_hcompute_grad_x_stencil_read[3] = bank_212[addr4];
        213:op_hcompute_grad_x_stencil_read[3] = bank_213[addr4];
        214:op_hcompute_grad_x_stencil_read[3] = bank_214[addr4];
        215:op_hcompute_grad_x_stencil_read[3] = bank_215[addr4];
        216:op_hcompute_grad_x_stencil_read[3] = bank_216[addr4];
        217:op_hcompute_grad_x_stencil_read[3] = bank_217[addr4];
        218:op_hcompute_grad_x_stencil_read[3] = bank_218[addr4];
        219:op_hcompute_grad_x_stencil_read[3] = bank_219[addr4];
        220:op_hcompute_grad_x_stencil_read[3] = bank_220[addr4];
        221:op_hcompute_grad_x_stencil_read[3] = bank_221[addr4];
        222:op_hcompute_grad_x_stencil_read[3] = bank_222[addr4];
        223:op_hcompute_grad_x_stencil_read[3] = bank_223[addr4];
        224:op_hcompute_grad_x_stencil_read[3] = bank_224[addr4];
        225:op_hcompute_grad_x_stencil_read[3] = bank_225[addr4];
        226:op_hcompute_grad_x_stencil_read[3] = bank_226[addr4];
        227:op_hcompute_grad_x_stencil_read[3] = bank_227[addr4];
        228:op_hcompute_grad_x_stencil_read[3] = bank_228[addr4];
        229:op_hcompute_grad_x_stencil_read[3] = bank_229[addr4];
        230:op_hcompute_grad_x_stencil_read[3] = bank_230[addr4];
        231:op_hcompute_grad_x_stencil_read[3] = bank_231[addr4];
        232:op_hcompute_grad_x_stencil_read[3] = bank_232[addr4];
        233:op_hcompute_grad_x_stencil_read[3] = bank_233[addr4];
        234:op_hcompute_grad_x_stencil_read[3] = bank_234[addr4];
        235:op_hcompute_grad_x_stencil_read[3] = bank_235[addr4];
        236:op_hcompute_grad_x_stencil_read[3] = bank_236[addr4];
        237:op_hcompute_grad_x_stencil_read[3] = bank_237[addr4];
        238:op_hcompute_grad_x_stencil_read[3] = bank_238[addr4];
        239:op_hcompute_grad_x_stencil_read[3] = bank_239[addr4];
        240:op_hcompute_grad_x_stencil_read[3] = bank_240[addr4];
        241:op_hcompute_grad_x_stencil_read[3] = bank_241[addr4];
        242:op_hcompute_grad_x_stencil_read[3] = bank_242[addr4];
        243:op_hcompute_grad_x_stencil_read[3] = bank_243[addr4];
        244:op_hcompute_grad_x_stencil_read[3] = bank_244[addr4];
        245:op_hcompute_grad_x_stencil_read[3] = bank_245[addr4];
        246:op_hcompute_grad_x_stencil_read[3] = bank_246[addr4];
        247:op_hcompute_grad_x_stencil_read[3] = bank_247[addr4];
      endcase
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out)
        0:op_hcompute_grad_x_stencil_read[4] = bank_0[addr5];
        1:op_hcompute_grad_x_stencil_read[4] = bank_1[addr5];
        2:op_hcompute_grad_x_stencil_read[4] = bank_2[addr5];
        3:op_hcompute_grad_x_stencil_read[4] = bank_3[addr5];
        4:op_hcompute_grad_x_stencil_read[4] = bank_4[addr5];
        5:op_hcompute_grad_x_stencil_read[4] = bank_5[addr5];
        6:op_hcompute_grad_x_stencil_read[4] = bank_6[addr5];
        7:op_hcompute_grad_x_stencil_read[4] = bank_7[addr5];
        8:op_hcompute_grad_x_stencil_read[4] = bank_8[addr5];
        9:op_hcompute_grad_x_stencil_read[4] = bank_9[addr5];
        10:op_hcompute_grad_x_stencil_read[4] = bank_10[addr5];
        11:op_hcompute_grad_x_stencil_read[4] = bank_11[addr5];
        12:op_hcompute_grad_x_stencil_read[4] = bank_12[addr5];
        13:op_hcompute_grad_x_stencil_read[4] = bank_13[addr5];
        14:op_hcompute_grad_x_stencil_read[4] = bank_14[addr5];
        15:op_hcompute_grad_x_stencil_read[4] = bank_15[addr5];
        16:op_hcompute_grad_x_stencil_read[4] = bank_16[addr5];
        17:op_hcompute_grad_x_stencil_read[4] = bank_17[addr5];
        18:op_hcompute_grad_x_stencil_read[4] = bank_18[addr5];
        19:op_hcompute_grad_x_stencil_read[4] = bank_19[addr5];
        20:op_hcompute_grad_x_stencil_read[4] = bank_20[addr5];
        21:op_hcompute_grad_x_stencil_read[4] = bank_21[addr5];
        22:op_hcompute_grad_x_stencil_read[4] = bank_22[addr5];
        23:op_hcompute_grad_x_stencil_read[4] = bank_23[addr5];
        24:op_hcompute_grad_x_stencil_read[4] = bank_24[addr5];
        25:op_hcompute_grad_x_stencil_read[4] = bank_25[addr5];
        26:op_hcompute_grad_x_stencil_read[4] = bank_26[addr5];
        27:op_hcompute_grad_x_stencil_read[4] = bank_27[addr5];
        28:op_hcompute_grad_x_stencil_read[4] = bank_28[addr5];
        29:op_hcompute_grad_x_stencil_read[4] = bank_29[addr5];
        30:op_hcompute_grad_x_stencil_read[4] = bank_30[addr5];
        31:op_hcompute_grad_x_stencil_read[4] = bank_31[addr5];
        32:op_hcompute_grad_x_stencil_read[4] = bank_32[addr5];
        33:op_hcompute_grad_x_stencil_read[4] = bank_33[addr5];
        34:op_hcompute_grad_x_stencil_read[4] = bank_34[addr5];
        35:op_hcompute_grad_x_stencil_read[4] = bank_35[addr5];
        36:op_hcompute_grad_x_stencil_read[4] = bank_36[addr5];
        37:op_hcompute_grad_x_stencil_read[4] = bank_37[addr5];
        38:op_hcompute_grad_x_stencil_read[4] = bank_38[addr5];
        39:op_hcompute_grad_x_stencil_read[4] = bank_39[addr5];
        40:op_hcompute_grad_x_stencil_read[4] = bank_40[addr5];
        41:op_hcompute_grad_x_stencil_read[4] = bank_41[addr5];
        42:op_hcompute_grad_x_stencil_read[4] = bank_42[addr5];
        43:op_hcompute_grad_x_stencil_read[4] = bank_43[addr5];
        44:op_hcompute_grad_x_stencil_read[4] = bank_44[addr5];
        45:op_hcompute_grad_x_stencil_read[4] = bank_45[addr5];
        46:op_hcompute_grad_x_stencil_read[4] = bank_46[addr5];
        47:op_hcompute_grad_x_stencil_read[4] = bank_47[addr5];
        48:op_hcompute_grad_x_stencil_read[4] = bank_48[addr5];
        49:op_hcompute_grad_x_stencil_read[4] = bank_49[addr5];
        50:op_hcompute_grad_x_stencil_read[4] = bank_50[addr5];
        51:op_hcompute_grad_x_stencil_read[4] = bank_51[addr5];
        52:op_hcompute_grad_x_stencil_read[4] = bank_52[addr5];
        53:op_hcompute_grad_x_stencil_read[4] = bank_53[addr5];
        54:op_hcompute_grad_x_stencil_read[4] = bank_54[addr5];
        55:op_hcompute_grad_x_stencil_read[4] = bank_55[addr5];
        56:op_hcompute_grad_x_stencil_read[4] = bank_56[addr5];
        57:op_hcompute_grad_x_stencil_read[4] = bank_57[addr5];
        58:op_hcompute_grad_x_stencil_read[4] = bank_58[addr5];
        59:op_hcompute_grad_x_stencil_read[4] = bank_59[addr5];
        60:op_hcompute_grad_x_stencil_read[4] = bank_60[addr5];
        61:op_hcompute_grad_x_stencil_read[4] = bank_61[addr5];
        62:op_hcompute_grad_x_stencil_read[4] = bank_62[addr5];
        63:op_hcompute_grad_x_stencil_read[4] = bank_63[addr5];
        64:op_hcompute_grad_x_stencil_read[4] = bank_64[addr5];
        65:op_hcompute_grad_x_stencil_read[4] = bank_65[addr5];
        66:op_hcompute_grad_x_stencil_read[4] = bank_66[addr5];
        67:op_hcompute_grad_x_stencil_read[4] = bank_67[addr5];
        68:op_hcompute_grad_x_stencil_read[4] = bank_68[addr5];
        69:op_hcompute_grad_x_stencil_read[4] = bank_69[addr5];
        70:op_hcompute_grad_x_stencil_read[4] = bank_70[addr5];
        71:op_hcompute_grad_x_stencil_read[4] = bank_71[addr5];
        72:op_hcompute_grad_x_stencil_read[4] = bank_72[addr5];
        73:op_hcompute_grad_x_stencil_read[4] = bank_73[addr5];
        74:op_hcompute_grad_x_stencil_read[4] = bank_74[addr5];
        75:op_hcompute_grad_x_stencil_read[4] = bank_75[addr5];
        76:op_hcompute_grad_x_stencil_read[4] = bank_76[addr5];
        77:op_hcompute_grad_x_stencil_read[4] = bank_77[addr5];
        78:op_hcompute_grad_x_stencil_read[4] = bank_78[addr5];
        79:op_hcompute_grad_x_stencil_read[4] = bank_79[addr5];
        80:op_hcompute_grad_x_stencil_read[4] = bank_80[addr5];
        81:op_hcompute_grad_x_stencil_read[4] = bank_81[addr5];
        82:op_hcompute_grad_x_stencil_read[4] = bank_82[addr5];
        83:op_hcompute_grad_x_stencil_read[4] = bank_83[addr5];
        84:op_hcompute_grad_x_stencil_read[4] = bank_84[addr5];
        85:op_hcompute_grad_x_stencil_read[4] = bank_85[addr5];
        86:op_hcompute_grad_x_stencil_read[4] = bank_86[addr5];
        87:op_hcompute_grad_x_stencil_read[4] = bank_87[addr5];
        88:op_hcompute_grad_x_stencil_read[4] = bank_88[addr5];
        89:op_hcompute_grad_x_stencil_read[4] = bank_89[addr5];
        90:op_hcompute_grad_x_stencil_read[4] = bank_90[addr5];
        91:op_hcompute_grad_x_stencil_read[4] = bank_91[addr5];
        92:op_hcompute_grad_x_stencil_read[4] = bank_92[addr5];
        93:op_hcompute_grad_x_stencil_read[4] = bank_93[addr5];
        94:op_hcompute_grad_x_stencil_read[4] = bank_94[addr5];
        95:op_hcompute_grad_x_stencil_read[4] = bank_95[addr5];
        96:op_hcompute_grad_x_stencil_read[4] = bank_96[addr5];
        97:op_hcompute_grad_x_stencil_read[4] = bank_97[addr5];
        98:op_hcompute_grad_x_stencil_read[4] = bank_98[addr5];
        99:op_hcompute_grad_x_stencil_read[4] = bank_99[addr5];
        100:op_hcompute_grad_x_stencil_read[4] = bank_100[addr5];
        101:op_hcompute_grad_x_stencil_read[4] = bank_101[addr5];
        102:op_hcompute_grad_x_stencil_read[4] = bank_102[addr5];
        103:op_hcompute_grad_x_stencil_read[4] = bank_103[addr5];
        104:op_hcompute_grad_x_stencil_read[4] = bank_104[addr5];
        105:op_hcompute_grad_x_stencil_read[4] = bank_105[addr5];
        106:op_hcompute_grad_x_stencil_read[4] = bank_106[addr5];
        107:op_hcompute_grad_x_stencil_read[4] = bank_107[addr5];
        108:op_hcompute_grad_x_stencil_read[4] = bank_108[addr5];
        109:op_hcompute_grad_x_stencil_read[4] = bank_109[addr5];
        110:op_hcompute_grad_x_stencil_read[4] = bank_110[addr5];
        111:op_hcompute_grad_x_stencil_read[4] = bank_111[addr5];
        112:op_hcompute_grad_x_stencil_read[4] = bank_112[addr5];
        113:op_hcompute_grad_x_stencil_read[4] = bank_113[addr5];
        114:op_hcompute_grad_x_stencil_read[4] = bank_114[addr5];
        115:op_hcompute_grad_x_stencil_read[4] = bank_115[addr5];
        116:op_hcompute_grad_x_stencil_read[4] = bank_116[addr5];
        117:op_hcompute_grad_x_stencil_read[4] = bank_117[addr5];
        118:op_hcompute_grad_x_stencil_read[4] = bank_118[addr5];
        119:op_hcompute_grad_x_stencil_read[4] = bank_119[addr5];
        120:op_hcompute_grad_x_stencil_read[4] = bank_120[addr5];
        121:op_hcompute_grad_x_stencil_read[4] = bank_121[addr5];
        122:op_hcompute_grad_x_stencil_read[4] = bank_122[addr5];
        123:op_hcompute_grad_x_stencil_read[4] = bank_123[addr5];
        124:op_hcompute_grad_x_stencil_read[4] = bank_124[addr5];
        125:op_hcompute_grad_x_stencil_read[4] = bank_125[addr5];
        126:op_hcompute_grad_x_stencil_read[4] = bank_126[addr5];
        127:op_hcompute_grad_x_stencil_read[4] = bank_127[addr5];
        128:op_hcompute_grad_x_stencil_read[4] = bank_128[addr5];
        129:op_hcompute_grad_x_stencil_read[4] = bank_129[addr5];
        130:op_hcompute_grad_x_stencil_read[4] = bank_130[addr5];
        131:op_hcompute_grad_x_stencil_read[4] = bank_131[addr5];
        132:op_hcompute_grad_x_stencil_read[4] = bank_132[addr5];
        133:op_hcompute_grad_x_stencil_read[4] = bank_133[addr5];
        134:op_hcompute_grad_x_stencil_read[4] = bank_134[addr5];
        135:op_hcompute_grad_x_stencil_read[4] = bank_135[addr5];
        136:op_hcompute_grad_x_stencil_read[4] = bank_136[addr5];
        137:op_hcompute_grad_x_stencil_read[4] = bank_137[addr5];
        138:op_hcompute_grad_x_stencil_read[4] = bank_138[addr5];
        139:op_hcompute_grad_x_stencil_read[4] = bank_139[addr5];
        140:op_hcompute_grad_x_stencil_read[4] = bank_140[addr5];
        141:op_hcompute_grad_x_stencil_read[4] = bank_141[addr5];
        142:op_hcompute_grad_x_stencil_read[4] = bank_142[addr5];
        143:op_hcompute_grad_x_stencil_read[4] = bank_143[addr5];
        144:op_hcompute_grad_x_stencil_read[4] = bank_144[addr5];
        145:op_hcompute_grad_x_stencil_read[4] = bank_145[addr5];
        146:op_hcompute_grad_x_stencil_read[4] = bank_146[addr5];
        147:op_hcompute_grad_x_stencil_read[4] = bank_147[addr5];
        148:op_hcompute_grad_x_stencil_read[4] = bank_148[addr5];
        149:op_hcompute_grad_x_stencil_read[4] = bank_149[addr5];
        150:op_hcompute_grad_x_stencil_read[4] = bank_150[addr5];
        151:op_hcompute_grad_x_stencil_read[4] = bank_151[addr5];
        152:op_hcompute_grad_x_stencil_read[4] = bank_152[addr5];
        153:op_hcompute_grad_x_stencil_read[4] = bank_153[addr5];
        154:op_hcompute_grad_x_stencil_read[4] = bank_154[addr5];
        155:op_hcompute_grad_x_stencil_read[4] = bank_155[addr5];
        156:op_hcompute_grad_x_stencil_read[4] = bank_156[addr5];
        157:op_hcompute_grad_x_stencil_read[4] = bank_157[addr5];
        158:op_hcompute_grad_x_stencil_read[4] = bank_158[addr5];
        159:op_hcompute_grad_x_stencil_read[4] = bank_159[addr5];
        160:op_hcompute_grad_x_stencil_read[4] = bank_160[addr5];
        161:op_hcompute_grad_x_stencil_read[4] = bank_161[addr5];
        162:op_hcompute_grad_x_stencil_read[4] = bank_162[addr5];
        163:op_hcompute_grad_x_stencil_read[4] = bank_163[addr5];
        164:op_hcompute_grad_x_stencil_read[4] = bank_164[addr5];
        165:op_hcompute_grad_x_stencil_read[4] = bank_165[addr5];
        166:op_hcompute_grad_x_stencil_read[4] = bank_166[addr5];
        167:op_hcompute_grad_x_stencil_read[4] = bank_167[addr5];
        168:op_hcompute_grad_x_stencil_read[4] = bank_168[addr5];
        169:op_hcompute_grad_x_stencil_read[4] = bank_169[addr5];
        170:op_hcompute_grad_x_stencil_read[4] = bank_170[addr5];
        171:op_hcompute_grad_x_stencil_read[4] = bank_171[addr5];
        172:op_hcompute_grad_x_stencil_read[4] = bank_172[addr5];
        173:op_hcompute_grad_x_stencil_read[4] = bank_173[addr5];
        174:op_hcompute_grad_x_stencil_read[4] = bank_174[addr5];
        175:op_hcompute_grad_x_stencil_read[4] = bank_175[addr5];
        176:op_hcompute_grad_x_stencil_read[4] = bank_176[addr5];
        177:op_hcompute_grad_x_stencil_read[4] = bank_177[addr5];
        178:op_hcompute_grad_x_stencil_read[4] = bank_178[addr5];
        179:op_hcompute_grad_x_stencil_read[4] = bank_179[addr5];
        180:op_hcompute_grad_x_stencil_read[4] = bank_180[addr5];
        181:op_hcompute_grad_x_stencil_read[4] = bank_181[addr5];
        182:op_hcompute_grad_x_stencil_read[4] = bank_182[addr5];
        183:op_hcompute_grad_x_stencil_read[4] = bank_183[addr5];
        184:op_hcompute_grad_x_stencil_read[4] = bank_184[addr5];
        185:op_hcompute_grad_x_stencil_read[4] = bank_185[addr5];
        186:op_hcompute_grad_x_stencil_read[4] = bank_186[addr5];
        187:op_hcompute_grad_x_stencil_read[4] = bank_187[addr5];
        188:op_hcompute_grad_x_stencil_read[4] = bank_188[addr5];
        189:op_hcompute_grad_x_stencil_read[4] = bank_189[addr5];
        190:op_hcompute_grad_x_stencil_read[4] = bank_190[addr5];
        191:op_hcompute_grad_x_stencil_read[4] = bank_191[addr5];
        192:op_hcompute_grad_x_stencil_read[4] = bank_192[addr5];
        193:op_hcompute_grad_x_stencil_read[4] = bank_193[addr5];
        194:op_hcompute_grad_x_stencil_read[4] = bank_194[addr5];
        195:op_hcompute_grad_x_stencil_read[4] = bank_195[addr5];
        196:op_hcompute_grad_x_stencil_read[4] = bank_196[addr5];
        197:op_hcompute_grad_x_stencil_read[4] = bank_197[addr5];
        198:op_hcompute_grad_x_stencil_read[4] = bank_198[addr5];
        199:op_hcompute_grad_x_stencil_read[4] = bank_199[addr5];
        200:op_hcompute_grad_x_stencil_read[4] = bank_200[addr5];
        201:op_hcompute_grad_x_stencil_read[4] = bank_201[addr5];
        202:op_hcompute_grad_x_stencil_read[4] = bank_202[addr5];
        203:op_hcompute_grad_x_stencil_read[4] = bank_203[addr5];
        204:op_hcompute_grad_x_stencil_read[4] = bank_204[addr5];
        205:op_hcompute_grad_x_stencil_read[4] = bank_205[addr5];
        206:op_hcompute_grad_x_stencil_read[4] = bank_206[addr5];
        207:op_hcompute_grad_x_stencil_read[4] = bank_207[addr5];
        208:op_hcompute_grad_x_stencil_read[4] = bank_208[addr5];
        209:op_hcompute_grad_x_stencil_read[4] = bank_209[addr5];
        210:op_hcompute_grad_x_stencil_read[4] = bank_210[addr5];
        211:op_hcompute_grad_x_stencil_read[4] = bank_211[addr5];
        212:op_hcompute_grad_x_stencil_read[4] = bank_212[addr5];
        213:op_hcompute_grad_x_stencil_read[4] = bank_213[addr5];
        214:op_hcompute_grad_x_stencil_read[4] = bank_214[addr5];
        215:op_hcompute_grad_x_stencil_read[4] = bank_215[addr5];
        216:op_hcompute_grad_x_stencil_read[4] = bank_216[addr5];
        217:op_hcompute_grad_x_stencil_read[4] = bank_217[addr5];
        218:op_hcompute_grad_x_stencil_read[4] = bank_218[addr5];
        219:op_hcompute_grad_x_stencil_read[4] = bank_219[addr5];
        220:op_hcompute_grad_x_stencil_read[4] = bank_220[addr5];
        221:op_hcompute_grad_x_stencil_read[4] = bank_221[addr5];
        222:op_hcompute_grad_x_stencil_read[4] = bank_222[addr5];
        223:op_hcompute_grad_x_stencil_read[4] = bank_223[addr5];
        224:op_hcompute_grad_x_stencil_read[4] = bank_224[addr5];
        225:op_hcompute_grad_x_stencil_read[4] = bank_225[addr5];
        226:op_hcompute_grad_x_stencil_read[4] = bank_226[addr5];
        227:op_hcompute_grad_x_stencil_read[4] = bank_227[addr5];
        228:op_hcompute_grad_x_stencil_read[4] = bank_228[addr5];
        229:op_hcompute_grad_x_stencil_read[4] = bank_229[addr5];
        230:op_hcompute_grad_x_stencil_read[4] = bank_230[addr5];
        231:op_hcompute_grad_x_stencil_read[4] = bank_231[addr5];
        232:op_hcompute_grad_x_stencil_read[4] = bank_232[addr5];
        233:op_hcompute_grad_x_stencil_read[4] = bank_233[addr5];
        234:op_hcompute_grad_x_stencil_read[4] = bank_234[addr5];
        235:op_hcompute_grad_x_stencil_read[4] = bank_235[addr5];
        236:op_hcompute_grad_x_stencil_read[4] = bank_236[addr5];
        237:op_hcompute_grad_x_stencil_read[4] = bank_237[addr5];
        238:op_hcompute_grad_x_stencil_read[4] = bank_238[addr5];
        239:op_hcompute_grad_x_stencil_read[4] = bank_239[addr5];
        240:op_hcompute_grad_x_stencil_read[4] = bank_240[addr5];
        241:op_hcompute_grad_x_stencil_read[4] = bank_241[addr5];
        242:op_hcompute_grad_x_stencil_read[4] = bank_242[addr5];
        243:op_hcompute_grad_x_stencil_read[4] = bank_243[addr5];
        244:op_hcompute_grad_x_stencil_read[4] = bank_244[addr5];
        245:op_hcompute_grad_x_stencil_read[4] = bank_245[addr5];
        246:op_hcompute_grad_x_stencil_read[4] = bank_246[addr5];
        247:op_hcompute_grad_x_stencil_read[4] = bank_247[addr5];
      endcase
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out)
        0:op_hcompute_grad_x_stencil_read[5] = bank_0[addr6];
        1:op_hcompute_grad_x_stencil_read[5] = bank_1[addr6];
        2:op_hcompute_grad_x_stencil_read[5] = bank_2[addr6];
        3:op_hcompute_grad_x_stencil_read[5] = bank_3[addr6];
        4:op_hcompute_grad_x_stencil_read[5] = bank_4[addr6];
        5:op_hcompute_grad_x_stencil_read[5] = bank_5[addr6];
        6:op_hcompute_grad_x_stencil_read[5] = bank_6[addr6];
        7:op_hcompute_grad_x_stencil_read[5] = bank_7[addr6];
        8:op_hcompute_grad_x_stencil_read[5] = bank_8[addr6];
        9:op_hcompute_grad_x_stencil_read[5] = bank_9[addr6];
        10:op_hcompute_grad_x_stencil_read[5] = bank_10[addr6];
        11:op_hcompute_grad_x_stencil_read[5] = bank_11[addr6];
        12:op_hcompute_grad_x_stencil_read[5] = bank_12[addr6];
        13:op_hcompute_grad_x_stencil_read[5] = bank_13[addr6];
        14:op_hcompute_grad_x_stencil_read[5] = bank_14[addr6];
        15:op_hcompute_grad_x_stencil_read[5] = bank_15[addr6];
        16:op_hcompute_grad_x_stencil_read[5] = bank_16[addr6];
        17:op_hcompute_grad_x_stencil_read[5] = bank_17[addr6];
        18:op_hcompute_grad_x_stencil_read[5] = bank_18[addr6];
        19:op_hcompute_grad_x_stencil_read[5] = bank_19[addr6];
        20:op_hcompute_grad_x_stencil_read[5] = bank_20[addr6];
        21:op_hcompute_grad_x_stencil_read[5] = bank_21[addr6];
        22:op_hcompute_grad_x_stencil_read[5] = bank_22[addr6];
        23:op_hcompute_grad_x_stencil_read[5] = bank_23[addr6];
        24:op_hcompute_grad_x_stencil_read[5] = bank_24[addr6];
        25:op_hcompute_grad_x_stencil_read[5] = bank_25[addr6];
        26:op_hcompute_grad_x_stencil_read[5] = bank_26[addr6];
        27:op_hcompute_grad_x_stencil_read[5] = bank_27[addr6];
        28:op_hcompute_grad_x_stencil_read[5] = bank_28[addr6];
        29:op_hcompute_grad_x_stencil_read[5] = bank_29[addr6];
        30:op_hcompute_grad_x_stencil_read[5] = bank_30[addr6];
        31:op_hcompute_grad_x_stencil_read[5] = bank_31[addr6];
        32:op_hcompute_grad_x_stencil_read[5] = bank_32[addr6];
        33:op_hcompute_grad_x_stencil_read[5] = bank_33[addr6];
        34:op_hcompute_grad_x_stencil_read[5] = bank_34[addr6];
        35:op_hcompute_grad_x_stencil_read[5] = bank_35[addr6];
        36:op_hcompute_grad_x_stencil_read[5] = bank_36[addr6];
        37:op_hcompute_grad_x_stencil_read[5] = bank_37[addr6];
        38:op_hcompute_grad_x_stencil_read[5] = bank_38[addr6];
        39:op_hcompute_grad_x_stencil_read[5] = bank_39[addr6];
        40:op_hcompute_grad_x_stencil_read[5] = bank_40[addr6];
        41:op_hcompute_grad_x_stencil_read[5] = bank_41[addr6];
        42:op_hcompute_grad_x_stencil_read[5] = bank_42[addr6];
        43:op_hcompute_grad_x_stencil_read[5] = bank_43[addr6];
        44:op_hcompute_grad_x_stencil_read[5] = bank_44[addr6];
        45:op_hcompute_grad_x_stencil_read[5] = bank_45[addr6];
        46:op_hcompute_grad_x_stencil_read[5] = bank_46[addr6];
        47:op_hcompute_grad_x_stencil_read[5] = bank_47[addr6];
        48:op_hcompute_grad_x_stencil_read[5] = bank_48[addr6];
        49:op_hcompute_grad_x_stencil_read[5] = bank_49[addr6];
        50:op_hcompute_grad_x_stencil_read[5] = bank_50[addr6];
        51:op_hcompute_grad_x_stencil_read[5] = bank_51[addr6];
        52:op_hcompute_grad_x_stencil_read[5] = bank_52[addr6];
        53:op_hcompute_grad_x_stencil_read[5] = bank_53[addr6];
        54:op_hcompute_grad_x_stencil_read[5] = bank_54[addr6];
        55:op_hcompute_grad_x_stencil_read[5] = bank_55[addr6];
        56:op_hcompute_grad_x_stencil_read[5] = bank_56[addr6];
        57:op_hcompute_grad_x_stencil_read[5] = bank_57[addr6];
        58:op_hcompute_grad_x_stencil_read[5] = bank_58[addr6];
        59:op_hcompute_grad_x_stencil_read[5] = bank_59[addr6];
        60:op_hcompute_grad_x_stencil_read[5] = bank_60[addr6];
        61:op_hcompute_grad_x_stencil_read[5] = bank_61[addr6];
        62:op_hcompute_grad_x_stencil_read[5] = bank_62[addr6];
        63:op_hcompute_grad_x_stencil_read[5] = bank_63[addr6];
        64:op_hcompute_grad_x_stencil_read[5] = bank_64[addr6];
        65:op_hcompute_grad_x_stencil_read[5] = bank_65[addr6];
        66:op_hcompute_grad_x_stencil_read[5] = bank_66[addr6];
        67:op_hcompute_grad_x_stencil_read[5] = bank_67[addr6];
        68:op_hcompute_grad_x_stencil_read[5] = bank_68[addr6];
        69:op_hcompute_grad_x_stencil_read[5] = bank_69[addr6];
        70:op_hcompute_grad_x_stencil_read[5] = bank_70[addr6];
        71:op_hcompute_grad_x_stencil_read[5] = bank_71[addr6];
        72:op_hcompute_grad_x_stencil_read[5] = bank_72[addr6];
        73:op_hcompute_grad_x_stencil_read[5] = bank_73[addr6];
        74:op_hcompute_grad_x_stencil_read[5] = bank_74[addr6];
        75:op_hcompute_grad_x_stencil_read[5] = bank_75[addr6];
        76:op_hcompute_grad_x_stencil_read[5] = bank_76[addr6];
        77:op_hcompute_grad_x_stencil_read[5] = bank_77[addr6];
        78:op_hcompute_grad_x_stencil_read[5] = bank_78[addr6];
        79:op_hcompute_grad_x_stencil_read[5] = bank_79[addr6];
        80:op_hcompute_grad_x_stencil_read[5] = bank_80[addr6];
        81:op_hcompute_grad_x_stencil_read[5] = bank_81[addr6];
        82:op_hcompute_grad_x_stencil_read[5] = bank_82[addr6];
        83:op_hcompute_grad_x_stencil_read[5] = bank_83[addr6];
        84:op_hcompute_grad_x_stencil_read[5] = bank_84[addr6];
        85:op_hcompute_grad_x_stencil_read[5] = bank_85[addr6];
        86:op_hcompute_grad_x_stencil_read[5] = bank_86[addr6];
        87:op_hcompute_grad_x_stencil_read[5] = bank_87[addr6];
        88:op_hcompute_grad_x_stencil_read[5] = bank_88[addr6];
        89:op_hcompute_grad_x_stencil_read[5] = bank_89[addr6];
        90:op_hcompute_grad_x_stencil_read[5] = bank_90[addr6];
        91:op_hcompute_grad_x_stencil_read[5] = bank_91[addr6];
        92:op_hcompute_grad_x_stencil_read[5] = bank_92[addr6];
        93:op_hcompute_grad_x_stencil_read[5] = bank_93[addr6];
        94:op_hcompute_grad_x_stencil_read[5] = bank_94[addr6];
        95:op_hcompute_grad_x_stencil_read[5] = bank_95[addr6];
        96:op_hcompute_grad_x_stencil_read[5] = bank_96[addr6];
        97:op_hcompute_grad_x_stencil_read[5] = bank_97[addr6];
        98:op_hcompute_grad_x_stencil_read[5] = bank_98[addr6];
        99:op_hcompute_grad_x_stencil_read[5] = bank_99[addr6];
        100:op_hcompute_grad_x_stencil_read[5] = bank_100[addr6];
        101:op_hcompute_grad_x_stencil_read[5] = bank_101[addr6];
        102:op_hcompute_grad_x_stencil_read[5] = bank_102[addr6];
        103:op_hcompute_grad_x_stencil_read[5] = bank_103[addr6];
        104:op_hcompute_grad_x_stencil_read[5] = bank_104[addr6];
        105:op_hcompute_grad_x_stencil_read[5] = bank_105[addr6];
        106:op_hcompute_grad_x_stencil_read[5] = bank_106[addr6];
        107:op_hcompute_grad_x_stencil_read[5] = bank_107[addr6];
        108:op_hcompute_grad_x_stencil_read[5] = bank_108[addr6];
        109:op_hcompute_grad_x_stencil_read[5] = bank_109[addr6];
        110:op_hcompute_grad_x_stencil_read[5] = bank_110[addr6];
        111:op_hcompute_grad_x_stencil_read[5] = bank_111[addr6];
        112:op_hcompute_grad_x_stencil_read[5] = bank_112[addr6];
        113:op_hcompute_grad_x_stencil_read[5] = bank_113[addr6];
        114:op_hcompute_grad_x_stencil_read[5] = bank_114[addr6];
        115:op_hcompute_grad_x_stencil_read[5] = bank_115[addr6];
        116:op_hcompute_grad_x_stencil_read[5] = bank_116[addr6];
        117:op_hcompute_grad_x_stencil_read[5] = bank_117[addr6];
        118:op_hcompute_grad_x_stencil_read[5] = bank_118[addr6];
        119:op_hcompute_grad_x_stencil_read[5] = bank_119[addr6];
        120:op_hcompute_grad_x_stencil_read[5] = bank_120[addr6];
        121:op_hcompute_grad_x_stencil_read[5] = bank_121[addr6];
        122:op_hcompute_grad_x_stencil_read[5] = bank_122[addr6];
        123:op_hcompute_grad_x_stencil_read[5] = bank_123[addr6];
        124:op_hcompute_grad_x_stencil_read[5] = bank_124[addr6];
        125:op_hcompute_grad_x_stencil_read[5] = bank_125[addr6];
        126:op_hcompute_grad_x_stencil_read[5] = bank_126[addr6];
        127:op_hcompute_grad_x_stencil_read[5] = bank_127[addr6];
        128:op_hcompute_grad_x_stencil_read[5] = bank_128[addr6];
        129:op_hcompute_grad_x_stencil_read[5] = bank_129[addr6];
        130:op_hcompute_grad_x_stencil_read[5] = bank_130[addr6];
        131:op_hcompute_grad_x_stencil_read[5] = bank_131[addr6];
        132:op_hcompute_grad_x_stencil_read[5] = bank_132[addr6];
        133:op_hcompute_grad_x_stencil_read[5] = bank_133[addr6];
        134:op_hcompute_grad_x_stencil_read[5] = bank_134[addr6];
        135:op_hcompute_grad_x_stencil_read[5] = bank_135[addr6];
        136:op_hcompute_grad_x_stencil_read[5] = bank_136[addr6];
        137:op_hcompute_grad_x_stencil_read[5] = bank_137[addr6];
        138:op_hcompute_grad_x_stencil_read[5] = bank_138[addr6];
        139:op_hcompute_grad_x_stencil_read[5] = bank_139[addr6];
        140:op_hcompute_grad_x_stencil_read[5] = bank_140[addr6];
        141:op_hcompute_grad_x_stencil_read[5] = bank_141[addr6];
        142:op_hcompute_grad_x_stencil_read[5] = bank_142[addr6];
        143:op_hcompute_grad_x_stencil_read[5] = bank_143[addr6];
        144:op_hcompute_grad_x_stencil_read[5] = bank_144[addr6];
        145:op_hcompute_grad_x_stencil_read[5] = bank_145[addr6];
        146:op_hcompute_grad_x_stencil_read[5] = bank_146[addr6];
        147:op_hcompute_grad_x_stencil_read[5] = bank_147[addr6];
        148:op_hcompute_grad_x_stencil_read[5] = bank_148[addr6];
        149:op_hcompute_grad_x_stencil_read[5] = bank_149[addr6];
        150:op_hcompute_grad_x_stencil_read[5] = bank_150[addr6];
        151:op_hcompute_grad_x_stencil_read[5] = bank_151[addr6];
        152:op_hcompute_grad_x_stencil_read[5] = bank_152[addr6];
        153:op_hcompute_grad_x_stencil_read[5] = bank_153[addr6];
        154:op_hcompute_grad_x_stencil_read[5] = bank_154[addr6];
        155:op_hcompute_grad_x_stencil_read[5] = bank_155[addr6];
        156:op_hcompute_grad_x_stencil_read[5] = bank_156[addr6];
        157:op_hcompute_grad_x_stencil_read[5] = bank_157[addr6];
        158:op_hcompute_grad_x_stencil_read[5] = bank_158[addr6];
        159:op_hcompute_grad_x_stencil_read[5] = bank_159[addr6];
        160:op_hcompute_grad_x_stencil_read[5] = bank_160[addr6];
        161:op_hcompute_grad_x_stencil_read[5] = bank_161[addr6];
        162:op_hcompute_grad_x_stencil_read[5] = bank_162[addr6];
        163:op_hcompute_grad_x_stencil_read[5] = bank_163[addr6];
        164:op_hcompute_grad_x_stencil_read[5] = bank_164[addr6];
        165:op_hcompute_grad_x_stencil_read[5] = bank_165[addr6];
        166:op_hcompute_grad_x_stencil_read[5] = bank_166[addr6];
        167:op_hcompute_grad_x_stencil_read[5] = bank_167[addr6];
        168:op_hcompute_grad_x_stencil_read[5] = bank_168[addr6];
        169:op_hcompute_grad_x_stencil_read[5] = bank_169[addr6];
        170:op_hcompute_grad_x_stencil_read[5] = bank_170[addr6];
        171:op_hcompute_grad_x_stencil_read[5] = bank_171[addr6];
        172:op_hcompute_grad_x_stencil_read[5] = bank_172[addr6];
        173:op_hcompute_grad_x_stencil_read[5] = bank_173[addr6];
        174:op_hcompute_grad_x_stencil_read[5] = bank_174[addr6];
        175:op_hcompute_grad_x_stencil_read[5] = bank_175[addr6];
        176:op_hcompute_grad_x_stencil_read[5] = bank_176[addr6];
        177:op_hcompute_grad_x_stencil_read[5] = bank_177[addr6];
        178:op_hcompute_grad_x_stencil_read[5] = bank_178[addr6];
        179:op_hcompute_grad_x_stencil_read[5] = bank_179[addr6];
        180:op_hcompute_grad_x_stencil_read[5] = bank_180[addr6];
        181:op_hcompute_grad_x_stencil_read[5] = bank_181[addr6];
        182:op_hcompute_grad_x_stencil_read[5] = bank_182[addr6];
        183:op_hcompute_grad_x_stencil_read[5] = bank_183[addr6];
        184:op_hcompute_grad_x_stencil_read[5] = bank_184[addr6];
        185:op_hcompute_grad_x_stencil_read[5] = bank_185[addr6];
        186:op_hcompute_grad_x_stencil_read[5] = bank_186[addr6];
        187:op_hcompute_grad_x_stencil_read[5] = bank_187[addr6];
        188:op_hcompute_grad_x_stencil_read[5] = bank_188[addr6];
        189:op_hcompute_grad_x_stencil_read[5] = bank_189[addr6];
        190:op_hcompute_grad_x_stencil_read[5] = bank_190[addr6];
        191:op_hcompute_grad_x_stencil_read[5] = bank_191[addr6];
        192:op_hcompute_grad_x_stencil_read[5] = bank_192[addr6];
        193:op_hcompute_grad_x_stencil_read[5] = bank_193[addr6];
        194:op_hcompute_grad_x_stencil_read[5] = bank_194[addr6];
        195:op_hcompute_grad_x_stencil_read[5] = bank_195[addr6];
        196:op_hcompute_grad_x_stencil_read[5] = bank_196[addr6];
        197:op_hcompute_grad_x_stencil_read[5] = bank_197[addr6];
        198:op_hcompute_grad_x_stencil_read[5] = bank_198[addr6];
        199:op_hcompute_grad_x_stencil_read[5] = bank_199[addr6];
        200:op_hcompute_grad_x_stencil_read[5] = bank_200[addr6];
        201:op_hcompute_grad_x_stencil_read[5] = bank_201[addr6];
        202:op_hcompute_grad_x_stencil_read[5] = bank_202[addr6];
        203:op_hcompute_grad_x_stencil_read[5] = bank_203[addr6];
        204:op_hcompute_grad_x_stencil_read[5] = bank_204[addr6];
        205:op_hcompute_grad_x_stencil_read[5] = bank_205[addr6];
        206:op_hcompute_grad_x_stencil_read[5] = bank_206[addr6];
        207:op_hcompute_grad_x_stencil_read[5] = bank_207[addr6];
        208:op_hcompute_grad_x_stencil_read[5] = bank_208[addr6];
        209:op_hcompute_grad_x_stencil_read[5] = bank_209[addr6];
        210:op_hcompute_grad_x_stencil_read[5] = bank_210[addr6];
        211:op_hcompute_grad_x_stencil_read[5] = bank_211[addr6];
        212:op_hcompute_grad_x_stencil_read[5] = bank_212[addr6];
        213:op_hcompute_grad_x_stencil_read[5] = bank_213[addr6];
        214:op_hcompute_grad_x_stencil_read[5] = bank_214[addr6];
        215:op_hcompute_grad_x_stencil_read[5] = bank_215[addr6];
        216:op_hcompute_grad_x_stencil_read[5] = bank_216[addr6];
        217:op_hcompute_grad_x_stencil_read[5] = bank_217[addr6];
        218:op_hcompute_grad_x_stencil_read[5] = bank_218[addr6];
        219:op_hcompute_grad_x_stencil_read[5] = bank_219[addr6];
        220:op_hcompute_grad_x_stencil_read[5] = bank_220[addr6];
        221:op_hcompute_grad_x_stencil_read[5] = bank_221[addr6];
        222:op_hcompute_grad_x_stencil_read[5] = bank_222[addr6];
        223:op_hcompute_grad_x_stencil_read[5] = bank_223[addr6];
        224:op_hcompute_grad_x_stencil_read[5] = bank_224[addr6];
        225:op_hcompute_grad_x_stencil_read[5] = bank_225[addr6];
        226:op_hcompute_grad_x_stencil_read[5] = bank_226[addr6];
        227:op_hcompute_grad_x_stencil_read[5] = bank_227[addr6];
        228:op_hcompute_grad_x_stencil_read[5] = bank_228[addr6];
        229:op_hcompute_grad_x_stencil_read[5] = bank_229[addr6];
        230:op_hcompute_grad_x_stencil_read[5] = bank_230[addr6];
        231:op_hcompute_grad_x_stencil_read[5] = bank_231[addr6];
        232:op_hcompute_grad_x_stencil_read[5] = bank_232[addr6];
        233:op_hcompute_grad_x_stencil_read[5] = bank_233[addr6];
        234:op_hcompute_grad_x_stencil_read[5] = bank_234[addr6];
        235:op_hcompute_grad_x_stencil_read[5] = bank_235[addr6];
        236:op_hcompute_grad_x_stencil_read[5] = bank_236[addr6];
        237:op_hcompute_grad_x_stencil_read[5] = bank_237[addr6];
        238:op_hcompute_grad_x_stencil_read[5] = bank_238[addr6];
        239:op_hcompute_grad_x_stencil_read[5] = bank_239[addr6];
        240:op_hcompute_grad_x_stencil_read[5] = bank_240[addr6];
        241:op_hcompute_grad_x_stencil_read[5] = bank_241[addr6];
        242:op_hcompute_grad_x_stencil_read[5] = bank_242[addr6];
        243:op_hcompute_grad_x_stencil_read[5] = bank_243[addr6];
        244:op_hcompute_grad_x_stencil_read[5] = bank_244[addr6];
        245:op_hcompute_grad_x_stencil_read[5] = bank_245[addr6];
        246:op_hcompute_grad_x_stencil_read[5] = bank_246[addr6];
        247:op_hcompute_grad_x_stencil_read[5] = bank_247[addr6];
      endcase
    end
    if (op_hcompute_grad_y_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out)
        0:op_hcompute_grad_y_stencil_read[1] = bank_0[addr7];
        1:op_hcompute_grad_y_stencil_read[1] = bank_1[addr7];
        2:op_hcompute_grad_y_stencil_read[1] = bank_2[addr7];
        3:op_hcompute_grad_y_stencil_read[1] = bank_3[addr7];
        4:op_hcompute_grad_y_stencil_read[1] = bank_4[addr7];
        5:op_hcompute_grad_y_stencil_read[1] = bank_5[addr7];
        6:op_hcompute_grad_y_stencil_read[1] = bank_6[addr7];
        7:op_hcompute_grad_y_stencil_read[1] = bank_7[addr7];
        8:op_hcompute_grad_y_stencil_read[1] = bank_8[addr7];
        9:op_hcompute_grad_y_stencil_read[1] = bank_9[addr7];
        10:op_hcompute_grad_y_stencil_read[1] = bank_10[addr7];
        11:op_hcompute_grad_y_stencil_read[1] = bank_11[addr7];
        12:op_hcompute_grad_y_stencil_read[1] = bank_12[addr7];
        13:op_hcompute_grad_y_stencil_read[1] = bank_13[addr7];
        14:op_hcompute_grad_y_stencil_read[1] = bank_14[addr7];
        15:op_hcompute_grad_y_stencil_read[1] = bank_15[addr7];
        16:op_hcompute_grad_y_stencil_read[1] = bank_16[addr7];
        17:op_hcompute_grad_y_stencil_read[1] = bank_17[addr7];
        18:op_hcompute_grad_y_stencil_read[1] = bank_18[addr7];
        19:op_hcompute_grad_y_stencil_read[1] = bank_19[addr7];
        20:op_hcompute_grad_y_stencil_read[1] = bank_20[addr7];
        21:op_hcompute_grad_y_stencil_read[1] = bank_21[addr7];
        22:op_hcompute_grad_y_stencil_read[1] = bank_22[addr7];
        23:op_hcompute_grad_y_stencil_read[1] = bank_23[addr7];
        24:op_hcompute_grad_y_stencil_read[1] = bank_24[addr7];
        25:op_hcompute_grad_y_stencil_read[1] = bank_25[addr7];
        26:op_hcompute_grad_y_stencil_read[1] = bank_26[addr7];
        27:op_hcompute_grad_y_stencil_read[1] = bank_27[addr7];
        28:op_hcompute_grad_y_stencil_read[1] = bank_28[addr7];
        29:op_hcompute_grad_y_stencil_read[1] = bank_29[addr7];
        30:op_hcompute_grad_y_stencil_read[1] = bank_30[addr7];
        31:op_hcompute_grad_y_stencil_read[1] = bank_31[addr7];
        32:op_hcompute_grad_y_stencil_read[1] = bank_32[addr7];
        33:op_hcompute_grad_y_stencil_read[1] = bank_33[addr7];
        34:op_hcompute_grad_y_stencil_read[1] = bank_34[addr7];
        35:op_hcompute_grad_y_stencil_read[1] = bank_35[addr7];
        36:op_hcompute_grad_y_stencil_read[1] = bank_36[addr7];
        37:op_hcompute_grad_y_stencil_read[1] = bank_37[addr7];
        38:op_hcompute_grad_y_stencil_read[1] = bank_38[addr7];
        39:op_hcompute_grad_y_stencil_read[1] = bank_39[addr7];
        40:op_hcompute_grad_y_stencil_read[1] = bank_40[addr7];
        41:op_hcompute_grad_y_stencil_read[1] = bank_41[addr7];
        42:op_hcompute_grad_y_stencil_read[1] = bank_42[addr7];
        43:op_hcompute_grad_y_stencil_read[1] = bank_43[addr7];
        44:op_hcompute_grad_y_stencil_read[1] = bank_44[addr7];
        45:op_hcompute_grad_y_stencil_read[1] = bank_45[addr7];
        46:op_hcompute_grad_y_stencil_read[1] = bank_46[addr7];
        47:op_hcompute_grad_y_stencil_read[1] = bank_47[addr7];
        48:op_hcompute_grad_y_stencil_read[1] = bank_48[addr7];
        49:op_hcompute_grad_y_stencil_read[1] = bank_49[addr7];
        50:op_hcompute_grad_y_stencil_read[1] = bank_50[addr7];
        51:op_hcompute_grad_y_stencil_read[1] = bank_51[addr7];
        52:op_hcompute_grad_y_stencil_read[1] = bank_52[addr7];
        53:op_hcompute_grad_y_stencil_read[1] = bank_53[addr7];
        54:op_hcompute_grad_y_stencil_read[1] = bank_54[addr7];
        55:op_hcompute_grad_y_stencil_read[1] = bank_55[addr7];
        56:op_hcompute_grad_y_stencil_read[1] = bank_56[addr7];
        57:op_hcompute_grad_y_stencil_read[1] = bank_57[addr7];
        58:op_hcompute_grad_y_stencil_read[1] = bank_58[addr7];
        59:op_hcompute_grad_y_stencil_read[1] = bank_59[addr7];
        60:op_hcompute_grad_y_stencil_read[1] = bank_60[addr7];
        61:op_hcompute_grad_y_stencil_read[1] = bank_61[addr7];
        62:op_hcompute_grad_y_stencil_read[1] = bank_62[addr7];
        63:op_hcompute_grad_y_stencil_read[1] = bank_63[addr7];
        64:op_hcompute_grad_y_stencil_read[1] = bank_64[addr7];
        65:op_hcompute_grad_y_stencil_read[1] = bank_65[addr7];
        66:op_hcompute_grad_y_stencil_read[1] = bank_66[addr7];
        67:op_hcompute_grad_y_stencil_read[1] = bank_67[addr7];
        68:op_hcompute_grad_y_stencil_read[1] = bank_68[addr7];
        69:op_hcompute_grad_y_stencil_read[1] = bank_69[addr7];
        70:op_hcompute_grad_y_stencil_read[1] = bank_70[addr7];
        71:op_hcompute_grad_y_stencil_read[1] = bank_71[addr7];
        72:op_hcompute_grad_y_stencil_read[1] = bank_72[addr7];
        73:op_hcompute_grad_y_stencil_read[1] = bank_73[addr7];
        74:op_hcompute_grad_y_stencil_read[1] = bank_74[addr7];
        75:op_hcompute_grad_y_stencil_read[1] = bank_75[addr7];
        76:op_hcompute_grad_y_stencil_read[1] = bank_76[addr7];
        77:op_hcompute_grad_y_stencil_read[1] = bank_77[addr7];
        78:op_hcompute_grad_y_stencil_read[1] = bank_78[addr7];
        79:op_hcompute_grad_y_stencil_read[1] = bank_79[addr7];
        80:op_hcompute_grad_y_stencil_read[1] = bank_80[addr7];
        81:op_hcompute_grad_y_stencil_read[1] = bank_81[addr7];
        82:op_hcompute_grad_y_stencil_read[1] = bank_82[addr7];
        83:op_hcompute_grad_y_stencil_read[1] = bank_83[addr7];
        84:op_hcompute_grad_y_stencil_read[1] = bank_84[addr7];
        85:op_hcompute_grad_y_stencil_read[1] = bank_85[addr7];
        86:op_hcompute_grad_y_stencil_read[1] = bank_86[addr7];
        87:op_hcompute_grad_y_stencil_read[1] = bank_87[addr7];
        88:op_hcompute_grad_y_stencil_read[1] = bank_88[addr7];
        89:op_hcompute_grad_y_stencil_read[1] = bank_89[addr7];
        90:op_hcompute_grad_y_stencil_read[1] = bank_90[addr7];
        91:op_hcompute_grad_y_stencil_read[1] = bank_91[addr7];
        92:op_hcompute_grad_y_stencil_read[1] = bank_92[addr7];
        93:op_hcompute_grad_y_stencil_read[1] = bank_93[addr7];
        94:op_hcompute_grad_y_stencil_read[1] = bank_94[addr7];
        95:op_hcompute_grad_y_stencil_read[1] = bank_95[addr7];
        96:op_hcompute_grad_y_stencil_read[1] = bank_96[addr7];
        97:op_hcompute_grad_y_stencil_read[1] = bank_97[addr7];
        98:op_hcompute_grad_y_stencil_read[1] = bank_98[addr7];
        99:op_hcompute_grad_y_stencil_read[1] = bank_99[addr7];
        100:op_hcompute_grad_y_stencil_read[1] = bank_100[addr7];
        101:op_hcompute_grad_y_stencil_read[1] = bank_101[addr7];
        102:op_hcompute_grad_y_stencil_read[1] = bank_102[addr7];
        103:op_hcompute_grad_y_stencil_read[1] = bank_103[addr7];
        104:op_hcompute_grad_y_stencil_read[1] = bank_104[addr7];
        105:op_hcompute_grad_y_stencil_read[1] = bank_105[addr7];
        106:op_hcompute_grad_y_stencil_read[1] = bank_106[addr7];
        107:op_hcompute_grad_y_stencil_read[1] = bank_107[addr7];
        108:op_hcompute_grad_y_stencil_read[1] = bank_108[addr7];
        109:op_hcompute_grad_y_stencil_read[1] = bank_109[addr7];
        110:op_hcompute_grad_y_stencil_read[1] = bank_110[addr7];
        111:op_hcompute_grad_y_stencil_read[1] = bank_111[addr7];
        112:op_hcompute_grad_y_stencil_read[1] = bank_112[addr7];
        113:op_hcompute_grad_y_stencil_read[1] = bank_113[addr7];
        114:op_hcompute_grad_y_stencil_read[1] = bank_114[addr7];
        115:op_hcompute_grad_y_stencil_read[1] = bank_115[addr7];
        116:op_hcompute_grad_y_stencil_read[1] = bank_116[addr7];
        117:op_hcompute_grad_y_stencil_read[1] = bank_117[addr7];
        118:op_hcompute_grad_y_stencil_read[1] = bank_118[addr7];
        119:op_hcompute_grad_y_stencil_read[1] = bank_119[addr7];
        120:op_hcompute_grad_y_stencil_read[1] = bank_120[addr7];
        121:op_hcompute_grad_y_stencil_read[1] = bank_121[addr7];
        122:op_hcompute_grad_y_stencil_read[1] = bank_122[addr7];
        123:op_hcompute_grad_y_stencil_read[1] = bank_123[addr7];
        124:op_hcompute_grad_y_stencil_read[1] = bank_124[addr7];
        125:op_hcompute_grad_y_stencil_read[1] = bank_125[addr7];
        126:op_hcompute_grad_y_stencil_read[1] = bank_126[addr7];
        127:op_hcompute_grad_y_stencil_read[1] = bank_127[addr7];
        128:op_hcompute_grad_y_stencil_read[1] = bank_128[addr7];
        129:op_hcompute_grad_y_stencil_read[1] = bank_129[addr7];
        130:op_hcompute_grad_y_stencil_read[1] = bank_130[addr7];
        131:op_hcompute_grad_y_stencil_read[1] = bank_131[addr7];
        132:op_hcompute_grad_y_stencil_read[1] = bank_132[addr7];
        133:op_hcompute_grad_y_stencil_read[1] = bank_133[addr7];
        134:op_hcompute_grad_y_stencil_read[1] = bank_134[addr7];
        135:op_hcompute_grad_y_stencil_read[1] = bank_135[addr7];
        136:op_hcompute_grad_y_stencil_read[1] = bank_136[addr7];
        137:op_hcompute_grad_y_stencil_read[1] = bank_137[addr7];
        138:op_hcompute_grad_y_stencil_read[1] = bank_138[addr7];
        139:op_hcompute_grad_y_stencil_read[1] = bank_139[addr7];
        140:op_hcompute_grad_y_stencil_read[1] = bank_140[addr7];
        141:op_hcompute_grad_y_stencil_read[1] = bank_141[addr7];
        142:op_hcompute_grad_y_stencil_read[1] = bank_142[addr7];
        143:op_hcompute_grad_y_stencil_read[1] = bank_143[addr7];
        144:op_hcompute_grad_y_stencil_read[1] = bank_144[addr7];
        145:op_hcompute_grad_y_stencil_read[1] = bank_145[addr7];
        146:op_hcompute_grad_y_stencil_read[1] = bank_146[addr7];
        147:op_hcompute_grad_y_stencil_read[1] = bank_147[addr7];
        148:op_hcompute_grad_y_stencil_read[1] = bank_148[addr7];
        149:op_hcompute_grad_y_stencil_read[1] = bank_149[addr7];
        150:op_hcompute_grad_y_stencil_read[1] = bank_150[addr7];
        151:op_hcompute_grad_y_stencil_read[1] = bank_151[addr7];
        152:op_hcompute_grad_y_stencil_read[1] = bank_152[addr7];
        153:op_hcompute_grad_y_stencil_read[1] = bank_153[addr7];
        154:op_hcompute_grad_y_stencil_read[1] = bank_154[addr7];
        155:op_hcompute_grad_y_stencil_read[1] = bank_155[addr7];
        156:op_hcompute_grad_y_stencil_read[1] = bank_156[addr7];
        157:op_hcompute_grad_y_stencil_read[1] = bank_157[addr7];
        158:op_hcompute_grad_y_stencil_read[1] = bank_158[addr7];
        159:op_hcompute_grad_y_stencil_read[1] = bank_159[addr7];
        160:op_hcompute_grad_y_stencil_read[1] = bank_160[addr7];
        161:op_hcompute_grad_y_stencil_read[1] = bank_161[addr7];
        162:op_hcompute_grad_y_stencil_read[1] = bank_162[addr7];
        163:op_hcompute_grad_y_stencil_read[1] = bank_163[addr7];
        164:op_hcompute_grad_y_stencil_read[1] = bank_164[addr7];
        165:op_hcompute_grad_y_stencil_read[1] = bank_165[addr7];
        166:op_hcompute_grad_y_stencil_read[1] = bank_166[addr7];
        167:op_hcompute_grad_y_stencil_read[1] = bank_167[addr7];
        168:op_hcompute_grad_y_stencil_read[1] = bank_168[addr7];
        169:op_hcompute_grad_y_stencil_read[1] = bank_169[addr7];
        170:op_hcompute_grad_y_stencil_read[1] = bank_170[addr7];
        171:op_hcompute_grad_y_stencil_read[1] = bank_171[addr7];
        172:op_hcompute_grad_y_stencil_read[1] = bank_172[addr7];
        173:op_hcompute_grad_y_stencil_read[1] = bank_173[addr7];
        174:op_hcompute_grad_y_stencil_read[1] = bank_174[addr7];
        175:op_hcompute_grad_y_stencil_read[1] = bank_175[addr7];
        176:op_hcompute_grad_y_stencil_read[1] = bank_176[addr7];
        177:op_hcompute_grad_y_stencil_read[1] = bank_177[addr7];
        178:op_hcompute_grad_y_stencil_read[1] = bank_178[addr7];
        179:op_hcompute_grad_y_stencil_read[1] = bank_179[addr7];
        180:op_hcompute_grad_y_stencil_read[1] = bank_180[addr7];
        181:op_hcompute_grad_y_stencil_read[1] = bank_181[addr7];
        182:op_hcompute_grad_y_stencil_read[1] = bank_182[addr7];
        183:op_hcompute_grad_y_stencil_read[1] = bank_183[addr7];
        184:op_hcompute_grad_y_stencil_read[1] = bank_184[addr7];
        185:op_hcompute_grad_y_stencil_read[1] = bank_185[addr7];
        186:op_hcompute_grad_y_stencil_read[1] = bank_186[addr7];
        187:op_hcompute_grad_y_stencil_read[1] = bank_187[addr7];
        188:op_hcompute_grad_y_stencil_read[1] = bank_188[addr7];
        189:op_hcompute_grad_y_stencil_read[1] = bank_189[addr7];
        190:op_hcompute_grad_y_stencil_read[1] = bank_190[addr7];
        191:op_hcompute_grad_y_stencil_read[1] = bank_191[addr7];
        192:op_hcompute_grad_y_stencil_read[1] = bank_192[addr7];
        193:op_hcompute_grad_y_stencil_read[1] = bank_193[addr7];
        194:op_hcompute_grad_y_stencil_read[1] = bank_194[addr7];
        195:op_hcompute_grad_y_stencil_read[1] = bank_195[addr7];
        196:op_hcompute_grad_y_stencil_read[1] = bank_196[addr7];
        197:op_hcompute_grad_y_stencil_read[1] = bank_197[addr7];
        198:op_hcompute_grad_y_stencil_read[1] = bank_198[addr7];
        199:op_hcompute_grad_y_stencil_read[1] = bank_199[addr7];
        200:op_hcompute_grad_y_stencil_read[1] = bank_200[addr7];
        201:op_hcompute_grad_y_stencil_read[1] = bank_201[addr7];
        202:op_hcompute_grad_y_stencil_read[1] = bank_202[addr7];
        203:op_hcompute_grad_y_stencil_read[1] = bank_203[addr7];
        204:op_hcompute_grad_y_stencil_read[1] = bank_204[addr7];
        205:op_hcompute_grad_y_stencil_read[1] = bank_205[addr7];
        206:op_hcompute_grad_y_stencil_read[1] = bank_206[addr7];
        207:op_hcompute_grad_y_stencil_read[1] = bank_207[addr7];
        208:op_hcompute_grad_y_stencil_read[1] = bank_208[addr7];
        209:op_hcompute_grad_y_stencil_read[1] = bank_209[addr7];
        210:op_hcompute_grad_y_stencil_read[1] = bank_210[addr7];
        211:op_hcompute_grad_y_stencil_read[1] = bank_211[addr7];
        212:op_hcompute_grad_y_stencil_read[1] = bank_212[addr7];
        213:op_hcompute_grad_y_stencil_read[1] = bank_213[addr7];
        214:op_hcompute_grad_y_stencil_read[1] = bank_214[addr7];
        215:op_hcompute_grad_y_stencil_read[1] = bank_215[addr7];
        216:op_hcompute_grad_y_stencil_read[1] = bank_216[addr7];
        217:op_hcompute_grad_y_stencil_read[1] = bank_217[addr7];
        218:op_hcompute_grad_y_stencil_read[1] = bank_218[addr7];
        219:op_hcompute_grad_y_stencil_read[1] = bank_219[addr7];
        220:op_hcompute_grad_y_stencil_read[1] = bank_220[addr7];
        221:op_hcompute_grad_y_stencil_read[1] = bank_221[addr7];
        222:op_hcompute_grad_y_stencil_read[1] = bank_222[addr7];
        223:op_hcompute_grad_y_stencil_read[1] = bank_223[addr7];
        224:op_hcompute_grad_y_stencil_read[1] = bank_224[addr7];
        225:op_hcompute_grad_y_stencil_read[1] = bank_225[addr7];
        226:op_hcompute_grad_y_stencil_read[1] = bank_226[addr7];
        227:op_hcompute_grad_y_stencil_read[1] = bank_227[addr7];
        228:op_hcompute_grad_y_stencil_read[1] = bank_228[addr7];
        229:op_hcompute_grad_y_stencil_read[1] = bank_229[addr7];
        230:op_hcompute_grad_y_stencil_read[1] = bank_230[addr7];
        231:op_hcompute_grad_y_stencil_read[1] = bank_231[addr7];
        232:op_hcompute_grad_y_stencil_read[1] = bank_232[addr7];
        233:op_hcompute_grad_y_stencil_read[1] = bank_233[addr7];
        234:op_hcompute_grad_y_stencil_read[1] = bank_234[addr7];
        235:op_hcompute_grad_y_stencil_read[1] = bank_235[addr7];
        236:op_hcompute_grad_y_stencil_read[1] = bank_236[addr7];
        237:op_hcompute_grad_y_stencil_read[1] = bank_237[addr7];
        238:op_hcompute_grad_y_stencil_read[1] = bank_238[addr7];
        239:op_hcompute_grad_y_stencil_read[1] = bank_239[addr7];
        240:op_hcompute_grad_y_stencil_read[1] = bank_240[addr7];
        241:op_hcompute_grad_y_stencil_read[1] = bank_241[addr7];
        242:op_hcompute_grad_y_stencil_read[1] = bank_242[addr7];
        243:op_hcompute_grad_y_stencil_read[1] = bank_243[addr7];
        244:op_hcompute_grad_y_stencil_read[1] = bank_244[addr7];
        245:op_hcompute_grad_y_stencil_read[1] = bank_245[addr7];
        246:op_hcompute_grad_y_stencil_read[1] = bank_246[addr7];
        247:op_hcompute_grad_y_stencil_read[1] = bank_247[addr7];
      endcase
    end
    if (op_hcompute_grad_y_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out)
        0:op_hcompute_grad_y_stencil_read[5] = bank_0[addr8];
        1:op_hcompute_grad_y_stencil_read[5] = bank_1[addr8];
        2:op_hcompute_grad_y_stencil_read[5] = bank_2[addr8];
        3:op_hcompute_grad_y_stencil_read[5] = bank_3[addr8];
        4:op_hcompute_grad_y_stencil_read[5] = bank_4[addr8];
        5:op_hcompute_grad_y_stencil_read[5] = bank_5[addr8];
        6:op_hcompute_grad_y_stencil_read[5] = bank_6[addr8];
        7:op_hcompute_grad_y_stencil_read[5] = bank_7[addr8];
        8:op_hcompute_grad_y_stencil_read[5] = bank_8[addr8];
        9:op_hcompute_grad_y_stencil_read[5] = bank_9[addr8];
        10:op_hcompute_grad_y_stencil_read[5] = bank_10[addr8];
        11:op_hcompute_grad_y_stencil_read[5] = bank_11[addr8];
        12:op_hcompute_grad_y_stencil_read[5] = bank_12[addr8];
        13:op_hcompute_grad_y_stencil_read[5] = bank_13[addr8];
        14:op_hcompute_grad_y_stencil_read[5] = bank_14[addr8];
        15:op_hcompute_grad_y_stencil_read[5] = bank_15[addr8];
        16:op_hcompute_grad_y_stencil_read[5] = bank_16[addr8];
        17:op_hcompute_grad_y_stencil_read[5] = bank_17[addr8];
        18:op_hcompute_grad_y_stencil_read[5] = bank_18[addr8];
        19:op_hcompute_grad_y_stencil_read[5] = bank_19[addr8];
        20:op_hcompute_grad_y_stencil_read[5] = bank_20[addr8];
        21:op_hcompute_grad_y_stencil_read[5] = bank_21[addr8];
        22:op_hcompute_grad_y_stencil_read[5] = bank_22[addr8];
        23:op_hcompute_grad_y_stencil_read[5] = bank_23[addr8];
        24:op_hcompute_grad_y_stencil_read[5] = bank_24[addr8];
        25:op_hcompute_grad_y_stencil_read[5] = bank_25[addr8];
        26:op_hcompute_grad_y_stencil_read[5] = bank_26[addr8];
        27:op_hcompute_grad_y_stencil_read[5] = bank_27[addr8];
        28:op_hcompute_grad_y_stencil_read[5] = bank_28[addr8];
        29:op_hcompute_grad_y_stencil_read[5] = bank_29[addr8];
        30:op_hcompute_grad_y_stencil_read[5] = bank_30[addr8];
        31:op_hcompute_grad_y_stencil_read[5] = bank_31[addr8];
        32:op_hcompute_grad_y_stencil_read[5] = bank_32[addr8];
        33:op_hcompute_grad_y_stencil_read[5] = bank_33[addr8];
        34:op_hcompute_grad_y_stencil_read[5] = bank_34[addr8];
        35:op_hcompute_grad_y_stencil_read[5] = bank_35[addr8];
        36:op_hcompute_grad_y_stencil_read[5] = bank_36[addr8];
        37:op_hcompute_grad_y_stencil_read[5] = bank_37[addr8];
        38:op_hcompute_grad_y_stencil_read[5] = bank_38[addr8];
        39:op_hcompute_grad_y_stencil_read[5] = bank_39[addr8];
        40:op_hcompute_grad_y_stencil_read[5] = bank_40[addr8];
        41:op_hcompute_grad_y_stencil_read[5] = bank_41[addr8];
        42:op_hcompute_grad_y_stencil_read[5] = bank_42[addr8];
        43:op_hcompute_grad_y_stencil_read[5] = bank_43[addr8];
        44:op_hcompute_grad_y_stencil_read[5] = bank_44[addr8];
        45:op_hcompute_grad_y_stencil_read[5] = bank_45[addr8];
        46:op_hcompute_grad_y_stencil_read[5] = bank_46[addr8];
        47:op_hcompute_grad_y_stencil_read[5] = bank_47[addr8];
        48:op_hcompute_grad_y_stencil_read[5] = bank_48[addr8];
        49:op_hcompute_grad_y_stencil_read[5] = bank_49[addr8];
        50:op_hcompute_grad_y_stencil_read[5] = bank_50[addr8];
        51:op_hcompute_grad_y_stencil_read[5] = bank_51[addr8];
        52:op_hcompute_grad_y_stencil_read[5] = bank_52[addr8];
        53:op_hcompute_grad_y_stencil_read[5] = bank_53[addr8];
        54:op_hcompute_grad_y_stencil_read[5] = bank_54[addr8];
        55:op_hcompute_grad_y_stencil_read[5] = bank_55[addr8];
        56:op_hcompute_grad_y_stencil_read[5] = bank_56[addr8];
        57:op_hcompute_grad_y_stencil_read[5] = bank_57[addr8];
        58:op_hcompute_grad_y_stencil_read[5] = bank_58[addr8];
        59:op_hcompute_grad_y_stencil_read[5] = bank_59[addr8];
        60:op_hcompute_grad_y_stencil_read[5] = bank_60[addr8];
        61:op_hcompute_grad_y_stencil_read[5] = bank_61[addr8];
        62:op_hcompute_grad_y_stencil_read[5] = bank_62[addr8];
        63:op_hcompute_grad_y_stencil_read[5] = bank_63[addr8];
        64:op_hcompute_grad_y_stencil_read[5] = bank_64[addr8];
        65:op_hcompute_grad_y_stencil_read[5] = bank_65[addr8];
        66:op_hcompute_grad_y_stencil_read[5] = bank_66[addr8];
        67:op_hcompute_grad_y_stencil_read[5] = bank_67[addr8];
        68:op_hcompute_grad_y_stencil_read[5] = bank_68[addr8];
        69:op_hcompute_grad_y_stencil_read[5] = bank_69[addr8];
        70:op_hcompute_grad_y_stencil_read[5] = bank_70[addr8];
        71:op_hcompute_grad_y_stencil_read[5] = bank_71[addr8];
        72:op_hcompute_grad_y_stencil_read[5] = bank_72[addr8];
        73:op_hcompute_grad_y_stencil_read[5] = bank_73[addr8];
        74:op_hcompute_grad_y_stencil_read[5] = bank_74[addr8];
        75:op_hcompute_grad_y_stencil_read[5] = bank_75[addr8];
        76:op_hcompute_grad_y_stencil_read[5] = bank_76[addr8];
        77:op_hcompute_grad_y_stencil_read[5] = bank_77[addr8];
        78:op_hcompute_grad_y_stencil_read[5] = bank_78[addr8];
        79:op_hcompute_grad_y_stencil_read[5] = bank_79[addr8];
        80:op_hcompute_grad_y_stencil_read[5] = bank_80[addr8];
        81:op_hcompute_grad_y_stencil_read[5] = bank_81[addr8];
        82:op_hcompute_grad_y_stencil_read[5] = bank_82[addr8];
        83:op_hcompute_grad_y_stencil_read[5] = bank_83[addr8];
        84:op_hcompute_grad_y_stencil_read[5] = bank_84[addr8];
        85:op_hcompute_grad_y_stencil_read[5] = bank_85[addr8];
        86:op_hcompute_grad_y_stencil_read[5] = bank_86[addr8];
        87:op_hcompute_grad_y_stencil_read[5] = bank_87[addr8];
        88:op_hcompute_grad_y_stencil_read[5] = bank_88[addr8];
        89:op_hcompute_grad_y_stencil_read[5] = bank_89[addr8];
        90:op_hcompute_grad_y_stencil_read[5] = bank_90[addr8];
        91:op_hcompute_grad_y_stencil_read[5] = bank_91[addr8];
        92:op_hcompute_grad_y_stencil_read[5] = bank_92[addr8];
        93:op_hcompute_grad_y_stencil_read[5] = bank_93[addr8];
        94:op_hcompute_grad_y_stencil_read[5] = bank_94[addr8];
        95:op_hcompute_grad_y_stencil_read[5] = bank_95[addr8];
        96:op_hcompute_grad_y_stencil_read[5] = bank_96[addr8];
        97:op_hcompute_grad_y_stencil_read[5] = bank_97[addr8];
        98:op_hcompute_grad_y_stencil_read[5] = bank_98[addr8];
        99:op_hcompute_grad_y_stencil_read[5] = bank_99[addr8];
        100:op_hcompute_grad_y_stencil_read[5] = bank_100[addr8];
        101:op_hcompute_grad_y_stencil_read[5] = bank_101[addr8];
        102:op_hcompute_grad_y_stencil_read[5] = bank_102[addr8];
        103:op_hcompute_grad_y_stencil_read[5] = bank_103[addr8];
        104:op_hcompute_grad_y_stencil_read[5] = bank_104[addr8];
        105:op_hcompute_grad_y_stencil_read[5] = bank_105[addr8];
        106:op_hcompute_grad_y_stencil_read[5] = bank_106[addr8];
        107:op_hcompute_grad_y_stencil_read[5] = bank_107[addr8];
        108:op_hcompute_grad_y_stencil_read[5] = bank_108[addr8];
        109:op_hcompute_grad_y_stencil_read[5] = bank_109[addr8];
        110:op_hcompute_grad_y_stencil_read[5] = bank_110[addr8];
        111:op_hcompute_grad_y_stencil_read[5] = bank_111[addr8];
        112:op_hcompute_grad_y_stencil_read[5] = bank_112[addr8];
        113:op_hcompute_grad_y_stencil_read[5] = bank_113[addr8];
        114:op_hcompute_grad_y_stencil_read[5] = bank_114[addr8];
        115:op_hcompute_grad_y_stencil_read[5] = bank_115[addr8];
        116:op_hcompute_grad_y_stencil_read[5] = bank_116[addr8];
        117:op_hcompute_grad_y_stencil_read[5] = bank_117[addr8];
        118:op_hcompute_grad_y_stencil_read[5] = bank_118[addr8];
        119:op_hcompute_grad_y_stencil_read[5] = bank_119[addr8];
        120:op_hcompute_grad_y_stencil_read[5] = bank_120[addr8];
        121:op_hcompute_grad_y_stencil_read[5] = bank_121[addr8];
        122:op_hcompute_grad_y_stencil_read[5] = bank_122[addr8];
        123:op_hcompute_grad_y_stencil_read[5] = bank_123[addr8];
        124:op_hcompute_grad_y_stencil_read[5] = bank_124[addr8];
        125:op_hcompute_grad_y_stencil_read[5] = bank_125[addr8];
        126:op_hcompute_grad_y_stencil_read[5] = bank_126[addr8];
        127:op_hcompute_grad_y_stencil_read[5] = bank_127[addr8];
        128:op_hcompute_grad_y_stencil_read[5] = bank_128[addr8];
        129:op_hcompute_grad_y_stencil_read[5] = bank_129[addr8];
        130:op_hcompute_grad_y_stencil_read[5] = bank_130[addr8];
        131:op_hcompute_grad_y_stencil_read[5] = bank_131[addr8];
        132:op_hcompute_grad_y_stencil_read[5] = bank_132[addr8];
        133:op_hcompute_grad_y_stencil_read[5] = bank_133[addr8];
        134:op_hcompute_grad_y_stencil_read[5] = bank_134[addr8];
        135:op_hcompute_grad_y_stencil_read[5] = bank_135[addr8];
        136:op_hcompute_grad_y_stencil_read[5] = bank_136[addr8];
        137:op_hcompute_grad_y_stencil_read[5] = bank_137[addr8];
        138:op_hcompute_grad_y_stencil_read[5] = bank_138[addr8];
        139:op_hcompute_grad_y_stencil_read[5] = bank_139[addr8];
        140:op_hcompute_grad_y_stencil_read[5] = bank_140[addr8];
        141:op_hcompute_grad_y_stencil_read[5] = bank_141[addr8];
        142:op_hcompute_grad_y_stencil_read[5] = bank_142[addr8];
        143:op_hcompute_grad_y_stencil_read[5] = bank_143[addr8];
        144:op_hcompute_grad_y_stencil_read[5] = bank_144[addr8];
        145:op_hcompute_grad_y_stencil_read[5] = bank_145[addr8];
        146:op_hcompute_grad_y_stencil_read[5] = bank_146[addr8];
        147:op_hcompute_grad_y_stencil_read[5] = bank_147[addr8];
        148:op_hcompute_grad_y_stencil_read[5] = bank_148[addr8];
        149:op_hcompute_grad_y_stencil_read[5] = bank_149[addr8];
        150:op_hcompute_grad_y_stencil_read[5] = bank_150[addr8];
        151:op_hcompute_grad_y_stencil_read[5] = bank_151[addr8];
        152:op_hcompute_grad_y_stencil_read[5] = bank_152[addr8];
        153:op_hcompute_grad_y_stencil_read[5] = bank_153[addr8];
        154:op_hcompute_grad_y_stencil_read[5] = bank_154[addr8];
        155:op_hcompute_grad_y_stencil_read[5] = bank_155[addr8];
        156:op_hcompute_grad_y_stencil_read[5] = bank_156[addr8];
        157:op_hcompute_grad_y_stencil_read[5] = bank_157[addr8];
        158:op_hcompute_grad_y_stencil_read[5] = bank_158[addr8];
        159:op_hcompute_grad_y_stencil_read[5] = bank_159[addr8];
        160:op_hcompute_grad_y_stencil_read[5] = bank_160[addr8];
        161:op_hcompute_grad_y_stencil_read[5] = bank_161[addr8];
        162:op_hcompute_grad_y_stencil_read[5] = bank_162[addr8];
        163:op_hcompute_grad_y_stencil_read[5] = bank_163[addr8];
        164:op_hcompute_grad_y_stencil_read[5] = bank_164[addr8];
        165:op_hcompute_grad_y_stencil_read[5] = bank_165[addr8];
        166:op_hcompute_grad_y_stencil_read[5] = bank_166[addr8];
        167:op_hcompute_grad_y_stencil_read[5] = bank_167[addr8];
        168:op_hcompute_grad_y_stencil_read[5] = bank_168[addr8];
        169:op_hcompute_grad_y_stencil_read[5] = bank_169[addr8];
        170:op_hcompute_grad_y_stencil_read[5] = bank_170[addr8];
        171:op_hcompute_grad_y_stencil_read[5] = bank_171[addr8];
        172:op_hcompute_grad_y_stencil_read[5] = bank_172[addr8];
        173:op_hcompute_grad_y_stencil_read[5] = bank_173[addr8];
        174:op_hcompute_grad_y_stencil_read[5] = bank_174[addr8];
        175:op_hcompute_grad_y_stencil_read[5] = bank_175[addr8];
        176:op_hcompute_grad_y_stencil_read[5] = bank_176[addr8];
        177:op_hcompute_grad_y_stencil_read[5] = bank_177[addr8];
        178:op_hcompute_grad_y_stencil_read[5] = bank_178[addr8];
        179:op_hcompute_grad_y_stencil_read[5] = bank_179[addr8];
        180:op_hcompute_grad_y_stencil_read[5] = bank_180[addr8];
        181:op_hcompute_grad_y_stencil_read[5] = bank_181[addr8];
        182:op_hcompute_grad_y_stencil_read[5] = bank_182[addr8];
        183:op_hcompute_grad_y_stencil_read[5] = bank_183[addr8];
        184:op_hcompute_grad_y_stencil_read[5] = bank_184[addr8];
        185:op_hcompute_grad_y_stencil_read[5] = bank_185[addr8];
        186:op_hcompute_grad_y_stencil_read[5] = bank_186[addr8];
        187:op_hcompute_grad_y_stencil_read[5] = bank_187[addr8];
        188:op_hcompute_grad_y_stencil_read[5] = bank_188[addr8];
        189:op_hcompute_grad_y_stencil_read[5] = bank_189[addr8];
        190:op_hcompute_grad_y_stencil_read[5] = bank_190[addr8];
        191:op_hcompute_grad_y_stencil_read[5] = bank_191[addr8];
        192:op_hcompute_grad_y_stencil_read[5] = bank_192[addr8];
        193:op_hcompute_grad_y_stencil_read[5] = bank_193[addr8];
        194:op_hcompute_grad_y_stencil_read[5] = bank_194[addr8];
        195:op_hcompute_grad_y_stencil_read[5] = bank_195[addr8];
        196:op_hcompute_grad_y_stencil_read[5] = bank_196[addr8];
        197:op_hcompute_grad_y_stencil_read[5] = bank_197[addr8];
        198:op_hcompute_grad_y_stencil_read[5] = bank_198[addr8];
        199:op_hcompute_grad_y_stencil_read[5] = bank_199[addr8];
        200:op_hcompute_grad_y_stencil_read[5] = bank_200[addr8];
        201:op_hcompute_grad_y_stencil_read[5] = bank_201[addr8];
        202:op_hcompute_grad_y_stencil_read[5] = bank_202[addr8];
        203:op_hcompute_grad_y_stencil_read[5] = bank_203[addr8];
        204:op_hcompute_grad_y_stencil_read[5] = bank_204[addr8];
        205:op_hcompute_grad_y_stencil_read[5] = bank_205[addr8];
        206:op_hcompute_grad_y_stencil_read[5] = bank_206[addr8];
        207:op_hcompute_grad_y_stencil_read[5] = bank_207[addr8];
        208:op_hcompute_grad_y_stencil_read[5] = bank_208[addr8];
        209:op_hcompute_grad_y_stencil_read[5] = bank_209[addr8];
        210:op_hcompute_grad_y_stencil_read[5] = bank_210[addr8];
        211:op_hcompute_grad_y_stencil_read[5] = bank_211[addr8];
        212:op_hcompute_grad_y_stencil_read[5] = bank_212[addr8];
        213:op_hcompute_grad_y_stencil_read[5] = bank_213[addr8];
        214:op_hcompute_grad_y_stencil_read[5] = bank_214[addr8];
        215:op_hcompute_grad_y_stencil_read[5] = bank_215[addr8];
        216:op_hcompute_grad_y_stencil_read[5] = bank_216[addr8];
        217:op_hcompute_grad_y_stencil_read[5] = bank_217[addr8];
        218:op_hcompute_grad_y_stencil_read[5] = bank_218[addr8];
        219:op_hcompute_grad_y_stencil_read[5] = bank_219[addr8];
        220:op_hcompute_grad_y_stencil_read[5] = bank_220[addr8];
        221:op_hcompute_grad_y_stencil_read[5] = bank_221[addr8];
        222:op_hcompute_grad_y_stencil_read[5] = bank_222[addr8];
        223:op_hcompute_grad_y_stencil_read[5] = bank_223[addr8];
        224:op_hcompute_grad_y_stencil_read[5] = bank_224[addr8];
        225:op_hcompute_grad_y_stencil_read[5] = bank_225[addr8];
        226:op_hcompute_grad_y_stencil_read[5] = bank_226[addr8];
        227:op_hcompute_grad_y_stencil_read[5] = bank_227[addr8];
        228:op_hcompute_grad_y_stencil_read[5] = bank_228[addr8];
        229:op_hcompute_grad_y_stencil_read[5] = bank_229[addr8];
        230:op_hcompute_grad_y_stencil_read[5] = bank_230[addr8];
        231:op_hcompute_grad_y_stencil_read[5] = bank_231[addr8];
        232:op_hcompute_grad_y_stencil_read[5] = bank_232[addr8];
        233:op_hcompute_grad_y_stencil_read[5] = bank_233[addr8];
        234:op_hcompute_grad_y_stencil_read[5] = bank_234[addr8];
        235:op_hcompute_grad_y_stencil_read[5] = bank_235[addr8];
        236:op_hcompute_grad_y_stencil_read[5] = bank_236[addr8];
        237:op_hcompute_grad_y_stencil_read[5] = bank_237[addr8];
        238:op_hcompute_grad_y_stencil_read[5] = bank_238[addr8];
        239:op_hcompute_grad_y_stencil_read[5] = bank_239[addr8];
        240:op_hcompute_grad_y_stencil_read[5] = bank_240[addr8];
        241:op_hcompute_grad_y_stencil_read[5] = bank_241[addr8];
        242:op_hcompute_grad_y_stencil_read[5] = bank_242[addr8];
        243:op_hcompute_grad_y_stencil_read[5] = bank_243[addr8];
        244:op_hcompute_grad_y_stencil_read[5] = bank_244[addr8];
        245:op_hcompute_grad_y_stencil_read[5] = bank_245[addr8];
        246:op_hcompute_grad_y_stencil_read[5] = bank_246[addr8];
        247:op_hcompute_grad_y_stencil_read[5] = bank_247[addr8];
      endcase
    end
  end

endmodule

