// { op_hcompute_padded16_global_wrapper_stencil[root, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x] -> [(1 + 64padded16_global_wrapper_s0_y + padded16_global_wrapper_s0_x)] }
module affine_controller__U0(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
// { op_hcompute_grad_x_stencil[root, grad_x_s0_y, grad_x_s0_x] -> [(132 + 64grad_x_s0_y + grad_x_s0_x)] }
module affine_controller__U7(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
// { op_hcompute_lxx_stencil[root, lxx_s0_y, lxx_s0_x] -> [(133 + 64lxx_s0_y + lxx_s0_x)] }
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
// { op_hcompute_lgxx_stencil_1[root, lgxx_s1_y, lgxx_s1_x] -> [(265 + 64lgxx_s1_y + lgxx_s1_x)] }
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
module affine_controller__U35(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
// { op_hcompute_lxy_stencil[root, lxy_s0_y, lxy_s0_x] -> [(137 + 64lxy_s0_y + lxy_s0_x)] }
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
module affine_controller__U56(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
// { op_hcompute_lyy_stencil[root, lyy_s0_y, lyy_s0_x] -> [(140 + 64lyy_s0_y + lyy_s0_x)] }
module affine_controller__U63(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
module affine_controller__U70(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
// { op_hcompute_lgyy_stencil_1[root, lgyy_s1_y, lgyy_s1_x] -> [(272 + 64lgyy_s1_y + lgyy_s1_x)] }
module affine_controller__U77(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
module affine_controller__U91(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
// { op_hcompute_hw_output_stencil[root, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(405 + 64hw_output_s0_y_yi + hw_output_s0_x_xi)] }
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

module cim_output_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

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
  // # of banks: 4
  logic [15:0] bank_0 [841];
  logic [15:0] bank_1 [841];
  logic [15:0] bank_2 [841];
  logic [15:0] bank_3 [841];
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
  assign addr0 = (((((1*op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out[1])) - 0)>>1)*1+((((1*op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out[2])) - 0)>>1)*29);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0)>>1)*1+((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0)>>1)*29);
  always @(posedge clk) begin
    if(op_hcompute_cim_output_stencil_write_wen)begin
      if(op_hcompute_cim_output_stencil_write_ctrl_vars!=op_hcompute_cim_output_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_cim_output_stencil_write_wen!=op_hcompute_cim_output_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_cim_output_stencil_write_wen);
        $display(op_hcompute_cim_output_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_hw_output_stencil_read_ren)begin
      if(op_hcompute_hw_output_stencil_read_ctrl_vars!=op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_hw_output_stencil_read_ren!=op_hcompute_hw_output_stencil_read_ren_fsm_out) begin
        $display(op_hcompute_hw_output_stencil_read_ren);
        $display(op_hcompute_hw_output_stencil_read_ren_fsm_out);
      $finish(-1);
    end
    if (op_hcompute_cim_output_stencil_write_wen_fsm_out) begin
      case( cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_cim_output_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_cim_output_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_cim_output_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_cim_output_stencil_write[0];
        default: $finish(-1);
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_hw_output_stencil_read_ren_fsm_out) begin
      case( cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_bank_selector.out)
        0:op_hcompute_hw_output_stencil_read[0] = bank_0[addr1];
        1:op_hcompute_hw_output_stencil_read[0] = bank_1[addr1];
        2:op_hcompute_hw_output_stencil_read[0] = bank_2[addr1];
        3:op_hcompute_hw_output_stencil_read[0] = bank_3[addr1];
        default: $finish(-1);
      endcase
    end
  end

endmodule


module cim_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

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
  // # of banks: 4
  logic [15:0] bank_0 [900];
  logic [15:0] bank_1 [900];
  logic [15:0] bank_2 [900];
  logic [15:0] bank_3 [900];
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
  assign addr0 = (((((-1 + 1*op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  logic [15:0] addr3;
  assign addr3 = (((((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  logic [15:0] addr4;
  assign addr4 = (((((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  logic [15:0] addr7;
  assign addr7 = (((((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  logic [15:0] addr8;
  assign addr8 = (((((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  logic [15:0] addr9;
  assign addr9 = (((((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((1 + 1*op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  always @(posedge clk) begin
    if(op_hcompute_cim_stencil_write_wen)begin
      if(op_hcompute_cim_stencil_write_ctrl_vars!=op_hcompute_cim_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_cim_stencil_write_wen!=op_hcompute_cim_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_cim_stencil_write_wen);
        $display(op_hcompute_cim_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_cim_output_stencil_read_ren)begin
      if(op_hcompute_cim_output_stencil_read_ctrl_vars!=op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_cim_output_stencil_read_ren!=op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
        $display(op_hcompute_cim_output_stencil_read_ren);
        $display(op_hcompute_cim_output_stencil_read_ren_fsm_out);
      $finish(-1);
    end
    if (op_hcompute_cim_stencil_write_wen_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_cim_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_cim_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_cim_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_cim_stencil_write[0];
        default: $finish(-1);
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
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[1] = bank_0[addr2];
        1:op_hcompute_cim_output_stencil_read[1] = bank_1[addr2];
        2:op_hcompute_cim_output_stencil_read[1] = bank_2[addr2];
        3:op_hcompute_cim_output_stencil_read[1] = bank_3[addr2];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[2] = bank_0[addr3];
        1:op_hcompute_cim_output_stencil_read[2] = bank_1[addr3];
        2:op_hcompute_cim_output_stencil_read[2] = bank_2[addr3];
        3:op_hcompute_cim_output_stencil_read[2] = bank_3[addr3];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[3] = bank_0[addr4];
        1:op_hcompute_cim_output_stencil_read[3] = bank_1[addr4];
        2:op_hcompute_cim_output_stencil_read[3] = bank_2[addr4];
        3:op_hcompute_cim_output_stencil_read[3] = bank_3[addr4];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[4] = bank_0[addr5];
        1:op_hcompute_cim_output_stencil_read[4] = bank_1[addr5];
        2:op_hcompute_cim_output_stencil_read[4] = bank_2[addr5];
        3:op_hcompute_cim_output_stencil_read[4] = bank_3[addr5];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[5] = bank_0[addr6];
        1:op_hcompute_cim_output_stencil_read[5] = bank_1[addr6];
        2:op_hcompute_cim_output_stencil_read[5] = bank_2[addr6];
        3:op_hcompute_cim_output_stencil_read[5] = bank_3[addr6];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[6] = bank_0[addr7];
        1:op_hcompute_cim_output_stencil_read[6] = bank_1[addr7];
        2:op_hcompute_cim_output_stencil_read[6] = bank_2[addr7];
        3:op_hcompute_cim_output_stencil_read[6] = bank_3[addr7];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[7] = bank_0[addr8];
        1:op_hcompute_cim_output_stencil_read[7] = bank_1[addr8];
        2:op_hcompute_cim_output_stencil_read[7] = bank_2[addr8];
        3:op_hcompute_cim_output_stencil_read[7] = bank_3[addr8];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_bank_selector.out)
        0:op_hcompute_cim_output_stencil_read[8] = bank_0[addr9];
        1:op_hcompute_cim_output_stencil_read[8] = bank_1[addr9];
        2:op_hcompute_cim_output_stencil_read[8] = bank_2[addr9];
        3:op_hcompute_cim_output_stencil_read[8] = bank_3[addr9];
        default: $finish(-1);
      endcase
    end
  end

endmodule


module grad_x_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

endmodule

module grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_to_grad_x_stencil_op_hcompute_lxx_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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
  // # of banks: 4
  logic [15:0] bank_0 [961];
  logic [15:0] bank_1 [961];
  logic [15:0] bank_2 [961];
  logic [15:0] bank_3 [961];
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
  assign addr0 = (((((-2 + 1*op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-2 + 1*op_hcompute_lxx_stencil_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lxx_stencil_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  always @(posedge clk) begin
    if(op_hcompute_grad_x_stencil_write_wen)begin
      if(op_hcompute_grad_x_stencil_write_ctrl_vars!=op_hcompute_grad_x_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_grad_x_stencil_write_wen!=op_hcompute_grad_x_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_grad_x_stencil_write_wen);
        $display(op_hcompute_grad_x_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_lxx_stencil_read_ren)begin
      if(op_hcompute_lxx_stencil_read_ctrl_vars!=op_hcompute_lxx_stencil_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lxx_stencil_read_ren!=op_hcompute_lxx_stencil_read_ren_fsm_out) begin
        $display(op_hcompute_lxx_stencil_read_ren);
        $display(op_hcompute_lxx_stencil_read_ren_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_lxy_stencil_read_ren)begin
      if(op_hcompute_lxy_stencil_read_ctrl_vars!=op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lxy_stencil_read_ren!=op_hcompute_lxy_stencil_read_ren_fsm_out) begin
        $display(op_hcompute_lxy_stencil_read_ren);
        $display(op_hcompute_lxy_stencil_read_ren_fsm_out);
      $finish(-1);
    end
    if (op_hcompute_grad_x_stencil_write_wen_fsm_out) begin
      case( grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_grad_x_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_grad_x_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_grad_x_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_grad_x_stencil_write[0];
        default: $finish(-1);
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_lxx_stencil_read_ren_fsm_out) begin
      case( grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_bank_selector.out)
        0:op_hcompute_lxx_stencil_read[0] = bank_0[addr1];
        1:op_hcompute_lxx_stencil_read[0] = bank_1[addr1];
        2:op_hcompute_lxx_stencil_read[0] = bank_2[addr1];
        3:op_hcompute_lxx_stencil_read[0] = bank_3[addr1];
        default: $finish(-1);
      endcase
    end
  end

endmodule


module grad_y_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

endmodule

module grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_to_grad_y_stencil_op_hcompute_lxy_stencil_6_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [2:0];

  reg [1:0] read_addr;
  reg [1:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 2;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 2 ? 0 : read_addr + 1;
      write_addr <= write_addr == 2 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

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
  // # of banks: 4
  logic [15:0] bank_0 [961];
  logic [15:0] bank_1 [961];
  logic [15:0] bank_2 [961];
  logic [15:0] bank_3 [961];
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
  assign addr0 = (((((-2 + 1*op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-2 + 1*op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  always @(posedge clk) begin
    if(op_hcompute_grad_y_stencil_write_wen)begin
      if(op_hcompute_grad_y_stencil_write_ctrl_vars!=op_hcompute_grad_y_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_grad_y_stencil_write_wen!=op_hcompute_grad_y_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_grad_y_stencil_write_wen);
        $display(op_hcompute_grad_y_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_lxy_stencil_read_ren)begin
      if(op_hcompute_lxy_stencil_read_ctrl_vars!=op_hcompute_lxy_stencil_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lxy_stencil_read_ren!=op_hcompute_lxy_stencil_read_ren_fsm_out) begin
        $display(op_hcompute_lxy_stencil_read_ren);
        $display(op_hcompute_lxy_stencil_read_ren_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_lyy_stencil_read_ren)begin
      if(op_hcompute_lyy_stencil_read_ctrl_vars!=op_hcompute_lyy_stencil_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lyy_stencil_read_ren!=op_hcompute_lyy_stencil_read_ren_fsm_out) begin
        $display(op_hcompute_lyy_stencil_read_ren);
        $display(op_hcompute_lyy_stencil_read_ren_fsm_out);
      $finish(-1);
    end
    if (op_hcompute_grad_y_stencil_write_wen_fsm_out) begin
      case( grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_grad_y_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_grad_y_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_grad_y_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_grad_y_stencil_write[0];
        default: $finish(-1);
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_lxy_stencil_read_ren_fsm_out) begin
      case( grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_bank_selector.out)
        0:op_hcompute_lxy_stencil_read[0] = bank_0[addr1];
        1:op_hcompute_lxy_stencil_read[0] = bank_1[addr1];
        2:op_hcompute_lxy_stencil_read[0] = bank_2[addr1];
        3:op_hcompute_lxy_stencil_read[0] = bank_3[addr1];
        default: $finish(-1);
      endcase
    end
  end

endmodule


module lgxx_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 2);
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
  // # of banks: 4
  logic [15:0] bank_0 [900];
  logic [15:0] bank_1 [900];
  logic [15:0] bank_2 [900];
  logic [15:0] bank_3 [900];
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
  assign addr0 = (((((-1 + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-1 + 1*op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr2;
  assign addr2 = (((((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  logic [15:0] addr3;
  assign addr3 = (((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  always @(posedge clk) begin
    if(op_hcompute_lgxx_stencil_1_write_wen)begin
      if(op_hcompute_lgxx_stencil_1_write_ctrl_vars!=op_hcompute_lgxx_stencil_1_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lgxx_stencil_1_write_wen!=op_hcompute_lgxx_stencil_1_write_wen_fsm_out) begin
        $display(op_hcompute_lgxx_stencil_1_write_wen);
        $display(op_hcompute_lgxx_stencil_1_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_lgxx_stencil_write_wen)begin
      if(op_hcompute_lgxx_stencil_write_ctrl_vars!=op_hcompute_lgxx_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lgxx_stencil_write_wen!=op_hcompute_lgxx_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_lgxx_stencil_write_wen);
        $display(op_hcompute_lgxx_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_cim_stencil_read_ren)begin
      if(op_hcompute_cim_stencil_read_ctrl_vars!=op_hcompute_cim_stencil_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_cim_stencil_read_ren!=op_hcompute_cim_stencil_read_ren_fsm_out) begin
        $display(op_hcompute_cim_stencil_read_ren);
        $display(op_hcompute_cim_stencil_read_ren_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_lgxx_stencil_1_read_ren)begin
      if(op_hcompute_lgxx_stencil_1_read_ctrl_vars!=op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lgxx_stencil_1_read_ren!=op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
        $display(op_hcompute_lgxx_stencil_1_read_ren);
        $display(op_hcompute_lgxx_stencil_1_read_ren_fsm_out);
      $finish(-1);
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out) begin
      case( lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        1:bank_1[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        2:bank_2[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        3:bank_3[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxx_stencil_write_wen_fsm_out) begin
      case( lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out)
        0:bank_0[addr1] <= op_hcompute_lgxx_stencil_write[0];
        1:bank_1[addr1] <= op_hcompute_lgxx_stencil_write[0];
        2:bank_2[addr1] <= op_hcompute_lgxx_stencil_write[0];
        3:bank_3[addr1] <= op_hcompute_lgxx_stencil_write[0];
        default: $finish(-1);
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
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[0] = bank_0[addr3];
        1:op_hcompute_lgxx_stencil_1_read[0] = bank_1[addr3];
        2:op_hcompute_lgxx_stencil_1_read[0] = bank_2[addr3];
        3:op_hcompute_lgxx_stencil_1_read[0] = bank_3[addr3];
        default: $finish(-1);
      endcase
    end
  end

endmodule


module lgxy_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

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
  // # of banks: 4
  logic [15:0] bank_0 [900];
  logic [15:0] bank_1 [900];
  logic [15:0] bank_2 [900];
  logic [15:0] bank_3 [900];
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
  assign addr0 = (((((-1 + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-1 + 1*op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr2;
  assign addr2 = (((((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  logic [15:0] addr3;
  assign addr3 = (((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  always @(posedge clk) begin
    if(op_hcompute_lgxy_stencil_1_write_wen)begin
      if(op_hcompute_lgxy_stencil_1_write_ctrl_vars!=op_hcompute_lgxy_stencil_1_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lgxy_stencil_1_write_wen!=op_hcompute_lgxy_stencil_1_write_wen_fsm_out) begin
        $display(op_hcompute_lgxy_stencil_1_write_wen);
        $display(op_hcompute_lgxy_stencil_1_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_lgxy_stencil_write_wen)begin
      if(op_hcompute_lgxy_stencil_write_ctrl_vars!=op_hcompute_lgxy_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lgxy_stencil_write_wen!=op_hcompute_lgxy_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_lgxy_stencil_write_wen);
        $display(op_hcompute_lgxy_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_cim_stencil_read_ren)begin
      if(op_hcompute_cim_stencil_read_ctrl_vars!=op_hcompute_cim_stencil_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_cim_stencil_read_ren!=op_hcompute_cim_stencil_read_ren_fsm_out) begin
        $display(op_hcompute_cim_stencil_read_ren);
        $display(op_hcompute_cim_stencil_read_ren_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_lgxy_stencil_1_read_ren)begin
      if(op_hcompute_lgxy_stencil_1_read_ctrl_vars!=op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lgxy_stencil_1_read_ren!=op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
        $display(op_hcompute_lgxy_stencil_1_read_ren);
        $display(op_hcompute_lgxy_stencil_1_read_ren_fsm_out);
      $finish(-1);
    end
    if (op_hcompute_lgxy_stencil_1_write_wen_fsm_out) begin
      case( lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
        1:bank_1[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
        2:bank_2[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
        3:bank_3[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxy_stencil_write_wen_fsm_out) begin
      case( lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_bank_selector.out)
        0:bank_0[addr1] <= op_hcompute_lgxy_stencil_write[0];
        1:bank_1[addr1] <= op_hcompute_lgxy_stencil_write[0];
        2:bank_2[addr1] <= op_hcompute_lgxy_stencil_write[0];
        3:bank_3[addr1] <= op_hcompute_lgxy_stencil_write[0];
        default: $finish(-1);
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
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[0] = bank_0[addr3];
        1:op_hcompute_lgxy_stencil_1_read[0] = bank_1[addr3];
        2:op_hcompute_lgxy_stencil_1_read[0] = bank_2[addr3];
        3:op_hcompute_lgxy_stencil_1_read[0] = bank_3[addr3];
        default: $finish(-1);
      endcase
    end
  end

endmodule


module lgyy_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

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
  // # of banks: 4
  logic [15:0] bank_0 [900];
  logic [15:0] bank_1 [900];
  logic [15:0] bank_2 [900];
  logic [15:0] bank_3 [900];
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
  assign addr0 = (((((-1 + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-1 + 1*op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr2;
  assign addr2 = (((((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_cim_stencil_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  logic [15:0] addr3;
  assign addr3 = (((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -1)>>1)*1+((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -1)>>1)*30);
  always @(posedge clk) begin
    if(op_hcompute_lgyy_stencil_1_write_wen)begin
      if(op_hcompute_lgyy_stencil_1_write_ctrl_vars!=op_hcompute_lgyy_stencil_1_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lgyy_stencil_1_write_wen!=op_hcompute_lgyy_stencil_1_write_wen_fsm_out) begin
        $display(op_hcompute_lgyy_stencil_1_write_wen);
        $display(op_hcompute_lgyy_stencil_1_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_lgyy_stencil_write_wen)begin
      if(op_hcompute_lgyy_stencil_write_ctrl_vars!=op_hcompute_lgyy_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lgyy_stencil_write_wen!=op_hcompute_lgyy_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_lgyy_stencil_write_wen);
        $display(op_hcompute_lgyy_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_cim_stencil_read_ren)begin
      if(op_hcompute_cim_stencil_read_ctrl_vars!=op_hcompute_cim_stencil_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_cim_stencil_read_ren!=op_hcompute_cim_stencil_read_ren_fsm_out) begin
        $display(op_hcompute_cim_stencil_read_ren);
        $display(op_hcompute_cim_stencil_read_ren_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_lgyy_stencil_1_read_ren)begin
      if(op_hcompute_lgyy_stencil_1_read_ctrl_vars!=op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lgyy_stencil_1_read_ren!=op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
        $display(op_hcompute_lgyy_stencil_1_read_ren);
        $display(op_hcompute_lgyy_stencil_1_read_ren_fsm_out);
      $finish(-1);
    end
    if (op_hcompute_lgyy_stencil_1_write_wen_fsm_out) begin
      case( lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lgyy_stencil_1_write[0];
        1:bank_1[addr0] <= op_hcompute_lgyy_stencil_1_write[0];
        2:bank_2[addr0] <= op_hcompute_lgyy_stencil_1_write[0];
        3:bank_3[addr0] <= op_hcompute_lgyy_stencil_1_write[0];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgyy_stencil_write_wen_fsm_out) begin
      case( lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_20_bank_selector.out)
        0:bank_0[addr1] <= op_hcompute_lgyy_stencil_write[0];
        1:bank_1[addr1] <= op_hcompute_lgyy_stencil_write[0];
        2:bank_2[addr1] <= op_hcompute_lgyy_stencil_write[0];
        3:bank_3[addr1] <= op_hcompute_lgyy_stencil_write[0];
        default: $finish(-1);
      endcase
    end
  end
  always @(*) begin
    if (op_hcompute_cim_stencil_read_ren_fsm_out) begin
      case( lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_bank_selector.out)
        0:op_hcompute_cim_stencil_read[0] = bank_0[addr2];
        1:op_hcompute_cim_stencil_read[0] = bank_1[addr2];
        2:op_hcompute_cim_stencil_read[0] = bank_2[addr2];
        3:op_hcompute_cim_stencil_read[0] = bank_3[addr2];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_10_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[0] = bank_0[addr3];
        1:op_hcompute_lgyy_stencil_1_read[0] = bank_1[addr3];
        2:op_hcompute_lgyy_stencil_1_read[0] = bank_2[addr3];
        3:op_hcompute_lgyy_stencil_1_read[0] = bank_3[addr3];
        default: $finish(-1);
      endcase
    end
  end

endmodule


module lxx_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

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
  // # of banks: 4
  logic [15:0] bank_0 [961];
  logic [15:0] bank_1 [961];
  logic [15:0] bank_2 [961];
  logic [15:0] bank_3 [961];
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
  assign addr0 = (((((-2 + 1*op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr2;
  assign addr2 = (((((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr3;
  assign addr3 = (((((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr4;
  assign addr4 = (((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr5;
  assign addr5 = (((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr6;
  assign addr6 = (((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-1 + 1*op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  always @(posedge clk) begin
    if(op_hcompute_lxx_stencil_write_wen)begin
      if(op_hcompute_lxx_stencil_write_ctrl_vars!=op_hcompute_lxx_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lxx_stencil_write_wen!=op_hcompute_lxx_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_lxx_stencil_write_wen);
        $display(op_hcompute_lxx_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_lgxx_stencil_1_read_ren)begin
      if(op_hcompute_lgxx_stencil_1_read_ctrl_vars!=op_hcompute_lgxx_stencil_1_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lgxx_stencil_1_read_ren!=op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
        $display(op_hcompute_lgxx_stencil_1_read_ren);
        $display(op_hcompute_lgxx_stencil_1_read_ren_fsm_out);
      $finish(-1);
    end
    if (op_hcompute_lxx_stencil_write_wen_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lxx_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_lxx_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_lxx_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_lxx_stencil_write[0];
        default: $finish(-1);
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
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[1] = bank_0[addr2];
        1:op_hcompute_lgxx_stencil_1_read[1] = bank_1[addr2];
        2:op_hcompute_lgxx_stencil_1_read[1] = bank_2[addr2];
        3:op_hcompute_lgxx_stencil_1_read[1] = bank_3[addr2];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[2] = bank_0[addr3];
        1:op_hcompute_lgxx_stencil_1_read[2] = bank_1[addr3];
        2:op_hcompute_lgxx_stencil_1_read[2] = bank_2[addr3];
        3:op_hcompute_lgxx_stencil_1_read[2] = bank_3[addr3];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[3] = bank_0[addr4];
        1:op_hcompute_lgxx_stencil_1_read[3] = bank_1[addr4];
        2:op_hcompute_lgxx_stencil_1_read[3] = bank_2[addr4];
        3:op_hcompute_lgxx_stencil_1_read[3] = bank_3[addr4];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[4] = bank_0[addr5];
        1:op_hcompute_lgxx_stencil_1_read[4] = bank_1[addr5];
        2:op_hcompute_lgxx_stencil_1_read[4] = bank_2[addr5];
        3:op_hcompute_lgxx_stencil_1_read[4] = bank_3[addr5];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[5] = bank_0[addr6];
        1:op_hcompute_lgxx_stencil_1_read[5] = bank_1[addr6];
        2:op_hcompute_lgxx_stencil_1_read[5] = bank_2[addr6];
        3:op_hcompute_lgxx_stencil_1_read[5] = bank_3[addr6];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[6] = bank_0[addr7];
        1:op_hcompute_lgxx_stencil_1_read[6] = bank_1[addr7];
        2:op_hcompute_lgxx_stencil_1_read[6] = bank_2[addr7];
        3:op_hcompute_lgxx_stencil_1_read[6] = bank_3[addr7];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[7] = bank_0[addr8];
        1:op_hcompute_lgxx_stencil_1_read[7] = bank_1[addr8];
        2:op_hcompute_lgxx_stencil_1_read[7] = bank_2[addr8];
        3:op_hcompute_lgxx_stencil_1_read[7] = bank_3[addr8];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out) begin
      case( lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_bank_selector.out)
        0:op_hcompute_lgxx_stencil_1_read[8] = bank_0[addr9];
        1:op_hcompute_lgxx_stencil_1_read[8] = bank_1[addr9];
        2:op_hcompute_lgxx_stencil_1_read[8] = bank_2[addr9];
        3:op_hcompute_lgxx_stencil_1_read[8] = bank_3[addr9];
        default: $finish(-1);
      endcase
    end
  end

endmodule


module lxy_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

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
  // # of banks: 4
  logic [15:0] bank_0 [961];
  logic [15:0] bank_1 [961];
  logic [15:0] bank_2 [961];
  logic [15:0] bank_3 [961];
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
  assign addr0 = (((((-2 + 1*op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr2;
  assign addr2 = (((((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr3;
  assign addr3 = (((((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr4;
  assign addr4 = (((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr5;
  assign addr5 = (((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr6;
  assign addr6 = (((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-1 + 1*op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  always @(posedge clk) begin
    if(op_hcompute_lxy_stencil_write_wen)begin
      if(op_hcompute_lxy_stencil_write_ctrl_vars!=op_hcompute_lxy_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lxy_stencil_write_wen!=op_hcompute_lxy_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_lxy_stencil_write_wen);
        $display(op_hcompute_lxy_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_lgxy_stencil_1_read_ren)begin
      if(op_hcompute_lgxy_stencil_1_read_ctrl_vars!=op_hcompute_lgxy_stencil_1_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lgxy_stencil_1_read_ren!=op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
        $display(op_hcompute_lgxy_stencil_1_read_ren);
        $display(op_hcompute_lgxy_stencil_1_read_ren_fsm_out);
      $finish(-1);
    end
    if (op_hcompute_lxy_stencil_write_wen_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lxy_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_lxy_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_lxy_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_lxy_stencil_write[0];
        default: $finish(-1);
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
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[1] = bank_0[addr2];
        1:op_hcompute_lgxy_stencil_1_read[1] = bank_1[addr2];
        2:op_hcompute_lgxy_stencil_1_read[1] = bank_2[addr2];
        3:op_hcompute_lgxy_stencil_1_read[1] = bank_3[addr2];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[2] = bank_0[addr3];
        1:op_hcompute_lgxy_stencil_1_read[2] = bank_1[addr3];
        2:op_hcompute_lgxy_stencil_1_read[2] = bank_2[addr3];
        3:op_hcompute_lgxy_stencil_1_read[2] = bank_3[addr3];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[3] = bank_0[addr4];
        1:op_hcompute_lgxy_stencil_1_read[3] = bank_1[addr4];
        2:op_hcompute_lgxy_stencil_1_read[3] = bank_2[addr4];
        3:op_hcompute_lgxy_stencil_1_read[3] = bank_3[addr4];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[4] = bank_0[addr5];
        1:op_hcompute_lgxy_stencil_1_read[4] = bank_1[addr5];
        2:op_hcompute_lgxy_stencil_1_read[4] = bank_2[addr5];
        3:op_hcompute_lgxy_stencil_1_read[4] = bank_3[addr5];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[5] = bank_0[addr6];
        1:op_hcompute_lgxy_stencil_1_read[5] = bank_1[addr6];
        2:op_hcompute_lgxy_stencil_1_read[5] = bank_2[addr6];
        3:op_hcompute_lgxy_stencil_1_read[5] = bank_3[addr6];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[6] = bank_0[addr7];
        1:op_hcompute_lgxy_stencil_1_read[6] = bank_1[addr7];
        2:op_hcompute_lgxy_stencil_1_read[6] = bank_2[addr7];
        3:op_hcompute_lgxy_stencil_1_read[6] = bank_3[addr7];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[7] = bank_0[addr8];
        1:op_hcompute_lgxy_stencil_1_read[7] = bank_1[addr8];
        2:op_hcompute_lgxy_stencil_1_read[7] = bank_2[addr8];
        3:op_hcompute_lgxy_stencil_1_read[7] = bank_3[addr8];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out) begin
      case( lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_bank_selector.out)
        0:op_hcompute_lgxy_stencil_1_read[8] = bank_0[addr9];
        1:op_hcompute_lgxy_stencil_1_read[8] = bank_1[addr9];
        2:op_hcompute_lgxy_stencil_1_read[8] = bank_2[addr9];
        3:op_hcompute_lgxy_stencil_1_read[8] = bank_3[addr9];
        default: $finish(-1);
      endcase
    end
  end

endmodule


module lyy_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

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
  // # of banks: 4
  logic [15:0] bank_0 [961];
  logic [15:0] bank_1 [961];
  logic [15:0] bank_2 [961];
  logic [15:0] bank_3 [961];
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
  assign addr0 = (((((-2 + 1*op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr2;
  assign addr2 = (((((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr3;
  assign addr3 = (((((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr4;
  assign addr4 = (((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr5;
  assign addr5 = (((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr6;
  assign addr6 = (((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-2 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[1])) - -2)>>1)*1+((((-1 + 1*op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out[2])) - -2)>>1)*31);
  always @(posedge clk) begin
    if(op_hcompute_lyy_stencil_write_wen)begin
      if(op_hcompute_lyy_stencil_write_ctrl_vars!=op_hcompute_lyy_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lyy_stencil_write_wen!=op_hcompute_lyy_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_lyy_stencil_write_wen);
        $display(op_hcompute_lyy_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_lgyy_stencil_1_read_ren)begin
      if(op_hcompute_lgyy_stencil_1_read_ctrl_vars!=op_hcompute_lgyy_stencil_1_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_lgyy_stencil_1_read_ren!=op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
        $display(op_hcompute_lgyy_stencil_1_read_ren);
        $display(op_hcompute_lgyy_stencil_1_read_ren_fsm_out);
      $finish(-1);
    end
    if (op_hcompute_lyy_stencil_write_wen_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_lyy_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_lyy_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_lyy_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_lyy_stencil_write[0];
        default: $finish(-1);
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
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[1] = bank_0[addr2];
        1:op_hcompute_lgyy_stencil_1_read[1] = bank_1[addr2];
        2:op_hcompute_lgyy_stencil_1_read[1] = bank_2[addr2];
        3:op_hcompute_lgyy_stencil_1_read[1] = bank_3[addr2];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[2] = bank_0[addr3];
        1:op_hcompute_lgyy_stencil_1_read[2] = bank_1[addr3];
        2:op_hcompute_lgyy_stencil_1_read[2] = bank_2[addr3];
        3:op_hcompute_lgyy_stencil_1_read[2] = bank_3[addr3];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[3] = bank_0[addr4];
        1:op_hcompute_lgyy_stencil_1_read[3] = bank_1[addr4];
        2:op_hcompute_lgyy_stencil_1_read[3] = bank_2[addr4];
        3:op_hcompute_lgyy_stencil_1_read[3] = bank_3[addr4];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[4] = bank_0[addr5];
        1:op_hcompute_lgyy_stencil_1_read[4] = bank_1[addr5];
        2:op_hcompute_lgyy_stencil_1_read[4] = bank_2[addr5];
        3:op_hcompute_lgyy_stencil_1_read[4] = bank_3[addr5];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[5] = bank_0[addr6];
        1:op_hcompute_lgyy_stencil_1_read[5] = bank_1[addr6];
        2:op_hcompute_lgyy_stencil_1_read[5] = bank_2[addr6];
        3:op_hcompute_lgyy_stencil_1_read[5] = bank_3[addr6];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[6] = bank_0[addr7];
        1:op_hcompute_lgyy_stencil_1_read[6] = bank_1[addr7];
        2:op_hcompute_lgyy_stencil_1_read[6] = bank_2[addr7];
        3:op_hcompute_lgyy_stencil_1_read[6] = bank_3[addr7];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[7] = bank_0[addr8];
        1:op_hcompute_lgyy_stencil_1_read[7] = bank_1[addr8];
        2:op_hcompute_lgyy_stencil_1_read[7] = bank_2[addr8];
        3:op_hcompute_lgyy_stencil_1_read[7] = bank_3[addr8];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out) begin
      case( lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_bank_selector.out)
        0:op_hcompute_lgyy_stencil_1_read[8] = bank_0[addr9];
        1:op_hcompute_lgyy_stencil_1_read[8] = bank_1[addr9];
        2:op_hcompute_lgyy_stencil_1_read[8] = bank_2[addr9];
        3:op_hcompute_lgyy_stencil_1_read[8] = bank_3[addr9];
        default: $finish(-1);
      endcase
    end
  end

endmodule


module padded16_global_wrapper_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 2);
  assign out = bank_index_0*1+bank_index_1*2;

endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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
  // # of banks: 4
  logic [15:0] bank_0 [1024];
  logic [15:0] bank_1 [1024];
  logic [15:0] bank_2 [1024];
  logic [15:0] bank_3 [1024];
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
  assign addr0 = (((((-3 + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - -3)>>1)*1+((((-3 + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - -3)>>1)*32);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  logic [15:0] addr1;
  assign addr1 = (((((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>1)*1+((((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3)>>1)*32);
  logic [15:0] addr2;
  assign addr2 = (((((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>1)*1+((((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3)>>1)*32);
  logic [15:0] addr3;
  assign addr3 = (((((-2 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>1)*1+((((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3)>>1)*32);
  logic [15:0] addr4;
  assign addr4 = (((((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>1)*1+((((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3)>>1)*32);
  logic [15:0] addr5;
  assign addr5 = (((((-2 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>1)*1+((((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3)>>1)*32);
  logic [15:0] addr6;
  assign addr6 = (((((-1 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>1)*1+((((-3 + 1*op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out[2])) - -3)>>1)*32);
  logic [15:0] addr7;
  assign addr7 = (((((-3 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>1)*1+((((-2 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3)>>1)*32);
  logic [15:0] addr8;
  assign addr8 = (((((-1 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[1])) - -3)>>1)*1+((((-2 + 1*op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out[2])) - -3)>>1)*32);
  always @(posedge clk) begin
    if(op_hcompute_padded16_global_wrapper_stencil_write_wen)begin
      if(op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars!=op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen!=op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_padded16_global_wrapper_stencil_write_wen);
        $display(op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_grad_x_stencil_read_ren)begin
      if(op_hcompute_grad_x_stencil_read_ctrl_vars!=op_hcompute_grad_x_stencil_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_grad_x_stencil_read_ren!=op_hcompute_grad_x_stencil_read_ren_fsm_out) begin
        $display(op_hcompute_grad_x_stencil_read_ren);
        $display(op_hcompute_grad_x_stencil_read_ren_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_grad_y_stencil_read_ren)begin
      if(op_hcompute_grad_y_stencil_read_ctrl_vars!=op_hcompute_grad_y_stencil_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_grad_y_stencil_read_ren!=op_hcompute_grad_y_stencil_read_ren_fsm_out) begin
        $display(op_hcompute_grad_y_stencil_read_ren);
        $display(op_hcompute_grad_y_stencil_read_ren_fsm_out);
      $finish(-1);
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        1:bank_1[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        2:bank_2[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        3:bank_3[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
        default: $finish(-1);
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
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out)
        0:op_hcompute_grad_x_stencil_read[1] = bank_0[addr2];
        1:op_hcompute_grad_x_stencil_read[1] = bank_1[addr2];
        2:op_hcompute_grad_x_stencil_read[1] = bank_2[addr2];
        3:op_hcompute_grad_x_stencil_read[1] = bank_3[addr2];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out)
        0:op_hcompute_grad_x_stencil_read[2] = bank_0[addr3];
        1:op_hcompute_grad_x_stencil_read[2] = bank_1[addr3];
        2:op_hcompute_grad_x_stencil_read[2] = bank_2[addr3];
        3:op_hcompute_grad_x_stencil_read[2] = bank_3[addr3];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out)
        0:op_hcompute_grad_x_stencil_read[3] = bank_0[addr4];
        1:op_hcompute_grad_x_stencil_read[3] = bank_1[addr4];
        2:op_hcompute_grad_x_stencil_read[3] = bank_2[addr4];
        3:op_hcompute_grad_x_stencil_read[3] = bank_3[addr4];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out)
        0:op_hcompute_grad_x_stencil_read[4] = bank_0[addr5];
        1:op_hcompute_grad_x_stencil_read[4] = bank_1[addr5];
        2:op_hcompute_grad_x_stencil_read[4] = bank_2[addr5];
        3:op_hcompute_grad_x_stencil_read[4] = bank_3[addr5];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out)
        0:op_hcompute_grad_x_stencil_read[5] = bank_0[addr6];
        1:op_hcompute_grad_x_stencil_read[5] = bank_1[addr6];
        2:op_hcompute_grad_x_stencil_read[5] = bank_2[addr6];
        3:op_hcompute_grad_x_stencil_read[5] = bank_3[addr6];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_grad_y_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out)
        0:op_hcompute_grad_y_stencil_read[1] = bank_0[addr7];
        1:op_hcompute_grad_y_stencil_read[1] = bank_1[addr7];
        2:op_hcompute_grad_y_stencil_read[1] = bank_2[addr7];
        3:op_hcompute_grad_y_stencil_read[1] = bank_3[addr7];
        default: $finish(-1);
      endcase
    end
    if (op_hcompute_grad_y_stencil_read_ren_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out)
        0:op_hcompute_grad_y_stencil_read[5] = bank_0[addr8];
        1:op_hcompute_grad_y_stencil_read[5] = bank_1[addr8];
        2:op_hcompute_grad_y_stencil_read[5] = bank_2[addr8];
        3:op_hcompute_grad_y_stencil_read[5] = bank_3[addr8];
        default: $finish(-1);
      endcase
    end
  end

endmodule

