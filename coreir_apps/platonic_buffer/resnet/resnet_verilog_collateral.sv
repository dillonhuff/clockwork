  // min: { [2] }
  // max: { [812] }

  // min: { [8009] }
  // max: { [19582] }

  // min: { [8009] }
  // max: { [19582] }

  // min: { [1] }
  // max: { [8099] }

  // min: { [2] }
  // max: { [243] }

  // min: { [32033] }
  // max: { [34467] }

  // min: { [8009] }
  // max: { [19582] }

  // min: { [2] }
  // max: { [812] }

  // min: { [2] }
  // max: { [812] }

  // sched min: { [1] }
  // sched max: { [34467] }
// conv_stencil has embarassing partition: 1

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
  logic [15:0]  bank_0 [784];
  logic [15:0]  bank_1 [784];
  logic [15:0]  bank_2 [784];
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
    delay_wire_0 <= addr0;
  end
  logic [15:0] delay_wire_1;
  always @(posedge clk) begin
    delay_wire_1 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_61_bank_selector.out;
  end
  logic [15:0] delay_wire_2;
  always @(posedge clk) begin
    delay_wire_2 <= op_hcompute_conv_stencil_1_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_3;
  always @(posedge clk) begin
    delay_wire_3 <= op_hcompute_conv_stencil_1_write[0];
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_4;
  always @(posedge clk) begin
    delay_wire_4 <= addr1;
  end
  logic [15:0] delay_wire_5;
  always @(posedge clk) begin
    delay_wire_5 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_60_bank_selector.out;
  end
  logic [15:0] delay_wire_6;
  always @(posedge clk) begin
    delay_wire_6 <= op_hcompute_conv_stencil_2_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_7;
  always @(posedge clk) begin
    delay_wire_7 <= op_hcompute_conv_stencil_2_write[0];
  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_8;
  always @(posedge clk) begin
    delay_wire_8 <= addr2;
  end
  logic [15:0] delay_wire_9;
  always @(posedge clk) begin
    delay_wire_9 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_42_bank_selector.out;
  end
  logic [15:0] delay_wire_10;
  always @(posedge clk) begin
    delay_wire_10 <= op_hcompute_conv_stencil_3_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_11;
  always @(posedge clk) begin
    delay_wire_11 <= op_hcompute_conv_stencil_3_write[0];
  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_12;
  always @(posedge clk) begin
    delay_wire_12 <= addr3;
  end
  logic [15:0] delay_wire_13;
  always @(posedge clk) begin
    delay_wire_13 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_24_bank_selector.out;
  end
  logic [15:0] delay_wire_14;
  always @(posedge clk) begin
    delay_wire_14 <= op_hcompute_conv_stencil_4_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_15;
  always @(posedge clk) begin
    delay_wire_15 <= op_hcompute_conv_stencil_4_write[0];
  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_16;
  always @(posedge clk) begin
    delay_wire_16 <= addr4;
  end
  logic [15:0] delay_wire_17;
  always @(posedge clk) begin
    delay_wire_17 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_6_bank_selector.out;
  end
  logic [15:0] delay_wire_18;
  always @(posedge clk) begin
    delay_wire_18 <= op_hcompute_conv_stencil_5_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_19;
  always @(posedge clk) begin
    delay_wire_19 <= op_hcompute_conv_stencil_5_write[0];
  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_20;
  always @(posedge clk) begin
    delay_wire_20 <= addr5;
  end
  logic [15:0] delay_wire_21;
  always @(posedge clk) begin
    delay_wire_21 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_62_bank_selector.out;
  end
  logic [15:0] delay_wire_22;
  always @(posedge clk) begin
    delay_wire_22 <= op_hcompute_conv_stencil_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_23;
  always @(posedge clk) begin
    delay_wire_23 <= op_hcompute_conv_stencil_write[0];
  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_24;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[0] <= end_delay_wire_24;
  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_25;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[0] <= end_delay_wire_25;
  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_26;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[0] <= end_delay_wire_26;
  end
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0))*1+((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[3])) - 0))*28);
  logic [15:0] end_delay_wire_27;
  always @(posedge clk) begin
    op_hcompute_hw_output_stencil_read[0] <= end_delay_wire_27;
  end
  always @(posedge clk) begin
    if(op_hcompute_conv_stencil_1_write_wen)begin
      if(op_hcompute_conv_stencil_1_write_ctrl_vars!=op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_1_write_wen!=op_hcompute_conv_stencil_1_write_wen_fsm_out) begin
        $display(op_hcompute_conv_stencil_1_write_wen);
        $display(op_hcompute_conv_stencil_1_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_2_write_wen)begin
      if(op_hcompute_conv_stencil_2_write_ctrl_vars!=op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_2_write_wen!=op_hcompute_conv_stencil_2_write_wen_fsm_out) begin
        $display(op_hcompute_conv_stencil_2_write_wen);
        $display(op_hcompute_conv_stencil_2_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_3_write_wen)begin
      if(op_hcompute_conv_stencil_3_write_ctrl_vars!=op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_3_write_wen!=op_hcompute_conv_stencil_3_write_wen_fsm_out) begin
        $display(op_hcompute_conv_stencil_3_write_wen);
        $display(op_hcompute_conv_stencil_3_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_4_write_wen)begin
      if(op_hcompute_conv_stencil_4_write_ctrl_vars!=op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_4_write_wen!=op_hcompute_conv_stencil_4_write_wen_fsm_out) begin
        $display(op_hcompute_conv_stencil_4_write_wen);
        $display(op_hcompute_conv_stencil_4_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_5_write_wen)begin
      if(op_hcompute_conv_stencil_5_write_ctrl_vars!=op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_5_write_wen!=op_hcompute_conv_stencil_5_write_wen_fsm_out) begin
        $display(op_hcompute_conv_stencil_5_write_wen);
        $display(op_hcompute_conv_stencil_5_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_write_wen)begin
      if(op_hcompute_conv_stencil_write_ctrl_vars!=op_hcompute_conv_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_write_wen!=op_hcompute_conv_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_conv_stencil_write_wen);
        $display(op_hcompute_conv_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_3_read_ren)begin
      if(op_hcompute_conv_stencil_3_read_ctrl_vars!=op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_3_read_ren!=op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
        $display(op_hcompute_conv_stencil_3_read_ren);
        $display(op_hcompute_conv_stencil_3_read_ren_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_4_read_ren)begin
      if(op_hcompute_conv_stencil_4_read_ctrl_vars!=op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_4_read_ren!=op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
        $display(op_hcompute_conv_stencil_4_read_ren);
        $display(op_hcompute_conv_stencil_4_read_ren_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_5_read_ren)begin
      if(op_hcompute_conv_stencil_5_read_ctrl_vars!=op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_5_read_ren!=op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
        $display(op_hcompute_conv_stencil_5_read_ren);
        $display(op_hcompute_conv_stencil_5_read_ren_fsm_out);
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
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_bank_selector.out==0) begin
        end_delay_wire_24 <= bank_0[addr6];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_bank_selector.out==0) begin
        end_delay_wire_25 <= bank_0[addr7];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_bank_selector.out==0) begin
        end_delay_wire_26 <= bank_0[addr8];
    end
    else if (op_hcompute_hw_output_stencil_read_ren_fsm_out &&conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_bank_selector.out==0) begin
        end_delay_wire_27 <= bank_0[addr9];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_bank_selector.out==1) begin
        end_delay_wire_24 <= bank_1[addr6];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_bank_selector.out==1) begin
        end_delay_wire_25 <= bank_1[addr7];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_bank_selector.out==1) begin
        end_delay_wire_26 <= bank_1[addr8];
    end
    else if (op_hcompute_hw_output_stencil_read_ren_fsm_out &&conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_bank_selector.out==1) begin
        end_delay_wire_27 <= bank_1[addr9];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_43_bank_selector.out==2) begin
        end_delay_wire_24 <= bank_2[addr6];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_25_bank_selector.out==2) begin
        end_delay_wire_25 <= bank_2[addr7];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_7_bank_selector.out==2) begin
        end_delay_wire_26 <= bank_2[addr8];
    end
    else if (op_hcompute_hw_output_stencil_read_ren_fsm_out &&conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_bank_selector.out==2) begin
        end_delay_wire_27 <= bank_2[addr9];
    end
  end

