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

module cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_to_cim_output_stencil_op_hcompute_cim_output_stencil_65_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_0;
  always @(posedge clk) begin
    delay_wire_0 <= in;
  end
  assign out = delay_wire_0;
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

    cim_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_46_to_cim_output_stencil_op_hcompute_cim_output_stencil_65_sr cim_output_stencil_op_hcompute_hw_output_stencil_46_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_output_stencil_write[0]), .out(op_hcompute_hw_output_stencil_read[0]));


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
  always @(posedge clk) begin
    if (op_hcompute_cim_output_stencil_write_wen_fsm_out) begin
      case( cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_65_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_cim_output_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule


module cim_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1;
  logic [15:0] delay_wire_2;
  logic [15:0] delay_wire_3;
  logic [15:0] delay_wire_4;
  logic [15:0] delay_wire_5;
  logic [15:0] delay_wire_6;
  logic [15:0] delay_wire_7;
  logic [15:0] delay_wire_8;
  logic [15:0] delay_wire_9;
  logic [15:0] delay_wire_10;
  logic [15:0] delay_wire_11;
  logic [15:0] delay_wire_12;
  logic [15:0] delay_wire_13;
  logic [15:0] delay_wire_14;
  logic [15:0] delay_wire_15;
  logic [15:0] delay_wire_16;
  logic [15:0] delay_wire_17;
  logic [15:0] delay_wire_18;
  logic [15:0] delay_wire_19;
  logic [15:0] delay_wire_20;
  logic [15:0] delay_wire_21;
  logic [15:0] delay_wire_22;
  logic [15:0] delay_wire_23;
  logic [15:0] delay_wire_24;
  logic [15:0] delay_wire_25;
  logic [15:0] delay_wire_26;
  logic [15:0] delay_wire_27;
  logic [15:0] delay_wire_28;
  logic [15:0] delay_wire_29;
  logic [15:0] delay_wire_30;
  logic [15:0] delay_wire_31;
  logic [15:0] delay_wire_32;
  logic [15:0] delay_wire_33;
  logic [15:0] delay_wire_34;
  logic [15:0] delay_wire_35;
  logic [15:0] delay_wire_36;
  logic [15:0] delay_wire_37;
  logic [15:0] delay_wire_38;
  logic [15:0] delay_wire_39;
  logic [15:0] delay_wire_40;
  logic [15:0] delay_wire_41;
  logic [15:0] delay_wire_42;
  logic [15:0] delay_wire_43;
  logic [15:0] delay_wire_44;
  logic [15:0] delay_wire_45;
  logic [15:0] delay_wire_46;
  logic [15:0] delay_wire_47;
  logic [15:0] delay_wire_48;
  logic [15:0] delay_wire_49;
  logic [15:0] delay_wire_50;
  logic [15:0] delay_wire_51;
  logic [15:0] delay_wire_52;
  logic [15:0] delay_wire_53;
  logic [15:0] delay_wire_54;
  logic [15:0] delay_wire_55;
  logic [15:0] delay_wire_56;
  logic [15:0] delay_wire_57;
  logic [15:0] delay_wire_58;
  logic [15:0] delay_wire_59;
  logic [15:0] delay_wire_60;
  logic [15:0] delay_wire_61;
  logic [15:0] delay_wire_62;
  logic [15:0] delay_wire_63;
  logic [15:0] delay_wire_64;
  logic [15:0] delay_wire_65;
  logic [15:0] delay_wire_66;
  logic [15:0] delay_wire_67;
  logic [15:0] delay_wire_68;
  logic [15:0] delay_wire_69;
  logic [15:0] delay_wire_70;
  logic [15:0] delay_wire_71;
  logic [15:0] delay_wire_72;
  logic [15:0] delay_wire_73;
  logic [15:0] delay_wire_74;
  logic [15:0] delay_wire_75;
  logic [15:0] delay_wire_76;
  logic [15:0] delay_wire_77;
  logic [15:0] delay_wire_78;
  logic [15:0] delay_wire_79;
  logic [15:0] delay_wire_80;
  logic [15:0] delay_wire_81;
  logic [15:0] delay_wire_82;
  logic [15:0] delay_wire_83;
  logic [15:0] delay_wire_84;
  logic [15:0] delay_wire_85;
  logic [15:0] delay_wire_86;
  logic [15:0] delay_wire_87;
  logic [15:0] delay_wire_88;
  logic [15:0] delay_wire_89;
  logic [15:0] delay_wire_90;
  logic [15:0] delay_wire_91;
  logic [15:0] delay_wire_92;
  logic [15:0] delay_wire_93;
  logic [15:0] delay_wire_94;
  logic [15:0] delay_wire_95;
  logic [15:0] delay_wire_96;
  logic [15:0] delay_wire_97;
  logic [15:0] delay_wire_98;
  logic [15:0] delay_wire_99;
  logic [15:0] delay_wire_100;
  logic [15:0] delay_wire_101;
  logic [15:0] delay_wire_102;
  logic [15:0] delay_wire_103;
  logic [15:0] delay_wire_104;
  logic [15:0] delay_wire_105;
  logic [15:0] delay_wire_106;
  logic [15:0] delay_wire_107;
  logic [15:0] delay_wire_108;
  logic [15:0] delay_wire_109;
  logic [15:0] delay_wire_110;
  logic [15:0] delay_wire_111;
  logic [15:0] delay_wire_112;
  logic [15:0] delay_wire_113;
  logic [15:0] delay_wire_114;
  logic [15:0] delay_wire_115;
  logic [15:0] delay_wire_116;
  logic [15:0] delay_wire_117;
  logic [15:0] delay_wire_118;
  logic [15:0] delay_wire_119;
  logic [15:0] delay_wire_120;
  logic [15:0] delay_wire_121;
  logic [15:0] delay_wire_122;
  logic [15:0] delay_wire_123;
  logic [15:0] delay_wire_124;
  logic [15:0] delay_wire_125;
  logic [15:0] delay_wire_126;
  logic [15:0] delay_wire_127;
  logic [15:0] delay_wire_128;
  logic [15:0] delay_wire_129;
  logic [15:0] delay_wire_130;
  logic [15:0] delay_wire_131;
  always @(posedge clk) begin
    delay_wire_1 <= in;
    delay_wire_2 <= delay_wire_1;
    delay_wire_3 <= delay_wire_2;
    delay_wire_4 <= delay_wire_3;
    delay_wire_5 <= delay_wire_4;
    delay_wire_6 <= delay_wire_5;
    delay_wire_7 <= delay_wire_6;
    delay_wire_8 <= delay_wire_7;
    delay_wire_9 <= delay_wire_8;
    delay_wire_10 <= delay_wire_9;
    delay_wire_11 <= delay_wire_10;
    delay_wire_12 <= delay_wire_11;
    delay_wire_13 <= delay_wire_12;
    delay_wire_14 <= delay_wire_13;
    delay_wire_15 <= delay_wire_14;
    delay_wire_16 <= delay_wire_15;
    delay_wire_17 <= delay_wire_16;
    delay_wire_18 <= delay_wire_17;
    delay_wire_19 <= delay_wire_18;
    delay_wire_20 <= delay_wire_19;
    delay_wire_21 <= delay_wire_20;
    delay_wire_22 <= delay_wire_21;
    delay_wire_23 <= delay_wire_22;
    delay_wire_24 <= delay_wire_23;
    delay_wire_25 <= delay_wire_24;
    delay_wire_26 <= delay_wire_25;
    delay_wire_27 <= delay_wire_26;
    delay_wire_28 <= delay_wire_27;
    delay_wire_29 <= delay_wire_28;
    delay_wire_30 <= delay_wire_29;
    delay_wire_31 <= delay_wire_30;
    delay_wire_32 <= delay_wire_31;
    delay_wire_33 <= delay_wire_32;
    delay_wire_34 <= delay_wire_33;
    delay_wire_35 <= delay_wire_34;
    delay_wire_36 <= delay_wire_35;
    delay_wire_37 <= delay_wire_36;
    delay_wire_38 <= delay_wire_37;
    delay_wire_39 <= delay_wire_38;
    delay_wire_40 <= delay_wire_39;
    delay_wire_41 <= delay_wire_40;
    delay_wire_42 <= delay_wire_41;
    delay_wire_43 <= delay_wire_42;
    delay_wire_44 <= delay_wire_43;
    delay_wire_45 <= delay_wire_44;
    delay_wire_46 <= delay_wire_45;
    delay_wire_47 <= delay_wire_46;
    delay_wire_48 <= delay_wire_47;
    delay_wire_49 <= delay_wire_48;
    delay_wire_50 <= delay_wire_49;
    delay_wire_51 <= delay_wire_50;
    delay_wire_52 <= delay_wire_51;
    delay_wire_53 <= delay_wire_52;
    delay_wire_54 <= delay_wire_53;
    delay_wire_55 <= delay_wire_54;
    delay_wire_56 <= delay_wire_55;
    delay_wire_57 <= delay_wire_56;
    delay_wire_58 <= delay_wire_57;
    delay_wire_59 <= delay_wire_58;
    delay_wire_60 <= delay_wire_59;
    delay_wire_61 <= delay_wire_60;
    delay_wire_62 <= delay_wire_61;
    delay_wire_63 <= delay_wire_62;
    delay_wire_64 <= delay_wire_63;
    delay_wire_65 <= delay_wire_64;
    delay_wire_66 <= delay_wire_65;
    delay_wire_67 <= delay_wire_66;
    delay_wire_68 <= delay_wire_67;
    delay_wire_69 <= delay_wire_68;
    delay_wire_70 <= delay_wire_69;
    delay_wire_71 <= delay_wire_70;
    delay_wire_72 <= delay_wire_71;
    delay_wire_73 <= delay_wire_72;
    delay_wire_74 <= delay_wire_73;
    delay_wire_75 <= delay_wire_74;
    delay_wire_76 <= delay_wire_75;
    delay_wire_77 <= delay_wire_76;
    delay_wire_78 <= delay_wire_77;
    delay_wire_79 <= delay_wire_78;
    delay_wire_80 <= delay_wire_79;
    delay_wire_81 <= delay_wire_80;
    delay_wire_82 <= delay_wire_81;
    delay_wire_83 <= delay_wire_82;
    delay_wire_84 <= delay_wire_83;
    delay_wire_85 <= delay_wire_84;
    delay_wire_86 <= delay_wire_85;
    delay_wire_87 <= delay_wire_86;
    delay_wire_88 <= delay_wire_87;
    delay_wire_89 <= delay_wire_88;
    delay_wire_90 <= delay_wire_89;
    delay_wire_91 <= delay_wire_90;
    delay_wire_92 <= delay_wire_91;
    delay_wire_93 <= delay_wire_92;
    delay_wire_94 <= delay_wire_93;
    delay_wire_95 <= delay_wire_94;
    delay_wire_96 <= delay_wire_95;
    delay_wire_97 <= delay_wire_96;
    delay_wire_98 <= delay_wire_97;
    delay_wire_99 <= delay_wire_98;
    delay_wire_100 <= delay_wire_99;
    delay_wire_101 <= delay_wire_100;
    delay_wire_102 <= delay_wire_101;
    delay_wire_103 <= delay_wire_102;
    delay_wire_104 <= delay_wire_103;
    delay_wire_105 <= delay_wire_104;
    delay_wire_106 <= delay_wire_105;
    delay_wire_107 <= delay_wire_106;
    delay_wire_108 <= delay_wire_107;
    delay_wire_109 <= delay_wire_108;
    delay_wire_110 <= delay_wire_109;
    delay_wire_111 <= delay_wire_110;
    delay_wire_112 <= delay_wire_111;
    delay_wire_113 <= delay_wire_112;
    delay_wire_114 <= delay_wire_113;
    delay_wire_115 <= delay_wire_114;
    delay_wire_116 <= delay_wire_115;
    delay_wire_117 <= delay_wire_116;
    delay_wire_118 <= delay_wire_117;
    delay_wire_119 <= delay_wire_118;
    delay_wire_120 <= delay_wire_119;
    delay_wire_121 <= delay_wire_120;
    delay_wire_122 <= delay_wire_121;
    delay_wire_123 <= delay_wire_122;
    delay_wire_124 <= delay_wire_123;
    delay_wire_125 <= delay_wire_124;
    delay_wire_126 <= delay_wire_125;
    delay_wire_127 <= delay_wire_126;
    delay_wire_128 <= delay_wire_127;
    delay_wire_129 <= delay_wire_128;
    delay_wire_130 <= delay_wire_129;
    delay_wire_131 <= delay_wire_130;
  end
  assign out = delay_wire_131;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_132;
  logic [15:0] delay_wire_133;
  logic [15:0] delay_wire_134;
  logic [15:0] delay_wire_135;
  logic [15:0] delay_wire_136;
  logic [15:0] delay_wire_137;
  logic [15:0] delay_wire_138;
  logic [15:0] delay_wire_139;
  logic [15:0] delay_wire_140;
  logic [15:0] delay_wire_141;
  logic [15:0] delay_wire_142;
  logic [15:0] delay_wire_143;
  logic [15:0] delay_wire_144;
  logic [15:0] delay_wire_145;
  logic [15:0] delay_wire_146;
  logic [15:0] delay_wire_147;
  logic [15:0] delay_wire_148;
  logic [15:0] delay_wire_149;
  logic [15:0] delay_wire_150;
  logic [15:0] delay_wire_151;
  logic [15:0] delay_wire_152;
  logic [15:0] delay_wire_153;
  logic [15:0] delay_wire_154;
  logic [15:0] delay_wire_155;
  logic [15:0] delay_wire_156;
  logic [15:0] delay_wire_157;
  logic [15:0] delay_wire_158;
  logic [15:0] delay_wire_159;
  logic [15:0] delay_wire_160;
  logic [15:0] delay_wire_161;
  logic [15:0] delay_wire_162;
  logic [15:0] delay_wire_163;
  logic [15:0] delay_wire_164;
  logic [15:0] delay_wire_165;
  logic [15:0] delay_wire_166;
  logic [15:0] delay_wire_167;
  logic [15:0] delay_wire_168;
  logic [15:0] delay_wire_169;
  logic [15:0] delay_wire_170;
  logic [15:0] delay_wire_171;
  logic [15:0] delay_wire_172;
  logic [15:0] delay_wire_173;
  logic [15:0] delay_wire_174;
  logic [15:0] delay_wire_175;
  logic [15:0] delay_wire_176;
  logic [15:0] delay_wire_177;
  logic [15:0] delay_wire_178;
  logic [15:0] delay_wire_179;
  logic [15:0] delay_wire_180;
  logic [15:0] delay_wire_181;
  logic [15:0] delay_wire_182;
  logic [15:0] delay_wire_183;
  logic [15:0] delay_wire_184;
  logic [15:0] delay_wire_185;
  logic [15:0] delay_wire_186;
  logic [15:0] delay_wire_187;
  logic [15:0] delay_wire_188;
  logic [15:0] delay_wire_189;
  logic [15:0] delay_wire_190;
  logic [15:0] delay_wire_191;
  logic [15:0] delay_wire_192;
  logic [15:0] delay_wire_193;
  logic [15:0] delay_wire_194;
  logic [15:0] delay_wire_195;
  logic [15:0] delay_wire_196;
  logic [15:0] delay_wire_197;
  always @(posedge clk) begin
    delay_wire_132 <= in;
    delay_wire_133 <= delay_wire_132;
    delay_wire_134 <= delay_wire_133;
    delay_wire_135 <= delay_wire_134;
    delay_wire_136 <= delay_wire_135;
    delay_wire_137 <= delay_wire_136;
    delay_wire_138 <= delay_wire_137;
    delay_wire_139 <= delay_wire_138;
    delay_wire_140 <= delay_wire_139;
    delay_wire_141 <= delay_wire_140;
    delay_wire_142 <= delay_wire_141;
    delay_wire_143 <= delay_wire_142;
    delay_wire_144 <= delay_wire_143;
    delay_wire_145 <= delay_wire_144;
    delay_wire_146 <= delay_wire_145;
    delay_wire_147 <= delay_wire_146;
    delay_wire_148 <= delay_wire_147;
    delay_wire_149 <= delay_wire_148;
    delay_wire_150 <= delay_wire_149;
    delay_wire_151 <= delay_wire_150;
    delay_wire_152 <= delay_wire_151;
    delay_wire_153 <= delay_wire_152;
    delay_wire_154 <= delay_wire_153;
    delay_wire_155 <= delay_wire_154;
    delay_wire_156 <= delay_wire_155;
    delay_wire_157 <= delay_wire_156;
    delay_wire_158 <= delay_wire_157;
    delay_wire_159 <= delay_wire_158;
    delay_wire_160 <= delay_wire_159;
    delay_wire_161 <= delay_wire_160;
    delay_wire_162 <= delay_wire_161;
    delay_wire_163 <= delay_wire_162;
    delay_wire_164 <= delay_wire_163;
    delay_wire_165 <= delay_wire_164;
    delay_wire_166 <= delay_wire_165;
    delay_wire_167 <= delay_wire_166;
    delay_wire_168 <= delay_wire_167;
    delay_wire_169 <= delay_wire_168;
    delay_wire_170 <= delay_wire_169;
    delay_wire_171 <= delay_wire_170;
    delay_wire_172 <= delay_wire_171;
    delay_wire_173 <= delay_wire_172;
    delay_wire_174 <= delay_wire_173;
    delay_wire_175 <= delay_wire_174;
    delay_wire_176 <= delay_wire_175;
    delay_wire_177 <= delay_wire_176;
    delay_wire_178 <= delay_wire_177;
    delay_wire_179 <= delay_wire_178;
    delay_wire_180 <= delay_wire_179;
    delay_wire_181 <= delay_wire_180;
    delay_wire_182 <= delay_wire_181;
    delay_wire_183 <= delay_wire_182;
    delay_wire_184 <= delay_wire_183;
    delay_wire_185 <= delay_wire_184;
    delay_wire_186 <= delay_wire_185;
    delay_wire_187 <= delay_wire_186;
    delay_wire_188 <= delay_wire_187;
    delay_wire_189 <= delay_wire_188;
    delay_wire_190 <= delay_wire_189;
    delay_wire_191 <= delay_wire_190;
    delay_wire_192 <= delay_wire_191;
    delay_wire_193 <= delay_wire_192;
    delay_wire_194 <= delay_wire_193;
    delay_wire_195 <= delay_wire_194;
    delay_wire_196 <= delay_wire_195;
    delay_wire_197 <= delay_wire_196;
  end
  assign out = delay_wire_197;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_198;
  logic [15:0] delay_wire_199;
  logic [15:0] delay_wire_200;
  logic [15:0] delay_wire_201;
  logic [15:0] delay_wire_202;
  logic [15:0] delay_wire_203;
  logic [15:0] delay_wire_204;
  logic [15:0] delay_wire_205;
  logic [15:0] delay_wire_206;
  logic [15:0] delay_wire_207;
  logic [15:0] delay_wire_208;
  logic [15:0] delay_wire_209;
  logic [15:0] delay_wire_210;
  logic [15:0] delay_wire_211;
  logic [15:0] delay_wire_212;
  logic [15:0] delay_wire_213;
  logic [15:0] delay_wire_214;
  logic [15:0] delay_wire_215;
  logic [15:0] delay_wire_216;
  logic [15:0] delay_wire_217;
  logic [15:0] delay_wire_218;
  logic [15:0] delay_wire_219;
  logic [15:0] delay_wire_220;
  logic [15:0] delay_wire_221;
  logic [15:0] delay_wire_222;
  logic [15:0] delay_wire_223;
  logic [15:0] delay_wire_224;
  logic [15:0] delay_wire_225;
  logic [15:0] delay_wire_226;
  logic [15:0] delay_wire_227;
  logic [15:0] delay_wire_228;
  logic [15:0] delay_wire_229;
  logic [15:0] delay_wire_230;
  logic [15:0] delay_wire_231;
  logic [15:0] delay_wire_232;
  logic [15:0] delay_wire_233;
  logic [15:0] delay_wire_234;
  logic [15:0] delay_wire_235;
  logic [15:0] delay_wire_236;
  logic [15:0] delay_wire_237;
  logic [15:0] delay_wire_238;
  logic [15:0] delay_wire_239;
  logic [15:0] delay_wire_240;
  logic [15:0] delay_wire_241;
  logic [15:0] delay_wire_242;
  logic [15:0] delay_wire_243;
  logic [15:0] delay_wire_244;
  logic [15:0] delay_wire_245;
  logic [15:0] delay_wire_246;
  logic [15:0] delay_wire_247;
  logic [15:0] delay_wire_248;
  logic [15:0] delay_wire_249;
  logic [15:0] delay_wire_250;
  logic [15:0] delay_wire_251;
  logic [15:0] delay_wire_252;
  logic [15:0] delay_wire_253;
  logic [15:0] delay_wire_254;
  logic [15:0] delay_wire_255;
  logic [15:0] delay_wire_256;
  logic [15:0] delay_wire_257;
  logic [15:0] delay_wire_258;
  logic [15:0] delay_wire_259;
  logic [15:0] delay_wire_260;
  logic [15:0] delay_wire_261;
  logic [15:0] delay_wire_262;
  logic [15:0] delay_wire_263;
  logic [15:0] delay_wire_264;
  logic [15:0] delay_wire_265;
  logic [15:0] delay_wire_266;
  logic [15:0] delay_wire_267;
  logic [15:0] delay_wire_268;
  logic [15:0] delay_wire_269;
  logic [15:0] delay_wire_270;
  logic [15:0] delay_wire_271;
  logic [15:0] delay_wire_272;
  logic [15:0] delay_wire_273;
  logic [15:0] delay_wire_274;
  logic [15:0] delay_wire_275;
  logic [15:0] delay_wire_276;
  logic [15:0] delay_wire_277;
  logic [15:0] delay_wire_278;
  logic [15:0] delay_wire_279;
  logic [15:0] delay_wire_280;
  logic [15:0] delay_wire_281;
  logic [15:0] delay_wire_282;
  logic [15:0] delay_wire_283;
  logic [15:0] delay_wire_284;
  logic [15:0] delay_wire_285;
  logic [15:0] delay_wire_286;
  logic [15:0] delay_wire_287;
  logic [15:0] delay_wire_288;
  logic [15:0] delay_wire_289;
  logic [15:0] delay_wire_290;
  logic [15:0] delay_wire_291;
  logic [15:0] delay_wire_292;
  logic [15:0] delay_wire_293;
  logic [15:0] delay_wire_294;
  logic [15:0] delay_wire_295;
  logic [15:0] delay_wire_296;
  logic [15:0] delay_wire_297;
  logic [15:0] delay_wire_298;
  logic [15:0] delay_wire_299;
  logic [15:0] delay_wire_300;
  logic [15:0] delay_wire_301;
  logic [15:0] delay_wire_302;
  logic [15:0] delay_wire_303;
  logic [15:0] delay_wire_304;
  logic [15:0] delay_wire_305;
  logic [15:0] delay_wire_306;
  logic [15:0] delay_wire_307;
  logic [15:0] delay_wire_308;
  logic [15:0] delay_wire_309;
  logic [15:0] delay_wire_310;
  logic [15:0] delay_wire_311;
  logic [15:0] delay_wire_312;
  logic [15:0] delay_wire_313;
  logic [15:0] delay_wire_314;
  logic [15:0] delay_wire_315;
  logic [15:0] delay_wire_316;
  logic [15:0] delay_wire_317;
  logic [15:0] delay_wire_318;
  logic [15:0] delay_wire_319;
  logic [15:0] delay_wire_320;
  logic [15:0] delay_wire_321;
  logic [15:0] delay_wire_322;
  logic [15:0] delay_wire_323;
  logic [15:0] delay_wire_324;
  logic [15:0] delay_wire_325;
  logic [15:0] delay_wire_326;
  logic [15:0] delay_wire_327;
  always @(posedge clk) begin
    delay_wire_198 <= in;
    delay_wire_199 <= delay_wire_198;
    delay_wire_200 <= delay_wire_199;
    delay_wire_201 <= delay_wire_200;
    delay_wire_202 <= delay_wire_201;
    delay_wire_203 <= delay_wire_202;
    delay_wire_204 <= delay_wire_203;
    delay_wire_205 <= delay_wire_204;
    delay_wire_206 <= delay_wire_205;
    delay_wire_207 <= delay_wire_206;
    delay_wire_208 <= delay_wire_207;
    delay_wire_209 <= delay_wire_208;
    delay_wire_210 <= delay_wire_209;
    delay_wire_211 <= delay_wire_210;
    delay_wire_212 <= delay_wire_211;
    delay_wire_213 <= delay_wire_212;
    delay_wire_214 <= delay_wire_213;
    delay_wire_215 <= delay_wire_214;
    delay_wire_216 <= delay_wire_215;
    delay_wire_217 <= delay_wire_216;
    delay_wire_218 <= delay_wire_217;
    delay_wire_219 <= delay_wire_218;
    delay_wire_220 <= delay_wire_219;
    delay_wire_221 <= delay_wire_220;
    delay_wire_222 <= delay_wire_221;
    delay_wire_223 <= delay_wire_222;
    delay_wire_224 <= delay_wire_223;
    delay_wire_225 <= delay_wire_224;
    delay_wire_226 <= delay_wire_225;
    delay_wire_227 <= delay_wire_226;
    delay_wire_228 <= delay_wire_227;
    delay_wire_229 <= delay_wire_228;
    delay_wire_230 <= delay_wire_229;
    delay_wire_231 <= delay_wire_230;
    delay_wire_232 <= delay_wire_231;
    delay_wire_233 <= delay_wire_232;
    delay_wire_234 <= delay_wire_233;
    delay_wire_235 <= delay_wire_234;
    delay_wire_236 <= delay_wire_235;
    delay_wire_237 <= delay_wire_236;
    delay_wire_238 <= delay_wire_237;
    delay_wire_239 <= delay_wire_238;
    delay_wire_240 <= delay_wire_239;
    delay_wire_241 <= delay_wire_240;
    delay_wire_242 <= delay_wire_241;
    delay_wire_243 <= delay_wire_242;
    delay_wire_244 <= delay_wire_243;
    delay_wire_245 <= delay_wire_244;
    delay_wire_246 <= delay_wire_245;
    delay_wire_247 <= delay_wire_246;
    delay_wire_248 <= delay_wire_247;
    delay_wire_249 <= delay_wire_248;
    delay_wire_250 <= delay_wire_249;
    delay_wire_251 <= delay_wire_250;
    delay_wire_252 <= delay_wire_251;
    delay_wire_253 <= delay_wire_252;
    delay_wire_254 <= delay_wire_253;
    delay_wire_255 <= delay_wire_254;
    delay_wire_256 <= delay_wire_255;
    delay_wire_257 <= delay_wire_256;
    delay_wire_258 <= delay_wire_257;
    delay_wire_259 <= delay_wire_258;
    delay_wire_260 <= delay_wire_259;
    delay_wire_261 <= delay_wire_260;
    delay_wire_262 <= delay_wire_261;
    delay_wire_263 <= delay_wire_262;
    delay_wire_264 <= delay_wire_263;
    delay_wire_265 <= delay_wire_264;
    delay_wire_266 <= delay_wire_265;
    delay_wire_267 <= delay_wire_266;
    delay_wire_268 <= delay_wire_267;
    delay_wire_269 <= delay_wire_268;
    delay_wire_270 <= delay_wire_269;
    delay_wire_271 <= delay_wire_270;
    delay_wire_272 <= delay_wire_271;
    delay_wire_273 <= delay_wire_272;
    delay_wire_274 <= delay_wire_273;
    delay_wire_275 <= delay_wire_274;
    delay_wire_276 <= delay_wire_275;
    delay_wire_277 <= delay_wire_276;
    delay_wire_278 <= delay_wire_277;
    delay_wire_279 <= delay_wire_278;
    delay_wire_280 <= delay_wire_279;
    delay_wire_281 <= delay_wire_280;
    delay_wire_282 <= delay_wire_281;
    delay_wire_283 <= delay_wire_282;
    delay_wire_284 <= delay_wire_283;
    delay_wire_285 <= delay_wire_284;
    delay_wire_286 <= delay_wire_285;
    delay_wire_287 <= delay_wire_286;
    delay_wire_288 <= delay_wire_287;
    delay_wire_289 <= delay_wire_288;
    delay_wire_290 <= delay_wire_289;
    delay_wire_291 <= delay_wire_290;
    delay_wire_292 <= delay_wire_291;
    delay_wire_293 <= delay_wire_292;
    delay_wire_294 <= delay_wire_293;
    delay_wire_295 <= delay_wire_294;
    delay_wire_296 <= delay_wire_295;
    delay_wire_297 <= delay_wire_296;
    delay_wire_298 <= delay_wire_297;
    delay_wire_299 <= delay_wire_298;
    delay_wire_300 <= delay_wire_299;
    delay_wire_301 <= delay_wire_300;
    delay_wire_302 <= delay_wire_301;
    delay_wire_303 <= delay_wire_302;
    delay_wire_304 <= delay_wire_303;
    delay_wire_305 <= delay_wire_304;
    delay_wire_306 <= delay_wire_305;
    delay_wire_307 <= delay_wire_306;
    delay_wire_308 <= delay_wire_307;
    delay_wire_309 <= delay_wire_308;
    delay_wire_310 <= delay_wire_309;
    delay_wire_311 <= delay_wire_310;
    delay_wire_312 <= delay_wire_311;
    delay_wire_313 <= delay_wire_312;
    delay_wire_314 <= delay_wire_313;
    delay_wire_315 <= delay_wire_314;
    delay_wire_316 <= delay_wire_315;
    delay_wire_317 <= delay_wire_316;
    delay_wire_318 <= delay_wire_317;
    delay_wire_319 <= delay_wire_318;
    delay_wire_320 <= delay_wire_319;
    delay_wire_321 <= delay_wire_320;
    delay_wire_322 <= delay_wire_321;
    delay_wire_323 <= delay_wire_322;
    delay_wire_324 <= delay_wire_323;
    delay_wire_325 <= delay_wire_324;
    delay_wire_326 <= delay_wire_325;
    delay_wire_327 <= delay_wire_326;
  end
  assign out = delay_wire_327;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_328;
  logic [15:0] delay_wire_329;
  logic [15:0] delay_wire_330;
  logic [15:0] delay_wire_331;
  logic [15:0] delay_wire_332;
  logic [15:0] delay_wire_333;
  logic [15:0] delay_wire_334;
  logic [15:0] delay_wire_335;
  logic [15:0] delay_wire_336;
  logic [15:0] delay_wire_337;
  logic [15:0] delay_wire_338;
  logic [15:0] delay_wire_339;
  logic [15:0] delay_wire_340;
  logic [15:0] delay_wire_341;
  logic [15:0] delay_wire_342;
  logic [15:0] delay_wire_343;
  logic [15:0] delay_wire_344;
  logic [15:0] delay_wire_345;
  logic [15:0] delay_wire_346;
  logic [15:0] delay_wire_347;
  logic [15:0] delay_wire_348;
  logic [15:0] delay_wire_349;
  logic [15:0] delay_wire_350;
  logic [15:0] delay_wire_351;
  logic [15:0] delay_wire_352;
  logic [15:0] delay_wire_353;
  logic [15:0] delay_wire_354;
  logic [15:0] delay_wire_355;
  logic [15:0] delay_wire_356;
  logic [15:0] delay_wire_357;
  logic [15:0] delay_wire_358;
  logic [15:0] delay_wire_359;
  logic [15:0] delay_wire_360;
  logic [15:0] delay_wire_361;
  logic [15:0] delay_wire_362;
  logic [15:0] delay_wire_363;
  logic [15:0] delay_wire_364;
  logic [15:0] delay_wire_365;
  logic [15:0] delay_wire_366;
  logic [15:0] delay_wire_367;
  logic [15:0] delay_wire_368;
  logic [15:0] delay_wire_369;
  logic [15:0] delay_wire_370;
  logic [15:0] delay_wire_371;
  logic [15:0] delay_wire_372;
  logic [15:0] delay_wire_373;
  logic [15:0] delay_wire_374;
  logic [15:0] delay_wire_375;
  logic [15:0] delay_wire_376;
  logic [15:0] delay_wire_377;
  logic [15:0] delay_wire_378;
  logic [15:0] delay_wire_379;
  logic [15:0] delay_wire_380;
  logic [15:0] delay_wire_381;
  logic [15:0] delay_wire_382;
  logic [15:0] delay_wire_383;
  logic [15:0] delay_wire_384;
  logic [15:0] delay_wire_385;
  logic [15:0] delay_wire_386;
  logic [15:0] delay_wire_387;
  logic [15:0] delay_wire_388;
  logic [15:0] delay_wire_389;
  logic [15:0] delay_wire_390;
  logic [15:0] delay_wire_391;
  logic [15:0] delay_wire_392;
  logic [15:0] delay_wire_393;
  logic [15:0] delay_wire_394;
  logic [15:0] delay_wire_395;
  logic [15:0] delay_wire_396;
  logic [15:0] delay_wire_397;
  logic [15:0] delay_wire_398;
  logic [15:0] delay_wire_399;
  logic [15:0] delay_wire_400;
  logic [15:0] delay_wire_401;
  logic [15:0] delay_wire_402;
  logic [15:0] delay_wire_403;
  logic [15:0] delay_wire_404;
  logic [15:0] delay_wire_405;
  logic [15:0] delay_wire_406;
  logic [15:0] delay_wire_407;
  logic [15:0] delay_wire_408;
  logic [15:0] delay_wire_409;
  logic [15:0] delay_wire_410;
  logic [15:0] delay_wire_411;
  logic [15:0] delay_wire_412;
  logic [15:0] delay_wire_413;
  logic [15:0] delay_wire_414;
  logic [15:0] delay_wire_415;
  logic [15:0] delay_wire_416;
  logic [15:0] delay_wire_417;
  logic [15:0] delay_wire_418;
  logic [15:0] delay_wire_419;
  logic [15:0] delay_wire_420;
  logic [15:0] delay_wire_421;
  logic [15:0] delay_wire_422;
  logic [15:0] delay_wire_423;
  logic [15:0] delay_wire_424;
  logic [15:0] delay_wire_425;
  logic [15:0] delay_wire_426;
  logic [15:0] delay_wire_427;
  logic [15:0] delay_wire_428;
  logic [15:0] delay_wire_429;
  logic [15:0] delay_wire_430;
  logic [15:0] delay_wire_431;
  logic [15:0] delay_wire_432;
  logic [15:0] delay_wire_433;
  logic [15:0] delay_wire_434;
  logic [15:0] delay_wire_435;
  logic [15:0] delay_wire_436;
  logic [15:0] delay_wire_437;
  logic [15:0] delay_wire_438;
  logic [15:0] delay_wire_439;
  logic [15:0] delay_wire_440;
  logic [15:0] delay_wire_441;
  logic [15:0] delay_wire_442;
  logic [15:0] delay_wire_443;
  logic [15:0] delay_wire_444;
  logic [15:0] delay_wire_445;
  logic [15:0] delay_wire_446;
  logic [15:0] delay_wire_447;
  logic [15:0] delay_wire_448;
  logic [15:0] delay_wire_449;
  logic [15:0] delay_wire_450;
  logic [15:0] delay_wire_451;
  logic [15:0] delay_wire_452;
  logic [15:0] delay_wire_453;
  logic [15:0] delay_wire_454;
  logic [15:0] delay_wire_455;
  logic [15:0] delay_wire_456;
  always @(posedge clk) begin
    delay_wire_328 <= in;
    delay_wire_329 <= delay_wire_328;
    delay_wire_330 <= delay_wire_329;
    delay_wire_331 <= delay_wire_330;
    delay_wire_332 <= delay_wire_331;
    delay_wire_333 <= delay_wire_332;
    delay_wire_334 <= delay_wire_333;
    delay_wire_335 <= delay_wire_334;
    delay_wire_336 <= delay_wire_335;
    delay_wire_337 <= delay_wire_336;
    delay_wire_338 <= delay_wire_337;
    delay_wire_339 <= delay_wire_338;
    delay_wire_340 <= delay_wire_339;
    delay_wire_341 <= delay_wire_340;
    delay_wire_342 <= delay_wire_341;
    delay_wire_343 <= delay_wire_342;
    delay_wire_344 <= delay_wire_343;
    delay_wire_345 <= delay_wire_344;
    delay_wire_346 <= delay_wire_345;
    delay_wire_347 <= delay_wire_346;
    delay_wire_348 <= delay_wire_347;
    delay_wire_349 <= delay_wire_348;
    delay_wire_350 <= delay_wire_349;
    delay_wire_351 <= delay_wire_350;
    delay_wire_352 <= delay_wire_351;
    delay_wire_353 <= delay_wire_352;
    delay_wire_354 <= delay_wire_353;
    delay_wire_355 <= delay_wire_354;
    delay_wire_356 <= delay_wire_355;
    delay_wire_357 <= delay_wire_356;
    delay_wire_358 <= delay_wire_357;
    delay_wire_359 <= delay_wire_358;
    delay_wire_360 <= delay_wire_359;
    delay_wire_361 <= delay_wire_360;
    delay_wire_362 <= delay_wire_361;
    delay_wire_363 <= delay_wire_362;
    delay_wire_364 <= delay_wire_363;
    delay_wire_365 <= delay_wire_364;
    delay_wire_366 <= delay_wire_365;
    delay_wire_367 <= delay_wire_366;
    delay_wire_368 <= delay_wire_367;
    delay_wire_369 <= delay_wire_368;
    delay_wire_370 <= delay_wire_369;
    delay_wire_371 <= delay_wire_370;
    delay_wire_372 <= delay_wire_371;
    delay_wire_373 <= delay_wire_372;
    delay_wire_374 <= delay_wire_373;
    delay_wire_375 <= delay_wire_374;
    delay_wire_376 <= delay_wire_375;
    delay_wire_377 <= delay_wire_376;
    delay_wire_378 <= delay_wire_377;
    delay_wire_379 <= delay_wire_378;
    delay_wire_380 <= delay_wire_379;
    delay_wire_381 <= delay_wire_380;
    delay_wire_382 <= delay_wire_381;
    delay_wire_383 <= delay_wire_382;
    delay_wire_384 <= delay_wire_383;
    delay_wire_385 <= delay_wire_384;
    delay_wire_386 <= delay_wire_385;
    delay_wire_387 <= delay_wire_386;
    delay_wire_388 <= delay_wire_387;
    delay_wire_389 <= delay_wire_388;
    delay_wire_390 <= delay_wire_389;
    delay_wire_391 <= delay_wire_390;
    delay_wire_392 <= delay_wire_391;
    delay_wire_393 <= delay_wire_392;
    delay_wire_394 <= delay_wire_393;
    delay_wire_395 <= delay_wire_394;
    delay_wire_396 <= delay_wire_395;
    delay_wire_397 <= delay_wire_396;
    delay_wire_398 <= delay_wire_397;
    delay_wire_399 <= delay_wire_398;
    delay_wire_400 <= delay_wire_399;
    delay_wire_401 <= delay_wire_400;
    delay_wire_402 <= delay_wire_401;
    delay_wire_403 <= delay_wire_402;
    delay_wire_404 <= delay_wire_403;
    delay_wire_405 <= delay_wire_404;
    delay_wire_406 <= delay_wire_405;
    delay_wire_407 <= delay_wire_406;
    delay_wire_408 <= delay_wire_407;
    delay_wire_409 <= delay_wire_408;
    delay_wire_410 <= delay_wire_409;
    delay_wire_411 <= delay_wire_410;
    delay_wire_412 <= delay_wire_411;
    delay_wire_413 <= delay_wire_412;
    delay_wire_414 <= delay_wire_413;
    delay_wire_415 <= delay_wire_414;
    delay_wire_416 <= delay_wire_415;
    delay_wire_417 <= delay_wire_416;
    delay_wire_418 <= delay_wire_417;
    delay_wire_419 <= delay_wire_418;
    delay_wire_420 <= delay_wire_419;
    delay_wire_421 <= delay_wire_420;
    delay_wire_422 <= delay_wire_421;
    delay_wire_423 <= delay_wire_422;
    delay_wire_424 <= delay_wire_423;
    delay_wire_425 <= delay_wire_424;
    delay_wire_426 <= delay_wire_425;
    delay_wire_427 <= delay_wire_426;
    delay_wire_428 <= delay_wire_427;
    delay_wire_429 <= delay_wire_428;
    delay_wire_430 <= delay_wire_429;
    delay_wire_431 <= delay_wire_430;
    delay_wire_432 <= delay_wire_431;
    delay_wire_433 <= delay_wire_432;
    delay_wire_434 <= delay_wire_433;
    delay_wire_435 <= delay_wire_434;
    delay_wire_436 <= delay_wire_435;
    delay_wire_437 <= delay_wire_436;
    delay_wire_438 <= delay_wire_437;
    delay_wire_439 <= delay_wire_438;
    delay_wire_440 <= delay_wire_439;
    delay_wire_441 <= delay_wire_440;
    delay_wire_442 <= delay_wire_441;
    delay_wire_443 <= delay_wire_442;
    delay_wire_444 <= delay_wire_443;
    delay_wire_445 <= delay_wire_444;
    delay_wire_446 <= delay_wire_445;
    delay_wire_447 <= delay_wire_446;
    delay_wire_448 <= delay_wire_447;
    delay_wire_449 <= delay_wire_448;
    delay_wire_450 <= delay_wire_449;
    delay_wire_451 <= delay_wire_450;
    delay_wire_452 <= delay_wire_451;
    delay_wire_453 <= delay_wire_452;
    delay_wire_454 <= delay_wire_453;
    delay_wire_455 <= delay_wire_454;
    delay_wire_456 <= delay_wire_455;
  end
  assign out = delay_wire_456;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_457;
  logic [15:0] delay_wire_458;
  logic [15:0] delay_wire_459;
  logic [15:0] delay_wire_460;
  logic [15:0] delay_wire_461;
  logic [15:0] delay_wire_462;
  logic [15:0] delay_wire_463;
  logic [15:0] delay_wire_464;
  logic [15:0] delay_wire_465;
  logic [15:0] delay_wire_466;
  logic [15:0] delay_wire_467;
  logic [15:0] delay_wire_468;
  logic [15:0] delay_wire_469;
  logic [15:0] delay_wire_470;
  logic [15:0] delay_wire_471;
  logic [15:0] delay_wire_472;
  logic [15:0] delay_wire_473;
  logic [15:0] delay_wire_474;
  logic [15:0] delay_wire_475;
  logic [15:0] delay_wire_476;
  logic [15:0] delay_wire_477;
  logic [15:0] delay_wire_478;
  logic [15:0] delay_wire_479;
  logic [15:0] delay_wire_480;
  logic [15:0] delay_wire_481;
  logic [15:0] delay_wire_482;
  logic [15:0] delay_wire_483;
  logic [15:0] delay_wire_484;
  logic [15:0] delay_wire_485;
  logic [15:0] delay_wire_486;
  logic [15:0] delay_wire_487;
  logic [15:0] delay_wire_488;
  logic [15:0] delay_wire_489;
  logic [15:0] delay_wire_490;
  logic [15:0] delay_wire_491;
  logic [15:0] delay_wire_492;
  logic [15:0] delay_wire_493;
  logic [15:0] delay_wire_494;
  logic [15:0] delay_wire_495;
  logic [15:0] delay_wire_496;
  logic [15:0] delay_wire_497;
  logic [15:0] delay_wire_498;
  logic [15:0] delay_wire_499;
  logic [15:0] delay_wire_500;
  logic [15:0] delay_wire_501;
  logic [15:0] delay_wire_502;
  logic [15:0] delay_wire_503;
  logic [15:0] delay_wire_504;
  logic [15:0] delay_wire_505;
  logic [15:0] delay_wire_506;
  logic [15:0] delay_wire_507;
  logic [15:0] delay_wire_508;
  logic [15:0] delay_wire_509;
  logic [15:0] delay_wire_510;
  logic [15:0] delay_wire_511;
  logic [15:0] delay_wire_512;
  logic [15:0] delay_wire_513;
  logic [15:0] delay_wire_514;
  logic [15:0] delay_wire_515;
  logic [15:0] delay_wire_516;
  logic [15:0] delay_wire_517;
  logic [15:0] delay_wire_518;
  logic [15:0] delay_wire_519;
  logic [15:0] delay_wire_520;
  logic [15:0] delay_wire_521;
  logic [15:0] delay_wire_522;
  logic [15:0] delay_wire_523;
  always @(posedge clk) begin
    delay_wire_457 <= in;
    delay_wire_458 <= delay_wire_457;
    delay_wire_459 <= delay_wire_458;
    delay_wire_460 <= delay_wire_459;
    delay_wire_461 <= delay_wire_460;
    delay_wire_462 <= delay_wire_461;
    delay_wire_463 <= delay_wire_462;
    delay_wire_464 <= delay_wire_463;
    delay_wire_465 <= delay_wire_464;
    delay_wire_466 <= delay_wire_465;
    delay_wire_467 <= delay_wire_466;
    delay_wire_468 <= delay_wire_467;
    delay_wire_469 <= delay_wire_468;
    delay_wire_470 <= delay_wire_469;
    delay_wire_471 <= delay_wire_470;
    delay_wire_472 <= delay_wire_471;
    delay_wire_473 <= delay_wire_472;
    delay_wire_474 <= delay_wire_473;
    delay_wire_475 <= delay_wire_474;
    delay_wire_476 <= delay_wire_475;
    delay_wire_477 <= delay_wire_476;
    delay_wire_478 <= delay_wire_477;
    delay_wire_479 <= delay_wire_478;
    delay_wire_480 <= delay_wire_479;
    delay_wire_481 <= delay_wire_480;
    delay_wire_482 <= delay_wire_481;
    delay_wire_483 <= delay_wire_482;
    delay_wire_484 <= delay_wire_483;
    delay_wire_485 <= delay_wire_484;
    delay_wire_486 <= delay_wire_485;
    delay_wire_487 <= delay_wire_486;
    delay_wire_488 <= delay_wire_487;
    delay_wire_489 <= delay_wire_488;
    delay_wire_490 <= delay_wire_489;
    delay_wire_491 <= delay_wire_490;
    delay_wire_492 <= delay_wire_491;
    delay_wire_493 <= delay_wire_492;
    delay_wire_494 <= delay_wire_493;
    delay_wire_495 <= delay_wire_494;
    delay_wire_496 <= delay_wire_495;
    delay_wire_497 <= delay_wire_496;
    delay_wire_498 <= delay_wire_497;
    delay_wire_499 <= delay_wire_498;
    delay_wire_500 <= delay_wire_499;
    delay_wire_501 <= delay_wire_500;
    delay_wire_502 <= delay_wire_501;
    delay_wire_503 <= delay_wire_502;
    delay_wire_504 <= delay_wire_503;
    delay_wire_505 <= delay_wire_504;
    delay_wire_506 <= delay_wire_505;
    delay_wire_507 <= delay_wire_506;
    delay_wire_508 <= delay_wire_507;
    delay_wire_509 <= delay_wire_508;
    delay_wire_510 <= delay_wire_509;
    delay_wire_511 <= delay_wire_510;
    delay_wire_512 <= delay_wire_511;
    delay_wire_513 <= delay_wire_512;
    delay_wire_514 <= delay_wire_513;
    delay_wire_515 <= delay_wire_514;
    delay_wire_516 <= delay_wire_515;
    delay_wire_517 <= delay_wire_516;
    delay_wire_518 <= delay_wire_517;
    delay_wire_519 <= delay_wire_518;
    delay_wire_520 <= delay_wire_519;
    delay_wire_521 <= delay_wire_520;
    delay_wire_522 <= delay_wire_521;
    delay_wire_523 <= delay_wire_522;
  end
  assign out = delay_wire_523;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_524;
  logic [15:0] delay_wire_525;
  logic [15:0] delay_wire_526;
  logic [15:0] delay_wire_527;
  logic [15:0] delay_wire_528;
  logic [15:0] delay_wire_529;
  logic [15:0] delay_wire_530;
  logic [15:0] delay_wire_531;
  logic [15:0] delay_wire_532;
  logic [15:0] delay_wire_533;
  logic [15:0] delay_wire_534;
  logic [15:0] delay_wire_535;
  logic [15:0] delay_wire_536;
  logic [15:0] delay_wire_537;
  logic [15:0] delay_wire_538;
  logic [15:0] delay_wire_539;
  logic [15:0] delay_wire_540;
  logic [15:0] delay_wire_541;
  logic [15:0] delay_wire_542;
  logic [15:0] delay_wire_543;
  logic [15:0] delay_wire_544;
  logic [15:0] delay_wire_545;
  logic [15:0] delay_wire_546;
  logic [15:0] delay_wire_547;
  logic [15:0] delay_wire_548;
  logic [15:0] delay_wire_549;
  logic [15:0] delay_wire_550;
  logic [15:0] delay_wire_551;
  logic [15:0] delay_wire_552;
  logic [15:0] delay_wire_553;
  logic [15:0] delay_wire_554;
  logic [15:0] delay_wire_555;
  logic [15:0] delay_wire_556;
  logic [15:0] delay_wire_557;
  logic [15:0] delay_wire_558;
  logic [15:0] delay_wire_559;
  logic [15:0] delay_wire_560;
  logic [15:0] delay_wire_561;
  logic [15:0] delay_wire_562;
  logic [15:0] delay_wire_563;
  logic [15:0] delay_wire_564;
  logic [15:0] delay_wire_565;
  logic [15:0] delay_wire_566;
  logic [15:0] delay_wire_567;
  logic [15:0] delay_wire_568;
  logic [15:0] delay_wire_569;
  logic [15:0] delay_wire_570;
  logic [15:0] delay_wire_571;
  logic [15:0] delay_wire_572;
  logic [15:0] delay_wire_573;
  logic [15:0] delay_wire_574;
  logic [15:0] delay_wire_575;
  logic [15:0] delay_wire_576;
  logic [15:0] delay_wire_577;
  logic [15:0] delay_wire_578;
  logic [15:0] delay_wire_579;
  logic [15:0] delay_wire_580;
  logic [15:0] delay_wire_581;
  logic [15:0] delay_wire_582;
  logic [15:0] delay_wire_583;
  logic [15:0] delay_wire_584;
  logic [15:0] delay_wire_585;
  logic [15:0] delay_wire_586;
  logic [15:0] delay_wire_587;
  logic [15:0] delay_wire_588;
  always @(posedge clk) begin
    delay_wire_524 <= in;
    delay_wire_525 <= delay_wire_524;
    delay_wire_526 <= delay_wire_525;
    delay_wire_527 <= delay_wire_526;
    delay_wire_528 <= delay_wire_527;
    delay_wire_529 <= delay_wire_528;
    delay_wire_530 <= delay_wire_529;
    delay_wire_531 <= delay_wire_530;
    delay_wire_532 <= delay_wire_531;
    delay_wire_533 <= delay_wire_532;
    delay_wire_534 <= delay_wire_533;
    delay_wire_535 <= delay_wire_534;
    delay_wire_536 <= delay_wire_535;
    delay_wire_537 <= delay_wire_536;
    delay_wire_538 <= delay_wire_537;
    delay_wire_539 <= delay_wire_538;
    delay_wire_540 <= delay_wire_539;
    delay_wire_541 <= delay_wire_540;
    delay_wire_542 <= delay_wire_541;
    delay_wire_543 <= delay_wire_542;
    delay_wire_544 <= delay_wire_543;
    delay_wire_545 <= delay_wire_544;
    delay_wire_546 <= delay_wire_545;
    delay_wire_547 <= delay_wire_546;
    delay_wire_548 <= delay_wire_547;
    delay_wire_549 <= delay_wire_548;
    delay_wire_550 <= delay_wire_549;
    delay_wire_551 <= delay_wire_550;
    delay_wire_552 <= delay_wire_551;
    delay_wire_553 <= delay_wire_552;
    delay_wire_554 <= delay_wire_553;
    delay_wire_555 <= delay_wire_554;
    delay_wire_556 <= delay_wire_555;
    delay_wire_557 <= delay_wire_556;
    delay_wire_558 <= delay_wire_557;
    delay_wire_559 <= delay_wire_558;
    delay_wire_560 <= delay_wire_559;
    delay_wire_561 <= delay_wire_560;
    delay_wire_562 <= delay_wire_561;
    delay_wire_563 <= delay_wire_562;
    delay_wire_564 <= delay_wire_563;
    delay_wire_565 <= delay_wire_564;
    delay_wire_566 <= delay_wire_565;
    delay_wire_567 <= delay_wire_566;
    delay_wire_568 <= delay_wire_567;
    delay_wire_569 <= delay_wire_568;
    delay_wire_570 <= delay_wire_569;
    delay_wire_571 <= delay_wire_570;
    delay_wire_572 <= delay_wire_571;
    delay_wire_573 <= delay_wire_572;
    delay_wire_574 <= delay_wire_573;
    delay_wire_575 <= delay_wire_574;
    delay_wire_576 <= delay_wire_575;
    delay_wire_577 <= delay_wire_576;
    delay_wire_578 <= delay_wire_577;
    delay_wire_579 <= delay_wire_578;
    delay_wire_580 <= delay_wire_579;
    delay_wire_581 <= delay_wire_580;
    delay_wire_582 <= delay_wire_581;
    delay_wire_583 <= delay_wire_582;
    delay_wire_584 <= delay_wire_583;
    delay_wire_585 <= delay_wire_584;
    delay_wire_586 <= delay_wire_585;
    delay_wire_587 <= delay_wire_586;
    delay_wire_588 <= delay_wire_587;
  end
  assign out = delay_wire_588;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_589;
  logic [15:0] delay_wire_590;
  logic [15:0] delay_wire_591;
  always @(posedge clk) begin
    delay_wire_589 <= in;
    delay_wire_590 <= delay_wire_589;
    delay_wire_591 <= delay_wire_590;
  end
  assign out = delay_wire_591;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_592;
  logic [15:0] delay_wire_593;
  always @(posedge clk) begin
    delay_wire_592 <= in;
    delay_wire_593 <= delay_wire_592;
  end
  assign out = delay_wire_593;
endmodule

module cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_to_cim_stencil_op_hcompute_cim_stencil_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_594;
  always @(posedge clk) begin
    delay_wire_594 <= in;
  end
  assign out = delay_wire_594;
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

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_66_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_66_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[0]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_67_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_67_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[1]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_68_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_68_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[2]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_69_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_69_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[3]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_70_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_70_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[4]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_71_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_71_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[5]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_72_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_72_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[6]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_73_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_73_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[7]));

    cim_stencil_cim_stencil_op_hcompute_cim_output_stencil_74_to_cim_stencil_op_hcompute_cim_stencil_61_sr cim_stencil_op_hcompute_cim_output_stencil_74_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_cim_stencil_write[0]), .out(op_hcompute_cim_output_stencil_read[8]));


  // Storage capacity pre-banking: 3600
  logic [15:0]op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_stencil_write_wen_fsm_out;
  cim_stencil_op_hcompute_cim_stencil_write_fsm cim_stencil_op_hcompute_cim_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_stencil_write_ctrl_vars( op_hcompute_cim_stencil_write_ctrl_vars_fsm_out), .op_hcompute_cim_stencil_write_wen(op_hcompute_cim_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_cim_output_stencil_read_ren_fsm_out;
  cim_stencil_op_hcompute_cim_output_stencil_read_fsm cim_stencil_op_hcompute_cim_output_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_cim_output_stencil_read_ctrl_vars( op_hcompute_cim_output_stencil_read_ctrl_vars_fsm_out), .op_hcompute_cim_output_stencil_read_ren(op_hcompute_cim_output_stencil_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [3600];
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
  assign addr0 = (((((-1 + 1*op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[1])) - -1)>>0)*1+((((-1 + 1*op_hcompute_cim_stencil_write_ctrl_vars_fsm_out[2])) - -1)>>0)*60);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_cim_stencil_write_wen_fsm_out) begin
      case( cim_stencil_cim_stencil_op_hcompute_cim_stencil_61_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_cim_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule


module grad_x_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_to_grad_x_stencil_op_hcompute_grad_x_stencil_54_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_595;
  always @(posedge clk) begin
    delay_wire_595 <= in;
  end
  assign out = delay_wire_595;
endmodule

module grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_to_grad_x_stencil_op_hcompute_grad_x_stencil_54_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_596;
  logic [15:0] delay_wire_597;
  logic [15:0] delay_wire_598;
  logic [15:0] delay_wire_599;
  logic [15:0] delay_wire_600;
  always @(posedge clk) begin
    delay_wire_596 <= in;
    delay_wire_597 <= delay_wire_596;
    delay_wire_598 <= delay_wire_597;
    delay_wire_599 <= delay_wire_598;
    delay_wire_600 <= delay_wire_599;
  end
  assign out = delay_wire_600;
endmodule

module grad_x_stencil_grad_x_stencil_op_hcompute_lxy_stencil_5_to_grad_x_stencil_op_hcompute_lxx_stencil_8_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_601;
  logic [15:0] delay_wire_602;
  logic [15:0] delay_wire_603;
  logic [15:0] delay_wire_604;
  always @(posedge clk) begin
    delay_wire_601 <= in;
    delay_wire_602 <= delay_wire_601;
    delay_wire_603 <= delay_wire_602;
    delay_wire_604 <= delay_wire_603;
  end
  assign out = delay_wire_604;
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

    grad_x_stencil_grad_x_stencil_op_hcompute_lxx_stencil_8_to_grad_x_stencil_op_hcompute_grad_x_stencil_54_sr grad_x_stencil_op_hcompute_lxx_stencil_8_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_x_stencil_write[0]), .out(op_hcompute_lxx_stencil_read[0]));


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
  always @(posedge clk) begin
    if (op_hcompute_grad_x_stencil_write_wen_fsm_out) begin
      case( grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_54_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_grad_x_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule


module grad_y_stencil_bank_selector(input logic [16*2 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_to_grad_y_stencil_op_hcompute_grad_y_stencil_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_605;
  always @(posedge clk) begin
    delay_wire_605 <= in;
  end
  assign out = delay_wire_605;
endmodule

module grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_to_grad_y_stencil_op_hcompute_grad_y_stencil_47_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_606;
  logic [15:0] delay_wire_607;
  logic [15:0] delay_wire_608;
  logic [15:0] delay_wire_609;
  always @(posedge clk) begin
    delay_wire_606 <= in;
    delay_wire_607 <= delay_wire_606;
    delay_wire_608 <= delay_wire_607;
    delay_wire_609 <= delay_wire_608;
  end
  assign out = delay_wire_609;
endmodule

module grad_y_stencil_grad_y_stencil_op_hcompute_lyy_stencil_3_to_grad_y_stencil_op_hcompute_lxy_stencil_6_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_610;
  logic [15:0] delay_wire_611;
  logic [15:0] delay_wire_612;
  always @(posedge clk) begin
    delay_wire_610 <= in;
    delay_wire_611 <= delay_wire_610;
    delay_wire_612 <= delay_wire_611;
  end
  assign out = delay_wire_612;
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

    grad_y_stencil_grad_y_stencil_op_hcompute_lxy_stencil_6_to_grad_y_stencil_op_hcompute_grad_y_stencil_47_sr grad_y_stencil_op_hcompute_lxy_stencil_6_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_grad_y_stencil_write[0]), .out(op_hcompute_lxy_stencil_read[0]));


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
  always @(posedge clk) begin
    if (op_hcompute_grad_y_stencil_write_wen_fsm_out) begin
      case( grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_47_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_grad_y_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
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
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  assign out = bank_index_0*1+bank_index_1*1;

endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_613;
  logic [15:0] delay_wire_614;
  logic [15:0] delay_wire_615;
  logic [15:0] delay_wire_616;
  logic [15:0] delay_wire_617;
  logic [15:0] delay_wire_618;
  logic [15:0] delay_wire_619;
  logic [15:0] delay_wire_620;
  logic [15:0] delay_wire_621;
  logic [15:0] delay_wire_622;
  logic [15:0] delay_wire_623;
  logic [15:0] delay_wire_624;
  logic [15:0] delay_wire_625;
  logic [15:0] delay_wire_626;
  logic [15:0] delay_wire_627;
  logic [15:0] delay_wire_628;
  logic [15:0] delay_wire_629;
  logic [15:0] delay_wire_630;
  logic [15:0] delay_wire_631;
  logic [15:0] delay_wire_632;
  logic [15:0] delay_wire_633;
  logic [15:0] delay_wire_634;
  logic [15:0] delay_wire_635;
  logic [15:0] delay_wire_636;
  logic [15:0] delay_wire_637;
  logic [15:0] delay_wire_638;
  logic [15:0] delay_wire_639;
  logic [15:0] delay_wire_640;
  logic [15:0] delay_wire_641;
  logic [15:0] delay_wire_642;
  logic [15:0] delay_wire_643;
  logic [15:0] delay_wire_644;
  logic [15:0] delay_wire_645;
  logic [15:0] delay_wire_646;
  logic [15:0] delay_wire_647;
  logic [15:0] delay_wire_648;
  logic [15:0] delay_wire_649;
  logic [15:0] delay_wire_650;
  logic [15:0] delay_wire_651;
  logic [15:0] delay_wire_652;
  logic [15:0] delay_wire_653;
  logic [15:0] delay_wire_654;
  logic [15:0] delay_wire_655;
  logic [15:0] delay_wire_656;
  logic [15:0] delay_wire_657;
  logic [15:0] delay_wire_658;
  logic [15:0] delay_wire_659;
  logic [15:0] delay_wire_660;
  logic [15:0] delay_wire_661;
  logic [15:0] delay_wire_662;
  logic [15:0] delay_wire_663;
  logic [15:0] delay_wire_664;
  logic [15:0] delay_wire_665;
  logic [15:0] delay_wire_666;
  logic [15:0] delay_wire_667;
  logic [15:0] delay_wire_668;
  logic [15:0] delay_wire_669;
  logic [15:0] delay_wire_670;
  logic [15:0] delay_wire_671;
  logic [15:0] delay_wire_672;
  logic [15:0] delay_wire_673;
  logic [15:0] delay_wire_674;
  logic [15:0] delay_wire_675;
  logic [15:0] delay_wire_676;
  logic [15:0] delay_wire_677;
  logic [15:0] delay_wire_678;
  logic [15:0] delay_wire_679;
  logic [15:0] delay_wire_680;
  logic [15:0] delay_wire_681;
  logic [15:0] delay_wire_682;
  logic [15:0] delay_wire_683;
  logic [15:0] delay_wire_684;
  logic [15:0] delay_wire_685;
  logic [15:0] delay_wire_686;
  logic [15:0] delay_wire_687;
  logic [15:0] delay_wire_688;
  logic [15:0] delay_wire_689;
  logic [15:0] delay_wire_690;
  logic [15:0] delay_wire_691;
  logic [15:0] delay_wire_692;
  logic [15:0] delay_wire_693;
  logic [15:0] delay_wire_694;
  logic [15:0] delay_wire_695;
  logic [15:0] delay_wire_696;
  logic [15:0] delay_wire_697;
  logic [15:0] delay_wire_698;
  logic [15:0] delay_wire_699;
  logic [15:0] delay_wire_700;
  logic [15:0] delay_wire_701;
  logic [15:0] delay_wire_702;
  logic [15:0] delay_wire_703;
  logic [15:0] delay_wire_704;
  logic [15:0] delay_wire_705;
  logic [15:0] delay_wire_706;
  logic [15:0] delay_wire_707;
  logic [15:0] delay_wire_708;
  logic [15:0] delay_wire_709;
  logic [15:0] delay_wire_710;
  logic [15:0] delay_wire_711;
  logic [15:0] delay_wire_712;
  logic [15:0] delay_wire_713;
  logic [15:0] delay_wire_714;
  logic [15:0] delay_wire_715;
  logic [15:0] delay_wire_716;
  logic [15:0] delay_wire_717;
  logic [15:0] delay_wire_718;
  logic [15:0] delay_wire_719;
  logic [15:0] delay_wire_720;
  logic [15:0] delay_wire_721;
  logic [15:0] delay_wire_722;
  logic [15:0] delay_wire_723;
  logic [15:0] delay_wire_724;
  logic [15:0] delay_wire_725;
  logic [15:0] delay_wire_726;
  logic [15:0] delay_wire_727;
  logic [15:0] delay_wire_728;
  logic [15:0] delay_wire_729;
  logic [15:0] delay_wire_730;
  logic [15:0] delay_wire_731;
  logic [15:0] delay_wire_732;
  logic [15:0] delay_wire_733;
  logic [15:0] delay_wire_734;
  logic [15:0] delay_wire_735;
  logic [15:0] delay_wire_736;
  logic [15:0] delay_wire_737;
  logic [15:0] delay_wire_738;
  logic [15:0] delay_wire_739;
  logic [15:0] delay_wire_740;
  logic [15:0] delay_wire_741;
  always @(posedge clk) begin
    delay_wire_613 <= in;
    delay_wire_614 <= delay_wire_613;
    delay_wire_615 <= delay_wire_614;
    delay_wire_616 <= delay_wire_615;
    delay_wire_617 <= delay_wire_616;
    delay_wire_618 <= delay_wire_617;
    delay_wire_619 <= delay_wire_618;
    delay_wire_620 <= delay_wire_619;
    delay_wire_621 <= delay_wire_620;
    delay_wire_622 <= delay_wire_621;
    delay_wire_623 <= delay_wire_622;
    delay_wire_624 <= delay_wire_623;
    delay_wire_625 <= delay_wire_624;
    delay_wire_626 <= delay_wire_625;
    delay_wire_627 <= delay_wire_626;
    delay_wire_628 <= delay_wire_627;
    delay_wire_629 <= delay_wire_628;
    delay_wire_630 <= delay_wire_629;
    delay_wire_631 <= delay_wire_630;
    delay_wire_632 <= delay_wire_631;
    delay_wire_633 <= delay_wire_632;
    delay_wire_634 <= delay_wire_633;
    delay_wire_635 <= delay_wire_634;
    delay_wire_636 <= delay_wire_635;
    delay_wire_637 <= delay_wire_636;
    delay_wire_638 <= delay_wire_637;
    delay_wire_639 <= delay_wire_638;
    delay_wire_640 <= delay_wire_639;
    delay_wire_641 <= delay_wire_640;
    delay_wire_642 <= delay_wire_641;
    delay_wire_643 <= delay_wire_642;
    delay_wire_644 <= delay_wire_643;
    delay_wire_645 <= delay_wire_644;
    delay_wire_646 <= delay_wire_645;
    delay_wire_647 <= delay_wire_646;
    delay_wire_648 <= delay_wire_647;
    delay_wire_649 <= delay_wire_648;
    delay_wire_650 <= delay_wire_649;
    delay_wire_651 <= delay_wire_650;
    delay_wire_652 <= delay_wire_651;
    delay_wire_653 <= delay_wire_652;
    delay_wire_654 <= delay_wire_653;
    delay_wire_655 <= delay_wire_654;
    delay_wire_656 <= delay_wire_655;
    delay_wire_657 <= delay_wire_656;
    delay_wire_658 <= delay_wire_657;
    delay_wire_659 <= delay_wire_658;
    delay_wire_660 <= delay_wire_659;
    delay_wire_661 <= delay_wire_660;
    delay_wire_662 <= delay_wire_661;
    delay_wire_663 <= delay_wire_662;
    delay_wire_664 <= delay_wire_663;
    delay_wire_665 <= delay_wire_664;
    delay_wire_666 <= delay_wire_665;
    delay_wire_667 <= delay_wire_666;
    delay_wire_668 <= delay_wire_667;
    delay_wire_669 <= delay_wire_668;
    delay_wire_670 <= delay_wire_669;
    delay_wire_671 <= delay_wire_670;
    delay_wire_672 <= delay_wire_671;
    delay_wire_673 <= delay_wire_672;
    delay_wire_674 <= delay_wire_673;
    delay_wire_675 <= delay_wire_674;
    delay_wire_676 <= delay_wire_675;
    delay_wire_677 <= delay_wire_676;
    delay_wire_678 <= delay_wire_677;
    delay_wire_679 <= delay_wire_678;
    delay_wire_680 <= delay_wire_679;
    delay_wire_681 <= delay_wire_680;
    delay_wire_682 <= delay_wire_681;
    delay_wire_683 <= delay_wire_682;
    delay_wire_684 <= delay_wire_683;
    delay_wire_685 <= delay_wire_684;
    delay_wire_686 <= delay_wire_685;
    delay_wire_687 <= delay_wire_686;
    delay_wire_688 <= delay_wire_687;
    delay_wire_689 <= delay_wire_688;
    delay_wire_690 <= delay_wire_689;
    delay_wire_691 <= delay_wire_690;
    delay_wire_692 <= delay_wire_691;
    delay_wire_693 <= delay_wire_692;
    delay_wire_694 <= delay_wire_693;
    delay_wire_695 <= delay_wire_694;
    delay_wire_696 <= delay_wire_695;
    delay_wire_697 <= delay_wire_696;
    delay_wire_698 <= delay_wire_697;
    delay_wire_699 <= delay_wire_698;
    delay_wire_700 <= delay_wire_699;
    delay_wire_701 <= delay_wire_700;
    delay_wire_702 <= delay_wire_701;
    delay_wire_703 <= delay_wire_702;
    delay_wire_704 <= delay_wire_703;
    delay_wire_705 <= delay_wire_704;
    delay_wire_706 <= delay_wire_705;
    delay_wire_707 <= delay_wire_706;
    delay_wire_708 <= delay_wire_707;
    delay_wire_709 <= delay_wire_708;
    delay_wire_710 <= delay_wire_709;
    delay_wire_711 <= delay_wire_710;
    delay_wire_712 <= delay_wire_711;
    delay_wire_713 <= delay_wire_712;
    delay_wire_714 <= delay_wire_713;
    delay_wire_715 <= delay_wire_714;
    delay_wire_716 <= delay_wire_715;
    delay_wire_717 <= delay_wire_716;
    delay_wire_718 <= delay_wire_717;
    delay_wire_719 <= delay_wire_718;
    delay_wire_720 <= delay_wire_719;
    delay_wire_721 <= delay_wire_720;
    delay_wire_722 <= delay_wire_721;
    delay_wire_723 <= delay_wire_722;
    delay_wire_724 <= delay_wire_723;
    delay_wire_725 <= delay_wire_724;
    delay_wire_726 <= delay_wire_725;
    delay_wire_727 <= delay_wire_726;
    delay_wire_728 <= delay_wire_727;
    delay_wire_729 <= delay_wire_728;
    delay_wire_730 <= delay_wire_729;
    delay_wire_731 <= delay_wire_730;
    delay_wire_732 <= delay_wire_731;
    delay_wire_733 <= delay_wire_732;
    delay_wire_734 <= delay_wire_733;
    delay_wire_735 <= delay_wire_734;
    delay_wire_736 <= delay_wire_735;
    delay_wire_737 <= delay_wire_736;
    delay_wire_738 <= delay_wire_737;
    delay_wire_739 <= delay_wire_738;
    delay_wire_740 <= delay_wire_739;
    delay_wire_741 <= delay_wire_740;
  end
  assign out = delay_wire_741;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_742;
  always @(posedge clk) begin
    delay_wire_742 <= in;
  end
  assign out = delay_wire_742;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_743;
  logic [15:0] delay_wire_744;
  logic [15:0] delay_wire_745;
  logic [15:0] delay_wire_746;
  logic [15:0] delay_wire_747;
  logic [15:0] delay_wire_748;
  logic [15:0] delay_wire_749;
  logic [15:0] delay_wire_750;
  logic [15:0] delay_wire_751;
  logic [15:0] delay_wire_752;
  logic [15:0] delay_wire_753;
  logic [15:0] delay_wire_754;
  logic [15:0] delay_wire_755;
  logic [15:0] delay_wire_756;
  logic [15:0] delay_wire_757;
  logic [15:0] delay_wire_758;
  logic [15:0] delay_wire_759;
  logic [15:0] delay_wire_760;
  logic [15:0] delay_wire_761;
  logic [15:0] delay_wire_762;
  logic [15:0] delay_wire_763;
  logic [15:0] delay_wire_764;
  logic [15:0] delay_wire_765;
  logic [15:0] delay_wire_766;
  logic [15:0] delay_wire_767;
  logic [15:0] delay_wire_768;
  logic [15:0] delay_wire_769;
  logic [15:0] delay_wire_770;
  logic [15:0] delay_wire_771;
  logic [15:0] delay_wire_772;
  logic [15:0] delay_wire_773;
  logic [15:0] delay_wire_774;
  logic [15:0] delay_wire_775;
  logic [15:0] delay_wire_776;
  logic [15:0] delay_wire_777;
  logic [15:0] delay_wire_778;
  logic [15:0] delay_wire_779;
  logic [15:0] delay_wire_780;
  logic [15:0] delay_wire_781;
  logic [15:0] delay_wire_782;
  logic [15:0] delay_wire_783;
  logic [15:0] delay_wire_784;
  logic [15:0] delay_wire_785;
  logic [15:0] delay_wire_786;
  logic [15:0] delay_wire_787;
  logic [15:0] delay_wire_788;
  logic [15:0] delay_wire_789;
  logic [15:0] delay_wire_790;
  logic [15:0] delay_wire_791;
  logic [15:0] delay_wire_792;
  logic [15:0] delay_wire_793;
  logic [15:0] delay_wire_794;
  logic [15:0] delay_wire_795;
  logic [15:0] delay_wire_796;
  logic [15:0] delay_wire_797;
  logic [15:0] delay_wire_798;
  logic [15:0] delay_wire_799;
  logic [15:0] delay_wire_800;
  logic [15:0] delay_wire_801;
  logic [15:0] delay_wire_802;
  logic [15:0] delay_wire_803;
  logic [15:0] delay_wire_804;
  logic [15:0] delay_wire_805;
  logic [15:0] delay_wire_806;
  logic [15:0] delay_wire_807;
  always @(posedge clk) begin
    delay_wire_743 <= in;
    delay_wire_744 <= delay_wire_743;
    delay_wire_745 <= delay_wire_744;
    delay_wire_746 <= delay_wire_745;
    delay_wire_747 <= delay_wire_746;
    delay_wire_748 <= delay_wire_747;
    delay_wire_749 <= delay_wire_748;
    delay_wire_750 <= delay_wire_749;
    delay_wire_751 <= delay_wire_750;
    delay_wire_752 <= delay_wire_751;
    delay_wire_753 <= delay_wire_752;
    delay_wire_754 <= delay_wire_753;
    delay_wire_755 <= delay_wire_754;
    delay_wire_756 <= delay_wire_755;
    delay_wire_757 <= delay_wire_756;
    delay_wire_758 <= delay_wire_757;
    delay_wire_759 <= delay_wire_758;
    delay_wire_760 <= delay_wire_759;
    delay_wire_761 <= delay_wire_760;
    delay_wire_762 <= delay_wire_761;
    delay_wire_763 <= delay_wire_762;
    delay_wire_764 <= delay_wire_763;
    delay_wire_765 <= delay_wire_764;
    delay_wire_766 <= delay_wire_765;
    delay_wire_767 <= delay_wire_766;
    delay_wire_768 <= delay_wire_767;
    delay_wire_769 <= delay_wire_768;
    delay_wire_770 <= delay_wire_769;
    delay_wire_771 <= delay_wire_770;
    delay_wire_772 <= delay_wire_771;
    delay_wire_773 <= delay_wire_772;
    delay_wire_774 <= delay_wire_773;
    delay_wire_775 <= delay_wire_774;
    delay_wire_776 <= delay_wire_775;
    delay_wire_777 <= delay_wire_776;
    delay_wire_778 <= delay_wire_777;
    delay_wire_779 <= delay_wire_778;
    delay_wire_780 <= delay_wire_779;
    delay_wire_781 <= delay_wire_780;
    delay_wire_782 <= delay_wire_781;
    delay_wire_783 <= delay_wire_782;
    delay_wire_784 <= delay_wire_783;
    delay_wire_785 <= delay_wire_784;
    delay_wire_786 <= delay_wire_785;
    delay_wire_787 <= delay_wire_786;
    delay_wire_788 <= delay_wire_787;
    delay_wire_789 <= delay_wire_788;
    delay_wire_790 <= delay_wire_789;
    delay_wire_791 <= delay_wire_790;
    delay_wire_792 <= delay_wire_791;
    delay_wire_793 <= delay_wire_792;
    delay_wire_794 <= delay_wire_793;
    delay_wire_795 <= delay_wire_794;
    delay_wire_796 <= delay_wire_795;
    delay_wire_797 <= delay_wire_796;
    delay_wire_798 <= delay_wire_797;
    delay_wire_799 <= delay_wire_798;
    delay_wire_800 <= delay_wire_799;
    delay_wire_801 <= delay_wire_800;
    delay_wire_802 <= delay_wire_801;
    delay_wire_803 <= delay_wire_802;
    delay_wire_804 <= delay_wire_803;
    delay_wire_805 <= delay_wire_804;
    delay_wire_806 <= delay_wire_805;
    delay_wire_807 <= delay_wire_806;
  end
  assign out = delay_wire_807;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_808;
  logic [15:0] delay_wire_809;
  logic [15:0] delay_wire_810;
  logic [15:0] delay_wire_811;
  logic [15:0] delay_wire_812;
  logic [15:0] delay_wire_813;
  logic [15:0] delay_wire_814;
  logic [15:0] delay_wire_815;
  logic [15:0] delay_wire_816;
  logic [15:0] delay_wire_817;
  logic [15:0] delay_wire_818;
  logic [15:0] delay_wire_819;
  logic [15:0] delay_wire_820;
  logic [15:0] delay_wire_821;
  logic [15:0] delay_wire_822;
  logic [15:0] delay_wire_823;
  logic [15:0] delay_wire_824;
  logic [15:0] delay_wire_825;
  logic [15:0] delay_wire_826;
  logic [15:0] delay_wire_827;
  logic [15:0] delay_wire_828;
  logic [15:0] delay_wire_829;
  logic [15:0] delay_wire_830;
  logic [15:0] delay_wire_831;
  logic [15:0] delay_wire_832;
  logic [15:0] delay_wire_833;
  logic [15:0] delay_wire_834;
  logic [15:0] delay_wire_835;
  logic [15:0] delay_wire_836;
  logic [15:0] delay_wire_837;
  logic [15:0] delay_wire_838;
  logic [15:0] delay_wire_839;
  logic [15:0] delay_wire_840;
  logic [15:0] delay_wire_841;
  logic [15:0] delay_wire_842;
  logic [15:0] delay_wire_843;
  logic [15:0] delay_wire_844;
  logic [15:0] delay_wire_845;
  logic [15:0] delay_wire_846;
  logic [15:0] delay_wire_847;
  logic [15:0] delay_wire_848;
  logic [15:0] delay_wire_849;
  logic [15:0] delay_wire_850;
  logic [15:0] delay_wire_851;
  logic [15:0] delay_wire_852;
  logic [15:0] delay_wire_853;
  logic [15:0] delay_wire_854;
  logic [15:0] delay_wire_855;
  logic [15:0] delay_wire_856;
  logic [15:0] delay_wire_857;
  logic [15:0] delay_wire_858;
  logic [15:0] delay_wire_859;
  logic [15:0] delay_wire_860;
  logic [15:0] delay_wire_861;
  logic [15:0] delay_wire_862;
  logic [15:0] delay_wire_863;
  logic [15:0] delay_wire_864;
  logic [15:0] delay_wire_865;
  logic [15:0] delay_wire_866;
  logic [15:0] delay_wire_867;
  logic [15:0] delay_wire_868;
  logic [15:0] delay_wire_869;
  logic [15:0] delay_wire_870;
  logic [15:0] delay_wire_871;
  logic [15:0] delay_wire_872;
  logic [15:0] delay_wire_873;
  logic [15:0] delay_wire_874;
  logic [15:0] delay_wire_875;
  logic [15:0] delay_wire_876;
  logic [15:0] delay_wire_877;
  logic [15:0] delay_wire_878;
  logic [15:0] delay_wire_879;
  logic [15:0] delay_wire_880;
  logic [15:0] delay_wire_881;
  logic [15:0] delay_wire_882;
  logic [15:0] delay_wire_883;
  logic [15:0] delay_wire_884;
  logic [15:0] delay_wire_885;
  logic [15:0] delay_wire_886;
  logic [15:0] delay_wire_887;
  logic [15:0] delay_wire_888;
  logic [15:0] delay_wire_889;
  logic [15:0] delay_wire_890;
  logic [15:0] delay_wire_891;
  logic [15:0] delay_wire_892;
  logic [15:0] delay_wire_893;
  logic [15:0] delay_wire_894;
  logic [15:0] delay_wire_895;
  logic [15:0] delay_wire_896;
  logic [15:0] delay_wire_897;
  logic [15:0] delay_wire_898;
  logic [15:0] delay_wire_899;
  logic [15:0] delay_wire_900;
  logic [15:0] delay_wire_901;
  logic [15:0] delay_wire_902;
  logic [15:0] delay_wire_903;
  logic [15:0] delay_wire_904;
  logic [15:0] delay_wire_905;
  logic [15:0] delay_wire_906;
  logic [15:0] delay_wire_907;
  logic [15:0] delay_wire_908;
  logic [15:0] delay_wire_909;
  logic [15:0] delay_wire_910;
  logic [15:0] delay_wire_911;
  logic [15:0] delay_wire_912;
  logic [15:0] delay_wire_913;
  logic [15:0] delay_wire_914;
  logic [15:0] delay_wire_915;
  logic [15:0] delay_wire_916;
  logic [15:0] delay_wire_917;
  logic [15:0] delay_wire_918;
  logic [15:0] delay_wire_919;
  logic [15:0] delay_wire_920;
  logic [15:0] delay_wire_921;
  logic [15:0] delay_wire_922;
  logic [15:0] delay_wire_923;
  logic [15:0] delay_wire_924;
  logic [15:0] delay_wire_925;
  logic [15:0] delay_wire_926;
  logic [15:0] delay_wire_927;
  logic [15:0] delay_wire_928;
  logic [15:0] delay_wire_929;
  logic [15:0] delay_wire_930;
  logic [15:0] delay_wire_931;
  logic [15:0] delay_wire_932;
  logic [15:0] delay_wire_933;
  logic [15:0] delay_wire_934;
  logic [15:0] delay_wire_935;
  logic [15:0] delay_wire_936;
  logic [15:0] delay_wire_937;
  logic [15:0] delay_wire_938;
  always @(posedge clk) begin
    delay_wire_808 <= in;
    delay_wire_809 <= delay_wire_808;
    delay_wire_810 <= delay_wire_809;
    delay_wire_811 <= delay_wire_810;
    delay_wire_812 <= delay_wire_811;
    delay_wire_813 <= delay_wire_812;
    delay_wire_814 <= delay_wire_813;
    delay_wire_815 <= delay_wire_814;
    delay_wire_816 <= delay_wire_815;
    delay_wire_817 <= delay_wire_816;
    delay_wire_818 <= delay_wire_817;
    delay_wire_819 <= delay_wire_818;
    delay_wire_820 <= delay_wire_819;
    delay_wire_821 <= delay_wire_820;
    delay_wire_822 <= delay_wire_821;
    delay_wire_823 <= delay_wire_822;
    delay_wire_824 <= delay_wire_823;
    delay_wire_825 <= delay_wire_824;
    delay_wire_826 <= delay_wire_825;
    delay_wire_827 <= delay_wire_826;
    delay_wire_828 <= delay_wire_827;
    delay_wire_829 <= delay_wire_828;
    delay_wire_830 <= delay_wire_829;
    delay_wire_831 <= delay_wire_830;
    delay_wire_832 <= delay_wire_831;
    delay_wire_833 <= delay_wire_832;
    delay_wire_834 <= delay_wire_833;
    delay_wire_835 <= delay_wire_834;
    delay_wire_836 <= delay_wire_835;
    delay_wire_837 <= delay_wire_836;
    delay_wire_838 <= delay_wire_837;
    delay_wire_839 <= delay_wire_838;
    delay_wire_840 <= delay_wire_839;
    delay_wire_841 <= delay_wire_840;
    delay_wire_842 <= delay_wire_841;
    delay_wire_843 <= delay_wire_842;
    delay_wire_844 <= delay_wire_843;
    delay_wire_845 <= delay_wire_844;
    delay_wire_846 <= delay_wire_845;
    delay_wire_847 <= delay_wire_846;
    delay_wire_848 <= delay_wire_847;
    delay_wire_849 <= delay_wire_848;
    delay_wire_850 <= delay_wire_849;
    delay_wire_851 <= delay_wire_850;
    delay_wire_852 <= delay_wire_851;
    delay_wire_853 <= delay_wire_852;
    delay_wire_854 <= delay_wire_853;
    delay_wire_855 <= delay_wire_854;
    delay_wire_856 <= delay_wire_855;
    delay_wire_857 <= delay_wire_856;
    delay_wire_858 <= delay_wire_857;
    delay_wire_859 <= delay_wire_858;
    delay_wire_860 <= delay_wire_859;
    delay_wire_861 <= delay_wire_860;
    delay_wire_862 <= delay_wire_861;
    delay_wire_863 <= delay_wire_862;
    delay_wire_864 <= delay_wire_863;
    delay_wire_865 <= delay_wire_864;
    delay_wire_866 <= delay_wire_865;
    delay_wire_867 <= delay_wire_866;
    delay_wire_868 <= delay_wire_867;
    delay_wire_869 <= delay_wire_868;
    delay_wire_870 <= delay_wire_869;
    delay_wire_871 <= delay_wire_870;
    delay_wire_872 <= delay_wire_871;
    delay_wire_873 <= delay_wire_872;
    delay_wire_874 <= delay_wire_873;
    delay_wire_875 <= delay_wire_874;
    delay_wire_876 <= delay_wire_875;
    delay_wire_877 <= delay_wire_876;
    delay_wire_878 <= delay_wire_877;
    delay_wire_879 <= delay_wire_878;
    delay_wire_880 <= delay_wire_879;
    delay_wire_881 <= delay_wire_880;
    delay_wire_882 <= delay_wire_881;
    delay_wire_883 <= delay_wire_882;
    delay_wire_884 <= delay_wire_883;
    delay_wire_885 <= delay_wire_884;
    delay_wire_886 <= delay_wire_885;
    delay_wire_887 <= delay_wire_886;
    delay_wire_888 <= delay_wire_887;
    delay_wire_889 <= delay_wire_888;
    delay_wire_890 <= delay_wire_889;
    delay_wire_891 <= delay_wire_890;
    delay_wire_892 <= delay_wire_891;
    delay_wire_893 <= delay_wire_892;
    delay_wire_894 <= delay_wire_893;
    delay_wire_895 <= delay_wire_894;
    delay_wire_896 <= delay_wire_895;
    delay_wire_897 <= delay_wire_896;
    delay_wire_898 <= delay_wire_897;
    delay_wire_899 <= delay_wire_898;
    delay_wire_900 <= delay_wire_899;
    delay_wire_901 <= delay_wire_900;
    delay_wire_902 <= delay_wire_901;
    delay_wire_903 <= delay_wire_902;
    delay_wire_904 <= delay_wire_903;
    delay_wire_905 <= delay_wire_904;
    delay_wire_906 <= delay_wire_905;
    delay_wire_907 <= delay_wire_906;
    delay_wire_908 <= delay_wire_907;
    delay_wire_909 <= delay_wire_908;
    delay_wire_910 <= delay_wire_909;
    delay_wire_911 <= delay_wire_910;
    delay_wire_912 <= delay_wire_911;
    delay_wire_913 <= delay_wire_912;
    delay_wire_914 <= delay_wire_913;
    delay_wire_915 <= delay_wire_914;
    delay_wire_916 <= delay_wire_915;
    delay_wire_917 <= delay_wire_916;
    delay_wire_918 <= delay_wire_917;
    delay_wire_919 <= delay_wire_918;
    delay_wire_920 <= delay_wire_919;
    delay_wire_921 <= delay_wire_920;
    delay_wire_922 <= delay_wire_921;
    delay_wire_923 <= delay_wire_922;
    delay_wire_924 <= delay_wire_923;
    delay_wire_925 <= delay_wire_924;
    delay_wire_926 <= delay_wire_925;
    delay_wire_927 <= delay_wire_926;
    delay_wire_928 <= delay_wire_927;
    delay_wire_929 <= delay_wire_928;
    delay_wire_930 <= delay_wire_929;
    delay_wire_931 <= delay_wire_930;
    delay_wire_932 <= delay_wire_931;
    delay_wire_933 <= delay_wire_932;
    delay_wire_934 <= delay_wire_933;
    delay_wire_935 <= delay_wire_934;
    delay_wire_936 <= delay_wire_935;
    delay_wire_937 <= delay_wire_936;
    delay_wire_938 <= delay_wire_937;
  end
  assign out = delay_wire_938;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_939;
  logic [15:0] delay_wire_940;
  logic [15:0] delay_wire_941;
  logic [15:0] delay_wire_942;
  logic [15:0] delay_wire_943;
  logic [15:0] delay_wire_944;
  logic [15:0] delay_wire_945;
  logic [15:0] delay_wire_946;
  logic [15:0] delay_wire_947;
  logic [15:0] delay_wire_948;
  logic [15:0] delay_wire_949;
  logic [15:0] delay_wire_950;
  logic [15:0] delay_wire_951;
  logic [15:0] delay_wire_952;
  logic [15:0] delay_wire_953;
  logic [15:0] delay_wire_954;
  logic [15:0] delay_wire_955;
  logic [15:0] delay_wire_956;
  logic [15:0] delay_wire_957;
  logic [15:0] delay_wire_958;
  logic [15:0] delay_wire_959;
  logic [15:0] delay_wire_960;
  logic [15:0] delay_wire_961;
  logic [15:0] delay_wire_962;
  logic [15:0] delay_wire_963;
  logic [15:0] delay_wire_964;
  logic [15:0] delay_wire_965;
  logic [15:0] delay_wire_966;
  logic [15:0] delay_wire_967;
  logic [15:0] delay_wire_968;
  logic [15:0] delay_wire_969;
  logic [15:0] delay_wire_970;
  logic [15:0] delay_wire_971;
  logic [15:0] delay_wire_972;
  logic [15:0] delay_wire_973;
  logic [15:0] delay_wire_974;
  logic [15:0] delay_wire_975;
  logic [15:0] delay_wire_976;
  logic [15:0] delay_wire_977;
  logic [15:0] delay_wire_978;
  logic [15:0] delay_wire_979;
  logic [15:0] delay_wire_980;
  logic [15:0] delay_wire_981;
  logic [15:0] delay_wire_982;
  logic [15:0] delay_wire_983;
  logic [15:0] delay_wire_984;
  logic [15:0] delay_wire_985;
  logic [15:0] delay_wire_986;
  logic [15:0] delay_wire_987;
  logic [15:0] delay_wire_988;
  logic [15:0] delay_wire_989;
  logic [15:0] delay_wire_990;
  logic [15:0] delay_wire_991;
  logic [15:0] delay_wire_992;
  logic [15:0] delay_wire_993;
  logic [15:0] delay_wire_994;
  logic [15:0] delay_wire_995;
  logic [15:0] delay_wire_996;
  logic [15:0] delay_wire_997;
  logic [15:0] delay_wire_998;
  logic [15:0] delay_wire_999;
  logic [15:0] delay_wire_1000;
  logic [15:0] delay_wire_1001;
  logic [15:0] delay_wire_1002;
  logic [15:0] delay_wire_1003;
  logic [15:0] delay_wire_1004;
  logic [15:0] delay_wire_1005;
  always @(posedge clk) begin
    delay_wire_939 <= in;
    delay_wire_940 <= delay_wire_939;
    delay_wire_941 <= delay_wire_940;
    delay_wire_942 <= delay_wire_941;
    delay_wire_943 <= delay_wire_942;
    delay_wire_944 <= delay_wire_943;
    delay_wire_945 <= delay_wire_944;
    delay_wire_946 <= delay_wire_945;
    delay_wire_947 <= delay_wire_946;
    delay_wire_948 <= delay_wire_947;
    delay_wire_949 <= delay_wire_948;
    delay_wire_950 <= delay_wire_949;
    delay_wire_951 <= delay_wire_950;
    delay_wire_952 <= delay_wire_951;
    delay_wire_953 <= delay_wire_952;
    delay_wire_954 <= delay_wire_953;
    delay_wire_955 <= delay_wire_954;
    delay_wire_956 <= delay_wire_955;
    delay_wire_957 <= delay_wire_956;
    delay_wire_958 <= delay_wire_957;
    delay_wire_959 <= delay_wire_958;
    delay_wire_960 <= delay_wire_959;
    delay_wire_961 <= delay_wire_960;
    delay_wire_962 <= delay_wire_961;
    delay_wire_963 <= delay_wire_962;
    delay_wire_964 <= delay_wire_963;
    delay_wire_965 <= delay_wire_964;
    delay_wire_966 <= delay_wire_965;
    delay_wire_967 <= delay_wire_966;
    delay_wire_968 <= delay_wire_967;
    delay_wire_969 <= delay_wire_968;
    delay_wire_970 <= delay_wire_969;
    delay_wire_971 <= delay_wire_970;
    delay_wire_972 <= delay_wire_971;
    delay_wire_973 <= delay_wire_972;
    delay_wire_974 <= delay_wire_973;
    delay_wire_975 <= delay_wire_974;
    delay_wire_976 <= delay_wire_975;
    delay_wire_977 <= delay_wire_976;
    delay_wire_978 <= delay_wire_977;
    delay_wire_979 <= delay_wire_978;
    delay_wire_980 <= delay_wire_979;
    delay_wire_981 <= delay_wire_980;
    delay_wire_982 <= delay_wire_981;
    delay_wire_983 <= delay_wire_982;
    delay_wire_984 <= delay_wire_983;
    delay_wire_985 <= delay_wire_984;
    delay_wire_986 <= delay_wire_985;
    delay_wire_987 <= delay_wire_986;
    delay_wire_988 <= delay_wire_987;
    delay_wire_989 <= delay_wire_988;
    delay_wire_990 <= delay_wire_989;
    delay_wire_991 <= delay_wire_990;
    delay_wire_992 <= delay_wire_991;
    delay_wire_993 <= delay_wire_992;
    delay_wire_994 <= delay_wire_993;
    delay_wire_995 <= delay_wire_994;
    delay_wire_996 <= delay_wire_995;
    delay_wire_997 <= delay_wire_996;
    delay_wire_998 <= delay_wire_997;
    delay_wire_999 <= delay_wire_998;
    delay_wire_1000 <= delay_wire_999;
    delay_wire_1001 <= delay_wire_1000;
    delay_wire_1002 <= delay_wire_1001;
    delay_wire_1003 <= delay_wire_1002;
    delay_wire_1004 <= delay_wire_1003;
    delay_wire_1005 <= delay_wire_1004;
  end
  assign out = delay_wire_1005;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1006;
  logic [15:0] delay_wire_1007;
  logic [15:0] delay_wire_1008;
  always @(posedge clk) begin
    delay_wire_1006 <= in;
    delay_wire_1007 <= delay_wire_1006;
    delay_wire_1008 <= delay_wire_1007;
  end
  assign out = delay_wire_1008;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1009;
  logic [15:0] delay_wire_1010;
  logic [15:0] delay_wire_1011;
  logic [15:0] delay_wire_1012;
  logic [15:0] delay_wire_1013;
  logic [15:0] delay_wire_1014;
  logic [15:0] delay_wire_1015;
  logic [15:0] delay_wire_1016;
  logic [15:0] delay_wire_1017;
  logic [15:0] delay_wire_1018;
  logic [15:0] delay_wire_1019;
  logic [15:0] delay_wire_1020;
  logic [15:0] delay_wire_1021;
  logic [15:0] delay_wire_1022;
  logic [15:0] delay_wire_1023;
  logic [15:0] delay_wire_1024;
  logic [15:0] delay_wire_1025;
  logic [15:0] delay_wire_1026;
  logic [15:0] delay_wire_1027;
  logic [15:0] delay_wire_1028;
  logic [15:0] delay_wire_1029;
  logic [15:0] delay_wire_1030;
  logic [15:0] delay_wire_1031;
  logic [15:0] delay_wire_1032;
  logic [15:0] delay_wire_1033;
  logic [15:0] delay_wire_1034;
  logic [15:0] delay_wire_1035;
  logic [15:0] delay_wire_1036;
  logic [15:0] delay_wire_1037;
  logic [15:0] delay_wire_1038;
  logic [15:0] delay_wire_1039;
  logic [15:0] delay_wire_1040;
  logic [15:0] delay_wire_1041;
  logic [15:0] delay_wire_1042;
  logic [15:0] delay_wire_1043;
  logic [15:0] delay_wire_1044;
  logic [15:0] delay_wire_1045;
  logic [15:0] delay_wire_1046;
  logic [15:0] delay_wire_1047;
  logic [15:0] delay_wire_1048;
  logic [15:0] delay_wire_1049;
  logic [15:0] delay_wire_1050;
  logic [15:0] delay_wire_1051;
  logic [15:0] delay_wire_1052;
  logic [15:0] delay_wire_1053;
  logic [15:0] delay_wire_1054;
  logic [15:0] delay_wire_1055;
  logic [15:0] delay_wire_1056;
  logic [15:0] delay_wire_1057;
  logic [15:0] delay_wire_1058;
  logic [15:0] delay_wire_1059;
  logic [15:0] delay_wire_1060;
  logic [15:0] delay_wire_1061;
  logic [15:0] delay_wire_1062;
  logic [15:0] delay_wire_1063;
  logic [15:0] delay_wire_1064;
  logic [15:0] delay_wire_1065;
  logic [15:0] delay_wire_1066;
  logic [15:0] delay_wire_1067;
  logic [15:0] delay_wire_1068;
  logic [15:0] delay_wire_1069;
  logic [15:0] delay_wire_1070;
  logic [15:0] delay_wire_1071;
  logic [15:0] delay_wire_1072;
  logic [15:0] delay_wire_1073;
  logic [15:0] delay_wire_1074;
  logic [15:0] delay_wire_1075;
  logic [15:0] delay_wire_1076;
  logic [15:0] delay_wire_1077;
  logic [15:0] delay_wire_1078;
  logic [15:0] delay_wire_1079;
  logic [15:0] delay_wire_1080;
  logic [15:0] delay_wire_1081;
  logic [15:0] delay_wire_1082;
  logic [15:0] delay_wire_1083;
  logic [15:0] delay_wire_1084;
  logic [15:0] delay_wire_1085;
  logic [15:0] delay_wire_1086;
  logic [15:0] delay_wire_1087;
  logic [15:0] delay_wire_1088;
  logic [15:0] delay_wire_1089;
  logic [15:0] delay_wire_1090;
  logic [15:0] delay_wire_1091;
  logic [15:0] delay_wire_1092;
  logic [15:0] delay_wire_1093;
  logic [15:0] delay_wire_1094;
  logic [15:0] delay_wire_1095;
  logic [15:0] delay_wire_1096;
  logic [15:0] delay_wire_1097;
  logic [15:0] delay_wire_1098;
  logic [15:0] delay_wire_1099;
  logic [15:0] delay_wire_1100;
  logic [15:0] delay_wire_1101;
  logic [15:0] delay_wire_1102;
  logic [15:0] delay_wire_1103;
  logic [15:0] delay_wire_1104;
  logic [15:0] delay_wire_1105;
  logic [15:0] delay_wire_1106;
  logic [15:0] delay_wire_1107;
  logic [15:0] delay_wire_1108;
  logic [15:0] delay_wire_1109;
  logic [15:0] delay_wire_1110;
  logic [15:0] delay_wire_1111;
  logic [15:0] delay_wire_1112;
  logic [15:0] delay_wire_1113;
  logic [15:0] delay_wire_1114;
  logic [15:0] delay_wire_1115;
  logic [15:0] delay_wire_1116;
  logic [15:0] delay_wire_1117;
  logic [15:0] delay_wire_1118;
  logic [15:0] delay_wire_1119;
  logic [15:0] delay_wire_1120;
  logic [15:0] delay_wire_1121;
  logic [15:0] delay_wire_1122;
  logic [15:0] delay_wire_1123;
  logic [15:0] delay_wire_1124;
  logic [15:0] delay_wire_1125;
  logic [15:0] delay_wire_1126;
  logic [15:0] delay_wire_1127;
  logic [15:0] delay_wire_1128;
  logic [15:0] delay_wire_1129;
  logic [15:0] delay_wire_1130;
  logic [15:0] delay_wire_1131;
  logic [15:0] delay_wire_1132;
  logic [15:0] delay_wire_1133;
  logic [15:0] delay_wire_1134;
  logic [15:0] delay_wire_1135;
  logic [15:0] delay_wire_1136;
  logic [15:0] delay_wire_1137;
  logic [15:0] delay_wire_1138;
  logic [15:0] delay_wire_1139;
  logic [15:0] delay_wire_1140;
  logic [15:0] delay_wire_1141;
  logic [15:0] delay_wire_1142;
  logic [15:0] delay_wire_1143;
  always @(posedge clk) begin
    delay_wire_1009 <= in;
    delay_wire_1010 <= delay_wire_1009;
    delay_wire_1011 <= delay_wire_1010;
    delay_wire_1012 <= delay_wire_1011;
    delay_wire_1013 <= delay_wire_1012;
    delay_wire_1014 <= delay_wire_1013;
    delay_wire_1015 <= delay_wire_1014;
    delay_wire_1016 <= delay_wire_1015;
    delay_wire_1017 <= delay_wire_1016;
    delay_wire_1018 <= delay_wire_1017;
    delay_wire_1019 <= delay_wire_1018;
    delay_wire_1020 <= delay_wire_1019;
    delay_wire_1021 <= delay_wire_1020;
    delay_wire_1022 <= delay_wire_1021;
    delay_wire_1023 <= delay_wire_1022;
    delay_wire_1024 <= delay_wire_1023;
    delay_wire_1025 <= delay_wire_1024;
    delay_wire_1026 <= delay_wire_1025;
    delay_wire_1027 <= delay_wire_1026;
    delay_wire_1028 <= delay_wire_1027;
    delay_wire_1029 <= delay_wire_1028;
    delay_wire_1030 <= delay_wire_1029;
    delay_wire_1031 <= delay_wire_1030;
    delay_wire_1032 <= delay_wire_1031;
    delay_wire_1033 <= delay_wire_1032;
    delay_wire_1034 <= delay_wire_1033;
    delay_wire_1035 <= delay_wire_1034;
    delay_wire_1036 <= delay_wire_1035;
    delay_wire_1037 <= delay_wire_1036;
    delay_wire_1038 <= delay_wire_1037;
    delay_wire_1039 <= delay_wire_1038;
    delay_wire_1040 <= delay_wire_1039;
    delay_wire_1041 <= delay_wire_1040;
    delay_wire_1042 <= delay_wire_1041;
    delay_wire_1043 <= delay_wire_1042;
    delay_wire_1044 <= delay_wire_1043;
    delay_wire_1045 <= delay_wire_1044;
    delay_wire_1046 <= delay_wire_1045;
    delay_wire_1047 <= delay_wire_1046;
    delay_wire_1048 <= delay_wire_1047;
    delay_wire_1049 <= delay_wire_1048;
    delay_wire_1050 <= delay_wire_1049;
    delay_wire_1051 <= delay_wire_1050;
    delay_wire_1052 <= delay_wire_1051;
    delay_wire_1053 <= delay_wire_1052;
    delay_wire_1054 <= delay_wire_1053;
    delay_wire_1055 <= delay_wire_1054;
    delay_wire_1056 <= delay_wire_1055;
    delay_wire_1057 <= delay_wire_1056;
    delay_wire_1058 <= delay_wire_1057;
    delay_wire_1059 <= delay_wire_1058;
    delay_wire_1060 <= delay_wire_1059;
    delay_wire_1061 <= delay_wire_1060;
    delay_wire_1062 <= delay_wire_1061;
    delay_wire_1063 <= delay_wire_1062;
    delay_wire_1064 <= delay_wire_1063;
    delay_wire_1065 <= delay_wire_1064;
    delay_wire_1066 <= delay_wire_1065;
    delay_wire_1067 <= delay_wire_1066;
    delay_wire_1068 <= delay_wire_1067;
    delay_wire_1069 <= delay_wire_1068;
    delay_wire_1070 <= delay_wire_1069;
    delay_wire_1071 <= delay_wire_1070;
    delay_wire_1072 <= delay_wire_1071;
    delay_wire_1073 <= delay_wire_1072;
    delay_wire_1074 <= delay_wire_1073;
    delay_wire_1075 <= delay_wire_1074;
    delay_wire_1076 <= delay_wire_1075;
    delay_wire_1077 <= delay_wire_1076;
    delay_wire_1078 <= delay_wire_1077;
    delay_wire_1079 <= delay_wire_1078;
    delay_wire_1080 <= delay_wire_1079;
    delay_wire_1081 <= delay_wire_1080;
    delay_wire_1082 <= delay_wire_1081;
    delay_wire_1083 <= delay_wire_1082;
    delay_wire_1084 <= delay_wire_1083;
    delay_wire_1085 <= delay_wire_1084;
    delay_wire_1086 <= delay_wire_1085;
    delay_wire_1087 <= delay_wire_1086;
    delay_wire_1088 <= delay_wire_1087;
    delay_wire_1089 <= delay_wire_1088;
    delay_wire_1090 <= delay_wire_1089;
    delay_wire_1091 <= delay_wire_1090;
    delay_wire_1092 <= delay_wire_1091;
    delay_wire_1093 <= delay_wire_1092;
    delay_wire_1094 <= delay_wire_1093;
    delay_wire_1095 <= delay_wire_1094;
    delay_wire_1096 <= delay_wire_1095;
    delay_wire_1097 <= delay_wire_1096;
    delay_wire_1098 <= delay_wire_1097;
    delay_wire_1099 <= delay_wire_1098;
    delay_wire_1100 <= delay_wire_1099;
    delay_wire_1101 <= delay_wire_1100;
    delay_wire_1102 <= delay_wire_1101;
    delay_wire_1103 <= delay_wire_1102;
    delay_wire_1104 <= delay_wire_1103;
    delay_wire_1105 <= delay_wire_1104;
    delay_wire_1106 <= delay_wire_1105;
    delay_wire_1107 <= delay_wire_1106;
    delay_wire_1108 <= delay_wire_1107;
    delay_wire_1109 <= delay_wire_1108;
    delay_wire_1110 <= delay_wire_1109;
    delay_wire_1111 <= delay_wire_1110;
    delay_wire_1112 <= delay_wire_1111;
    delay_wire_1113 <= delay_wire_1112;
    delay_wire_1114 <= delay_wire_1113;
    delay_wire_1115 <= delay_wire_1114;
    delay_wire_1116 <= delay_wire_1115;
    delay_wire_1117 <= delay_wire_1116;
    delay_wire_1118 <= delay_wire_1117;
    delay_wire_1119 <= delay_wire_1118;
    delay_wire_1120 <= delay_wire_1119;
    delay_wire_1121 <= delay_wire_1120;
    delay_wire_1122 <= delay_wire_1121;
    delay_wire_1123 <= delay_wire_1122;
    delay_wire_1124 <= delay_wire_1123;
    delay_wire_1125 <= delay_wire_1124;
    delay_wire_1126 <= delay_wire_1125;
    delay_wire_1127 <= delay_wire_1126;
    delay_wire_1128 <= delay_wire_1127;
    delay_wire_1129 <= delay_wire_1128;
    delay_wire_1130 <= delay_wire_1129;
    delay_wire_1131 <= delay_wire_1130;
    delay_wire_1132 <= delay_wire_1131;
    delay_wire_1133 <= delay_wire_1132;
    delay_wire_1134 <= delay_wire_1133;
    delay_wire_1135 <= delay_wire_1134;
    delay_wire_1136 <= delay_wire_1135;
    delay_wire_1137 <= delay_wire_1136;
    delay_wire_1138 <= delay_wire_1137;
    delay_wire_1139 <= delay_wire_1138;
    delay_wire_1140 <= delay_wire_1139;
    delay_wire_1141 <= delay_wire_1140;
    delay_wire_1142 <= delay_wire_1141;
    delay_wire_1143 <= delay_wire_1142;
  end
  assign out = delay_wire_1143;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1144;
  logic [15:0] delay_wire_1145;
  logic [15:0] delay_wire_1146;
  logic [15:0] delay_wire_1147;
  logic [15:0] delay_wire_1148;
  logic [15:0] delay_wire_1149;
  logic [15:0] delay_wire_1150;
  logic [15:0] delay_wire_1151;
  logic [15:0] delay_wire_1152;
  logic [15:0] delay_wire_1153;
  logic [15:0] delay_wire_1154;
  logic [15:0] delay_wire_1155;
  logic [15:0] delay_wire_1156;
  logic [15:0] delay_wire_1157;
  logic [15:0] delay_wire_1158;
  logic [15:0] delay_wire_1159;
  logic [15:0] delay_wire_1160;
  logic [15:0] delay_wire_1161;
  logic [15:0] delay_wire_1162;
  logic [15:0] delay_wire_1163;
  logic [15:0] delay_wire_1164;
  logic [15:0] delay_wire_1165;
  logic [15:0] delay_wire_1166;
  logic [15:0] delay_wire_1167;
  logic [15:0] delay_wire_1168;
  logic [15:0] delay_wire_1169;
  logic [15:0] delay_wire_1170;
  logic [15:0] delay_wire_1171;
  logic [15:0] delay_wire_1172;
  logic [15:0] delay_wire_1173;
  logic [15:0] delay_wire_1174;
  logic [15:0] delay_wire_1175;
  logic [15:0] delay_wire_1176;
  logic [15:0] delay_wire_1177;
  logic [15:0] delay_wire_1178;
  logic [15:0] delay_wire_1179;
  logic [15:0] delay_wire_1180;
  logic [15:0] delay_wire_1181;
  logic [15:0] delay_wire_1182;
  logic [15:0] delay_wire_1183;
  logic [15:0] delay_wire_1184;
  logic [15:0] delay_wire_1185;
  logic [15:0] delay_wire_1186;
  logic [15:0] delay_wire_1187;
  logic [15:0] delay_wire_1188;
  logic [15:0] delay_wire_1189;
  logic [15:0] delay_wire_1190;
  logic [15:0] delay_wire_1191;
  logic [15:0] delay_wire_1192;
  logic [15:0] delay_wire_1193;
  logic [15:0] delay_wire_1194;
  logic [15:0] delay_wire_1195;
  logic [15:0] delay_wire_1196;
  logic [15:0] delay_wire_1197;
  logic [15:0] delay_wire_1198;
  logic [15:0] delay_wire_1199;
  logic [15:0] delay_wire_1200;
  logic [15:0] delay_wire_1201;
  logic [15:0] delay_wire_1202;
  logic [15:0] delay_wire_1203;
  logic [15:0] delay_wire_1204;
  logic [15:0] delay_wire_1205;
  logic [15:0] delay_wire_1206;
  logic [15:0] delay_wire_1207;
  logic [15:0] delay_wire_1208;
  logic [15:0] delay_wire_1209;
  logic [15:0] delay_wire_1210;
  logic [15:0] delay_wire_1211;
  logic [15:0] delay_wire_1212;
  logic [15:0] delay_wire_1213;
  logic [15:0] delay_wire_1214;
  logic [15:0] delay_wire_1215;
  logic [15:0] delay_wire_1216;
  logic [15:0] delay_wire_1217;
  logic [15:0] delay_wire_1218;
  logic [15:0] delay_wire_1219;
  logic [15:0] delay_wire_1220;
  logic [15:0] delay_wire_1221;
  logic [15:0] delay_wire_1222;
  logic [15:0] delay_wire_1223;
  logic [15:0] delay_wire_1224;
  logic [15:0] delay_wire_1225;
  logic [15:0] delay_wire_1226;
  logic [15:0] delay_wire_1227;
  logic [15:0] delay_wire_1228;
  logic [15:0] delay_wire_1229;
  logic [15:0] delay_wire_1230;
  logic [15:0] delay_wire_1231;
  logic [15:0] delay_wire_1232;
  logic [15:0] delay_wire_1233;
  logic [15:0] delay_wire_1234;
  logic [15:0] delay_wire_1235;
  logic [15:0] delay_wire_1236;
  logic [15:0] delay_wire_1237;
  logic [15:0] delay_wire_1238;
  logic [15:0] delay_wire_1239;
  logic [15:0] delay_wire_1240;
  logic [15:0] delay_wire_1241;
  logic [15:0] delay_wire_1242;
  logic [15:0] delay_wire_1243;
  logic [15:0] delay_wire_1244;
  logic [15:0] delay_wire_1245;
  logic [15:0] delay_wire_1246;
  logic [15:0] delay_wire_1247;
  logic [15:0] delay_wire_1248;
  logic [15:0] delay_wire_1249;
  logic [15:0] delay_wire_1250;
  logic [15:0] delay_wire_1251;
  logic [15:0] delay_wire_1252;
  logic [15:0] delay_wire_1253;
  logic [15:0] delay_wire_1254;
  logic [15:0] delay_wire_1255;
  logic [15:0] delay_wire_1256;
  logic [15:0] delay_wire_1257;
  logic [15:0] delay_wire_1258;
  logic [15:0] delay_wire_1259;
  logic [15:0] delay_wire_1260;
  logic [15:0] delay_wire_1261;
  logic [15:0] delay_wire_1262;
  logic [15:0] delay_wire_1263;
  logic [15:0] delay_wire_1264;
  logic [15:0] delay_wire_1265;
  logic [15:0] delay_wire_1266;
  logic [15:0] delay_wire_1267;
  logic [15:0] delay_wire_1268;
  logic [15:0] delay_wire_1269;
  logic [15:0] delay_wire_1270;
  logic [15:0] delay_wire_1271;
  logic [15:0] delay_wire_1272;
  logic [15:0] delay_wire_1273;
  logic [15:0] delay_wire_1274;
  logic [15:0] delay_wire_1275;
  logic [15:0] delay_wire_1276;
  logic [15:0] delay_wire_1277;
  always @(posedge clk) begin
    delay_wire_1144 <= in;
    delay_wire_1145 <= delay_wire_1144;
    delay_wire_1146 <= delay_wire_1145;
    delay_wire_1147 <= delay_wire_1146;
    delay_wire_1148 <= delay_wire_1147;
    delay_wire_1149 <= delay_wire_1148;
    delay_wire_1150 <= delay_wire_1149;
    delay_wire_1151 <= delay_wire_1150;
    delay_wire_1152 <= delay_wire_1151;
    delay_wire_1153 <= delay_wire_1152;
    delay_wire_1154 <= delay_wire_1153;
    delay_wire_1155 <= delay_wire_1154;
    delay_wire_1156 <= delay_wire_1155;
    delay_wire_1157 <= delay_wire_1156;
    delay_wire_1158 <= delay_wire_1157;
    delay_wire_1159 <= delay_wire_1158;
    delay_wire_1160 <= delay_wire_1159;
    delay_wire_1161 <= delay_wire_1160;
    delay_wire_1162 <= delay_wire_1161;
    delay_wire_1163 <= delay_wire_1162;
    delay_wire_1164 <= delay_wire_1163;
    delay_wire_1165 <= delay_wire_1164;
    delay_wire_1166 <= delay_wire_1165;
    delay_wire_1167 <= delay_wire_1166;
    delay_wire_1168 <= delay_wire_1167;
    delay_wire_1169 <= delay_wire_1168;
    delay_wire_1170 <= delay_wire_1169;
    delay_wire_1171 <= delay_wire_1170;
    delay_wire_1172 <= delay_wire_1171;
    delay_wire_1173 <= delay_wire_1172;
    delay_wire_1174 <= delay_wire_1173;
    delay_wire_1175 <= delay_wire_1174;
    delay_wire_1176 <= delay_wire_1175;
    delay_wire_1177 <= delay_wire_1176;
    delay_wire_1178 <= delay_wire_1177;
    delay_wire_1179 <= delay_wire_1178;
    delay_wire_1180 <= delay_wire_1179;
    delay_wire_1181 <= delay_wire_1180;
    delay_wire_1182 <= delay_wire_1181;
    delay_wire_1183 <= delay_wire_1182;
    delay_wire_1184 <= delay_wire_1183;
    delay_wire_1185 <= delay_wire_1184;
    delay_wire_1186 <= delay_wire_1185;
    delay_wire_1187 <= delay_wire_1186;
    delay_wire_1188 <= delay_wire_1187;
    delay_wire_1189 <= delay_wire_1188;
    delay_wire_1190 <= delay_wire_1189;
    delay_wire_1191 <= delay_wire_1190;
    delay_wire_1192 <= delay_wire_1191;
    delay_wire_1193 <= delay_wire_1192;
    delay_wire_1194 <= delay_wire_1193;
    delay_wire_1195 <= delay_wire_1194;
    delay_wire_1196 <= delay_wire_1195;
    delay_wire_1197 <= delay_wire_1196;
    delay_wire_1198 <= delay_wire_1197;
    delay_wire_1199 <= delay_wire_1198;
    delay_wire_1200 <= delay_wire_1199;
    delay_wire_1201 <= delay_wire_1200;
    delay_wire_1202 <= delay_wire_1201;
    delay_wire_1203 <= delay_wire_1202;
    delay_wire_1204 <= delay_wire_1203;
    delay_wire_1205 <= delay_wire_1204;
    delay_wire_1206 <= delay_wire_1205;
    delay_wire_1207 <= delay_wire_1206;
    delay_wire_1208 <= delay_wire_1207;
    delay_wire_1209 <= delay_wire_1208;
    delay_wire_1210 <= delay_wire_1209;
    delay_wire_1211 <= delay_wire_1210;
    delay_wire_1212 <= delay_wire_1211;
    delay_wire_1213 <= delay_wire_1212;
    delay_wire_1214 <= delay_wire_1213;
    delay_wire_1215 <= delay_wire_1214;
    delay_wire_1216 <= delay_wire_1215;
    delay_wire_1217 <= delay_wire_1216;
    delay_wire_1218 <= delay_wire_1217;
    delay_wire_1219 <= delay_wire_1218;
    delay_wire_1220 <= delay_wire_1219;
    delay_wire_1221 <= delay_wire_1220;
    delay_wire_1222 <= delay_wire_1221;
    delay_wire_1223 <= delay_wire_1222;
    delay_wire_1224 <= delay_wire_1223;
    delay_wire_1225 <= delay_wire_1224;
    delay_wire_1226 <= delay_wire_1225;
    delay_wire_1227 <= delay_wire_1226;
    delay_wire_1228 <= delay_wire_1227;
    delay_wire_1229 <= delay_wire_1228;
    delay_wire_1230 <= delay_wire_1229;
    delay_wire_1231 <= delay_wire_1230;
    delay_wire_1232 <= delay_wire_1231;
    delay_wire_1233 <= delay_wire_1232;
    delay_wire_1234 <= delay_wire_1233;
    delay_wire_1235 <= delay_wire_1234;
    delay_wire_1236 <= delay_wire_1235;
    delay_wire_1237 <= delay_wire_1236;
    delay_wire_1238 <= delay_wire_1237;
    delay_wire_1239 <= delay_wire_1238;
    delay_wire_1240 <= delay_wire_1239;
    delay_wire_1241 <= delay_wire_1240;
    delay_wire_1242 <= delay_wire_1241;
    delay_wire_1243 <= delay_wire_1242;
    delay_wire_1244 <= delay_wire_1243;
    delay_wire_1245 <= delay_wire_1244;
    delay_wire_1246 <= delay_wire_1245;
    delay_wire_1247 <= delay_wire_1246;
    delay_wire_1248 <= delay_wire_1247;
    delay_wire_1249 <= delay_wire_1248;
    delay_wire_1250 <= delay_wire_1249;
    delay_wire_1251 <= delay_wire_1250;
    delay_wire_1252 <= delay_wire_1251;
    delay_wire_1253 <= delay_wire_1252;
    delay_wire_1254 <= delay_wire_1253;
    delay_wire_1255 <= delay_wire_1254;
    delay_wire_1256 <= delay_wire_1255;
    delay_wire_1257 <= delay_wire_1256;
    delay_wire_1258 <= delay_wire_1257;
    delay_wire_1259 <= delay_wire_1258;
    delay_wire_1260 <= delay_wire_1259;
    delay_wire_1261 <= delay_wire_1260;
    delay_wire_1262 <= delay_wire_1261;
    delay_wire_1263 <= delay_wire_1262;
    delay_wire_1264 <= delay_wire_1263;
    delay_wire_1265 <= delay_wire_1264;
    delay_wire_1266 <= delay_wire_1265;
    delay_wire_1267 <= delay_wire_1266;
    delay_wire_1268 <= delay_wire_1267;
    delay_wire_1269 <= delay_wire_1268;
    delay_wire_1270 <= delay_wire_1269;
    delay_wire_1271 <= delay_wire_1270;
    delay_wire_1272 <= delay_wire_1271;
    delay_wire_1273 <= delay_wire_1272;
    delay_wire_1274 <= delay_wire_1273;
    delay_wire_1275 <= delay_wire_1274;
    delay_wire_1276 <= delay_wire_1275;
    delay_wire_1277 <= delay_wire_1276;
  end
  assign out = delay_wire_1277;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1278;
  logic [15:0] delay_wire_1279;
  logic [15:0] delay_wire_1280;
  logic [15:0] delay_wire_1281;
  logic [15:0] delay_wire_1282;
  logic [15:0] delay_wire_1283;
  logic [15:0] delay_wire_1284;
  logic [15:0] delay_wire_1285;
  logic [15:0] delay_wire_1286;
  logic [15:0] delay_wire_1287;
  logic [15:0] delay_wire_1288;
  logic [15:0] delay_wire_1289;
  logic [15:0] delay_wire_1290;
  logic [15:0] delay_wire_1291;
  logic [15:0] delay_wire_1292;
  logic [15:0] delay_wire_1293;
  logic [15:0] delay_wire_1294;
  logic [15:0] delay_wire_1295;
  logic [15:0] delay_wire_1296;
  logic [15:0] delay_wire_1297;
  logic [15:0] delay_wire_1298;
  logic [15:0] delay_wire_1299;
  logic [15:0] delay_wire_1300;
  logic [15:0] delay_wire_1301;
  logic [15:0] delay_wire_1302;
  logic [15:0] delay_wire_1303;
  logic [15:0] delay_wire_1304;
  logic [15:0] delay_wire_1305;
  logic [15:0] delay_wire_1306;
  logic [15:0] delay_wire_1307;
  logic [15:0] delay_wire_1308;
  logic [15:0] delay_wire_1309;
  logic [15:0] delay_wire_1310;
  logic [15:0] delay_wire_1311;
  logic [15:0] delay_wire_1312;
  logic [15:0] delay_wire_1313;
  logic [15:0] delay_wire_1314;
  logic [15:0] delay_wire_1315;
  logic [15:0] delay_wire_1316;
  logic [15:0] delay_wire_1317;
  logic [15:0] delay_wire_1318;
  logic [15:0] delay_wire_1319;
  logic [15:0] delay_wire_1320;
  logic [15:0] delay_wire_1321;
  logic [15:0] delay_wire_1322;
  logic [15:0] delay_wire_1323;
  logic [15:0] delay_wire_1324;
  logic [15:0] delay_wire_1325;
  logic [15:0] delay_wire_1326;
  logic [15:0] delay_wire_1327;
  logic [15:0] delay_wire_1328;
  logic [15:0] delay_wire_1329;
  logic [15:0] delay_wire_1330;
  logic [15:0] delay_wire_1331;
  logic [15:0] delay_wire_1332;
  logic [15:0] delay_wire_1333;
  logic [15:0] delay_wire_1334;
  logic [15:0] delay_wire_1335;
  logic [15:0] delay_wire_1336;
  logic [15:0] delay_wire_1337;
  logic [15:0] delay_wire_1338;
  logic [15:0] delay_wire_1339;
  logic [15:0] delay_wire_1340;
  logic [15:0] delay_wire_1341;
  logic [15:0] delay_wire_1342;
  logic [15:0] delay_wire_1343;
  logic [15:0] delay_wire_1344;
  logic [15:0] delay_wire_1345;
  logic [15:0] delay_wire_1346;
  logic [15:0] delay_wire_1347;
  logic [15:0] delay_wire_1348;
  logic [15:0] delay_wire_1349;
  logic [15:0] delay_wire_1350;
  logic [15:0] delay_wire_1351;
  logic [15:0] delay_wire_1352;
  logic [15:0] delay_wire_1353;
  logic [15:0] delay_wire_1354;
  logic [15:0] delay_wire_1355;
  logic [15:0] delay_wire_1356;
  logic [15:0] delay_wire_1357;
  logic [15:0] delay_wire_1358;
  logic [15:0] delay_wire_1359;
  logic [15:0] delay_wire_1360;
  logic [15:0] delay_wire_1361;
  logic [15:0] delay_wire_1362;
  logic [15:0] delay_wire_1363;
  logic [15:0] delay_wire_1364;
  logic [15:0] delay_wire_1365;
  logic [15:0] delay_wire_1366;
  logic [15:0] delay_wire_1367;
  logic [15:0] delay_wire_1368;
  logic [15:0] delay_wire_1369;
  logic [15:0] delay_wire_1370;
  logic [15:0] delay_wire_1371;
  logic [15:0] delay_wire_1372;
  logic [15:0] delay_wire_1373;
  logic [15:0] delay_wire_1374;
  logic [15:0] delay_wire_1375;
  logic [15:0] delay_wire_1376;
  logic [15:0] delay_wire_1377;
  logic [15:0] delay_wire_1378;
  logic [15:0] delay_wire_1379;
  logic [15:0] delay_wire_1380;
  logic [15:0] delay_wire_1381;
  logic [15:0] delay_wire_1382;
  logic [15:0] delay_wire_1383;
  logic [15:0] delay_wire_1384;
  logic [15:0] delay_wire_1385;
  logic [15:0] delay_wire_1386;
  logic [15:0] delay_wire_1387;
  logic [15:0] delay_wire_1388;
  logic [15:0] delay_wire_1389;
  logic [15:0] delay_wire_1390;
  logic [15:0] delay_wire_1391;
  logic [15:0] delay_wire_1392;
  logic [15:0] delay_wire_1393;
  logic [15:0] delay_wire_1394;
  logic [15:0] delay_wire_1395;
  logic [15:0] delay_wire_1396;
  logic [15:0] delay_wire_1397;
  logic [15:0] delay_wire_1398;
  logic [15:0] delay_wire_1399;
  logic [15:0] delay_wire_1400;
  logic [15:0] delay_wire_1401;
  logic [15:0] delay_wire_1402;
  logic [15:0] delay_wire_1403;
  logic [15:0] delay_wire_1404;
  logic [15:0] delay_wire_1405;
  logic [15:0] delay_wire_1406;
  logic [15:0] delay_wire_1407;
  logic [15:0] delay_wire_1408;
  logic [15:0] delay_wire_1409;
  logic [15:0] delay_wire_1410;
  always @(posedge clk) begin
    delay_wire_1278 <= in;
    delay_wire_1279 <= delay_wire_1278;
    delay_wire_1280 <= delay_wire_1279;
    delay_wire_1281 <= delay_wire_1280;
    delay_wire_1282 <= delay_wire_1281;
    delay_wire_1283 <= delay_wire_1282;
    delay_wire_1284 <= delay_wire_1283;
    delay_wire_1285 <= delay_wire_1284;
    delay_wire_1286 <= delay_wire_1285;
    delay_wire_1287 <= delay_wire_1286;
    delay_wire_1288 <= delay_wire_1287;
    delay_wire_1289 <= delay_wire_1288;
    delay_wire_1290 <= delay_wire_1289;
    delay_wire_1291 <= delay_wire_1290;
    delay_wire_1292 <= delay_wire_1291;
    delay_wire_1293 <= delay_wire_1292;
    delay_wire_1294 <= delay_wire_1293;
    delay_wire_1295 <= delay_wire_1294;
    delay_wire_1296 <= delay_wire_1295;
    delay_wire_1297 <= delay_wire_1296;
    delay_wire_1298 <= delay_wire_1297;
    delay_wire_1299 <= delay_wire_1298;
    delay_wire_1300 <= delay_wire_1299;
    delay_wire_1301 <= delay_wire_1300;
    delay_wire_1302 <= delay_wire_1301;
    delay_wire_1303 <= delay_wire_1302;
    delay_wire_1304 <= delay_wire_1303;
    delay_wire_1305 <= delay_wire_1304;
    delay_wire_1306 <= delay_wire_1305;
    delay_wire_1307 <= delay_wire_1306;
    delay_wire_1308 <= delay_wire_1307;
    delay_wire_1309 <= delay_wire_1308;
    delay_wire_1310 <= delay_wire_1309;
    delay_wire_1311 <= delay_wire_1310;
    delay_wire_1312 <= delay_wire_1311;
    delay_wire_1313 <= delay_wire_1312;
    delay_wire_1314 <= delay_wire_1313;
    delay_wire_1315 <= delay_wire_1314;
    delay_wire_1316 <= delay_wire_1315;
    delay_wire_1317 <= delay_wire_1316;
    delay_wire_1318 <= delay_wire_1317;
    delay_wire_1319 <= delay_wire_1318;
    delay_wire_1320 <= delay_wire_1319;
    delay_wire_1321 <= delay_wire_1320;
    delay_wire_1322 <= delay_wire_1321;
    delay_wire_1323 <= delay_wire_1322;
    delay_wire_1324 <= delay_wire_1323;
    delay_wire_1325 <= delay_wire_1324;
    delay_wire_1326 <= delay_wire_1325;
    delay_wire_1327 <= delay_wire_1326;
    delay_wire_1328 <= delay_wire_1327;
    delay_wire_1329 <= delay_wire_1328;
    delay_wire_1330 <= delay_wire_1329;
    delay_wire_1331 <= delay_wire_1330;
    delay_wire_1332 <= delay_wire_1331;
    delay_wire_1333 <= delay_wire_1332;
    delay_wire_1334 <= delay_wire_1333;
    delay_wire_1335 <= delay_wire_1334;
    delay_wire_1336 <= delay_wire_1335;
    delay_wire_1337 <= delay_wire_1336;
    delay_wire_1338 <= delay_wire_1337;
    delay_wire_1339 <= delay_wire_1338;
    delay_wire_1340 <= delay_wire_1339;
    delay_wire_1341 <= delay_wire_1340;
    delay_wire_1342 <= delay_wire_1341;
    delay_wire_1343 <= delay_wire_1342;
    delay_wire_1344 <= delay_wire_1343;
    delay_wire_1345 <= delay_wire_1344;
    delay_wire_1346 <= delay_wire_1345;
    delay_wire_1347 <= delay_wire_1346;
    delay_wire_1348 <= delay_wire_1347;
    delay_wire_1349 <= delay_wire_1348;
    delay_wire_1350 <= delay_wire_1349;
    delay_wire_1351 <= delay_wire_1350;
    delay_wire_1352 <= delay_wire_1351;
    delay_wire_1353 <= delay_wire_1352;
    delay_wire_1354 <= delay_wire_1353;
    delay_wire_1355 <= delay_wire_1354;
    delay_wire_1356 <= delay_wire_1355;
    delay_wire_1357 <= delay_wire_1356;
    delay_wire_1358 <= delay_wire_1357;
    delay_wire_1359 <= delay_wire_1358;
    delay_wire_1360 <= delay_wire_1359;
    delay_wire_1361 <= delay_wire_1360;
    delay_wire_1362 <= delay_wire_1361;
    delay_wire_1363 <= delay_wire_1362;
    delay_wire_1364 <= delay_wire_1363;
    delay_wire_1365 <= delay_wire_1364;
    delay_wire_1366 <= delay_wire_1365;
    delay_wire_1367 <= delay_wire_1366;
    delay_wire_1368 <= delay_wire_1367;
    delay_wire_1369 <= delay_wire_1368;
    delay_wire_1370 <= delay_wire_1369;
    delay_wire_1371 <= delay_wire_1370;
    delay_wire_1372 <= delay_wire_1371;
    delay_wire_1373 <= delay_wire_1372;
    delay_wire_1374 <= delay_wire_1373;
    delay_wire_1375 <= delay_wire_1374;
    delay_wire_1376 <= delay_wire_1375;
    delay_wire_1377 <= delay_wire_1376;
    delay_wire_1378 <= delay_wire_1377;
    delay_wire_1379 <= delay_wire_1378;
    delay_wire_1380 <= delay_wire_1379;
    delay_wire_1381 <= delay_wire_1380;
    delay_wire_1382 <= delay_wire_1381;
    delay_wire_1383 <= delay_wire_1382;
    delay_wire_1384 <= delay_wire_1383;
    delay_wire_1385 <= delay_wire_1384;
    delay_wire_1386 <= delay_wire_1385;
    delay_wire_1387 <= delay_wire_1386;
    delay_wire_1388 <= delay_wire_1387;
    delay_wire_1389 <= delay_wire_1388;
    delay_wire_1390 <= delay_wire_1389;
    delay_wire_1391 <= delay_wire_1390;
    delay_wire_1392 <= delay_wire_1391;
    delay_wire_1393 <= delay_wire_1392;
    delay_wire_1394 <= delay_wire_1393;
    delay_wire_1395 <= delay_wire_1394;
    delay_wire_1396 <= delay_wire_1395;
    delay_wire_1397 <= delay_wire_1396;
    delay_wire_1398 <= delay_wire_1397;
    delay_wire_1399 <= delay_wire_1398;
    delay_wire_1400 <= delay_wire_1399;
    delay_wire_1401 <= delay_wire_1400;
    delay_wire_1402 <= delay_wire_1401;
    delay_wire_1403 <= delay_wire_1402;
    delay_wire_1404 <= delay_wire_1403;
    delay_wire_1405 <= delay_wire_1404;
    delay_wire_1406 <= delay_wire_1405;
    delay_wire_1407 <= delay_wire_1406;
    delay_wire_1408 <= delay_wire_1407;
    delay_wire_1409 <= delay_wire_1408;
    delay_wire_1410 <= delay_wire_1409;
  end
  assign out = delay_wire_1410;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1411;
  logic [15:0] delay_wire_1412;
  logic [15:0] delay_wire_1413;
  logic [15:0] delay_wire_1414;
  logic [15:0] delay_wire_1415;
  logic [15:0] delay_wire_1416;
  logic [15:0] delay_wire_1417;
  always @(posedge clk) begin
    delay_wire_1411 <= in;
    delay_wire_1412 <= delay_wire_1411;
    delay_wire_1413 <= delay_wire_1412;
    delay_wire_1414 <= delay_wire_1413;
    delay_wire_1415 <= delay_wire_1414;
    delay_wire_1416 <= delay_wire_1415;
    delay_wire_1417 <= delay_wire_1416;
  end
  assign out = delay_wire_1417;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1418;
  logic [15:0] delay_wire_1419;
  logic [15:0] delay_wire_1420;
  logic [15:0] delay_wire_1421;
  logic [15:0] delay_wire_1422;
  always @(posedge clk) begin
    delay_wire_1418 <= in;
    delay_wire_1419 <= delay_wire_1418;
    delay_wire_1420 <= delay_wire_1419;
    delay_wire_1421 <= delay_wire_1420;
    delay_wire_1422 <= delay_wire_1421;
  end
  assign out = delay_wire_1422;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1423;
  logic [15:0] delay_wire_1424;
  logic [15:0] delay_wire_1425;
  logic [15:0] delay_wire_1426;
  logic [15:0] delay_wire_1427;
  logic [15:0] delay_wire_1428;
  always @(posedge clk) begin
    delay_wire_1423 <= in;
    delay_wire_1424 <= delay_wire_1423;
    delay_wire_1425 <= delay_wire_1424;
    delay_wire_1426 <= delay_wire_1425;
    delay_wire_1427 <= delay_wire_1426;
    delay_wire_1428 <= delay_wire_1427;
  end
  assign out = delay_wire_1428;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1429;
  logic [15:0] delay_wire_1430;
  logic [15:0] delay_wire_1431;
  logic [15:0] delay_wire_1432;
  always @(posedge clk) begin
    delay_wire_1429 <= in;
    delay_wire_1430 <= delay_wire_1429;
    delay_wire_1431 <= delay_wire_1430;
    delay_wire_1432 <= delay_wire_1431;
  end
  assign out = delay_wire_1432;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1433;
  logic [15:0] delay_wire_1434;
  logic [15:0] delay_wire_1435;
  logic [15:0] delay_wire_1436;
  always @(posedge clk) begin
    delay_wire_1433 <= in;
    delay_wire_1434 <= delay_wire_1433;
    delay_wire_1435 <= delay_wire_1434;
    delay_wire_1436 <= delay_wire_1435;
  end
  assign out = delay_wire_1436;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1437;
  logic [15:0] delay_wire_1438;
  logic [15:0] delay_wire_1439;
  logic [15:0] delay_wire_1440;
  always @(posedge clk) begin
    delay_wire_1437 <= in;
    delay_wire_1438 <= delay_wire_1437;
    delay_wire_1439 <= delay_wire_1438;
    delay_wire_1440 <= delay_wire_1439;
  end
  assign out = delay_wire_1440;
endmodule

module padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_to_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] delay_wire_1441;
  logic [15:0] delay_wire_1442;
  logic [15:0] delay_wire_1443;
  logic [15:0] delay_wire_1444;
  always @(posedge clk) begin
    delay_wire_1441 <= in;
    delay_wire_1442 <= delay_wire_1441;
    delay_wire_1443 <= delay_wire_1442;
    delay_wire_1444 <= delay_wire_1443;
  end
  assign out = delay_wire_1444;
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

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_x_stencil_read[0]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_x_stencil_read[1]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_x_stencil_read[2]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_x_stencil_read[3]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_x_stencil_read[4]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_x_stencil_read[5]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_y_stencil_read[1]));

    padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_to_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_sr padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_padded16_global_wrapper_stencil_write[0]), .out(op_hcompute_grad_y_stencil_read[5]));


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
  // # of banks: 1
  logic [15:0] bank_0 [4096];
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
  assign addr0 = (((((-3 + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - -3)>>0)*1+((((-3 + 1*op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - -3)>>0)*64);
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
  end
  always @(posedge clk) begin
    if (op_hcompute_padded16_global_wrapper_stencil_write_wen_fsm_out) begin
      case( padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_bank_selector.out)
        0:bank_0[addr0] <= op_hcompute_padded16_global_wrapper_stencil_write[0];
      endcase
    end
  end
  always @(*) begin
  end

endmodule

