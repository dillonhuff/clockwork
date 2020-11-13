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
    if (op_hcompute_cim_output_stencil_write_wen_fsm_out &&cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_bank_selector.out==0) begin
        bank_0[addr0] <= op_hcompute_cim_output_stencil_write[0];
    end
  end
  always @(*) begin
    if (op_hcompute_hw_output_stencil_read_ren_fsm_out &&cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_bank_selector.out==0) begin
        op_hcompute_hw_output_stencil_read[0] = bank_0[addr1];
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
    if (op_hcompute_cim_stencil_write_wen_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector.out==0) begin
        bank_0[addr0] <= op_hcompute_cim_stencil_write[0];
    end
    if (op_hcompute_cim_stencil_write_wen_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector.out==1) begin
        bank_1[addr0] <= op_hcompute_cim_stencil_write[0];
    end
    if (op_hcompute_cim_stencil_write_wen_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector.out==2) begin
        bank_2[addr0] <= op_hcompute_cim_stencil_write[0];
    end
    if (op_hcompute_cim_stencil_write_wen_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector.out==3) begin
        bank_3[addr0] <= op_hcompute_cim_stencil_write[0];
    end
    if (op_hcompute_cim_stencil_write_wen_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector.out==4) begin
        bank_4[addr0] <= op_hcompute_cim_stencil_write[0];
    end
    if (op_hcompute_cim_stencil_write_wen_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector.out==5) begin
        bank_5[addr0] <= op_hcompute_cim_stencil_write[0];
    end
    if (op_hcompute_cim_stencil_write_wen_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector.out==6) begin
        bank_6[addr0] <= op_hcompute_cim_stencil_write[0];
    end
    if (op_hcompute_cim_stencil_write_wen_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector.out==7) begin
        bank_7[addr0] <= op_hcompute_cim_stencil_write[0];
    end
    if (op_hcompute_cim_stencil_write_wen_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector.out==8) begin
        bank_8[addr0] <= op_hcompute_cim_stencil_write[0];
    end
  end
  always @(*) begin
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_bank_selector.out==0) begin
        op_hcompute_cim_output_stencil_read[0] = bank_0[addr1];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_bank_selector.out==0) begin
        op_hcompute_cim_output_stencil_read[1] = bank_0[addr2];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_bank_selector.out==0) begin
        op_hcompute_cim_output_stencil_read[2] = bank_0[addr3];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_bank_selector.out==0) begin
        op_hcompute_cim_output_stencil_read[3] = bank_0[addr4];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_bank_selector.out==0) begin
        op_hcompute_cim_output_stencil_read[4] = bank_0[addr5];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_bank_selector.out==0) begin
        op_hcompute_cim_output_stencil_read[5] = bank_0[addr6];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_bank_selector.out==0) begin
        op_hcompute_cim_output_stencil_read[6] = bank_0[addr7];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_bank_selector.out==0) begin
        op_hcompute_cim_output_stencil_read[7] = bank_0[addr8];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_bank_selector.out==0) begin
        op_hcompute_cim_output_stencil_read[8] = bank_0[addr9];
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_bank_selector.out==1) begin
        op_hcompute_cim_output_stencil_read[0] = bank_1[addr1];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_bank_selector.out==1) begin
        op_hcompute_cim_output_stencil_read[1] = bank_1[addr2];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_bank_selector.out==1) begin
        op_hcompute_cim_output_stencil_read[2] = bank_1[addr3];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_bank_selector.out==1) begin
        op_hcompute_cim_output_stencil_read[3] = bank_1[addr4];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_bank_selector.out==1) begin
        op_hcompute_cim_output_stencil_read[4] = bank_1[addr5];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_bank_selector.out==1) begin
        op_hcompute_cim_output_stencil_read[5] = bank_1[addr6];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_bank_selector.out==1) begin
        op_hcompute_cim_output_stencil_read[6] = bank_1[addr7];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_bank_selector.out==1) begin
        op_hcompute_cim_output_stencil_read[7] = bank_1[addr8];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_bank_selector.out==1) begin
        op_hcompute_cim_output_stencil_read[8] = bank_1[addr9];
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_bank_selector.out==2) begin
        op_hcompute_cim_output_stencil_read[0] = bank_2[addr1];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_bank_selector.out==2) begin
        op_hcompute_cim_output_stencil_read[1] = bank_2[addr2];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_bank_selector.out==2) begin
        op_hcompute_cim_output_stencil_read[2] = bank_2[addr3];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_bank_selector.out==2) begin
        op_hcompute_cim_output_stencil_read[3] = bank_2[addr4];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_bank_selector.out==2) begin
        op_hcompute_cim_output_stencil_read[4] = bank_2[addr5];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_bank_selector.out==2) begin
        op_hcompute_cim_output_stencil_read[5] = bank_2[addr6];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_bank_selector.out==2) begin
        op_hcompute_cim_output_stencil_read[6] = bank_2[addr7];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_bank_selector.out==2) begin
        op_hcompute_cim_output_stencil_read[7] = bank_2[addr8];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_bank_selector.out==2) begin
        op_hcompute_cim_output_stencil_read[8] = bank_2[addr9];
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_bank_selector.out==3) begin
        op_hcompute_cim_output_stencil_read[0] = bank_3[addr1];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_bank_selector.out==3) begin
        op_hcompute_cim_output_stencil_read[1] = bank_3[addr2];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_bank_selector.out==3) begin
        op_hcompute_cim_output_stencil_read[2] = bank_3[addr3];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_bank_selector.out==3) begin
        op_hcompute_cim_output_stencil_read[3] = bank_3[addr4];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_bank_selector.out==3) begin
        op_hcompute_cim_output_stencil_read[4] = bank_3[addr5];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_bank_selector.out==3) begin
        op_hcompute_cim_output_stencil_read[5] = bank_3[addr6];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_bank_selector.out==3) begin
        op_hcompute_cim_output_stencil_read[6] = bank_3[addr7];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_bank_selector.out==3) begin
        op_hcompute_cim_output_stencil_read[7] = bank_3[addr8];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_bank_selector.out==3) begin
        op_hcompute_cim_output_stencil_read[8] = bank_3[addr9];
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_bank_selector.out==4) begin
        op_hcompute_cim_output_stencil_read[0] = bank_4[addr1];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_bank_selector.out==4) begin
        op_hcompute_cim_output_stencil_read[1] = bank_4[addr2];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_bank_selector.out==4) begin
        op_hcompute_cim_output_stencil_read[2] = bank_4[addr3];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_bank_selector.out==4) begin
        op_hcompute_cim_output_stencil_read[3] = bank_4[addr4];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_bank_selector.out==4) begin
        op_hcompute_cim_output_stencil_read[4] = bank_4[addr5];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_bank_selector.out==4) begin
        op_hcompute_cim_output_stencil_read[5] = bank_4[addr6];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_bank_selector.out==4) begin
        op_hcompute_cim_output_stencil_read[6] = bank_4[addr7];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_bank_selector.out==4) begin
        op_hcompute_cim_output_stencil_read[7] = bank_4[addr8];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_bank_selector.out==4) begin
        op_hcompute_cim_output_stencil_read[8] = bank_4[addr9];
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_bank_selector.out==5) begin
        op_hcompute_cim_output_stencil_read[0] = bank_5[addr1];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_bank_selector.out==5) begin
        op_hcompute_cim_output_stencil_read[1] = bank_5[addr2];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_bank_selector.out==5) begin
        op_hcompute_cim_output_stencil_read[2] = bank_5[addr3];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_bank_selector.out==5) begin
        op_hcompute_cim_output_stencil_read[3] = bank_5[addr4];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_bank_selector.out==5) begin
        op_hcompute_cim_output_stencil_read[4] = bank_5[addr5];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_bank_selector.out==5) begin
        op_hcompute_cim_output_stencil_read[5] = bank_5[addr6];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_bank_selector.out==5) begin
        op_hcompute_cim_output_stencil_read[6] = bank_5[addr7];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_bank_selector.out==5) begin
        op_hcompute_cim_output_stencil_read[7] = bank_5[addr8];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_bank_selector.out==5) begin
        op_hcompute_cim_output_stencil_read[8] = bank_5[addr9];
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_bank_selector.out==6) begin
        op_hcompute_cim_output_stencil_read[0] = bank_6[addr1];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_bank_selector.out==6) begin
        op_hcompute_cim_output_stencil_read[1] = bank_6[addr2];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_bank_selector.out==6) begin
        op_hcompute_cim_output_stencil_read[2] = bank_6[addr3];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_bank_selector.out==6) begin
        op_hcompute_cim_output_stencil_read[3] = bank_6[addr4];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_bank_selector.out==6) begin
        op_hcompute_cim_output_stencil_read[4] = bank_6[addr5];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_bank_selector.out==6) begin
        op_hcompute_cim_output_stencil_read[5] = bank_6[addr6];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_bank_selector.out==6) begin
        op_hcompute_cim_output_stencil_read[6] = bank_6[addr7];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_bank_selector.out==6) begin
        op_hcompute_cim_output_stencil_read[7] = bank_6[addr8];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_bank_selector.out==6) begin
        op_hcompute_cim_output_stencil_read[8] = bank_6[addr9];
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_bank_selector.out==7) begin
        op_hcompute_cim_output_stencil_read[0] = bank_7[addr1];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_bank_selector.out==7) begin
        op_hcompute_cim_output_stencil_read[1] = bank_7[addr2];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_bank_selector.out==7) begin
        op_hcompute_cim_output_stencil_read[2] = bank_7[addr3];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_bank_selector.out==7) begin
        op_hcompute_cim_output_stencil_read[3] = bank_7[addr4];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_bank_selector.out==7) begin
        op_hcompute_cim_output_stencil_read[4] = bank_7[addr5];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_bank_selector.out==7) begin
        op_hcompute_cim_output_stencil_read[5] = bank_7[addr6];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_bank_selector.out==7) begin
        op_hcompute_cim_output_stencil_read[6] = bank_7[addr7];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_bank_selector.out==7) begin
        op_hcompute_cim_output_stencil_read[7] = bank_7[addr8];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_bank_selector.out==7) begin
        op_hcompute_cim_output_stencil_read[8] = bank_7[addr9];
    end
    if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_bank_selector.out==8) begin
        op_hcompute_cim_output_stencil_read[0] = bank_8[addr1];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_bank_selector.out==8) begin
        op_hcompute_cim_output_stencil_read[1] = bank_8[addr2];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_bank_selector.out==8) begin
        op_hcompute_cim_output_stencil_read[2] = bank_8[addr3];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_bank_selector.out==8) begin
        op_hcompute_cim_output_stencil_read[3] = bank_8[addr4];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_bank_selector.out==8) begin
        op_hcompute_cim_output_stencil_read[4] = bank_8[addr5];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_bank_selector.out==8) begin
        op_hcompute_cim_output_stencil_read[5] = bank_8[addr6];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_bank_selector.out==8) begin
        op_hcompute_cim_output_stencil_read[6] = bank_8[addr7];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_bank_selector.out==8) begin
        op_hcompute_cim_output_stencil_read[7] = bank_8[addr8];
    end
    else if (op_hcompute_cim_output_stencil_read_ren_fsm_out &&cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_bank_selector.out==8) begin
        op_hcompute_cim_output_stencil_read[8] = bank_8[addr9];
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

  always @(posedge clk) begin
    out <= storage[read_addr];
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
    if (op_hcompute_grad_x_stencil_write_wen_fsm_out &&grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_bank_selector.out==0) begin
        bank_0[addr0] <= op_hcompute_grad_x_stencil_write[0];
    end
  end
  always @(*) begin
    if (op_hcompute_lxx_stencil_read_ren_fsm_out &&grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_bank_selector.out==0) begin
        op_hcompute_lxx_stencil_read[0] = bank_0[addr1];
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

  always @(posedge clk) begin
    out <= storage[read_addr];
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
    if (op_hcompute_grad_y_stencil_write_wen_fsm_out &&grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_bank_selector.out==0) begin
        bank_0[addr0] <= op_hcompute_grad_y_stencil_write[0];
    end
  end
  always @(*) begin
    if (op_hcompute_lxy_stencil_read_ren_fsm_out &&grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_bank_selector.out==0) begin
        op_hcompute_lxy_stencil_read[0] = bank_0[addr1];
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
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==0) begin
        bank_0[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==0) begin
        bank_0[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==1) begin
        bank_1[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==1) begin
        bank_1[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==2) begin
        bank_2[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==2) begin
        bank_2[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==3) begin
        bank_3[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==3) begin
        bank_3[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==4) begin
        bank_4[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==4) begin
        bank_4[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==5) begin
        bank_5[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==5) begin
        bank_5[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==6) begin
        bank_6[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==6) begin
        bank_6[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==7) begin
        bank_7[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==7) begin
        bank_7[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==8) begin
        bank_8[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==8) begin
        bank_8[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==9) begin
        bank_9[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==9) begin
        bank_9[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==10) begin
        bank_10[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==10) begin
        bank_10[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==11) begin
        bank_11[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==11) begin
        bank_11[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==12) begin
        bank_12[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==12) begin
        bank_12[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==13) begin
        bank_13[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==13) begin
        bank_13[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==14) begin
        bank_14[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==14) begin
        bank_14[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==15) begin
        bank_15[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==15) begin
        bank_15[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==16) begin
        bank_16[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==16) begin
        bank_16[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==17) begin
        bank_17[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==17) begin
        bank_17[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==18) begin
        bank_18[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==18) begin
        bank_18[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==19) begin
        bank_19[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==19) begin
        bank_19[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==20) begin
        bank_20[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==20) begin
        bank_20[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==21) begin
        bank_21[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==21) begin
        bank_21[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==22) begin
        bank_22[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==22) begin
        bank_22[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==23) begin
        bank_23[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==23) begin
        bank_23[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==24) begin
        bank_24[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==24) begin
        bank_24[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==25) begin
        bank_25[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==25) begin
        bank_25[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==26) begin
        bank_26[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==26) begin
        bank_26[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==27) begin
        bank_27[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==27) begin
        bank_27[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==28) begin
        bank_28[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==28) begin
        bank_28[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==29) begin
        bank_29[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==29) begin
        bank_29[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==30) begin
        bank_30[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==30) begin
        bank_30[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==31) begin
        bank_31[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==31) begin
        bank_31[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==32) begin
        bank_32[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==32) begin
        bank_32[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==33) begin
        bank_33[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==33) begin
        bank_33[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==34) begin
        bank_34[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==34) begin
        bank_34[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==35) begin
        bank_35[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==35) begin
        bank_35[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==36) begin
        bank_36[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==36) begin
        bank_36[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==37) begin
        bank_37[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==37) begin
        bank_37[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==38) begin
        bank_38[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==38) begin
        bank_38[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==39) begin
        bank_39[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==39) begin
        bank_39[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==40) begin
        bank_40[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==40) begin
        bank_40[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==41) begin
        bank_41[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==41) begin
        bank_41[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==42) begin
        bank_42[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==42) begin
        bank_42[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==43) begin
        bank_43[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==43) begin
        bank_43[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==44) begin
        bank_44[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==44) begin
        bank_44[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==45) begin
        bank_45[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==45) begin
        bank_45[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==46) begin
        bank_46[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==46) begin
        bank_46[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==47) begin
        bank_47[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==47) begin
        bank_47[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==48) begin
        bank_48[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==48) begin
        bank_48[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==49) begin
        bank_49[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==49) begin
        bank_49[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==50) begin
        bank_50[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==50) begin
        bank_50[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==51) begin
        bank_51[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==51) begin
        bank_51[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==52) begin
        bank_52[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==52) begin
        bank_52[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==53) begin
        bank_53[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==53) begin
        bank_53[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==54) begin
        bank_54[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==54) begin
        bank_54[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==55) begin
        bank_55[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==55) begin
        bank_55[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==56) begin
        bank_56[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==56) begin
        bank_56[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==57) begin
        bank_57[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==57) begin
        bank_57[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==58) begin
        bank_58[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==58) begin
        bank_58[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==59) begin
        bank_59[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==59) begin
        bank_59[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==60) begin
        bank_60[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==60) begin
        bank_60[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==61) begin
        bank_61[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==61) begin
        bank_61[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==62) begin
        bank_62[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==62) begin
        bank_62[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==63) begin
        bank_63[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==63) begin
        bank_63[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==64) begin
        bank_64[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==64) begin
        bank_64[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==65) begin
        bank_65[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==65) begin
        bank_65[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==66) begin
        bank_66[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==66) begin
        bank_66[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==67) begin
        bank_67[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==67) begin
        bank_67[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==68) begin
        bank_68[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==68) begin
        bank_68[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==69) begin
        bank_69[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==69) begin
        bank_69[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==70) begin
        bank_70[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==70) begin
        bank_70[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==71) begin
        bank_71[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==71) begin
        bank_71[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==72) begin
        bank_72[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==72) begin
        bank_72[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==73) begin
        bank_73[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==73) begin
        bank_73[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==74) begin
        bank_74[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==74) begin
        bank_74[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==75) begin
        bank_75[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==75) begin
        bank_75[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==76) begin
        bank_76[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==76) begin
        bank_76[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==77) begin
        bank_77[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==77) begin
        bank_77[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==78) begin
        bank_78[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==78) begin
        bank_78[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==79) begin
        bank_79[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==79) begin
        bank_79[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==80) begin
        bank_80[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==80) begin
        bank_80[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==81) begin
        bank_81[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==81) begin
        bank_81[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==82) begin
        bank_82[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==82) begin
        bank_82[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==83) begin
        bank_83[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==83) begin
        bank_83[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==84) begin
        bank_84[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==84) begin
        bank_84[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==85) begin
        bank_85[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==85) begin
        bank_85[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==86) begin
        bank_86[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==86) begin
        bank_86[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==87) begin
        bank_87[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==87) begin
        bank_87[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==88) begin
        bank_88[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==88) begin
        bank_88[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==89) begin
        bank_89[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==89) begin
        bank_89[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==90) begin
        bank_90[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==90) begin
        bank_90[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==91) begin
        bank_91[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==91) begin
        bank_91[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==92) begin
        bank_92[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==92) begin
        bank_92[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==93) begin
        bank_93[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==93) begin
        bank_93[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==94) begin
        bank_94[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==94) begin
        bank_94[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==95) begin
        bank_95[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==95) begin
        bank_95[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==96) begin
        bank_96[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==96) begin
        bank_96[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==97) begin
        bank_97[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==97) begin
        bank_97[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==98) begin
        bank_98[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==98) begin
        bank_98[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==99) begin
        bank_99[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==99) begin
        bank_99[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==100) begin
        bank_100[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==100) begin
        bank_100[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==101) begin
        bank_101[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==101) begin
        bank_101[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==102) begin
        bank_102[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==102) begin
        bank_102[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==103) begin
        bank_103[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==103) begin
        bank_103[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==104) begin
        bank_104[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==104) begin
        bank_104[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==105) begin
        bank_105[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==105) begin
        bank_105[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==106) begin
        bank_106[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==106) begin
        bank_106[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==107) begin
        bank_107[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==107) begin
        bank_107[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==108) begin
        bank_108[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==108) begin
        bank_108[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==109) begin
        bank_109[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==109) begin
        bank_109[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==110) begin
        bank_110[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==110) begin
        bank_110[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==111) begin
        bank_111[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==111) begin
        bank_111[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==112) begin
        bank_112[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==112) begin
        bank_112[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
    if (op_hcompute_lgxx_stencil_1_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_33_bank_selector.out==113) begin
        bank_113[addr0] <= op_hcompute_lgxx_stencil_1_write[0];
    end
    else if (op_hcompute_lgxx_stencil_write_wen_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_44_bank_selector.out==113) begin
        bank_113[addr1] <= op_hcompute_lgxx_stencil_write[0];
    end
  end
  always @(*) begin
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==0) begin
        op_hcompute_cim_stencil_read[0] = bank_0[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==0) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_0[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==1) begin
        op_hcompute_cim_stencil_read[0] = bank_1[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==1) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_1[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==2) begin
        op_hcompute_cim_stencil_read[0] = bank_2[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==2) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_2[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==3) begin
        op_hcompute_cim_stencil_read[0] = bank_3[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==3) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_3[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==4) begin
        op_hcompute_cim_stencil_read[0] = bank_4[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==4) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_4[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==5) begin
        op_hcompute_cim_stencil_read[0] = bank_5[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==5) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_5[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==6) begin
        op_hcompute_cim_stencil_read[0] = bank_6[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==6) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_6[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==7) begin
        op_hcompute_cim_stencil_read[0] = bank_7[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==7) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_7[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==8) begin
        op_hcompute_cim_stencil_read[0] = bank_8[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==8) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_8[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==9) begin
        op_hcompute_cim_stencil_read[0] = bank_9[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==9) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_9[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==10) begin
        op_hcompute_cim_stencil_read[0] = bank_10[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==10) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_10[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==11) begin
        op_hcompute_cim_stencil_read[0] = bank_11[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==11) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_11[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==12) begin
        op_hcompute_cim_stencil_read[0] = bank_12[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==12) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_12[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==13) begin
        op_hcompute_cim_stencil_read[0] = bank_13[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==13) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_13[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==14) begin
        op_hcompute_cim_stencil_read[0] = bank_14[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==14) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_14[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==15) begin
        op_hcompute_cim_stencil_read[0] = bank_15[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==15) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_15[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==16) begin
        op_hcompute_cim_stencil_read[0] = bank_16[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==16) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_16[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==17) begin
        op_hcompute_cim_stencil_read[0] = bank_17[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==17) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_17[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==18) begin
        op_hcompute_cim_stencil_read[0] = bank_18[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==18) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_18[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==19) begin
        op_hcompute_cim_stencil_read[0] = bank_19[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==19) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_19[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==20) begin
        op_hcompute_cim_stencil_read[0] = bank_20[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==20) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_20[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==21) begin
        op_hcompute_cim_stencil_read[0] = bank_21[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==21) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_21[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==22) begin
        op_hcompute_cim_stencil_read[0] = bank_22[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==22) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_22[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==23) begin
        op_hcompute_cim_stencil_read[0] = bank_23[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==23) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_23[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==24) begin
        op_hcompute_cim_stencil_read[0] = bank_24[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==24) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_24[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==25) begin
        op_hcompute_cim_stencil_read[0] = bank_25[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==25) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_25[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==26) begin
        op_hcompute_cim_stencil_read[0] = bank_26[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==26) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_26[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==27) begin
        op_hcompute_cim_stencil_read[0] = bank_27[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==27) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_27[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==28) begin
        op_hcompute_cim_stencil_read[0] = bank_28[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==28) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_28[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==29) begin
        op_hcompute_cim_stencil_read[0] = bank_29[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==29) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_29[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==30) begin
        op_hcompute_cim_stencil_read[0] = bank_30[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==30) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_30[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==31) begin
        op_hcompute_cim_stencil_read[0] = bank_31[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==31) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_31[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==32) begin
        op_hcompute_cim_stencil_read[0] = bank_32[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==32) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_32[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==33) begin
        op_hcompute_cim_stencil_read[0] = bank_33[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==33) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_33[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==34) begin
        op_hcompute_cim_stencil_read[0] = bank_34[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==34) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_34[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==35) begin
        op_hcompute_cim_stencil_read[0] = bank_35[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==35) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_35[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==36) begin
        op_hcompute_cim_stencil_read[0] = bank_36[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==36) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_36[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==37) begin
        op_hcompute_cim_stencil_read[0] = bank_37[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==37) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_37[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==38) begin
        op_hcompute_cim_stencil_read[0] = bank_38[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==38) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_38[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==39) begin
        op_hcompute_cim_stencil_read[0] = bank_39[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==39) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_39[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==40) begin
        op_hcompute_cim_stencil_read[0] = bank_40[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==40) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_40[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==41) begin
        op_hcompute_cim_stencil_read[0] = bank_41[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==41) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_41[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==42) begin
        op_hcompute_cim_stencil_read[0] = bank_42[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==42) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_42[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==43) begin
        op_hcompute_cim_stencil_read[0] = bank_43[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==43) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_43[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==44) begin
        op_hcompute_cim_stencil_read[0] = bank_44[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==44) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_44[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==45) begin
        op_hcompute_cim_stencil_read[0] = bank_45[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==45) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_45[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==46) begin
        op_hcompute_cim_stencil_read[0] = bank_46[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==46) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_46[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==47) begin
        op_hcompute_cim_stencil_read[0] = bank_47[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==47) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_47[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==48) begin
        op_hcompute_cim_stencil_read[0] = bank_48[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==48) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_48[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==49) begin
        op_hcompute_cim_stencil_read[0] = bank_49[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==49) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_49[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==50) begin
        op_hcompute_cim_stencil_read[0] = bank_50[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==50) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_50[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==51) begin
        op_hcompute_cim_stencil_read[0] = bank_51[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==51) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_51[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==52) begin
        op_hcompute_cim_stencil_read[0] = bank_52[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==52) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_52[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==53) begin
        op_hcompute_cim_stencil_read[0] = bank_53[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==53) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_53[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==54) begin
        op_hcompute_cim_stencil_read[0] = bank_54[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==54) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_54[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==55) begin
        op_hcompute_cim_stencil_read[0] = bank_55[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==55) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_55[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==56) begin
        op_hcompute_cim_stencil_read[0] = bank_56[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==56) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_56[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==57) begin
        op_hcompute_cim_stencil_read[0] = bank_57[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==57) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_57[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==58) begin
        op_hcompute_cim_stencil_read[0] = bank_58[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==58) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_58[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==59) begin
        op_hcompute_cim_stencil_read[0] = bank_59[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==59) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_59[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==60) begin
        op_hcompute_cim_stencil_read[0] = bank_60[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==60) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_60[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==61) begin
        op_hcompute_cim_stencil_read[0] = bank_61[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==61) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_61[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==62) begin
        op_hcompute_cim_stencil_read[0] = bank_62[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==62) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_62[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==63) begin
        op_hcompute_cim_stencil_read[0] = bank_63[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==63) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_63[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==64) begin
        op_hcompute_cim_stencil_read[0] = bank_64[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==64) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_64[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==65) begin
        op_hcompute_cim_stencil_read[0] = bank_65[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==65) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_65[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==66) begin
        op_hcompute_cim_stencil_read[0] = bank_66[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==66) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_66[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==67) begin
        op_hcompute_cim_stencil_read[0] = bank_67[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==67) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_67[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==68) begin
        op_hcompute_cim_stencil_read[0] = bank_68[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==68) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_68[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==69) begin
        op_hcompute_cim_stencil_read[0] = bank_69[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==69) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_69[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==70) begin
        op_hcompute_cim_stencil_read[0] = bank_70[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==70) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_70[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==71) begin
        op_hcompute_cim_stencil_read[0] = bank_71[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==71) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_71[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==72) begin
        op_hcompute_cim_stencil_read[0] = bank_72[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==72) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_72[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==73) begin
        op_hcompute_cim_stencil_read[0] = bank_73[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==73) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_73[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==74) begin
        op_hcompute_cim_stencil_read[0] = bank_74[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==74) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_74[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==75) begin
        op_hcompute_cim_stencil_read[0] = bank_75[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==75) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_75[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==76) begin
        op_hcompute_cim_stencil_read[0] = bank_76[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==76) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_76[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==77) begin
        op_hcompute_cim_stencil_read[0] = bank_77[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==77) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_77[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==78) begin
        op_hcompute_cim_stencil_read[0] = bank_78[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==78) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_78[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==79) begin
        op_hcompute_cim_stencil_read[0] = bank_79[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==79) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_79[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==80) begin
        op_hcompute_cim_stencil_read[0] = bank_80[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==80) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_80[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==81) begin
        op_hcompute_cim_stencil_read[0] = bank_81[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==81) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_81[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==82) begin
        op_hcompute_cim_stencil_read[0] = bank_82[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==82) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_82[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==83) begin
        op_hcompute_cim_stencil_read[0] = bank_83[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==83) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_83[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==84) begin
        op_hcompute_cim_stencil_read[0] = bank_84[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==84) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_84[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==85) begin
        op_hcompute_cim_stencil_read[0] = bank_85[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==85) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_85[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==86) begin
        op_hcompute_cim_stencil_read[0] = bank_86[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==86) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_86[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==87) begin
        op_hcompute_cim_stencil_read[0] = bank_87[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==87) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_87[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==88) begin
        op_hcompute_cim_stencil_read[0] = bank_88[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==88) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_88[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==89) begin
        op_hcompute_cim_stencil_read[0] = bank_89[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==89) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_89[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==90) begin
        op_hcompute_cim_stencil_read[0] = bank_90[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==90) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_90[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==91) begin
        op_hcompute_cim_stencil_read[0] = bank_91[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==91) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_91[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==92) begin
        op_hcompute_cim_stencil_read[0] = bank_92[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==92) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_92[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==93) begin
        op_hcompute_cim_stencil_read[0] = bank_93[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==93) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_93[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==94) begin
        op_hcompute_cim_stencil_read[0] = bank_94[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==94) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_94[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==95) begin
        op_hcompute_cim_stencil_read[0] = bank_95[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==95) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_95[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==96) begin
        op_hcompute_cim_stencil_read[0] = bank_96[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==96) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_96[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==97) begin
        op_hcompute_cim_stencil_read[0] = bank_97[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==97) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_97[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==98) begin
        op_hcompute_cim_stencil_read[0] = bank_98[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==98) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_98[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==99) begin
        op_hcompute_cim_stencil_read[0] = bank_99[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==99) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_99[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==100) begin
        op_hcompute_cim_stencil_read[0] = bank_100[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==100) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_100[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==101) begin
        op_hcompute_cim_stencil_read[0] = bank_101[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==101) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_101[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==102) begin
        op_hcompute_cim_stencil_read[0] = bank_102[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==102) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_102[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==103) begin
        op_hcompute_cim_stencil_read[0] = bank_103[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==103) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_103[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==104) begin
        op_hcompute_cim_stencil_read[0] = bank_104[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==104) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_104[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==105) begin
        op_hcompute_cim_stencil_read[0] = bank_105[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==105) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_105[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==106) begin
        op_hcompute_cim_stencil_read[0] = bank_106[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==106) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_106[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==107) begin
        op_hcompute_cim_stencil_read[0] = bank_107[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==107) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_107[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==108) begin
        op_hcompute_cim_stencil_read[0] = bank_108[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==108) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_108[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==109) begin
        op_hcompute_cim_stencil_read[0] = bank_109[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==109) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_109[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==110) begin
        op_hcompute_cim_stencil_read[0] = bank_110[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==110) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_110[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==111) begin
        op_hcompute_cim_stencil_read[0] = bank_111[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==111) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_111[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==112) begin
        op_hcompute_cim_stencil_read[0] = bank_112[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==112) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_112[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_cim_stencil_62_bank_selector.out==113) begin
        op_hcompute_cim_stencil_read[0] = bank_113[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lgxx_stencil_lgxx_stencil_op_hcompute_lgxx_stencil_1_34_bank_selector.out==113) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_113[addr3];
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
    if (op_hcompute_lgxy_stencil_1_write_wen_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_bank_selector.out==0) begin
        bank_0[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
    end
    else if (op_hcompute_lgxy_stencil_write_wen_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_bank_selector.out==0) begin
        bank_0[addr1] <= op_hcompute_lgxy_stencil_write[0];
    end
    if (op_hcompute_lgxy_stencil_1_write_wen_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_bank_selector.out==1) begin
        bank_1[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
    end
    else if (op_hcompute_lgxy_stencil_write_wen_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_bank_selector.out==1) begin
        bank_1[addr1] <= op_hcompute_lgxy_stencil_write[0];
    end
    if (op_hcompute_lgxy_stencil_1_write_wen_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_bank_selector.out==2) begin
        bank_2[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
    end
    else if (op_hcompute_lgxy_stencil_write_wen_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_bank_selector.out==2) begin
        bank_2[addr1] <= op_hcompute_lgxy_stencil_write[0];
    end
    if (op_hcompute_lgxy_stencil_1_write_wen_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_bank_selector.out==3) begin
        bank_3[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
    end
    else if (op_hcompute_lgxy_stencil_write_wen_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_bank_selector.out==3) begin
        bank_3[addr1] <= op_hcompute_lgxy_stencil_write[0];
    end
    if (op_hcompute_lgxy_stencil_1_write_wen_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_21_bank_selector.out==4) begin
        bank_4[addr0] <= op_hcompute_lgxy_stencil_1_write[0];
    end
    else if (op_hcompute_lgxy_stencil_write_wen_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_32_bank_selector.out==4) begin
        bank_4[addr1] <= op_hcompute_lgxy_stencil_write[0];
    end
  end
  always @(*) begin
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_bank_selector.out==0) begin
        op_hcompute_cim_stencil_read[0] = bank_0[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_bank_selector.out==0) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_0[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_bank_selector.out==1) begin
        op_hcompute_cim_stencil_read[0] = bank_1[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_bank_selector.out==1) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_1[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_bank_selector.out==2) begin
        op_hcompute_cim_stencil_read[0] = bank_2[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_bank_selector.out==2) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_2[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_bank_selector.out==3) begin
        op_hcompute_cim_stencil_read[0] = bank_3[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_bank_selector.out==3) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_3[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_cim_stencil_63_bank_selector.out==4) begin
        op_hcompute_cim_stencil_read[0] = bank_4[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lgxy_stencil_lgxy_stencil_op_hcompute_lgxy_stencil_1_22_bank_selector.out==4) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_4[addr3];
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
    if (op_hcompute_lgyy_stencil_1_write_wen_fsm_out &&lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_bank_selector.out==0) begin
        bank_0[addr0] <= op_hcompute_lgyy_stencil_1_write[0];
    end
    else if (op_hcompute_lgyy_stencil_write_wen_fsm_out &&lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_20_bank_selector.out==0) begin
        bank_0[addr1] <= op_hcompute_lgyy_stencil_write[0];
    end
    if (op_hcompute_lgyy_stencil_1_write_wen_fsm_out &&lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_9_bank_selector.out==1) begin
        bank_1[addr0] <= op_hcompute_lgyy_stencil_1_write[0];
    end
    else if (op_hcompute_lgyy_stencil_write_wen_fsm_out &&lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_20_bank_selector.out==1) begin
        bank_1[addr1] <= op_hcompute_lgyy_stencil_write[0];
    end
  end
  always @(*) begin
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_bank_selector.out==0) begin
        op_hcompute_cim_stencil_read[0] = bank_0[addr2];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_10_bank_selector.out==0) begin
        op_hcompute_lgyy_stencil_1_read[0] = bank_0[addr3];
    end
    if (op_hcompute_cim_stencil_read_ren_fsm_out &&lgyy_stencil_lgyy_stencil_op_hcompute_cim_stencil_64_bank_selector.out==1) begin
        op_hcompute_cim_stencil_read[0] = bank_1[addr2];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lgyy_stencil_lgyy_stencil_op_hcompute_lgyy_stencil_1_10_bank_selector.out==1) begin
        op_hcompute_lgyy_stencil_1_read[0] = bank_1[addr3];
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
    if (op_hcompute_lxx_stencil_write_wen_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector.out==0) begin
        bank_0[addr0] <= op_hcompute_lxx_stencil_write[0];
    end
    if (op_hcompute_lxx_stencil_write_wen_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector.out==1) begin
        bank_1[addr0] <= op_hcompute_lxx_stencil_write[0];
    end
    if (op_hcompute_lxx_stencil_write_wen_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector.out==2) begin
        bank_2[addr0] <= op_hcompute_lxx_stencil_write[0];
    end
    if (op_hcompute_lxx_stencil_write_wen_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector.out==3) begin
        bank_3[addr0] <= op_hcompute_lxx_stencil_write[0];
    end
    if (op_hcompute_lxx_stencil_write_wen_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector.out==4) begin
        bank_4[addr0] <= op_hcompute_lxx_stencil_write[0];
    end
    if (op_hcompute_lxx_stencil_write_wen_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector.out==5) begin
        bank_5[addr0] <= op_hcompute_lxx_stencil_write[0];
    end
    if (op_hcompute_lxx_stencil_write_wen_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector.out==6) begin
        bank_6[addr0] <= op_hcompute_lxx_stencil_write[0];
    end
    if (op_hcompute_lxx_stencil_write_wen_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector.out==7) begin
        bank_7[addr0] <= op_hcompute_lxx_stencil_write[0];
    end
    if (op_hcompute_lxx_stencil_write_wen_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_7_bank_selector.out==8) begin
        bank_8[addr0] <= op_hcompute_lxx_stencil_write[0];
    end
  end
  always @(*) begin
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_bank_selector.out==0) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_0[addr1];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_bank_selector.out==0) begin
        op_hcompute_lgxx_stencil_1_read[1] = bank_0[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_bank_selector.out==0) begin
        op_hcompute_lgxx_stencil_1_read[2] = bank_0[addr3];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_bank_selector.out==0) begin
        op_hcompute_lgxx_stencil_1_read[3] = bank_0[addr4];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_bank_selector.out==0) begin
        op_hcompute_lgxx_stencil_1_read[4] = bank_0[addr5];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_bank_selector.out==0) begin
        op_hcompute_lgxx_stencil_1_read[5] = bank_0[addr6];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_bank_selector.out==0) begin
        op_hcompute_lgxx_stencil_1_read[6] = bank_0[addr7];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_bank_selector.out==0) begin
        op_hcompute_lgxx_stencil_1_read[7] = bank_0[addr8];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_bank_selector.out==0) begin
        op_hcompute_lgxx_stencil_1_read[8] = bank_0[addr9];
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_bank_selector.out==1) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_1[addr1];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_bank_selector.out==1) begin
        op_hcompute_lgxx_stencil_1_read[1] = bank_1[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_bank_selector.out==1) begin
        op_hcompute_lgxx_stencil_1_read[2] = bank_1[addr3];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_bank_selector.out==1) begin
        op_hcompute_lgxx_stencil_1_read[3] = bank_1[addr4];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_bank_selector.out==1) begin
        op_hcompute_lgxx_stencil_1_read[4] = bank_1[addr5];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_bank_selector.out==1) begin
        op_hcompute_lgxx_stencil_1_read[5] = bank_1[addr6];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_bank_selector.out==1) begin
        op_hcompute_lgxx_stencil_1_read[6] = bank_1[addr7];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_bank_selector.out==1) begin
        op_hcompute_lgxx_stencil_1_read[7] = bank_1[addr8];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_bank_selector.out==1) begin
        op_hcompute_lgxx_stencil_1_read[8] = bank_1[addr9];
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_bank_selector.out==2) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_2[addr1];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_bank_selector.out==2) begin
        op_hcompute_lgxx_stencil_1_read[1] = bank_2[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_bank_selector.out==2) begin
        op_hcompute_lgxx_stencil_1_read[2] = bank_2[addr3];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_bank_selector.out==2) begin
        op_hcompute_lgxx_stencil_1_read[3] = bank_2[addr4];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_bank_selector.out==2) begin
        op_hcompute_lgxx_stencil_1_read[4] = bank_2[addr5];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_bank_selector.out==2) begin
        op_hcompute_lgxx_stencil_1_read[5] = bank_2[addr6];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_bank_selector.out==2) begin
        op_hcompute_lgxx_stencil_1_read[6] = bank_2[addr7];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_bank_selector.out==2) begin
        op_hcompute_lgxx_stencil_1_read[7] = bank_2[addr8];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_bank_selector.out==2) begin
        op_hcompute_lgxx_stencil_1_read[8] = bank_2[addr9];
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_bank_selector.out==3) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_3[addr1];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_bank_selector.out==3) begin
        op_hcompute_lgxx_stencil_1_read[1] = bank_3[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_bank_selector.out==3) begin
        op_hcompute_lgxx_stencil_1_read[2] = bank_3[addr3];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_bank_selector.out==3) begin
        op_hcompute_lgxx_stencil_1_read[3] = bank_3[addr4];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_bank_selector.out==3) begin
        op_hcompute_lgxx_stencil_1_read[4] = bank_3[addr5];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_bank_selector.out==3) begin
        op_hcompute_lgxx_stencil_1_read[5] = bank_3[addr6];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_bank_selector.out==3) begin
        op_hcompute_lgxx_stencil_1_read[6] = bank_3[addr7];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_bank_selector.out==3) begin
        op_hcompute_lgxx_stencil_1_read[7] = bank_3[addr8];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_bank_selector.out==3) begin
        op_hcompute_lgxx_stencil_1_read[8] = bank_3[addr9];
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_bank_selector.out==4) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_4[addr1];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_bank_selector.out==4) begin
        op_hcompute_lgxx_stencil_1_read[1] = bank_4[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_bank_selector.out==4) begin
        op_hcompute_lgxx_stencil_1_read[2] = bank_4[addr3];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_bank_selector.out==4) begin
        op_hcompute_lgxx_stencil_1_read[3] = bank_4[addr4];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_bank_selector.out==4) begin
        op_hcompute_lgxx_stencil_1_read[4] = bank_4[addr5];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_bank_selector.out==4) begin
        op_hcompute_lgxx_stencil_1_read[5] = bank_4[addr6];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_bank_selector.out==4) begin
        op_hcompute_lgxx_stencil_1_read[6] = bank_4[addr7];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_bank_selector.out==4) begin
        op_hcompute_lgxx_stencil_1_read[7] = bank_4[addr8];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_bank_selector.out==4) begin
        op_hcompute_lgxx_stencil_1_read[8] = bank_4[addr9];
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_bank_selector.out==5) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_5[addr1];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_bank_selector.out==5) begin
        op_hcompute_lgxx_stencil_1_read[1] = bank_5[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_bank_selector.out==5) begin
        op_hcompute_lgxx_stencil_1_read[2] = bank_5[addr3];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_bank_selector.out==5) begin
        op_hcompute_lgxx_stencil_1_read[3] = bank_5[addr4];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_bank_selector.out==5) begin
        op_hcompute_lgxx_stencil_1_read[4] = bank_5[addr5];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_bank_selector.out==5) begin
        op_hcompute_lgxx_stencil_1_read[5] = bank_5[addr6];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_bank_selector.out==5) begin
        op_hcompute_lgxx_stencil_1_read[6] = bank_5[addr7];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_bank_selector.out==5) begin
        op_hcompute_lgxx_stencil_1_read[7] = bank_5[addr8];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_bank_selector.out==5) begin
        op_hcompute_lgxx_stencil_1_read[8] = bank_5[addr9];
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_bank_selector.out==6) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_6[addr1];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_bank_selector.out==6) begin
        op_hcompute_lgxx_stencil_1_read[1] = bank_6[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_bank_selector.out==6) begin
        op_hcompute_lgxx_stencil_1_read[2] = bank_6[addr3];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_bank_selector.out==6) begin
        op_hcompute_lgxx_stencil_1_read[3] = bank_6[addr4];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_bank_selector.out==6) begin
        op_hcompute_lgxx_stencil_1_read[4] = bank_6[addr5];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_bank_selector.out==6) begin
        op_hcompute_lgxx_stencil_1_read[5] = bank_6[addr6];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_bank_selector.out==6) begin
        op_hcompute_lgxx_stencil_1_read[6] = bank_6[addr7];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_bank_selector.out==6) begin
        op_hcompute_lgxx_stencil_1_read[7] = bank_6[addr8];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_bank_selector.out==6) begin
        op_hcompute_lgxx_stencil_1_read[8] = bank_6[addr9];
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_bank_selector.out==7) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_7[addr1];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_bank_selector.out==7) begin
        op_hcompute_lgxx_stencil_1_read[1] = bank_7[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_bank_selector.out==7) begin
        op_hcompute_lgxx_stencil_1_read[2] = bank_7[addr3];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_bank_selector.out==7) begin
        op_hcompute_lgxx_stencil_1_read[3] = bank_7[addr4];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_bank_selector.out==7) begin
        op_hcompute_lgxx_stencil_1_read[4] = bank_7[addr5];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_bank_selector.out==7) begin
        op_hcompute_lgxx_stencil_1_read[5] = bank_7[addr6];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_bank_selector.out==7) begin
        op_hcompute_lgxx_stencil_1_read[6] = bank_7[addr7];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_bank_selector.out==7) begin
        op_hcompute_lgxx_stencil_1_read[7] = bank_7[addr8];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_bank_selector.out==7) begin
        op_hcompute_lgxx_stencil_1_read[8] = bank_7[addr9];
    end
    if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_35_bank_selector.out==8) begin
        op_hcompute_lgxx_stencil_1_read[0] = bank_8[addr1];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_36_bank_selector.out==8) begin
        op_hcompute_lgxx_stencil_1_read[1] = bank_8[addr2];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_37_bank_selector.out==8) begin
        op_hcompute_lgxx_stencil_1_read[2] = bank_8[addr3];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_38_bank_selector.out==8) begin
        op_hcompute_lgxx_stencil_1_read[3] = bank_8[addr4];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_39_bank_selector.out==8) begin
        op_hcompute_lgxx_stencil_1_read[4] = bank_8[addr5];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_40_bank_selector.out==8) begin
        op_hcompute_lgxx_stencil_1_read[5] = bank_8[addr6];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_41_bank_selector.out==8) begin
        op_hcompute_lgxx_stencil_1_read[6] = bank_8[addr7];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_42_bank_selector.out==8) begin
        op_hcompute_lgxx_stencil_1_read[7] = bank_8[addr8];
    end
    else if (op_hcompute_lgxx_stencil_1_read_ren_fsm_out &&lxx_stencil_lxx_stencil_op_hcompute_lgxx_stencil_1_43_bank_selector.out==8) begin
        op_hcompute_lgxx_stencil_1_read[8] = bank_8[addr9];
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
    if (op_hcompute_lxy_stencil_write_wen_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector.out==0) begin
        bank_0[addr0] <= op_hcompute_lxy_stencil_write[0];
    end
    if (op_hcompute_lxy_stencil_write_wen_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector.out==1) begin
        bank_1[addr0] <= op_hcompute_lxy_stencil_write[0];
    end
    if (op_hcompute_lxy_stencil_write_wen_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector.out==2) begin
        bank_2[addr0] <= op_hcompute_lxy_stencil_write[0];
    end
    if (op_hcompute_lxy_stencil_write_wen_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector.out==3) begin
        bank_3[addr0] <= op_hcompute_lxy_stencil_write[0];
    end
    if (op_hcompute_lxy_stencil_write_wen_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector.out==4) begin
        bank_4[addr0] <= op_hcompute_lxy_stencil_write[0];
    end
    if (op_hcompute_lxy_stencil_write_wen_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector.out==5) begin
        bank_5[addr0] <= op_hcompute_lxy_stencil_write[0];
    end
    if (op_hcompute_lxy_stencil_write_wen_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector.out==6) begin
        bank_6[addr0] <= op_hcompute_lxy_stencil_write[0];
    end
    if (op_hcompute_lxy_stencil_write_wen_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector.out==7) begin
        bank_7[addr0] <= op_hcompute_lxy_stencil_write[0];
    end
    if (op_hcompute_lxy_stencil_write_wen_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_4_bank_selector.out==8) begin
        bank_8[addr0] <= op_hcompute_lxy_stencil_write[0];
    end
  end
  always @(*) begin
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_bank_selector.out==0) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_0[addr1];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_bank_selector.out==0) begin
        op_hcompute_lgxy_stencil_1_read[1] = bank_0[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_bank_selector.out==0) begin
        op_hcompute_lgxy_stencil_1_read[2] = bank_0[addr3];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_bank_selector.out==0) begin
        op_hcompute_lgxy_stencil_1_read[3] = bank_0[addr4];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_bank_selector.out==0) begin
        op_hcompute_lgxy_stencil_1_read[4] = bank_0[addr5];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_bank_selector.out==0) begin
        op_hcompute_lgxy_stencil_1_read[5] = bank_0[addr6];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_bank_selector.out==0) begin
        op_hcompute_lgxy_stencil_1_read[6] = bank_0[addr7];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_bank_selector.out==0) begin
        op_hcompute_lgxy_stencil_1_read[7] = bank_0[addr8];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_bank_selector.out==0) begin
        op_hcompute_lgxy_stencil_1_read[8] = bank_0[addr9];
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_bank_selector.out==1) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_1[addr1];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_bank_selector.out==1) begin
        op_hcompute_lgxy_stencil_1_read[1] = bank_1[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_bank_selector.out==1) begin
        op_hcompute_lgxy_stencil_1_read[2] = bank_1[addr3];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_bank_selector.out==1) begin
        op_hcompute_lgxy_stencil_1_read[3] = bank_1[addr4];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_bank_selector.out==1) begin
        op_hcompute_lgxy_stencil_1_read[4] = bank_1[addr5];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_bank_selector.out==1) begin
        op_hcompute_lgxy_stencil_1_read[5] = bank_1[addr6];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_bank_selector.out==1) begin
        op_hcompute_lgxy_stencil_1_read[6] = bank_1[addr7];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_bank_selector.out==1) begin
        op_hcompute_lgxy_stencil_1_read[7] = bank_1[addr8];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_bank_selector.out==1) begin
        op_hcompute_lgxy_stencil_1_read[8] = bank_1[addr9];
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_bank_selector.out==2) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_2[addr1];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_bank_selector.out==2) begin
        op_hcompute_lgxy_stencil_1_read[1] = bank_2[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_bank_selector.out==2) begin
        op_hcompute_lgxy_stencil_1_read[2] = bank_2[addr3];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_bank_selector.out==2) begin
        op_hcompute_lgxy_stencil_1_read[3] = bank_2[addr4];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_bank_selector.out==2) begin
        op_hcompute_lgxy_stencil_1_read[4] = bank_2[addr5];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_bank_selector.out==2) begin
        op_hcompute_lgxy_stencil_1_read[5] = bank_2[addr6];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_bank_selector.out==2) begin
        op_hcompute_lgxy_stencil_1_read[6] = bank_2[addr7];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_bank_selector.out==2) begin
        op_hcompute_lgxy_stencil_1_read[7] = bank_2[addr8];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_bank_selector.out==2) begin
        op_hcompute_lgxy_stencil_1_read[8] = bank_2[addr9];
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_bank_selector.out==3) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_3[addr1];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_bank_selector.out==3) begin
        op_hcompute_lgxy_stencil_1_read[1] = bank_3[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_bank_selector.out==3) begin
        op_hcompute_lgxy_stencil_1_read[2] = bank_3[addr3];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_bank_selector.out==3) begin
        op_hcompute_lgxy_stencil_1_read[3] = bank_3[addr4];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_bank_selector.out==3) begin
        op_hcompute_lgxy_stencil_1_read[4] = bank_3[addr5];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_bank_selector.out==3) begin
        op_hcompute_lgxy_stencil_1_read[5] = bank_3[addr6];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_bank_selector.out==3) begin
        op_hcompute_lgxy_stencil_1_read[6] = bank_3[addr7];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_bank_selector.out==3) begin
        op_hcompute_lgxy_stencil_1_read[7] = bank_3[addr8];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_bank_selector.out==3) begin
        op_hcompute_lgxy_stencil_1_read[8] = bank_3[addr9];
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_bank_selector.out==4) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_4[addr1];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_bank_selector.out==4) begin
        op_hcompute_lgxy_stencil_1_read[1] = bank_4[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_bank_selector.out==4) begin
        op_hcompute_lgxy_stencil_1_read[2] = bank_4[addr3];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_bank_selector.out==4) begin
        op_hcompute_lgxy_stencil_1_read[3] = bank_4[addr4];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_bank_selector.out==4) begin
        op_hcompute_lgxy_stencil_1_read[4] = bank_4[addr5];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_bank_selector.out==4) begin
        op_hcompute_lgxy_stencil_1_read[5] = bank_4[addr6];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_bank_selector.out==4) begin
        op_hcompute_lgxy_stencil_1_read[6] = bank_4[addr7];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_bank_selector.out==4) begin
        op_hcompute_lgxy_stencil_1_read[7] = bank_4[addr8];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_bank_selector.out==4) begin
        op_hcompute_lgxy_stencil_1_read[8] = bank_4[addr9];
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_bank_selector.out==5) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_5[addr1];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_bank_selector.out==5) begin
        op_hcompute_lgxy_stencil_1_read[1] = bank_5[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_bank_selector.out==5) begin
        op_hcompute_lgxy_stencil_1_read[2] = bank_5[addr3];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_bank_selector.out==5) begin
        op_hcompute_lgxy_stencil_1_read[3] = bank_5[addr4];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_bank_selector.out==5) begin
        op_hcompute_lgxy_stencil_1_read[4] = bank_5[addr5];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_bank_selector.out==5) begin
        op_hcompute_lgxy_stencil_1_read[5] = bank_5[addr6];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_bank_selector.out==5) begin
        op_hcompute_lgxy_stencil_1_read[6] = bank_5[addr7];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_bank_selector.out==5) begin
        op_hcompute_lgxy_stencil_1_read[7] = bank_5[addr8];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_bank_selector.out==5) begin
        op_hcompute_lgxy_stencil_1_read[8] = bank_5[addr9];
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_bank_selector.out==6) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_6[addr1];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_bank_selector.out==6) begin
        op_hcompute_lgxy_stencil_1_read[1] = bank_6[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_bank_selector.out==6) begin
        op_hcompute_lgxy_stencil_1_read[2] = bank_6[addr3];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_bank_selector.out==6) begin
        op_hcompute_lgxy_stencil_1_read[3] = bank_6[addr4];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_bank_selector.out==6) begin
        op_hcompute_lgxy_stencil_1_read[4] = bank_6[addr5];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_bank_selector.out==6) begin
        op_hcompute_lgxy_stencil_1_read[5] = bank_6[addr6];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_bank_selector.out==6) begin
        op_hcompute_lgxy_stencil_1_read[6] = bank_6[addr7];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_bank_selector.out==6) begin
        op_hcompute_lgxy_stencil_1_read[7] = bank_6[addr8];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_bank_selector.out==6) begin
        op_hcompute_lgxy_stencil_1_read[8] = bank_6[addr9];
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_bank_selector.out==7) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_7[addr1];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_bank_selector.out==7) begin
        op_hcompute_lgxy_stencil_1_read[1] = bank_7[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_bank_selector.out==7) begin
        op_hcompute_lgxy_stencil_1_read[2] = bank_7[addr3];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_bank_selector.out==7) begin
        op_hcompute_lgxy_stencil_1_read[3] = bank_7[addr4];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_bank_selector.out==7) begin
        op_hcompute_lgxy_stencil_1_read[4] = bank_7[addr5];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_bank_selector.out==7) begin
        op_hcompute_lgxy_stencil_1_read[5] = bank_7[addr6];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_bank_selector.out==7) begin
        op_hcompute_lgxy_stencil_1_read[6] = bank_7[addr7];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_bank_selector.out==7) begin
        op_hcompute_lgxy_stencil_1_read[7] = bank_7[addr8];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_bank_selector.out==7) begin
        op_hcompute_lgxy_stencil_1_read[8] = bank_7[addr9];
    end
    if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_23_bank_selector.out==8) begin
        op_hcompute_lgxy_stencil_1_read[0] = bank_8[addr1];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_24_bank_selector.out==8) begin
        op_hcompute_lgxy_stencil_1_read[1] = bank_8[addr2];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_25_bank_selector.out==8) begin
        op_hcompute_lgxy_stencil_1_read[2] = bank_8[addr3];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_26_bank_selector.out==8) begin
        op_hcompute_lgxy_stencil_1_read[3] = bank_8[addr4];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_27_bank_selector.out==8) begin
        op_hcompute_lgxy_stencil_1_read[4] = bank_8[addr5];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_28_bank_selector.out==8) begin
        op_hcompute_lgxy_stencil_1_read[5] = bank_8[addr6];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_29_bank_selector.out==8) begin
        op_hcompute_lgxy_stencil_1_read[6] = bank_8[addr7];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_30_bank_selector.out==8) begin
        op_hcompute_lgxy_stencil_1_read[7] = bank_8[addr8];
    end
    else if (op_hcompute_lgxy_stencil_1_read_ren_fsm_out &&lxy_stencil_lxy_stencil_op_hcompute_lgxy_stencil_1_31_bank_selector.out==8) begin
        op_hcompute_lgxy_stencil_1_read[8] = bank_8[addr9];
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
    if (op_hcompute_lyy_stencil_write_wen_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector.out==0) begin
        bank_0[addr0] <= op_hcompute_lyy_stencil_write[0];
    end
    if (op_hcompute_lyy_stencil_write_wen_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector.out==1) begin
        bank_1[addr0] <= op_hcompute_lyy_stencil_write[0];
    end
    if (op_hcompute_lyy_stencil_write_wen_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector.out==2) begin
        bank_2[addr0] <= op_hcompute_lyy_stencil_write[0];
    end
    if (op_hcompute_lyy_stencil_write_wen_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector.out==3) begin
        bank_3[addr0] <= op_hcompute_lyy_stencil_write[0];
    end
    if (op_hcompute_lyy_stencil_write_wen_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector.out==4) begin
        bank_4[addr0] <= op_hcompute_lyy_stencil_write[0];
    end
    if (op_hcompute_lyy_stencil_write_wen_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector.out==5) begin
        bank_5[addr0] <= op_hcompute_lyy_stencil_write[0];
    end
    if (op_hcompute_lyy_stencil_write_wen_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector.out==6) begin
        bank_6[addr0] <= op_hcompute_lyy_stencil_write[0];
    end
    if (op_hcompute_lyy_stencil_write_wen_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector.out==7) begin
        bank_7[addr0] <= op_hcompute_lyy_stencil_write[0];
    end
    if (op_hcompute_lyy_stencil_write_wen_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_2_bank_selector.out==8) begin
        bank_8[addr0] <= op_hcompute_lyy_stencil_write[0];
    end
  end
  always @(*) begin
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_bank_selector.out==0) begin
        op_hcompute_lgyy_stencil_1_read[0] = bank_0[addr1];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_bank_selector.out==0) begin
        op_hcompute_lgyy_stencil_1_read[1] = bank_0[addr2];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_bank_selector.out==0) begin
        op_hcompute_lgyy_stencil_1_read[2] = bank_0[addr3];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_bank_selector.out==0) begin
        op_hcompute_lgyy_stencil_1_read[3] = bank_0[addr4];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_bank_selector.out==0) begin
        op_hcompute_lgyy_stencil_1_read[4] = bank_0[addr5];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_bank_selector.out==0) begin
        op_hcompute_lgyy_stencil_1_read[5] = bank_0[addr6];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_bank_selector.out==0) begin
        op_hcompute_lgyy_stencil_1_read[6] = bank_0[addr7];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_bank_selector.out==0) begin
        op_hcompute_lgyy_stencil_1_read[7] = bank_0[addr8];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_bank_selector.out==0) begin
        op_hcompute_lgyy_stencil_1_read[8] = bank_0[addr9];
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_bank_selector.out==1) begin
        op_hcompute_lgyy_stencil_1_read[0] = bank_1[addr1];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_bank_selector.out==1) begin
        op_hcompute_lgyy_stencil_1_read[1] = bank_1[addr2];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_bank_selector.out==1) begin
        op_hcompute_lgyy_stencil_1_read[2] = bank_1[addr3];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_bank_selector.out==1) begin
        op_hcompute_lgyy_stencil_1_read[3] = bank_1[addr4];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_bank_selector.out==1) begin
        op_hcompute_lgyy_stencil_1_read[4] = bank_1[addr5];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_bank_selector.out==1) begin
        op_hcompute_lgyy_stencil_1_read[5] = bank_1[addr6];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_bank_selector.out==1) begin
        op_hcompute_lgyy_stencil_1_read[6] = bank_1[addr7];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_bank_selector.out==1) begin
        op_hcompute_lgyy_stencil_1_read[7] = bank_1[addr8];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_bank_selector.out==1) begin
        op_hcompute_lgyy_stencil_1_read[8] = bank_1[addr9];
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_bank_selector.out==2) begin
        op_hcompute_lgyy_stencil_1_read[0] = bank_2[addr1];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_bank_selector.out==2) begin
        op_hcompute_lgyy_stencil_1_read[1] = bank_2[addr2];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_bank_selector.out==2) begin
        op_hcompute_lgyy_stencil_1_read[2] = bank_2[addr3];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_bank_selector.out==2) begin
        op_hcompute_lgyy_stencil_1_read[3] = bank_2[addr4];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_bank_selector.out==2) begin
        op_hcompute_lgyy_stencil_1_read[4] = bank_2[addr5];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_bank_selector.out==2) begin
        op_hcompute_lgyy_stencil_1_read[5] = bank_2[addr6];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_bank_selector.out==2) begin
        op_hcompute_lgyy_stencil_1_read[6] = bank_2[addr7];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_bank_selector.out==2) begin
        op_hcompute_lgyy_stencil_1_read[7] = bank_2[addr8];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_bank_selector.out==2) begin
        op_hcompute_lgyy_stencil_1_read[8] = bank_2[addr9];
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_bank_selector.out==3) begin
        op_hcompute_lgyy_stencil_1_read[0] = bank_3[addr1];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_bank_selector.out==3) begin
        op_hcompute_lgyy_stencil_1_read[1] = bank_3[addr2];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_bank_selector.out==3) begin
        op_hcompute_lgyy_stencil_1_read[2] = bank_3[addr3];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_bank_selector.out==3) begin
        op_hcompute_lgyy_stencil_1_read[3] = bank_3[addr4];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_bank_selector.out==3) begin
        op_hcompute_lgyy_stencil_1_read[4] = bank_3[addr5];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_bank_selector.out==3) begin
        op_hcompute_lgyy_stencil_1_read[5] = bank_3[addr6];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_bank_selector.out==3) begin
        op_hcompute_lgyy_stencil_1_read[6] = bank_3[addr7];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_bank_selector.out==3) begin
        op_hcompute_lgyy_stencil_1_read[7] = bank_3[addr8];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_bank_selector.out==3) begin
        op_hcompute_lgyy_stencil_1_read[8] = bank_3[addr9];
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_bank_selector.out==4) begin
        op_hcompute_lgyy_stencil_1_read[0] = bank_4[addr1];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_bank_selector.out==4) begin
        op_hcompute_lgyy_stencil_1_read[1] = bank_4[addr2];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_bank_selector.out==4) begin
        op_hcompute_lgyy_stencil_1_read[2] = bank_4[addr3];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_bank_selector.out==4) begin
        op_hcompute_lgyy_stencil_1_read[3] = bank_4[addr4];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_bank_selector.out==4) begin
        op_hcompute_lgyy_stencil_1_read[4] = bank_4[addr5];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_bank_selector.out==4) begin
        op_hcompute_lgyy_stencil_1_read[5] = bank_4[addr6];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_bank_selector.out==4) begin
        op_hcompute_lgyy_stencil_1_read[6] = bank_4[addr7];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_bank_selector.out==4) begin
        op_hcompute_lgyy_stencil_1_read[7] = bank_4[addr8];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_bank_selector.out==4) begin
        op_hcompute_lgyy_stencil_1_read[8] = bank_4[addr9];
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_bank_selector.out==5) begin
        op_hcompute_lgyy_stencil_1_read[0] = bank_5[addr1];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_bank_selector.out==5) begin
        op_hcompute_lgyy_stencil_1_read[1] = bank_5[addr2];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_bank_selector.out==5) begin
        op_hcompute_lgyy_stencil_1_read[2] = bank_5[addr3];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_bank_selector.out==5) begin
        op_hcompute_lgyy_stencil_1_read[3] = bank_5[addr4];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_bank_selector.out==5) begin
        op_hcompute_lgyy_stencil_1_read[4] = bank_5[addr5];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_bank_selector.out==5) begin
        op_hcompute_lgyy_stencil_1_read[5] = bank_5[addr6];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_bank_selector.out==5) begin
        op_hcompute_lgyy_stencil_1_read[6] = bank_5[addr7];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_bank_selector.out==5) begin
        op_hcompute_lgyy_stencil_1_read[7] = bank_5[addr8];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_bank_selector.out==5) begin
        op_hcompute_lgyy_stencil_1_read[8] = bank_5[addr9];
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_bank_selector.out==6) begin
        op_hcompute_lgyy_stencil_1_read[0] = bank_6[addr1];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_bank_selector.out==6) begin
        op_hcompute_lgyy_stencil_1_read[1] = bank_6[addr2];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_bank_selector.out==6) begin
        op_hcompute_lgyy_stencil_1_read[2] = bank_6[addr3];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_bank_selector.out==6) begin
        op_hcompute_lgyy_stencil_1_read[3] = bank_6[addr4];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_bank_selector.out==6) begin
        op_hcompute_lgyy_stencil_1_read[4] = bank_6[addr5];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_bank_selector.out==6) begin
        op_hcompute_lgyy_stencil_1_read[5] = bank_6[addr6];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_bank_selector.out==6) begin
        op_hcompute_lgyy_stencil_1_read[6] = bank_6[addr7];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_bank_selector.out==6) begin
        op_hcompute_lgyy_stencil_1_read[7] = bank_6[addr8];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_bank_selector.out==6) begin
        op_hcompute_lgyy_stencil_1_read[8] = bank_6[addr9];
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_bank_selector.out==7) begin
        op_hcompute_lgyy_stencil_1_read[0] = bank_7[addr1];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_bank_selector.out==7) begin
        op_hcompute_lgyy_stencil_1_read[1] = bank_7[addr2];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_bank_selector.out==7) begin
        op_hcompute_lgyy_stencil_1_read[2] = bank_7[addr3];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_bank_selector.out==7) begin
        op_hcompute_lgyy_stencil_1_read[3] = bank_7[addr4];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_bank_selector.out==7) begin
        op_hcompute_lgyy_stencil_1_read[4] = bank_7[addr5];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_bank_selector.out==7) begin
        op_hcompute_lgyy_stencil_1_read[5] = bank_7[addr6];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_bank_selector.out==7) begin
        op_hcompute_lgyy_stencil_1_read[6] = bank_7[addr7];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_bank_selector.out==7) begin
        op_hcompute_lgyy_stencil_1_read[7] = bank_7[addr8];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_bank_selector.out==7) begin
        op_hcompute_lgyy_stencil_1_read[8] = bank_7[addr9];
    end
    if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_11_bank_selector.out==8) begin
        op_hcompute_lgyy_stencil_1_read[0] = bank_8[addr1];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_12_bank_selector.out==8) begin
        op_hcompute_lgyy_stencil_1_read[1] = bank_8[addr2];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_13_bank_selector.out==8) begin
        op_hcompute_lgyy_stencil_1_read[2] = bank_8[addr3];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_14_bank_selector.out==8) begin
        op_hcompute_lgyy_stencil_1_read[3] = bank_8[addr4];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_15_bank_selector.out==8) begin
        op_hcompute_lgyy_stencil_1_read[4] = bank_8[addr5];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_16_bank_selector.out==8) begin
        op_hcompute_lgyy_stencil_1_read[5] = bank_8[addr6];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_17_bank_selector.out==8) begin
        op_hcompute_lgyy_stencil_1_read[6] = bank_8[addr7];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_18_bank_selector.out==8) begin
        op_hcompute_lgyy_stencil_1_read[7] = bank_8[addr8];
    end
    else if (op_hcompute_lgyy_stencil_1_read_ren_fsm_out &&lyy_stencil_lyy_stencil_op_hcompute_lgyy_stencil_1_19_bank_selector.out==8) begin
        op_hcompute_lgyy_stencil_1_read[8] = bank_8[addr9];
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

  always @(posedge clk) begin
    out <= storage[read_addr];
  end

endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

  always @(posedge clk) begin
    out <= storage[read_addr];
  end

endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

  always @(posedge clk) begin
    out <= storage[read_addr];
  end

endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
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

  always @(posedge clk) begin
    out <= storage[read_addr];
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
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==0) begin
        bank_0[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==1) begin
        bank_1[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==2) begin
        bank_2[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==3) begin
        bank_3[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==4) begin
        bank_4[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==5) begin
        bank_5[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==6) begin
        bank_6[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==7) begin
        bank_7[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==8) begin
        bank_8[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==9) begin
        bank_9[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==10) begin
        bank_10[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==11) begin
        bank_11[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==12) begin
        bank_12[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==13) begin
        bank_13[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==14) begin
        bank_14[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==15) begin
        bank_15[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==16) begin
        bank_16[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==17) begin
        bank_17[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==18) begin
        bank_18[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==19) begin
        bank_19[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==20) begin
        bank_20[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==21) begin
        bank_21[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==22) begin
        bank_22[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==23) begin
        bank_23[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==24) begin
        bank_24[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==25) begin
        bank_25[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==26) begin
        bank_26[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==27) begin
        bank_27[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==28) begin
        bank_28[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==29) begin
        bank_29[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==30) begin
        bank_30[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==31) begin
        bank_31[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==32) begin
        bank_32[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==33) begin
        bank_33[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==34) begin
        bank_34[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==35) begin
        bank_35[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==36) begin
        bank_36[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==37) begin
        bank_37[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==38) begin
        bank_38[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==39) begin
        bank_39[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==40) begin
        bank_40[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==41) begin
        bank_41[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==42) begin
        bank_42[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==43) begin
        bank_43[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==44) begin
        bank_44[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==45) begin
        bank_45[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==46) begin
        bank_46[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==47) begin
        bank_47[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==48) begin
        bank_48[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==49) begin
        bank_49[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==50) begin
        bank_50[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==51) begin
        bank_51[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==52) begin
        bank_52[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==53) begin
        bank_53[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==54) begin
        bank_54[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==55) begin
        bank_55[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==56) begin
        bank_56[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==57) begin
        bank_57[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==58) begin
        bank_58[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==59) begin
        bank_59[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==60) begin
        bank_60[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==61) begin
        bank_61[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==62) begin
        bank_62[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==63) begin
        bank_63[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==64) begin
        bank_64[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==65) begin
        bank_65[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==66) begin
        bank_66[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==67) begin
        bank_67[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==68) begin
        bank_68[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==69) begin
        bank_69[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==70) begin
        bank_70[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==71) begin
        bank_71[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==72) begin
        bank_72[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==73) begin
        bank_73[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==74) begin
        bank_74[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==75) begin
        bank_75[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==76) begin
        bank_76[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==77) begin
        bank_77[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==78) begin
        bank_78[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==79) begin
        bank_79[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==80) begin
        bank_80[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==81) begin
        bank_81[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==82) begin
        bank_82[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==83) begin
        bank_83[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==84) begin
        bank_84[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==85) begin
        bank_85[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==86) begin
        bank_86[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==87) begin
        bank_87[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==88) begin
        bank_88[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==89) begin
        bank_89[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==90) begin
        bank_90[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==91) begin
        bank_91[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==92) begin
        bank_92[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==93) begin
        bank_93[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==94) begin
        bank_94[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==95) begin
        bank_95[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==96) begin
        bank_96[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==97) begin
        bank_97[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==98) begin
        bank_98[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==99) begin
        bank_99[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==100) begin
        bank_100[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==101) begin
        bank_101[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==102) begin
        bank_102[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==103) begin
        bank_103[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==104) begin
        bank_104[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==105) begin
        bank_105[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==106) begin
        bank_106[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==107) begin
        bank_107[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==108) begin
        bank_108[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==109) begin
        bank_109[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==110) begin
        bank_110[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==111) begin
        bank_111[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==112) begin
        bank_112[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==113) begin
        bank_113[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==114) begin
        bank_114[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==115) begin
        bank_115[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==116) begin
        bank_116[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==117) begin
        bank_117[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==118) begin
        bank_118[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==119) begin
        bank_119[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==120) begin
        bank_120[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==121) begin
        bank_121[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==122) begin
        bank_122[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==123) begin
        bank_123[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==124) begin
        bank_124[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==125) begin
        bank_125[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==126) begin
        bank_126[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==127) begin
        bank_127[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==128) begin
        bank_128[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==129) begin
        bank_129[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==130) begin
        bank_130[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==131) begin
        bank_131[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==132) begin
        bank_132[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==133) begin
        bank_133[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==134) begin
        bank_134[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==135) begin
        bank_135[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==136) begin
        bank_136[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==137) begin
        bank_137[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==138) begin
        bank_138[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==139) begin
        bank_139[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==140) begin
        bank_140[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==141) begin
        bank_141[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==142) begin
        bank_142[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==143) begin
        bank_143[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==144) begin
        bank_144[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==145) begin
        bank_145[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==146) begin
        bank_146[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==147) begin
        bank_147[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==148) begin
        bank_148[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==149) begin
        bank_149[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==150) begin
        bank_150[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==151) begin
        bank_151[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==152) begin
        bank_152[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==153) begin
        bank_153[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==154) begin
        bank_154[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==155) begin
        bank_155[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==156) begin
        bank_156[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==157) begin
        bank_157[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==158) begin
        bank_158[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==159) begin
        bank_159[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==160) begin
        bank_160[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==161) begin
        bank_161[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==162) begin
        bank_162[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==163) begin
        bank_163[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==164) begin
        bank_164[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==165) begin
        bank_165[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==166) begin
        bank_166[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==167) begin
        bank_167[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==168) begin
        bank_168[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==169) begin
        bank_169[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==170) begin
        bank_170[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==171) begin
        bank_171[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==172) begin
        bank_172[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==173) begin
        bank_173[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==174) begin
        bank_174[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==175) begin
        bank_175[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==176) begin
        bank_176[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==177) begin
        bank_177[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==178) begin
        bank_178[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==179) begin
        bank_179[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==180) begin
        bank_180[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==181) begin
        bank_181[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==182) begin
        bank_182[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==183) begin
        bank_183[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==184) begin
        bank_184[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==185) begin
        bank_185[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==186) begin
        bank_186[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==187) begin
        bank_187[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==188) begin
        bank_188[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==189) begin
        bank_189[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==190) begin
        bank_190[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==191) begin
        bank_191[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==192) begin
        bank_192[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==193) begin
        bank_193[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==194) begin
        bank_194[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==195) begin
        bank_195[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==196) begin
        bank_196[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==197) begin
        bank_197[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==198) begin
        bank_198[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==199) begin
        bank_199[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==200) begin
        bank_200[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==201) begin
        bank_201[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==202) begin
        bank_202[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==203) begin
        bank_203[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==204) begin
        bank_204[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==205) begin
        bank_205[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==206) begin
        bank_206[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==207) begin
        bank_207[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==208) begin
        bank_208[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==209) begin
        bank_209[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==210) begin
        bank_210[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==211) begin
        bank_211[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==212) begin
        bank_212[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==213) begin
        bank_213[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==214) begin
        bank_214[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==215) begin
        bank_215[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==216) begin
        bank_216[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==217) begin
        bank_217[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==218) begin
        bank_218[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==219) begin
        bank_219[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==220) begin
        bank_220[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==221) begin
        bank_221[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==222) begin
        bank_222[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==223) begin
        bank_223[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==224) begin
        bank_224[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==225) begin
        bank_225[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==226) begin
        bank_226[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==227) begin
        bank_227[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==228) begin
        bank_228[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==229) begin
        bank_229[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==230) begin
        bank_230[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==231) begin
        bank_231[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==232) begin
        bank_232[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==233) begin
        bank_233[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==234) begin
        bank_234[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==235) begin
        bank_235[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==236) begin
        bank_236[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==237) begin
        bank_237[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==238) begin
        bank_238[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==239) begin
        bank_239[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==240) begin
        bank_240[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==241) begin
        bank_241[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==242) begin
        bank_242[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==243) begin
        bank_243[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==244) begin
        bank_244[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==245) begin
        bank_245[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==246) begin
        bank_246[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out==247) begin
        bank_247[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
    end
  end
  always @(*) begin
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==0) begin
        op_hcompute_grad_x_stencil_read[0] = bank_0[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==0) begin
        op_hcompute_grad_x_stencil_read[1] = bank_0[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==0) begin
        op_hcompute_grad_x_stencil_read[2] = bank_0[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==0) begin
        op_hcompute_grad_x_stencil_read[3] = bank_0[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==0) begin
        op_hcompute_grad_x_stencil_read[4] = bank_0[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==0) begin
        op_hcompute_grad_x_stencil_read[5] = bank_0[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==0) begin
        op_hcompute_grad_y_stencil_read[1] = bank_0[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==0) begin
        op_hcompute_grad_y_stencil_read[5] = bank_0[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==1) begin
        op_hcompute_grad_x_stencil_read[0] = bank_1[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==1) begin
        op_hcompute_grad_x_stencil_read[1] = bank_1[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==1) begin
        op_hcompute_grad_x_stencil_read[2] = bank_1[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==1) begin
        op_hcompute_grad_x_stencil_read[3] = bank_1[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==1) begin
        op_hcompute_grad_x_stencil_read[4] = bank_1[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==1) begin
        op_hcompute_grad_x_stencil_read[5] = bank_1[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==1) begin
        op_hcompute_grad_y_stencil_read[1] = bank_1[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==1) begin
        op_hcompute_grad_y_stencil_read[5] = bank_1[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==2) begin
        op_hcompute_grad_x_stencil_read[0] = bank_2[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==2) begin
        op_hcompute_grad_x_stencil_read[1] = bank_2[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==2) begin
        op_hcompute_grad_x_stencil_read[2] = bank_2[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==2) begin
        op_hcompute_grad_x_stencil_read[3] = bank_2[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==2) begin
        op_hcompute_grad_x_stencil_read[4] = bank_2[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==2) begin
        op_hcompute_grad_x_stencil_read[5] = bank_2[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==2) begin
        op_hcompute_grad_y_stencil_read[1] = bank_2[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==2) begin
        op_hcompute_grad_y_stencil_read[5] = bank_2[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==3) begin
        op_hcompute_grad_x_stencil_read[0] = bank_3[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==3) begin
        op_hcompute_grad_x_stencil_read[1] = bank_3[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==3) begin
        op_hcompute_grad_x_stencil_read[2] = bank_3[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==3) begin
        op_hcompute_grad_x_stencil_read[3] = bank_3[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==3) begin
        op_hcompute_grad_x_stencil_read[4] = bank_3[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==3) begin
        op_hcompute_grad_x_stencil_read[5] = bank_3[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==3) begin
        op_hcompute_grad_y_stencil_read[1] = bank_3[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==3) begin
        op_hcompute_grad_y_stencil_read[5] = bank_3[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==4) begin
        op_hcompute_grad_x_stencil_read[0] = bank_4[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==4) begin
        op_hcompute_grad_x_stencil_read[1] = bank_4[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==4) begin
        op_hcompute_grad_x_stencil_read[2] = bank_4[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==4) begin
        op_hcompute_grad_x_stencil_read[3] = bank_4[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==4) begin
        op_hcompute_grad_x_stencil_read[4] = bank_4[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==4) begin
        op_hcompute_grad_x_stencil_read[5] = bank_4[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==4) begin
        op_hcompute_grad_y_stencil_read[1] = bank_4[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==4) begin
        op_hcompute_grad_y_stencil_read[5] = bank_4[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==5) begin
        op_hcompute_grad_x_stencil_read[0] = bank_5[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==5) begin
        op_hcompute_grad_x_stencil_read[1] = bank_5[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==5) begin
        op_hcompute_grad_x_stencil_read[2] = bank_5[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==5) begin
        op_hcompute_grad_x_stencil_read[3] = bank_5[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==5) begin
        op_hcompute_grad_x_stencil_read[4] = bank_5[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==5) begin
        op_hcompute_grad_x_stencil_read[5] = bank_5[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==5) begin
        op_hcompute_grad_y_stencil_read[1] = bank_5[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==5) begin
        op_hcompute_grad_y_stencil_read[5] = bank_5[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==6) begin
        op_hcompute_grad_x_stencil_read[0] = bank_6[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==6) begin
        op_hcompute_grad_x_stencil_read[1] = bank_6[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==6) begin
        op_hcompute_grad_x_stencil_read[2] = bank_6[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==6) begin
        op_hcompute_grad_x_stencil_read[3] = bank_6[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==6) begin
        op_hcompute_grad_x_stencil_read[4] = bank_6[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==6) begin
        op_hcompute_grad_x_stencil_read[5] = bank_6[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==6) begin
        op_hcompute_grad_y_stencil_read[1] = bank_6[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==6) begin
        op_hcompute_grad_y_stencil_read[5] = bank_6[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==7) begin
        op_hcompute_grad_x_stencil_read[0] = bank_7[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==7) begin
        op_hcompute_grad_x_stencil_read[1] = bank_7[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==7) begin
        op_hcompute_grad_x_stencil_read[2] = bank_7[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==7) begin
        op_hcompute_grad_x_stencil_read[3] = bank_7[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==7) begin
        op_hcompute_grad_x_stencil_read[4] = bank_7[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==7) begin
        op_hcompute_grad_x_stencil_read[5] = bank_7[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==7) begin
        op_hcompute_grad_y_stencil_read[1] = bank_7[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==7) begin
        op_hcompute_grad_y_stencil_read[5] = bank_7[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==8) begin
        op_hcompute_grad_x_stencil_read[0] = bank_8[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==8) begin
        op_hcompute_grad_x_stencil_read[1] = bank_8[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==8) begin
        op_hcompute_grad_x_stencil_read[2] = bank_8[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==8) begin
        op_hcompute_grad_x_stencil_read[3] = bank_8[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==8) begin
        op_hcompute_grad_x_stencil_read[4] = bank_8[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==8) begin
        op_hcompute_grad_x_stencil_read[5] = bank_8[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==8) begin
        op_hcompute_grad_y_stencil_read[1] = bank_8[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==8) begin
        op_hcompute_grad_y_stencil_read[5] = bank_8[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==9) begin
        op_hcompute_grad_x_stencil_read[0] = bank_9[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==9) begin
        op_hcompute_grad_x_stencil_read[1] = bank_9[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==9) begin
        op_hcompute_grad_x_stencil_read[2] = bank_9[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==9) begin
        op_hcompute_grad_x_stencil_read[3] = bank_9[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==9) begin
        op_hcompute_grad_x_stencil_read[4] = bank_9[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==9) begin
        op_hcompute_grad_x_stencil_read[5] = bank_9[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==9) begin
        op_hcompute_grad_y_stencil_read[1] = bank_9[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==9) begin
        op_hcompute_grad_y_stencil_read[5] = bank_9[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==10) begin
        op_hcompute_grad_x_stencil_read[0] = bank_10[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==10) begin
        op_hcompute_grad_x_stencil_read[1] = bank_10[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==10) begin
        op_hcompute_grad_x_stencil_read[2] = bank_10[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==10) begin
        op_hcompute_grad_x_stencil_read[3] = bank_10[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==10) begin
        op_hcompute_grad_x_stencil_read[4] = bank_10[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==10) begin
        op_hcompute_grad_x_stencil_read[5] = bank_10[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==10) begin
        op_hcompute_grad_y_stencil_read[1] = bank_10[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==10) begin
        op_hcompute_grad_y_stencil_read[5] = bank_10[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==11) begin
        op_hcompute_grad_x_stencil_read[0] = bank_11[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==11) begin
        op_hcompute_grad_x_stencil_read[1] = bank_11[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==11) begin
        op_hcompute_grad_x_stencil_read[2] = bank_11[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==11) begin
        op_hcompute_grad_x_stencil_read[3] = bank_11[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==11) begin
        op_hcompute_grad_x_stencil_read[4] = bank_11[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==11) begin
        op_hcompute_grad_x_stencil_read[5] = bank_11[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==11) begin
        op_hcompute_grad_y_stencil_read[1] = bank_11[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==11) begin
        op_hcompute_grad_y_stencil_read[5] = bank_11[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==12) begin
        op_hcompute_grad_x_stencil_read[0] = bank_12[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==12) begin
        op_hcompute_grad_x_stencil_read[1] = bank_12[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==12) begin
        op_hcompute_grad_x_stencil_read[2] = bank_12[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==12) begin
        op_hcompute_grad_x_stencil_read[3] = bank_12[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==12) begin
        op_hcompute_grad_x_stencil_read[4] = bank_12[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==12) begin
        op_hcompute_grad_x_stencil_read[5] = bank_12[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==12) begin
        op_hcompute_grad_y_stencil_read[1] = bank_12[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==12) begin
        op_hcompute_grad_y_stencil_read[5] = bank_12[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==13) begin
        op_hcompute_grad_x_stencil_read[0] = bank_13[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==13) begin
        op_hcompute_grad_x_stencil_read[1] = bank_13[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==13) begin
        op_hcompute_grad_x_stencil_read[2] = bank_13[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==13) begin
        op_hcompute_grad_x_stencil_read[3] = bank_13[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==13) begin
        op_hcompute_grad_x_stencil_read[4] = bank_13[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==13) begin
        op_hcompute_grad_x_stencil_read[5] = bank_13[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==13) begin
        op_hcompute_grad_y_stencil_read[1] = bank_13[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==13) begin
        op_hcompute_grad_y_stencil_read[5] = bank_13[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==14) begin
        op_hcompute_grad_x_stencil_read[0] = bank_14[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==14) begin
        op_hcompute_grad_x_stencil_read[1] = bank_14[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==14) begin
        op_hcompute_grad_x_stencil_read[2] = bank_14[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==14) begin
        op_hcompute_grad_x_stencil_read[3] = bank_14[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==14) begin
        op_hcompute_grad_x_stencil_read[4] = bank_14[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==14) begin
        op_hcompute_grad_x_stencil_read[5] = bank_14[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==14) begin
        op_hcompute_grad_y_stencil_read[1] = bank_14[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==14) begin
        op_hcompute_grad_y_stencil_read[5] = bank_14[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==15) begin
        op_hcompute_grad_x_stencil_read[0] = bank_15[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==15) begin
        op_hcompute_grad_x_stencil_read[1] = bank_15[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==15) begin
        op_hcompute_grad_x_stencil_read[2] = bank_15[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==15) begin
        op_hcompute_grad_x_stencil_read[3] = bank_15[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==15) begin
        op_hcompute_grad_x_stencil_read[4] = bank_15[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==15) begin
        op_hcompute_grad_x_stencil_read[5] = bank_15[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==15) begin
        op_hcompute_grad_y_stencil_read[1] = bank_15[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==15) begin
        op_hcompute_grad_y_stencil_read[5] = bank_15[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==16) begin
        op_hcompute_grad_x_stencil_read[0] = bank_16[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==16) begin
        op_hcompute_grad_x_stencil_read[1] = bank_16[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==16) begin
        op_hcompute_grad_x_stencil_read[2] = bank_16[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==16) begin
        op_hcompute_grad_x_stencil_read[3] = bank_16[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==16) begin
        op_hcompute_grad_x_stencil_read[4] = bank_16[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==16) begin
        op_hcompute_grad_x_stencil_read[5] = bank_16[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==16) begin
        op_hcompute_grad_y_stencil_read[1] = bank_16[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==16) begin
        op_hcompute_grad_y_stencil_read[5] = bank_16[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==17) begin
        op_hcompute_grad_x_stencil_read[0] = bank_17[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==17) begin
        op_hcompute_grad_x_stencil_read[1] = bank_17[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==17) begin
        op_hcompute_grad_x_stencil_read[2] = bank_17[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==17) begin
        op_hcompute_grad_x_stencil_read[3] = bank_17[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==17) begin
        op_hcompute_grad_x_stencil_read[4] = bank_17[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==17) begin
        op_hcompute_grad_x_stencil_read[5] = bank_17[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==17) begin
        op_hcompute_grad_y_stencil_read[1] = bank_17[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==17) begin
        op_hcompute_grad_y_stencil_read[5] = bank_17[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==18) begin
        op_hcompute_grad_x_stencil_read[0] = bank_18[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==18) begin
        op_hcompute_grad_x_stencil_read[1] = bank_18[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==18) begin
        op_hcompute_grad_x_stencil_read[2] = bank_18[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==18) begin
        op_hcompute_grad_x_stencil_read[3] = bank_18[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==18) begin
        op_hcompute_grad_x_stencil_read[4] = bank_18[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==18) begin
        op_hcompute_grad_x_stencil_read[5] = bank_18[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==18) begin
        op_hcompute_grad_y_stencil_read[1] = bank_18[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==18) begin
        op_hcompute_grad_y_stencil_read[5] = bank_18[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==19) begin
        op_hcompute_grad_x_stencil_read[0] = bank_19[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==19) begin
        op_hcompute_grad_x_stencil_read[1] = bank_19[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==19) begin
        op_hcompute_grad_x_stencil_read[2] = bank_19[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==19) begin
        op_hcompute_grad_x_stencil_read[3] = bank_19[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==19) begin
        op_hcompute_grad_x_stencil_read[4] = bank_19[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==19) begin
        op_hcompute_grad_x_stencil_read[5] = bank_19[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==19) begin
        op_hcompute_grad_y_stencil_read[1] = bank_19[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==19) begin
        op_hcompute_grad_y_stencil_read[5] = bank_19[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==20) begin
        op_hcompute_grad_x_stencil_read[0] = bank_20[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==20) begin
        op_hcompute_grad_x_stencil_read[1] = bank_20[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==20) begin
        op_hcompute_grad_x_stencil_read[2] = bank_20[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==20) begin
        op_hcompute_grad_x_stencil_read[3] = bank_20[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==20) begin
        op_hcompute_grad_x_stencil_read[4] = bank_20[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==20) begin
        op_hcompute_grad_x_stencil_read[5] = bank_20[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==20) begin
        op_hcompute_grad_y_stencil_read[1] = bank_20[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==20) begin
        op_hcompute_grad_y_stencil_read[5] = bank_20[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==21) begin
        op_hcompute_grad_x_stencil_read[0] = bank_21[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==21) begin
        op_hcompute_grad_x_stencil_read[1] = bank_21[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==21) begin
        op_hcompute_grad_x_stencil_read[2] = bank_21[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==21) begin
        op_hcompute_grad_x_stencil_read[3] = bank_21[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==21) begin
        op_hcompute_grad_x_stencil_read[4] = bank_21[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==21) begin
        op_hcompute_grad_x_stencil_read[5] = bank_21[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==21) begin
        op_hcompute_grad_y_stencil_read[1] = bank_21[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==21) begin
        op_hcompute_grad_y_stencil_read[5] = bank_21[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==22) begin
        op_hcompute_grad_x_stencil_read[0] = bank_22[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==22) begin
        op_hcompute_grad_x_stencil_read[1] = bank_22[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==22) begin
        op_hcompute_grad_x_stencil_read[2] = bank_22[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==22) begin
        op_hcompute_grad_x_stencil_read[3] = bank_22[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==22) begin
        op_hcompute_grad_x_stencil_read[4] = bank_22[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==22) begin
        op_hcompute_grad_x_stencil_read[5] = bank_22[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==22) begin
        op_hcompute_grad_y_stencil_read[1] = bank_22[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==22) begin
        op_hcompute_grad_y_stencil_read[5] = bank_22[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==23) begin
        op_hcompute_grad_x_stencil_read[0] = bank_23[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==23) begin
        op_hcompute_grad_x_stencil_read[1] = bank_23[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==23) begin
        op_hcompute_grad_x_stencil_read[2] = bank_23[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==23) begin
        op_hcompute_grad_x_stencil_read[3] = bank_23[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==23) begin
        op_hcompute_grad_x_stencil_read[4] = bank_23[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==23) begin
        op_hcompute_grad_x_stencil_read[5] = bank_23[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==23) begin
        op_hcompute_grad_y_stencil_read[1] = bank_23[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==23) begin
        op_hcompute_grad_y_stencil_read[5] = bank_23[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==24) begin
        op_hcompute_grad_x_stencil_read[0] = bank_24[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==24) begin
        op_hcompute_grad_x_stencil_read[1] = bank_24[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==24) begin
        op_hcompute_grad_x_stencil_read[2] = bank_24[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==24) begin
        op_hcompute_grad_x_stencil_read[3] = bank_24[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==24) begin
        op_hcompute_grad_x_stencil_read[4] = bank_24[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==24) begin
        op_hcompute_grad_x_stencil_read[5] = bank_24[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==24) begin
        op_hcompute_grad_y_stencil_read[1] = bank_24[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==24) begin
        op_hcompute_grad_y_stencil_read[5] = bank_24[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==25) begin
        op_hcompute_grad_x_stencil_read[0] = bank_25[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==25) begin
        op_hcompute_grad_x_stencil_read[1] = bank_25[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==25) begin
        op_hcompute_grad_x_stencil_read[2] = bank_25[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==25) begin
        op_hcompute_grad_x_stencil_read[3] = bank_25[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==25) begin
        op_hcompute_grad_x_stencil_read[4] = bank_25[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==25) begin
        op_hcompute_grad_x_stencil_read[5] = bank_25[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==25) begin
        op_hcompute_grad_y_stencil_read[1] = bank_25[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==25) begin
        op_hcompute_grad_y_stencil_read[5] = bank_25[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==26) begin
        op_hcompute_grad_x_stencil_read[0] = bank_26[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==26) begin
        op_hcompute_grad_x_stencil_read[1] = bank_26[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==26) begin
        op_hcompute_grad_x_stencil_read[2] = bank_26[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==26) begin
        op_hcompute_grad_x_stencil_read[3] = bank_26[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==26) begin
        op_hcompute_grad_x_stencil_read[4] = bank_26[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==26) begin
        op_hcompute_grad_x_stencil_read[5] = bank_26[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==26) begin
        op_hcompute_grad_y_stencil_read[1] = bank_26[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==26) begin
        op_hcompute_grad_y_stencil_read[5] = bank_26[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==27) begin
        op_hcompute_grad_x_stencil_read[0] = bank_27[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==27) begin
        op_hcompute_grad_x_stencil_read[1] = bank_27[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==27) begin
        op_hcompute_grad_x_stencil_read[2] = bank_27[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==27) begin
        op_hcompute_grad_x_stencil_read[3] = bank_27[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==27) begin
        op_hcompute_grad_x_stencil_read[4] = bank_27[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==27) begin
        op_hcompute_grad_x_stencil_read[5] = bank_27[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==27) begin
        op_hcompute_grad_y_stencil_read[1] = bank_27[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==27) begin
        op_hcompute_grad_y_stencil_read[5] = bank_27[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==28) begin
        op_hcompute_grad_x_stencil_read[0] = bank_28[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==28) begin
        op_hcompute_grad_x_stencil_read[1] = bank_28[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==28) begin
        op_hcompute_grad_x_stencil_read[2] = bank_28[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==28) begin
        op_hcompute_grad_x_stencil_read[3] = bank_28[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==28) begin
        op_hcompute_grad_x_stencil_read[4] = bank_28[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==28) begin
        op_hcompute_grad_x_stencil_read[5] = bank_28[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==28) begin
        op_hcompute_grad_y_stencil_read[1] = bank_28[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==28) begin
        op_hcompute_grad_y_stencil_read[5] = bank_28[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==29) begin
        op_hcompute_grad_x_stencil_read[0] = bank_29[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==29) begin
        op_hcompute_grad_x_stencil_read[1] = bank_29[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==29) begin
        op_hcompute_grad_x_stencil_read[2] = bank_29[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==29) begin
        op_hcompute_grad_x_stencil_read[3] = bank_29[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==29) begin
        op_hcompute_grad_x_stencil_read[4] = bank_29[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==29) begin
        op_hcompute_grad_x_stencil_read[5] = bank_29[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==29) begin
        op_hcompute_grad_y_stencil_read[1] = bank_29[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==29) begin
        op_hcompute_grad_y_stencil_read[5] = bank_29[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==30) begin
        op_hcompute_grad_x_stencil_read[0] = bank_30[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==30) begin
        op_hcompute_grad_x_stencil_read[1] = bank_30[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==30) begin
        op_hcompute_grad_x_stencil_read[2] = bank_30[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==30) begin
        op_hcompute_grad_x_stencil_read[3] = bank_30[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==30) begin
        op_hcompute_grad_x_stencil_read[4] = bank_30[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==30) begin
        op_hcompute_grad_x_stencil_read[5] = bank_30[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==30) begin
        op_hcompute_grad_y_stencil_read[1] = bank_30[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==30) begin
        op_hcompute_grad_y_stencil_read[5] = bank_30[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==31) begin
        op_hcompute_grad_x_stencil_read[0] = bank_31[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==31) begin
        op_hcompute_grad_x_stencil_read[1] = bank_31[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==31) begin
        op_hcompute_grad_x_stencil_read[2] = bank_31[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==31) begin
        op_hcompute_grad_x_stencil_read[3] = bank_31[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==31) begin
        op_hcompute_grad_x_stencil_read[4] = bank_31[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==31) begin
        op_hcompute_grad_x_stencil_read[5] = bank_31[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==31) begin
        op_hcompute_grad_y_stencil_read[1] = bank_31[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==31) begin
        op_hcompute_grad_y_stencil_read[5] = bank_31[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==32) begin
        op_hcompute_grad_x_stencil_read[0] = bank_32[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==32) begin
        op_hcompute_grad_x_stencil_read[1] = bank_32[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==32) begin
        op_hcompute_grad_x_stencil_read[2] = bank_32[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==32) begin
        op_hcompute_grad_x_stencil_read[3] = bank_32[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==32) begin
        op_hcompute_grad_x_stencil_read[4] = bank_32[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==32) begin
        op_hcompute_grad_x_stencil_read[5] = bank_32[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==32) begin
        op_hcompute_grad_y_stencil_read[1] = bank_32[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==32) begin
        op_hcompute_grad_y_stencil_read[5] = bank_32[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==33) begin
        op_hcompute_grad_x_stencil_read[0] = bank_33[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==33) begin
        op_hcompute_grad_x_stencil_read[1] = bank_33[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==33) begin
        op_hcompute_grad_x_stencil_read[2] = bank_33[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==33) begin
        op_hcompute_grad_x_stencil_read[3] = bank_33[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==33) begin
        op_hcompute_grad_x_stencil_read[4] = bank_33[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==33) begin
        op_hcompute_grad_x_stencil_read[5] = bank_33[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==33) begin
        op_hcompute_grad_y_stencil_read[1] = bank_33[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==33) begin
        op_hcompute_grad_y_stencil_read[5] = bank_33[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==34) begin
        op_hcompute_grad_x_stencil_read[0] = bank_34[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==34) begin
        op_hcompute_grad_x_stencil_read[1] = bank_34[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==34) begin
        op_hcompute_grad_x_stencil_read[2] = bank_34[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==34) begin
        op_hcompute_grad_x_stencil_read[3] = bank_34[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==34) begin
        op_hcompute_grad_x_stencil_read[4] = bank_34[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==34) begin
        op_hcompute_grad_x_stencil_read[5] = bank_34[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==34) begin
        op_hcompute_grad_y_stencil_read[1] = bank_34[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==34) begin
        op_hcompute_grad_y_stencil_read[5] = bank_34[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==35) begin
        op_hcompute_grad_x_stencil_read[0] = bank_35[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==35) begin
        op_hcompute_grad_x_stencil_read[1] = bank_35[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==35) begin
        op_hcompute_grad_x_stencil_read[2] = bank_35[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==35) begin
        op_hcompute_grad_x_stencil_read[3] = bank_35[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==35) begin
        op_hcompute_grad_x_stencil_read[4] = bank_35[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==35) begin
        op_hcompute_grad_x_stencil_read[5] = bank_35[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==35) begin
        op_hcompute_grad_y_stencil_read[1] = bank_35[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==35) begin
        op_hcompute_grad_y_stencil_read[5] = bank_35[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==36) begin
        op_hcompute_grad_x_stencil_read[0] = bank_36[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==36) begin
        op_hcompute_grad_x_stencil_read[1] = bank_36[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==36) begin
        op_hcompute_grad_x_stencil_read[2] = bank_36[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==36) begin
        op_hcompute_grad_x_stencil_read[3] = bank_36[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==36) begin
        op_hcompute_grad_x_stencil_read[4] = bank_36[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==36) begin
        op_hcompute_grad_x_stencil_read[5] = bank_36[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==36) begin
        op_hcompute_grad_y_stencil_read[1] = bank_36[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==36) begin
        op_hcompute_grad_y_stencil_read[5] = bank_36[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==37) begin
        op_hcompute_grad_x_stencil_read[0] = bank_37[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==37) begin
        op_hcompute_grad_x_stencil_read[1] = bank_37[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==37) begin
        op_hcompute_grad_x_stencil_read[2] = bank_37[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==37) begin
        op_hcompute_grad_x_stencil_read[3] = bank_37[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==37) begin
        op_hcompute_grad_x_stencil_read[4] = bank_37[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==37) begin
        op_hcompute_grad_x_stencil_read[5] = bank_37[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==37) begin
        op_hcompute_grad_y_stencil_read[1] = bank_37[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==37) begin
        op_hcompute_grad_y_stencil_read[5] = bank_37[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==38) begin
        op_hcompute_grad_x_stencil_read[0] = bank_38[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==38) begin
        op_hcompute_grad_x_stencil_read[1] = bank_38[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==38) begin
        op_hcompute_grad_x_stencil_read[2] = bank_38[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==38) begin
        op_hcompute_grad_x_stencil_read[3] = bank_38[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==38) begin
        op_hcompute_grad_x_stencil_read[4] = bank_38[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==38) begin
        op_hcompute_grad_x_stencil_read[5] = bank_38[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==38) begin
        op_hcompute_grad_y_stencil_read[1] = bank_38[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==38) begin
        op_hcompute_grad_y_stencil_read[5] = bank_38[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==39) begin
        op_hcompute_grad_x_stencil_read[0] = bank_39[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==39) begin
        op_hcompute_grad_x_stencil_read[1] = bank_39[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==39) begin
        op_hcompute_grad_x_stencil_read[2] = bank_39[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==39) begin
        op_hcompute_grad_x_stencil_read[3] = bank_39[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==39) begin
        op_hcompute_grad_x_stencil_read[4] = bank_39[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==39) begin
        op_hcompute_grad_x_stencil_read[5] = bank_39[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==39) begin
        op_hcompute_grad_y_stencil_read[1] = bank_39[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==39) begin
        op_hcompute_grad_y_stencil_read[5] = bank_39[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==40) begin
        op_hcompute_grad_x_stencil_read[0] = bank_40[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==40) begin
        op_hcompute_grad_x_stencil_read[1] = bank_40[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==40) begin
        op_hcompute_grad_x_stencil_read[2] = bank_40[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==40) begin
        op_hcompute_grad_x_stencil_read[3] = bank_40[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==40) begin
        op_hcompute_grad_x_stencil_read[4] = bank_40[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==40) begin
        op_hcompute_grad_x_stencil_read[5] = bank_40[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==40) begin
        op_hcompute_grad_y_stencil_read[1] = bank_40[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==40) begin
        op_hcompute_grad_y_stencil_read[5] = bank_40[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==41) begin
        op_hcompute_grad_x_stencil_read[0] = bank_41[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==41) begin
        op_hcompute_grad_x_stencil_read[1] = bank_41[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==41) begin
        op_hcompute_grad_x_stencil_read[2] = bank_41[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==41) begin
        op_hcompute_grad_x_stencil_read[3] = bank_41[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==41) begin
        op_hcompute_grad_x_stencil_read[4] = bank_41[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==41) begin
        op_hcompute_grad_x_stencil_read[5] = bank_41[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==41) begin
        op_hcompute_grad_y_stencil_read[1] = bank_41[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==41) begin
        op_hcompute_grad_y_stencil_read[5] = bank_41[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==42) begin
        op_hcompute_grad_x_stencil_read[0] = bank_42[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==42) begin
        op_hcompute_grad_x_stencil_read[1] = bank_42[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==42) begin
        op_hcompute_grad_x_stencil_read[2] = bank_42[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==42) begin
        op_hcompute_grad_x_stencil_read[3] = bank_42[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==42) begin
        op_hcompute_grad_x_stencil_read[4] = bank_42[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==42) begin
        op_hcompute_grad_x_stencil_read[5] = bank_42[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==42) begin
        op_hcompute_grad_y_stencil_read[1] = bank_42[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==42) begin
        op_hcompute_grad_y_stencil_read[5] = bank_42[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==43) begin
        op_hcompute_grad_x_stencil_read[0] = bank_43[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==43) begin
        op_hcompute_grad_x_stencil_read[1] = bank_43[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==43) begin
        op_hcompute_grad_x_stencil_read[2] = bank_43[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==43) begin
        op_hcompute_grad_x_stencil_read[3] = bank_43[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==43) begin
        op_hcompute_grad_x_stencil_read[4] = bank_43[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==43) begin
        op_hcompute_grad_x_stencil_read[5] = bank_43[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==43) begin
        op_hcompute_grad_y_stencil_read[1] = bank_43[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==43) begin
        op_hcompute_grad_y_stencil_read[5] = bank_43[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==44) begin
        op_hcompute_grad_x_stencil_read[0] = bank_44[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==44) begin
        op_hcompute_grad_x_stencil_read[1] = bank_44[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==44) begin
        op_hcompute_grad_x_stencil_read[2] = bank_44[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==44) begin
        op_hcompute_grad_x_stencil_read[3] = bank_44[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==44) begin
        op_hcompute_grad_x_stencil_read[4] = bank_44[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==44) begin
        op_hcompute_grad_x_stencil_read[5] = bank_44[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==44) begin
        op_hcompute_grad_y_stencil_read[1] = bank_44[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==44) begin
        op_hcompute_grad_y_stencil_read[5] = bank_44[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==45) begin
        op_hcompute_grad_x_stencil_read[0] = bank_45[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==45) begin
        op_hcompute_grad_x_stencil_read[1] = bank_45[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==45) begin
        op_hcompute_grad_x_stencil_read[2] = bank_45[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==45) begin
        op_hcompute_grad_x_stencil_read[3] = bank_45[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==45) begin
        op_hcompute_grad_x_stencil_read[4] = bank_45[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==45) begin
        op_hcompute_grad_x_stencil_read[5] = bank_45[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==45) begin
        op_hcompute_grad_y_stencil_read[1] = bank_45[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==45) begin
        op_hcompute_grad_y_stencil_read[5] = bank_45[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==46) begin
        op_hcompute_grad_x_stencil_read[0] = bank_46[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==46) begin
        op_hcompute_grad_x_stencil_read[1] = bank_46[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==46) begin
        op_hcompute_grad_x_stencil_read[2] = bank_46[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==46) begin
        op_hcompute_grad_x_stencil_read[3] = bank_46[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==46) begin
        op_hcompute_grad_x_stencil_read[4] = bank_46[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==46) begin
        op_hcompute_grad_x_stencil_read[5] = bank_46[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==46) begin
        op_hcompute_grad_y_stencil_read[1] = bank_46[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==46) begin
        op_hcompute_grad_y_stencil_read[5] = bank_46[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==47) begin
        op_hcompute_grad_x_stencil_read[0] = bank_47[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==47) begin
        op_hcompute_grad_x_stencil_read[1] = bank_47[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==47) begin
        op_hcompute_grad_x_stencil_read[2] = bank_47[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==47) begin
        op_hcompute_grad_x_stencil_read[3] = bank_47[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==47) begin
        op_hcompute_grad_x_stencil_read[4] = bank_47[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==47) begin
        op_hcompute_grad_x_stencil_read[5] = bank_47[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==47) begin
        op_hcompute_grad_y_stencil_read[1] = bank_47[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==47) begin
        op_hcompute_grad_y_stencil_read[5] = bank_47[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==48) begin
        op_hcompute_grad_x_stencil_read[0] = bank_48[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==48) begin
        op_hcompute_grad_x_stencil_read[1] = bank_48[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==48) begin
        op_hcompute_grad_x_stencil_read[2] = bank_48[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==48) begin
        op_hcompute_grad_x_stencil_read[3] = bank_48[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==48) begin
        op_hcompute_grad_x_stencil_read[4] = bank_48[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==48) begin
        op_hcompute_grad_x_stencil_read[5] = bank_48[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==48) begin
        op_hcompute_grad_y_stencil_read[1] = bank_48[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==48) begin
        op_hcompute_grad_y_stencil_read[5] = bank_48[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==49) begin
        op_hcompute_grad_x_stencil_read[0] = bank_49[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==49) begin
        op_hcompute_grad_x_stencil_read[1] = bank_49[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==49) begin
        op_hcompute_grad_x_stencil_read[2] = bank_49[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==49) begin
        op_hcompute_grad_x_stencil_read[3] = bank_49[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==49) begin
        op_hcompute_grad_x_stencil_read[4] = bank_49[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==49) begin
        op_hcompute_grad_x_stencil_read[5] = bank_49[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==49) begin
        op_hcompute_grad_y_stencil_read[1] = bank_49[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==49) begin
        op_hcompute_grad_y_stencil_read[5] = bank_49[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==50) begin
        op_hcompute_grad_x_stencil_read[0] = bank_50[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==50) begin
        op_hcompute_grad_x_stencil_read[1] = bank_50[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==50) begin
        op_hcompute_grad_x_stencil_read[2] = bank_50[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==50) begin
        op_hcompute_grad_x_stencil_read[3] = bank_50[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==50) begin
        op_hcompute_grad_x_stencil_read[4] = bank_50[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==50) begin
        op_hcompute_grad_x_stencil_read[5] = bank_50[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==50) begin
        op_hcompute_grad_y_stencil_read[1] = bank_50[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==50) begin
        op_hcompute_grad_y_stencil_read[5] = bank_50[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==51) begin
        op_hcompute_grad_x_stencil_read[0] = bank_51[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==51) begin
        op_hcompute_grad_x_stencil_read[1] = bank_51[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==51) begin
        op_hcompute_grad_x_stencil_read[2] = bank_51[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==51) begin
        op_hcompute_grad_x_stencil_read[3] = bank_51[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==51) begin
        op_hcompute_grad_x_stencil_read[4] = bank_51[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==51) begin
        op_hcompute_grad_x_stencil_read[5] = bank_51[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==51) begin
        op_hcompute_grad_y_stencil_read[1] = bank_51[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==51) begin
        op_hcompute_grad_y_stencil_read[5] = bank_51[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==52) begin
        op_hcompute_grad_x_stencil_read[0] = bank_52[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==52) begin
        op_hcompute_grad_x_stencil_read[1] = bank_52[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==52) begin
        op_hcompute_grad_x_stencil_read[2] = bank_52[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==52) begin
        op_hcompute_grad_x_stencil_read[3] = bank_52[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==52) begin
        op_hcompute_grad_x_stencil_read[4] = bank_52[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==52) begin
        op_hcompute_grad_x_stencil_read[5] = bank_52[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==52) begin
        op_hcompute_grad_y_stencil_read[1] = bank_52[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==52) begin
        op_hcompute_grad_y_stencil_read[5] = bank_52[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==53) begin
        op_hcompute_grad_x_stencil_read[0] = bank_53[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==53) begin
        op_hcompute_grad_x_stencil_read[1] = bank_53[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==53) begin
        op_hcompute_grad_x_stencil_read[2] = bank_53[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==53) begin
        op_hcompute_grad_x_stencil_read[3] = bank_53[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==53) begin
        op_hcompute_grad_x_stencil_read[4] = bank_53[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==53) begin
        op_hcompute_grad_x_stencil_read[5] = bank_53[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==53) begin
        op_hcompute_grad_y_stencil_read[1] = bank_53[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==53) begin
        op_hcompute_grad_y_stencil_read[5] = bank_53[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==54) begin
        op_hcompute_grad_x_stencil_read[0] = bank_54[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==54) begin
        op_hcompute_grad_x_stencil_read[1] = bank_54[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==54) begin
        op_hcompute_grad_x_stencil_read[2] = bank_54[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==54) begin
        op_hcompute_grad_x_stencil_read[3] = bank_54[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==54) begin
        op_hcompute_grad_x_stencil_read[4] = bank_54[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==54) begin
        op_hcompute_grad_x_stencil_read[5] = bank_54[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==54) begin
        op_hcompute_grad_y_stencil_read[1] = bank_54[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==54) begin
        op_hcompute_grad_y_stencil_read[5] = bank_54[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==55) begin
        op_hcompute_grad_x_stencil_read[0] = bank_55[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==55) begin
        op_hcompute_grad_x_stencil_read[1] = bank_55[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==55) begin
        op_hcompute_grad_x_stencil_read[2] = bank_55[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==55) begin
        op_hcompute_grad_x_stencil_read[3] = bank_55[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==55) begin
        op_hcompute_grad_x_stencil_read[4] = bank_55[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==55) begin
        op_hcompute_grad_x_stencil_read[5] = bank_55[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==55) begin
        op_hcompute_grad_y_stencil_read[1] = bank_55[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==55) begin
        op_hcompute_grad_y_stencil_read[5] = bank_55[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==56) begin
        op_hcompute_grad_x_stencil_read[0] = bank_56[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==56) begin
        op_hcompute_grad_x_stencil_read[1] = bank_56[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==56) begin
        op_hcompute_grad_x_stencil_read[2] = bank_56[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==56) begin
        op_hcompute_grad_x_stencil_read[3] = bank_56[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==56) begin
        op_hcompute_grad_x_stencil_read[4] = bank_56[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==56) begin
        op_hcompute_grad_x_stencil_read[5] = bank_56[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==56) begin
        op_hcompute_grad_y_stencil_read[1] = bank_56[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==56) begin
        op_hcompute_grad_y_stencil_read[5] = bank_56[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==57) begin
        op_hcompute_grad_x_stencil_read[0] = bank_57[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==57) begin
        op_hcompute_grad_x_stencil_read[1] = bank_57[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==57) begin
        op_hcompute_grad_x_stencil_read[2] = bank_57[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==57) begin
        op_hcompute_grad_x_stencil_read[3] = bank_57[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==57) begin
        op_hcompute_grad_x_stencil_read[4] = bank_57[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==57) begin
        op_hcompute_grad_x_stencil_read[5] = bank_57[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==57) begin
        op_hcompute_grad_y_stencil_read[1] = bank_57[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==57) begin
        op_hcompute_grad_y_stencil_read[5] = bank_57[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==58) begin
        op_hcompute_grad_x_stencil_read[0] = bank_58[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==58) begin
        op_hcompute_grad_x_stencil_read[1] = bank_58[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==58) begin
        op_hcompute_grad_x_stencil_read[2] = bank_58[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==58) begin
        op_hcompute_grad_x_stencil_read[3] = bank_58[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==58) begin
        op_hcompute_grad_x_stencil_read[4] = bank_58[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==58) begin
        op_hcompute_grad_x_stencil_read[5] = bank_58[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==58) begin
        op_hcompute_grad_y_stencil_read[1] = bank_58[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==58) begin
        op_hcompute_grad_y_stencil_read[5] = bank_58[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==59) begin
        op_hcompute_grad_x_stencil_read[0] = bank_59[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==59) begin
        op_hcompute_grad_x_stencil_read[1] = bank_59[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==59) begin
        op_hcompute_grad_x_stencil_read[2] = bank_59[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==59) begin
        op_hcompute_grad_x_stencil_read[3] = bank_59[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==59) begin
        op_hcompute_grad_x_stencil_read[4] = bank_59[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==59) begin
        op_hcompute_grad_x_stencil_read[5] = bank_59[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==59) begin
        op_hcompute_grad_y_stencil_read[1] = bank_59[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==59) begin
        op_hcompute_grad_y_stencil_read[5] = bank_59[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==60) begin
        op_hcompute_grad_x_stencil_read[0] = bank_60[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==60) begin
        op_hcompute_grad_x_stencil_read[1] = bank_60[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==60) begin
        op_hcompute_grad_x_stencil_read[2] = bank_60[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==60) begin
        op_hcompute_grad_x_stencil_read[3] = bank_60[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==60) begin
        op_hcompute_grad_x_stencil_read[4] = bank_60[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==60) begin
        op_hcompute_grad_x_stencil_read[5] = bank_60[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==60) begin
        op_hcompute_grad_y_stencil_read[1] = bank_60[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==60) begin
        op_hcompute_grad_y_stencil_read[5] = bank_60[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==61) begin
        op_hcompute_grad_x_stencil_read[0] = bank_61[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==61) begin
        op_hcompute_grad_x_stencil_read[1] = bank_61[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==61) begin
        op_hcompute_grad_x_stencil_read[2] = bank_61[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==61) begin
        op_hcompute_grad_x_stencil_read[3] = bank_61[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==61) begin
        op_hcompute_grad_x_stencil_read[4] = bank_61[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==61) begin
        op_hcompute_grad_x_stencil_read[5] = bank_61[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==61) begin
        op_hcompute_grad_y_stencil_read[1] = bank_61[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==61) begin
        op_hcompute_grad_y_stencil_read[5] = bank_61[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==62) begin
        op_hcompute_grad_x_stencil_read[0] = bank_62[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==62) begin
        op_hcompute_grad_x_stencil_read[1] = bank_62[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==62) begin
        op_hcompute_grad_x_stencil_read[2] = bank_62[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==62) begin
        op_hcompute_grad_x_stencil_read[3] = bank_62[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==62) begin
        op_hcompute_grad_x_stencil_read[4] = bank_62[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==62) begin
        op_hcompute_grad_x_stencil_read[5] = bank_62[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==62) begin
        op_hcompute_grad_y_stencil_read[1] = bank_62[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==62) begin
        op_hcompute_grad_y_stencil_read[5] = bank_62[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==63) begin
        op_hcompute_grad_x_stencil_read[0] = bank_63[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==63) begin
        op_hcompute_grad_x_stencil_read[1] = bank_63[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==63) begin
        op_hcompute_grad_x_stencil_read[2] = bank_63[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==63) begin
        op_hcompute_grad_x_stencil_read[3] = bank_63[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==63) begin
        op_hcompute_grad_x_stencil_read[4] = bank_63[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==63) begin
        op_hcompute_grad_x_stencil_read[5] = bank_63[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==63) begin
        op_hcompute_grad_y_stencil_read[1] = bank_63[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==63) begin
        op_hcompute_grad_y_stencil_read[5] = bank_63[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==64) begin
        op_hcompute_grad_x_stencil_read[0] = bank_64[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==64) begin
        op_hcompute_grad_x_stencil_read[1] = bank_64[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==64) begin
        op_hcompute_grad_x_stencil_read[2] = bank_64[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==64) begin
        op_hcompute_grad_x_stencil_read[3] = bank_64[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==64) begin
        op_hcompute_grad_x_stencil_read[4] = bank_64[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==64) begin
        op_hcompute_grad_x_stencil_read[5] = bank_64[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==64) begin
        op_hcompute_grad_y_stencil_read[1] = bank_64[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==64) begin
        op_hcompute_grad_y_stencil_read[5] = bank_64[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==65) begin
        op_hcompute_grad_x_stencil_read[0] = bank_65[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==65) begin
        op_hcompute_grad_x_stencil_read[1] = bank_65[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==65) begin
        op_hcompute_grad_x_stencil_read[2] = bank_65[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==65) begin
        op_hcompute_grad_x_stencil_read[3] = bank_65[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==65) begin
        op_hcompute_grad_x_stencil_read[4] = bank_65[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==65) begin
        op_hcompute_grad_x_stencil_read[5] = bank_65[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==65) begin
        op_hcompute_grad_y_stencil_read[1] = bank_65[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==65) begin
        op_hcompute_grad_y_stencil_read[5] = bank_65[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==66) begin
        op_hcompute_grad_x_stencil_read[0] = bank_66[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==66) begin
        op_hcompute_grad_x_stencil_read[1] = bank_66[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==66) begin
        op_hcompute_grad_x_stencil_read[2] = bank_66[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==66) begin
        op_hcompute_grad_x_stencil_read[3] = bank_66[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==66) begin
        op_hcompute_grad_x_stencil_read[4] = bank_66[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==66) begin
        op_hcompute_grad_x_stencil_read[5] = bank_66[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==66) begin
        op_hcompute_grad_y_stencil_read[1] = bank_66[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==66) begin
        op_hcompute_grad_y_stencil_read[5] = bank_66[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==67) begin
        op_hcompute_grad_x_stencil_read[0] = bank_67[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==67) begin
        op_hcompute_grad_x_stencil_read[1] = bank_67[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==67) begin
        op_hcompute_grad_x_stencil_read[2] = bank_67[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==67) begin
        op_hcompute_grad_x_stencil_read[3] = bank_67[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==67) begin
        op_hcompute_grad_x_stencil_read[4] = bank_67[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==67) begin
        op_hcompute_grad_x_stencil_read[5] = bank_67[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==67) begin
        op_hcompute_grad_y_stencil_read[1] = bank_67[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==67) begin
        op_hcompute_grad_y_stencil_read[5] = bank_67[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==68) begin
        op_hcompute_grad_x_stencil_read[0] = bank_68[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==68) begin
        op_hcompute_grad_x_stencil_read[1] = bank_68[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==68) begin
        op_hcompute_grad_x_stencil_read[2] = bank_68[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==68) begin
        op_hcompute_grad_x_stencil_read[3] = bank_68[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==68) begin
        op_hcompute_grad_x_stencil_read[4] = bank_68[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==68) begin
        op_hcompute_grad_x_stencil_read[5] = bank_68[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==68) begin
        op_hcompute_grad_y_stencil_read[1] = bank_68[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==68) begin
        op_hcompute_grad_y_stencil_read[5] = bank_68[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==69) begin
        op_hcompute_grad_x_stencil_read[0] = bank_69[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==69) begin
        op_hcompute_grad_x_stencil_read[1] = bank_69[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==69) begin
        op_hcompute_grad_x_stencil_read[2] = bank_69[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==69) begin
        op_hcompute_grad_x_stencil_read[3] = bank_69[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==69) begin
        op_hcompute_grad_x_stencil_read[4] = bank_69[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==69) begin
        op_hcompute_grad_x_stencil_read[5] = bank_69[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==69) begin
        op_hcompute_grad_y_stencil_read[1] = bank_69[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==69) begin
        op_hcompute_grad_y_stencil_read[5] = bank_69[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==70) begin
        op_hcompute_grad_x_stencil_read[0] = bank_70[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==70) begin
        op_hcompute_grad_x_stencil_read[1] = bank_70[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==70) begin
        op_hcompute_grad_x_stencil_read[2] = bank_70[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==70) begin
        op_hcompute_grad_x_stencil_read[3] = bank_70[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==70) begin
        op_hcompute_grad_x_stencil_read[4] = bank_70[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==70) begin
        op_hcompute_grad_x_stencil_read[5] = bank_70[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==70) begin
        op_hcompute_grad_y_stencil_read[1] = bank_70[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==70) begin
        op_hcompute_grad_y_stencil_read[5] = bank_70[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==71) begin
        op_hcompute_grad_x_stencil_read[0] = bank_71[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==71) begin
        op_hcompute_grad_x_stencil_read[1] = bank_71[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==71) begin
        op_hcompute_grad_x_stencil_read[2] = bank_71[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==71) begin
        op_hcompute_grad_x_stencil_read[3] = bank_71[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==71) begin
        op_hcompute_grad_x_stencil_read[4] = bank_71[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==71) begin
        op_hcompute_grad_x_stencil_read[5] = bank_71[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==71) begin
        op_hcompute_grad_y_stencil_read[1] = bank_71[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==71) begin
        op_hcompute_grad_y_stencil_read[5] = bank_71[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==72) begin
        op_hcompute_grad_x_stencil_read[0] = bank_72[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==72) begin
        op_hcompute_grad_x_stencil_read[1] = bank_72[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==72) begin
        op_hcompute_grad_x_stencil_read[2] = bank_72[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==72) begin
        op_hcompute_grad_x_stencil_read[3] = bank_72[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==72) begin
        op_hcompute_grad_x_stencil_read[4] = bank_72[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==72) begin
        op_hcompute_grad_x_stencil_read[5] = bank_72[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==72) begin
        op_hcompute_grad_y_stencil_read[1] = bank_72[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==72) begin
        op_hcompute_grad_y_stencil_read[5] = bank_72[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==73) begin
        op_hcompute_grad_x_stencil_read[0] = bank_73[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==73) begin
        op_hcompute_grad_x_stencil_read[1] = bank_73[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==73) begin
        op_hcompute_grad_x_stencil_read[2] = bank_73[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==73) begin
        op_hcompute_grad_x_stencil_read[3] = bank_73[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==73) begin
        op_hcompute_grad_x_stencil_read[4] = bank_73[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==73) begin
        op_hcompute_grad_x_stencil_read[5] = bank_73[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==73) begin
        op_hcompute_grad_y_stencil_read[1] = bank_73[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==73) begin
        op_hcompute_grad_y_stencil_read[5] = bank_73[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==74) begin
        op_hcompute_grad_x_stencil_read[0] = bank_74[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==74) begin
        op_hcompute_grad_x_stencil_read[1] = bank_74[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==74) begin
        op_hcompute_grad_x_stencil_read[2] = bank_74[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==74) begin
        op_hcompute_grad_x_stencil_read[3] = bank_74[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==74) begin
        op_hcompute_grad_x_stencil_read[4] = bank_74[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==74) begin
        op_hcompute_grad_x_stencil_read[5] = bank_74[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==74) begin
        op_hcompute_grad_y_stencil_read[1] = bank_74[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==74) begin
        op_hcompute_grad_y_stencil_read[5] = bank_74[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==75) begin
        op_hcompute_grad_x_stencil_read[0] = bank_75[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==75) begin
        op_hcompute_grad_x_stencil_read[1] = bank_75[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==75) begin
        op_hcompute_grad_x_stencil_read[2] = bank_75[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==75) begin
        op_hcompute_grad_x_stencil_read[3] = bank_75[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==75) begin
        op_hcompute_grad_x_stencil_read[4] = bank_75[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==75) begin
        op_hcompute_grad_x_stencil_read[5] = bank_75[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==75) begin
        op_hcompute_grad_y_stencil_read[1] = bank_75[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==75) begin
        op_hcompute_grad_y_stencil_read[5] = bank_75[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==76) begin
        op_hcompute_grad_x_stencil_read[0] = bank_76[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==76) begin
        op_hcompute_grad_x_stencil_read[1] = bank_76[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==76) begin
        op_hcompute_grad_x_stencil_read[2] = bank_76[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==76) begin
        op_hcompute_grad_x_stencil_read[3] = bank_76[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==76) begin
        op_hcompute_grad_x_stencil_read[4] = bank_76[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==76) begin
        op_hcompute_grad_x_stencil_read[5] = bank_76[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==76) begin
        op_hcompute_grad_y_stencil_read[1] = bank_76[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==76) begin
        op_hcompute_grad_y_stencil_read[5] = bank_76[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==77) begin
        op_hcompute_grad_x_stencil_read[0] = bank_77[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==77) begin
        op_hcompute_grad_x_stencil_read[1] = bank_77[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==77) begin
        op_hcompute_grad_x_stencil_read[2] = bank_77[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==77) begin
        op_hcompute_grad_x_stencil_read[3] = bank_77[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==77) begin
        op_hcompute_grad_x_stencil_read[4] = bank_77[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==77) begin
        op_hcompute_grad_x_stencil_read[5] = bank_77[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==77) begin
        op_hcompute_grad_y_stencil_read[1] = bank_77[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==77) begin
        op_hcompute_grad_y_stencil_read[5] = bank_77[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==78) begin
        op_hcompute_grad_x_stencil_read[0] = bank_78[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==78) begin
        op_hcompute_grad_x_stencil_read[1] = bank_78[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==78) begin
        op_hcompute_grad_x_stencil_read[2] = bank_78[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==78) begin
        op_hcompute_grad_x_stencil_read[3] = bank_78[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==78) begin
        op_hcompute_grad_x_stencil_read[4] = bank_78[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==78) begin
        op_hcompute_grad_x_stencil_read[5] = bank_78[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==78) begin
        op_hcompute_grad_y_stencil_read[1] = bank_78[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==78) begin
        op_hcompute_grad_y_stencil_read[5] = bank_78[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==79) begin
        op_hcompute_grad_x_stencil_read[0] = bank_79[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==79) begin
        op_hcompute_grad_x_stencil_read[1] = bank_79[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==79) begin
        op_hcompute_grad_x_stencil_read[2] = bank_79[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==79) begin
        op_hcompute_grad_x_stencil_read[3] = bank_79[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==79) begin
        op_hcompute_grad_x_stencil_read[4] = bank_79[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==79) begin
        op_hcompute_grad_x_stencil_read[5] = bank_79[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==79) begin
        op_hcompute_grad_y_stencil_read[1] = bank_79[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==79) begin
        op_hcompute_grad_y_stencil_read[5] = bank_79[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==80) begin
        op_hcompute_grad_x_stencil_read[0] = bank_80[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==80) begin
        op_hcompute_grad_x_stencil_read[1] = bank_80[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==80) begin
        op_hcompute_grad_x_stencil_read[2] = bank_80[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==80) begin
        op_hcompute_grad_x_stencil_read[3] = bank_80[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==80) begin
        op_hcompute_grad_x_stencil_read[4] = bank_80[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==80) begin
        op_hcompute_grad_x_stencil_read[5] = bank_80[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==80) begin
        op_hcompute_grad_y_stencil_read[1] = bank_80[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==80) begin
        op_hcompute_grad_y_stencil_read[5] = bank_80[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==81) begin
        op_hcompute_grad_x_stencil_read[0] = bank_81[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==81) begin
        op_hcompute_grad_x_stencil_read[1] = bank_81[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==81) begin
        op_hcompute_grad_x_stencil_read[2] = bank_81[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==81) begin
        op_hcompute_grad_x_stencil_read[3] = bank_81[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==81) begin
        op_hcompute_grad_x_stencil_read[4] = bank_81[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==81) begin
        op_hcompute_grad_x_stencil_read[5] = bank_81[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==81) begin
        op_hcompute_grad_y_stencil_read[1] = bank_81[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==81) begin
        op_hcompute_grad_y_stencil_read[5] = bank_81[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==82) begin
        op_hcompute_grad_x_stencil_read[0] = bank_82[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==82) begin
        op_hcompute_grad_x_stencil_read[1] = bank_82[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==82) begin
        op_hcompute_grad_x_stencil_read[2] = bank_82[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==82) begin
        op_hcompute_grad_x_stencil_read[3] = bank_82[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==82) begin
        op_hcompute_grad_x_stencil_read[4] = bank_82[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==82) begin
        op_hcompute_grad_x_stencil_read[5] = bank_82[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==82) begin
        op_hcompute_grad_y_stencil_read[1] = bank_82[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==82) begin
        op_hcompute_grad_y_stencil_read[5] = bank_82[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==83) begin
        op_hcompute_grad_x_stencil_read[0] = bank_83[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==83) begin
        op_hcompute_grad_x_stencil_read[1] = bank_83[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==83) begin
        op_hcompute_grad_x_stencil_read[2] = bank_83[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==83) begin
        op_hcompute_grad_x_stencil_read[3] = bank_83[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==83) begin
        op_hcompute_grad_x_stencil_read[4] = bank_83[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==83) begin
        op_hcompute_grad_x_stencil_read[5] = bank_83[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==83) begin
        op_hcompute_grad_y_stencil_read[1] = bank_83[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==83) begin
        op_hcompute_grad_y_stencil_read[5] = bank_83[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==84) begin
        op_hcompute_grad_x_stencil_read[0] = bank_84[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==84) begin
        op_hcompute_grad_x_stencil_read[1] = bank_84[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==84) begin
        op_hcompute_grad_x_stencil_read[2] = bank_84[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==84) begin
        op_hcompute_grad_x_stencil_read[3] = bank_84[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==84) begin
        op_hcompute_grad_x_stencil_read[4] = bank_84[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==84) begin
        op_hcompute_grad_x_stencil_read[5] = bank_84[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==84) begin
        op_hcompute_grad_y_stencil_read[1] = bank_84[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==84) begin
        op_hcompute_grad_y_stencil_read[5] = bank_84[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==85) begin
        op_hcompute_grad_x_stencil_read[0] = bank_85[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==85) begin
        op_hcompute_grad_x_stencil_read[1] = bank_85[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==85) begin
        op_hcompute_grad_x_stencil_read[2] = bank_85[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==85) begin
        op_hcompute_grad_x_stencil_read[3] = bank_85[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==85) begin
        op_hcompute_grad_x_stencil_read[4] = bank_85[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==85) begin
        op_hcompute_grad_x_stencil_read[5] = bank_85[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==85) begin
        op_hcompute_grad_y_stencil_read[1] = bank_85[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==85) begin
        op_hcompute_grad_y_stencil_read[5] = bank_85[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==86) begin
        op_hcompute_grad_x_stencil_read[0] = bank_86[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==86) begin
        op_hcompute_grad_x_stencil_read[1] = bank_86[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==86) begin
        op_hcompute_grad_x_stencil_read[2] = bank_86[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==86) begin
        op_hcompute_grad_x_stencil_read[3] = bank_86[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==86) begin
        op_hcompute_grad_x_stencil_read[4] = bank_86[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==86) begin
        op_hcompute_grad_x_stencil_read[5] = bank_86[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==86) begin
        op_hcompute_grad_y_stencil_read[1] = bank_86[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==86) begin
        op_hcompute_grad_y_stencil_read[5] = bank_86[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==87) begin
        op_hcompute_grad_x_stencil_read[0] = bank_87[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==87) begin
        op_hcompute_grad_x_stencil_read[1] = bank_87[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==87) begin
        op_hcompute_grad_x_stencil_read[2] = bank_87[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==87) begin
        op_hcompute_grad_x_stencil_read[3] = bank_87[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==87) begin
        op_hcompute_grad_x_stencil_read[4] = bank_87[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==87) begin
        op_hcompute_grad_x_stencil_read[5] = bank_87[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==87) begin
        op_hcompute_grad_y_stencil_read[1] = bank_87[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==87) begin
        op_hcompute_grad_y_stencil_read[5] = bank_87[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==88) begin
        op_hcompute_grad_x_stencil_read[0] = bank_88[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==88) begin
        op_hcompute_grad_x_stencil_read[1] = bank_88[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==88) begin
        op_hcompute_grad_x_stencil_read[2] = bank_88[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==88) begin
        op_hcompute_grad_x_stencil_read[3] = bank_88[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==88) begin
        op_hcompute_grad_x_stencil_read[4] = bank_88[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==88) begin
        op_hcompute_grad_x_stencil_read[5] = bank_88[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==88) begin
        op_hcompute_grad_y_stencil_read[1] = bank_88[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==88) begin
        op_hcompute_grad_y_stencil_read[5] = bank_88[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==89) begin
        op_hcompute_grad_x_stencil_read[0] = bank_89[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==89) begin
        op_hcompute_grad_x_stencil_read[1] = bank_89[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==89) begin
        op_hcompute_grad_x_stencil_read[2] = bank_89[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==89) begin
        op_hcompute_grad_x_stencil_read[3] = bank_89[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==89) begin
        op_hcompute_grad_x_stencil_read[4] = bank_89[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==89) begin
        op_hcompute_grad_x_stencil_read[5] = bank_89[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==89) begin
        op_hcompute_grad_y_stencil_read[1] = bank_89[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==89) begin
        op_hcompute_grad_y_stencil_read[5] = bank_89[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==90) begin
        op_hcompute_grad_x_stencil_read[0] = bank_90[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==90) begin
        op_hcompute_grad_x_stencil_read[1] = bank_90[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==90) begin
        op_hcompute_grad_x_stencil_read[2] = bank_90[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==90) begin
        op_hcompute_grad_x_stencil_read[3] = bank_90[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==90) begin
        op_hcompute_grad_x_stencil_read[4] = bank_90[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==90) begin
        op_hcompute_grad_x_stencil_read[5] = bank_90[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==90) begin
        op_hcompute_grad_y_stencil_read[1] = bank_90[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==90) begin
        op_hcompute_grad_y_stencil_read[5] = bank_90[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==91) begin
        op_hcompute_grad_x_stencil_read[0] = bank_91[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==91) begin
        op_hcompute_grad_x_stencil_read[1] = bank_91[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==91) begin
        op_hcompute_grad_x_stencil_read[2] = bank_91[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==91) begin
        op_hcompute_grad_x_stencil_read[3] = bank_91[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==91) begin
        op_hcompute_grad_x_stencil_read[4] = bank_91[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==91) begin
        op_hcompute_grad_x_stencil_read[5] = bank_91[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==91) begin
        op_hcompute_grad_y_stencil_read[1] = bank_91[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==91) begin
        op_hcompute_grad_y_stencil_read[5] = bank_91[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==92) begin
        op_hcompute_grad_x_stencil_read[0] = bank_92[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==92) begin
        op_hcompute_grad_x_stencil_read[1] = bank_92[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==92) begin
        op_hcompute_grad_x_stencil_read[2] = bank_92[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==92) begin
        op_hcompute_grad_x_stencil_read[3] = bank_92[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==92) begin
        op_hcompute_grad_x_stencil_read[4] = bank_92[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==92) begin
        op_hcompute_grad_x_stencil_read[5] = bank_92[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==92) begin
        op_hcompute_grad_y_stencil_read[1] = bank_92[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==92) begin
        op_hcompute_grad_y_stencil_read[5] = bank_92[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==93) begin
        op_hcompute_grad_x_stencil_read[0] = bank_93[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==93) begin
        op_hcompute_grad_x_stencil_read[1] = bank_93[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==93) begin
        op_hcompute_grad_x_stencil_read[2] = bank_93[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==93) begin
        op_hcompute_grad_x_stencil_read[3] = bank_93[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==93) begin
        op_hcompute_grad_x_stencil_read[4] = bank_93[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==93) begin
        op_hcompute_grad_x_stencil_read[5] = bank_93[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==93) begin
        op_hcompute_grad_y_stencil_read[1] = bank_93[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==93) begin
        op_hcompute_grad_y_stencil_read[5] = bank_93[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==94) begin
        op_hcompute_grad_x_stencil_read[0] = bank_94[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==94) begin
        op_hcompute_grad_x_stencil_read[1] = bank_94[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==94) begin
        op_hcompute_grad_x_stencil_read[2] = bank_94[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==94) begin
        op_hcompute_grad_x_stencil_read[3] = bank_94[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==94) begin
        op_hcompute_grad_x_stencil_read[4] = bank_94[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==94) begin
        op_hcompute_grad_x_stencil_read[5] = bank_94[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==94) begin
        op_hcompute_grad_y_stencil_read[1] = bank_94[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==94) begin
        op_hcompute_grad_y_stencil_read[5] = bank_94[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==95) begin
        op_hcompute_grad_x_stencil_read[0] = bank_95[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==95) begin
        op_hcompute_grad_x_stencil_read[1] = bank_95[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==95) begin
        op_hcompute_grad_x_stencil_read[2] = bank_95[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==95) begin
        op_hcompute_grad_x_stencil_read[3] = bank_95[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==95) begin
        op_hcompute_grad_x_stencil_read[4] = bank_95[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==95) begin
        op_hcompute_grad_x_stencil_read[5] = bank_95[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==95) begin
        op_hcompute_grad_y_stencil_read[1] = bank_95[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==95) begin
        op_hcompute_grad_y_stencil_read[5] = bank_95[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==96) begin
        op_hcompute_grad_x_stencil_read[0] = bank_96[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==96) begin
        op_hcompute_grad_x_stencil_read[1] = bank_96[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==96) begin
        op_hcompute_grad_x_stencil_read[2] = bank_96[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==96) begin
        op_hcompute_grad_x_stencil_read[3] = bank_96[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==96) begin
        op_hcompute_grad_x_stencil_read[4] = bank_96[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==96) begin
        op_hcompute_grad_x_stencil_read[5] = bank_96[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==96) begin
        op_hcompute_grad_y_stencil_read[1] = bank_96[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==96) begin
        op_hcompute_grad_y_stencil_read[5] = bank_96[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==97) begin
        op_hcompute_grad_x_stencil_read[0] = bank_97[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==97) begin
        op_hcompute_grad_x_stencil_read[1] = bank_97[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==97) begin
        op_hcompute_grad_x_stencil_read[2] = bank_97[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==97) begin
        op_hcompute_grad_x_stencil_read[3] = bank_97[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==97) begin
        op_hcompute_grad_x_stencil_read[4] = bank_97[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==97) begin
        op_hcompute_grad_x_stencil_read[5] = bank_97[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==97) begin
        op_hcompute_grad_y_stencil_read[1] = bank_97[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==97) begin
        op_hcompute_grad_y_stencil_read[5] = bank_97[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==98) begin
        op_hcompute_grad_x_stencil_read[0] = bank_98[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==98) begin
        op_hcompute_grad_x_stencil_read[1] = bank_98[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==98) begin
        op_hcompute_grad_x_stencil_read[2] = bank_98[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==98) begin
        op_hcompute_grad_x_stencil_read[3] = bank_98[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==98) begin
        op_hcompute_grad_x_stencil_read[4] = bank_98[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==98) begin
        op_hcompute_grad_x_stencil_read[5] = bank_98[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==98) begin
        op_hcompute_grad_y_stencil_read[1] = bank_98[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==98) begin
        op_hcompute_grad_y_stencil_read[5] = bank_98[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==99) begin
        op_hcompute_grad_x_stencil_read[0] = bank_99[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==99) begin
        op_hcompute_grad_x_stencil_read[1] = bank_99[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==99) begin
        op_hcompute_grad_x_stencil_read[2] = bank_99[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==99) begin
        op_hcompute_grad_x_stencil_read[3] = bank_99[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==99) begin
        op_hcompute_grad_x_stencil_read[4] = bank_99[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==99) begin
        op_hcompute_grad_x_stencil_read[5] = bank_99[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==99) begin
        op_hcompute_grad_y_stencil_read[1] = bank_99[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==99) begin
        op_hcompute_grad_y_stencil_read[5] = bank_99[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==100) begin
        op_hcompute_grad_x_stencil_read[0] = bank_100[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==100) begin
        op_hcompute_grad_x_stencil_read[1] = bank_100[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==100) begin
        op_hcompute_grad_x_stencil_read[2] = bank_100[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==100) begin
        op_hcompute_grad_x_stencil_read[3] = bank_100[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==100) begin
        op_hcompute_grad_x_stencil_read[4] = bank_100[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==100) begin
        op_hcompute_grad_x_stencil_read[5] = bank_100[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==100) begin
        op_hcompute_grad_y_stencil_read[1] = bank_100[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==100) begin
        op_hcompute_grad_y_stencil_read[5] = bank_100[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==101) begin
        op_hcompute_grad_x_stencil_read[0] = bank_101[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==101) begin
        op_hcompute_grad_x_stencil_read[1] = bank_101[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==101) begin
        op_hcompute_grad_x_stencil_read[2] = bank_101[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==101) begin
        op_hcompute_grad_x_stencil_read[3] = bank_101[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==101) begin
        op_hcompute_grad_x_stencil_read[4] = bank_101[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==101) begin
        op_hcompute_grad_x_stencil_read[5] = bank_101[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==101) begin
        op_hcompute_grad_y_stencil_read[1] = bank_101[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==101) begin
        op_hcompute_grad_y_stencil_read[5] = bank_101[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==102) begin
        op_hcompute_grad_x_stencil_read[0] = bank_102[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==102) begin
        op_hcompute_grad_x_stencil_read[1] = bank_102[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==102) begin
        op_hcompute_grad_x_stencil_read[2] = bank_102[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==102) begin
        op_hcompute_grad_x_stencil_read[3] = bank_102[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==102) begin
        op_hcompute_grad_x_stencil_read[4] = bank_102[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==102) begin
        op_hcompute_grad_x_stencil_read[5] = bank_102[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==102) begin
        op_hcompute_grad_y_stencil_read[1] = bank_102[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==102) begin
        op_hcompute_grad_y_stencil_read[5] = bank_102[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==103) begin
        op_hcompute_grad_x_stencil_read[0] = bank_103[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==103) begin
        op_hcompute_grad_x_stencil_read[1] = bank_103[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==103) begin
        op_hcompute_grad_x_stencil_read[2] = bank_103[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==103) begin
        op_hcompute_grad_x_stencil_read[3] = bank_103[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==103) begin
        op_hcompute_grad_x_stencil_read[4] = bank_103[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==103) begin
        op_hcompute_grad_x_stencil_read[5] = bank_103[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==103) begin
        op_hcompute_grad_y_stencil_read[1] = bank_103[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==103) begin
        op_hcompute_grad_y_stencil_read[5] = bank_103[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==104) begin
        op_hcompute_grad_x_stencil_read[0] = bank_104[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==104) begin
        op_hcompute_grad_x_stencil_read[1] = bank_104[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==104) begin
        op_hcompute_grad_x_stencil_read[2] = bank_104[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==104) begin
        op_hcompute_grad_x_stencil_read[3] = bank_104[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==104) begin
        op_hcompute_grad_x_stencil_read[4] = bank_104[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==104) begin
        op_hcompute_grad_x_stencil_read[5] = bank_104[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==104) begin
        op_hcompute_grad_y_stencil_read[1] = bank_104[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==104) begin
        op_hcompute_grad_y_stencil_read[5] = bank_104[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==105) begin
        op_hcompute_grad_x_stencil_read[0] = bank_105[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==105) begin
        op_hcompute_grad_x_stencil_read[1] = bank_105[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==105) begin
        op_hcompute_grad_x_stencil_read[2] = bank_105[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==105) begin
        op_hcompute_grad_x_stencil_read[3] = bank_105[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==105) begin
        op_hcompute_grad_x_stencil_read[4] = bank_105[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==105) begin
        op_hcompute_grad_x_stencil_read[5] = bank_105[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==105) begin
        op_hcompute_grad_y_stencil_read[1] = bank_105[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==105) begin
        op_hcompute_grad_y_stencil_read[5] = bank_105[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==106) begin
        op_hcompute_grad_x_stencil_read[0] = bank_106[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==106) begin
        op_hcompute_grad_x_stencil_read[1] = bank_106[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==106) begin
        op_hcompute_grad_x_stencil_read[2] = bank_106[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==106) begin
        op_hcompute_grad_x_stencil_read[3] = bank_106[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==106) begin
        op_hcompute_grad_x_stencil_read[4] = bank_106[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==106) begin
        op_hcompute_grad_x_stencil_read[5] = bank_106[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==106) begin
        op_hcompute_grad_y_stencil_read[1] = bank_106[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==106) begin
        op_hcompute_grad_y_stencil_read[5] = bank_106[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==107) begin
        op_hcompute_grad_x_stencil_read[0] = bank_107[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==107) begin
        op_hcompute_grad_x_stencil_read[1] = bank_107[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==107) begin
        op_hcompute_grad_x_stencil_read[2] = bank_107[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==107) begin
        op_hcompute_grad_x_stencil_read[3] = bank_107[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==107) begin
        op_hcompute_grad_x_stencil_read[4] = bank_107[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==107) begin
        op_hcompute_grad_x_stencil_read[5] = bank_107[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==107) begin
        op_hcompute_grad_y_stencil_read[1] = bank_107[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==107) begin
        op_hcompute_grad_y_stencil_read[5] = bank_107[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==108) begin
        op_hcompute_grad_x_stencil_read[0] = bank_108[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==108) begin
        op_hcompute_grad_x_stencil_read[1] = bank_108[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==108) begin
        op_hcompute_grad_x_stencil_read[2] = bank_108[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==108) begin
        op_hcompute_grad_x_stencil_read[3] = bank_108[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==108) begin
        op_hcompute_grad_x_stencil_read[4] = bank_108[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==108) begin
        op_hcompute_grad_x_stencil_read[5] = bank_108[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==108) begin
        op_hcompute_grad_y_stencil_read[1] = bank_108[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==108) begin
        op_hcompute_grad_y_stencil_read[5] = bank_108[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==109) begin
        op_hcompute_grad_x_stencil_read[0] = bank_109[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==109) begin
        op_hcompute_grad_x_stencil_read[1] = bank_109[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==109) begin
        op_hcompute_grad_x_stencil_read[2] = bank_109[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==109) begin
        op_hcompute_grad_x_stencil_read[3] = bank_109[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==109) begin
        op_hcompute_grad_x_stencil_read[4] = bank_109[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==109) begin
        op_hcompute_grad_x_stencil_read[5] = bank_109[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==109) begin
        op_hcompute_grad_y_stencil_read[1] = bank_109[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==109) begin
        op_hcompute_grad_y_stencil_read[5] = bank_109[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==110) begin
        op_hcompute_grad_x_stencil_read[0] = bank_110[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==110) begin
        op_hcompute_grad_x_stencil_read[1] = bank_110[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==110) begin
        op_hcompute_grad_x_stencil_read[2] = bank_110[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==110) begin
        op_hcompute_grad_x_stencil_read[3] = bank_110[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==110) begin
        op_hcompute_grad_x_stencil_read[4] = bank_110[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==110) begin
        op_hcompute_grad_x_stencil_read[5] = bank_110[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==110) begin
        op_hcompute_grad_y_stencil_read[1] = bank_110[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==110) begin
        op_hcompute_grad_y_stencil_read[5] = bank_110[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==111) begin
        op_hcompute_grad_x_stencil_read[0] = bank_111[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==111) begin
        op_hcompute_grad_x_stencil_read[1] = bank_111[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==111) begin
        op_hcompute_grad_x_stencil_read[2] = bank_111[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==111) begin
        op_hcompute_grad_x_stencil_read[3] = bank_111[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==111) begin
        op_hcompute_grad_x_stencil_read[4] = bank_111[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==111) begin
        op_hcompute_grad_x_stencil_read[5] = bank_111[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==111) begin
        op_hcompute_grad_y_stencil_read[1] = bank_111[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==111) begin
        op_hcompute_grad_y_stencil_read[5] = bank_111[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==112) begin
        op_hcompute_grad_x_stencil_read[0] = bank_112[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==112) begin
        op_hcompute_grad_x_stencil_read[1] = bank_112[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==112) begin
        op_hcompute_grad_x_stencil_read[2] = bank_112[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==112) begin
        op_hcompute_grad_x_stencil_read[3] = bank_112[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==112) begin
        op_hcompute_grad_x_stencil_read[4] = bank_112[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==112) begin
        op_hcompute_grad_x_stencil_read[5] = bank_112[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==112) begin
        op_hcompute_grad_y_stencil_read[1] = bank_112[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==112) begin
        op_hcompute_grad_y_stencil_read[5] = bank_112[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==113) begin
        op_hcompute_grad_x_stencil_read[0] = bank_113[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==113) begin
        op_hcompute_grad_x_stencil_read[1] = bank_113[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==113) begin
        op_hcompute_grad_x_stencil_read[2] = bank_113[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==113) begin
        op_hcompute_grad_x_stencil_read[3] = bank_113[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==113) begin
        op_hcompute_grad_x_stencil_read[4] = bank_113[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==113) begin
        op_hcompute_grad_x_stencil_read[5] = bank_113[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==113) begin
        op_hcompute_grad_y_stencil_read[1] = bank_113[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==113) begin
        op_hcompute_grad_y_stencil_read[5] = bank_113[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==114) begin
        op_hcompute_grad_x_stencil_read[0] = bank_114[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==114) begin
        op_hcompute_grad_x_stencil_read[1] = bank_114[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==114) begin
        op_hcompute_grad_x_stencil_read[2] = bank_114[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==114) begin
        op_hcompute_grad_x_stencil_read[3] = bank_114[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==114) begin
        op_hcompute_grad_x_stencil_read[4] = bank_114[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==114) begin
        op_hcompute_grad_x_stencil_read[5] = bank_114[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==114) begin
        op_hcompute_grad_y_stencil_read[1] = bank_114[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==114) begin
        op_hcompute_grad_y_stencil_read[5] = bank_114[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==115) begin
        op_hcompute_grad_x_stencil_read[0] = bank_115[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==115) begin
        op_hcompute_grad_x_stencil_read[1] = bank_115[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==115) begin
        op_hcompute_grad_x_stencil_read[2] = bank_115[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==115) begin
        op_hcompute_grad_x_stencil_read[3] = bank_115[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==115) begin
        op_hcompute_grad_x_stencil_read[4] = bank_115[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==115) begin
        op_hcompute_grad_x_stencil_read[5] = bank_115[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==115) begin
        op_hcompute_grad_y_stencil_read[1] = bank_115[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==115) begin
        op_hcompute_grad_y_stencil_read[5] = bank_115[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==116) begin
        op_hcompute_grad_x_stencil_read[0] = bank_116[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==116) begin
        op_hcompute_grad_x_stencil_read[1] = bank_116[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==116) begin
        op_hcompute_grad_x_stencil_read[2] = bank_116[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==116) begin
        op_hcompute_grad_x_stencil_read[3] = bank_116[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==116) begin
        op_hcompute_grad_x_stencil_read[4] = bank_116[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==116) begin
        op_hcompute_grad_x_stencil_read[5] = bank_116[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==116) begin
        op_hcompute_grad_y_stencil_read[1] = bank_116[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==116) begin
        op_hcompute_grad_y_stencil_read[5] = bank_116[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==117) begin
        op_hcompute_grad_x_stencil_read[0] = bank_117[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==117) begin
        op_hcompute_grad_x_stencil_read[1] = bank_117[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==117) begin
        op_hcompute_grad_x_stencil_read[2] = bank_117[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==117) begin
        op_hcompute_grad_x_stencil_read[3] = bank_117[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==117) begin
        op_hcompute_grad_x_stencil_read[4] = bank_117[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==117) begin
        op_hcompute_grad_x_stencil_read[5] = bank_117[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==117) begin
        op_hcompute_grad_y_stencil_read[1] = bank_117[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==117) begin
        op_hcompute_grad_y_stencil_read[5] = bank_117[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==118) begin
        op_hcompute_grad_x_stencil_read[0] = bank_118[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==118) begin
        op_hcompute_grad_x_stencil_read[1] = bank_118[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==118) begin
        op_hcompute_grad_x_stencil_read[2] = bank_118[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==118) begin
        op_hcompute_grad_x_stencil_read[3] = bank_118[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==118) begin
        op_hcompute_grad_x_stencil_read[4] = bank_118[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==118) begin
        op_hcompute_grad_x_stencil_read[5] = bank_118[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==118) begin
        op_hcompute_grad_y_stencil_read[1] = bank_118[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==118) begin
        op_hcompute_grad_y_stencil_read[5] = bank_118[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==119) begin
        op_hcompute_grad_x_stencil_read[0] = bank_119[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==119) begin
        op_hcompute_grad_x_stencil_read[1] = bank_119[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==119) begin
        op_hcompute_grad_x_stencil_read[2] = bank_119[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==119) begin
        op_hcompute_grad_x_stencil_read[3] = bank_119[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==119) begin
        op_hcompute_grad_x_stencil_read[4] = bank_119[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==119) begin
        op_hcompute_grad_x_stencil_read[5] = bank_119[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==119) begin
        op_hcompute_grad_y_stencil_read[1] = bank_119[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==119) begin
        op_hcompute_grad_y_stencil_read[5] = bank_119[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==120) begin
        op_hcompute_grad_x_stencil_read[0] = bank_120[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==120) begin
        op_hcompute_grad_x_stencil_read[1] = bank_120[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==120) begin
        op_hcompute_grad_x_stencil_read[2] = bank_120[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==120) begin
        op_hcompute_grad_x_stencil_read[3] = bank_120[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==120) begin
        op_hcompute_grad_x_stencil_read[4] = bank_120[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==120) begin
        op_hcompute_grad_x_stencil_read[5] = bank_120[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==120) begin
        op_hcompute_grad_y_stencil_read[1] = bank_120[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==120) begin
        op_hcompute_grad_y_stencil_read[5] = bank_120[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==121) begin
        op_hcompute_grad_x_stencil_read[0] = bank_121[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==121) begin
        op_hcompute_grad_x_stencil_read[1] = bank_121[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==121) begin
        op_hcompute_grad_x_stencil_read[2] = bank_121[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==121) begin
        op_hcompute_grad_x_stencil_read[3] = bank_121[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==121) begin
        op_hcompute_grad_x_stencil_read[4] = bank_121[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==121) begin
        op_hcompute_grad_x_stencil_read[5] = bank_121[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==121) begin
        op_hcompute_grad_y_stencil_read[1] = bank_121[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==121) begin
        op_hcompute_grad_y_stencil_read[5] = bank_121[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==122) begin
        op_hcompute_grad_x_stencil_read[0] = bank_122[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==122) begin
        op_hcompute_grad_x_stencil_read[1] = bank_122[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==122) begin
        op_hcompute_grad_x_stencil_read[2] = bank_122[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==122) begin
        op_hcompute_grad_x_stencil_read[3] = bank_122[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==122) begin
        op_hcompute_grad_x_stencil_read[4] = bank_122[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==122) begin
        op_hcompute_grad_x_stencil_read[5] = bank_122[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==122) begin
        op_hcompute_grad_y_stencil_read[1] = bank_122[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==122) begin
        op_hcompute_grad_y_stencil_read[5] = bank_122[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==123) begin
        op_hcompute_grad_x_stencil_read[0] = bank_123[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==123) begin
        op_hcompute_grad_x_stencil_read[1] = bank_123[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==123) begin
        op_hcompute_grad_x_stencil_read[2] = bank_123[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==123) begin
        op_hcompute_grad_x_stencil_read[3] = bank_123[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==123) begin
        op_hcompute_grad_x_stencil_read[4] = bank_123[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==123) begin
        op_hcompute_grad_x_stencil_read[5] = bank_123[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==123) begin
        op_hcompute_grad_y_stencil_read[1] = bank_123[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==123) begin
        op_hcompute_grad_y_stencil_read[5] = bank_123[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==124) begin
        op_hcompute_grad_x_stencil_read[0] = bank_124[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==124) begin
        op_hcompute_grad_x_stencil_read[1] = bank_124[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==124) begin
        op_hcompute_grad_x_stencil_read[2] = bank_124[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==124) begin
        op_hcompute_grad_x_stencil_read[3] = bank_124[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==124) begin
        op_hcompute_grad_x_stencil_read[4] = bank_124[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==124) begin
        op_hcompute_grad_x_stencil_read[5] = bank_124[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==124) begin
        op_hcompute_grad_y_stencil_read[1] = bank_124[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==124) begin
        op_hcompute_grad_y_stencil_read[5] = bank_124[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==125) begin
        op_hcompute_grad_x_stencil_read[0] = bank_125[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==125) begin
        op_hcompute_grad_x_stencil_read[1] = bank_125[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==125) begin
        op_hcompute_grad_x_stencil_read[2] = bank_125[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==125) begin
        op_hcompute_grad_x_stencil_read[3] = bank_125[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==125) begin
        op_hcompute_grad_x_stencil_read[4] = bank_125[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==125) begin
        op_hcompute_grad_x_stencil_read[5] = bank_125[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==125) begin
        op_hcompute_grad_y_stencil_read[1] = bank_125[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==125) begin
        op_hcompute_grad_y_stencil_read[5] = bank_125[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==126) begin
        op_hcompute_grad_x_stencil_read[0] = bank_126[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==126) begin
        op_hcompute_grad_x_stencil_read[1] = bank_126[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==126) begin
        op_hcompute_grad_x_stencil_read[2] = bank_126[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==126) begin
        op_hcompute_grad_x_stencil_read[3] = bank_126[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==126) begin
        op_hcompute_grad_x_stencil_read[4] = bank_126[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==126) begin
        op_hcompute_grad_x_stencil_read[5] = bank_126[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==126) begin
        op_hcompute_grad_y_stencil_read[1] = bank_126[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==126) begin
        op_hcompute_grad_y_stencil_read[5] = bank_126[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==127) begin
        op_hcompute_grad_x_stencil_read[0] = bank_127[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==127) begin
        op_hcompute_grad_x_stencil_read[1] = bank_127[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==127) begin
        op_hcompute_grad_x_stencil_read[2] = bank_127[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==127) begin
        op_hcompute_grad_x_stencil_read[3] = bank_127[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==127) begin
        op_hcompute_grad_x_stencil_read[4] = bank_127[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==127) begin
        op_hcompute_grad_x_stencil_read[5] = bank_127[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==127) begin
        op_hcompute_grad_y_stencil_read[1] = bank_127[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==127) begin
        op_hcompute_grad_y_stencil_read[5] = bank_127[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==128) begin
        op_hcompute_grad_x_stencil_read[0] = bank_128[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==128) begin
        op_hcompute_grad_x_stencil_read[1] = bank_128[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==128) begin
        op_hcompute_grad_x_stencil_read[2] = bank_128[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==128) begin
        op_hcompute_grad_x_stencil_read[3] = bank_128[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==128) begin
        op_hcompute_grad_x_stencil_read[4] = bank_128[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==128) begin
        op_hcompute_grad_x_stencil_read[5] = bank_128[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==128) begin
        op_hcompute_grad_y_stencil_read[1] = bank_128[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==128) begin
        op_hcompute_grad_y_stencil_read[5] = bank_128[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==129) begin
        op_hcompute_grad_x_stencil_read[0] = bank_129[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==129) begin
        op_hcompute_grad_x_stencil_read[1] = bank_129[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==129) begin
        op_hcompute_grad_x_stencil_read[2] = bank_129[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==129) begin
        op_hcompute_grad_x_stencil_read[3] = bank_129[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==129) begin
        op_hcompute_grad_x_stencil_read[4] = bank_129[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==129) begin
        op_hcompute_grad_x_stencil_read[5] = bank_129[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==129) begin
        op_hcompute_grad_y_stencil_read[1] = bank_129[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==129) begin
        op_hcompute_grad_y_stencil_read[5] = bank_129[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==130) begin
        op_hcompute_grad_x_stencil_read[0] = bank_130[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==130) begin
        op_hcompute_grad_x_stencil_read[1] = bank_130[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==130) begin
        op_hcompute_grad_x_stencil_read[2] = bank_130[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==130) begin
        op_hcompute_grad_x_stencil_read[3] = bank_130[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==130) begin
        op_hcompute_grad_x_stencil_read[4] = bank_130[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==130) begin
        op_hcompute_grad_x_stencil_read[5] = bank_130[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==130) begin
        op_hcompute_grad_y_stencil_read[1] = bank_130[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==130) begin
        op_hcompute_grad_y_stencil_read[5] = bank_130[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==131) begin
        op_hcompute_grad_x_stencil_read[0] = bank_131[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==131) begin
        op_hcompute_grad_x_stencil_read[1] = bank_131[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==131) begin
        op_hcompute_grad_x_stencil_read[2] = bank_131[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==131) begin
        op_hcompute_grad_x_stencil_read[3] = bank_131[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==131) begin
        op_hcompute_grad_x_stencil_read[4] = bank_131[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==131) begin
        op_hcompute_grad_x_stencil_read[5] = bank_131[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==131) begin
        op_hcompute_grad_y_stencil_read[1] = bank_131[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==131) begin
        op_hcompute_grad_y_stencil_read[5] = bank_131[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==132) begin
        op_hcompute_grad_x_stencil_read[0] = bank_132[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==132) begin
        op_hcompute_grad_x_stencil_read[1] = bank_132[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==132) begin
        op_hcompute_grad_x_stencil_read[2] = bank_132[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==132) begin
        op_hcompute_grad_x_stencil_read[3] = bank_132[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==132) begin
        op_hcompute_grad_x_stencil_read[4] = bank_132[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==132) begin
        op_hcompute_grad_x_stencil_read[5] = bank_132[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==132) begin
        op_hcompute_grad_y_stencil_read[1] = bank_132[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==132) begin
        op_hcompute_grad_y_stencil_read[5] = bank_132[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==133) begin
        op_hcompute_grad_x_stencil_read[0] = bank_133[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==133) begin
        op_hcompute_grad_x_stencil_read[1] = bank_133[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==133) begin
        op_hcompute_grad_x_stencil_read[2] = bank_133[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==133) begin
        op_hcompute_grad_x_stencil_read[3] = bank_133[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==133) begin
        op_hcompute_grad_x_stencil_read[4] = bank_133[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==133) begin
        op_hcompute_grad_x_stencil_read[5] = bank_133[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==133) begin
        op_hcompute_grad_y_stencil_read[1] = bank_133[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==133) begin
        op_hcompute_grad_y_stencil_read[5] = bank_133[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==134) begin
        op_hcompute_grad_x_stencil_read[0] = bank_134[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==134) begin
        op_hcompute_grad_x_stencil_read[1] = bank_134[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==134) begin
        op_hcompute_grad_x_stencil_read[2] = bank_134[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==134) begin
        op_hcompute_grad_x_stencil_read[3] = bank_134[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==134) begin
        op_hcompute_grad_x_stencil_read[4] = bank_134[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==134) begin
        op_hcompute_grad_x_stencil_read[5] = bank_134[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==134) begin
        op_hcompute_grad_y_stencil_read[1] = bank_134[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==134) begin
        op_hcompute_grad_y_stencil_read[5] = bank_134[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==135) begin
        op_hcompute_grad_x_stencil_read[0] = bank_135[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==135) begin
        op_hcompute_grad_x_stencil_read[1] = bank_135[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==135) begin
        op_hcompute_grad_x_stencil_read[2] = bank_135[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==135) begin
        op_hcompute_grad_x_stencil_read[3] = bank_135[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==135) begin
        op_hcompute_grad_x_stencil_read[4] = bank_135[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==135) begin
        op_hcompute_grad_x_stencil_read[5] = bank_135[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==135) begin
        op_hcompute_grad_y_stencil_read[1] = bank_135[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==135) begin
        op_hcompute_grad_y_stencil_read[5] = bank_135[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==136) begin
        op_hcompute_grad_x_stencil_read[0] = bank_136[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==136) begin
        op_hcompute_grad_x_stencil_read[1] = bank_136[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==136) begin
        op_hcompute_grad_x_stencil_read[2] = bank_136[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==136) begin
        op_hcompute_grad_x_stencil_read[3] = bank_136[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==136) begin
        op_hcompute_grad_x_stencil_read[4] = bank_136[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==136) begin
        op_hcompute_grad_x_stencil_read[5] = bank_136[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==136) begin
        op_hcompute_grad_y_stencil_read[1] = bank_136[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==136) begin
        op_hcompute_grad_y_stencil_read[5] = bank_136[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==137) begin
        op_hcompute_grad_x_stencil_read[0] = bank_137[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==137) begin
        op_hcompute_grad_x_stencil_read[1] = bank_137[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==137) begin
        op_hcompute_grad_x_stencil_read[2] = bank_137[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==137) begin
        op_hcompute_grad_x_stencil_read[3] = bank_137[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==137) begin
        op_hcompute_grad_x_stencil_read[4] = bank_137[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==137) begin
        op_hcompute_grad_x_stencil_read[5] = bank_137[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==137) begin
        op_hcompute_grad_y_stencil_read[1] = bank_137[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==137) begin
        op_hcompute_grad_y_stencil_read[5] = bank_137[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==138) begin
        op_hcompute_grad_x_stencil_read[0] = bank_138[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==138) begin
        op_hcompute_grad_x_stencil_read[1] = bank_138[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==138) begin
        op_hcompute_grad_x_stencil_read[2] = bank_138[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==138) begin
        op_hcompute_grad_x_stencil_read[3] = bank_138[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==138) begin
        op_hcompute_grad_x_stencil_read[4] = bank_138[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==138) begin
        op_hcompute_grad_x_stencil_read[5] = bank_138[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==138) begin
        op_hcompute_grad_y_stencil_read[1] = bank_138[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==138) begin
        op_hcompute_grad_y_stencil_read[5] = bank_138[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==139) begin
        op_hcompute_grad_x_stencil_read[0] = bank_139[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==139) begin
        op_hcompute_grad_x_stencil_read[1] = bank_139[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==139) begin
        op_hcompute_grad_x_stencil_read[2] = bank_139[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==139) begin
        op_hcompute_grad_x_stencil_read[3] = bank_139[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==139) begin
        op_hcompute_grad_x_stencil_read[4] = bank_139[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==139) begin
        op_hcompute_grad_x_stencil_read[5] = bank_139[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==139) begin
        op_hcompute_grad_y_stencil_read[1] = bank_139[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==139) begin
        op_hcompute_grad_y_stencil_read[5] = bank_139[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==140) begin
        op_hcompute_grad_x_stencil_read[0] = bank_140[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==140) begin
        op_hcompute_grad_x_stencil_read[1] = bank_140[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==140) begin
        op_hcompute_grad_x_stencil_read[2] = bank_140[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==140) begin
        op_hcompute_grad_x_stencil_read[3] = bank_140[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==140) begin
        op_hcompute_grad_x_stencil_read[4] = bank_140[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==140) begin
        op_hcompute_grad_x_stencil_read[5] = bank_140[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==140) begin
        op_hcompute_grad_y_stencil_read[1] = bank_140[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==140) begin
        op_hcompute_grad_y_stencil_read[5] = bank_140[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==141) begin
        op_hcompute_grad_x_stencil_read[0] = bank_141[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==141) begin
        op_hcompute_grad_x_stencil_read[1] = bank_141[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==141) begin
        op_hcompute_grad_x_stencil_read[2] = bank_141[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==141) begin
        op_hcompute_grad_x_stencil_read[3] = bank_141[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==141) begin
        op_hcompute_grad_x_stencil_read[4] = bank_141[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==141) begin
        op_hcompute_grad_x_stencil_read[5] = bank_141[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==141) begin
        op_hcompute_grad_y_stencil_read[1] = bank_141[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==141) begin
        op_hcompute_grad_y_stencil_read[5] = bank_141[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==142) begin
        op_hcompute_grad_x_stencil_read[0] = bank_142[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==142) begin
        op_hcompute_grad_x_stencil_read[1] = bank_142[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==142) begin
        op_hcompute_grad_x_stencil_read[2] = bank_142[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==142) begin
        op_hcompute_grad_x_stencil_read[3] = bank_142[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==142) begin
        op_hcompute_grad_x_stencil_read[4] = bank_142[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==142) begin
        op_hcompute_grad_x_stencil_read[5] = bank_142[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==142) begin
        op_hcompute_grad_y_stencil_read[1] = bank_142[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==142) begin
        op_hcompute_grad_y_stencil_read[5] = bank_142[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==143) begin
        op_hcompute_grad_x_stencil_read[0] = bank_143[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==143) begin
        op_hcompute_grad_x_stencil_read[1] = bank_143[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==143) begin
        op_hcompute_grad_x_stencil_read[2] = bank_143[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==143) begin
        op_hcompute_grad_x_stencil_read[3] = bank_143[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==143) begin
        op_hcompute_grad_x_stencil_read[4] = bank_143[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==143) begin
        op_hcompute_grad_x_stencil_read[5] = bank_143[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==143) begin
        op_hcompute_grad_y_stencil_read[1] = bank_143[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==143) begin
        op_hcompute_grad_y_stencil_read[5] = bank_143[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==144) begin
        op_hcompute_grad_x_stencil_read[0] = bank_144[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==144) begin
        op_hcompute_grad_x_stencil_read[1] = bank_144[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==144) begin
        op_hcompute_grad_x_stencil_read[2] = bank_144[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==144) begin
        op_hcompute_grad_x_stencil_read[3] = bank_144[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==144) begin
        op_hcompute_grad_x_stencil_read[4] = bank_144[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==144) begin
        op_hcompute_grad_x_stencil_read[5] = bank_144[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==144) begin
        op_hcompute_grad_y_stencil_read[1] = bank_144[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==144) begin
        op_hcompute_grad_y_stencil_read[5] = bank_144[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==145) begin
        op_hcompute_grad_x_stencil_read[0] = bank_145[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==145) begin
        op_hcompute_grad_x_stencil_read[1] = bank_145[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==145) begin
        op_hcompute_grad_x_stencil_read[2] = bank_145[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==145) begin
        op_hcompute_grad_x_stencil_read[3] = bank_145[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==145) begin
        op_hcompute_grad_x_stencil_read[4] = bank_145[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==145) begin
        op_hcompute_grad_x_stencil_read[5] = bank_145[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==145) begin
        op_hcompute_grad_y_stencil_read[1] = bank_145[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==145) begin
        op_hcompute_grad_y_stencil_read[5] = bank_145[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==146) begin
        op_hcompute_grad_x_stencil_read[0] = bank_146[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==146) begin
        op_hcompute_grad_x_stencil_read[1] = bank_146[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==146) begin
        op_hcompute_grad_x_stencil_read[2] = bank_146[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==146) begin
        op_hcompute_grad_x_stencil_read[3] = bank_146[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==146) begin
        op_hcompute_grad_x_stencil_read[4] = bank_146[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==146) begin
        op_hcompute_grad_x_stencil_read[5] = bank_146[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==146) begin
        op_hcompute_grad_y_stencil_read[1] = bank_146[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==146) begin
        op_hcompute_grad_y_stencil_read[5] = bank_146[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==147) begin
        op_hcompute_grad_x_stencil_read[0] = bank_147[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==147) begin
        op_hcompute_grad_x_stencil_read[1] = bank_147[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==147) begin
        op_hcompute_grad_x_stencil_read[2] = bank_147[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==147) begin
        op_hcompute_grad_x_stencil_read[3] = bank_147[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==147) begin
        op_hcompute_grad_x_stencil_read[4] = bank_147[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==147) begin
        op_hcompute_grad_x_stencil_read[5] = bank_147[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==147) begin
        op_hcompute_grad_y_stencil_read[1] = bank_147[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==147) begin
        op_hcompute_grad_y_stencil_read[5] = bank_147[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==148) begin
        op_hcompute_grad_x_stencil_read[0] = bank_148[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==148) begin
        op_hcompute_grad_x_stencil_read[1] = bank_148[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==148) begin
        op_hcompute_grad_x_stencil_read[2] = bank_148[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==148) begin
        op_hcompute_grad_x_stencil_read[3] = bank_148[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==148) begin
        op_hcompute_grad_x_stencil_read[4] = bank_148[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==148) begin
        op_hcompute_grad_x_stencil_read[5] = bank_148[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==148) begin
        op_hcompute_grad_y_stencil_read[1] = bank_148[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==148) begin
        op_hcompute_grad_y_stencil_read[5] = bank_148[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==149) begin
        op_hcompute_grad_x_stencil_read[0] = bank_149[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==149) begin
        op_hcompute_grad_x_stencil_read[1] = bank_149[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==149) begin
        op_hcompute_grad_x_stencil_read[2] = bank_149[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==149) begin
        op_hcompute_grad_x_stencil_read[3] = bank_149[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==149) begin
        op_hcompute_grad_x_stencil_read[4] = bank_149[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==149) begin
        op_hcompute_grad_x_stencil_read[5] = bank_149[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==149) begin
        op_hcompute_grad_y_stencil_read[1] = bank_149[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==149) begin
        op_hcompute_grad_y_stencil_read[5] = bank_149[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==150) begin
        op_hcompute_grad_x_stencil_read[0] = bank_150[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==150) begin
        op_hcompute_grad_x_stencil_read[1] = bank_150[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==150) begin
        op_hcompute_grad_x_stencil_read[2] = bank_150[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==150) begin
        op_hcompute_grad_x_stencil_read[3] = bank_150[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==150) begin
        op_hcompute_grad_x_stencil_read[4] = bank_150[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==150) begin
        op_hcompute_grad_x_stencil_read[5] = bank_150[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==150) begin
        op_hcompute_grad_y_stencil_read[1] = bank_150[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==150) begin
        op_hcompute_grad_y_stencil_read[5] = bank_150[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==151) begin
        op_hcompute_grad_x_stencil_read[0] = bank_151[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==151) begin
        op_hcompute_grad_x_stencil_read[1] = bank_151[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==151) begin
        op_hcompute_grad_x_stencil_read[2] = bank_151[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==151) begin
        op_hcompute_grad_x_stencil_read[3] = bank_151[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==151) begin
        op_hcompute_grad_x_stencil_read[4] = bank_151[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==151) begin
        op_hcompute_grad_x_stencil_read[5] = bank_151[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==151) begin
        op_hcompute_grad_y_stencil_read[1] = bank_151[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==151) begin
        op_hcompute_grad_y_stencil_read[5] = bank_151[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==152) begin
        op_hcompute_grad_x_stencil_read[0] = bank_152[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==152) begin
        op_hcompute_grad_x_stencil_read[1] = bank_152[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==152) begin
        op_hcompute_grad_x_stencil_read[2] = bank_152[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==152) begin
        op_hcompute_grad_x_stencil_read[3] = bank_152[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==152) begin
        op_hcompute_grad_x_stencil_read[4] = bank_152[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==152) begin
        op_hcompute_grad_x_stencil_read[5] = bank_152[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==152) begin
        op_hcompute_grad_y_stencil_read[1] = bank_152[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==152) begin
        op_hcompute_grad_y_stencil_read[5] = bank_152[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==153) begin
        op_hcompute_grad_x_stencil_read[0] = bank_153[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==153) begin
        op_hcompute_grad_x_stencil_read[1] = bank_153[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==153) begin
        op_hcompute_grad_x_stencil_read[2] = bank_153[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==153) begin
        op_hcompute_grad_x_stencil_read[3] = bank_153[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==153) begin
        op_hcompute_grad_x_stencil_read[4] = bank_153[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==153) begin
        op_hcompute_grad_x_stencil_read[5] = bank_153[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==153) begin
        op_hcompute_grad_y_stencil_read[1] = bank_153[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==153) begin
        op_hcompute_grad_y_stencil_read[5] = bank_153[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==154) begin
        op_hcompute_grad_x_stencil_read[0] = bank_154[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==154) begin
        op_hcompute_grad_x_stencil_read[1] = bank_154[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==154) begin
        op_hcompute_grad_x_stencil_read[2] = bank_154[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==154) begin
        op_hcompute_grad_x_stencil_read[3] = bank_154[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==154) begin
        op_hcompute_grad_x_stencil_read[4] = bank_154[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==154) begin
        op_hcompute_grad_x_stencil_read[5] = bank_154[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==154) begin
        op_hcompute_grad_y_stencil_read[1] = bank_154[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==154) begin
        op_hcompute_grad_y_stencil_read[5] = bank_154[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==155) begin
        op_hcompute_grad_x_stencil_read[0] = bank_155[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==155) begin
        op_hcompute_grad_x_stencil_read[1] = bank_155[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==155) begin
        op_hcompute_grad_x_stencil_read[2] = bank_155[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==155) begin
        op_hcompute_grad_x_stencil_read[3] = bank_155[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==155) begin
        op_hcompute_grad_x_stencil_read[4] = bank_155[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==155) begin
        op_hcompute_grad_x_stencil_read[5] = bank_155[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==155) begin
        op_hcompute_grad_y_stencil_read[1] = bank_155[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==155) begin
        op_hcompute_grad_y_stencil_read[5] = bank_155[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==156) begin
        op_hcompute_grad_x_stencil_read[0] = bank_156[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==156) begin
        op_hcompute_grad_x_stencil_read[1] = bank_156[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==156) begin
        op_hcompute_grad_x_stencil_read[2] = bank_156[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==156) begin
        op_hcompute_grad_x_stencil_read[3] = bank_156[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==156) begin
        op_hcompute_grad_x_stencil_read[4] = bank_156[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==156) begin
        op_hcompute_grad_x_stencil_read[5] = bank_156[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==156) begin
        op_hcompute_grad_y_stencil_read[1] = bank_156[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==156) begin
        op_hcompute_grad_y_stencil_read[5] = bank_156[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==157) begin
        op_hcompute_grad_x_stencil_read[0] = bank_157[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==157) begin
        op_hcompute_grad_x_stencil_read[1] = bank_157[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==157) begin
        op_hcompute_grad_x_stencil_read[2] = bank_157[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==157) begin
        op_hcompute_grad_x_stencil_read[3] = bank_157[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==157) begin
        op_hcompute_grad_x_stencil_read[4] = bank_157[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==157) begin
        op_hcompute_grad_x_stencil_read[5] = bank_157[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==157) begin
        op_hcompute_grad_y_stencil_read[1] = bank_157[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==157) begin
        op_hcompute_grad_y_stencil_read[5] = bank_157[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==158) begin
        op_hcompute_grad_x_stencil_read[0] = bank_158[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==158) begin
        op_hcompute_grad_x_stencil_read[1] = bank_158[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==158) begin
        op_hcompute_grad_x_stencil_read[2] = bank_158[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==158) begin
        op_hcompute_grad_x_stencil_read[3] = bank_158[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==158) begin
        op_hcompute_grad_x_stencil_read[4] = bank_158[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==158) begin
        op_hcompute_grad_x_stencil_read[5] = bank_158[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==158) begin
        op_hcompute_grad_y_stencil_read[1] = bank_158[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==158) begin
        op_hcompute_grad_y_stencil_read[5] = bank_158[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==159) begin
        op_hcompute_grad_x_stencil_read[0] = bank_159[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==159) begin
        op_hcompute_grad_x_stencil_read[1] = bank_159[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==159) begin
        op_hcompute_grad_x_stencil_read[2] = bank_159[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==159) begin
        op_hcompute_grad_x_stencil_read[3] = bank_159[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==159) begin
        op_hcompute_grad_x_stencil_read[4] = bank_159[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==159) begin
        op_hcompute_grad_x_stencil_read[5] = bank_159[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==159) begin
        op_hcompute_grad_y_stencil_read[1] = bank_159[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==159) begin
        op_hcompute_grad_y_stencil_read[5] = bank_159[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==160) begin
        op_hcompute_grad_x_stencil_read[0] = bank_160[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==160) begin
        op_hcompute_grad_x_stencil_read[1] = bank_160[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==160) begin
        op_hcompute_grad_x_stencil_read[2] = bank_160[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==160) begin
        op_hcompute_grad_x_stencil_read[3] = bank_160[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==160) begin
        op_hcompute_grad_x_stencil_read[4] = bank_160[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==160) begin
        op_hcompute_grad_x_stencil_read[5] = bank_160[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==160) begin
        op_hcompute_grad_y_stencil_read[1] = bank_160[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==160) begin
        op_hcompute_grad_y_stencil_read[5] = bank_160[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==161) begin
        op_hcompute_grad_x_stencil_read[0] = bank_161[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==161) begin
        op_hcompute_grad_x_stencil_read[1] = bank_161[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==161) begin
        op_hcompute_grad_x_stencil_read[2] = bank_161[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==161) begin
        op_hcompute_grad_x_stencil_read[3] = bank_161[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==161) begin
        op_hcompute_grad_x_stencil_read[4] = bank_161[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==161) begin
        op_hcompute_grad_x_stencil_read[5] = bank_161[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==161) begin
        op_hcompute_grad_y_stencil_read[1] = bank_161[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==161) begin
        op_hcompute_grad_y_stencil_read[5] = bank_161[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==162) begin
        op_hcompute_grad_x_stencil_read[0] = bank_162[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==162) begin
        op_hcompute_grad_x_stencil_read[1] = bank_162[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==162) begin
        op_hcompute_grad_x_stencil_read[2] = bank_162[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==162) begin
        op_hcompute_grad_x_stencil_read[3] = bank_162[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==162) begin
        op_hcompute_grad_x_stencil_read[4] = bank_162[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==162) begin
        op_hcompute_grad_x_stencil_read[5] = bank_162[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==162) begin
        op_hcompute_grad_y_stencil_read[1] = bank_162[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==162) begin
        op_hcompute_grad_y_stencil_read[5] = bank_162[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==163) begin
        op_hcompute_grad_x_stencil_read[0] = bank_163[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==163) begin
        op_hcompute_grad_x_stencil_read[1] = bank_163[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==163) begin
        op_hcompute_grad_x_stencil_read[2] = bank_163[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==163) begin
        op_hcompute_grad_x_stencil_read[3] = bank_163[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==163) begin
        op_hcompute_grad_x_stencil_read[4] = bank_163[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==163) begin
        op_hcompute_grad_x_stencil_read[5] = bank_163[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==163) begin
        op_hcompute_grad_y_stencil_read[1] = bank_163[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==163) begin
        op_hcompute_grad_y_stencil_read[5] = bank_163[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==164) begin
        op_hcompute_grad_x_stencil_read[0] = bank_164[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==164) begin
        op_hcompute_grad_x_stencil_read[1] = bank_164[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==164) begin
        op_hcompute_grad_x_stencil_read[2] = bank_164[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==164) begin
        op_hcompute_grad_x_stencil_read[3] = bank_164[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==164) begin
        op_hcompute_grad_x_stencil_read[4] = bank_164[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==164) begin
        op_hcompute_grad_x_stencil_read[5] = bank_164[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==164) begin
        op_hcompute_grad_y_stencil_read[1] = bank_164[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==164) begin
        op_hcompute_grad_y_stencil_read[5] = bank_164[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==165) begin
        op_hcompute_grad_x_stencil_read[0] = bank_165[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==165) begin
        op_hcompute_grad_x_stencil_read[1] = bank_165[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==165) begin
        op_hcompute_grad_x_stencil_read[2] = bank_165[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==165) begin
        op_hcompute_grad_x_stencil_read[3] = bank_165[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==165) begin
        op_hcompute_grad_x_stencil_read[4] = bank_165[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==165) begin
        op_hcompute_grad_x_stencil_read[5] = bank_165[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==165) begin
        op_hcompute_grad_y_stencil_read[1] = bank_165[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==165) begin
        op_hcompute_grad_y_stencil_read[5] = bank_165[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==166) begin
        op_hcompute_grad_x_stencil_read[0] = bank_166[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==166) begin
        op_hcompute_grad_x_stencil_read[1] = bank_166[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==166) begin
        op_hcompute_grad_x_stencil_read[2] = bank_166[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==166) begin
        op_hcompute_grad_x_stencil_read[3] = bank_166[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==166) begin
        op_hcompute_grad_x_stencil_read[4] = bank_166[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==166) begin
        op_hcompute_grad_x_stencil_read[5] = bank_166[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==166) begin
        op_hcompute_grad_y_stencil_read[1] = bank_166[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==166) begin
        op_hcompute_grad_y_stencil_read[5] = bank_166[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==167) begin
        op_hcompute_grad_x_stencil_read[0] = bank_167[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==167) begin
        op_hcompute_grad_x_stencil_read[1] = bank_167[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==167) begin
        op_hcompute_grad_x_stencil_read[2] = bank_167[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==167) begin
        op_hcompute_grad_x_stencil_read[3] = bank_167[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==167) begin
        op_hcompute_grad_x_stencil_read[4] = bank_167[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==167) begin
        op_hcompute_grad_x_stencil_read[5] = bank_167[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==167) begin
        op_hcompute_grad_y_stencil_read[1] = bank_167[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==167) begin
        op_hcompute_grad_y_stencil_read[5] = bank_167[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==168) begin
        op_hcompute_grad_x_stencil_read[0] = bank_168[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==168) begin
        op_hcompute_grad_x_stencil_read[1] = bank_168[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==168) begin
        op_hcompute_grad_x_stencil_read[2] = bank_168[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==168) begin
        op_hcompute_grad_x_stencil_read[3] = bank_168[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==168) begin
        op_hcompute_grad_x_stencil_read[4] = bank_168[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==168) begin
        op_hcompute_grad_x_stencil_read[5] = bank_168[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==168) begin
        op_hcompute_grad_y_stencil_read[1] = bank_168[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==168) begin
        op_hcompute_grad_y_stencil_read[5] = bank_168[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==169) begin
        op_hcompute_grad_x_stencil_read[0] = bank_169[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==169) begin
        op_hcompute_grad_x_stencil_read[1] = bank_169[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==169) begin
        op_hcompute_grad_x_stencil_read[2] = bank_169[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==169) begin
        op_hcompute_grad_x_stencil_read[3] = bank_169[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==169) begin
        op_hcompute_grad_x_stencil_read[4] = bank_169[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==169) begin
        op_hcompute_grad_x_stencil_read[5] = bank_169[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==169) begin
        op_hcompute_grad_y_stencil_read[1] = bank_169[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==169) begin
        op_hcompute_grad_y_stencil_read[5] = bank_169[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==170) begin
        op_hcompute_grad_x_stencil_read[0] = bank_170[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==170) begin
        op_hcompute_grad_x_stencil_read[1] = bank_170[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==170) begin
        op_hcompute_grad_x_stencil_read[2] = bank_170[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==170) begin
        op_hcompute_grad_x_stencil_read[3] = bank_170[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==170) begin
        op_hcompute_grad_x_stencil_read[4] = bank_170[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==170) begin
        op_hcompute_grad_x_stencil_read[5] = bank_170[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==170) begin
        op_hcompute_grad_y_stencil_read[1] = bank_170[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==170) begin
        op_hcompute_grad_y_stencil_read[5] = bank_170[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==171) begin
        op_hcompute_grad_x_stencil_read[0] = bank_171[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==171) begin
        op_hcompute_grad_x_stencil_read[1] = bank_171[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==171) begin
        op_hcompute_grad_x_stencil_read[2] = bank_171[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==171) begin
        op_hcompute_grad_x_stencil_read[3] = bank_171[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==171) begin
        op_hcompute_grad_x_stencil_read[4] = bank_171[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==171) begin
        op_hcompute_grad_x_stencil_read[5] = bank_171[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==171) begin
        op_hcompute_grad_y_stencil_read[1] = bank_171[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==171) begin
        op_hcompute_grad_y_stencil_read[5] = bank_171[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==172) begin
        op_hcompute_grad_x_stencil_read[0] = bank_172[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==172) begin
        op_hcompute_grad_x_stencil_read[1] = bank_172[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==172) begin
        op_hcompute_grad_x_stencil_read[2] = bank_172[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==172) begin
        op_hcompute_grad_x_stencil_read[3] = bank_172[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==172) begin
        op_hcompute_grad_x_stencil_read[4] = bank_172[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==172) begin
        op_hcompute_grad_x_stencil_read[5] = bank_172[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==172) begin
        op_hcompute_grad_y_stencil_read[1] = bank_172[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==172) begin
        op_hcompute_grad_y_stencil_read[5] = bank_172[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==173) begin
        op_hcompute_grad_x_stencil_read[0] = bank_173[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==173) begin
        op_hcompute_grad_x_stencil_read[1] = bank_173[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==173) begin
        op_hcompute_grad_x_stencil_read[2] = bank_173[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==173) begin
        op_hcompute_grad_x_stencil_read[3] = bank_173[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==173) begin
        op_hcompute_grad_x_stencil_read[4] = bank_173[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==173) begin
        op_hcompute_grad_x_stencil_read[5] = bank_173[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==173) begin
        op_hcompute_grad_y_stencil_read[1] = bank_173[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==173) begin
        op_hcompute_grad_y_stencil_read[5] = bank_173[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==174) begin
        op_hcompute_grad_x_stencil_read[0] = bank_174[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==174) begin
        op_hcompute_grad_x_stencil_read[1] = bank_174[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==174) begin
        op_hcompute_grad_x_stencil_read[2] = bank_174[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==174) begin
        op_hcompute_grad_x_stencil_read[3] = bank_174[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==174) begin
        op_hcompute_grad_x_stencil_read[4] = bank_174[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==174) begin
        op_hcompute_grad_x_stencil_read[5] = bank_174[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==174) begin
        op_hcompute_grad_y_stencil_read[1] = bank_174[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==174) begin
        op_hcompute_grad_y_stencil_read[5] = bank_174[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==175) begin
        op_hcompute_grad_x_stencil_read[0] = bank_175[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==175) begin
        op_hcompute_grad_x_stencil_read[1] = bank_175[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==175) begin
        op_hcompute_grad_x_stencil_read[2] = bank_175[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==175) begin
        op_hcompute_grad_x_stencil_read[3] = bank_175[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==175) begin
        op_hcompute_grad_x_stencil_read[4] = bank_175[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==175) begin
        op_hcompute_grad_x_stencil_read[5] = bank_175[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==175) begin
        op_hcompute_grad_y_stencil_read[1] = bank_175[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==175) begin
        op_hcompute_grad_y_stencil_read[5] = bank_175[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==176) begin
        op_hcompute_grad_x_stencil_read[0] = bank_176[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==176) begin
        op_hcompute_grad_x_stencil_read[1] = bank_176[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==176) begin
        op_hcompute_grad_x_stencil_read[2] = bank_176[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==176) begin
        op_hcompute_grad_x_stencil_read[3] = bank_176[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==176) begin
        op_hcompute_grad_x_stencil_read[4] = bank_176[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==176) begin
        op_hcompute_grad_x_stencil_read[5] = bank_176[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==176) begin
        op_hcompute_grad_y_stencil_read[1] = bank_176[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==176) begin
        op_hcompute_grad_y_stencil_read[5] = bank_176[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==177) begin
        op_hcompute_grad_x_stencil_read[0] = bank_177[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==177) begin
        op_hcompute_grad_x_stencil_read[1] = bank_177[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==177) begin
        op_hcompute_grad_x_stencil_read[2] = bank_177[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==177) begin
        op_hcompute_grad_x_stencil_read[3] = bank_177[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==177) begin
        op_hcompute_grad_x_stencil_read[4] = bank_177[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==177) begin
        op_hcompute_grad_x_stencil_read[5] = bank_177[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==177) begin
        op_hcompute_grad_y_stencil_read[1] = bank_177[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==177) begin
        op_hcompute_grad_y_stencil_read[5] = bank_177[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==178) begin
        op_hcompute_grad_x_stencil_read[0] = bank_178[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==178) begin
        op_hcompute_grad_x_stencil_read[1] = bank_178[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==178) begin
        op_hcompute_grad_x_stencil_read[2] = bank_178[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==178) begin
        op_hcompute_grad_x_stencil_read[3] = bank_178[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==178) begin
        op_hcompute_grad_x_stencil_read[4] = bank_178[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==178) begin
        op_hcompute_grad_x_stencil_read[5] = bank_178[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==178) begin
        op_hcompute_grad_y_stencil_read[1] = bank_178[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==178) begin
        op_hcompute_grad_y_stencil_read[5] = bank_178[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==179) begin
        op_hcompute_grad_x_stencil_read[0] = bank_179[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==179) begin
        op_hcompute_grad_x_stencil_read[1] = bank_179[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==179) begin
        op_hcompute_grad_x_stencil_read[2] = bank_179[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==179) begin
        op_hcompute_grad_x_stencil_read[3] = bank_179[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==179) begin
        op_hcompute_grad_x_stencil_read[4] = bank_179[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==179) begin
        op_hcompute_grad_x_stencil_read[5] = bank_179[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==179) begin
        op_hcompute_grad_y_stencil_read[1] = bank_179[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==179) begin
        op_hcompute_grad_y_stencil_read[5] = bank_179[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==180) begin
        op_hcompute_grad_x_stencil_read[0] = bank_180[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==180) begin
        op_hcompute_grad_x_stencil_read[1] = bank_180[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==180) begin
        op_hcompute_grad_x_stencil_read[2] = bank_180[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==180) begin
        op_hcompute_grad_x_stencil_read[3] = bank_180[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==180) begin
        op_hcompute_grad_x_stencil_read[4] = bank_180[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==180) begin
        op_hcompute_grad_x_stencil_read[5] = bank_180[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==180) begin
        op_hcompute_grad_y_stencil_read[1] = bank_180[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==180) begin
        op_hcompute_grad_y_stencil_read[5] = bank_180[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==181) begin
        op_hcompute_grad_x_stencil_read[0] = bank_181[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==181) begin
        op_hcompute_grad_x_stencil_read[1] = bank_181[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==181) begin
        op_hcompute_grad_x_stencil_read[2] = bank_181[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==181) begin
        op_hcompute_grad_x_stencil_read[3] = bank_181[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==181) begin
        op_hcompute_grad_x_stencil_read[4] = bank_181[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==181) begin
        op_hcompute_grad_x_stencil_read[5] = bank_181[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==181) begin
        op_hcompute_grad_y_stencil_read[1] = bank_181[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==181) begin
        op_hcompute_grad_y_stencil_read[5] = bank_181[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==182) begin
        op_hcompute_grad_x_stencil_read[0] = bank_182[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==182) begin
        op_hcompute_grad_x_stencil_read[1] = bank_182[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==182) begin
        op_hcompute_grad_x_stencil_read[2] = bank_182[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==182) begin
        op_hcompute_grad_x_stencil_read[3] = bank_182[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==182) begin
        op_hcompute_grad_x_stencil_read[4] = bank_182[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==182) begin
        op_hcompute_grad_x_stencil_read[5] = bank_182[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==182) begin
        op_hcompute_grad_y_stencil_read[1] = bank_182[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==182) begin
        op_hcompute_grad_y_stencil_read[5] = bank_182[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==183) begin
        op_hcompute_grad_x_stencil_read[0] = bank_183[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==183) begin
        op_hcompute_grad_x_stencil_read[1] = bank_183[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==183) begin
        op_hcompute_grad_x_stencil_read[2] = bank_183[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==183) begin
        op_hcompute_grad_x_stencil_read[3] = bank_183[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==183) begin
        op_hcompute_grad_x_stencil_read[4] = bank_183[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==183) begin
        op_hcompute_grad_x_stencil_read[5] = bank_183[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==183) begin
        op_hcompute_grad_y_stencil_read[1] = bank_183[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==183) begin
        op_hcompute_grad_y_stencil_read[5] = bank_183[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==184) begin
        op_hcompute_grad_x_stencil_read[0] = bank_184[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==184) begin
        op_hcompute_grad_x_stencil_read[1] = bank_184[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==184) begin
        op_hcompute_grad_x_stencil_read[2] = bank_184[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==184) begin
        op_hcompute_grad_x_stencil_read[3] = bank_184[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==184) begin
        op_hcompute_grad_x_stencil_read[4] = bank_184[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==184) begin
        op_hcompute_grad_x_stencil_read[5] = bank_184[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==184) begin
        op_hcompute_grad_y_stencil_read[1] = bank_184[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==184) begin
        op_hcompute_grad_y_stencil_read[5] = bank_184[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==185) begin
        op_hcompute_grad_x_stencil_read[0] = bank_185[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==185) begin
        op_hcompute_grad_x_stencil_read[1] = bank_185[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==185) begin
        op_hcompute_grad_x_stencil_read[2] = bank_185[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==185) begin
        op_hcompute_grad_x_stencil_read[3] = bank_185[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==185) begin
        op_hcompute_grad_x_stencil_read[4] = bank_185[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==185) begin
        op_hcompute_grad_x_stencil_read[5] = bank_185[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==185) begin
        op_hcompute_grad_y_stencil_read[1] = bank_185[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==185) begin
        op_hcompute_grad_y_stencil_read[5] = bank_185[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==186) begin
        op_hcompute_grad_x_stencil_read[0] = bank_186[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==186) begin
        op_hcompute_grad_x_stencil_read[1] = bank_186[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==186) begin
        op_hcompute_grad_x_stencil_read[2] = bank_186[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==186) begin
        op_hcompute_grad_x_stencil_read[3] = bank_186[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==186) begin
        op_hcompute_grad_x_stencil_read[4] = bank_186[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==186) begin
        op_hcompute_grad_x_stencil_read[5] = bank_186[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==186) begin
        op_hcompute_grad_y_stencil_read[1] = bank_186[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==186) begin
        op_hcompute_grad_y_stencil_read[5] = bank_186[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==187) begin
        op_hcompute_grad_x_stencil_read[0] = bank_187[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==187) begin
        op_hcompute_grad_x_stencil_read[1] = bank_187[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==187) begin
        op_hcompute_grad_x_stencil_read[2] = bank_187[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==187) begin
        op_hcompute_grad_x_stencil_read[3] = bank_187[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==187) begin
        op_hcompute_grad_x_stencil_read[4] = bank_187[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==187) begin
        op_hcompute_grad_x_stencil_read[5] = bank_187[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==187) begin
        op_hcompute_grad_y_stencil_read[1] = bank_187[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==187) begin
        op_hcompute_grad_y_stencil_read[5] = bank_187[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==188) begin
        op_hcompute_grad_x_stencil_read[0] = bank_188[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==188) begin
        op_hcompute_grad_x_stencil_read[1] = bank_188[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==188) begin
        op_hcompute_grad_x_stencil_read[2] = bank_188[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==188) begin
        op_hcompute_grad_x_stencil_read[3] = bank_188[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==188) begin
        op_hcompute_grad_x_stencil_read[4] = bank_188[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==188) begin
        op_hcompute_grad_x_stencil_read[5] = bank_188[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==188) begin
        op_hcompute_grad_y_stencil_read[1] = bank_188[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==188) begin
        op_hcompute_grad_y_stencil_read[5] = bank_188[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==189) begin
        op_hcompute_grad_x_stencil_read[0] = bank_189[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==189) begin
        op_hcompute_grad_x_stencil_read[1] = bank_189[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==189) begin
        op_hcompute_grad_x_stencil_read[2] = bank_189[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==189) begin
        op_hcompute_grad_x_stencil_read[3] = bank_189[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==189) begin
        op_hcompute_grad_x_stencil_read[4] = bank_189[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==189) begin
        op_hcompute_grad_x_stencil_read[5] = bank_189[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==189) begin
        op_hcompute_grad_y_stencil_read[1] = bank_189[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==189) begin
        op_hcompute_grad_y_stencil_read[5] = bank_189[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==190) begin
        op_hcompute_grad_x_stencil_read[0] = bank_190[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==190) begin
        op_hcompute_grad_x_stencil_read[1] = bank_190[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==190) begin
        op_hcompute_grad_x_stencil_read[2] = bank_190[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==190) begin
        op_hcompute_grad_x_stencil_read[3] = bank_190[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==190) begin
        op_hcompute_grad_x_stencil_read[4] = bank_190[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==190) begin
        op_hcompute_grad_x_stencil_read[5] = bank_190[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==190) begin
        op_hcompute_grad_y_stencil_read[1] = bank_190[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==190) begin
        op_hcompute_grad_y_stencil_read[5] = bank_190[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==191) begin
        op_hcompute_grad_x_stencil_read[0] = bank_191[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==191) begin
        op_hcompute_grad_x_stencil_read[1] = bank_191[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==191) begin
        op_hcompute_grad_x_stencil_read[2] = bank_191[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==191) begin
        op_hcompute_grad_x_stencil_read[3] = bank_191[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==191) begin
        op_hcompute_grad_x_stencil_read[4] = bank_191[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==191) begin
        op_hcompute_grad_x_stencil_read[5] = bank_191[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==191) begin
        op_hcompute_grad_y_stencil_read[1] = bank_191[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==191) begin
        op_hcompute_grad_y_stencil_read[5] = bank_191[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==192) begin
        op_hcompute_grad_x_stencil_read[0] = bank_192[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==192) begin
        op_hcompute_grad_x_stencil_read[1] = bank_192[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==192) begin
        op_hcompute_grad_x_stencil_read[2] = bank_192[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==192) begin
        op_hcompute_grad_x_stencil_read[3] = bank_192[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==192) begin
        op_hcompute_grad_x_stencil_read[4] = bank_192[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==192) begin
        op_hcompute_grad_x_stencil_read[5] = bank_192[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==192) begin
        op_hcompute_grad_y_stencil_read[1] = bank_192[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==192) begin
        op_hcompute_grad_y_stencil_read[5] = bank_192[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==193) begin
        op_hcompute_grad_x_stencil_read[0] = bank_193[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==193) begin
        op_hcompute_grad_x_stencil_read[1] = bank_193[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==193) begin
        op_hcompute_grad_x_stencil_read[2] = bank_193[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==193) begin
        op_hcompute_grad_x_stencil_read[3] = bank_193[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==193) begin
        op_hcompute_grad_x_stencil_read[4] = bank_193[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==193) begin
        op_hcompute_grad_x_stencil_read[5] = bank_193[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==193) begin
        op_hcompute_grad_y_stencil_read[1] = bank_193[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==193) begin
        op_hcompute_grad_y_stencil_read[5] = bank_193[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==194) begin
        op_hcompute_grad_x_stencil_read[0] = bank_194[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==194) begin
        op_hcompute_grad_x_stencil_read[1] = bank_194[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==194) begin
        op_hcompute_grad_x_stencil_read[2] = bank_194[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==194) begin
        op_hcompute_grad_x_stencil_read[3] = bank_194[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==194) begin
        op_hcompute_grad_x_stencil_read[4] = bank_194[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==194) begin
        op_hcompute_grad_x_stencil_read[5] = bank_194[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==194) begin
        op_hcompute_grad_y_stencil_read[1] = bank_194[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==194) begin
        op_hcompute_grad_y_stencil_read[5] = bank_194[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==195) begin
        op_hcompute_grad_x_stencil_read[0] = bank_195[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==195) begin
        op_hcompute_grad_x_stencil_read[1] = bank_195[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==195) begin
        op_hcompute_grad_x_stencil_read[2] = bank_195[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==195) begin
        op_hcompute_grad_x_stencil_read[3] = bank_195[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==195) begin
        op_hcompute_grad_x_stencil_read[4] = bank_195[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==195) begin
        op_hcompute_grad_x_stencil_read[5] = bank_195[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==195) begin
        op_hcompute_grad_y_stencil_read[1] = bank_195[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==195) begin
        op_hcompute_grad_y_stencil_read[5] = bank_195[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==196) begin
        op_hcompute_grad_x_stencil_read[0] = bank_196[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==196) begin
        op_hcompute_grad_x_stencil_read[1] = bank_196[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==196) begin
        op_hcompute_grad_x_stencil_read[2] = bank_196[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==196) begin
        op_hcompute_grad_x_stencil_read[3] = bank_196[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==196) begin
        op_hcompute_grad_x_stencil_read[4] = bank_196[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==196) begin
        op_hcompute_grad_x_stencil_read[5] = bank_196[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==196) begin
        op_hcompute_grad_y_stencil_read[1] = bank_196[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==196) begin
        op_hcompute_grad_y_stencil_read[5] = bank_196[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==197) begin
        op_hcompute_grad_x_stencil_read[0] = bank_197[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==197) begin
        op_hcompute_grad_x_stencil_read[1] = bank_197[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==197) begin
        op_hcompute_grad_x_stencil_read[2] = bank_197[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==197) begin
        op_hcompute_grad_x_stencil_read[3] = bank_197[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==197) begin
        op_hcompute_grad_x_stencil_read[4] = bank_197[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==197) begin
        op_hcompute_grad_x_stencil_read[5] = bank_197[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==197) begin
        op_hcompute_grad_y_stencil_read[1] = bank_197[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==197) begin
        op_hcompute_grad_y_stencil_read[5] = bank_197[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==198) begin
        op_hcompute_grad_x_stencil_read[0] = bank_198[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==198) begin
        op_hcompute_grad_x_stencil_read[1] = bank_198[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==198) begin
        op_hcompute_grad_x_stencil_read[2] = bank_198[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==198) begin
        op_hcompute_grad_x_stencil_read[3] = bank_198[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==198) begin
        op_hcompute_grad_x_stencil_read[4] = bank_198[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==198) begin
        op_hcompute_grad_x_stencil_read[5] = bank_198[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==198) begin
        op_hcompute_grad_y_stencil_read[1] = bank_198[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==198) begin
        op_hcompute_grad_y_stencil_read[5] = bank_198[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==199) begin
        op_hcompute_grad_x_stencil_read[0] = bank_199[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==199) begin
        op_hcompute_grad_x_stencil_read[1] = bank_199[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==199) begin
        op_hcompute_grad_x_stencil_read[2] = bank_199[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==199) begin
        op_hcompute_grad_x_stencil_read[3] = bank_199[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==199) begin
        op_hcompute_grad_x_stencil_read[4] = bank_199[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==199) begin
        op_hcompute_grad_x_stencil_read[5] = bank_199[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==199) begin
        op_hcompute_grad_y_stencil_read[1] = bank_199[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==199) begin
        op_hcompute_grad_y_stencil_read[5] = bank_199[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==200) begin
        op_hcompute_grad_x_stencil_read[0] = bank_200[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==200) begin
        op_hcompute_grad_x_stencil_read[1] = bank_200[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==200) begin
        op_hcompute_grad_x_stencil_read[2] = bank_200[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==200) begin
        op_hcompute_grad_x_stencil_read[3] = bank_200[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==200) begin
        op_hcompute_grad_x_stencil_read[4] = bank_200[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==200) begin
        op_hcompute_grad_x_stencil_read[5] = bank_200[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==200) begin
        op_hcompute_grad_y_stencil_read[1] = bank_200[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==200) begin
        op_hcompute_grad_y_stencil_read[5] = bank_200[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==201) begin
        op_hcompute_grad_x_stencil_read[0] = bank_201[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==201) begin
        op_hcompute_grad_x_stencil_read[1] = bank_201[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==201) begin
        op_hcompute_grad_x_stencil_read[2] = bank_201[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==201) begin
        op_hcompute_grad_x_stencil_read[3] = bank_201[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==201) begin
        op_hcompute_grad_x_stencil_read[4] = bank_201[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==201) begin
        op_hcompute_grad_x_stencil_read[5] = bank_201[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==201) begin
        op_hcompute_grad_y_stencil_read[1] = bank_201[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==201) begin
        op_hcompute_grad_y_stencil_read[5] = bank_201[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==202) begin
        op_hcompute_grad_x_stencil_read[0] = bank_202[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==202) begin
        op_hcompute_grad_x_stencil_read[1] = bank_202[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==202) begin
        op_hcompute_grad_x_stencil_read[2] = bank_202[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==202) begin
        op_hcompute_grad_x_stencil_read[3] = bank_202[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==202) begin
        op_hcompute_grad_x_stencil_read[4] = bank_202[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==202) begin
        op_hcompute_grad_x_stencil_read[5] = bank_202[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==202) begin
        op_hcompute_grad_y_stencil_read[1] = bank_202[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==202) begin
        op_hcompute_grad_y_stencil_read[5] = bank_202[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==203) begin
        op_hcompute_grad_x_stencil_read[0] = bank_203[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==203) begin
        op_hcompute_grad_x_stencil_read[1] = bank_203[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==203) begin
        op_hcompute_grad_x_stencil_read[2] = bank_203[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==203) begin
        op_hcompute_grad_x_stencil_read[3] = bank_203[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==203) begin
        op_hcompute_grad_x_stencil_read[4] = bank_203[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==203) begin
        op_hcompute_grad_x_stencil_read[5] = bank_203[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==203) begin
        op_hcompute_grad_y_stencil_read[1] = bank_203[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==203) begin
        op_hcompute_grad_y_stencil_read[5] = bank_203[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==204) begin
        op_hcompute_grad_x_stencil_read[0] = bank_204[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==204) begin
        op_hcompute_grad_x_stencil_read[1] = bank_204[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==204) begin
        op_hcompute_grad_x_stencil_read[2] = bank_204[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==204) begin
        op_hcompute_grad_x_stencil_read[3] = bank_204[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==204) begin
        op_hcompute_grad_x_stencil_read[4] = bank_204[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==204) begin
        op_hcompute_grad_x_stencil_read[5] = bank_204[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==204) begin
        op_hcompute_grad_y_stencil_read[1] = bank_204[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==204) begin
        op_hcompute_grad_y_stencil_read[5] = bank_204[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==205) begin
        op_hcompute_grad_x_stencil_read[0] = bank_205[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==205) begin
        op_hcompute_grad_x_stencil_read[1] = bank_205[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==205) begin
        op_hcompute_grad_x_stencil_read[2] = bank_205[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==205) begin
        op_hcompute_grad_x_stencil_read[3] = bank_205[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==205) begin
        op_hcompute_grad_x_stencil_read[4] = bank_205[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==205) begin
        op_hcompute_grad_x_stencil_read[5] = bank_205[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==205) begin
        op_hcompute_grad_y_stencil_read[1] = bank_205[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==205) begin
        op_hcompute_grad_y_stencil_read[5] = bank_205[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==206) begin
        op_hcompute_grad_x_stencil_read[0] = bank_206[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==206) begin
        op_hcompute_grad_x_stencil_read[1] = bank_206[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==206) begin
        op_hcompute_grad_x_stencil_read[2] = bank_206[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==206) begin
        op_hcompute_grad_x_stencil_read[3] = bank_206[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==206) begin
        op_hcompute_grad_x_stencil_read[4] = bank_206[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==206) begin
        op_hcompute_grad_x_stencil_read[5] = bank_206[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==206) begin
        op_hcompute_grad_y_stencil_read[1] = bank_206[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==206) begin
        op_hcompute_grad_y_stencil_read[5] = bank_206[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==207) begin
        op_hcompute_grad_x_stencil_read[0] = bank_207[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==207) begin
        op_hcompute_grad_x_stencil_read[1] = bank_207[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==207) begin
        op_hcompute_grad_x_stencil_read[2] = bank_207[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==207) begin
        op_hcompute_grad_x_stencil_read[3] = bank_207[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==207) begin
        op_hcompute_grad_x_stencil_read[4] = bank_207[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==207) begin
        op_hcompute_grad_x_stencil_read[5] = bank_207[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==207) begin
        op_hcompute_grad_y_stencil_read[1] = bank_207[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==207) begin
        op_hcompute_grad_y_stencil_read[5] = bank_207[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==208) begin
        op_hcompute_grad_x_stencil_read[0] = bank_208[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==208) begin
        op_hcompute_grad_x_stencil_read[1] = bank_208[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==208) begin
        op_hcompute_grad_x_stencil_read[2] = bank_208[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==208) begin
        op_hcompute_grad_x_stencil_read[3] = bank_208[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==208) begin
        op_hcompute_grad_x_stencil_read[4] = bank_208[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==208) begin
        op_hcompute_grad_x_stencil_read[5] = bank_208[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==208) begin
        op_hcompute_grad_y_stencil_read[1] = bank_208[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==208) begin
        op_hcompute_grad_y_stencil_read[5] = bank_208[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==209) begin
        op_hcompute_grad_x_stencil_read[0] = bank_209[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==209) begin
        op_hcompute_grad_x_stencil_read[1] = bank_209[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==209) begin
        op_hcompute_grad_x_stencil_read[2] = bank_209[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==209) begin
        op_hcompute_grad_x_stencil_read[3] = bank_209[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==209) begin
        op_hcompute_grad_x_stencil_read[4] = bank_209[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==209) begin
        op_hcompute_grad_x_stencil_read[5] = bank_209[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==209) begin
        op_hcompute_grad_y_stencil_read[1] = bank_209[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==209) begin
        op_hcompute_grad_y_stencil_read[5] = bank_209[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==210) begin
        op_hcompute_grad_x_stencil_read[0] = bank_210[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==210) begin
        op_hcompute_grad_x_stencil_read[1] = bank_210[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==210) begin
        op_hcompute_grad_x_stencil_read[2] = bank_210[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==210) begin
        op_hcompute_grad_x_stencil_read[3] = bank_210[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==210) begin
        op_hcompute_grad_x_stencil_read[4] = bank_210[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==210) begin
        op_hcompute_grad_x_stencil_read[5] = bank_210[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==210) begin
        op_hcompute_grad_y_stencil_read[1] = bank_210[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==210) begin
        op_hcompute_grad_y_stencil_read[5] = bank_210[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==211) begin
        op_hcompute_grad_x_stencil_read[0] = bank_211[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==211) begin
        op_hcompute_grad_x_stencil_read[1] = bank_211[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==211) begin
        op_hcompute_grad_x_stencil_read[2] = bank_211[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==211) begin
        op_hcompute_grad_x_stencil_read[3] = bank_211[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==211) begin
        op_hcompute_grad_x_stencil_read[4] = bank_211[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==211) begin
        op_hcompute_grad_x_stencil_read[5] = bank_211[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==211) begin
        op_hcompute_grad_y_stencil_read[1] = bank_211[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==211) begin
        op_hcompute_grad_y_stencil_read[5] = bank_211[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==212) begin
        op_hcompute_grad_x_stencil_read[0] = bank_212[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==212) begin
        op_hcompute_grad_x_stencil_read[1] = bank_212[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==212) begin
        op_hcompute_grad_x_stencil_read[2] = bank_212[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==212) begin
        op_hcompute_grad_x_stencil_read[3] = bank_212[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==212) begin
        op_hcompute_grad_x_stencil_read[4] = bank_212[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==212) begin
        op_hcompute_grad_x_stencil_read[5] = bank_212[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==212) begin
        op_hcompute_grad_y_stencil_read[1] = bank_212[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==212) begin
        op_hcompute_grad_y_stencil_read[5] = bank_212[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==213) begin
        op_hcompute_grad_x_stencil_read[0] = bank_213[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==213) begin
        op_hcompute_grad_x_stencil_read[1] = bank_213[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==213) begin
        op_hcompute_grad_x_stencil_read[2] = bank_213[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==213) begin
        op_hcompute_grad_x_stencil_read[3] = bank_213[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==213) begin
        op_hcompute_grad_x_stencil_read[4] = bank_213[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==213) begin
        op_hcompute_grad_x_stencil_read[5] = bank_213[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==213) begin
        op_hcompute_grad_y_stencil_read[1] = bank_213[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==213) begin
        op_hcompute_grad_y_stencil_read[5] = bank_213[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==214) begin
        op_hcompute_grad_x_stencil_read[0] = bank_214[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==214) begin
        op_hcompute_grad_x_stencil_read[1] = bank_214[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==214) begin
        op_hcompute_grad_x_stencil_read[2] = bank_214[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==214) begin
        op_hcompute_grad_x_stencil_read[3] = bank_214[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==214) begin
        op_hcompute_grad_x_stencil_read[4] = bank_214[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==214) begin
        op_hcompute_grad_x_stencil_read[5] = bank_214[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==214) begin
        op_hcompute_grad_y_stencil_read[1] = bank_214[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==214) begin
        op_hcompute_grad_y_stencil_read[5] = bank_214[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==215) begin
        op_hcompute_grad_x_stencil_read[0] = bank_215[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==215) begin
        op_hcompute_grad_x_stencil_read[1] = bank_215[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==215) begin
        op_hcompute_grad_x_stencil_read[2] = bank_215[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==215) begin
        op_hcompute_grad_x_stencil_read[3] = bank_215[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==215) begin
        op_hcompute_grad_x_stencil_read[4] = bank_215[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==215) begin
        op_hcompute_grad_x_stencil_read[5] = bank_215[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==215) begin
        op_hcompute_grad_y_stencil_read[1] = bank_215[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==215) begin
        op_hcompute_grad_y_stencil_read[5] = bank_215[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==216) begin
        op_hcompute_grad_x_stencil_read[0] = bank_216[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==216) begin
        op_hcompute_grad_x_stencil_read[1] = bank_216[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==216) begin
        op_hcompute_grad_x_stencil_read[2] = bank_216[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==216) begin
        op_hcompute_grad_x_stencil_read[3] = bank_216[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==216) begin
        op_hcompute_grad_x_stencil_read[4] = bank_216[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==216) begin
        op_hcompute_grad_x_stencil_read[5] = bank_216[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==216) begin
        op_hcompute_grad_y_stencil_read[1] = bank_216[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==216) begin
        op_hcompute_grad_y_stencil_read[5] = bank_216[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==217) begin
        op_hcompute_grad_x_stencil_read[0] = bank_217[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==217) begin
        op_hcompute_grad_x_stencil_read[1] = bank_217[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==217) begin
        op_hcompute_grad_x_stencil_read[2] = bank_217[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==217) begin
        op_hcompute_grad_x_stencil_read[3] = bank_217[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==217) begin
        op_hcompute_grad_x_stencil_read[4] = bank_217[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==217) begin
        op_hcompute_grad_x_stencil_read[5] = bank_217[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==217) begin
        op_hcompute_grad_y_stencil_read[1] = bank_217[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==217) begin
        op_hcompute_grad_y_stencil_read[5] = bank_217[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==218) begin
        op_hcompute_grad_x_stencil_read[0] = bank_218[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==218) begin
        op_hcompute_grad_x_stencil_read[1] = bank_218[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==218) begin
        op_hcompute_grad_x_stencil_read[2] = bank_218[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==218) begin
        op_hcompute_grad_x_stencil_read[3] = bank_218[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==218) begin
        op_hcompute_grad_x_stencil_read[4] = bank_218[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==218) begin
        op_hcompute_grad_x_stencil_read[5] = bank_218[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==218) begin
        op_hcompute_grad_y_stencil_read[1] = bank_218[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==218) begin
        op_hcompute_grad_y_stencil_read[5] = bank_218[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==219) begin
        op_hcompute_grad_x_stencil_read[0] = bank_219[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==219) begin
        op_hcompute_grad_x_stencil_read[1] = bank_219[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==219) begin
        op_hcompute_grad_x_stencil_read[2] = bank_219[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==219) begin
        op_hcompute_grad_x_stencil_read[3] = bank_219[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==219) begin
        op_hcompute_grad_x_stencil_read[4] = bank_219[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==219) begin
        op_hcompute_grad_x_stencil_read[5] = bank_219[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==219) begin
        op_hcompute_grad_y_stencil_read[1] = bank_219[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==219) begin
        op_hcompute_grad_y_stencil_read[5] = bank_219[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==220) begin
        op_hcompute_grad_x_stencil_read[0] = bank_220[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==220) begin
        op_hcompute_grad_x_stencil_read[1] = bank_220[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==220) begin
        op_hcompute_grad_x_stencil_read[2] = bank_220[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==220) begin
        op_hcompute_grad_x_stencil_read[3] = bank_220[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==220) begin
        op_hcompute_grad_x_stencil_read[4] = bank_220[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==220) begin
        op_hcompute_grad_x_stencil_read[5] = bank_220[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==220) begin
        op_hcompute_grad_y_stencil_read[1] = bank_220[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==220) begin
        op_hcompute_grad_y_stencil_read[5] = bank_220[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==221) begin
        op_hcompute_grad_x_stencil_read[0] = bank_221[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==221) begin
        op_hcompute_grad_x_stencil_read[1] = bank_221[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==221) begin
        op_hcompute_grad_x_stencil_read[2] = bank_221[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==221) begin
        op_hcompute_grad_x_stencil_read[3] = bank_221[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==221) begin
        op_hcompute_grad_x_stencil_read[4] = bank_221[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==221) begin
        op_hcompute_grad_x_stencil_read[5] = bank_221[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==221) begin
        op_hcompute_grad_y_stencil_read[1] = bank_221[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==221) begin
        op_hcompute_grad_y_stencil_read[5] = bank_221[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==222) begin
        op_hcompute_grad_x_stencil_read[0] = bank_222[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==222) begin
        op_hcompute_grad_x_stencil_read[1] = bank_222[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==222) begin
        op_hcompute_grad_x_stencil_read[2] = bank_222[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==222) begin
        op_hcompute_grad_x_stencil_read[3] = bank_222[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==222) begin
        op_hcompute_grad_x_stencil_read[4] = bank_222[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==222) begin
        op_hcompute_grad_x_stencil_read[5] = bank_222[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==222) begin
        op_hcompute_grad_y_stencil_read[1] = bank_222[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==222) begin
        op_hcompute_grad_y_stencil_read[5] = bank_222[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==223) begin
        op_hcompute_grad_x_stencil_read[0] = bank_223[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==223) begin
        op_hcompute_grad_x_stencil_read[1] = bank_223[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==223) begin
        op_hcompute_grad_x_stencil_read[2] = bank_223[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==223) begin
        op_hcompute_grad_x_stencil_read[3] = bank_223[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==223) begin
        op_hcompute_grad_x_stencil_read[4] = bank_223[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==223) begin
        op_hcompute_grad_x_stencil_read[5] = bank_223[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==223) begin
        op_hcompute_grad_y_stencil_read[1] = bank_223[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==223) begin
        op_hcompute_grad_y_stencil_read[5] = bank_223[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==224) begin
        op_hcompute_grad_x_stencil_read[0] = bank_224[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==224) begin
        op_hcompute_grad_x_stencil_read[1] = bank_224[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==224) begin
        op_hcompute_grad_x_stencil_read[2] = bank_224[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==224) begin
        op_hcompute_grad_x_stencil_read[3] = bank_224[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==224) begin
        op_hcompute_grad_x_stencil_read[4] = bank_224[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==224) begin
        op_hcompute_grad_x_stencil_read[5] = bank_224[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==224) begin
        op_hcompute_grad_y_stencil_read[1] = bank_224[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==224) begin
        op_hcompute_grad_y_stencil_read[5] = bank_224[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==225) begin
        op_hcompute_grad_x_stencil_read[0] = bank_225[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==225) begin
        op_hcompute_grad_x_stencil_read[1] = bank_225[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==225) begin
        op_hcompute_grad_x_stencil_read[2] = bank_225[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==225) begin
        op_hcompute_grad_x_stencil_read[3] = bank_225[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==225) begin
        op_hcompute_grad_x_stencil_read[4] = bank_225[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==225) begin
        op_hcompute_grad_x_stencil_read[5] = bank_225[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==225) begin
        op_hcompute_grad_y_stencil_read[1] = bank_225[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==225) begin
        op_hcompute_grad_y_stencil_read[5] = bank_225[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==226) begin
        op_hcompute_grad_x_stencil_read[0] = bank_226[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==226) begin
        op_hcompute_grad_x_stencil_read[1] = bank_226[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==226) begin
        op_hcompute_grad_x_stencil_read[2] = bank_226[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==226) begin
        op_hcompute_grad_x_stencil_read[3] = bank_226[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==226) begin
        op_hcompute_grad_x_stencil_read[4] = bank_226[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==226) begin
        op_hcompute_grad_x_stencil_read[5] = bank_226[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==226) begin
        op_hcompute_grad_y_stencil_read[1] = bank_226[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==226) begin
        op_hcompute_grad_y_stencil_read[5] = bank_226[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==227) begin
        op_hcompute_grad_x_stencil_read[0] = bank_227[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==227) begin
        op_hcompute_grad_x_stencil_read[1] = bank_227[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==227) begin
        op_hcompute_grad_x_stencil_read[2] = bank_227[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==227) begin
        op_hcompute_grad_x_stencil_read[3] = bank_227[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==227) begin
        op_hcompute_grad_x_stencil_read[4] = bank_227[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==227) begin
        op_hcompute_grad_x_stencil_read[5] = bank_227[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==227) begin
        op_hcompute_grad_y_stencil_read[1] = bank_227[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==227) begin
        op_hcompute_grad_y_stencil_read[5] = bank_227[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==228) begin
        op_hcompute_grad_x_stencil_read[0] = bank_228[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==228) begin
        op_hcompute_grad_x_stencil_read[1] = bank_228[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==228) begin
        op_hcompute_grad_x_stencil_read[2] = bank_228[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==228) begin
        op_hcompute_grad_x_stencil_read[3] = bank_228[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==228) begin
        op_hcompute_grad_x_stencil_read[4] = bank_228[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==228) begin
        op_hcompute_grad_x_stencil_read[5] = bank_228[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==228) begin
        op_hcompute_grad_y_stencil_read[1] = bank_228[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==228) begin
        op_hcompute_grad_y_stencil_read[5] = bank_228[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==229) begin
        op_hcompute_grad_x_stencil_read[0] = bank_229[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==229) begin
        op_hcompute_grad_x_stencil_read[1] = bank_229[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==229) begin
        op_hcompute_grad_x_stencil_read[2] = bank_229[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==229) begin
        op_hcompute_grad_x_stencil_read[3] = bank_229[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==229) begin
        op_hcompute_grad_x_stencil_read[4] = bank_229[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==229) begin
        op_hcompute_grad_x_stencil_read[5] = bank_229[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==229) begin
        op_hcompute_grad_y_stencil_read[1] = bank_229[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==229) begin
        op_hcompute_grad_y_stencil_read[5] = bank_229[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==230) begin
        op_hcompute_grad_x_stencil_read[0] = bank_230[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==230) begin
        op_hcompute_grad_x_stencil_read[1] = bank_230[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==230) begin
        op_hcompute_grad_x_stencil_read[2] = bank_230[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==230) begin
        op_hcompute_grad_x_stencil_read[3] = bank_230[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==230) begin
        op_hcompute_grad_x_stencil_read[4] = bank_230[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==230) begin
        op_hcompute_grad_x_stencil_read[5] = bank_230[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==230) begin
        op_hcompute_grad_y_stencil_read[1] = bank_230[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==230) begin
        op_hcompute_grad_y_stencil_read[5] = bank_230[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==231) begin
        op_hcompute_grad_x_stencil_read[0] = bank_231[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==231) begin
        op_hcompute_grad_x_stencil_read[1] = bank_231[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==231) begin
        op_hcompute_grad_x_stencil_read[2] = bank_231[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==231) begin
        op_hcompute_grad_x_stencil_read[3] = bank_231[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==231) begin
        op_hcompute_grad_x_stencil_read[4] = bank_231[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==231) begin
        op_hcompute_grad_x_stencil_read[5] = bank_231[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==231) begin
        op_hcompute_grad_y_stencil_read[1] = bank_231[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==231) begin
        op_hcompute_grad_y_stencil_read[5] = bank_231[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==232) begin
        op_hcompute_grad_x_stencil_read[0] = bank_232[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==232) begin
        op_hcompute_grad_x_stencil_read[1] = bank_232[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==232) begin
        op_hcompute_grad_x_stencil_read[2] = bank_232[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==232) begin
        op_hcompute_grad_x_stencil_read[3] = bank_232[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==232) begin
        op_hcompute_grad_x_stencil_read[4] = bank_232[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==232) begin
        op_hcompute_grad_x_stencil_read[5] = bank_232[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==232) begin
        op_hcompute_grad_y_stencil_read[1] = bank_232[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==232) begin
        op_hcompute_grad_y_stencil_read[5] = bank_232[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==233) begin
        op_hcompute_grad_x_stencil_read[0] = bank_233[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==233) begin
        op_hcompute_grad_x_stencil_read[1] = bank_233[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==233) begin
        op_hcompute_grad_x_stencil_read[2] = bank_233[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==233) begin
        op_hcompute_grad_x_stencil_read[3] = bank_233[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==233) begin
        op_hcompute_grad_x_stencil_read[4] = bank_233[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==233) begin
        op_hcompute_grad_x_stencil_read[5] = bank_233[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==233) begin
        op_hcompute_grad_y_stencil_read[1] = bank_233[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==233) begin
        op_hcompute_grad_y_stencil_read[5] = bank_233[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==234) begin
        op_hcompute_grad_x_stencil_read[0] = bank_234[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==234) begin
        op_hcompute_grad_x_stencil_read[1] = bank_234[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==234) begin
        op_hcompute_grad_x_stencil_read[2] = bank_234[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==234) begin
        op_hcompute_grad_x_stencil_read[3] = bank_234[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==234) begin
        op_hcompute_grad_x_stencil_read[4] = bank_234[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==234) begin
        op_hcompute_grad_x_stencil_read[5] = bank_234[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==234) begin
        op_hcompute_grad_y_stencil_read[1] = bank_234[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==234) begin
        op_hcompute_grad_y_stencil_read[5] = bank_234[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==235) begin
        op_hcompute_grad_x_stencil_read[0] = bank_235[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==235) begin
        op_hcompute_grad_x_stencil_read[1] = bank_235[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==235) begin
        op_hcompute_grad_x_stencil_read[2] = bank_235[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==235) begin
        op_hcompute_grad_x_stencil_read[3] = bank_235[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==235) begin
        op_hcompute_grad_x_stencil_read[4] = bank_235[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==235) begin
        op_hcompute_grad_x_stencil_read[5] = bank_235[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==235) begin
        op_hcompute_grad_y_stencil_read[1] = bank_235[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==235) begin
        op_hcompute_grad_y_stencil_read[5] = bank_235[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==236) begin
        op_hcompute_grad_x_stencil_read[0] = bank_236[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==236) begin
        op_hcompute_grad_x_stencil_read[1] = bank_236[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==236) begin
        op_hcompute_grad_x_stencil_read[2] = bank_236[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==236) begin
        op_hcompute_grad_x_stencil_read[3] = bank_236[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==236) begin
        op_hcompute_grad_x_stencil_read[4] = bank_236[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==236) begin
        op_hcompute_grad_x_stencil_read[5] = bank_236[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==236) begin
        op_hcompute_grad_y_stencil_read[1] = bank_236[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==236) begin
        op_hcompute_grad_y_stencil_read[5] = bank_236[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==237) begin
        op_hcompute_grad_x_stencil_read[0] = bank_237[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==237) begin
        op_hcompute_grad_x_stencil_read[1] = bank_237[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==237) begin
        op_hcompute_grad_x_stencil_read[2] = bank_237[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==237) begin
        op_hcompute_grad_x_stencil_read[3] = bank_237[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==237) begin
        op_hcompute_grad_x_stencil_read[4] = bank_237[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==237) begin
        op_hcompute_grad_x_stencil_read[5] = bank_237[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==237) begin
        op_hcompute_grad_y_stencil_read[1] = bank_237[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==237) begin
        op_hcompute_grad_y_stencil_read[5] = bank_237[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==238) begin
        op_hcompute_grad_x_stencil_read[0] = bank_238[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==238) begin
        op_hcompute_grad_x_stencil_read[1] = bank_238[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==238) begin
        op_hcompute_grad_x_stencil_read[2] = bank_238[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==238) begin
        op_hcompute_grad_x_stencil_read[3] = bank_238[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==238) begin
        op_hcompute_grad_x_stencil_read[4] = bank_238[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==238) begin
        op_hcompute_grad_x_stencil_read[5] = bank_238[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==238) begin
        op_hcompute_grad_y_stencil_read[1] = bank_238[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==238) begin
        op_hcompute_grad_y_stencil_read[5] = bank_238[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==239) begin
        op_hcompute_grad_x_stencil_read[0] = bank_239[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==239) begin
        op_hcompute_grad_x_stencil_read[1] = bank_239[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==239) begin
        op_hcompute_grad_x_stencil_read[2] = bank_239[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==239) begin
        op_hcompute_grad_x_stencil_read[3] = bank_239[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==239) begin
        op_hcompute_grad_x_stencil_read[4] = bank_239[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==239) begin
        op_hcompute_grad_x_stencil_read[5] = bank_239[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==239) begin
        op_hcompute_grad_y_stencil_read[1] = bank_239[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==239) begin
        op_hcompute_grad_y_stencil_read[5] = bank_239[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==240) begin
        op_hcompute_grad_x_stencil_read[0] = bank_240[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==240) begin
        op_hcompute_grad_x_stencil_read[1] = bank_240[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==240) begin
        op_hcompute_grad_x_stencil_read[2] = bank_240[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==240) begin
        op_hcompute_grad_x_stencil_read[3] = bank_240[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==240) begin
        op_hcompute_grad_x_stencil_read[4] = bank_240[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==240) begin
        op_hcompute_grad_x_stencil_read[5] = bank_240[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==240) begin
        op_hcompute_grad_y_stencil_read[1] = bank_240[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==240) begin
        op_hcompute_grad_y_stencil_read[5] = bank_240[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==241) begin
        op_hcompute_grad_x_stencil_read[0] = bank_241[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==241) begin
        op_hcompute_grad_x_stencil_read[1] = bank_241[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==241) begin
        op_hcompute_grad_x_stencil_read[2] = bank_241[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==241) begin
        op_hcompute_grad_x_stencil_read[3] = bank_241[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==241) begin
        op_hcompute_grad_x_stencil_read[4] = bank_241[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==241) begin
        op_hcompute_grad_x_stencil_read[5] = bank_241[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==241) begin
        op_hcompute_grad_y_stencil_read[1] = bank_241[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==241) begin
        op_hcompute_grad_y_stencil_read[5] = bank_241[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==242) begin
        op_hcompute_grad_x_stencil_read[0] = bank_242[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==242) begin
        op_hcompute_grad_x_stencil_read[1] = bank_242[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==242) begin
        op_hcompute_grad_x_stencil_read[2] = bank_242[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==242) begin
        op_hcompute_grad_x_stencil_read[3] = bank_242[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==242) begin
        op_hcompute_grad_x_stencil_read[4] = bank_242[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==242) begin
        op_hcompute_grad_x_stencil_read[5] = bank_242[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==242) begin
        op_hcompute_grad_y_stencil_read[1] = bank_242[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==242) begin
        op_hcompute_grad_y_stencil_read[5] = bank_242[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==243) begin
        op_hcompute_grad_x_stencil_read[0] = bank_243[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==243) begin
        op_hcompute_grad_x_stencil_read[1] = bank_243[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==243) begin
        op_hcompute_grad_x_stencil_read[2] = bank_243[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==243) begin
        op_hcompute_grad_x_stencil_read[3] = bank_243[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==243) begin
        op_hcompute_grad_x_stencil_read[4] = bank_243[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==243) begin
        op_hcompute_grad_x_stencil_read[5] = bank_243[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==243) begin
        op_hcompute_grad_y_stencil_read[1] = bank_243[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==243) begin
        op_hcompute_grad_y_stencil_read[5] = bank_243[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==244) begin
        op_hcompute_grad_x_stencil_read[0] = bank_244[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==244) begin
        op_hcompute_grad_x_stencil_read[1] = bank_244[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==244) begin
        op_hcompute_grad_x_stencil_read[2] = bank_244[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==244) begin
        op_hcompute_grad_x_stencil_read[3] = bank_244[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==244) begin
        op_hcompute_grad_x_stencil_read[4] = bank_244[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==244) begin
        op_hcompute_grad_x_stencil_read[5] = bank_244[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==244) begin
        op_hcompute_grad_y_stencil_read[1] = bank_244[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==244) begin
        op_hcompute_grad_y_stencil_read[5] = bank_244[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==245) begin
        op_hcompute_grad_x_stencil_read[0] = bank_245[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==245) begin
        op_hcompute_grad_x_stencil_read[1] = bank_245[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==245) begin
        op_hcompute_grad_x_stencil_read[2] = bank_245[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==245) begin
        op_hcompute_grad_x_stencil_read[3] = bank_245[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==245) begin
        op_hcompute_grad_x_stencil_read[4] = bank_245[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==245) begin
        op_hcompute_grad_x_stencil_read[5] = bank_245[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==245) begin
        op_hcompute_grad_y_stencil_read[1] = bank_245[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==245) begin
        op_hcompute_grad_y_stencil_read[5] = bank_245[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==246) begin
        op_hcompute_grad_x_stencil_read[0] = bank_246[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==246) begin
        op_hcompute_grad_x_stencil_read[1] = bank_246[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==246) begin
        op_hcompute_grad_x_stencil_read[2] = bank_246[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==246) begin
        op_hcompute_grad_x_stencil_read[3] = bank_246[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==246) begin
        op_hcompute_grad_x_stencil_read[4] = bank_246[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==246) begin
        op_hcompute_grad_x_stencil_read[5] = bank_246[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==246) begin
        op_hcompute_grad_y_stencil_read[1] = bank_246[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==246) begin
        op_hcompute_grad_y_stencil_read[5] = bank_246[addr8];
    end
    if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_bank_selector.out==247) begin
        op_hcompute_grad_x_stencil_read[0] = bank_247[addr1];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_bank_selector.out==247) begin
        op_hcompute_grad_x_stencil_read[1] = bank_247[addr2];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_bank_selector.out==247) begin
        op_hcompute_grad_x_stencil_read[2] = bank_247[addr3];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_bank_selector.out==247) begin
        op_hcompute_grad_x_stencil_read[3] = bank_247[addr4];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_bank_selector.out==247) begin
        op_hcompute_grad_x_stencil_read[4] = bank_247[addr5];
    end
    else if (op_hcompute_grad_x_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_bank_selector.out==247) begin
        op_hcompute_grad_x_stencil_read[5] = bank_247[addr6];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_bank_selector.out==247) begin
        op_hcompute_grad_y_stencil_read[1] = bank_247[addr7];
    end
    else if (op_hcompute_grad_y_stencil_read_ren_fsm_out &&padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_bank_selector.out==247) begin
        op_hcompute_grad_y_stencil_read[5] = bank_247[addr8];
    end
  end

endmodule