endmodule

// hw_input_global_wrapper_stencil has embarassing partition: 1

module hw_input_global_wrapper_stencil_embarassing_bank_selector(input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32]);
  assign out = 0+bank_index_2*1;

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
  logic [15:0]  bank_0 [900];
  logic [15:0]  bank_1 [900];
  logic [15:0]  bank_2 [900];
  logic [15:0]  bank_3 [900];
  logic [15:0]  bank_4 [900];
  logic [15:0]  bank_5 [900];
  logic [15:0]  bank_6 [900];
  logic [15:0]  bank_7 [900];
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
  logic [15:0] delay_wire_28;
  always @(posedge clk) begin
    delay_wire_28 <= addr0;
  end
  logic [15:0] delay_wire_29;
  always @(posedge clk) begin
    delay_wire_29 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_bank_selector.out;
  end
  logic [15:0] delay_wire_30;
  always @(posedge clk) begin
    delay_wire_30 <= op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_31;
  always @(posedge clk) begin
    delay_wire_31 <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] end_delay_wire_32;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[2] <= end_delay_wire_32;
  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] end_delay_wire_33;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[3] <= end_delay_wire_33;
  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] end_delay_wire_34;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[4] <= end_delay_wire_34;
  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] end_delay_wire_35;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[5] <= end_delay_wire_35;
  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] end_delay_wire_36;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[6] <= end_delay_wire_36;
  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] end_delay_wire_37;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[7] <= end_delay_wire_37;
  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] end_delay_wire_38;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[0] <= end_delay_wire_38;
  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[4])) - 0))*30);
  logic [15:0] end_delay_wire_39;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[1] <= end_delay_wire_39;
  end
  always @(posedge clk) begin
    if(op_hcompute_hw_input_global_wrapper_stencil_write_wen)begin
      if(op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars!=op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_hw_input_global_wrapper_stencil_write_wen!=op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_hw_input_global_wrapper_stencil_write_wen);
        $display(op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_3_read_ren)begin
      if(op_hcompute_conv_stencil_3_read_ctrl_vars!=op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_3_read_ren!=op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
        $display(op_hcompute_conv_stencil_3_read_ren);
        $display(op_hcompute_conv_stencil_3_read_ren_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_4_read_ren)begin
      if(op_hcompute_conv_stencil_4_read_ctrl_vars!=op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_4_read_ren!=op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
        $display(op_hcompute_conv_stencil_4_read_ren);
        $display(op_hcompute_conv_stencil_4_read_ren_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_5_read_ren)begin
      if(op_hcompute_conv_stencil_5_read_ctrl_vars!=op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_5_read_ren!=op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
        $display(op_hcompute_conv_stencil_5_read_ren);
        $display(op_hcompute_conv_stencil_5_read_ren_fsm_out);
      $finish(-1);
    end
    if (delay_wire_30 &&delay_wire_29==0) begin
        bank_0[delay_wire_28] <= delay_wire_31;
    end
    if (delay_wire_30 &&delay_wire_29==1) begin
        bank_1[delay_wire_28] <= delay_wire_31;
    end
    if (delay_wire_30 &&delay_wire_29==2) begin
        bank_2[delay_wire_28] <= delay_wire_31;
    end
    if (delay_wire_30 &&delay_wire_29==3) begin
        bank_3[delay_wire_28] <= delay_wire_31;
    end
    if (delay_wire_30 &&delay_wire_29==4) begin
        bank_4[delay_wire_28] <= delay_wire_31;
    end
    if (delay_wire_30 &&delay_wire_29==5) begin
        bank_5[delay_wire_28] <= delay_wire_31;
    end
    if (delay_wire_30 &&delay_wire_29==6) begin
        bank_6[delay_wire_28] <= delay_wire_31;
    end
    if (delay_wire_30 &&delay_wire_29==7) begin
        bank_7[delay_wire_28] <= delay_wire_31;
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_bank_selector.out==0) begin
        end_delay_wire_32 <= bank_0[addr1];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_bank_selector.out==0) begin
        end_delay_wire_33 <= bank_0[addr2];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_bank_selector.out==0) begin
        end_delay_wire_34 <= bank_0[addr3];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_bank_selector.out==0) begin
        end_delay_wire_35 <= bank_0[addr4];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_bank_selector.out==0) begin
        end_delay_wire_36 <= bank_0[addr5];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_bank_selector.out==0) begin
        end_delay_wire_37 <= bank_0[addr6];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_bank_selector.out==0) begin
        end_delay_wire_38 <= bank_0[addr7];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_bank_selector.out==0) begin
        end_delay_wire_39 <= bank_0[addr8];
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_bank_selector.out==1) begin
        end_delay_wire_32 <= bank_1[addr1];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_bank_selector.out==1) begin
        end_delay_wire_33 <= bank_1[addr2];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_bank_selector.out==1) begin
        end_delay_wire_34 <= bank_1[addr3];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_bank_selector.out==1) begin
        end_delay_wire_35 <= bank_1[addr4];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_bank_selector.out==1) begin
        end_delay_wire_36 <= bank_1[addr5];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_bank_selector.out==1) begin
        end_delay_wire_37 <= bank_1[addr6];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_bank_selector.out==1) begin
        end_delay_wire_38 <= bank_1[addr7];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_bank_selector.out==1) begin
        end_delay_wire_39 <= bank_1[addr8];
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_bank_selector.out==2) begin
        end_delay_wire_32 <= bank_2[addr1];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_bank_selector.out==2) begin
        end_delay_wire_33 <= bank_2[addr2];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_bank_selector.out==2) begin
        end_delay_wire_34 <= bank_2[addr3];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_bank_selector.out==2) begin
        end_delay_wire_35 <= bank_2[addr4];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_bank_selector.out==2) begin
        end_delay_wire_36 <= bank_2[addr5];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_bank_selector.out==2) begin
        end_delay_wire_37 <= bank_2[addr6];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_bank_selector.out==2) begin
        end_delay_wire_38 <= bank_2[addr7];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_bank_selector.out==2) begin
        end_delay_wire_39 <= bank_2[addr8];
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_bank_selector.out==3) begin
        end_delay_wire_32 <= bank_3[addr1];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_bank_selector.out==3) begin
        end_delay_wire_33 <= bank_3[addr2];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_bank_selector.out==3) begin
        end_delay_wire_34 <= bank_3[addr3];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_bank_selector.out==3) begin
        end_delay_wire_35 <= bank_3[addr4];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_bank_selector.out==3) begin
        end_delay_wire_36 <= bank_3[addr5];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_bank_selector.out==3) begin
        end_delay_wire_37 <= bank_3[addr6];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_bank_selector.out==3) begin
        end_delay_wire_38 <= bank_3[addr7];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_bank_selector.out==3) begin
        end_delay_wire_39 <= bank_3[addr8];
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_bank_selector.out==4) begin
        end_delay_wire_32 <= bank_4[addr1];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_bank_selector.out==4) begin
        end_delay_wire_33 <= bank_4[addr2];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_bank_selector.out==4) begin
        end_delay_wire_34 <= bank_4[addr3];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_bank_selector.out==4) begin
        end_delay_wire_35 <= bank_4[addr4];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_bank_selector.out==4) begin
        end_delay_wire_36 <= bank_4[addr5];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_bank_selector.out==4) begin
        end_delay_wire_37 <= bank_4[addr6];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_bank_selector.out==4) begin
        end_delay_wire_38 <= bank_4[addr7];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_bank_selector.out==4) begin
        end_delay_wire_39 <= bank_4[addr8];
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_bank_selector.out==5) begin
        end_delay_wire_32 <= bank_5[addr1];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_bank_selector.out==5) begin
        end_delay_wire_33 <= bank_5[addr2];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_bank_selector.out==5) begin
        end_delay_wire_34 <= bank_5[addr3];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_bank_selector.out==5) begin
        end_delay_wire_35 <= bank_5[addr4];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_bank_selector.out==5) begin
        end_delay_wire_36 <= bank_5[addr5];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_bank_selector.out==5) begin
        end_delay_wire_37 <= bank_5[addr6];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_bank_selector.out==5) begin
        end_delay_wire_38 <= bank_5[addr7];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_bank_selector.out==5) begin
        end_delay_wire_39 <= bank_5[addr8];
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_bank_selector.out==6) begin
        end_delay_wire_32 <= bank_6[addr1];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_bank_selector.out==6) begin
        end_delay_wire_33 <= bank_6[addr2];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_bank_selector.out==6) begin
        end_delay_wire_34 <= bank_6[addr3];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_bank_selector.out==6) begin
        end_delay_wire_35 <= bank_6[addr4];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_bank_selector.out==6) begin
        end_delay_wire_36 <= bank_6[addr5];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_bank_selector.out==6) begin
        end_delay_wire_37 <= bank_6[addr6];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_bank_selector.out==6) begin
        end_delay_wire_38 <= bank_6[addr7];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_bank_selector.out==6) begin
        end_delay_wire_39 <= bank_6[addr8];
    end
    if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_bank_selector.out==7) begin
        end_delay_wire_32 <= bank_7[addr1];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_bank_selector.out==7) begin
        end_delay_wire_33 <= bank_7[addr2];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_bank_selector.out==7) begin
        end_delay_wire_34 <= bank_7[addr3];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_bank_selector.out==7) begin
        end_delay_wire_35 <= bank_7[addr4];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_bank_selector.out==7) begin
        end_delay_wire_36 <= bank_7[addr5];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_bank_selector.out==7) begin
        end_delay_wire_37 <= bank_7[addr6];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_bank_selector.out==7) begin
        end_delay_wire_38 <= bank_7[addr7];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_bank_selector.out==7) begin
        end_delay_wire_39 <= bank_7[addr8];
    end
  end

