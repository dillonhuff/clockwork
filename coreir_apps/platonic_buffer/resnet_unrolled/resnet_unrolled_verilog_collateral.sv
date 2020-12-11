
module conv_stencil_embarassing_bank_selector(input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0]);
  assign out = 0+bank_index_0*1;

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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1011 + 3192conv_s1_r_y + 1064conv_s1_r_x + 38conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==1010) begin
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
        if(counter[1] == 3191) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[1] <= op_hcompute_conv_stencil_3_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1063) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[2] <= op_hcompute_conv_stencil_3_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 37) begin
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1011 + 3192conv_s1_r_y + 1064conv_s1_r_x + 38conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==1010) begin
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
        if(counter[1] == 3191) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[1] <= op_hcompute_conv_stencil_4_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1063) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[2] <= op_hcompute_conv_stencil_4_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 37) begin
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1011 + 3192conv_s1_r_y + 1064conv_s1_r_x + 38conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==1010) begin
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
        if(counter[1] == 3191) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[1] <= op_hcompute_conv_stencil_5_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1063) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[2] <= op_hcompute_conv_stencil_5_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 37) begin
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3192conv_s1_r_y + 1064conv_s1_r_x + 38conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==1001) begin
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
        if(counter[1] == 3191) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1063) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 37) begin
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3192conv_s1_r_y + 1064conv_s1_r_x + 38conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==1001) begin
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
        if(counter[1] == 3191) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1063) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 37) begin
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3192conv_s1_r_y + 1064conv_s1_r_x + 38conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==1001) begin
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
        if(counter[1] == 3191) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1063) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 37) begin
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
// { op_hcompute_hw_output_stencil_1[root, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1] -> [(16017 + 29hw_output_s0_y_yi_1 + hw_output_s0_x_xi_1)] }
module conv_stencil_op_hcompute_hw_output_stencil_1_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_output_stencil_1_read_ctrl_vars[2:0], output op_hcompute_hw_output_stencil_1_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_output_stencil_1_read_ren =(on && on2 && op_hcompute_hw_output_stencil_1_read_ctrl_vars[0]==0 && op_hcompute_hw_output_stencil_1_read_ctrl_vars[1]<=27 && op_hcompute_hw_output_stencil_1_read_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_output_stencil_1_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_output_stencil_1_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_output_stencil_1_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==16016) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_output_stencil_1_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_output_stencil_1_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_output_stencil_1_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 28) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_output_stencil_1_read_ctrl_vars[2]<= 0;
          op_hcompute_hw_output_stencil_1_read_ctrl_vars[1] <= op_hcompute_hw_output_stencil_1_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_output_stencil_1_read_ctrl_vars[2] <= op_hcompute_hw_output_stencil_1_read_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_output_stencil_2[root, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2] -> [(16017 + 29hw_output_s0_y_yi_2 + hw_output_s0_x_xi_2)] }