endmodule

// hw_kernel_global_wrapper_stencil has embarassing partition: 1

module hw_kernel_global_wrapper_stencil_embarassing_bank_selector(input logic [16*4 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32]);
  logic [15:0] bank_index_3;
  assign bank_index_3 = (d[63:48]);
  assign out = 0+bank_index_2*1+bank_index_3*3;

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
  logic [15:0]  bank_12 [9];
  logic [15:0]  bank_13 [9];
  logic [15:0]  bank_14 [9];
  logic [15:0]  bank_15 [9];
  logic [15:0]  bank_16 [9];
  logic [15:0]  bank_17 [9];
  logic [15:0]  bank_18 [9];
  logic [15:0]  bank_19 [9];
  logic [15:0]  bank_20 [9];
  logic [15:0]  bank_21 [9];
  logic [15:0]  bank_22 [9];
  logic [15:0]  bank_23 [9];
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
  logic [15:0] delay_wire_40;
  always @(posedge clk) begin
    delay_wire_40 <= addr0;
  end
  logic [15:0] delay_wire_41;
  always @(posedge clk) begin
    delay_wire_41 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_bank_selector.out;
  end
  logic [15:0] delay_wire_42;
  always @(posedge clk) begin
    delay_wire_42 <= op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_43;
  always @(posedge clk) begin
    delay_wire_43 <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_44;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[0] <= end_delay_wire_44;
  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_45;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[1] <= end_delay_wire_45;
  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_46;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[2] <= end_delay_wire_46;
  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_47;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[3] <= end_delay_wire_47;
  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_48;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[4] <= end_delay_wire_48;
  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_49;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[5] <= end_delay_wire_49;
  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_50;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[6] <= end_delay_wire_50;
  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_51;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_3_read[7] <= end_delay_wire_51;
  end
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_52;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[0] <= end_delay_wire_52;
  end
  logic [15:0] addr10;
  assign addr10 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_53;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[1] <= end_delay_wire_53;
  end
  logic [15:0] addr11;
  assign addr11 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_54;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[2] <= end_delay_wire_54;
  end
  logic [15:0] addr12;
  assign addr12 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_55;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[3] <= end_delay_wire_55;
  end
  logic [15:0] addr13;
  assign addr13 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_56;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[4] <= end_delay_wire_56;
  end
  logic [15:0] addr14;
  assign addr14 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_57;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[5] <= end_delay_wire_57;
  end
  logic [15:0] addr15;
  assign addr15 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_58;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[6] <= end_delay_wire_58;
  end
  logic [15:0] addr16;
  assign addr16 = (((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_59;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_4_read[7] <= end_delay_wire_59;
  end
  logic [15:0] addr17;
  assign addr17 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_60;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[0] <= end_delay_wire_60;
  end
  logic [15:0] addr18;
  assign addr18 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_61;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[1] <= end_delay_wire_61;
  end
  logic [15:0] addr19;
  assign addr19 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_62;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[2] <= end_delay_wire_62;
  end
  logic [15:0] addr20;
  assign addr20 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_63;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[3] <= end_delay_wire_63;
  end
  logic [15:0] addr21;
  assign addr21 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_64;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[4] <= end_delay_wire_64;
  end
  logic [15:0] addr22;
  assign addr22 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_65;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[5] <= end_delay_wire_65;
  end
  logic [15:0] addr23;
  assign addr23 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_66;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[6] <= end_delay_wire_66;
  end
  logic [15:0] addr24;
  assign addr24 = (((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_67;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_5_read[7] <= end_delay_wire_67;
  end
  always @(posedge clk) begin
    if(op_hcompute_hw_kernel_global_wrapper_stencil_write_wen)begin
      if(op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars!=op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_hw_kernel_global_wrapper_stencil_write_wen!=op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out) begin
        $display(op_hcompute_hw_kernel_global_wrapper_stencil_write_wen);
        $display(op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_3_read_ren)begin
      if(op_hcompute_conv_stencil_3_read_ctrl_vars!=op_hcompute_conv_stencil_3_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_3_read_ren!=op_hcompute_conv_stencil_3_read_ren_fsm_out) begin
        $display(op_hcompute_conv_stencil_3_read_ren);
        $display(op_hcompute_conv_stencil_3_read_ren_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_4_read_ren)begin
      if(op_hcompute_conv_stencil_4_read_ctrl_vars!=op_hcompute_conv_stencil_4_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_4_read_ren!=op_hcompute_conv_stencil_4_read_ren_fsm_out) begin
        $display(op_hcompute_conv_stencil_4_read_ren);
        $display(op_hcompute_conv_stencil_4_read_ren_fsm_out);
      $finish(-1);
    end
    if(op_hcompute_conv_stencil_5_read_ren)begin
      if(op_hcompute_conv_stencil_5_read_ctrl_vars!=op_hcompute_conv_stencil_5_read_ctrl_vars_fsm_out) begin
        $display("Different");
        $finish(-1);
      end
    end
    if (op_hcompute_conv_stencil_5_read_ren!=op_hcompute_conv_stencil_5_read_ren_fsm_out) begin
        $display(op_hcompute_conv_stencil_5_read_ren);
        $display(op_hcompute_conv_stencil_5_read_ren_fsm_out);
      $finish(-1);
    end
    if (delay_wire_42 &&delay_wire_41==0) begin
        bank_0[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==1) begin
        bank_1[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==2) begin
        bank_2[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==3) begin
        bank_3[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==4) begin
        bank_4[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==5) begin
        bank_5[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==6) begin
        bank_6[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==7) begin
        bank_7[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==8) begin
        bank_8[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==9) begin
        bank_9[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==10) begin
        bank_10[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==11) begin
        bank_11[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==12) begin
        bank_12[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==13) begin
        bank_13[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==14) begin
        bank_14[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==15) begin
        bank_15[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==16) begin
        bank_16[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==17) begin
        bank_17[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==18) begin
        bank_18[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==19) begin
        bank_19[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==20) begin
        bank_20[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==21) begin
        bank_21[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==22) begin
        bank_22[delay_wire_40] <= delay_wire_43;
    end
    if (delay_wire_42 &&delay_wire_41==23) begin
        bank_23[delay_wire_40] <= delay_wire_43;
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==0) begin
        end_delay_wire_44 <= bank_0[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==0) begin
        end_delay_wire_45 <= bank_0[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==0) begin
        end_delay_wire_46 <= bank_0[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==0) begin
        end_delay_wire_47 <= bank_0[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==0) begin
        end_delay_wire_48 <= bank_0[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==0) begin
        end_delay_wire_49 <= bank_0[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==0) begin
        end_delay_wire_50 <= bank_0[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==0) begin
        end_delay_wire_51 <= bank_0[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==0) begin
        end_delay_wire_52 <= bank_0[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==0) begin
        end_delay_wire_53 <= bank_0[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==0) begin
        end_delay_wire_54 <= bank_0[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==0) begin
        end_delay_wire_55 <= bank_0[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==0) begin
        end_delay_wire_56 <= bank_0[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==0) begin
        end_delay_wire_57 <= bank_0[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==0) begin
        end_delay_wire_58 <= bank_0[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==0) begin
        end_delay_wire_59 <= bank_0[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==0) begin
        end_delay_wire_60 <= bank_0[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==0) begin
        end_delay_wire_61 <= bank_0[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==0) begin
        end_delay_wire_62 <= bank_0[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==0) begin
        end_delay_wire_63 <= bank_0[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==0) begin
        end_delay_wire_64 <= bank_0[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==0) begin
        end_delay_wire_65 <= bank_0[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==0) begin
        end_delay_wire_66 <= bank_0[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==0) begin
        end_delay_wire_67 <= bank_0[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==1) begin
        end_delay_wire_44 <= bank_1[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==1) begin
        end_delay_wire_45 <= bank_1[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==1) begin
        end_delay_wire_46 <= bank_1[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==1) begin
        end_delay_wire_47 <= bank_1[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==1) begin
        end_delay_wire_48 <= bank_1[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==1) begin
        end_delay_wire_49 <= bank_1[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==1) begin
        end_delay_wire_50 <= bank_1[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==1) begin
        end_delay_wire_51 <= bank_1[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==1) begin
        end_delay_wire_52 <= bank_1[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==1) begin
        end_delay_wire_53 <= bank_1[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==1) begin
        end_delay_wire_54 <= bank_1[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==1) begin
        end_delay_wire_55 <= bank_1[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==1) begin
        end_delay_wire_56 <= bank_1[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==1) begin
        end_delay_wire_57 <= bank_1[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==1) begin
        end_delay_wire_58 <= bank_1[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==1) begin
        end_delay_wire_59 <= bank_1[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==1) begin
        end_delay_wire_60 <= bank_1[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==1) begin
        end_delay_wire_61 <= bank_1[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==1) begin
        end_delay_wire_62 <= bank_1[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==1) begin
        end_delay_wire_63 <= bank_1[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==1) begin
        end_delay_wire_64 <= bank_1[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==1) begin
        end_delay_wire_65 <= bank_1[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==1) begin
        end_delay_wire_66 <= bank_1[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==1) begin
        end_delay_wire_67 <= bank_1[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==2) begin
        end_delay_wire_44 <= bank_2[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==2) begin
        end_delay_wire_45 <= bank_2[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==2) begin
        end_delay_wire_46 <= bank_2[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==2) begin
        end_delay_wire_47 <= bank_2[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==2) begin
        end_delay_wire_48 <= bank_2[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==2) begin
        end_delay_wire_49 <= bank_2[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==2) begin
        end_delay_wire_50 <= bank_2[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==2) begin
        end_delay_wire_51 <= bank_2[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==2) begin
        end_delay_wire_52 <= bank_2[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==2) begin
        end_delay_wire_53 <= bank_2[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==2) begin
        end_delay_wire_54 <= bank_2[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==2) begin
        end_delay_wire_55 <= bank_2[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==2) begin
        end_delay_wire_56 <= bank_2[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==2) begin
        end_delay_wire_57 <= bank_2[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==2) begin
        end_delay_wire_58 <= bank_2[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==2) begin
        end_delay_wire_59 <= bank_2[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==2) begin
        end_delay_wire_60 <= bank_2[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==2) begin
        end_delay_wire_61 <= bank_2[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==2) begin
        end_delay_wire_62 <= bank_2[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==2) begin
        end_delay_wire_63 <= bank_2[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==2) begin
        end_delay_wire_64 <= bank_2[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==2) begin
        end_delay_wire_65 <= bank_2[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==2) begin
        end_delay_wire_66 <= bank_2[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==2) begin
        end_delay_wire_67 <= bank_2[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==3) begin
        end_delay_wire_44 <= bank_3[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==3) begin
        end_delay_wire_45 <= bank_3[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==3) begin
        end_delay_wire_46 <= bank_3[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==3) begin
        end_delay_wire_47 <= bank_3[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==3) begin
        end_delay_wire_48 <= bank_3[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==3) begin
        end_delay_wire_49 <= bank_3[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==3) begin
        end_delay_wire_50 <= bank_3[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==3) begin
        end_delay_wire_51 <= bank_3[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==3) begin
        end_delay_wire_52 <= bank_3[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==3) begin
        end_delay_wire_53 <= bank_3[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==3) begin
        end_delay_wire_54 <= bank_3[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==3) begin
        end_delay_wire_55 <= bank_3[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==3) begin
        end_delay_wire_56 <= bank_3[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==3) begin
        end_delay_wire_57 <= bank_3[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==3) begin
        end_delay_wire_58 <= bank_3[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==3) begin
        end_delay_wire_59 <= bank_3[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==3) begin
        end_delay_wire_60 <= bank_3[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==3) begin
        end_delay_wire_61 <= bank_3[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==3) begin
        end_delay_wire_62 <= bank_3[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==3) begin
        end_delay_wire_63 <= bank_3[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==3) begin
        end_delay_wire_64 <= bank_3[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==3) begin
        end_delay_wire_65 <= bank_3[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==3) begin
        end_delay_wire_66 <= bank_3[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==3) begin
        end_delay_wire_67 <= bank_3[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==4) begin
        end_delay_wire_44 <= bank_4[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==4) begin
        end_delay_wire_45 <= bank_4[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==4) begin
        end_delay_wire_46 <= bank_4[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==4) begin
        end_delay_wire_47 <= bank_4[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==4) begin
        end_delay_wire_48 <= bank_4[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==4) begin
        end_delay_wire_49 <= bank_4[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==4) begin
        end_delay_wire_50 <= bank_4[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==4) begin
        end_delay_wire_51 <= bank_4[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==4) begin
        end_delay_wire_52 <= bank_4[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==4) begin
        end_delay_wire_53 <= bank_4[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==4) begin
        end_delay_wire_54 <= bank_4[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==4) begin
        end_delay_wire_55 <= bank_4[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==4) begin
        end_delay_wire_56 <= bank_4[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==4) begin
        end_delay_wire_57 <= bank_4[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==4) begin
        end_delay_wire_58 <= bank_4[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==4) begin
        end_delay_wire_59 <= bank_4[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==4) begin
        end_delay_wire_60 <= bank_4[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==4) begin
        end_delay_wire_61 <= bank_4[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==4) begin
        end_delay_wire_62 <= bank_4[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==4) begin
        end_delay_wire_63 <= bank_4[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==4) begin
        end_delay_wire_64 <= bank_4[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==4) begin
        end_delay_wire_65 <= bank_4[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==4) begin
        end_delay_wire_66 <= bank_4[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==4) begin
        end_delay_wire_67 <= bank_4[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==5) begin
        end_delay_wire_44 <= bank_5[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==5) begin
        end_delay_wire_45 <= bank_5[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==5) begin
        end_delay_wire_46 <= bank_5[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==5) begin
        end_delay_wire_47 <= bank_5[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==5) begin
        end_delay_wire_48 <= bank_5[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==5) begin
        end_delay_wire_49 <= bank_5[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==5) begin
        end_delay_wire_50 <= bank_5[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==5) begin
        end_delay_wire_51 <= bank_5[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==5) begin
        end_delay_wire_52 <= bank_5[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==5) begin
        end_delay_wire_53 <= bank_5[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==5) begin
        end_delay_wire_54 <= bank_5[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==5) begin
        end_delay_wire_55 <= bank_5[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==5) begin
        end_delay_wire_56 <= bank_5[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==5) begin
        end_delay_wire_57 <= bank_5[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==5) begin
        end_delay_wire_58 <= bank_5[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==5) begin
        end_delay_wire_59 <= bank_5[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==5) begin
        end_delay_wire_60 <= bank_5[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==5) begin
        end_delay_wire_61 <= bank_5[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==5) begin
        end_delay_wire_62 <= bank_5[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==5) begin
        end_delay_wire_63 <= bank_5[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==5) begin
        end_delay_wire_64 <= bank_5[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==5) begin
        end_delay_wire_65 <= bank_5[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==5) begin
        end_delay_wire_66 <= bank_5[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==5) begin
        end_delay_wire_67 <= bank_5[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==6) begin
        end_delay_wire_44 <= bank_6[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==6) begin
        end_delay_wire_45 <= bank_6[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==6) begin
        end_delay_wire_46 <= bank_6[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==6) begin
        end_delay_wire_47 <= bank_6[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==6) begin
        end_delay_wire_48 <= bank_6[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==6) begin
        end_delay_wire_49 <= bank_6[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==6) begin
        end_delay_wire_50 <= bank_6[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==6) begin
        end_delay_wire_51 <= bank_6[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==6) begin
        end_delay_wire_52 <= bank_6[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==6) begin
        end_delay_wire_53 <= bank_6[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==6) begin
        end_delay_wire_54 <= bank_6[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==6) begin
        end_delay_wire_55 <= bank_6[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==6) begin
        end_delay_wire_56 <= bank_6[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==6) begin
        end_delay_wire_57 <= bank_6[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==6) begin
        end_delay_wire_58 <= bank_6[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==6) begin
        end_delay_wire_59 <= bank_6[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==6) begin
        end_delay_wire_60 <= bank_6[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==6) begin
        end_delay_wire_61 <= bank_6[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==6) begin
        end_delay_wire_62 <= bank_6[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==6) begin
        end_delay_wire_63 <= bank_6[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==6) begin
        end_delay_wire_64 <= bank_6[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==6) begin
        end_delay_wire_65 <= bank_6[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==6) begin
        end_delay_wire_66 <= bank_6[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==6) begin
        end_delay_wire_67 <= bank_6[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==7) begin
        end_delay_wire_44 <= bank_7[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==7) begin
        end_delay_wire_45 <= bank_7[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==7) begin
        end_delay_wire_46 <= bank_7[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==7) begin
        end_delay_wire_47 <= bank_7[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==7) begin
        end_delay_wire_48 <= bank_7[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==7) begin
        end_delay_wire_49 <= bank_7[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==7) begin
        end_delay_wire_50 <= bank_7[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==7) begin
        end_delay_wire_51 <= bank_7[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==7) begin
        end_delay_wire_52 <= bank_7[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==7) begin
        end_delay_wire_53 <= bank_7[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==7) begin
        end_delay_wire_54 <= bank_7[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==7) begin
        end_delay_wire_55 <= bank_7[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==7) begin
        end_delay_wire_56 <= bank_7[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==7) begin
        end_delay_wire_57 <= bank_7[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==7) begin
        end_delay_wire_58 <= bank_7[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==7) begin
        end_delay_wire_59 <= bank_7[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==7) begin
        end_delay_wire_60 <= bank_7[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==7) begin
        end_delay_wire_61 <= bank_7[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==7) begin
        end_delay_wire_62 <= bank_7[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==7) begin
        end_delay_wire_63 <= bank_7[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==7) begin
        end_delay_wire_64 <= bank_7[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==7) begin
        end_delay_wire_65 <= bank_7[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==7) begin
        end_delay_wire_66 <= bank_7[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==7) begin
        end_delay_wire_67 <= bank_7[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==8) begin
        end_delay_wire_44 <= bank_8[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==8) begin
        end_delay_wire_45 <= bank_8[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==8) begin
        end_delay_wire_46 <= bank_8[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==8) begin
        end_delay_wire_47 <= bank_8[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==8) begin
        end_delay_wire_48 <= bank_8[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==8) begin
        end_delay_wire_49 <= bank_8[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==8) begin
        end_delay_wire_50 <= bank_8[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==8) begin
        end_delay_wire_51 <= bank_8[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==8) begin
        end_delay_wire_52 <= bank_8[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==8) begin
        end_delay_wire_53 <= bank_8[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==8) begin
        end_delay_wire_54 <= bank_8[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==8) begin
        end_delay_wire_55 <= bank_8[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==8) begin
        end_delay_wire_56 <= bank_8[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==8) begin
        end_delay_wire_57 <= bank_8[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==8) begin
        end_delay_wire_58 <= bank_8[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==8) begin
        end_delay_wire_59 <= bank_8[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==8) begin
        end_delay_wire_60 <= bank_8[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==8) begin
        end_delay_wire_61 <= bank_8[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==8) begin
        end_delay_wire_62 <= bank_8[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==8) begin
        end_delay_wire_63 <= bank_8[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==8) begin
        end_delay_wire_64 <= bank_8[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==8) begin
        end_delay_wire_65 <= bank_8[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==8) begin
        end_delay_wire_66 <= bank_8[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==8) begin
        end_delay_wire_67 <= bank_8[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==9) begin
        end_delay_wire_44 <= bank_9[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==9) begin
        end_delay_wire_45 <= bank_9[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==9) begin
        end_delay_wire_46 <= bank_9[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==9) begin
        end_delay_wire_47 <= bank_9[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==9) begin
        end_delay_wire_48 <= bank_9[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==9) begin
        end_delay_wire_49 <= bank_9[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==9) begin
        end_delay_wire_50 <= bank_9[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==9) begin
        end_delay_wire_51 <= bank_9[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==9) begin
        end_delay_wire_52 <= bank_9[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==9) begin
        end_delay_wire_53 <= bank_9[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==9) begin
        end_delay_wire_54 <= bank_9[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==9) begin
        end_delay_wire_55 <= bank_9[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==9) begin
        end_delay_wire_56 <= bank_9[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==9) begin
        end_delay_wire_57 <= bank_9[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==9) begin
        end_delay_wire_58 <= bank_9[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==9) begin
        end_delay_wire_59 <= bank_9[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==9) begin
        end_delay_wire_60 <= bank_9[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==9) begin
        end_delay_wire_61 <= bank_9[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==9) begin
        end_delay_wire_62 <= bank_9[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==9) begin
        end_delay_wire_63 <= bank_9[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==9) begin
        end_delay_wire_64 <= bank_9[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==9) begin
        end_delay_wire_65 <= bank_9[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==9) begin
        end_delay_wire_66 <= bank_9[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==9) begin
        end_delay_wire_67 <= bank_9[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==10) begin
        end_delay_wire_44 <= bank_10[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==10) begin
        end_delay_wire_45 <= bank_10[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==10) begin
        end_delay_wire_46 <= bank_10[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==10) begin
        end_delay_wire_47 <= bank_10[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==10) begin
        end_delay_wire_48 <= bank_10[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==10) begin
        end_delay_wire_49 <= bank_10[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==10) begin
        end_delay_wire_50 <= bank_10[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==10) begin
        end_delay_wire_51 <= bank_10[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==10) begin
        end_delay_wire_52 <= bank_10[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==10) begin
        end_delay_wire_53 <= bank_10[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==10) begin
        end_delay_wire_54 <= bank_10[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==10) begin
        end_delay_wire_55 <= bank_10[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==10) begin
        end_delay_wire_56 <= bank_10[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==10) begin
        end_delay_wire_57 <= bank_10[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==10) begin
        end_delay_wire_58 <= bank_10[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==10) begin
        end_delay_wire_59 <= bank_10[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==10) begin
        end_delay_wire_60 <= bank_10[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==10) begin
        end_delay_wire_61 <= bank_10[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==10) begin
        end_delay_wire_62 <= bank_10[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==10) begin
        end_delay_wire_63 <= bank_10[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==10) begin
        end_delay_wire_64 <= bank_10[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==10) begin
        end_delay_wire_65 <= bank_10[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==10) begin
        end_delay_wire_66 <= bank_10[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==10) begin
        end_delay_wire_67 <= bank_10[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==11) begin
        end_delay_wire_44 <= bank_11[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==11) begin
        end_delay_wire_45 <= bank_11[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==11) begin
        end_delay_wire_46 <= bank_11[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==11) begin
        end_delay_wire_47 <= bank_11[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==11) begin
        end_delay_wire_48 <= bank_11[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==11) begin
        end_delay_wire_49 <= bank_11[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==11) begin
        end_delay_wire_50 <= bank_11[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==11) begin
        end_delay_wire_51 <= bank_11[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==11) begin
        end_delay_wire_52 <= bank_11[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==11) begin
        end_delay_wire_53 <= bank_11[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==11) begin
        end_delay_wire_54 <= bank_11[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==11) begin
        end_delay_wire_55 <= bank_11[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==11) begin
        end_delay_wire_56 <= bank_11[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==11) begin
        end_delay_wire_57 <= bank_11[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==11) begin
        end_delay_wire_58 <= bank_11[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==11) begin
        end_delay_wire_59 <= bank_11[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==11) begin
        end_delay_wire_60 <= bank_11[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==11) begin
        end_delay_wire_61 <= bank_11[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==11) begin
        end_delay_wire_62 <= bank_11[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==11) begin
        end_delay_wire_63 <= bank_11[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==11) begin
        end_delay_wire_64 <= bank_11[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==11) begin
        end_delay_wire_65 <= bank_11[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==11) begin
        end_delay_wire_66 <= bank_11[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==11) begin
        end_delay_wire_67 <= bank_11[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==12) begin
        end_delay_wire_44 <= bank_12[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==12) begin
        end_delay_wire_45 <= bank_12[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==12) begin
        end_delay_wire_46 <= bank_12[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==12) begin
        end_delay_wire_47 <= bank_12[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==12) begin
        end_delay_wire_48 <= bank_12[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==12) begin
        end_delay_wire_49 <= bank_12[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==12) begin
        end_delay_wire_50 <= bank_12[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==12) begin
        end_delay_wire_51 <= bank_12[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==12) begin
        end_delay_wire_52 <= bank_12[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==12) begin
        end_delay_wire_53 <= bank_12[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==12) begin
        end_delay_wire_54 <= bank_12[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==12) begin
        end_delay_wire_55 <= bank_12[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==12) begin
        end_delay_wire_56 <= bank_12[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==12) begin
        end_delay_wire_57 <= bank_12[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==12) begin
        end_delay_wire_58 <= bank_12[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==12) begin
        end_delay_wire_59 <= bank_12[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==12) begin
        end_delay_wire_60 <= bank_12[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==12) begin
        end_delay_wire_61 <= bank_12[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==12) begin
        end_delay_wire_62 <= bank_12[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==12) begin
        end_delay_wire_63 <= bank_12[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==12) begin
        end_delay_wire_64 <= bank_12[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==12) begin
        end_delay_wire_65 <= bank_12[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==12) begin
        end_delay_wire_66 <= bank_12[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==12) begin
        end_delay_wire_67 <= bank_12[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==13) begin
        end_delay_wire_44 <= bank_13[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==13) begin
        end_delay_wire_45 <= bank_13[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==13) begin
        end_delay_wire_46 <= bank_13[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==13) begin
        end_delay_wire_47 <= bank_13[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==13) begin
        end_delay_wire_48 <= bank_13[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==13) begin
        end_delay_wire_49 <= bank_13[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==13) begin
        end_delay_wire_50 <= bank_13[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==13) begin
        end_delay_wire_51 <= bank_13[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==13) begin
        end_delay_wire_52 <= bank_13[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==13) begin
        end_delay_wire_53 <= bank_13[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==13) begin
        end_delay_wire_54 <= bank_13[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==13) begin
        end_delay_wire_55 <= bank_13[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==13) begin
        end_delay_wire_56 <= bank_13[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==13) begin
        end_delay_wire_57 <= bank_13[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==13) begin
        end_delay_wire_58 <= bank_13[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==13) begin
        end_delay_wire_59 <= bank_13[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==13) begin
        end_delay_wire_60 <= bank_13[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==13) begin
        end_delay_wire_61 <= bank_13[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==13) begin
        end_delay_wire_62 <= bank_13[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==13) begin
        end_delay_wire_63 <= bank_13[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==13) begin
        end_delay_wire_64 <= bank_13[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==13) begin
        end_delay_wire_65 <= bank_13[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==13) begin
        end_delay_wire_66 <= bank_13[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==13) begin
        end_delay_wire_67 <= bank_13[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==14) begin
        end_delay_wire_44 <= bank_14[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==14) begin
        end_delay_wire_45 <= bank_14[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==14) begin
        end_delay_wire_46 <= bank_14[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==14) begin
        end_delay_wire_47 <= bank_14[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==14) begin
        end_delay_wire_48 <= bank_14[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==14) begin
        end_delay_wire_49 <= bank_14[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==14) begin
        end_delay_wire_50 <= bank_14[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==14) begin
        end_delay_wire_51 <= bank_14[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==14) begin
        end_delay_wire_52 <= bank_14[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==14) begin
        end_delay_wire_53 <= bank_14[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==14) begin
        end_delay_wire_54 <= bank_14[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==14) begin
        end_delay_wire_55 <= bank_14[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==14) begin
        end_delay_wire_56 <= bank_14[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==14) begin
        end_delay_wire_57 <= bank_14[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==14) begin
        end_delay_wire_58 <= bank_14[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==14) begin
        end_delay_wire_59 <= bank_14[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==14) begin
        end_delay_wire_60 <= bank_14[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==14) begin
        end_delay_wire_61 <= bank_14[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==14) begin
        end_delay_wire_62 <= bank_14[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==14) begin
        end_delay_wire_63 <= bank_14[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==14) begin
        end_delay_wire_64 <= bank_14[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==14) begin
        end_delay_wire_65 <= bank_14[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==14) begin
        end_delay_wire_66 <= bank_14[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==14) begin
        end_delay_wire_67 <= bank_14[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==15) begin
        end_delay_wire_44 <= bank_15[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==15) begin
        end_delay_wire_45 <= bank_15[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==15) begin
        end_delay_wire_46 <= bank_15[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==15) begin
        end_delay_wire_47 <= bank_15[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==15) begin
        end_delay_wire_48 <= bank_15[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==15) begin
        end_delay_wire_49 <= bank_15[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==15) begin
        end_delay_wire_50 <= bank_15[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==15) begin
        end_delay_wire_51 <= bank_15[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==15) begin
        end_delay_wire_52 <= bank_15[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==15) begin
        end_delay_wire_53 <= bank_15[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==15) begin
        end_delay_wire_54 <= bank_15[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==15) begin
        end_delay_wire_55 <= bank_15[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==15) begin
        end_delay_wire_56 <= bank_15[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==15) begin
        end_delay_wire_57 <= bank_15[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==15) begin
        end_delay_wire_58 <= bank_15[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==15) begin
        end_delay_wire_59 <= bank_15[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==15) begin
        end_delay_wire_60 <= bank_15[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==15) begin
        end_delay_wire_61 <= bank_15[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==15) begin
        end_delay_wire_62 <= bank_15[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==15) begin
        end_delay_wire_63 <= bank_15[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==15) begin
        end_delay_wire_64 <= bank_15[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==15) begin
        end_delay_wire_65 <= bank_15[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==15) begin
        end_delay_wire_66 <= bank_15[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==15) begin
        end_delay_wire_67 <= bank_15[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==16) begin
        end_delay_wire_44 <= bank_16[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==16) begin
        end_delay_wire_45 <= bank_16[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==16) begin
        end_delay_wire_46 <= bank_16[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==16) begin
        end_delay_wire_47 <= bank_16[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==16) begin
        end_delay_wire_48 <= bank_16[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==16) begin
        end_delay_wire_49 <= bank_16[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==16) begin
        end_delay_wire_50 <= bank_16[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==16) begin
        end_delay_wire_51 <= bank_16[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==16) begin
        end_delay_wire_52 <= bank_16[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==16) begin
        end_delay_wire_53 <= bank_16[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==16) begin
        end_delay_wire_54 <= bank_16[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==16) begin
        end_delay_wire_55 <= bank_16[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==16) begin
        end_delay_wire_56 <= bank_16[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==16) begin
        end_delay_wire_57 <= bank_16[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==16) begin
        end_delay_wire_58 <= bank_16[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==16) begin
        end_delay_wire_59 <= bank_16[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==16) begin
        end_delay_wire_60 <= bank_16[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==16) begin
        end_delay_wire_61 <= bank_16[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==16) begin
        end_delay_wire_62 <= bank_16[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==16) begin
        end_delay_wire_63 <= bank_16[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==16) begin
        end_delay_wire_64 <= bank_16[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==16) begin
        end_delay_wire_65 <= bank_16[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==16) begin
        end_delay_wire_66 <= bank_16[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==16) begin
        end_delay_wire_67 <= bank_16[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==17) begin
        end_delay_wire_44 <= bank_17[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==17) begin
        end_delay_wire_45 <= bank_17[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==17) begin
        end_delay_wire_46 <= bank_17[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==17) begin
        end_delay_wire_47 <= bank_17[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==17) begin
        end_delay_wire_48 <= bank_17[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==17) begin
        end_delay_wire_49 <= bank_17[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==17) begin
        end_delay_wire_50 <= bank_17[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==17) begin
        end_delay_wire_51 <= bank_17[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==17) begin
        end_delay_wire_52 <= bank_17[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==17) begin
        end_delay_wire_53 <= bank_17[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==17) begin
        end_delay_wire_54 <= bank_17[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==17) begin
        end_delay_wire_55 <= bank_17[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==17) begin
        end_delay_wire_56 <= bank_17[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==17) begin
        end_delay_wire_57 <= bank_17[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==17) begin
        end_delay_wire_58 <= bank_17[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==17) begin
        end_delay_wire_59 <= bank_17[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==17) begin
        end_delay_wire_60 <= bank_17[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==17) begin
        end_delay_wire_61 <= bank_17[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==17) begin
        end_delay_wire_62 <= bank_17[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==17) begin
        end_delay_wire_63 <= bank_17[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==17) begin
        end_delay_wire_64 <= bank_17[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==17) begin
        end_delay_wire_65 <= bank_17[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==17) begin
        end_delay_wire_66 <= bank_17[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==17) begin
        end_delay_wire_67 <= bank_17[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==18) begin
        end_delay_wire_44 <= bank_18[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==18) begin
        end_delay_wire_45 <= bank_18[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==18) begin
        end_delay_wire_46 <= bank_18[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==18) begin
        end_delay_wire_47 <= bank_18[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==18) begin
        end_delay_wire_48 <= bank_18[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==18) begin
        end_delay_wire_49 <= bank_18[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==18) begin
        end_delay_wire_50 <= bank_18[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==18) begin
        end_delay_wire_51 <= bank_18[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==18) begin
        end_delay_wire_52 <= bank_18[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==18) begin
        end_delay_wire_53 <= bank_18[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==18) begin
        end_delay_wire_54 <= bank_18[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==18) begin
        end_delay_wire_55 <= bank_18[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==18) begin
        end_delay_wire_56 <= bank_18[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==18) begin
        end_delay_wire_57 <= bank_18[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==18) begin
        end_delay_wire_58 <= bank_18[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==18) begin
        end_delay_wire_59 <= bank_18[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==18) begin
        end_delay_wire_60 <= bank_18[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==18) begin
        end_delay_wire_61 <= bank_18[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==18) begin
        end_delay_wire_62 <= bank_18[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==18) begin
        end_delay_wire_63 <= bank_18[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==18) begin
        end_delay_wire_64 <= bank_18[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==18) begin
        end_delay_wire_65 <= bank_18[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==18) begin
        end_delay_wire_66 <= bank_18[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==18) begin
        end_delay_wire_67 <= bank_18[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==19) begin
        end_delay_wire_44 <= bank_19[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==19) begin
        end_delay_wire_45 <= bank_19[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==19) begin
        end_delay_wire_46 <= bank_19[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==19) begin
        end_delay_wire_47 <= bank_19[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==19) begin
        end_delay_wire_48 <= bank_19[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==19) begin
        end_delay_wire_49 <= bank_19[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==19) begin
        end_delay_wire_50 <= bank_19[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==19) begin
        end_delay_wire_51 <= bank_19[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==19) begin
        end_delay_wire_52 <= bank_19[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==19) begin
        end_delay_wire_53 <= bank_19[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==19) begin
        end_delay_wire_54 <= bank_19[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==19) begin
        end_delay_wire_55 <= bank_19[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==19) begin
        end_delay_wire_56 <= bank_19[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==19) begin
        end_delay_wire_57 <= bank_19[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==19) begin
        end_delay_wire_58 <= bank_19[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==19) begin
        end_delay_wire_59 <= bank_19[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==19) begin
        end_delay_wire_60 <= bank_19[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==19) begin
        end_delay_wire_61 <= bank_19[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==19) begin
        end_delay_wire_62 <= bank_19[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==19) begin
        end_delay_wire_63 <= bank_19[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==19) begin
        end_delay_wire_64 <= bank_19[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==19) begin
        end_delay_wire_65 <= bank_19[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==19) begin
        end_delay_wire_66 <= bank_19[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==19) begin
        end_delay_wire_67 <= bank_19[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==20) begin
        end_delay_wire_44 <= bank_20[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==20) begin
        end_delay_wire_45 <= bank_20[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==20) begin
        end_delay_wire_46 <= bank_20[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==20) begin
        end_delay_wire_47 <= bank_20[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==20) begin
        end_delay_wire_48 <= bank_20[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==20) begin
        end_delay_wire_49 <= bank_20[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==20) begin
        end_delay_wire_50 <= bank_20[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==20) begin
        end_delay_wire_51 <= bank_20[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==20) begin
        end_delay_wire_52 <= bank_20[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==20) begin
        end_delay_wire_53 <= bank_20[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==20) begin
        end_delay_wire_54 <= bank_20[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==20) begin
        end_delay_wire_55 <= bank_20[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==20) begin
        end_delay_wire_56 <= bank_20[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==20) begin
        end_delay_wire_57 <= bank_20[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==20) begin
        end_delay_wire_58 <= bank_20[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==20) begin
        end_delay_wire_59 <= bank_20[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==20) begin
        end_delay_wire_60 <= bank_20[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==20) begin
        end_delay_wire_61 <= bank_20[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==20) begin
        end_delay_wire_62 <= bank_20[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==20) begin
        end_delay_wire_63 <= bank_20[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==20) begin
        end_delay_wire_64 <= bank_20[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==20) begin
        end_delay_wire_65 <= bank_20[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==20) begin
        end_delay_wire_66 <= bank_20[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==20) begin
        end_delay_wire_67 <= bank_20[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==21) begin
        end_delay_wire_44 <= bank_21[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==21) begin
        end_delay_wire_45 <= bank_21[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==21) begin
        end_delay_wire_46 <= bank_21[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==21) begin
        end_delay_wire_47 <= bank_21[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==21) begin
        end_delay_wire_48 <= bank_21[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==21) begin
        end_delay_wire_49 <= bank_21[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==21) begin
        end_delay_wire_50 <= bank_21[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==21) begin
        end_delay_wire_51 <= bank_21[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==21) begin
        end_delay_wire_52 <= bank_21[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==21) begin
        end_delay_wire_53 <= bank_21[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==21) begin
        end_delay_wire_54 <= bank_21[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==21) begin
        end_delay_wire_55 <= bank_21[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==21) begin
        end_delay_wire_56 <= bank_21[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==21) begin
        end_delay_wire_57 <= bank_21[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==21) begin
        end_delay_wire_58 <= bank_21[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==21) begin
        end_delay_wire_59 <= bank_21[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==21) begin
        end_delay_wire_60 <= bank_21[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==21) begin
        end_delay_wire_61 <= bank_21[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==21) begin
        end_delay_wire_62 <= bank_21[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==21) begin
        end_delay_wire_63 <= bank_21[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==21) begin
        end_delay_wire_64 <= bank_21[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==21) begin
        end_delay_wire_65 <= bank_21[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==21) begin
        end_delay_wire_66 <= bank_21[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==21) begin
        end_delay_wire_67 <= bank_21[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==22) begin
        end_delay_wire_44 <= bank_22[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==22) begin
        end_delay_wire_45 <= bank_22[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==22) begin
        end_delay_wire_46 <= bank_22[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==22) begin
        end_delay_wire_47 <= bank_22[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==22) begin
        end_delay_wire_48 <= bank_22[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==22) begin
        end_delay_wire_49 <= bank_22[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==22) begin
        end_delay_wire_50 <= bank_22[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==22) begin
        end_delay_wire_51 <= bank_22[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==22) begin
        end_delay_wire_52 <= bank_22[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==22) begin
        end_delay_wire_53 <= bank_22[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==22) begin
        end_delay_wire_54 <= bank_22[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==22) begin
        end_delay_wire_55 <= bank_22[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==22) begin
        end_delay_wire_56 <= bank_22[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==22) begin
        end_delay_wire_57 <= bank_22[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==22) begin
        end_delay_wire_58 <= bank_22[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==22) begin
        end_delay_wire_59 <= bank_22[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==22) begin
        end_delay_wire_60 <= bank_22[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==22) begin
        end_delay_wire_61 <= bank_22[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==22) begin
        end_delay_wire_62 <= bank_22[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==22) begin
        end_delay_wire_63 <= bank_22[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==22) begin
        end_delay_wire_64 <= bank_22[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==22) begin
        end_delay_wire_65 <= bank_22[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==22) begin
        end_delay_wire_66 <= bank_22[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==22) begin
        end_delay_wire_67 <= bank_22[addr24];
    end
    if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_bank_selector.out==23) begin
        end_delay_wire_44 <= bank_23[addr1];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_bank_selector.out==23) begin
        end_delay_wire_45 <= bank_23[addr2];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_bank_selector.out==23) begin
        end_delay_wire_46 <= bank_23[addr3];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_bank_selector.out==23) begin
        end_delay_wire_47 <= bank_23[addr4];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_bank_selector.out==23) begin
        end_delay_wire_48 <= bank_23[addr5];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_bank_selector.out==23) begin
        end_delay_wire_49 <= bank_23[addr6];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_bank_selector.out==23) begin
        end_delay_wire_50 <= bank_23[addr7];
    end
    else if (op_hcompute_conv_stencil_3_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_bank_selector.out==23) begin
        end_delay_wire_51 <= bank_23[addr8];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_bank_selector.out==23) begin
        end_delay_wire_52 <= bank_23[addr9];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_bank_selector.out==23) begin
        end_delay_wire_53 <= bank_23[addr10];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_bank_selector.out==23) begin
        end_delay_wire_54 <= bank_23[addr11];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_bank_selector.out==23) begin
        end_delay_wire_55 <= bank_23[addr12];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_bank_selector.out==23) begin
        end_delay_wire_56 <= bank_23[addr13];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_bank_selector.out==23) begin
        end_delay_wire_57 <= bank_23[addr14];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_bank_selector.out==23) begin
        end_delay_wire_58 <= bank_23[addr15];
    end
    else if (op_hcompute_conv_stencil_4_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_bank_selector.out==23) begin
        end_delay_wire_59 <= bank_23[addr16];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_bank_selector.out==23) begin
        end_delay_wire_60 <= bank_23[addr17];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_bank_selector.out==23) begin
        end_delay_wire_61 <= bank_23[addr18];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_bank_selector.out==23) begin
        end_delay_wire_62 <= bank_23[addr19];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_bank_selector.out==23) begin
        end_delay_wire_63 <= bank_23[addr20];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_bank_selector.out==23) begin
        end_delay_wire_64 <= bank_23[addr21];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_bank_selector.out==23) begin
        end_delay_wire_65 <= bank_23[addr22];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_bank_selector.out==23) begin
        end_delay_wire_66 <= bank_23[addr23];
    end
    else if (op_hcompute_conv_stencil_5_read_ren_fsm_out &&hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_bank_selector.out==23) begin
        end_delay_wire_67 <= bank_23[addr24];
    end
  end

endmodule