module conv_stencil_op_hcompute_hw_output_stencil_2_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_output_stencil_2_read_ctrl_vars[2:0], output op_hcompute_hw_output_stencil_2_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_output_stencil_2_read_ren =(on && on2 && op_hcompute_hw_output_stencil_2_read_ctrl_vars[0]==0 && op_hcompute_hw_output_stencil_2_read_ctrl_vars[1]<=27 && op_hcompute_hw_output_stencil_2_read_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_output_stencil_2_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_output_stencil_2_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_output_stencil_2_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==16016) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_output_stencil_2_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_output_stencil_2_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_output_stencil_2_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 28) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_output_stencil_2_read_ctrl_vars[2]<= 0;
          op_hcompute_hw_output_stencil_2_read_ctrl_vars[1] <= op_hcompute_hw_output_stencil_2_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_output_stencil_2_read_ctrl_vars[2] <= op_hcompute_hw_output_stencil_2_read_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_output_stencil[root, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(16017 + 29hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module conv_stencil_op_hcompute_hw_output_stencil_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars[2:0], output op_hcompute_hw_output_stencil_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_output_stencil_read_ren =(on && on2 && op_hcompute_hw_output_stencil_read_ctrl_vars[0]==0 && op_hcompute_hw_output_stencil_read_ctrl_vars[1]<=27 && op_hcompute_hw_output_stencil_read_ctrl_vars[2]<=27);
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
      if(counter[0] ==16016) begin
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
        if(counter[1] == 28) begin
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
	input op_hcompute_hw_output_stencil_1_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_1_read [0:0] ,
	input op_hcompute_hw_output_stencil_2_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_2_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_2_read [0:0] ,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0] ,
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
  logic [15:0]op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_conv_stencil_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_write_fsm conv_stencil_op_hcompute_conv_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_write_ctrl_vars( op_hcompute_conv_stencil_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_write_wen(op_hcompute_conv_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_4_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_4_write_fsm conv_stencil_op_hcompute_conv_stencil_4_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_4_write_ctrl_vars( op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_4_write_wen(op_hcompute_conv_stencil_4_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_5_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_5_write_fsm conv_stencil_op_hcompute_conv_stencil_5_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_5_write_ctrl_vars( op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_5_write_wen(op_hcompute_conv_stencil_5_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_3_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_3_read_fsm conv_stencil_op_hcompute_conv_stencil_3_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_3_read_ctrl_vars( op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_3_read_ren(op_hcompute_conv_stencil_3_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_4_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_4_read_fsm conv_stencil_op_hcompute_conv_stencil_4_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_4_read_ctrl_vars( op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_4_read_ren(op_hcompute_conv_stencil_4_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_5_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_5_read_fsm conv_stencil_op_hcompute_conv_stencil_5_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_5_read_ctrl_vars( op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_5_read_ren(op_hcompute_conv_stencil_5_read_ren_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_1_read_ren_fsm_out;
  conv_stencil_op_hcompute_hw_output_stencil_1_read_fsm conv_stencil_op_hcompute_hw_output_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_1_read_ctrl_vars( op_hcompute_hw_output_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_1_read_ren(op_hcompute_hw_output_stencil_1_read_ren_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_2_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_2_read_ren_fsm_out;
  conv_stencil_op_hcompute_hw_output_stencil_2_read_fsm conv_stencil_op_hcompute_hw_output_stencil_2_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_2_read_ctrl_vars( op_hcompute_hw_output_stencil_2_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_2_read_ren(op_hcompute_hw_output_stencil_2_read_ren_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_read_ren_fsm_out;
  conv_stencil_op_hcompute_hw_output_stencil_read_fsm conv_stencil_op_hcompute_hw_output_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_read_ctrl_vars( op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_read_ren(op_hcompute_hw_output_stencil_read_ren_fsm_out));
  // # of banks: 3
  logic [15:0]  bank_0 [784];
  logic [15:0]  bank_1 [784];
  logic [15:0]  bank_2 [784];
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_47_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_47_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_47_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_47_1 = (((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_47_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_47_2 = (((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_47_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_47_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_47_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_47_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_46_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_46_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_46_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_46_1 = (((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_46_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_46_2 = (((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_46_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_46_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_46_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_46_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_36_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_36_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_36_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_36_1 = (((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_36_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_36_2 = (((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_36_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_36_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_36_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_36_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_48_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_48_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_48_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_48_1 = (((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_48_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_48_2 = (((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_48_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_48_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_48_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_48_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_26_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_26_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_26_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_26_1 = (((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_26_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_26_2 = (((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_26_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_26_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_26_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_26_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_16_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_16_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_16_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_16_1 = (((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_16_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_16_2 = (((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_16_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_16_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_16_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_16_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_37_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_37_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_37_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_37_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_37_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_37_2 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_37_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_37_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_37_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_37_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_27_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_27_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_27_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_27_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_27_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_27_2 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_27_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_27_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_27_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_27_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_17_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_17_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_17_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_17_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_17_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_17_2 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_17_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_17_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_17_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_17_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3_1 = (((1*op_hcompute_hw_output_stencil_1_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3_2 = (((1*op_hcompute_hw_output_stencil_1_read_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_1_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_1_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_1_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_1_1 = (((1*op_hcompute_hw_output_stencil_2_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_1_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_1_2 = (((1*op_hcompute_hw_output_stencil_2_read_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_1_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_1_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_1_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_1_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_1 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_2 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_7;
  always @(posedge clk) begin
    delay_wire_7 <= addr0;
  end
  logic [15:0] delay_wire_8;
  always @(posedge clk) begin
    delay_wire_8 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_47_bank_selector.out;
  end
  logic [15:0] delay_wire_9;
  always @(posedge clk) begin
    delay_wire_9 <= op_hcompute_conv_stencil_1_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_10;
  always @(posedge clk) begin
    delay_wire_10 <= op_hcompute_conv_stencil_1_write[0];
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_11;
  always @(posedge clk) begin
    delay_wire_11 <= addr1;
  end
  logic [15:0] delay_wire_12;
  always @(posedge clk) begin
    delay_wire_12 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_46_bank_selector.out;
  end
  logic [15:0] delay_wire_13;
  always @(posedge clk) begin
    delay_wire_13 <= op_hcompute_conv_stencil_2_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_14;
  always @(posedge clk) begin
    delay_wire_14 <= op_hcompute_conv_stencil_2_write[0];
  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_15;
  always @(posedge clk) begin
    delay_wire_15 <= addr2;
  end
  logic [15:0] delay_wire_16;
  always @(posedge clk) begin
    delay_wire_16 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_36_bank_selector.out;
  end
  logic [15:0] delay_wire_17;
  always @(posedge clk) begin
    delay_wire_17 <= op_hcompute_conv_stencil_3_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_18;
  always @(posedge clk) begin
    delay_wire_18 <= op_hcompute_conv_stencil_3_write[0];
  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_19;
  always @(posedge clk) begin
    delay_wire_19 <= addr3;
  end
  logic [15:0] delay_wire_20;
  always @(posedge clk) begin
    delay_wire_20 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_48_bank_selector.out;
  end
  logic [15:0] delay_wire_21;
  always @(posedge clk) begin
    delay_wire_21 <= op_hcompute_conv_stencil_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_22;
  always @(posedge clk) begin
    delay_wire_22 <= op_hcompute_conv_stencil_write[0];
  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_23;
  always @(posedge clk) begin
    delay_wire_23 <= addr4;
  end
  logic [15:0] delay_wire_24;
  always @(posedge clk) begin
    delay_wire_24 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_26_bank_selector.out;
  end
  logic [15:0] delay_wire_25;
  always @(posedge clk) begin
    delay_wire_25 <= op_hcompute_conv_stencil_4_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_26;
  always @(posedge clk) begin
    delay_wire_26 <= op_hcompute_conv_stencil_4_write[0];
  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_27;
  always @(posedge clk) begin
    delay_wire_27 <= addr5;
  end
  logic [15:0] delay_wire_28;
  always @(posedge clk) begin
    delay_wire_28 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out;
  end
  logic [15:0] delay_wire_29;
  always @(posedge clk) begin
    delay_wire_29 <= op_hcompute_conv_stencil_5_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_30;
  always @(posedge clk) begin
    delay_wire_30 <= op_hcompute_conv_stencil_5_write[0];
  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_31;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[0] <= end_delay_wire_31;  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_32;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[0] <= end_delay_wire_32;  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_33;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[0] <= end_delay_wire_33;  end
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_hw_output_stencil_1_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_output_stencil_1_read_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] end_delay_wire_34;
  always @(posedge clk) begin
    op_hcompute_hw_output_stencil_1_read[0] <= end_delay_wire_34;  end
  logic [15:0] addr10;
  assign addr10 = (((((1*op_hcompute_hw_output_stencil_2_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_output_stencil_2_read_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] end_delay_wire_35;
  always @(posedge clk) begin
    op_hcompute_hw_output_stencil_2_read[0] <= end_delay_wire_35;  end
  logic [15:0] addr11;
  assign addr11 = (((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] end_delay_wire_36;
  always @(posedge clk) begin
    op_hcompute_hw_output_stencil_read[0] <= end_delay_wire_36;  end
  always @(posedge clk) begin
    if (delay_wire_9) begin
      case( delay_wire_8)
        0:bank_0[delay_wire_7] <= delay_wire_10;
        1:bank_1[delay_wire_7] <= delay_wire_10;
        2:bank_2[delay_wire_7] <= delay_wire_10;
      endcase
    end
    if (delay_wire_13) begin
      case( delay_wire_12)
        0:bank_0[delay_wire_11] <= delay_wire_14;
        1:bank_1[delay_wire_11] <= delay_wire_14;
        2:bank_2[delay_wire_11] <= delay_wire_14;
      endcase
    end
    if (delay_wire_17) begin
      case( delay_wire_16)
        0:bank_0[delay_wire_15] <= delay_wire_18;
        1:bank_1[delay_wire_15] <= delay_wire_18;
        2:bank_2[delay_wire_15] <= delay_wire_18;
      endcase
    end
    if (delay_wire_21) begin
      case( delay_wire_20)
        0:bank_0[delay_wire_19] <= delay_wire_22;
        1:bank_1[delay_wire_19] <= delay_wire_22;
        2:bank_2[delay_wire_19] <= delay_wire_22;
      endcase
    end
    if (delay_wire_25) begin
      case( delay_wire_24)
        0:bank_0[delay_wire_23] <= delay_wire_26;
        1:bank_1[delay_wire_23] <= delay_wire_26;
        2:bank_2[delay_wire_23] <= delay_wire_26;
      endcase
    end
    if (delay_wire_29) begin
      case( delay_wire_28)
        0:bank_0[delay_wire_27] <= delay_wire_30;
        1:bank_1[delay_wire_27] <= delay_wire_30;
        2:bank_2[delay_wire_27] <= delay_wire_30;
      endcase
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_37_bank_selector.out)
        0:end_delay_wire_31 <= bank_0[addr6];
        1:end_delay_wire_31 <= bank_1[addr6];
        2:end_delay_wire_31 <= bank_2[addr6];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_27_bank_selector.out)
        0:end_delay_wire_32 <= bank_0[addr7];
        1:end_delay_wire_32 <= bank_1[addr7];
        2:end_delay_wire_32 <= bank_2[addr7];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out)
        0:end_delay_wire_33 <= bank_0[addr8];
        1:end_delay_wire_33 <= bank_1[addr8];
        2:end_delay_wire_33 <= bank_2[addr8];
      endcase
    end
    if (op_hcompute_hw_output_stencil_1_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_3_bank_selector.out)
        0:end_delay_wire_34 <= bank_0[addr9];
        1:end_delay_wire_34 <= bank_1[addr9];
        2:end_delay_wire_34 <= bank_2[addr9];
      endcase
    end
    if (op_hcompute_hw_output_stencil_2_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_1_bank_selector.out)
        0:end_delay_wire_35 <= bank_0[addr10];
        1:end_delay_wire_35 <= bank_1[addr10];
        2:end_delay_wire_35 <= bank_2[addr10];
      endcase
    end
    if (op_hcompute_hw_output_stencil_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_bank_selector.out)
        0:end_delay_wire_36 <= bank_0[addr11];
        1:end_delay_wire_36 <= bank_1[addr11];
        2:end_delay_wire_36 <= bank_2[addr11];
      endcase
    end
  end

endmodule


module hw_input_global_wrapper_stencil_embarassing_bank_selector(input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32]);
  assign out = 0+bank_index_2*1;

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

// { op_hcompute_hw_input_global_wrapper_stencil[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [(1 + 31hw_input_global_wrapper_s0_y + hw_input_global_wrapper_s0_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2:0], output op_hcompute_hw_input_global_wrapper_stencil_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_input_global_wrapper_stencil_write_wen =(on && on2 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0]==0 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1]<=29 && op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<=29);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 30) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] <= op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] <= op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_input_global_wrapper_stencil_1[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [(1 + 31hw_input_global_wrapper_s0_y + hw_input_global_wrapper_s0_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[2:0], output op_hcompute_hw_input_global_wrapper_stencil_1_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_input_global_wrapper_stencil_1_write_wen =(on && on2 && op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[0]==0 && op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[1]<=29 && op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[2]<=29);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 30) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[1] <= op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[2] <= op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_input_global_wrapper_stencil_2[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [(1 + 31hw_input_global_wrapper_s0_y + hw_input_global_wrapper_s0_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[2:0], output op_hcompute_hw_input_global_wrapper_stencil_2_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_input_global_wrapper_stencil_2_write_wen =(on && on2 && op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[0]==0 && op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[1]<=29 && op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[2]<=29);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 30) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[1] <= op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[2] <= op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_input_global_wrapper_stencil_3[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [(1 + 31hw_input_global_wrapper_s0_y + hw_input_global_wrapper_s0_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[2:0], output op_hcompute_hw_input_global_wrapper_stencil_3_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_input_global_wrapper_stencil_3_write_wen =(on && on2 && op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[0]==0 && op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[1]<=29 && op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[2]<=29);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 30) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[1] <= op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[2] <= op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars[2] + 1;
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3192conv_s1_r_y + 1064conv_s1_r_x + 38conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==1001) begin
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
        if(counter[1] == 3191) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1063) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 37) begin
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3192conv_s1_r_y + 1064conv_s1_r_x + 38conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==1001) begin
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
        if(counter[1] == 3191) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1063) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 37) begin
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3192conv_s1_r_y + 1064conv_s1_r_x + 38conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==1001) begin
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
        if(counter[1] == 3191) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1063) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 37) begin
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
	output logic [15:0] op_hcompute_conv_stencil_3_read [3:0] ,
	input op_hcompute_conv_stencil_4_read_ren,
	input [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_4_read [3:0] ,
	input op_hcompute_conv_stencil_5_read_ren,
	input [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_5_read [3:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_1_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_1_write [0:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_2_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_2_write [0:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_3_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_3_write [0:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0] );

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_4_read[0]), .out(op_hcompute_conv_stencil_3_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_4_read[1]), .out(op_hcompute_conv_stencil_3_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_4_read[2]), .out(op_hcompute_conv_stencil_3_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_4_read[3]), .out(op_hcompute_conv_stencil_3_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_5_read[3]), .out(op_hcompute_conv_stencil_4_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_5_read[0]), .out(op_hcompute_conv_stencil_4_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_5_read[1]), .out(op_hcompute_conv_stencil_4_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_5_read[2]), .out(op_hcompute_conv_stencil_4_read[3]));


  // Storage capacity pre-banking: 3600
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_write_wen(op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_1_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_1_write_wen(op_hcompute_hw_input_global_wrapper_stencil_1_write_wen_fsm_out));
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_2_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_2_write_wen(op_hcompute_hw_input_global_wrapper_stencil_2_write_wen_fsm_out));
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_3_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_3_write_wen(op_hcompute_hw_input_global_wrapper_stencil_3_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_3_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_3_read_ctrl_vars( op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_3_read_ren(op_hcompute_conv_stencil_3_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_4_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_4_read_ctrl_vars( op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_4_read_ren(op_hcompute_conv_stencil_4_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_5_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_5_read_ctrl_vars( op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_5_read_ren(op_hcompute_conv_stencil_5_read_ren_fsm_out));
  // # of banks: 4
  logic [15:0]  bank_0 [900];
  logic [15:0]  bank_1 [900];
  logic [15:0]  bank_2 [900];
  logic [15:0]  bank_3 [900];
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_14_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_14_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_14_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_14_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_14_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_14_2 = (0 - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_14_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_14_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_14_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_14_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_12_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_12_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_12_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_12_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_12_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_12_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_12_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_12_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_12_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_12_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_10_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_10_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_10_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_10_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_10_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_10_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_10_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_10_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_10_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_10_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_8_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_8_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_8_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_8_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_8_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_8_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_8_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_8_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_8_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_8_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_2 = (0 - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_38_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_39_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_40_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_41_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_2 = (0 - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_2 = (0 - 0);
hw_input_global_wrapper_stencil_embarassing_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0))*30);
  logic [15:0] delay_wire_37;
  always @(posedge clk) begin
    delay_wire_37 <= addr0;
  end
  logic [15:0] delay_wire_38;
  always @(posedge clk) begin
    delay_wire_38 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_14_bank_selector.out;
  end
  logic [15:0] delay_wire_39;
  always @(posedge clk) begin
    delay_wire_39 <= op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_40;
  always @(posedge clk) begin
    delay_wire_40 <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars_fsm_out[2])) - 0))*30);
  logic [15:0] delay_wire_41;
  always @(posedge clk) begin
    delay_wire_41 <= addr1;
  end
  logic [15:0] delay_wire_42;
  always @(posedge clk) begin
    delay_wire_42 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_12_bank_selector.out;
  end
  logic [15:0] delay_wire_43;
  always @(posedge clk) begin
    delay_wire_43 <= op_hcompute_hw_input_global_wrapper_stencil_1_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_44;
  always @(posedge clk) begin
    delay_wire_44 <= op_hcompute_hw_input_global_wrapper_stencil_1_write[0];
  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars_fsm_out[2])) - 0))*30);
  logic [15:0] delay_wire_45;
  always @(posedge clk) begin
    delay_wire_45 <= addr2;
  end
  logic [15:0] delay_wire_46;
  always @(posedge clk) begin
    delay_wire_46 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_10_bank_selector.out;
  end
  logic [15:0] delay_wire_47;
  always @(posedge clk) begin
    delay_wire_47 <= op_hcompute_hw_input_global_wrapper_stencil_2_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_48;
  always @(posedge clk) begin
    delay_wire_48 <= op_hcompute_hw_input_global_wrapper_stencil_2_write[0];
  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars_fsm_out[2])) - 0))*30);
  logic [15:0] delay_wire_49;
  always @(posedge clk) begin
    delay_wire_49 <= addr3;
  end
  logic [15:0] delay_wire_50;
  always @(posedge clk) begin
    delay_wire_50 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_8_bank_selector.out;
  end
  logic [15:0] delay_wire_51;
  always @(posedge clk) begin
    delay_wire_51 <= op_hcompute_hw_input_global_wrapper_stencil_3_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_52;
  always @(posedge clk) begin
    delay_wire_52 <= op_hcompute_hw_input_global_wrapper_stencil_3_write[0];
  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] end_delay_wire_53;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[0] <= end_delay_wire_53;  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] end_delay_wire_54;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[1] <= end_delay_wire_54;  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] end_delay_wire_55;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[2] <= end_delay_wire_55;  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] end_delay_wire_56;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[3] <= end_delay_wire_56;  end
  always @(posedge clk) begin
    if (delay_wire_39) begin
      case( delay_wire_38)
        0:bank_0[delay_wire_37] <= delay_wire_40;
        1:bank_1[delay_wire_37] <= delay_wire_40;
        2:bank_2[delay_wire_37] <= delay_wire_40;
        3:bank_3[delay_wire_37] <= delay_wire_40;
      endcase
    end
    if (delay_wire_43) begin
      case( delay_wire_42)
        0:bank_0[delay_wire_41] <= delay_wire_44;
        1:bank_1[delay_wire_41] <= delay_wire_44;
        2:bank_2[delay_wire_41] <= delay_wire_44;
        3:bank_3[delay_wire_41] <= delay_wire_44;
      endcase
    end
    if (delay_wire_47) begin
      case( delay_wire_46)
        0:bank_0[delay_wire_45] <= delay_wire_48;
        1:bank_1[delay_wire_45] <= delay_wire_48;
        2:bank_2[delay_wire_45] <= delay_wire_48;
        3:bank_3[delay_wire_45] <= delay_wire_48;
      endcase
    end
    if (delay_wire_51) begin
      case( delay_wire_50)
        0:bank_0[delay_wire_49] <= delay_wire_52;
        1:bank_1[delay_wire_49] <= delay_wire_52;
        2:bank_2[delay_wire_49] <= delay_wire_52;
        3:bank_3[delay_wire_49] <= delay_wire_52;
      endcase
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out)
        0:end_delay_wire_53 <= bank_0[addr4];
        1:end_delay_wire_53 <= bank_1[addr4];
        2:end_delay_wire_53 <= bank_2[addr4];
        3:end_delay_wire_53 <= bank_3[addr4];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out)
        0:end_delay_wire_54 <= bank_0[addr5];
        1:end_delay_wire_54 <= bank_1[addr5];
        2:end_delay_wire_54 <= bank_2[addr5];
        3:end_delay_wire_54 <= bank_3[addr5];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out)
        0:end_delay_wire_55 <= bank_0[addr6];
        1:end_delay_wire_55 <= bank_1[addr6];
        2:end_delay_wire_55 <= bank_2[addr6];
        3:end_delay_wire_55 <= bank_3[addr6];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out)
        0:end_delay_wire_56 <= bank_0[addr7];
        1:end_delay_wire_56 <= bank_1[addr7];
        2:end_delay_wire_56 <= bank_2[addr7];
        3:end_delay_wire_56 <= bank_3[addr7];
      endcase
    end
  end

endmodule


module hw_kernel_global_wrapper_stencil_embarassing_bank_selector(input logic [16*4 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32]);
  logic [15:0] bank_index_3;
  assign bank_index_3 = (d[63:48]);
  assign out = 0+bank_index_2*1+bank_index_3*3;

endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(2 + 45hw_kernel_global_wrapper_s0_y + 15hw_kernel_global_wrapper_s0_x + 5hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4:0], output op_hcompute_hw_kernel_global_wrapper_stencil_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_hw_kernel_global_wrapper_stencil_write_wen =(on && on2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[0]==0 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1]<=2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2]<=2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<=2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<=3);
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
        if(counter[1] == 44) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 14) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 4) begin
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
// { op_hcompute_conv_stencil_3[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3192conv_s1_r_y + 1064conv_s1_r_x + 38conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==1001) begin
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
        if(counter[1] == 3191) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[1] <= op_hcompute_conv_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1063) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_3_read_ctrl_vars[2] <= op_hcompute_conv_stencil_3_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 37) begin
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
// { op_hcompute_conv_stencil_4[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3192conv_s1_r_y + 1064conv_s1_r_x + 38conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==1001) begin
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
        if(counter[1] == 3191) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[1] <= op_hcompute_conv_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1063) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_4_read_ctrl_vars[2] <= op_hcompute_conv_stencil_4_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 37) begin
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
// { op_hcompute_conv_stencil_5[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3192conv_s1_r_y + 1064conv_s1_r_x + 38conv_s1_y + conv_s1_x)] }
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
      if(counter[0] ==1001) begin
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
        if(counter[1] == 3191) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[1] <= op_hcompute_conv_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1063) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_5_read_ctrl_vars[2] <= op_hcompute_conv_stencil_5_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 37) begin
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
	output logic [15:0] op_hcompute_conv_stencil_3_read [3:0] ,
	input op_hcompute_conv_stencil_4_read_ren,
	input [15:0] op_hcompute_conv_stencil_4_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_4_read [3:0] ,
	input op_hcompute_conv_stencil_5_read_ren,
	input [15:0] op_hcompute_conv_stencil_5_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_5_read [3:0] ,
	input op_hcompute_hw_kernel_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_hw_kernel_global_wrapper_stencil_write [0:0] );


  // Storage capacity pre-banking: 108
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
  // # of banks: 12
  logic [15:0]  bank_0 [9];
  logic [15:0]  bank_1 [9];
  logic [15:0]  bank_2 [9];
  logic [15:0]  bank_3 [9];
  logic [15:0]  bank_4 [9];
  logic [15:0]  bank_5 [9];
  logic [15:0]  bank_6 [9];
  logic [15:0]  bank_7 [9];
  logic [15:0]  bank_8 [9];
  logic [15:0]  bank_9 [9];
  logic [15:0]  bank_10 [9];
  logic [15:0]  bank_11 [9];
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_0 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_1 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_2 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_3 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[4])) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_0 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_1 = (((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_0 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_1 = (((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_3 = (((3)) - 0);
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
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_0 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_1 = (((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_57;
  always @(posedge clk) begin
    delay_wire_57 <= addr0;
  end
  logic [15:0] delay_wire_58;
  always @(posedge clk) begin
    delay_wire_58 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_6_bank_selector.out;
  end
  logic [15:0] delay_wire_59;
  always @(posedge clk) begin
    delay_wire_59 <= op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_60;
  always @(posedge clk) begin
    delay_wire_60 <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_61;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[0] <= end_delay_wire_61;  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_62;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[1] <= end_delay_wire_62;  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_63;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[2] <= end_delay_wire_63;  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_64;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[3] <= end_delay_wire_64;  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_65;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[0] <= end_delay_wire_65;  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_66;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[1] <= end_delay_wire_66;  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_67;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[2] <= end_delay_wire_67;  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_68;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[3] <= end_delay_wire_68;  end
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_69;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[0] <= end_delay_wire_69;  end
  logic [15:0] addr10;
  assign addr10 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_70;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[1] <= end_delay_wire_70;  end
  logic [15:0] addr11;
  assign addr11 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_71;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[2] <= end_delay_wire_71;  end
  logic [15:0] addr12;
  assign addr12 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_72;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[3] <= end_delay_wire_72;  end
  always @(posedge clk) begin
    if (delay_wire_59) begin
      case( delay_wire_58)
        0:bank_0[delay_wire_57] <= delay_wire_60;
        1:bank_1[delay_wire_57] <= delay_wire_60;
        2:bank_2[delay_wire_57] <= delay_wire_60;
        3:bank_3[delay_wire_57] <= delay_wire_60;
        4:bank_4[delay_wire_57] <= delay_wire_60;
        5:bank_5[delay_wire_57] <= delay_wire_60;
        6:bank_6[delay_wire_57] <= delay_wire_60;
        7:bank_7[delay_wire_57] <= delay_wire_60;
        8:bank_8[delay_wire_57] <= delay_wire_60;
        9:bank_9[delay_wire_57] <= delay_wire_60;
        10:bank_10[delay_wire_57] <= delay_wire_60;
        11:bank_11[delay_wire_57] <= delay_wire_60;
      endcase
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_42_bank_selector.out)
        0:end_delay_wire_61 <= bank_0[addr1];
        1:end_delay_wire_61 <= bank_1[addr1];
        2:end_delay_wire_61 <= bank_2[addr1];
        3:end_delay_wire_61 <= bank_3[addr1];
        4:end_delay_wire_61 <= bank_4[addr1];
        5:end_delay_wire_61 <= bank_5[addr1];
        6:end_delay_wire_61 <= bank_6[addr1];
        7:end_delay_wire_61 <= bank_7[addr1];
        8:end_delay_wire_61 <= bank_8[addr1];
        9:end_delay_wire_61 <= bank_9[addr1];
        10:end_delay_wire_61 <= bank_10[addr1];
        11:end_delay_wire_61 <= bank_11[addr1];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_43_bank_selector.out)
        0:end_delay_wire_62 <= bank_0[addr2];
        1:end_delay_wire_62 <= bank_1[addr2];
        2:end_delay_wire_62 <= bank_2[addr2];
        3:end_delay_wire_62 <= bank_3[addr2];
        4:end_delay_wire_62 <= bank_4[addr2];
        5:end_delay_wire_62 <= bank_5[addr2];
        6:end_delay_wire_62 <= bank_6[addr2];
        7:end_delay_wire_62 <= bank_7[addr2];
        8:end_delay_wire_62 <= bank_8[addr2];
        9:end_delay_wire_62 <= bank_9[addr2];
        10:end_delay_wire_62 <= bank_10[addr2];
        11:end_delay_wire_62 <= bank_11[addr2];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_bank_selector.out)
        0:end_delay_wire_63 <= bank_0[addr3];
        1:end_delay_wire_63 <= bank_1[addr3];
        2:end_delay_wire_63 <= bank_2[addr3];
        3:end_delay_wire_63 <= bank_3[addr3];
        4:end_delay_wire_63 <= bank_4[addr3];
        5:end_delay_wire_63 <= bank_5[addr3];
        6:end_delay_wire_63 <= bank_6[addr3];
        7:end_delay_wire_63 <= bank_7[addr3];
        8:end_delay_wire_63 <= bank_8[addr3];
        9:end_delay_wire_63 <= bank_9[addr3];
        10:end_delay_wire_63 <= bank_10[addr3];
        11:end_delay_wire_63 <= bank_11[addr3];
      endcase
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_bank_selector.out)
        0:end_delay_wire_64 <= bank_0[addr4];
        1:end_delay_wire_64 <= bank_1[addr4];
        2:end_delay_wire_64 <= bank_2[addr4];
        3:end_delay_wire_64 <= bank_3[addr4];
        4:end_delay_wire_64 <= bank_4[addr4];
        5:end_delay_wire_64 <= bank_5[addr4];
        6:end_delay_wire_64 <= bank_6[addr4];
        7:end_delay_wire_64 <= bank_7[addr4];
        8:end_delay_wire_64 <= bank_8[addr4];
        9:end_delay_wire_64 <= bank_9[addr4];
        10:end_delay_wire_64 <= bank_10[addr4];
        11:end_delay_wire_64 <= bank_11[addr4];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_bank_selector.out)
        0:end_delay_wire_65 <= bank_0[addr5];
        1:end_delay_wire_65 <= bank_1[addr5];
        2:end_delay_wire_65 <= bank_2[addr5];
        3:end_delay_wire_65 <= bank_3[addr5];
        4:end_delay_wire_65 <= bank_4[addr5];
        5:end_delay_wire_65 <= bank_5[addr5];
        6:end_delay_wire_65 <= bank_6[addr5];
        7:end_delay_wire_65 <= bank_7[addr5];
        8:end_delay_wire_65 <= bank_8[addr5];
        9:end_delay_wire_65 <= bank_9[addr5];
        10:end_delay_wire_65 <= bank_10[addr5];
        11:end_delay_wire_65 <= bank_11[addr5];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_bank_selector.out)
        0:end_delay_wire_66 <= bank_0[addr6];
        1:end_delay_wire_66 <= bank_1[addr6];
        2:end_delay_wire_66 <= bank_2[addr6];
        3:end_delay_wire_66 <= bank_3[addr6];
        4:end_delay_wire_66 <= bank_4[addr6];
        5:end_delay_wire_66 <= bank_5[addr6];
        6:end_delay_wire_66 <= bank_6[addr6];
        7:end_delay_wire_66 <= bank_7[addr6];
        8:end_delay_wire_66 <= bank_8[addr6];
        9:end_delay_wire_66 <= bank_9[addr6];
        10:end_delay_wire_66 <= bank_10[addr6];
        11:end_delay_wire_66 <= bank_11[addr6];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out)
        0:end_delay_wire_67 <= bank_0[addr7];
        1:end_delay_wire_67 <= bank_1[addr7];
        2:end_delay_wire_67 <= bank_2[addr7];
        3:end_delay_wire_67 <= bank_3[addr7];
        4:end_delay_wire_67 <= bank_4[addr7];
        5:end_delay_wire_67 <= bank_5[addr7];
        6:end_delay_wire_67 <= bank_6[addr7];
        7:end_delay_wire_67 <= bank_7[addr7];
        8:end_delay_wire_67 <= bank_8[addr7];
        9:end_delay_wire_67 <= bank_9[addr7];
        10:end_delay_wire_67 <= bank_10[addr7];
        11:end_delay_wire_67 <= bank_11[addr7];
      endcase
    end
    if (op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out)
        0:end_delay_wire_68 <= bank_0[addr8];
        1:end_delay_wire_68 <= bank_1[addr8];
        2:end_delay_wire_68 <= bank_2[addr8];
        3:end_delay_wire_68 <= bank_3[addr8];
        4:end_delay_wire_68 <= bank_4[addr8];
        5:end_delay_wire_68 <= bank_5[addr8];
        6:end_delay_wire_68 <= bank_6[addr8];
        7:end_delay_wire_68 <= bank_7[addr8];
        8:end_delay_wire_68 <= bank_8[addr8];
        9:end_delay_wire_68 <= bank_9[addr8];
        10:end_delay_wire_68 <= bank_10[addr8];
        11:end_delay_wire_68 <= bank_11[addr8];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out)
        0:end_delay_wire_69 <= bank_0[addr9];
        1:end_delay_wire_69 <= bank_1[addr9];
        2:end_delay_wire_69 <= bank_2[addr9];
        3:end_delay_wire_69 <= bank_3[addr9];
        4:end_delay_wire_69 <= bank_4[addr9];
        5:end_delay_wire_69 <= bank_5[addr9];
        6:end_delay_wire_69 <= bank_6[addr9];
        7:end_delay_wire_69 <= bank_7[addr9];
        8:end_delay_wire_69 <= bank_8[addr9];
        9:end_delay_wire_69 <= bank_9[addr9];
        10:end_delay_wire_69 <= bank_10[addr9];
        11:end_delay_wire_69 <= bank_11[addr9];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out)
        0:end_delay_wire_70 <= bank_0[addr10];
        1:end_delay_wire_70 <= bank_1[addr10];
        2:end_delay_wire_70 <= bank_2[addr10];
        3:end_delay_wire_70 <= bank_3[addr10];
        4:end_delay_wire_70 <= bank_4[addr10];
        5:end_delay_wire_70 <= bank_5[addr10];
        6:end_delay_wire_70 <= bank_6[addr10];
        7:end_delay_wire_70 <= bank_7[addr10];
        8:end_delay_wire_70 <= bank_8[addr10];
        9:end_delay_wire_70 <= bank_9[addr10];
        10:end_delay_wire_70 <= bank_10[addr10];
        11:end_delay_wire_70 <= bank_11[addr10];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_24_bank_selector.out)
        0:end_delay_wire_71 <= bank_0[addr11];
        1:end_delay_wire_71 <= bank_1[addr11];
        2:end_delay_wire_71 <= bank_2[addr11];
        3:end_delay_wire_71 <= bank_3[addr11];
        4:end_delay_wire_71 <= bank_4[addr11];
        5:end_delay_wire_71 <= bank_5[addr11];
        6:end_delay_wire_71 <= bank_6[addr11];
        7:end_delay_wire_71 <= bank_7[addr11];
        8:end_delay_wire_71 <= bank_8[addr11];
        9:end_delay_wire_71 <= bank_9[addr11];
        10:end_delay_wire_71 <= bank_10[addr11];
        11:end_delay_wire_71 <= bank_11[addr11];
      endcase
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_25_bank_selector.out)
        0:end_delay_wire_72 <= bank_0[addr12];
        1:end_delay_wire_72 <= bank_1[addr12];
        2:end_delay_wire_72 <= bank_2[addr12];
        3:end_delay_wire_72 <= bank_3[addr12];
        4:end_delay_wire_72 <= bank_4[addr12];
        5:end_delay_wire_72 <= bank_5[addr12];
        6:end_delay_wire_72 <= bank_6[addr12];
        7:end_delay_wire_72 <= bank_7[addr12];
        8:end_delay_wire_72 <= bank_8[addr12];
        9:end_delay_wire_72 <= bank_9[addr12];
        10:end_delay_wire_72 <= bank_10[addr12];
        11:end_delay_wire_72 <= bank_11[addr12];
      endcase
    end
  end

endmodule

