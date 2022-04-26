  // min: { [16017] }
  // max: { [16827] }

  // min: { [1002] }
  // max: { [12575] }

  // min: { [2] }
  // max: { [812] }

  // min: { [16017] }
  // max: { [16827] }

  // min: { [16017] }
  // max: { [16827] }

  // min: { [2] }
  // max: { [812] }

  // min: { [1002] }
  // max: { [12575] }

  // min: { [1] }
  // max: { [929] }

  // min: { [16017] }
  // max: { [16827] }

  // min: { [1] }
  // max: { [929] }

  // min: { [2] }
  // max: { [812] }

  // min: { [2] }
  // max: { [812] }

  // min: { [2] }
  // max: { [812] }

  // min: { [1002] }
  // max: { [12575] }

  // min: { [1] }
  // max: { [929] }

  // min: { [1] }
  // max: { [929] }

  // min: { [1] }
  // max: { [929] }

  // min: { [1] }
  // max: { [929] }

  // min: { [16017] }
  // max: { [16827] }

  // min: { [16017] }
  // max: { [16827] }

  // min: { [16017] }
  // max: { [16827] }

  // min: { [1002] }
  // max: { [12575] }

  // min: { [1002] }
  // max: { [12575] }

  // min: { [2] }
  // max: { [648] }

  // min: { [1] }
  // max: { [929] }

  // min: { [2] }
  // max: { [812] }

  // min: { [2] }
  // max: { [812] }

  // min: { [1002] }
  // max: { [12575] }

  // min: { [1002] }
  // max: { [12575] }

  // min: { [1] }
  // max: { [929] }

  // min: { [2] }
  // max: { [812] }

  // min: { [1002] }
  // max: { [12575] }

  // min: { [16017] }
  // max: { [16827] }

  // sched min: { [1] }
  // sched max: { [16827] }
// conv_stencil has embarassing partition: 1

module conv_stencil_embarassing_bank_selector(input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0]);
  assign out = 0+bank_index_0*1;

endmodule

// { op_hcompute_conv_stencil_10[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1019 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_10_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_10_write_ctrl_vars[4:0], output op_hcompute_conv_stencil_10_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_10_write_wen =(on && on2 && op_hcompute_conv_stencil_10_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_10_write_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_10_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_10_write_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_10_write_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_10_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_10_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_10_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_10_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_10_write_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1018) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_10_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_10_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_10_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_10_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_10_write_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_10_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_10_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_10_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_10_write_ctrl_vars[1] <= op_hcompute_conv_stencil_10_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_10_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_10_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_10_write_ctrl_vars[2] <= op_hcompute_conv_stencil_10_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_10_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_10_write_ctrl_vars[3] <= op_hcompute_conv_stencil_10_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_10_write_ctrl_vars[4] <= op_hcompute_conv_stencil_10_write_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_11[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1019 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_11_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_11_write_ctrl_vars[4:0], output op_hcompute_conv_stencil_11_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_11_write_wen =(on && on2 && op_hcompute_conv_stencil_11_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_11_write_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_11_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_11_write_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_11_write_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_11_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_11_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_11_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_11_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_11_write_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1018) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_11_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_11_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_11_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_11_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_11_write_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_11_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_11_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_11_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_11_write_ctrl_vars[1] <= op_hcompute_conv_stencil_11_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_11_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_11_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_11_write_ctrl_vars[2] <= op_hcompute_conv_stencil_11_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_11_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_11_write_ctrl_vars[3] <= op_hcompute_conv_stencil_11_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_11_write_ctrl_vars[4] <= op_hcompute_conv_stencil_11_write_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_12[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1019 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_12_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_12_write_ctrl_vars[4:0], output op_hcompute_conv_stencil_12_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_12_write_wen =(on && on2 && op_hcompute_conv_stencil_12_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_12_write_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_12_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_12_write_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_12_write_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_12_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_12_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_12_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_12_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_12_write_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1018) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_12_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_12_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_12_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_12_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_12_write_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_12_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_12_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_12_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_12_write_ctrl_vars[1] <= op_hcompute_conv_stencil_12_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_12_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_12_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_12_write_ctrl_vars[2] <= op_hcompute_conv_stencil_12_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_12_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_12_write_ctrl_vars[3] <= op_hcompute_conv_stencil_12_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_12_write_ctrl_vars[4] <= op_hcompute_conv_stencil_12_write_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_13[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1019 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_13_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_13_write_ctrl_vars[4:0], output op_hcompute_conv_stencil_13_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_13_write_wen =(on && on2 && op_hcompute_conv_stencil_13_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_13_write_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_13_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_13_write_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_13_write_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_13_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_13_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_13_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_13_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_13_write_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1018) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_13_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_13_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_13_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_13_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_13_write_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_13_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_13_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_13_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_13_write_ctrl_vars[1] <= op_hcompute_conv_stencil_13_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_13_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_13_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_13_write_ctrl_vars[2] <= op_hcompute_conv_stencil_13_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_13_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_13_write_ctrl_vars[3] <= op_hcompute_conv_stencil_13_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_13_write_ctrl_vars[4] <= op_hcompute_conv_stencil_13_write_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_14[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1019 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_14_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_14_write_ctrl_vars[4:0], output op_hcompute_conv_stencil_14_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_14_write_wen =(on && on2 && op_hcompute_conv_stencil_14_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_14_write_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_14_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_14_write_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_14_write_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_14_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_14_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_14_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_14_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_14_write_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1018) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_14_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_14_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_14_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_14_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_14_write_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_14_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_14_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_14_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_14_write_ctrl_vars[1] <= op_hcompute_conv_stencil_14_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_14_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_14_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_14_write_ctrl_vars[2] <= op_hcompute_conv_stencil_14_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_14_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_14_write_ctrl_vars[3] <= op_hcompute_conv_stencil_14_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_14_write_ctrl_vars[4] <= op_hcompute_conv_stencil_14_write_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_15[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1019 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_15_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_15_write_ctrl_vars[4:0], output op_hcompute_conv_stencil_15_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_15_write_wen =(on && on2 && op_hcompute_conv_stencil_15_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_15_write_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_15_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_15_write_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_15_write_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_15_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_15_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_15_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_15_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_15_write_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1018) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_15_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_15_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_15_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_15_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_15_write_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_15_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_15_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_15_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_15_write_ctrl_vars[1] <= op_hcompute_conv_stencil_15_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_15_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_15_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_15_write_ctrl_vars[2] <= op_hcompute_conv_stencil_15_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_15_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_15_write_ctrl_vars[3] <= op_hcompute_conv_stencil_15_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_15_write_ctrl_vars[4] <= op_hcompute_conv_stencil_15_write_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_3[root, conv_s0_y, conv_s0_x] -> [(2 + 29conv_s0_y + conv_s0_x)] }
module conv_stencil_op_hcompute_conv_stencil_3_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_3_write_ctrl_vars[2:0], output op_hcompute_conv_stencil_3_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_conv_stencil_3_write_wen =(on && on2 && op_hcompute_conv_stencil_3_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_3_write_ctrl_vars[1]<=27 && op_hcompute_conv_stencil_3_write_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_3_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_3_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_3_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_3_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_3_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_3_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 28) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[1] <= op_hcompute_conv_stencil_3_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_conv_stencil_3_write_ctrl_vars[2] <= op_hcompute_conv_stencil_3_write_ctrl_vars[2] + 1;
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
// { op_hcompute_conv_stencil_4[root, conv_s0_y, conv_s0_x] -> [(2 + 29conv_s0_y + conv_s0_x)] }
module conv_stencil_op_hcompute_conv_stencil_4_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_4_write_ctrl_vars[2:0], output op_hcompute_conv_stencil_4_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_conv_stencil_4_write_wen =(on && on2 && op_hcompute_conv_stencil_4_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_4_write_ctrl_vars[1]<=27 && op_hcompute_conv_stencil_4_write_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_4_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_4_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_4_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_4_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_4_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_4_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 28) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[1] <= op_hcompute_conv_stencil_4_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_conv_stencil_4_write_ctrl_vars[2] <= op_hcompute_conv_stencil_4_write_ctrl_vars[2] + 1;
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
// { op_hcompute_conv_stencil_5[root, conv_s0_y, conv_s0_x] -> [(2 + 29conv_s0_y + conv_s0_x)] }
module conv_stencil_op_hcompute_conv_stencil_5_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_5_write_ctrl_vars[2:0], output op_hcompute_conv_stencil_5_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_conv_stencil_5_write_wen =(on && on2 && op_hcompute_conv_stencil_5_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_5_write_ctrl_vars[1]<=27 && op_hcompute_conv_stencil_5_write_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_5_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_5_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_5_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_5_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_5_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_5_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 28) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[1] <= op_hcompute_conv_stencil_5_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_conv_stencil_5_write_ctrl_vars[2] <= op_hcompute_conv_stencil_5_write_ctrl_vars[2] + 1;
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
// { op_hcompute_conv_stencil_6[root, conv_s0_y, conv_s0_x] -> [(2 + 29conv_s0_y + conv_s0_x)] }
module conv_stencil_op_hcompute_conv_stencil_6_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_6_write_ctrl_vars[2:0], output op_hcompute_conv_stencil_6_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_conv_stencil_6_write_wen =(on && on2 && op_hcompute_conv_stencil_6_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_6_write_ctrl_vars[1]<=27 && op_hcompute_conv_stencil_6_write_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_6_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_6_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_6_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_6_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_6_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_6_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 28) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_conv_stencil_6_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_6_write_ctrl_vars[1] <= op_hcompute_conv_stencil_6_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_conv_stencil_6_write_ctrl_vars[2] <= op_hcompute_conv_stencil_6_write_ctrl_vars[2] + 1;
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
// { op_hcompute_conv_stencil_7[root, conv_s0_y, conv_s0_x] -> [(2 + 29conv_s0_y + conv_s0_x)] }
module conv_stencil_op_hcompute_conv_stencil_7_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_7_write_ctrl_vars[2:0], output op_hcompute_conv_stencil_7_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_conv_stencil_7_write_wen =(on && on2 && op_hcompute_conv_stencil_7_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_7_write_ctrl_vars[1]<=27 && op_hcompute_conv_stencil_7_write_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_7_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_7_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_7_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_7_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_7_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_7_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 28) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_conv_stencil_7_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_7_write_ctrl_vars[1] <= op_hcompute_conv_stencil_7_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_conv_stencil_7_write_ctrl_vars[2] <= op_hcompute_conv_stencil_7_write_ctrl_vars[2] + 1;
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
// { op_hcompute_conv_stencil_8[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1019 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_8_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_8_write_ctrl_vars[4:0], output op_hcompute_conv_stencil_8_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_8_write_wen =(on && on2 && op_hcompute_conv_stencil_8_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_8_write_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_8_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_8_write_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_8_write_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_8_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_8_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_8_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_8_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_8_write_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1018) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_8_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_8_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_8_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_8_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_8_write_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_8_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_8_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_8_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_8_write_ctrl_vars[1] <= op_hcompute_conv_stencil_8_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_8_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_8_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_8_write_ctrl_vars[2] <= op_hcompute_conv_stencil_8_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_8_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_8_write_ctrl_vars[3] <= op_hcompute_conv_stencil_8_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_8_write_ctrl_vars[4] <= op_hcompute_conv_stencil_8_write_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_9[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1019 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_9_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_9_write_ctrl_vars[4:0], output op_hcompute_conv_stencil_9_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_9_write_wen =(on && on2 && op_hcompute_conv_stencil_9_write_ctrl_vars[0]==0 && op_hcompute_conv_stencil_9_write_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_9_write_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_9_write_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_9_write_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_9_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_9_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_9_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_9_write_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_9_write_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1018) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_9_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_9_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_9_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_9_write_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_9_write_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_9_write_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_9_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_9_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_9_write_ctrl_vars[1] <= op_hcompute_conv_stencil_9_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_9_write_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_9_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_9_write_ctrl_vars[2] <= op_hcompute_conv_stencil_9_write_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_9_write_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_9_write_ctrl_vars[3] <= op_hcompute_conv_stencil_9_write_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_9_write_ctrl_vars[4] <= op_hcompute_conv_stencil_9_write_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_10[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_10_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_10_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_10_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_10_read_ren =(on && on2 && op_hcompute_conv_stencil_10_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_10_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_10_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_10_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_10_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_10_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_10_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_10_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_10_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_10_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_10_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_10_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_10_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[1] <= op_hcompute_conv_stencil_10_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[2] <= op_hcompute_conv_stencil_10_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[3] <= op_hcompute_conv_stencil_10_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[4] <= op_hcompute_conv_stencil_10_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_11[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_11_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_11_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_11_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_11_read_ren =(on && on2 && op_hcompute_conv_stencil_11_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_11_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_11_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_11_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_11_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_11_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_11_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_11_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_11_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_11_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_11_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_11_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_11_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[1] <= op_hcompute_conv_stencil_11_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[2] <= op_hcompute_conv_stencil_11_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[3] <= op_hcompute_conv_stencil_11_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[4] <= op_hcompute_conv_stencil_11_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_12[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_12_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_12_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_12_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_12_read_ren =(on && on2 && op_hcompute_conv_stencil_12_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_12_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_12_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_12_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_12_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_12_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_12_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_12_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_12_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_12_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_12_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_12_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_12_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[1] <= op_hcompute_conv_stencil_12_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[2] <= op_hcompute_conv_stencil_12_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[3] <= op_hcompute_conv_stencil_12_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[4] <= op_hcompute_conv_stencil_12_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_13[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_13_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_13_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_13_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_13_read_ren =(on && on2 && op_hcompute_conv_stencil_13_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_13_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_13_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_13_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_13_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_13_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_13_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_13_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_13_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_13_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_13_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_13_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_13_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[1] <= op_hcompute_conv_stencil_13_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[2] <= op_hcompute_conv_stencil_13_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[3] <= op_hcompute_conv_stencil_13_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[4] <= op_hcompute_conv_stencil_13_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_14[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_14_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_14_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_14_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_14_read_ren =(on && on2 && op_hcompute_conv_stencil_14_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_14_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_14_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_14_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_14_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_14_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_14_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_14_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_14_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_14_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_14_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_14_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_14_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[1] <= op_hcompute_conv_stencil_14_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[2] <= op_hcompute_conv_stencil_14_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[3] <= op_hcompute_conv_stencil_14_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[4] <= op_hcompute_conv_stencil_14_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_15[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_15_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_15_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_15_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_15_read_ren =(on && on2 && op_hcompute_conv_stencil_15_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_15_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_15_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_15_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_15_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_15_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_15_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_15_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_15_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_15_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_15_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_15_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_15_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[1] <= op_hcompute_conv_stencil_15_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[2] <= op_hcompute_conv_stencil_15_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[3] <= op_hcompute_conv_stencil_15_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[4] <= op_hcompute_conv_stencil_15_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_8[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_8_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_8_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_8_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_8_read_ren =(on && on2 && op_hcompute_conv_stencil_8_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_8_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_8_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_8_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_8_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_8_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_8_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_8_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_8_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_8_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_8_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_8_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_8_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[1] <= op_hcompute_conv_stencil_8_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[2] <= op_hcompute_conv_stencil_8_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[3] <= op_hcompute_conv_stencil_8_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[4] <= op_hcompute_conv_stencil_8_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_9[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module conv_stencil_op_hcompute_conv_stencil_9_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_9_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_9_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_9_read_ren =(on && on2 && op_hcompute_conv_stencil_9_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_9_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_9_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_9_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_9_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_9_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_9_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_9_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_9_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_9_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_9_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_9_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_9_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[1] <= op_hcompute_conv_stencil_9_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[2] <= op_hcompute_conv_stencil_9_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[3] <= op_hcompute_conv_stencil_9_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[4] <= op_hcompute_conv_stencil_9_read_ctrl_vars[4] + 1;
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
// { op_hcompute_hw_output_stencil_3[root, hw_output_s0_y_yi_3, hw_output_s0_x_xi_3] -> [(16017 + 29hw_output_s0_y_yi_3 + hw_output_s0_x_xi_3)] }
module conv_stencil_op_hcompute_hw_output_stencil_3_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_output_stencil_3_read_ctrl_vars[2:0], output op_hcompute_hw_output_stencil_3_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_output_stencil_3_read_ren =(on && on2 && op_hcompute_hw_output_stencil_3_read_ctrl_vars[0]==0 && op_hcompute_hw_output_stencil_3_read_ctrl_vars[1]<=27 && op_hcompute_hw_output_stencil_3_read_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_output_stencil_3_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_output_stencil_3_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_output_stencil_3_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==16016) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_output_stencil_3_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_output_stencil_3_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_output_stencil_3_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 28) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_output_stencil_3_read_ctrl_vars[2]<= 0;
          op_hcompute_hw_output_stencil_3_read_ctrl_vars[1] <= op_hcompute_hw_output_stencil_3_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_output_stencil_3_read_ctrl_vars[2] <= op_hcompute_hw_output_stencil_3_read_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_output_stencil_4[root, hw_output_s0_y_yi_4, hw_output_s0_x_xi_4] -> [(16017 + 29hw_output_s0_y_yi_4 + hw_output_s0_x_xi_4)] }
module conv_stencil_op_hcompute_hw_output_stencil_4_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_output_stencil_4_read_ctrl_vars[2:0], output op_hcompute_hw_output_stencil_4_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_output_stencil_4_read_ren =(on && on2 && op_hcompute_hw_output_stencil_4_read_ctrl_vars[0]==0 && op_hcompute_hw_output_stencil_4_read_ctrl_vars[1]<=27 && op_hcompute_hw_output_stencil_4_read_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_output_stencil_4_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_output_stencil_4_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_output_stencil_4_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==16016) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_output_stencil_4_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_output_stencil_4_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_output_stencil_4_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 28) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_output_stencil_4_read_ctrl_vars[2]<= 0;
          op_hcompute_hw_output_stencil_4_read_ctrl_vars[1] <= op_hcompute_hw_output_stencil_4_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_output_stencil_4_read_ctrl_vars[2] <= op_hcompute_hw_output_stencil_4_read_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_output_stencil_5[root, hw_output_s0_y_yi_5, hw_output_s0_x_xi_5] -> [(16017 + 29hw_output_s0_y_yi_5 + hw_output_s0_x_xi_5)] }
module conv_stencil_op_hcompute_hw_output_stencil_5_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_output_stencil_5_read_ctrl_vars[2:0], output op_hcompute_hw_output_stencil_5_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_output_stencil_5_read_ren =(on && on2 && op_hcompute_hw_output_stencil_5_read_ctrl_vars[0]==0 && op_hcompute_hw_output_stencil_5_read_ctrl_vars[1]<=27 && op_hcompute_hw_output_stencil_5_read_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_output_stencil_5_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_output_stencil_5_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_output_stencil_5_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==16016) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_output_stencil_5_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_output_stencil_5_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_output_stencil_5_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 28) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_output_stencil_5_read_ctrl_vars[2]<= 0;
          op_hcompute_hw_output_stencil_5_read_ctrl_vars[1] <= op_hcompute_hw_output_stencil_5_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_output_stencil_5_read_ctrl_vars[2] <= op_hcompute_hw_output_stencil_5_read_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_output_stencil_6[root, hw_output_s0_y_yi_6, hw_output_s0_x_xi_6] -> [(16017 + 29hw_output_s0_y_yi_6 + hw_output_s0_x_xi_6)] }
module conv_stencil_op_hcompute_hw_output_stencil_6_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_output_stencil_6_read_ctrl_vars[2:0], output op_hcompute_hw_output_stencil_6_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_output_stencil_6_read_ren =(on && on2 && op_hcompute_hw_output_stencil_6_read_ctrl_vars[0]==0 && op_hcompute_hw_output_stencil_6_read_ctrl_vars[1]<=27 && op_hcompute_hw_output_stencil_6_read_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_output_stencil_6_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_output_stencil_6_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_output_stencil_6_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==16016) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_output_stencil_6_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_output_stencil_6_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_output_stencil_6_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 28) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_output_stencil_6_read_ctrl_vars[2]<= 0;
          op_hcompute_hw_output_stencil_6_read_ctrl_vars[1] <= op_hcompute_hw_output_stencil_6_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_output_stencil_6_read_ctrl_vars[2] <= op_hcompute_hw_output_stencil_6_read_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_output_stencil_7[root, hw_output_s0_y_yi_7, hw_output_s0_x_xi_7] -> [(16017 + 29hw_output_s0_y_yi_7 + hw_output_s0_x_xi_7)] }
module conv_stencil_op_hcompute_hw_output_stencil_7_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_output_stencil_7_read_ctrl_vars[2:0], output op_hcompute_hw_output_stencil_7_read_ren );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_output_stencil_7_read_ren =(on && on2 && op_hcompute_hw_output_stencil_7_read_ctrl_vars[0]==0 && op_hcompute_hw_output_stencil_7_read_ctrl_vars[1]<=27 && op_hcompute_hw_output_stencil_7_read_ctrl_vars[2]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_output_stencil_7_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_output_stencil_7_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_output_stencil_7_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==16016) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_output_stencil_7_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_output_stencil_7_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_output_stencil_7_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 28) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_output_stencil_7_read_ctrl_vars[2]<= 0;
          op_hcompute_hw_output_stencil_7_read_ctrl_vars[1] <= op_hcompute_hw_output_stencil_7_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_output_stencil_7_read_ctrl_vars[2] <= op_hcompute_hw_output_stencil_7_read_ctrl_vars[2] + 1;
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
	input op_hcompute_conv_stencil_10_read_ren,
	input [15:0] op_hcompute_conv_stencil_10_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_10_read [0:0] ,
	input op_hcompute_conv_stencil_10_write_wen,
	input [15:0] op_hcompute_conv_stencil_10_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_conv_stencil_10_write [0:0] ,
	input op_hcompute_conv_stencil_11_read_ren,
	input [15:0] op_hcompute_conv_stencil_11_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_11_read [0:0] ,
	input op_hcompute_conv_stencil_11_write_wen,
	input [15:0] op_hcompute_conv_stencil_11_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_conv_stencil_11_write [0:0] ,
	input op_hcompute_conv_stencil_12_read_ren,
	input [15:0] op_hcompute_conv_stencil_12_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_12_read [0:0] ,
	input op_hcompute_conv_stencil_12_write_wen,
	input [15:0] op_hcompute_conv_stencil_12_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_conv_stencil_12_write [0:0] ,
	input op_hcompute_conv_stencil_13_read_ren,
	input [15:0] op_hcompute_conv_stencil_13_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_13_read [0:0] ,
	input op_hcompute_conv_stencil_13_write_wen,
	input [15:0] op_hcompute_conv_stencil_13_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_conv_stencil_13_write [0:0] ,
	input op_hcompute_conv_stencil_14_read_ren,
	input [15:0] op_hcompute_conv_stencil_14_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_14_read [0:0] ,
	input op_hcompute_conv_stencil_14_write_wen,
	input [15:0] op_hcompute_conv_stencil_14_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_conv_stencil_14_write [0:0] ,
	input op_hcompute_conv_stencil_15_read_ren,
	input [15:0] op_hcompute_conv_stencil_15_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_15_read [0:0] ,
	input op_hcompute_conv_stencil_15_write_wen,
	input [15:0] op_hcompute_conv_stencil_15_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_conv_stencil_15_write [0:0] ,
	input op_hcompute_conv_stencil_1_write_wen,
	input [15:0] op_hcompute_conv_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv_stencil_1_write [0:0] ,
	input op_hcompute_conv_stencil_2_write_wen,
	input [15:0] op_hcompute_conv_stencil_2_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv_stencil_2_write [0:0] ,
	input op_hcompute_conv_stencil_3_write_wen,
	input [15:0] op_hcompute_conv_stencil_3_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv_stencil_3_write [0:0] ,
	input op_hcompute_conv_stencil_4_write_wen,
	input [15:0] op_hcompute_conv_stencil_4_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv_stencil_4_write [0:0] ,
	input op_hcompute_conv_stencil_5_write_wen,
	input [15:0] op_hcompute_conv_stencil_5_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv_stencil_5_write [0:0] ,
	input op_hcompute_conv_stencil_6_write_wen,
	input [15:0] op_hcompute_conv_stencil_6_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv_stencil_6_write [0:0] ,
	input op_hcompute_conv_stencil_7_write_wen,
	input [15:0] op_hcompute_conv_stencil_7_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv_stencil_7_write [0:0] ,
	input op_hcompute_conv_stencil_8_read_ren,
	input [15:0] op_hcompute_conv_stencil_8_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_8_read [0:0] ,
	input op_hcompute_conv_stencil_8_write_wen,
	input [15:0] op_hcompute_conv_stencil_8_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_conv_stencil_8_write [0:0] ,
	input op_hcompute_conv_stencil_9_read_ren,
	input [15:0] op_hcompute_conv_stencil_9_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_9_read [0:0] ,
	input op_hcompute_conv_stencil_9_write_wen,
	input [15:0] op_hcompute_conv_stencil_9_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_conv_stencil_9_write [0:0] ,
	input op_hcompute_conv_stencil_write_wen,
	input [15:0] op_hcompute_conv_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_conv_stencil_write [0:0] ,
	input op_hcompute_hw_output_stencil_1_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_1_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_1_read [0:0] ,
	input op_hcompute_hw_output_stencil_2_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_2_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_2_read [0:0] ,
	input op_hcompute_hw_output_stencil_3_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_3_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_3_read [0:0] ,
	input op_hcompute_hw_output_stencil_4_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_4_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_4_read [0:0] ,
	input op_hcompute_hw_output_stencil_5_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_5_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_5_read [0:0] ,
	input op_hcompute_hw_output_stencil_6_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_6_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_6_read [0:0] ,
	input op_hcompute_hw_output_stencil_7_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_7_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_7_read [0:0] ,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] );


  // Storage capacity pre-banking: 6272
  logic [15:0]op_hcompute_conv_stencil_10_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_10_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_10_write_fsm conv_stencil_op_hcompute_conv_stencil_10_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_10_write_ctrl_vars( op_hcompute_conv_stencil_10_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_10_write_wen(op_hcompute_conv_stencil_10_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_11_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_11_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_11_write_fsm conv_stencil_op_hcompute_conv_stencil_11_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_11_write_ctrl_vars( op_hcompute_conv_stencil_11_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_11_write_wen(op_hcompute_conv_stencil_11_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_12_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_12_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_12_write_fsm conv_stencil_op_hcompute_conv_stencil_12_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_12_write_ctrl_vars( op_hcompute_conv_stencil_12_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_12_write_wen(op_hcompute_conv_stencil_12_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_13_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_13_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_13_write_fsm conv_stencil_op_hcompute_conv_stencil_13_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_13_write_ctrl_vars( op_hcompute_conv_stencil_13_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_13_write_wen(op_hcompute_conv_stencil_13_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_14_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_14_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_14_write_fsm conv_stencil_op_hcompute_conv_stencil_14_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_14_write_ctrl_vars( op_hcompute_conv_stencil_14_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_14_write_wen(op_hcompute_conv_stencil_14_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_15_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_15_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_15_write_fsm conv_stencil_op_hcompute_conv_stencil_15_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_15_write_ctrl_vars( op_hcompute_conv_stencil_15_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_15_write_wen(op_hcompute_conv_stencil_15_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_conv_stencil_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_write_fsm conv_stencil_op_hcompute_conv_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_write_ctrl_vars( op_hcompute_conv_stencil_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_write_wen(op_hcompute_conv_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_conv_stencil_1_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_1_write_fsm conv_stencil_op_hcompute_conv_stencil_1_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_1_write_ctrl_vars( op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_1_write_wen(op_hcompute_conv_stencil_1_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_conv_stencil_2_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_2_write_fsm conv_stencil_op_hcompute_conv_stencil_2_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_2_write_ctrl_vars( op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_2_write_wen(op_hcompute_conv_stencil_2_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_conv_stencil_3_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_3_write_fsm conv_stencil_op_hcompute_conv_stencil_3_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_3_write_ctrl_vars( op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_3_write_wen(op_hcompute_conv_stencil_3_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_conv_stencil_4_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_4_write_fsm conv_stencil_op_hcompute_conv_stencil_4_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_4_write_ctrl_vars( op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_4_write_wen(op_hcompute_conv_stencil_4_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_conv_stencil_5_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_5_write_fsm conv_stencil_op_hcompute_conv_stencil_5_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_5_write_ctrl_vars( op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_5_write_wen(op_hcompute_conv_stencil_5_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_6_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_conv_stencil_6_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_6_write_fsm conv_stencil_op_hcompute_conv_stencil_6_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_6_write_ctrl_vars( op_hcompute_conv_stencil_6_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_6_write_wen(op_hcompute_conv_stencil_6_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_7_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_conv_stencil_7_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_7_write_fsm conv_stencil_op_hcompute_conv_stencil_7_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_7_write_ctrl_vars( op_hcompute_conv_stencil_7_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_7_write_wen(op_hcompute_conv_stencil_7_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_8_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_8_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_8_write_fsm conv_stencil_op_hcompute_conv_stencil_8_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_8_write_ctrl_vars( op_hcompute_conv_stencil_8_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_8_write_wen(op_hcompute_conv_stencil_8_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_9_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_9_write_wen_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_9_write_fsm conv_stencil_op_hcompute_conv_stencil_9_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_9_write_ctrl_vars( op_hcompute_conv_stencil_9_write_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_9_write_wen(op_hcompute_conv_stencil_9_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_10_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_10_read_fsm conv_stencil_op_hcompute_conv_stencil_10_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_10_read_ctrl_vars( op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_10_read_ren(op_hcompute_conv_stencil_10_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_11_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_11_read_fsm conv_stencil_op_hcompute_conv_stencil_11_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_11_read_ctrl_vars( op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_11_read_ren(op_hcompute_conv_stencil_11_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_12_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_12_read_fsm conv_stencil_op_hcompute_conv_stencil_12_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_12_read_ctrl_vars( op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_12_read_ren(op_hcompute_conv_stencil_12_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_13_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_13_read_fsm conv_stencil_op_hcompute_conv_stencil_13_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_13_read_ctrl_vars( op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_13_read_ren(op_hcompute_conv_stencil_13_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_14_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_14_read_fsm conv_stencil_op_hcompute_conv_stencil_14_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_14_read_ctrl_vars( op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_14_read_ren(op_hcompute_conv_stencil_14_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_15_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_15_read_fsm conv_stencil_op_hcompute_conv_stencil_15_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_15_read_ctrl_vars( op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_15_read_ren(op_hcompute_conv_stencil_15_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_8_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_8_read_fsm conv_stencil_op_hcompute_conv_stencil_8_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_8_read_ctrl_vars( op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_8_read_ren(op_hcompute_conv_stencil_8_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_9_read_ren_fsm_out;
  conv_stencil_op_hcompute_conv_stencil_9_read_fsm conv_stencil_op_hcompute_conv_stencil_9_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_9_read_ctrl_vars( op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_9_read_ren(op_hcompute_conv_stencil_9_read_ren_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_read_ren_fsm_out;
  conv_stencil_op_hcompute_hw_output_stencil_read_fsm conv_stencil_op_hcompute_hw_output_stencil_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_read_ctrl_vars( op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_read_ren(op_hcompute_hw_output_stencil_read_ren_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_1_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_1_read_ren_fsm_out;
  conv_stencil_op_hcompute_hw_output_stencil_1_read_fsm conv_stencil_op_hcompute_hw_output_stencil_1_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_1_read_ctrl_vars( op_hcompute_hw_output_stencil_1_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_1_read_ren(op_hcompute_hw_output_stencil_1_read_ren_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_2_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_2_read_ren_fsm_out;
  conv_stencil_op_hcompute_hw_output_stencil_2_read_fsm conv_stencil_op_hcompute_hw_output_stencil_2_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_2_read_ctrl_vars( op_hcompute_hw_output_stencil_2_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_2_read_ren(op_hcompute_hw_output_stencil_2_read_ren_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_3_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_3_read_ren_fsm_out;
  conv_stencil_op_hcompute_hw_output_stencil_3_read_fsm conv_stencil_op_hcompute_hw_output_stencil_3_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_3_read_ctrl_vars( op_hcompute_hw_output_stencil_3_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_3_read_ren(op_hcompute_hw_output_stencil_3_read_ren_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_4_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_4_read_ren_fsm_out;
  conv_stencil_op_hcompute_hw_output_stencil_4_read_fsm conv_stencil_op_hcompute_hw_output_stencil_4_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_4_read_ctrl_vars( op_hcompute_hw_output_stencil_4_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_4_read_ren(op_hcompute_hw_output_stencil_4_read_ren_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_5_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_5_read_ren_fsm_out;
  conv_stencil_op_hcompute_hw_output_stencil_5_read_fsm conv_stencil_op_hcompute_hw_output_stencil_5_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_5_read_ctrl_vars( op_hcompute_hw_output_stencil_5_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_5_read_ren(op_hcompute_hw_output_stencil_5_read_ren_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_6_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_6_read_ren_fsm_out;
  conv_stencil_op_hcompute_hw_output_stencil_6_read_fsm conv_stencil_op_hcompute_hw_output_stencil_6_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_6_read_ctrl_vars( op_hcompute_hw_output_stencil_6_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_6_read_ren(op_hcompute_hw_output_stencil_6_read_ren_fsm_out));
  logic [15:0]op_hcompute_hw_output_stencil_7_read_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_output_stencil_7_read_ren_fsm_out;
  conv_stencil_op_hcompute_hw_output_stencil_7_read_fsm conv_stencil_op_hcompute_hw_output_stencil_7_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_output_stencil_7_read_ctrl_vars( op_hcompute_hw_output_stencil_7_read_ctrl_vars_fsm_out), .op_hcompute_hw_output_stencil_7_read_ren(op_hcompute_hw_output_stencil_7_read_ren_fsm_out));
  // # of banks: 8
  logic [15:0]  bank_0 [784];
  logic [15:0]  bank_1 [784];
  logic [15:0]  bank_2 [784];
  logic [15:0]  bank_3 [784];
  logic [15:0]  bank_4 [784];
  logic [15:0]  bank_5 [784];
  logic [15:0]  bank_6 [784];
  logic [15:0]  bank_7 [784];
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_166_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_166_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_166_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_166_1 = (((1*op_hcompute_conv_stencil_10_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_166_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_166_2 = (((1*op_hcompute_conv_stencil_10_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_166_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_166_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_166_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_166_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_148_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_148_0 = (((3)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_148_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_148_1 = (((1*op_hcompute_conv_stencil_11_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_148_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_148_2 = (((1*op_hcompute_conv_stencil_11_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_148_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_148_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_148_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_148_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_130_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_130_0 = (((4)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_130_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_130_1 = (((1*op_hcompute_conv_stencil_12_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_130_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_130_2 = (((1*op_hcompute_conv_stencil_12_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_130_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_130_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_130_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_130_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_112_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_112_0 = (((5)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_112_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_112_1 = (((1*op_hcompute_conv_stencil_13_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_112_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_112_2 = (((1*op_hcompute_conv_stencil_13_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_112_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_112_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_112_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_112_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_94_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_94_0 = (((6)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_94_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_94_1 = (((1*op_hcompute_conv_stencil_14_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_94_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_94_2 = (((1*op_hcompute_conv_stencil_14_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_94_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_94_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_94_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_94_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_76_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_76_0 = (((7)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_76_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_76_1 = (((1*op_hcompute_conv_stencil_15_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_76_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_76_2 = (((1*op_hcompute_conv_stencil_15_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_76_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_76_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_76_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_76_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_185_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_185_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_185_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_185_1 = (((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_185_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_185_2 = (((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_185_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_185_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_185_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_185_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_184_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_184_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_184_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_184_1 = (((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_184_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_184_2 = (((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_184_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_184_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_184_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_184_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_75_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_75_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_75_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_75_1 = (((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_75_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_75_2 = (((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_75_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_75_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_75_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_75_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_74_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_74_0 = (((3)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_74_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_74_1 = (((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_74_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_74_2 = (((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_74_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_74_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_74_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_74_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_73_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_73_0 = (((4)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_73_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_73_1 = (((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_73_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_73_2 = (((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_73_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_73_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_73_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_73_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_72_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_72_0 = (((5)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_72_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_72_1 = (((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_72_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_72_2 = (((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_72_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_72_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_72_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_72_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_6_71_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_6_71_0 = (((6)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_6_71_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_6_71_1 = (((1*op_hcompute_conv_stencil_6_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_6_71_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_6_71_2 = (((1*op_hcompute_conv_stencil_6_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_6_71_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_6_71_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_6_71_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_6_71_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_7_70_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_7_70_0 = (((7)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_7_70_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_7_70_1 = (((1*op_hcompute_conv_stencil_7_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_7_70_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_7_70_2 = (((1*op_hcompute_conv_stencil_7_write_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_7_70_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_7_70_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_7_70_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_7_70_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_52_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_52_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_52_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_52_1 = (((1*op_hcompute_conv_stencil_8_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_52_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_52_2 = (((1*op_hcompute_conv_stencil_8_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_52_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_52_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_52_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_52_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_34_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_34_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_34_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_34_1 = (((1*op_hcompute_conv_stencil_9_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_34_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_34_2 = (((1*op_hcompute_conv_stencil_9_write_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_34_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_34_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_34_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_34_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_167_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_167_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_167_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_167_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_167_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_167_2 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_167_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_167_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_167_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_167_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_149_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_149_0 = (((3)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_149_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_149_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_149_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_149_2 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_149_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_149_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_149_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_149_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_131_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_131_0 = (((4)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_131_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_131_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_131_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_131_2 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_131_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_131_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_131_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_131_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_113_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_113_0 = (((5)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_113_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_113_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_113_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_113_2 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_113_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_113_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_113_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_113_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_95_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_95_0 = (((6)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_95_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_95_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_95_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_95_2 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_95_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_95_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_95_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_95_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_77_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_77_0 = (((7)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_77_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_77_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_77_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_77_2 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_77_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_77_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_77_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_77_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_53_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_53_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_53_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_53_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_53_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_53_2 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_53_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_53_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_53_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_53_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_35_0;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_35_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_35_1;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_35_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_35_2;
  assign conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_35_2 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_35_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_35_2,conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_35_1,conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_35_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_15_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_15_0 = (0 - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_15_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_15_1 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_15_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_15_2 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_15_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_15_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_15_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_15_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_13_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_13_0 = (((1)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_13_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_13_1 = (((1*op_hcompute_hw_output_stencil_1_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_13_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_13_2 = (((1*op_hcompute_hw_output_stencil_1_read_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_13_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_13_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_13_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_13_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_11_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_11_0 = (((2)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_11_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_11_1 = (((1*op_hcompute_hw_output_stencil_2_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_11_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_11_2 = (((1*op_hcompute_hw_output_stencil_2_read_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_11_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_11_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_11_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_11_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_3_9_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_3_9_0 = (((3)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_3_9_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_3_9_1 = (((1*op_hcompute_hw_output_stencil_3_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_3_9_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_3_9_2 = (((1*op_hcompute_hw_output_stencil_3_read_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_3_9_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_3_9_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_3_9_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_3_9_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_4_7_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_4_7_0 = (((4)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_4_7_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_4_7_1 = (((1*op_hcompute_hw_output_stencil_4_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_4_7_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_4_7_2 = (((1*op_hcompute_hw_output_stencil_4_read_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_4_7_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_4_7_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_4_7_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_4_7_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_5_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_5_0 = (((5)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_5_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_5_1 = (((1*op_hcompute_hw_output_stencil_5_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_5_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_5_2 = (((1*op_hcompute_hw_output_stencil_5_read_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_5_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_5_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_5_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_5_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_6_3_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_6_3_0 = (((6)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_6_3_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_6_3_1 = (((1*op_hcompute_hw_output_stencil_6_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_6_3_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_6_3_2 = (((1*op_hcompute_hw_output_stencil_6_read_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_6_3_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_6_3_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_6_3_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_6_3_0}));
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_7_1_0;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_7_1_0 = (((7)) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_7_1_1;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_7_1_1 = (((1*op_hcompute_hw_output_stencil_7_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_7_1_2;
  assign conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_7_1_2 = (((1*op_hcompute_hw_output_stencil_7_read_ctrl_vars_fsm_out[2])) - 0);
conv_stencil_embarassing_bank_selector conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_7_1_bank_selector(.d({conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_7_1_2,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_7_1_1,conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_7_1_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_conv_stencil_10_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_10_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_16;
  always @(posedge clk) begin
    delay_wire_16 <= addr0;
  end
  logic [15:0] delay_wire_17;
  always @(posedge clk) begin
    delay_wire_17 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_166_bank_selector.out;
  end
  logic [15:0] delay_wire_18;
  always @(posedge clk) begin
    delay_wire_18 <= op_hcompute_conv_stencil_10_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_19;
  always @(posedge clk) begin
    delay_wire_19 <= op_hcompute_conv_stencil_10_write[0];
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_11_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_11_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_20;
  always @(posedge clk) begin
    delay_wire_20 <= addr1;
  end
  logic [15:0] delay_wire_21;
  always @(posedge clk) begin
    delay_wire_21 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_148_bank_selector.out;
  end
  logic [15:0] delay_wire_22;
  always @(posedge clk) begin
    delay_wire_22 <= op_hcompute_conv_stencil_11_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_23;
  always @(posedge clk) begin
    delay_wire_23 <= op_hcompute_conv_stencil_11_write[0];
  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_12_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_12_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_24;
  always @(posedge clk) begin
    delay_wire_24 <= addr2;
  end
  logic [15:0] delay_wire_25;
  always @(posedge clk) begin
    delay_wire_25 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_130_bank_selector.out;
  end
  logic [15:0] delay_wire_26;
  always @(posedge clk) begin
    delay_wire_26 <= op_hcompute_conv_stencil_12_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_27;
  always @(posedge clk) begin
    delay_wire_27 <= op_hcompute_conv_stencil_12_write[0];
  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_13_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_13_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_28;
  always @(posedge clk) begin
    delay_wire_28 <= addr3;
  end
  logic [15:0] delay_wire_29;
  always @(posedge clk) begin
    delay_wire_29 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_112_bank_selector.out;
  end
  logic [15:0] delay_wire_30;
  always @(posedge clk) begin
    delay_wire_30 <= op_hcompute_conv_stencil_13_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_31;
  always @(posedge clk) begin
    delay_wire_31 <= op_hcompute_conv_stencil_13_write[0];
  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_14_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_14_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_32;
  always @(posedge clk) begin
    delay_wire_32 <= addr4;
  end
  logic [15:0] delay_wire_33;
  always @(posedge clk) begin
    delay_wire_33 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_94_bank_selector.out;
  end
  logic [15:0] delay_wire_34;
  always @(posedge clk) begin
    delay_wire_34 <= op_hcompute_conv_stencil_14_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_35;
  always @(posedge clk) begin
    delay_wire_35 <= op_hcompute_conv_stencil_14_write[0];
  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_15_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_15_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_36;
  always @(posedge clk) begin
    delay_wire_36 <= addr5;
  end
  logic [15:0] delay_wire_37;
  always @(posedge clk) begin
    delay_wire_37 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_76_bank_selector.out;
  end
  logic [15:0] delay_wire_38;
  always @(posedge clk) begin
    delay_wire_38 <= op_hcompute_conv_stencil_15_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_39;
  always @(posedge clk) begin
    delay_wire_39 <= op_hcompute_conv_stencil_15_write[0];
  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_40;
  always @(posedge clk) begin
    delay_wire_40 <= addr6;
  end
  logic [15:0] delay_wire_41;
  always @(posedge clk) begin
    delay_wire_41 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_185_bank_selector.out;
  end
  logic [15:0] delay_wire_42;
  always @(posedge clk) begin
    delay_wire_42 <= op_hcompute_conv_stencil_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_43;
  always @(posedge clk) begin
    delay_wire_43 <= op_hcompute_conv_stencil_write[0];
  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_1_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_44;
  always @(posedge clk) begin
    delay_wire_44 <= addr7;
  end
  logic [15:0] delay_wire_45;
  always @(posedge clk) begin
    delay_wire_45 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_1_184_bank_selector.out;
  end
  logic [15:0] delay_wire_46;
  always @(posedge clk) begin
    delay_wire_46 <= op_hcompute_conv_stencil_1_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_47;
  always @(posedge clk) begin
    delay_wire_47 <= op_hcompute_conv_stencil_1_write[0];
  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_2_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_48;
  always @(posedge clk) begin
    delay_wire_48 <= addr8;
  end
  logic [15:0] delay_wire_49;
  always @(posedge clk) begin
    delay_wire_49 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_2_75_bank_selector.out;
  end
  logic [15:0] delay_wire_50;
  always @(posedge clk) begin
    delay_wire_50 <= op_hcompute_conv_stencil_2_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_51;
  always @(posedge clk) begin
    delay_wire_51 <= op_hcompute_conv_stencil_2_write[0];
  end
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_3_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_52;
  always @(posedge clk) begin
    delay_wire_52 <= addr9;
  end
  logic [15:0] delay_wire_53;
  always @(posedge clk) begin
    delay_wire_53 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_3_74_bank_selector.out;
  end
  logic [15:0] delay_wire_54;
  always @(posedge clk) begin
    delay_wire_54 <= op_hcompute_conv_stencil_3_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_55;
  always @(posedge clk) begin
    delay_wire_55 <= op_hcompute_conv_stencil_3_write[0];
  end
  logic [15:0] addr10;
  assign addr10 = (((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_4_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_56;
  always @(posedge clk) begin
    delay_wire_56 <= addr10;
  end
  logic [15:0] delay_wire_57;
  always @(posedge clk) begin
    delay_wire_57 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_4_73_bank_selector.out;
  end
  logic [15:0] delay_wire_58;
  always @(posedge clk) begin
    delay_wire_58 <= op_hcompute_conv_stencil_4_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_59;
  always @(posedge clk) begin
    delay_wire_59 <= op_hcompute_conv_stencil_4_write[0];
  end
  logic [15:0] addr11;
  assign addr11 = (((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_5_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_60;
  always @(posedge clk) begin
    delay_wire_60 <= addr11;
  end
  logic [15:0] delay_wire_61;
  always @(posedge clk) begin
    delay_wire_61 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_5_72_bank_selector.out;
  end
  logic [15:0] delay_wire_62;
  always @(posedge clk) begin
    delay_wire_62 <= op_hcompute_conv_stencil_5_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_63;
  always @(posedge clk) begin
    delay_wire_63 <= op_hcompute_conv_stencil_5_write[0];
  end
  logic [15:0] addr12;
  assign addr12 = (((((1*op_hcompute_conv_stencil_6_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_6_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_64;
  always @(posedge clk) begin
    delay_wire_64 <= addr12;
  end
  logic [15:0] delay_wire_65;
  always @(posedge clk) begin
    delay_wire_65 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_6_71_bank_selector.out;
  end
  logic [15:0] delay_wire_66;
  always @(posedge clk) begin
    delay_wire_66 <= op_hcompute_conv_stencil_6_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_67;
  always @(posedge clk) begin
    delay_wire_67 <= op_hcompute_conv_stencil_6_write[0];
  end
  logic [15:0] addr13;
  assign addr13 = (((((1*op_hcompute_conv_stencil_7_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_7_write_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] delay_wire_68;
  always @(posedge clk) begin
    delay_wire_68 <= addr13;
  end
  logic [15:0] delay_wire_69;
  always @(posedge clk) begin
    delay_wire_69 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_7_70_bank_selector.out;
  end
  logic [15:0] delay_wire_70;
  always @(posedge clk) begin
    delay_wire_70 <= op_hcompute_conv_stencil_7_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_71;
  always @(posedge clk) begin
    delay_wire_71 <= op_hcompute_conv_stencil_7_write[0];
  end
  logic [15:0] addr14;
  assign addr14 = (((((1*op_hcompute_conv_stencil_8_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_8_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_72;
  always @(posedge clk) begin
    delay_wire_72 <= addr14;
  end
  logic [15:0] delay_wire_73;
  always @(posedge clk) begin
    delay_wire_73 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_52_bank_selector.out;
  end
  logic [15:0] delay_wire_74;
  always @(posedge clk) begin
    delay_wire_74 <= op_hcompute_conv_stencil_8_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_75;
  always @(posedge clk) begin
    delay_wire_75 <= op_hcompute_conv_stencil_8_write[0];
  end
  logic [15:0] addr15;
  assign addr15 = (((((1*op_hcompute_conv_stencil_9_write_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_9_write_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] delay_wire_76;
  always @(posedge clk) begin
    delay_wire_76 <= addr15;
  end
  logic [15:0] delay_wire_77;
  always @(posedge clk) begin
    delay_wire_77 <= conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_34_bank_selector.out;
  end
  logic [15:0] delay_wire_78;
  always @(posedge clk) begin
    delay_wire_78 <= op_hcompute_conv_stencil_9_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_79;
  always @(posedge clk) begin
    delay_wire_79 <= op_hcompute_conv_stencil_9_write[0];
  end
  logic [15:0] addr16;
  assign addr16 = (((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_80;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_10_read[0] <= end_delay_wire_80;
  end
  logic [15:0] addr17;
  assign addr17 = (((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_81;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_11_read[0] <= end_delay_wire_81;
  end
  logic [15:0] addr18;
  assign addr18 = (((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_82;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_12_read[0] <= end_delay_wire_82;
  end
  logic [15:0] addr19;
  assign addr19 = (((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_83;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_13_read[0] <= end_delay_wire_83;
  end
  logic [15:0] addr20;
  assign addr20 = (((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_84;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_14_read[0] <= end_delay_wire_84;
  end
  logic [15:0] addr21;
  assign addr21 = (((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_85;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_15_read[0] <= end_delay_wire_85;
  end
  logic [15:0] addr22;
  assign addr22 = (((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_86;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_8_read[0] <= end_delay_wire_86;
  end
  logic [15:0] addr23;
  assign addr23 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0))*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0))*28);
  logic [15:0] end_delay_wire_87;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[0] <= end_delay_wire_87;
  end
  logic [15:0] addr24;
  assign addr24 = (((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_output_stencil_read_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] end_delay_wire_88;
  always @(posedge clk) begin
    op_hcompute_hw_output_stencil_read[0] <= end_delay_wire_88;
  end
  logic [15:0] addr25;
  assign addr25 = (((((1*op_hcompute_hw_output_stencil_1_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_output_stencil_1_read_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] end_delay_wire_89;
  always @(posedge clk) begin
    op_hcompute_hw_output_stencil_1_read[0] <= end_delay_wire_89;
  end
  logic [15:0] addr26;
  assign addr26 = (((((1*op_hcompute_hw_output_stencil_2_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_output_stencil_2_read_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] end_delay_wire_90;
  always @(posedge clk) begin
    op_hcompute_hw_output_stencil_2_read[0] <= end_delay_wire_90;
  end
  logic [15:0] addr27;
  assign addr27 = (((((1*op_hcompute_hw_output_stencil_3_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_output_stencil_3_read_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] end_delay_wire_91;
  always @(posedge clk) begin
    op_hcompute_hw_output_stencil_3_read[0] <= end_delay_wire_91;
  end
  logic [15:0] addr28;
  assign addr28 = (((((1*op_hcompute_hw_output_stencil_4_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_output_stencil_4_read_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] end_delay_wire_92;
  always @(posedge clk) begin
    op_hcompute_hw_output_stencil_4_read[0] <= end_delay_wire_92;
  end
  logic [15:0] addr29;
  assign addr29 = (((((1*op_hcompute_hw_output_stencil_5_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_output_stencil_5_read_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] end_delay_wire_93;
  always @(posedge clk) begin
    op_hcompute_hw_output_stencil_5_read[0] <= end_delay_wire_93;
  end
  logic [15:0] addr30;
  assign addr30 = (((((1*op_hcompute_hw_output_stencil_6_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_output_stencil_6_read_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] end_delay_wire_94;
  always @(posedge clk) begin
    op_hcompute_hw_output_stencil_6_read[0] <= end_delay_wire_94;
  end
  logic [15:0] addr31;
  assign addr31 = (((((1*op_hcompute_hw_output_stencil_7_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_output_stencil_7_read_ctrl_vars_fsm_out[2])) - 0))*28);
  logic [15:0] end_delay_wire_95;
  always @(posedge clk) begin
    op_hcompute_hw_output_stencil_7_read[0] <= end_delay_wire_95;
  end
  always @(posedge clk) begin
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
        default:bank_7[delay_wire_16] <= delay_wire_19;
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
        default:bank_7[delay_wire_20] <= delay_wire_23;
      endcase
    end
    if (delay_wire_26) begin
      case( delay_wire_25)
        0:bank_0[delay_wire_24] <= delay_wire_27;
        1:bank_1[delay_wire_24] <= delay_wire_27;
        2:bank_2[delay_wire_24] <= delay_wire_27;
        3:bank_3[delay_wire_24] <= delay_wire_27;
        4:bank_4[delay_wire_24] <= delay_wire_27;
        5:bank_5[delay_wire_24] <= delay_wire_27;
        6:bank_6[delay_wire_24] <= delay_wire_27;
        7:bank_7[delay_wire_24] <= delay_wire_27;
        default:bank_7[delay_wire_24] <= delay_wire_27;
      endcase
    end
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
        default:bank_7[delay_wire_28] <= delay_wire_31;
      endcase
    end
    if (delay_wire_34) begin
      case( delay_wire_33)
        0:bank_0[delay_wire_32] <= delay_wire_35;
        1:bank_1[delay_wire_32] <= delay_wire_35;
        2:bank_2[delay_wire_32] <= delay_wire_35;
        3:bank_3[delay_wire_32] <= delay_wire_35;
        4:bank_4[delay_wire_32] <= delay_wire_35;
        5:bank_5[delay_wire_32] <= delay_wire_35;
        6:bank_6[delay_wire_32] <= delay_wire_35;
        7:bank_7[delay_wire_32] <= delay_wire_35;
        default:bank_7[delay_wire_32] <= delay_wire_35;
      endcase
    end
    if (delay_wire_38) begin
      case( delay_wire_37)
        0:bank_0[delay_wire_36] <= delay_wire_39;
        1:bank_1[delay_wire_36] <= delay_wire_39;
        2:bank_2[delay_wire_36] <= delay_wire_39;
        3:bank_3[delay_wire_36] <= delay_wire_39;
        4:bank_4[delay_wire_36] <= delay_wire_39;
        5:bank_5[delay_wire_36] <= delay_wire_39;
        6:bank_6[delay_wire_36] <= delay_wire_39;
        7:bank_7[delay_wire_36] <= delay_wire_39;
        default:bank_7[delay_wire_36] <= delay_wire_39;
      endcase
    end
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
        default:bank_7[delay_wire_40] <= delay_wire_43;
      endcase
    end
    if (delay_wire_46) begin
      case( delay_wire_45)
        0:bank_0[delay_wire_44] <= delay_wire_47;
        1:bank_1[delay_wire_44] <= delay_wire_47;
        2:bank_2[delay_wire_44] <= delay_wire_47;
        3:bank_3[delay_wire_44] <= delay_wire_47;
        4:bank_4[delay_wire_44] <= delay_wire_47;
        5:bank_5[delay_wire_44] <= delay_wire_47;
        6:bank_6[delay_wire_44] <= delay_wire_47;
        7:bank_7[delay_wire_44] <= delay_wire_47;
        default:bank_7[delay_wire_44] <= delay_wire_47;
      endcase
    end
    if (delay_wire_50) begin
      case( delay_wire_49)
        0:bank_0[delay_wire_48] <= delay_wire_51;
        1:bank_1[delay_wire_48] <= delay_wire_51;
        2:bank_2[delay_wire_48] <= delay_wire_51;
        3:bank_3[delay_wire_48] <= delay_wire_51;
        4:bank_4[delay_wire_48] <= delay_wire_51;
        5:bank_5[delay_wire_48] <= delay_wire_51;
        6:bank_6[delay_wire_48] <= delay_wire_51;
        7:bank_7[delay_wire_48] <= delay_wire_51;
        default:bank_7[delay_wire_48] <= delay_wire_51;
      endcase
    end
    if (delay_wire_54) begin
      case( delay_wire_53)
        0:bank_0[delay_wire_52] <= delay_wire_55;
        1:bank_1[delay_wire_52] <= delay_wire_55;
        2:bank_2[delay_wire_52] <= delay_wire_55;
        3:bank_3[delay_wire_52] <= delay_wire_55;
        4:bank_4[delay_wire_52] <= delay_wire_55;
        5:bank_5[delay_wire_52] <= delay_wire_55;
        6:bank_6[delay_wire_52] <= delay_wire_55;
        7:bank_7[delay_wire_52] <= delay_wire_55;
        default:bank_7[delay_wire_52] <= delay_wire_55;
      endcase
    end
    if (delay_wire_58) begin
      case( delay_wire_57)
        0:bank_0[delay_wire_56] <= delay_wire_59;
        1:bank_1[delay_wire_56] <= delay_wire_59;
        2:bank_2[delay_wire_56] <= delay_wire_59;
        3:bank_3[delay_wire_56] <= delay_wire_59;
        4:bank_4[delay_wire_56] <= delay_wire_59;
        5:bank_5[delay_wire_56] <= delay_wire_59;
        6:bank_6[delay_wire_56] <= delay_wire_59;
        7:bank_7[delay_wire_56] <= delay_wire_59;
        default:bank_7[delay_wire_56] <= delay_wire_59;
      endcase
    end
    if (delay_wire_62) begin
      case( delay_wire_61)
        0:bank_0[delay_wire_60] <= delay_wire_63;
        1:bank_1[delay_wire_60] <= delay_wire_63;
        2:bank_2[delay_wire_60] <= delay_wire_63;
        3:bank_3[delay_wire_60] <= delay_wire_63;
        4:bank_4[delay_wire_60] <= delay_wire_63;
        5:bank_5[delay_wire_60] <= delay_wire_63;
        6:bank_6[delay_wire_60] <= delay_wire_63;
        7:bank_7[delay_wire_60] <= delay_wire_63;
        default:bank_7[delay_wire_60] <= delay_wire_63;
      endcase
    end
    if (delay_wire_66) begin
      case( delay_wire_65)
        0:bank_0[delay_wire_64] <= delay_wire_67;
        1:bank_1[delay_wire_64] <= delay_wire_67;
        2:bank_2[delay_wire_64] <= delay_wire_67;
        3:bank_3[delay_wire_64] <= delay_wire_67;
        4:bank_4[delay_wire_64] <= delay_wire_67;
        5:bank_5[delay_wire_64] <= delay_wire_67;
        6:bank_6[delay_wire_64] <= delay_wire_67;
        7:bank_7[delay_wire_64] <= delay_wire_67;
        default:bank_7[delay_wire_64] <= delay_wire_67;
      endcase
    end
    if (delay_wire_70) begin
      case( delay_wire_69)
        0:bank_0[delay_wire_68] <= delay_wire_71;
        1:bank_1[delay_wire_68] <= delay_wire_71;
        2:bank_2[delay_wire_68] <= delay_wire_71;
        3:bank_3[delay_wire_68] <= delay_wire_71;
        4:bank_4[delay_wire_68] <= delay_wire_71;
        5:bank_5[delay_wire_68] <= delay_wire_71;
        6:bank_6[delay_wire_68] <= delay_wire_71;
        7:bank_7[delay_wire_68] <= delay_wire_71;
        default:bank_7[delay_wire_68] <= delay_wire_71;
      endcase
    end
    if (delay_wire_74) begin
      case( delay_wire_73)
        0:bank_0[delay_wire_72] <= delay_wire_75;
        1:bank_1[delay_wire_72] <= delay_wire_75;
        2:bank_2[delay_wire_72] <= delay_wire_75;
        3:bank_3[delay_wire_72] <= delay_wire_75;
        4:bank_4[delay_wire_72] <= delay_wire_75;
        5:bank_5[delay_wire_72] <= delay_wire_75;
        6:bank_6[delay_wire_72] <= delay_wire_75;
        7:bank_7[delay_wire_72] <= delay_wire_75;
        default:bank_7[delay_wire_72] <= delay_wire_75;
      endcase
    end
    if (delay_wire_78) begin
      case( delay_wire_77)
        0:bank_0[delay_wire_76] <= delay_wire_79;
        1:bank_1[delay_wire_76] <= delay_wire_79;
        2:bank_2[delay_wire_76] <= delay_wire_79;
        3:bank_3[delay_wire_76] <= delay_wire_79;
        4:bank_4[delay_wire_76] <= delay_wire_79;
        5:bank_5[delay_wire_76] <= delay_wire_79;
        6:bank_6[delay_wire_76] <= delay_wire_79;
        7:bank_7[delay_wire_76] <= delay_wire_79;
        default:bank_7[delay_wire_76] <= delay_wire_79;
      endcase
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_10_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_10_167_bank_selector.out)
        0:end_delay_wire_80 <= bank_0[addr16];
        1:end_delay_wire_80 <= bank_1[addr16];
        2:end_delay_wire_80 <= bank_2[addr16];
        3:end_delay_wire_80 <= bank_3[addr16];
        4:end_delay_wire_80 <= bank_4[addr16];
        5:end_delay_wire_80 <= bank_5[addr16];
        6:end_delay_wire_80 <= bank_6[addr16];
        7:end_delay_wire_80 <= bank_7[addr16];
        default:end_delay_wire_80 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_11_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_11_149_bank_selector.out)
        0:end_delay_wire_81 <= bank_0[addr17];
        1:end_delay_wire_81 <= bank_1[addr17];
        2:end_delay_wire_81 <= bank_2[addr17];
        3:end_delay_wire_81 <= bank_3[addr17];
        4:end_delay_wire_81 <= bank_4[addr17];
        5:end_delay_wire_81 <= bank_5[addr17];
        6:end_delay_wire_81 <= bank_6[addr17];
        7:end_delay_wire_81 <= bank_7[addr17];
        default:end_delay_wire_81 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_12_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_12_131_bank_selector.out)
        0:end_delay_wire_82 <= bank_0[addr18];
        1:end_delay_wire_82 <= bank_1[addr18];
        2:end_delay_wire_82 <= bank_2[addr18];
        3:end_delay_wire_82 <= bank_3[addr18];
        4:end_delay_wire_82 <= bank_4[addr18];
        5:end_delay_wire_82 <= bank_5[addr18];
        6:end_delay_wire_82 <= bank_6[addr18];
        7:end_delay_wire_82 <= bank_7[addr18];
        default:end_delay_wire_82 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_13_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_13_113_bank_selector.out)
        0:end_delay_wire_83 <= bank_0[addr19];
        1:end_delay_wire_83 <= bank_1[addr19];
        2:end_delay_wire_83 <= bank_2[addr19];
        3:end_delay_wire_83 <= bank_3[addr19];
        4:end_delay_wire_83 <= bank_4[addr19];
        5:end_delay_wire_83 <= bank_5[addr19];
        6:end_delay_wire_83 <= bank_6[addr19];
        7:end_delay_wire_83 <= bank_7[addr19];
        default:end_delay_wire_83 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_14_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_14_95_bank_selector.out)
        0:end_delay_wire_84 <= bank_0[addr20];
        1:end_delay_wire_84 <= bank_1[addr20];
        2:end_delay_wire_84 <= bank_2[addr20];
        3:end_delay_wire_84 <= bank_3[addr20];
        4:end_delay_wire_84 <= bank_4[addr20];
        5:end_delay_wire_84 <= bank_5[addr20];
        6:end_delay_wire_84 <= bank_6[addr20];
        7:end_delay_wire_84 <= bank_7[addr20];
        default:end_delay_wire_84 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_15_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_15_77_bank_selector.out)
        0:end_delay_wire_85 <= bank_0[addr21];
        1:end_delay_wire_85 <= bank_1[addr21];
        2:end_delay_wire_85 <= bank_2[addr21];
        3:end_delay_wire_85 <= bank_3[addr21];
        4:end_delay_wire_85 <= bank_4[addr21];
        5:end_delay_wire_85 <= bank_5[addr21];
        6:end_delay_wire_85 <= bank_6[addr21];
        7:end_delay_wire_85 <= bank_7[addr21];
        default:end_delay_wire_85 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_8_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_8_53_bank_selector.out)
        0:end_delay_wire_86 <= bank_0[addr22];
        1:end_delay_wire_86 <= bank_1[addr22];
        2:end_delay_wire_86 <= bank_2[addr22];
        3:end_delay_wire_86 <= bank_3[addr22];
        4:end_delay_wire_86 <= bank_4[addr22];
        5:end_delay_wire_86 <= bank_5[addr22];
        6:end_delay_wire_86 <= bank_6[addr22];
        7:end_delay_wire_86 <= bank_7[addr22];
        default:end_delay_wire_86 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_conv_stencil_9_35_bank_selector.out)
        0:end_delay_wire_87 <= bank_0[addr23];
        1:end_delay_wire_87 <= bank_1[addr23];
        2:end_delay_wire_87 <= bank_2[addr23];
        3:end_delay_wire_87 <= bank_3[addr23];
        4:end_delay_wire_87 <= bank_4[addr23];
        5:end_delay_wire_87 <= bank_5[addr23];
        6:end_delay_wire_87 <= bank_6[addr23];
        7:end_delay_wire_87 <= bank_7[addr23];
        default:end_delay_wire_87 <= 327;
      endcase
    end
    if (op_hcompute_hw_output_stencil_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_15_bank_selector.out)
        0:end_delay_wire_88 <= bank_0[addr24];
        1:end_delay_wire_88 <= bank_1[addr24];
        2:end_delay_wire_88 <= bank_2[addr24];
        3:end_delay_wire_88 <= bank_3[addr24];
        4:end_delay_wire_88 <= bank_4[addr24];
        5:end_delay_wire_88 <= bank_5[addr24];
        6:end_delay_wire_88 <= bank_6[addr24];
        7:end_delay_wire_88 <= bank_7[addr24];
        default:end_delay_wire_88 <= 327;
      endcase
    end
    if (op_hcompute_hw_output_stencil_1_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_1_13_bank_selector.out)
        0:end_delay_wire_89 <= bank_0[addr25];
        1:end_delay_wire_89 <= bank_1[addr25];
        2:end_delay_wire_89 <= bank_2[addr25];
        3:end_delay_wire_89 <= bank_3[addr25];
        4:end_delay_wire_89 <= bank_4[addr25];
        5:end_delay_wire_89 <= bank_5[addr25];
        6:end_delay_wire_89 <= bank_6[addr25];
        7:end_delay_wire_89 <= bank_7[addr25];
        default:end_delay_wire_89 <= 327;
      endcase
    end
    if (op_hcompute_hw_output_stencil_2_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_2_11_bank_selector.out)
        0:end_delay_wire_90 <= bank_0[addr26];
        1:end_delay_wire_90 <= bank_1[addr26];
        2:end_delay_wire_90 <= bank_2[addr26];
        3:end_delay_wire_90 <= bank_3[addr26];
        4:end_delay_wire_90 <= bank_4[addr26];
        5:end_delay_wire_90 <= bank_5[addr26];
        6:end_delay_wire_90 <= bank_6[addr26];
        7:end_delay_wire_90 <= bank_7[addr26];
        default:end_delay_wire_90 <= 327;
      endcase
    end
    if (op_hcompute_hw_output_stencil_3_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_3_9_bank_selector.out)
        0:end_delay_wire_91 <= bank_0[addr27];
        1:end_delay_wire_91 <= bank_1[addr27];
        2:end_delay_wire_91 <= bank_2[addr27];
        3:end_delay_wire_91 <= bank_3[addr27];
        4:end_delay_wire_91 <= bank_4[addr27];
        5:end_delay_wire_91 <= bank_5[addr27];
        6:end_delay_wire_91 <= bank_6[addr27];
        7:end_delay_wire_91 <= bank_7[addr27];
        default:end_delay_wire_91 <= 327;
      endcase
    end
    if (op_hcompute_hw_output_stencil_4_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_4_7_bank_selector.out)
        0:end_delay_wire_92 <= bank_0[addr28];
        1:end_delay_wire_92 <= bank_1[addr28];
        2:end_delay_wire_92 <= bank_2[addr28];
        3:end_delay_wire_92 <= bank_3[addr28];
        4:end_delay_wire_92 <= bank_4[addr28];
        5:end_delay_wire_92 <= bank_5[addr28];
        6:end_delay_wire_92 <= bank_6[addr28];
        7:end_delay_wire_92 <= bank_7[addr28];
        default:end_delay_wire_92 <= 327;
      endcase
    end
    if (op_hcompute_hw_output_stencil_5_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_5_5_bank_selector.out)
        0:end_delay_wire_93 <= bank_0[addr29];
        1:end_delay_wire_93 <= bank_1[addr29];
        2:end_delay_wire_93 <= bank_2[addr29];
        3:end_delay_wire_93 <= bank_3[addr29];
        4:end_delay_wire_93 <= bank_4[addr29];
        5:end_delay_wire_93 <= bank_5[addr29];
        6:end_delay_wire_93 <= bank_6[addr29];
        7:end_delay_wire_93 <= bank_7[addr29];
        default:end_delay_wire_93 <= 327;
      endcase
    end
    if (op_hcompute_hw_output_stencil_6_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_6_3_bank_selector.out)
        0:end_delay_wire_94 <= bank_0[addr30];
        1:end_delay_wire_94 <= bank_1[addr30];
        2:end_delay_wire_94 <= bank_2[addr30];
        3:end_delay_wire_94 <= bank_3[addr30];
        4:end_delay_wire_94 <= bank_4[addr30];
        5:end_delay_wire_94 <= bank_5[addr30];
        6:end_delay_wire_94 <= bank_6[addr30];
        7:end_delay_wire_94 <= bank_7[addr30];
        default:end_delay_wire_94 <= 327;
      endcase
    end
    if (op_hcompute_hw_output_stencil_7_read_ren_fsm_out) begin
      case( conv_stencil_conv_stencil_op_hcompute_hw_output_stencil_7_1_bank_selector.out)
        0:end_delay_wire_95 <= bank_0[addr31];
        1:end_delay_wire_95 <= bank_1[addr31];
        2:end_delay_wire_95 <= bank_2[addr31];
        3:end_delay_wire_95 <= bank_3[addr31];
        4:end_delay_wire_95 <= bank_4[addr31];
        5:end_delay_wire_95 <= bank_5[addr31];
        6:end_delay_wire_95 <= bank_6[addr31];
        7:end_delay_wire_95 <= bank_7[addr31];
        default:end_delay_wire_95 <= 327;
      endcase
    end
  end

endmodule

// hw_input_global_wrapper_stencil has embarassing partition: 0

module hw_input_global_wrapper_stencil_bank_selector(input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[15:0] % 1);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[31:16] % 1);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32] % 1);
  assign out = bank_index_0*1+bank_index_1*1+bank_index_2*1;

endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
endmodule

module hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  assign out = in;
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
// { op_hcompute_hw_input_global_wrapper_stencil_4[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [(1 + 31hw_input_global_wrapper_s0_y + hw_input_global_wrapper_s0_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[2:0], output op_hcompute_hw_input_global_wrapper_stencil_4_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_input_global_wrapper_stencil_4_write_wen =(on && on2 && op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[0]==0 && op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[1]<=29 && op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[2]<=29);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 30) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[1] <= op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[2] <= op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_input_global_wrapper_stencil_5[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [(1 + 31hw_input_global_wrapper_s0_y + hw_input_global_wrapper_s0_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[2:0], output op_hcompute_hw_input_global_wrapper_stencil_5_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_input_global_wrapper_stencil_5_write_wen =(on && on2 && op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[0]==0 && op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[1]<=29 && op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[2]<=29);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 30) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[1] <= op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[2] <= op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_input_global_wrapper_stencil_6[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [(1 + 31hw_input_global_wrapper_s0_y + hw_input_global_wrapper_s0_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[2:0], output op_hcompute_hw_input_global_wrapper_stencil_6_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_input_global_wrapper_stencil_6_write_wen =(on && on2 && op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[0]==0 && op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[1]<=29 && op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[2]<=29);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 30) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[1] <= op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[2] <= op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars[2] + 1;
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
// { op_hcompute_hw_input_global_wrapper_stencil_7[root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [(1 + 31hw_input_global_wrapper_s0_y + hw_input_global_wrapper_s0_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[2:0], output op_hcompute_hw_input_global_wrapper_stencil_7_write_wen );
  logic [15:0] counter[3:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 3;
  assign op_hcompute_hw_input_global_wrapper_stencil_7_write_wen =(on && on2 && op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[0]==0 && op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[1]<=29 && op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[2]<=29);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==0) begin
        on <=1;
        on2 <= 1;
        op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 30) begin
          counter[1]<= 0;
          counter[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[1] <= op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[2] <= op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars[2] + 1;
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
// { op_hcompute_conv_stencil_10[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_10_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_10_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_10_read_ren =(on && on2 && op_hcompute_conv_stencil_10_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_10_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_10_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_10_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_10_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_10_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_10_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_10_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_10_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_10_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_10_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_10_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_10_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[1] <= op_hcompute_conv_stencil_10_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[2] <= op_hcompute_conv_stencil_10_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[3] <= op_hcompute_conv_stencil_10_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[4] <= op_hcompute_conv_stencil_10_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_11[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_11_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_11_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_11_read_ren =(on && on2 && op_hcompute_conv_stencil_11_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_11_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_11_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_11_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_11_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_11_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_11_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_11_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_11_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_11_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_11_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_11_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_11_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[1] <= op_hcompute_conv_stencil_11_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[2] <= op_hcompute_conv_stencil_11_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[3] <= op_hcompute_conv_stencil_11_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[4] <= op_hcompute_conv_stencil_11_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_12[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_12_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_12_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_12_read_ren =(on && on2 && op_hcompute_conv_stencil_12_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_12_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_12_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_12_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_12_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_12_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_12_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_12_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_12_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_12_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_12_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_12_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_12_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[1] <= op_hcompute_conv_stencil_12_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[2] <= op_hcompute_conv_stencil_12_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[3] <= op_hcompute_conv_stencil_12_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[4] <= op_hcompute_conv_stencil_12_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_13[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_13_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_13_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_13_read_ren =(on && on2 && op_hcompute_conv_stencil_13_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_13_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_13_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_13_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_13_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_13_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_13_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_13_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_13_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_13_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_13_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_13_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_13_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[1] <= op_hcompute_conv_stencil_13_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[2] <= op_hcompute_conv_stencil_13_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[3] <= op_hcompute_conv_stencil_13_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[4] <= op_hcompute_conv_stencil_13_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_14[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_14_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_14_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_14_read_ren =(on && on2 && op_hcompute_conv_stencil_14_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_14_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_14_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_14_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_14_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_14_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_14_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_14_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_14_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_14_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_14_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_14_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_14_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[1] <= op_hcompute_conv_stencil_14_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[2] <= op_hcompute_conv_stencil_14_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[3] <= op_hcompute_conv_stencil_14_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[4] <= op_hcompute_conv_stencil_14_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_15[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_15_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_15_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_15_read_ren =(on && on2 && op_hcompute_conv_stencil_15_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_15_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_15_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_15_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_15_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_15_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_15_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_15_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_15_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_15_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_15_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_15_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_15_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[1] <= op_hcompute_conv_stencil_15_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[2] <= op_hcompute_conv_stencil_15_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[3] <= op_hcompute_conv_stencil_15_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[4] <= op_hcompute_conv_stencil_15_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_8[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_8_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_8_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_8_read_ren =(on && on2 && op_hcompute_conv_stencil_8_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_8_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_8_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_8_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_8_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_8_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_8_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_8_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_8_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_8_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_8_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_8_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_8_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[1] <= op_hcompute_conv_stencil_8_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[2] <= op_hcompute_conv_stencil_8_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[3] <= op_hcompute_conv_stencil_8_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[4] <= op_hcompute_conv_stencil_8_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_9[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_9_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_9_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_9_read_ren =(on && on2 && op_hcompute_conv_stencil_9_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_9_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_9_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_9_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_9_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_9_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_9_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_9_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_9_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_9_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_9_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_9_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_9_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[1] <= op_hcompute_conv_stencil_9_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[2] <= op_hcompute_conv_stencil_9_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[3] <= op_hcompute_conv_stencil_9_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[4] <= op_hcompute_conv_stencil_9_read_ctrl_vars[4] + 1;
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
	input op_hcompute_conv_stencil_10_read_ren,
	input [15:0] op_hcompute_conv_stencil_10_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_10_read [7:0] ,
	input op_hcompute_conv_stencil_11_read_ren,
	input [15:0] op_hcompute_conv_stencil_11_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_11_read [7:0] ,
	input op_hcompute_conv_stencil_12_read_ren,
	input [15:0] op_hcompute_conv_stencil_12_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_12_read [7:0] ,
	input op_hcompute_conv_stencil_13_read_ren,
	input [15:0] op_hcompute_conv_stencil_13_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_13_read [7:0] ,
	input op_hcompute_conv_stencil_14_read_ren,
	input [15:0] op_hcompute_conv_stencil_14_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_14_read [7:0] ,
	input op_hcompute_conv_stencil_15_read_ren,
	input [15:0] op_hcompute_conv_stencil_15_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_15_read [7:0] ,
	input op_hcompute_conv_stencil_8_read_ren,
	input [15:0] op_hcompute_conv_stencil_8_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_8_read [7:0] ,
	input op_hcompute_conv_stencil_9_read_ren,
	input [15:0] op_hcompute_conv_stencil_9_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_9_read [7:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_1_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_1_write [0:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_2_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_2_write [0:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_3_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_3_write [0:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_4_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_4_write [0:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_5_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_5_write [0:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_6_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_6_write [0:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_7_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_7_write [0:0] ,
	input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0] );

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_11_read[0]), .out(op_hcompute_conv_stencil_10_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_11_read[1]), .out(op_hcompute_conv_stencil_10_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_11_read[2]), .out(op_hcompute_conv_stencil_10_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_11_read[3]), .out(op_hcompute_conv_stencil_10_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_11_read[4]), .out(op_hcompute_conv_stencil_10_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_11_read[5]), .out(op_hcompute_conv_stencil_10_read[5]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_11_read[6]), .out(op_hcompute_conv_stencil_10_read[6]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_11_read[7]), .out(op_hcompute_conv_stencil_10_read[7]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_12_read[0]), .out(op_hcompute_conv_stencil_11_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_12_read[1]), .out(op_hcompute_conv_stencil_11_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_12_read[2]), .out(op_hcompute_conv_stencil_11_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_12_read[3]), .out(op_hcompute_conv_stencil_11_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_12_read[4]), .out(op_hcompute_conv_stencil_11_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_12_read[5]), .out(op_hcompute_conv_stencil_11_read[5]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_12_read[6]), .out(op_hcompute_conv_stencil_11_read[6]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_12_read[7]), .out(op_hcompute_conv_stencil_11_read[7]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_13_read[0]), .out(op_hcompute_conv_stencil_12_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_13_read[1]), .out(op_hcompute_conv_stencil_12_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_13_read[2]), .out(op_hcompute_conv_stencil_12_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_13_read[3]), .out(op_hcompute_conv_stencil_12_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_13_read[4]), .out(op_hcompute_conv_stencil_12_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_13_read[5]), .out(op_hcompute_conv_stencil_12_read[5]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_13_read[6]), .out(op_hcompute_conv_stencil_12_read[6]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_13_read[7]), .out(op_hcompute_conv_stencil_12_read[7]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_14_read[0]), .out(op_hcompute_conv_stencil_13_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_14_read[1]), .out(op_hcompute_conv_stencil_13_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_14_read[2]), .out(op_hcompute_conv_stencil_13_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_14_read[3]), .out(op_hcompute_conv_stencil_13_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_14_read[4]), .out(op_hcompute_conv_stencil_13_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_14_read[5]), .out(op_hcompute_conv_stencil_13_read[5]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_14_read[6]), .out(op_hcompute_conv_stencil_13_read[6]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_14_read[7]), .out(op_hcompute_conv_stencil_13_read[7]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_15_read[4]), .out(op_hcompute_conv_stencil_14_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_15_read[5]), .out(op_hcompute_conv_stencil_14_read[5]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_15_read[6]), .out(op_hcompute_conv_stencil_14_read[6]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_15_read[7]), .out(op_hcompute_conv_stencil_14_read[7]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_15_read[0]), .out(op_hcompute_conv_stencil_14_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_15_read[1]), .out(op_hcompute_conv_stencil_14_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_15_read[2]), .out(op_hcompute_conv_stencil_14_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_15_read[3]), .out(op_hcompute_conv_stencil_14_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_8_read[0]), .out(op_hcompute_conv_stencil_15_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_8_read[1]), .out(op_hcompute_conv_stencil_15_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_8_read[2]), .out(op_hcompute_conv_stencil_15_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_8_read[3]), .out(op_hcompute_conv_stencil_15_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_8_read[4]), .out(op_hcompute_conv_stencil_15_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_8_read[5]), .out(op_hcompute_conv_stencil_15_read[5]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_8_read[6]), .out(op_hcompute_conv_stencil_15_read[6]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_8_read[7]), .out(op_hcompute_conv_stencil_15_read[7]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_9_read[7]), .out(op_hcompute_conv_stencil_8_read[0]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_9_read[0]), .out(op_hcompute_conv_stencil_8_read[1]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_9_read[1]), .out(op_hcompute_conv_stencil_8_read[2]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_9_read[2]), .out(op_hcompute_conv_stencil_8_read[3]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_9_read[3]), .out(op_hcompute_conv_stencil_8_read[4]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_9_read[4]), .out(op_hcompute_conv_stencil_8_read[5]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_9_read[5]), .out(op_hcompute_conv_stencil_8_read[6]));

    hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_to_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_sr hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_conv_stencil_9_read[6]), .out(op_hcompute_conv_stencil_8_read[7]));


  // Storage capacity pre-banking: 7200
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_1_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_1_write_wen(op_hcompute_hw_input_global_wrapper_stencil_1_write_wen_fsm_out));
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_2_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_2_write_wen(op_hcompute_hw_input_global_wrapper_stencil_2_write_wen_fsm_out));
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_write_wen(op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_3_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_3_write_wen(op_hcompute_hw_input_global_wrapper_stencil_3_write_wen_fsm_out));
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_4_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_4_write_wen(op_hcompute_hw_input_global_wrapper_stencil_4_write_wen_fsm_out));
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_5_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_5_write_wen(op_hcompute_hw_input_global_wrapper_stencil_5_write_wen_fsm_out));
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_6_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_6_write_wen(op_hcompute_hw_input_global_wrapper_stencil_6_write_wen_fsm_out));
  logic [15:0]op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars_fsm_out[2:0];
  logic op_hcompute_hw_input_global_wrapper_stencil_7_write_wen_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_write_fsm hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars( op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars_fsm_out), .op_hcompute_hw_input_global_wrapper_stencil_7_write_wen(op_hcompute_hw_input_global_wrapper_stencil_7_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_10_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_10_read_ctrl_vars( op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_10_read_ren(op_hcompute_conv_stencil_10_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_11_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_11_read_ctrl_vars( op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_11_read_ren(op_hcompute_conv_stencil_11_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_12_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_12_read_ctrl_vars( op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_12_read_ren(op_hcompute_conv_stencil_12_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_13_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_13_read_ctrl_vars( op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_13_read_ren(op_hcompute_conv_stencil_13_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_14_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_14_read_ctrl_vars( op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_14_read_ren(op_hcompute_conv_stencil_14_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_15_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_15_read_ctrl_vars( op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_15_read_ren(op_hcompute_conv_stencil_15_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_8_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_8_read_ctrl_vars( op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_8_read_ren(op_hcompute_conv_stencil_8_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_9_read_ren_fsm_out;
  hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_read_fsm hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_9_read_ctrl_vars( op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_9_read_ren(op_hcompute_conv_stencil_9_read_ren_fsm_out));
  // # of banks: 1
  logic [15:0] bank_0 [7200];
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_2 = (0 - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_0 = (((1*op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_1 = (((1*op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_2 = (0 - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_2 = (0 - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_2 = (0 - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_2 = (0 - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_2 = (0 - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_2 = (0 - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_2 = (0 - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_2 = (((1)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_2 = (((2)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_2 = (((3)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_2 = (((4)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_2 = (((5)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_2 = (((7)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_2 = (((6)) - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_0}));
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_0;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_1;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0);
  logic [15:0] hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_2;
  assign hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_2 = (0 - 0);
hw_input_global_wrapper_stencil_bank_selector hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_bank_selector(.d({hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_2,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_1,hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_1_write_ctrl_vars_fsm_out[2])) - 0)>>0)*30+((((1)) - 0)>>0)*900);
  logic [15:0] delay_wire_96;
  always @(posedge clk) begin
    delay_wire_96 <= addr0;
  end
  logic [15:0] delay_wire_97;
  always @(posedge clk) begin
    delay_wire_97 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_bank_selector.out;
  end
  logic [15:0] delay_wire_98;
  always @(posedge clk) begin
    delay_wire_98 <= op_hcompute_hw_input_global_wrapper_stencil_1_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_99;
  always @(posedge clk) begin
    delay_wire_99 <= op_hcompute_hw_input_global_wrapper_stencil_1_write[0];
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_2_write_ctrl_vars_fsm_out[2])) - 0)>>0)*30+((((2)) - 0)>>0)*900);
  logic [15:0] delay_wire_100;
  always @(posedge clk) begin
    delay_wire_100 <= addr1;
  end
  logic [15:0] delay_wire_101;
  always @(posedge clk) begin
    delay_wire_101 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_bank_selector.out;
  end
  logic [15:0] delay_wire_102;
  always @(posedge clk) begin
    delay_wire_102 <= op_hcompute_hw_input_global_wrapper_stencil_2_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_103;
  always @(posedge clk) begin
    delay_wire_103 <= op_hcompute_hw_input_global_wrapper_stencil_2_write[0];
  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0)>>0)*30+((0 - 0)>>0)*900);
  logic [15:0] delay_wire_104;
  always @(posedge clk) begin
    delay_wire_104 <= addr2;
  end
  logic [15:0] delay_wire_105;
  always @(posedge clk) begin
    delay_wire_105 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_bank_selector.out;
  end
  logic [15:0] delay_wire_106;
  always @(posedge clk) begin
    delay_wire_106 <= op_hcompute_hw_input_global_wrapper_stencil_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_107;
  always @(posedge clk) begin
    delay_wire_107 <= op_hcompute_hw_input_global_wrapper_stencil_write[0];
  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_3_write_ctrl_vars_fsm_out[2])) - 0)>>0)*30+((((3)) - 0)>>0)*900);
  logic [15:0] delay_wire_108;
  always @(posedge clk) begin
    delay_wire_108 <= addr3;
  end
  logic [15:0] delay_wire_109;
  always @(posedge clk) begin
    delay_wire_109 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_bank_selector.out;
  end
  logic [15:0] delay_wire_110;
  always @(posedge clk) begin
    delay_wire_110 <= op_hcompute_hw_input_global_wrapper_stencil_3_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_111;
  always @(posedge clk) begin
    delay_wire_111 <= op_hcompute_hw_input_global_wrapper_stencil_3_write[0];
  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_4_write_ctrl_vars_fsm_out[2])) - 0)>>0)*30+((((4)) - 0)>>0)*900);
  logic [15:0] delay_wire_112;
  always @(posedge clk) begin
    delay_wire_112 <= addr4;
  end
  logic [15:0] delay_wire_113;
  always @(posedge clk) begin
    delay_wire_113 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_bank_selector.out;
  end
  logic [15:0] delay_wire_114;
  always @(posedge clk) begin
    delay_wire_114 <= op_hcompute_hw_input_global_wrapper_stencil_4_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_115;
  always @(posedge clk) begin
    delay_wire_115 <= op_hcompute_hw_input_global_wrapper_stencil_4_write[0];
  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_5_write_ctrl_vars_fsm_out[2])) - 0)>>0)*30+((((5)) - 0)>>0)*900);
  logic [15:0] delay_wire_116;
  always @(posedge clk) begin
    delay_wire_116 <= addr5;
  end
  logic [15:0] delay_wire_117;
  always @(posedge clk) begin
    delay_wire_117 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_bank_selector.out;
  end
  logic [15:0] delay_wire_118;
  always @(posedge clk) begin
    delay_wire_118 <= op_hcompute_hw_input_global_wrapper_stencil_5_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_119;
  always @(posedge clk) begin
    delay_wire_119 <= op_hcompute_hw_input_global_wrapper_stencil_5_write[0];
  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_6_write_ctrl_vars_fsm_out[2])) - 0)>>0)*30+((((6)) - 0)>>0)*900);
  logic [15:0] delay_wire_120;
  always @(posedge clk) begin
    delay_wire_120 <= addr6;
  end
  logic [15:0] delay_wire_121;
  always @(posedge clk) begin
    delay_wire_121 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_bank_selector.out;
  end
  logic [15:0] delay_wire_122;
  always @(posedge clk) begin
    delay_wire_122 <= op_hcompute_hw_input_global_wrapper_stencil_6_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_123;
  always @(posedge clk) begin
    delay_wire_123 <= op_hcompute_hw_input_global_wrapper_stencil_6_write[0];
  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars_fsm_out[1])) - 0)>>0)*1+((((1*op_hcompute_hw_input_global_wrapper_stencil_7_write_ctrl_vars_fsm_out[2])) - 0)>>0)*30+((((7)) - 0)>>0)*900);
  logic [15:0] delay_wire_124;
  always @(posedge clk) begin
    delay_wire_124 <= addr7;
  end
  logic [15:0] delay_wire_125;
  always @(posedge clk) begin
    delay_wire_125 <= hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_bank_selector.out;
  end
  logic [15:0] delay_wire_126;
  always @(posedge clk) begin
    delay_wire_126 <= op_hcompute_hw_input_global_wrapper_stencil_7_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_127;
  always @(posedge clk) begin
    delay_wire_127 <= op_hcompute_hw_input_global_wrapper_stencil_7_write[0];
  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((1)) - 0)>>0)*900);
  logic [15:0] end_delay_wire_128;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[0] <= end_delay_wire_128;
  end
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((2)) - 0)>>0)*900);
  logic [15:0] end_delay_wire_129;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[1] <= end_delay_wire_129;
  end
  logic [15:0] addr10;
  assign addr10 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((3)) - 0)>>0)*900);
  logic [15:0] end_delay_wire_130;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[2] <= end_delay_wire_130;
  end
  logic [15:0] addr11;
  assign addr11 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((4)) - 0)>>0)*900);
  logic [15:0] end_delay_wire_131;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[3] <= end_delay_wire_131;
  end
  logic [15:0] addr12;
  assign addr12 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((5)) - 0)>>0)*900);
  logic [15:0] end_delay_wire_132;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[4] <= end_delay_wire_132;
  end
  logic [15:0] addr13;
  assign addr13 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((7)) - 0)>>0)*900);
  logic [15:0] end_delay_wire_133;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[5] <= end_delay_wire_133;
  end
  logic [15:0] addr14;
  assign addr14 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((((6)) - 0)>>0)*900);
  logic [15:0] end_delay_wire_134;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[6] <= end_delay_wire_134;
  end
  logic [15:0] addr15;
  assign addr15 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[3])) - 0)>>0)*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2] + 1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4])) - 0)>>0)*30+((0 - 0)>>0)*900);
  logic [15:0] end_delay_wire_135;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[7] <= end_delay_wire_135;
  end
  always @(posedge clk) begin
    if (delay_wire_98) begin
      case( delay_wire_97)
        0:bank_0[delay_wire_96] <= delay_wire_99;
        default:bank_0[delay_wire_96] <= delay_wire_99;
      endcase
    end
    if (delay_wire_102) begin
      case( delay_wire_101)
        0:bank_0[delay_wire_100] <= delay_wire_103;
        default:bank_0[delay_wire_100] <= delay_wire_103;
      endcase
    end
    if (delay_wire_106) begin
      case( delay_wire_105)
        0:bank_0[delay_wire_104] <= delay_wire_107;
        default:bank_0[delay_wire_104] <= delay_wire_107;
      endcase
    end
    if (delay_wire_110) begin
      case( delay_wire_109)
        0:bank_0[delay_wire_108] <= delay_wire_111;
        default:bank_0[delay_wire_108] <= delay_wire_111;
      endcase
    end
    if (delay_wire_114) begin
      case( delay_wire_113)
        0:bank_0[delay_wire_112] <= delay_wire_115;
        default:bank_0[delay_wire_112] <= delay_wire_115;
      endcase
    end
    if (delay_wire_118) begin
      case( delay_wire_117)
        0:bank_0[delay_wire_116] <= delay_wire_119;
        default:bank_0[delay_wire_116] <= delay_wire_119;
      endcase
    end
    if (delay_wire_122) begin
      case( delay_wire_121)
        0:bank_0[delay_wire_120] <= delay_wire_123;
        default:bank_0[delay_wire_120] <= delay_wire_123;
      endcase
    end
    if (delay_wire_126) begin
      case( delay_wire_125)
        0:bank_0[delay_wire_124] <= delay_wire_127;
        default:bank_0[delay_wire_124] <= delay_wire_127;
      endcase
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_bank_selector.out)
        0:end_delay_wire_128 <= bank_0[addr8];
        default:end_delay_wire_128 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_bank_selector.out)
        0:end_delay_wire_129 <= bank_0[addr9];
        default:end_delay_wire_129 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_bank_selector.out)
        0:end_delay_wire_130 <= bank_0[addr10];
        default:end_delay_wire_130 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_bank_selector.out)
        0:end_delay_wire_131 <= bank_0[addr11];
        default:end_delay_wire_131 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_bank_selector.out)
        0:end_delay_wire_132 <= bank_0[addr12];
        default:end_delay_wire_132 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_bank_selector.out)
        0:end_delay_wire_133 <= bank_0[addr13];
        default:end_delay_wire_133 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_bank_selector.out)
        0:end_delay_wire_134 <= bank_0[addr14];
        default:end_delay_wire_134 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_bank_selector.out)
        0:end_delay_wire_135 <= bank_0[addr15];
        default:end_delay_wire_135 <= 327;
      endcase
    end
  end

endmodule

// hw_kernel_global_wrapper_stencil has embarassing partition: 1

module hw_kernel_global_wrapper_stencil_embarassing_bank_selector(input logic [16*4 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[47:32]);
  logic [15:0] bank_index_3;
  assign bank_index_3 = (d[63:48]);
  assign out = 0+bank_index_2*1+bank_index_3*8;

endmodule

// { op_hcompute_hw_kernel_global_wrapper_stencil[root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [(2 + 216hw_kernel_global_wrapper_s0_y + 72hw_kernel_global_wrapper_s0_x + 9hw_kernel_global_wrapper_s0_w + hw_kernel_global_wrapper_s0_z)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4:0], output op_hcompute_hw_kernel_global_wrapper_stencil_write_wen );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_hw_kernel_global_wrapper_stencil_write_wen =(on && on2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[0]==0 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1]<=2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2]<=2 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<=7 && op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<=7);
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
        if(counter[1] == 215) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[2]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[3]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[4]<= 0;
          op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1] <= op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 71) begin
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
// { op_hcompute_conv_stencil_10[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_10_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_10_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_10_read_ren =(on && on2 && op_hcompute_conv_stencil_10_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_10_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_10_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_10_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_10_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_10_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_10_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_10_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_10_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_10_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_10_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_10_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_10_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[1] <= op_hcompute_conv_stencil_10_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[2] <= op_hcompute_conv_stencil_10_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[3] <= op_hcompute_conv_stencil_10_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_10_read_ctrl_vars[4] <= op_hcompute_conv_stencil_10_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_11[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_11_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_11_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_11_read_ren =(on && on2 && op_hcompute_conv_stencil_11_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_11_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_11_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_11_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_11_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_11_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_11_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_11_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_11_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_11_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_11_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_11_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_11_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[1] <= op_hcompute_conv_stencil_11_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[2] <= op_hcompute_conv_stencil_11_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[3] <= op_hcompute_conv_stencil_11_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_11_read_ctrl_vars[4] <= op_hcompute_conv_stencil_11_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_12[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_12_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_12_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_12_read_ren =(on && on2 && op_hcompute_conv_stencil_12_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_12_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_12_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_12_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_12_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_12_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_12_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_12_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_12_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_12_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_12_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_12_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_12_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[1] <= op_hcompute_conv_stencil_12_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[2] <= op_hcompute_conv_stencil_12_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[3] <= op_hcompute_conv_stencil_12_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_12_read_ctrl_vars[4] <= op_hcompute_conv_stencil_12_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_13[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_13_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_13_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_13_read_ren =(on && on2 && op_hcompute_conv_stencil_13_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_13_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_13_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_13_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_13_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_13_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_13_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_13_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_13_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_13_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_13_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_13_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_13_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[1] <= op_hcompute_conv_stencil_13_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[2] <= op_hcompute_conv_stencil_13_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[3] <= op_hcompute_conv_stencil_13_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_13_read_ctrl_vars[4] <= op_hcompute_conv_stencil_13_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_14[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_14_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_14_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_14_read_ren =(on && on2 && op_hcompute_conv_stencil_14_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_14_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_14_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_14_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_14_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_14_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_14_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_14_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_14_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_14_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_14_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_14_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_14_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[1] <= op_hcompute_conv_stencil_14_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[2] <= op_hcompute_conv_stencil_14_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[3] <= op_hcompute_conv_stencil_14_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_14_read_ctrl_vars[4] <= op_hcompute_conv_stencil_14_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_15[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_15_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_15_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_15_read_ren =(on && on2 && op_hcompute_conv_stencil_15_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_15_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_15_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_15_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_15_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_15_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_15_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_15_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_15_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_15_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_15_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_15_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_15_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[1] <= op_hcompute_conv_stencil_15_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[2] <= op_hcompute_conv_stencil_15_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[3] <= op_hcompute_conv_stencil_15_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_15_read_ctrl_vars[4] <= op_hcompute_conv_stencil_15_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_8[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_8_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_8_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_8_read_ren =(on && on2 && op_hcompute_conv_stencil_8_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_8_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_8_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_8_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_8_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_8_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_8_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_8_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_8_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_8_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_8_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_8_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_8_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[1] <= op_hcompute_conv_stencil_8_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[2] <= op_hcompute_conv_stencil_8_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[3] <= op_hcompute_conv_stencil_8_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_8_read_ctrl_vars[4] <= op_hcompute_conv_stencil_8_read_ctrl_vars[4] + 1;
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
// { op_hcompute_conv_stencil_9[root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [(1002 + 3864conv_s1_r_y + 1288conv_s1_r_x + 46conv_s1_y + conv_s1_x)] }
module hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_read_fsm(input clk, input flush, input rst_n, output logic [15:0] op_hcompute_conv_stencil_9_read_ctrl_vars[4:0], output op_hcompute_conv_stencil_9_read_ren );
  logic [15:0] counter[5:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 5;
  assign op_hcompute_conv_stencil_9_read_ren =(on && on2 && op_hcompute_conv_stencil_9_read_ctrl_vars[0]==0 && op_hcompute_conv_stencil_9_read_ctrl_vars[1]<=2 && op_hcompute_conv_stencil_9_read_ctrl_vars[2]<=2 && op_hcompute_conv_stencil_9_read_ctrl_vars[3]<=27 && op_hcompute_conv_stencil_9_read_ctrl_vars[4]<=27);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      op_hcompute_conv_stencil_9_read_ctrl_vars[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      op_hcompute_conv_stencil_9_read_ctrl_vars[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      op_hcompute_conv_stencil_9_read_ctrl_vars[2]<= 16'b1010101010101010;
      counter[2] <= 16'b0;
      op_hcompute_conv_stencil_9_read_ctrl_vars[3]<= 16'b1010101010101010;
      counter[3] <= 16'b0;
      op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 16'b1010101010101010;
      counter[4] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==1001) begin
        on <=1;
        on2 <= 1;
        op_hcompute_conv_stencil_9_read_ctrl_vars[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        op_hcompute_conv_stencil_9_read_ctrl_vars[1]<= 16'b0;
        counter [1] <= 16'b0;
        op_hcompute_conv_stencil_9_read_ctrl_vars[2]<= 16'b0;
        counter [2] <= 16'b0;
        op_hcompute_conv_stencil_9_read_ctrl_vars[3]<= 16'b0;
        counter [3] <= 16'b0;
        op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 16'b0;
        counter [4] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 3863) begin
          counter[1]<= 0;
          counter[2]<= 0;
          counter[3]<= 0;
          counter[4]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[2]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[1] <= op_hcompute_conv_stencil_9_read_ctrl_vars[1] + 1;
          on2 <= 1;
        end else if(counter[2] == 1287) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= 0;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[3]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[2] <= op_hcompute_conv_stencil_9_read_ctrl_vars[2] + 1;
          on2 <= 1;
        end else if(counter[3] == 45) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= 0;
          counter[4] <= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[4]<= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[3] <= op_hcompute_conv_stencil_9_read_ctrl_vars[3] + 1;
          on2 <= 1;
        end else if(counter[4] == 0) begin
          counter[1] <= counter[1] + 1;
          counter[2] <= counter[2] + 1;
          counter[3] <= counter[3] + 1;
          counter[4] <= 0;
          op_hcompute_conv_stencil_9_read_ctrl_vars[4] <= op_hcompute_conv_stencil_9_read_ctrl_vars[4] + 1;
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
	input op_hcompute_conv_stencil_10_read_ren,
	input [15:0] op_hcompute_conv_stencil_10_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_10_read [7:0] ,
	input op_hcompute_conv_stencil_11_read_ren,
	input [15:0] op_hcompute_conv_stencil_11_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_11_read [7:0] ,
	input op_hcompute_conv_stencil_12_read_ren,
	input [15:0] op_hcompute_conv_stencil_12_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_12_read [7:0] ,
	input op_hcompute_conv_stencil_13_read_ren,
	input [15:0] op_hcompute_conv_stencil_13_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_13_read [7:0] ,
	input op_hcompute_conv_stencil_14_read_ren,
	input [15:0] op_hcompute_conv_stencil_14_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_14_read [7:0] ,
	input op_hcompute_conv_stencil_15_read_ren,
	input [15:0] op_hcompute_conv_stencil_15_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_15_read [7:0] ,
	input op_hcompute_conv_stencil_8_read_ren,
	input [15:0] op_hcompute_conv_stencil_8_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_8_read [7:0] ,
	input op_hcompute_conv_stencil_9_read_ren,
	input [15:0] op_hcompute_conv_stencil_9_read_ctrl_vars [4:0] ,
	output logic [15:0] op_hcompute_conv_stencil_9_read [7:0] ,
	input op_hcompute_hw_kernel_global_wrapper_stencil_write_wen,
	input [15:0] op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars [4:0] ,
	input logic [15:0] op_hcompute_hw_kernel_global_wrapper_stencil_write [0:0] );


  // Storage capacity pre-banking: 576
  logic [15:0]op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_fsm hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars( op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out), .op_hcompute_hw_kernel_global_wrapper_stencil_write_wen(op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_10_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_10_read_ctrl_vars( op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_10_read_ren(op_hcompute_conv_stencil_10_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_11_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_11_read_ctrl_vars( op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_11_read_ren(op_hcompute_conv_stencil_11_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_12_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_12_read_ctrl_vars( op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_12_read_ren(op_hcompute_conv_stencil_12_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_13_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_13_read_ctrl_vars( op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_13_read_ren(op_hcompute_conv_stencil_13_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_14_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_14_read_ctrl_vars( op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_14_read_ren(op_hcompute_conv_stencil_14_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_15_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_15_read_ctrl_vars( op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_15_read_ren(op_hcompute_conv_stencil_15_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_8_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_8_read_ctrl_vars( op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_8_read_ren(op_hcompute_conv_stencil_8_read_ren_fsm_out));
  logic [15:0]op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[4:0];
  logic op_hcompute_conv_stencil_9_read_ren_fsm_out;
  hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_read_fsm hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_read_fsm_inst (.clk(clk), .flush(flush), .rst_n(rst_n), .op_hcompute_conv_stencil_9_read_ctrl_vars( op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out), .op_hcompute_conv_stencil_9_read_ren(op_hcompute_conv_stencil_9_read_ren_fsm_out));
  // # of banks: 64
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
  logic [15:0]  bank_24 [9];
  logic [15:0]  bank_25 [9];
  logic [15:0]  bank_26 [9];
  logic [15:0]  bank_27 [9];
  logic [15:0]  bank_28 [9];
  logic [15:0]  bank_29 [9];
  logic [15:0]  bank_30 [9];
  logic [15:0]  bank_31 [9];
  logic [15:0]  bank_32 [9];
  logic [15:0]  bank_33 [9];
  logic [15:0]  bank_34 [9];
  logic [15:0]  bank_35 [9];
  logic [15:0]  bank_36 [9];
  logic [15:0]  bank_37 [9];
  logic [15:0]  bank_38 [9];
  logic [15:0]  bank_39 [9];
  logic [15:0]  bank_40 [9];
  logic [15:0]  bank_41 [9];
  logic [15:0]  bank_42 [9];
  logic [15:0]  bank_43 [9];
  logic [15:0]  bank_44 [9];
  logic [15:0]  bank_45 [9];
  logic [15:0]  bank_46 [9];
  logic [15:0]  bank_47 [9];
  logic [15:0]  bank_48 [9];
  logic [15:0]  bank_49 [9];
  logic [15:0]  bank_50 [9];
  logic [15:0]  bank_51 [9];
  logic [15:0]  bank_52 [9];
  logic [15:0]  bank_53 [9];
  logic [15:0]  bank_54 [9];
  logic [15:0]  bank_55 [9];
  logic [15:0]  bank_56 [9];
  logic [15:0]  bank_57 [9];
  logic [15:0]  bank_58 [9];
  logic [15:0]  bank_59 [9];
  logic [15:0]  bank_60 [9];
  logic [15:0]  bank_61 [9];
  logic [15:0]  bank_62 [9];
  logic [15:0]  bank_63 [9];
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_0 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_1 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_2 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[3])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_3 = (((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[4])) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_0 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_1 = (((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_2 = (((2)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_2 = (((3)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_2 = (((3)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_2 = (((3)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_2 = (((3)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_2 = (((3)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_2 = (((3)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_2 = (((3)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_0 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_1 = (((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_2 = (((3)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_2 = (((4)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_2 = (((4)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_2 = (((4)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_2 = (((4)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_2 = (((4)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_2 = (((4)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_2 = (((4)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_0 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_1 = (((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_2 = (((4)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_2 = (((5)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_2 = (((5)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_2 = (((5)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_2 = (((5)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_2 = (((5)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_2 = (((5)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_2 = (((5)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_0 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_1 = (((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_2 = (((5)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_2 = (((6)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_2 = (((6)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_2 = (((6)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_2 = (((6)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_2 = (((6)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_2 = (((6)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_2 = (((6)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_0 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_1 = (((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_2 = (((6)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_2 = (((7)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_2 = (((7)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_2 = (((7)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_2 = (((7)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_2 = (((7)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_2 = (((7)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_2 = (((7)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_0 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_1 = (((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_2 = (((7)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_0 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_1 = (((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_2 = (0 - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_3 = (((1)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_3 = (((2)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_3 = (((3)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_3 = (((4)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_3 = (((5)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_3 = (((7)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_3 = (((6)) - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_0}));
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_0;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_0 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_1;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_1 = (((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_2;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_2 = (((1)) - 0);
  logic [15:0] hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_3;
  assign hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_3 = (0 - 0);
hw_kernel_global_wrapper_stencil_embarassing_bank_selector hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_bank_selector(.d({hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_3,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_2,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_1,hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_0}));

  logic [15:0] addr0;
  assign addr0 = (((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_hw_kernel_global_wrapper_stencil_write_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] delay_wire_136;
  always @(posedge clk) begin
    delay_wire_136 <= addr0;
  end
  logic [15:0] delay_wire_137;
  always @(posedge clk) begin
    delay_wire_137 <= hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_bank_selector.out;
  end
  logic [15:0] delay_wire_138;
  always @(posedge clk) begin
    delay_wire_138 <= op_hcompute_hw_kernel_global_wrapper_stencil_write_wen_fsm_out;
  end
  logic [15:0] delay_wire_139;
  always @(posedge clk) begin
    delay_wire_139 <= op_hcompute_hw_kernel_global_wrapper_stencil_write[0];
  end
  logic [15:0] addr1;
  assign addr1 = (((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_140;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_10_read[0] <= end_delay_wire_140;
  end
  logic [15:0] addr2;
  assign addr2 = (((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_141;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_10_read[1] <= end_delay_wire_141;
  end
  logic [15:0] addr3;
  assign addr3 = (((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_142;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_10_read[2] <= end_delay_wire_142;
  end
  logic [15:0] addr4;
  assign addr4 = (((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_143;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_10_read[3] <= end_delay_wire_143;
  end
  logic [15:0] addr5;
  assign addr5 = (((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_144;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_10_read[4] <= end_delay_wire_144;
  end
  logic [15:0] addr6;
  assign addr6 = (((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_145;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_10_read[5] <= end_delay_wire_145;
  end
  logic [15:0] addr7;
  assign addr7 = (((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_146;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_10_read[6] <= end_delay_wire_146;
  end
  logic [15:0] addr8;
  assign addr8 = (((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_10_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_147;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_10_read[7] <= end_delay_wire_147;
  end
  logic [15:0] addr9;
  assign addr9 = (((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_148;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_11_read[0] <= end_delay_wire_148;
  end
  logic [15:0] addr10;
  assign addr10 = (((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_149;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_11_read[1] <= end_delay_wire_149;
  end
  logic [15:0] addr11;
  assign addr11 = (((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_150;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_11_read[2] <= end_delay_wire_150;
  end
  logic [15:0] addr12;
  assign addr12 = (((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_151;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_11_read[3] <= end_delay_wire_151;
  end
  logic [15:0] addr13;
  assign addr13 = (((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_152;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_11_read[4] <= end_delay_wire_152;
  end
  logic [15:0] addr14;
  assign addr14 = (((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_153;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_11_read[5] <= end_delay_wire_153;
  end
  logic [15:0] addr15;
  assign addr15 = (((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_154;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_11_read[6] <= end_delay_wire_154;
  end
  logic [15:0] addr16;
  assign addr16 = (((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_11_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_155;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_11_read[7] <= end_delay_wire_155;
  end
  logic [15:0] addr17;
  assign addr17 = (((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_156;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_12_read[0] <= end_delay_wire_156;
  end
  logic [15:0] addr18;
  assign addr18 = (((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_157;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_12_read[1] <= end_delay_wire_157;
  end
  logic [15:0] addr19;
  assign addr19 = (((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_158;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_12_read[2] <= end_delay_wire_158;
  end
  logic [15:0] addr20;
  assign addr20 = (((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_159;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_12_read[3] <= end_delay_wire_159;
  end
  logic [15:0] addr21;
  assign addr21 = (((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_160;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_12_read[4] <= end_delay_wire_160;
  end
  logic [15:0] addr22;
  assign addr22 = (((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_161;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_12_read[5] <= end_delay_wire_161;
  end
  logic [15:0] addr23;
  assign addr23 = (((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_162;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_12_read[6] <= end_delay_wire_162;
  end
  logic [15:0] addr24;
  assign addr24 = (((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_12_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_163;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_12_read[7] <= end_delay_wire_163;
  end
  logic [15:0] addr25;
  assign addr25 = (((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_164;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_13_read[0] <= end_delay_wire_164;
  end
  logic [15:0] addr26;
  assign addr26 = (((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_165;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_13_read[1] <= end_delay_wire_165;
  end
  logic [15:0] addr27;
  assign addr27 = (((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_166;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_13_read[2] <= end_delay_wire_166;
  end
  logic [15:0] addr28;
  assign addr28 = (((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_167;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_13_read[3] <= end_delay_wire_167;
  end
  logic [15:0] addr29;
  assign addr29 = (((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_168;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_13_read[4] <= end_delay_wire_168;
  end
  logic [15:0] addr30;
  assign addr30 = (((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_169;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_13_read[5] <= end_delay_wire_169;
  end
  logic [15:0] addr31;
  assign addr31 = (((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_170;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_13_read[6] <= end_delay_wire_170;
  end
  logic [15:0] addr32;
  assign addr32 = (((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_13_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_171;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_13_read[7] <= end_delay_wire_171;
  end
  logic [15:0] addr33;
  assign addr33 = (((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_172;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_14_read[0] <= end_delay_wire_172;
  end
  logic [15:0] addr34;
  assign addr34 = (((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_173;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_14_read[1] <= end_delay_wire_173;
  end
  logic [15:0] addr35;
  assign addr35 = (((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_174;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_14_read[2] <= end_delay_wire_174;
  end
  logic [15:0] addr36;
  assign addr36 = (((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_175;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_14_read[3] <= end_delay_wire_175;
  end
  logic [15:0] addr37;
  assign addr37 = (((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_176;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_14_read[4] <= end_delay_wire_176;
  end
  logic [15:0] addr38;
  assign addr38 = (((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_177;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_14_read[5] <= end_delay_wire_177;
  end
  logic [15:0] addr39;
  assign addr39 = (((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_178;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_14_read[6] <= end_delay_wire_178;
  end
  logic [15:0] addr40;
  assign addr40 = (((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_14_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_179;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_14_read[7] <= end_delay_wire_179;
  end
  logic [15:0] addr41;
  assign addr41 = (((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_180;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_15_read[0] <= end_delay_wire_180;
  end
  logic [15:0] addr42;
  assign addr42 = (((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_181;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_15_read[1] <= end_delay_wire_181;
  end
  logic [15:0] addr43;
  assign addr43 = (((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_182;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_15_read[2] <= end_delay_wire_182;
  end
  logic [15:0] addr44;
  assign addr44 = (((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_183;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_15_read[3] <= end_delay_wire_183;
  end
  logic [15:0] addr45;
  assign addr45 = (((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_184;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_15_read[4] <= end_delay_wire_184;
  end
  logic [15:0] addr46;
  assign addr46 = (((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_185;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_15_read[5] <= end_delay_wire_185;
  end
  logic [15:0] addr47;
  assign addr47 = (((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_186;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_15_read[6] <= end_delay_wire_186;
  end
  logic [15:0] addr48;
  assign addr48 = (((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_15_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_187;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_15_read[7] <= end_delay_wire_187;
  end
  logic [15:0] addr49;
  assign addr49 = (((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_188;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_8_read[0] <= end_delay_wire_188;
  end
  logic [15:0] addr50;
  assign addr50 = (((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_189;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_8_read[1] <= end_delay_wire_189;
  end
  logic [15:0] addr51;
  assign addr51 = (((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_190;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_8_read[2] <= end_delay_wire_190;
  end
  logic [15:0] addr52;
  assign addr52 = (((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_191;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_8_read[3] <= end_delay_wire_191;
  end
  logic [15:0] addr53;
  assign addr53 = (((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_192;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_8_read[4] <= end_delay_wire_192;
  end
  logic [15:0] addr54;
  assign addr54 = (((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_193;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_8_read[5] <= end_delay_wire_193;
  end
  logic [15:0] addr55;
  assign addr55 = (((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_194;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_8_read[6] <= end_delay_wire_194;
  end
  logic [15:0] addr56;
  assign addr56 = (((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_8_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_195;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_8_read[7] <= end_delay_wire_195;
  end
  logic [15:0] addr57;
  assign addr57 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_196;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[0] <= end_delay_wire_196;
  end
  logic [15:0] addr58;
  assign addr58 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_197;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[1] <= end_delay_wire_197;
  end
  logic [15:0] addr59;
  assign addr59 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_198;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[2] <= end_delay_wire_198;
  end
  logic [15:0] addr60;
  assign addr60 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_199;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[3] <= end_delay_wire_199;
  end
  logic [15:0] addr61;
  assign addr61 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_200;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[4] <= end_delay_wire_200;
  end
  logic [15:0] addr62;
  assign addr62 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_201;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[5] <= end_delay_wire_201;
  end
  logic [15:0] addr63;
  assign addr63 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_202;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[6] <= end_delay_wire_202;
  end
  logic [15:0] addr64;
  assign addr64 = (((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[1])) - 0))*1+((((1*op_hcompute_conv_stencil_9_read_ctrl_vars_fsm_out[2])) - 0))*3);
  logic [15:0] end_delay_wire_203;
  always @(posedge clk) begin
    op_hcompute_conv_stencil_9_read[7] <= end_delay_wire_203;
  end
  always @(posedge clk) begin
    if (delay_wire_138) begin
      case( delay_wire_137)
        0:bank_0[delay_wire_136] <= delay_wire_139;
        1:bank_1[delay_wire_136] <= delay_wire_139;
        2:bank_2[delay_wire_136] <= delay_wire_139;
        3:bank_3[delay_wire_136] <= delay_wire_139;
        4:bank_4[delay_wire_136] <= delay_wire_139;
        5:bank_5[delay_wire_136] <= delay_wire_139;
        6:bank_6[delay_wire_136] <= delay_wire_139;
        7:bank_7[delay_wire_136] <= delay_wire_139;
        8:bank_8[delay_wire_136] <= delay_wire_139;
        9:bank_9[delay_wire_136] <= delay_wire_139;
        10:bank_10[delay_wire_136] <= delay_wire_139;
        11:bank_11[delay_wire_136] <= delay_wire_139;
        12:bank_12[delay_wire_136] <= delay_wire_139;
        13:bank_13[delay_wire_136] <= delay_wire_139;
        14:bank_14[delay_wire_136] <= delay_wire_139;
        15:bank_15[delay_wire_136] <= delay_wire_139;
        16:bank_16[delay_wire_136] <= delay_wire_139;
        17:bank_17[delay_wire_136] <= delay_wire_139;
        18:bank_18[delay_wire_136] <= delay_wire_139;
        19:bank_19[delay_wire_136] <= delay_wire_139;
        20:bank_20[delay_wire_136] <= delay_wire_139;
        21:bank_21[delay_wire_136] <= delay_wire_139;
        22:bank_22[delay_wire_136] <= delay_wire_139;
        23:bank_23[delay_wire_136] <= delay_wire_139;
        24:bank_24[delay_wire_136] <= delay_wire_139;
        25:bank_25[delay_wire_136] <= delay_wire_139;
        26:bank_26[delay_wire_136] <= delay_wire_139;
        27:bank_27[delay_wire_136] <= delay_wire_139;
        28:bank_28[delay_wire_136] <= delay_wire_139;
        29:bank_29[delay_wire_136] <= delay_wire_139;
        30:bank_30[delay_wire_136] <= delay_wire_139;
        31:bank_31[delay_wire_136] <= delay_wire_139;
        32:bank_32[delay_wire_136] <= delay_wire_139;
        33:bank_33[delay_wire_136] <= delay_wire_139;
        34:bank_34[delay_wire_136] <= delay_wire_139;
        35:bank_35[delay_wire_136] <= delay_wire_139;
        36:bank_36[delay_wire_136] <= delay_wire_139;
        37:bank_37[delay_wire_136] <= delay_wire_139;
        38:bank_38[delay_wire_136] <= delay_wire_139;
        39:bank_39[delay_wire_136] <= delay_wire_139;
        40:bank_40[delay_wire_136] <= delay_wire_139;
        41:bank_41[delay_wire_136] <= delay_wire_139;
        42:bank_42[delay_wire_136] <= delay_wire_139;
        43:bank_43[delay_wire_136] <= delay_wire_139;
        44:bank_44[delay_wire_136] <= delay_wire_139;
        45:bank_45[delay_wire_136] <= delay_wire_139;
        46:bank_46[delay_wire_136] <= delay_wire_139;
        47:bank_47[delay_wire_136] <= delay_wire_139;
        48:bank_48[delay_wire_136] <= delay_wire_139;
        49:bank_49[delay_wire_136] <= delay_wire_139;
        50:bank_50[delay_wire_136] <= delay_wire_139;
        51:bank_51[delay_wire_136] <= delay_wire_139;
        52:bank_52[delay_wire_136] <= delay_wire_139;
        53:bank_53[delay_wire_136] <= delay_wire_139;
        54:bank_54[delay_wire_136] <= delay_wire_139;
        55:bank_55[delay_wire_136] <= delay_wire_139;
        56:bank_56[delay_wire_136] <= delay_wire_139;
        57:bank_57[delay_wire_136] <= delay_wire_139;
        58:bank_58[delay_wire_136] <= delay_wire_139;
        59:bank_59[delay_wire_136] <= delay_wire_139;
        60:bank_60[delay_wire_136] <= delay_wire_139;
        61:bank_61[delay_wire_136] <= delay_wire_139;
        62:bank_62[delay_wire_136] <= delay_wire_139;
        63:bank_63[delay_wire_136] <= delay_wire_139;
        default:bank_63[delay_wire_136] <= delay_wire_139;
      endcase
    end
  end
  always @(posedge clk) begin
    if (op_hcompute_conv_stencil_10_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_bank_selector.out)
        0:end_delay_wire_140 <= bank_0[addr1];
        1:end_delay_wire_140 <= bank_1[addr1];
        2:end_delay_wire_140 <= bank_2[addr1];
        3:end_delay_wire_140 <= bank_3[addr1];
        4:end_delay_wire_140 <= bank_4[addr1];
        5:end_delay_wire_140 <= bank_5[addr1];
        6:end_delay_wire_140 <= bank_6[addr1];
        7:end_delay_wire_140 <= bank_7[addr1];
        8:end_delay_wire_140 <= bank_8[addr1];
        9:end_delay_wire_140 <= bank_9[addr1];
        10:end_delay_wire_140 <= bank_10[addr1];
        11:end_delay_wire_140 <= bank_11[addr1];
        12:end_delay_wire_140 <= bank_12[addr1];
        13:end_delay_wire_140 <= bank_13[addr1];
        14:end_delay_wire_140 <= bank_14[addr1];
        15:end_delay_wire_140 <= bank_15[addr1];
        16:end_delay_wire_140 <= bank_16[addr1];
        17:end_delay_wire_140 <= bank_17[addr1];
        18:end_delay_wire_140 <= bank_18[addr1];
        19:end_delay_wire_140 <= bank_19[addr1];
        20:end_delay_wire_140 <= bank_20[addr1];
        21:end_delay_wire_140 <= bank_21[addr1];
        22:end_delay_wire_140 <= bank_22[addr1];
        23:end_delay_wire_140 <= bank_23[addr1];
        24:end_delay_wire_140 <= bank_24[addr1];
        25:end_delay_wire_140 <= bank_25[addr1];
        26:end_delay_wire_140 <= bank_26[addr1];
        27:end_delay_wire_140 <= bank_27[addr1];
        28:end_delay_wire_140 <= bank_28[addr1];
        29:end_delay_wire_140 <= bank_29[addr1];
        30:end_delay_wire_140 <= bank_30[addr1];
        31:end_delay_wire_140 <= bank_31[addr1];
        32:end_delay_wire_140 <= bank_32[addr1];
        33:end_delay_wire_140 <= bank_33[addr1];
        34:end_delay_wire_140 <= bank_34[addr1];
        35:end_delay_wire_140 <= bank_35[addr1];
        36:end_delay_wire_140 <= bank_36[addr1];
        37:end_delay_wire_140 <= bank_37[addr1];
        38:end_delay_wire_140 <= bank_38[addr1];
        39:end_delay_wire_140 <= bank_39[addr1];
        40:end_delay_wire_140 <= bank_40[addr1];
        41:end_delay_wire_140 <= bank_41[addr1];
        42:end_delay_wire_140 <= bank_42[addr1];
        43:end_delay_wire_140 <= bank_43[addr1];
        44:end_delay_wire_140 <= bank_44[addr1];
        45:end_delay_wire_140 <= bank_45[addr1];
        46:end_delay_wire_140 <= bank_46[addr1];
        47:end_delay_wire_140 <= bank_47[addr1];
        48:end_delay_wire_140 <= bank_48[addr1];
        49:end_delay_wire_140 <= bank_49[addr1];
        50:end_delay_wire_140 <= bank_50[addr1];
        51:end_delay_wire_140 <= bank_51[addr1];
        52:end_delay_wire_140 <= bank_52[addr1];
        53:end_delay_wire_140 <= bank_53[addr1];
        54:end_delay_wire_140 <= bank_54[addr1];
        55:end_delay_wire_140 <= bank_55[addr1];
        56:end_delay_wire_140 <= bank_56[addr1];
        57:end_delay_wire_140 <= bank_57[addr1];
        58:end_delay_wire_140 <= bank_58[addr1];
        59:end_delay_wire_140 <= bank_59[addr1];
        60:end_delay_wire_140 <= bank_60[addr1];
        61:end_delay_wire_140 <= bank_61[addr1];
        62:end_delay_wire_140 <= bank_62[addr1];
        63:end_delay_wire_140 <= bank_63[addr1];
        default:end_delay_wire_140 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_10_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_bank_selector.out)
        0:end_delay_wire_141 <= bank_0[addr2];
        1:end_delay_wire_141 <= bank_1[addr2];
        2:end_delay_wire_141 <= bank_2[addr2];
        3:end_delay_wire_141 <= bank_3[addr2];
        4:end_delay_wire_141 <= bank_4[addr2];
        5:end_delay_wire_141 <= bank_5[addr2];
        6:end_delay_wire_141 <= bank_6[addr2];
        7:end_delay_wire_141 <= bank_7[addr2];
        8:end_delay_wire_141 <= bank_8[addr2];
        9:end_delay_wire_141 <= bank_9[addr2];
        10:end_delay_wire_141 <= bank_10[addr2];
        11:end_delay_wire_141 <= bank_11[addr2];
        12:end_delay_wire_141 <= bank_12[addr2];
        13:end_delay_wire_141 <= bank_13[addr2];
        14:end_delay_wire_141 <= bank_14[addr2];
        15:end_delay_wire_141 <= bank_15[addr2];
        16:end_delay_wire_141 <= bank_16[addr2];
        17:end_delay_wire_141 <= bank_17[addr2];
        18:end_delay_wire_141 <= bank_18[addr2];
        19:end_delay_wire_141 <= bank_19[addr2];
        20:end_delay_wire_141 <= bank_20[addr2];
        21:end_delay_wire_141 <= bank_21[addr2];
        22:end_delay_wire_141 <= bank_22[addr2];
        23:end_delay_wire_141 <= bank_23[addr2];
        24:end_delay_wire_141 <= bank_24[addr2];
        25:end_delay_wire_141 <= bank_25[addr2];
        26:end_delay_wire_141 <= bank_26[addr2];
        27:end_delay_wire_141 <= bank_27[addr2];
        28:end_delay_wire_141 <= bank_28[addr2];
        29:end_delay_wire_141 <= bank_29[addr2];
        30:end_delay_wire_141 <= bank_30[addr2];
        31:end_delay_wire_141 <= bank_31[addr2];
        32:end_delay_wire_141 <= bank_32[addr2];
        33:end_delay_wire_141 <= bank_33[addr2];
        34:end_delay_wire_141 <= bank_34[addr2];
        35:end_delay_wire_141 <= bank_35[addr2];
        36:end_delay_wire_141 <= bank_36[addr2];
        37:end_delay_wire_141 <= bank_37[addr2];
        38:end_delay_wire_141 <= bank_38[addr2];
        39:end_delay_wire_141 <= bank_39[addr2];
        40:end_delay_wire_141 <= bank_40[addr2];
        41:end_delay_wire_141 <= bank_41[addr2];
        42:end_delay_wire_141 <= bank_42[addr2];
        43:end_delay_wire_141 <= bank_43[addr2];
        44:end_delay_wire_141 <= bank_44[addr2];
        45:end_delay_wire_141 <= bank_45[addr2];
        46:end_delay_wire_141 <= bank_46[addr2];
        47:end_delay_wire_141 <= bank_47[addr2];
        48:end_delay_wire_141 <= bank_48[addr2];
        49:end_delay_wire_141 <= bank_49[addr2];
        50:end_delay_wire_141 <= bank_50[addr2];
        51:end_delay_wire_141 <= bank_51[addr2];
        52:end_delay_wire_141 <= bank_52[addr2];
        53:end_delay_wire_141 <= bank_53[addr2];
        54:end_delay_wire_141 <= bank_54[addr2];
        55:end_delay_wire_141 <= bank_55[addr2];
        56:end_delay_wire_141 <= bank_56[addr2];
        57:end_delay_wire_141 <= bank_57[addr2];
        58:end_delay_wire_141 <= bank_58[addr2];
        59:end_delay_wire_141 <= bank_59[addr2];
        60:end_delay_wire_141 <= bank_60[addr2];
        61:end_delay_wire_141 <= bank_61[addr2];
        62:end_delay_wire_141 <= bank_62[addr2];
        63:end_delay_wire_141 <= bank_63[addr2];
        default:end_delay_wire_141 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_10_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_bank_selector.out)
        0:end_delay_wire_142 <= bank_0[addr3];
        1:end_delay_wire_142 <= bank_1[addr3];
        2:end_delay_wire_142 <= bank_2[addr3];
        3:end_delay_wire_142 <= bank_3[addr3];
        4:end_delay_wire_142 <= bank_4[addr3];
        5:end_delay_wire_142 <= bank_5[addr3];
        6:end_delay_wire_142 <= bank_6[addr3];
        7:end_delay_wire_142 <= bank_7[addr3];
        8:end_delay_wire_142 <= bank_8[addr3];
        9:end_delay_wire_142 <= bank_9[addr3];
        10:end_delay_wire_142 <= bank_10[addr3];
        11:end_delay_wire_142 <= bank_11[addr3];
        12:end_delay_wire_142 <= bank_12[addr3];
        13:end_delay_wire_142 <= bank_13[addr3];
        14:end_delay_wire_142 <= bank_14[addr3];
        15:end_delay_wire_142 <= bank_15[addr3];
        16:end_delay_wire_142 <= bank_16[addr3];
        17:end_delay_wire_142 <= bank_17[addr3];
        18:end_delay_wire_142 <= bank_18[addr3];
        19:end_delay_wire_142 <= bank_19[addr3];
        20:end_delay_wire_142 <= bank_20[addr3];
        21:end_delay_wire_142 <= bank_21[addr3];
        22:end_delay_wire_142 <= bank_22[addr3];
        23:end_delay_wire_142 <= bank_23[addr3];
        24:end_delay_wire_142 <= bank_24[addr3];
        25:end_delay_wire_142 <= bank_25[addr3];
        26:end_delay_wire_142 <= bank_26[addr3];
        27:end_delay_wire_142 <= bank_27[addr3];
        28:end_delay_wire_142 <= bank_28[addr3];
        29:end_delay_wire_142 <= bank_29[addr3];
        30:end_delay_wire_142 <= bank_30[addr3];
        31:end_delay_wire_142 <= bank_31[addr3];
        32:end_delay_wire_142 <= bank_32[addr3];
        33:end_delay_wire_142 <= bank_33[addr3];
        34:end_delay_wire_142 <= bank_34[addr3];
        35:end_delay_wire_142 <= bank_35[addr3];
        36:end_delay_wire_142 <= bank_36[addr3];
        37:end_delay_wire_142 <= bank_37[addr3];
        38:end_delay_wire_142 <= bank_38[addr3];
        39:end_delay_wire_142 <= bank_39[addr3];
        40:end_delay_wire_142 <= bank_40[addr3];
        41:end_delay_wire_142 <= bank_41[addr3];
        42:end_delay_wire_142 <= bank_42[addr3];
        43:end_delay_wire_142 <= bank_43[addr3];
        44:end_delay_wire_142 <= bank_44[addr3];
        45:end_delay_wire_142 <= bank_45[addr3];
        46:end_delay_wire_142 <= bank_46[addr3];
        47:end_delay_wire_142 <= bank_47[addr3];
        48:end_delay_wire_142 <= bank_48[addr3];
        49:end_delay_wire_142 <= bank_49[addr3];
        50:end_delay_wire_142 <= bank_50[addr3];
        51:end_delay_wire_142 <= bank_51[addr3];
        52:end_delay_wire_142 <= bank_52[addr3];
        53:end_delay_wire_142 <= bank_53[addr3];
        54:end_delay_wire_142 <= bank_54[addr3];
        55:end_delay_wire_142 <= bank_55[addr3];
        56:end_delay_wire_142 <= bank_56[addr3];
        57:end_delay_wire_142 <= bank_57[addr3];
        58:end_delay_wire_142 <= bank_58[addr3];
        59:end_delay_wire_142 <= bank_59[addr3];
        60:end_delay_wire_142 <= bank_60[addr3];
        61:end_delay_wire_142 <= bank_61[addr3];
        62:end_delay_wire_142 <= bank_62[addr3];
        63:end_delay_wire_142 <= bank_63[addr3];
        default:end_delay_wire_142 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_10_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_bank_selector.out)
        0:end_delay_wire_143 <= bank_0[addr4];
        1:end_delay_wire_143 <= bank_1[addr4];
        2:end_delay_wire_143 <= bank_2[addr4];
        3:end_delay_wire_143 <= bank_3[addr4];
        4:end_delay_wire_143 <= bank_4[addr4];
        5:end_delay_wire_143 <= bank_5[addr4];
        6:end_delay_wire_143 <= bank_6[addr4];
        7:end_delay_wire_143 <= bank_7[addr4];
        8:end_delay_wire_143 <= bank_8[addr4];
        9:end_delay_wire_143 <= bank_9[addr4];
        10:end_delay_wire_143 <= bank_10[addr4];
        11:end_delay_wire_143 <= bank_11[addr4];
        12:end_delay_wire_143 <= bank_12[addr4];
        13:end_delay_wire_143 <= bank_13[addr4];
        14:end_delay_wire_143 <= bank_14[addr4];
        15:end_delay_wire_143 <= bank_15[addr4];
        16:end_delay_wire_143 <= bank_16[addr4];
        17:end_delay_wire_143 <= bank_17[addr4];
        18:end_delay_wire_143 <= bank_18[addr4];
        19:end_delay_wire_143 <= bank_19[addr4];
        20:end_delay_wire_143 <= bank_20[addr4];
        21:end_delay_wire_143 <= bank_21[addr4];
        22:end_delay_wire_143 <= bank_22[addr4];
        23:end_delay_wire_143 <= bank_23[addr4];
        24:end_delay_wire_143 <= bank_24[addr4];
        25:end_delay_wire_143 <= bank_25[addr4];
        26:end_delay_wire_143 <= bank_26[addr4];
        27:end_delay_wire_143 <= bank_27[addr4];
        28:end_delay_wire_143 <= bank_28[addr4];
        29:end_delay_wire_143 <= bank_29[addr4];
        30:end_delay_wire_143 <= bank_30[addr4];
        31:end_delay_wire_143 <= bank_31[addr4];
        32:end_delay_wire_143 <= bank_32[addr4];
        33:end_delay_wire_143 <= bank_33[addr4];
        34:end_delay_wire_143 <= bank_34[addr4];
        35:end_delay_wire_143 <= bank_35[addr4];
        36:end_delay_wire_143 <= bank_36[addr4];
        37:end_delay_wire_143 <= bank_37[addr4];
        38:end_delay_wire_143 <= bank_38[addr4];
        39:end_delay_wire_143 <= bank_39[addr4];
        40:end_delay_wire_143 <= bank_40[addr4];
        41:end_delay_wire_143 <= bank_41[addr4];
        42:end_delay_wire_143 <= bank_42[addr4];
        43:end_delay_wire_143 <= bank_43[addr4];
        44:end_delay_wire_143 <= bank_44[addr4];
        45:end_delay_wire_143 <= bank_45[addr4];
        46:end_delay_wire_143 <= bank_46[addr4];
        47:end_delay_wire_143 <= bank_47[addr4];
        48:end_delay_wire_143 <= bank_48[addr4];
        49:end_delay_wire_143 <= bank_49[addr4];
        50:end_delay_wire_143 <= bank_50[addr4];
        51:end_delay_wire_143 <= bank_51[addr4];
        52:end_delay_wire_143 <= bank_52[addr4];
        53:end_delay_wire_143 <= bank_53[addr4];
        54:end_delay_wire_143 <= bank_54[addr4];
        55:end_delay_wire_143 <= bank_55[addr4];
        56:end_delay_wire_143 <= bank_56[addr4];
        57:end_delay_wire_143 <= bank_57[addr4];
        58:end_delay_wire_143 <= bank_58[addr4];
        59:end_delay_wire_143 <= bank_59[addr4];
        60:end_delay_wire_143 <= bank_60[addr4];
        61:end_delay_wire_143 <= bank_61[addr4];
        62:end_delay_wire_143 <= bank_62[addr4];
        63:end_delay_wire_143 <= bank_63[addr4];
        default:end_delay_wire_143 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_10_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_bank_selector.out)
        0:end_delay_wire_144 <= bank_0[addr5];
        1:end_delay_wire_144 <= bank_1[addr5];
        2:end_delay_wire_144 <= bank_2[addr5];
        3:end_delay_wire_144 <= bank_3[addr5];
        4:end_delay_wire_144 <= bank_4[addr5];
        5:end_delay_wire_144 <= bank_5[addr5];
        6:end_delay_wire_144 <= bank_6[addr5];
        7:end_delay_wire_144 <= bank_7[addr5];
        8:end_delay_wire_144 <= bank_8[addr5];
        9:end_delay_wire_144 <= bank_9[addr5];
        10:end_delay_wire_144 <= bank_10[addr5];
        11:end_delay_wire_144 <= bank_11[addr5];
        12:end_delay_wire_144 <= bank_12[addr5];
        13:end_delay_wire_144 <= bank_13[addr5];
        14:end_delay_wire_144 <= bank_14[addr5];
        15:end_delay_wire_144 <= bank_15[addr5];
        16:end_delay_wire_144 <= bank_16[addr5];
        17:end_delay_wire_144 <= bank_17[addr5];
        18:end_delay_wire_144 <= bank_18[addr5];
        19:end_delay_wire_144 <= bank_19[addr5];
        20:end_delay_wire_144 <= bank_20[addr5];
        21:end_delay_wire_144 <= bank_21[addr5];
        22:end_delay_wire_144 <= bank_22[addr5];
        23:end_delay_wire_144 <= bank_23[addr5];
        24:end_delay_wire_144 <= bank_24[addr5];
        25:end_delay_wire_144 <= bank_25[addr5];
        26:end_delay_wire_144 <= bank_26[addr5];
        27:end_delay_wire_144 <= bank_27[addr5];
        28:end_delay_wire_144 <= bank_28[addr5];
        29:end_delay_wire_144 <= bank_29[addr5];
        30:end_delay_wire_144 <= bank_30[addr5];
        31:end_delay_wire_144 <= bank_31[addr5];
        32:end_delay_wire_144 <= bank_32[addr5];
        33:end_delay_wire_144 <= bank_33[addr5];
        34:end_delay_wire_144 <= bank_34[addr5];
        35:end_delay_wire_144 <= bank_35[addr5];
        36:end_delay_wire_144 <= bank_36[addr5];
        37:end_delay_wire_144 <= bank_37[addr5];
        38:end_delay_wire_144 <= bank_38[addr5];
        39:end_delay_wire_144 <= bank_39[addr5];
        40:end_delay_wire_144 <= bank_40[addr5];
        41:end_delay_wire_144 <= bank_41[addr5];
        42:end_delay_wire_144 <= bank_42[addr5];
        43:end_delay_wire_144 <= bank_43[addr5];
        44:end_delay_wire_144 <= bank_44[addr5];
        45:end_delay_wire_144 <= bank_45[addr5];
        46:end_delay_wire_144 <= bank_46[addr5];
        47:end_delay_wire_144 <= bank_47[addr5];
        48:end_delay_wire_144 <= bank_48[addr5];
        49:end_delay_wire_144 <= bank_49[addr5];
        50:end_delay_wire_144 <= bank_50[addr5];
        51:end_delay_wire_144 <= bank_51[addr5];
        52:end_delay_wire_144 <= bank_52[addr5];
        53:end_delay_wire_144 <= bank_53[addr5];
        54:end_delay_wire_144 <= bank_54[addr5];
        55:end_delay_wire_144 <= bank_55[addr5];
        56:end_delay_wire_144 <= bank_56[addr5];
        57:end_delay_wire_144 <= bank_57[addr5];
        58:end_delay_wire_144 <= bank_58[addr5];
        59:end_delay_wire_144 <= bank_59[addr5];
        60:end_delay_wire_144 <= bank_60[addr5];
        61:end_delay_wire_144 <= bank_61[addr5];
        62:end_delay_wire_144 <= bank_62[addr5];
        63:end_delay_wire_144 <= bank_63[addr5];
        default:end_delay_wire_144 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_10_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_bank_selector.out)
        0:end_delay_wire_145 <= bank_0[addr6];
        1:end_delay_wire_145 <= bank_1[addr6];
        2:end_delay_wire_145 <= bank_2[addr6];
        3:end_delay_wire_145 <= bank_3[addr6];
        4:end_delay_wire_145 <= bank_4[addr6];
        5:end_delay_wire_145 <= bank_5[addr6];
        6:end_delay_wire_145 <= bank_6[addr6];
        7:end_delay_wire_145 <= bank_7[addr6];
        8:end_delay_wire_145 <= bank_8[addr6];
        9:end_delay_wire_145 <= bank_9[addr6];
        10:end_delay_wire_145 <= bank_10[addr6];
        11:end_delay_wire_145 <= bank_11[addr6];
        12:end_delay_wire_145 <= bank_12[addr6];
        13:end_delay_wire_145 <= bank_13[addr6];
        14:end_delay_wire_145 <= bank_14[addr6];
        15:end_delay_wire_145 <= bank_15[addr6];
        16:end_delay_wire_145 <= bank_16[addr6];
        17:end_delay_wire_145 <= bank_17[addr6];
        18:end_delay_wire_145 <= bank_18[addr6];
        19:end_delay_wire_145 <= bank_19[addr6];
        20:end_delay_wire_145 <= bank_20[addr6];
        21:end_delay_wire_145 <= bank_21[addr6];
        22:end_delay_wire_145 <= bank_22[addr6];
        23:end_delay_wire_145 <= bank_23[addr6];
        24:end_delay_wire_145 <= bank_24[addr6];
        25:end_delay_wire_145 <= bank_25[addr6];
        26:end_delay_wire_145 <= bank_26[addr6];
        27:end_delay_wire_145 <= bank_27[addr6];
        28:end_delay_wire_145 <= bank_28[addr6];
        29:end_delay_wire_145 <= bank_29[addr6];
        30:end_delay_wire_145 <= bank_30[addr6];
        31:end_delay_wire_145 <= bank_31[addr6];
        32:end_delay_wire_145 <= bank_32[addr6];
        33:end_delay_wire_145 <= bank_33[addr6];
        34:end_delay_wire_145 <= bank_34[addr6];
        35:end_delay_wire_145 <= bank_35[addr6];
        36:end_delay_wire_145 <= bank_36[addr6];
        37:end_delay_wire_145 <= bank_37[addr6];
        38:end_delay_wire_145 <= bank_38[addr6];
        39:end_delay_wire_145 <= bank_39[addr6];
        40:end_delay_wire_145 <= bank_40[addr6];
        41:end_delay_wire_145 <= bank_41[addr6];
        42:end_delay_wire_145 <= bank_42[addr6];
        43:end_delay_wire_145 <= bank_43[addr6];
        44:end_delay_wire_145 <= bank_44[addr6];
        45:end_delay_wire_145 <= bank_45[addr6];
        46:end_delay_wire_145 <= bank_46[addr6];
        47:end_delay_wire_145 <= bank_47[addr6];
        48:end_delay_wire_145 <= bank_48[addr6];
        49:end_delay_wire_145 <= bank_49[addr6];
        50:end_delay_wire_145 <= bank_50[addr6];
        51:end_delay_wire_145 <= bank_51[addr6];
        52:end_delay_wire_145 <= bank_52[addr6];
        53:end_delay_wire_145 <= bank_53[addr6];
        54:end_delay_wire_145 <= bank_54[addr6];
        55:end_delay_wire_145 <= bank_55[addr6];
        56:end_delay_wire_145 <= bank_56[addr6];
        57:end_delay_wire_145 <= bank_57[addr6];
        58:end_delay_wire_145 <= bank_58[addr6];
        59:end_delay_wire_145 <= bank_59[addr6];
        60:end_delay_wire_145 <= bank_60[addr6];
        61:end_delay_wire_145 <= bank_61[addr6];
        62:end_delay_wire_145 <= bank_62[addr6];
        63:end_delay_wire_145 <= bank_63[addr6];
        default:end_delay_wire_145 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_10_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_bank_selector.out)
        0:end_delay_wire_146 <= bank_0[addr7];
        1:end_delay_wire_146 <= bank_1[addr7];
        2:end_delay_wire_146 <= bank_2[addr7];
        3:end_delay_wire_146 <= bank_3[addr7];
        4:end_delay_wire_146 <= bank_4[addr7];
        5:end_delay_wire_146 <= bank_5[addr7];
        6:end_delay_wire_146 <= bank_6[addr7];
        7:end_delay_wire_146 <= bank_7[addr7];
        8:end_delay_wire_146 <= bank_8[addr7];
        9:end_delay_wire_146 <= bank_9[addr7];
        10:end_delay_wire_146 <= bank_10[addr7];
        11:end_delay_wire_146 <= bank_11[addr7];
        12:end_delay_wire_146 <= bank_12[addr7];
        13:end_delay_wire_146 <= bank_13[addr7];
        14:end_delay_wire_146 <= bank_14[addr7];
        15:end_delay_wire_146 <= bank_15[addr7];
        16:end_delay_wire_146 <= bank_16[addr7];
        17:end_delay_wire_146 <= bank_17[addr7];
        18:end_delay_wire_146 <= bank_18[addr7];
        19:end_delay_wire_146 <= bank_19[addr7];
        20:end_delay_wire_146 <= bank_20[addr7];
        21:end_delay_wire_146 <= bank_21[addr7];
        22:end_delay_wire_146 <= bank_22[addr7];
        23:end_delay_wire_146 <= bank_23[addr7];
        24:end_delay_wire_146 <= bank_24[addr7];
        25:end_delay_wire_146 <= bank_25[addr7];
        26:end_delay_wire_146 <= bank_26[addr7];
        27:end_delay_wire_146 <= bank_27[addr7];
        28:end_delay_wire_146 <= bank_28[addr7];
        29:end_delay_wire_146 <= bank_29[addr7];
        30:end_delay_wire_146 <= bank_30[addr7];
        31:end_delay_wire_146 <= bank_31[addr7];
        32:end_delay_wire_146 <= bank_32[addr7];
        33:end_delay_wire_146 <= bank_33[addr7];
        34:end_delay_wire_146 <= bank_34[addr7];
        35:end_delay_wire_146 <= bank_35[addr7];
        36:end_delay_wire_146 <= bank_36[addr7];
        37:end_delay_wire_146 <= bank_37[addr7];
        38:end_delay_wire_146 <= bank_38[addr7];
        39:end_delay_wire_146 <= bank_39[addr7];
        40:end_delay_wire_146 <= bank_40[addr7];
        41:end_delay_wire_146 <= bank_41[addr7];
        42:end_delay_wire_146 <= bank_42[addr7];
        43:end_delay_wire_146 <= bank_43[addr7];
        44:end_delay_wire_146 <= bank_44[addr7];
        45:end_delay_wire_146 <= bank_45[addr7];
        46:end_delay_wire_146 <= bank_46[addr7];
        47:end_delay_wire_146 <= bank_47[addr7];
        48:end_delay_wire_146 <= bank_48[addr7];
        49:end_delay_wire_146 <= bank_49[addr7];
        50:end_delay_wire_146 <= bank_50[addr7];
        51:end_delay_wire_146 <= bank_51[addr7];
        52:end_delay_wire_146 <= bank_52[addr7];
        53:end_delay_wire_146 <= bank_53[addr7];
        54:end_delay_wire_146 <= bank_54[addr7];
        55:end_delay_wire_146 <= bank_55[addr7];
        56:end_delay_wire_146 <= bank_56[addr7];
        57:end_delay_wire_146 <= bank_57[addr7];
        58:end_delay_wire_146 <= bank_58[addr7];
        59:end_delay_wire_146 <= bank_59[addr7];
        60:end_delay_wire_146 <= bank_60[addr7];
        61:end_delay_wire_146 <= bank_61[addr7];
        62:end_delay_wire_146 <= bank_62[addr7];
        63:end_delay_wire_146 <= bank_63[addr7];
        default:end_delay_wire_146 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_10_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_bank_selector.out)
        0:end_delay_wire_147 <= bank_0[addr8];
        1:end_delay_wire_147 <= bank_1[addr8];
        2:end_delay_wire_147 <= bank_2[addr8];
        3:end_delay_wire_147 <= bank_3[addr8];
        4:end_delay_wire_147 <= bank_4[addr8];
        5:end_delay_wire_147 <= bank_5[addr8];
        6:end_delay_wire_147 <= bank_6[addr8];
        7:end_delay_wire_147 <= bank_7[addr8];
        8:end_delay_wire_147 <= bank_8[addr8];
        9:end_delay_wire_147 <= bank_9[addr8];
        10:end_delay_wire_147 <= bank_10[addr8];
        11:end_delay_wire_147 <= bank_11[addr8];
        12:end_delay_wire_147 <= bank_12[addr8];
        13:end_delay_wire_147 <= bank_13[addr8];
        14:end_delay_wire_147 <= bank_14[addr8];
        15:end_delay_wire_147 <= bank_15[addr8];
        16:end_delay_wire_147 <= bank_16[addr8];
        17:end_delay_wire_147 <= bank_17[addr8];
        18:end_delay_wire_147 <= bank_18[addr8];
        19:end_delay_wire_147 <= bank_19[addr8];
        20:end_delay_wire_147 <= bank_20[addr8];
        21:end_delay_wire_147 <= bank_21[addr8];
        22:end_delay_wire_147 <= bank_22[addr8];
        23:end_delay_wire_147 <= bank_23[addr8];
        24:end_delay_wire_147 <= bank_24[addr8];
        25:end_delay_wire_147 <= bank_25[addr8];
        26:end_delay_wire_147 <= bank_26[addr8];
        27:end_delay_wire_147 <= bank_27[addr8];
        28:end_delay_wire_147 <= bank_28[addr8];
        29:end_delay_wire_147 <= bank_29[addr8];
        30:end_delay_wire_147 <= bank_30[addr8];
        31:end_delay_wire_147 <= bank_31[addr8];
        32:end_delay_wire_147 <= bank_32[addr8];
        33:end_delay_wire_147 <= bank_33[addr8];
        34:end_delay_wire_147 <= bank_34[addr8];
        35:end_delay_wire_147 <= bank_35[addr8];
        36:end_delay_wire_147 <= bank_36[addr8];
        37:end_delay_wire_147 <= bank_37[addr8];
        38:end_delay_wire_147 <= bank_38[addr8];
        39:end_delay_wire_147 <= bank_39[addr8];
        40:end_delay_wire_147 <= bank_40[addr8];
        41:end_delay_wire_147 <= bank_41[addr8];
        42:end_delay_wire_147 <= bank_42[addr8];
        43:end_delay_wire_147 <= bank_43[addr8];
        44:end_delay_wire_147 <= bank_44[addr8];
        45:end_delay_wire_147 <= bank_45[addr8];
        46:end_delay_wire_147 <= bank_46[addr8];
        47:end_delay_wire_147 <= bank_47[addr8];
        48:end_delay_wire_147 <= bank_48[addr8];
        49:end_delay_wire_147 <= bank_49[addr8];
        50:end_delay_wire_147 <= bank_50[addr8];
        51:end_delay_wire_147 <= bank_51[addr8];
        52:end_delay_wire_147 <= bank_52[addr8];
        53:end_delay_wire_147 <= bank_53[addr8];
        54:end_delay_wire_147 <= bank_54[addr8];
        55:end_delay_wire_147 <= bank_55[addr8];
        56:end_delay_wire_147 <= bank_56[addr8];
        57:end_delay_wire_147 <= bank_57[addr8];
        58:end_delay_wire_147 <= bank_58[addr8];
        59:end_delay_wire_147 <= bank_59[addr8];
        60:end_delay_wire_147 <= bank_60[addr8];
        61:end_delay_wire_147 <= bank_61[addr8];
        62:end_delay_wire_147 <= bank_62[addr8];
        63:end_delay_wire_147 <= bank_63[addr8];
        default:end_delay_wire_147 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_11_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_bank_selector.out)
        0:end_delay_wire_148 <= bank_0[addr9];
        1:end_delay_wire_148 <= bank_1[addr9];
        2:end_delay_wire_148 <= bank_2[addr9];
        3:end_delay_wire_148 <= bank_3[addr9];
        4:end_delay_wire_148 <= bank_4[addr9];
        5:end_delay_wire_148 <= bank_5[addr9];
        6:end_delay_wire_148 <= bank_6[addr9];
        7:end_delay_wire_148 <= bank_7[addr9];
        8:end_delay_wire_148 <= bank_8[addr9];
        9:end_delay_wire_148 <= bank_9[addr9];
        10:end_delay_wire_148 <= bank_10[addr9];
        11:end_delay_wire_148 <= bank_11[addr9];
        12:end_delay_wire_148 <= bank_12[addr9];
        13:end_delay_wire_148 <= bank_13[addr9];
        14:end_delay_wire_148 <= bank_14[addr9];
        15:end_delay_wire_148 <= bank_15[addr9];
        16:end_delay_wire_148 <= bank_16[addr9];
        17:end_delay_wire_148 <= bank_17[addr9];
        18:end_delay_wire_148 <= bank_18[addr9];
        19:end_delay_wire_148 <= bank_19[addr9];
        20:end_delay_wire_148 <= bank_20[addr9];
        21:end_delay_wire_148 <= bank_21[addr9];
        22:end_delay_wire_148 <= bank_22[addr9];
        23:end_delay_wire_148 <= bank_23[addr9];
        24:end_delay_wire_148 <= bank_24[addr9];
        25:end_delay_wire_148 <= bank_25[addr9];
        26:end_delay_wire_148 <= bank_26[addr9];
        27:end_delay_wire_148 <= bank_27[addr9];
        28:end_delay_wire_148 <= bank_28[addr9];
        29:end_delay_wire_148 <= bank_29[addr9];
        30:end_delay_wire_148 <= bank_30[addr9];
        31:end_delay_wire_148 <= bank_31[addr9];
        32:end_delay_wire_148 <= bank_32[addr9];
        33:end_delay_wire_148 <= bank_33[addr9];
        34:end_delay_wire_148 <= bank_34[addr9];
        35:end_delay_wire_148 <= bank_35[addr9];
        36:end_delay_wire_148 <= bank_36[addr9];
        37:end_delay_wire_148 <= bank_37[addr9];
        38:end_delay_wire_148 <= bank_38[addr9];
        39:end_delay_wire_148 <= bank_39[addr9];
        40:end_delay_wire_148 <= bank_40[addr9];
        41:end_delay_wire_148 <= bank_41[addr9];
        42:end_delay_wire_148 <= bank_42[addr9];
        43:end_delay_wire_148 <= bank_43[addr9];
        44:end_delay_wire_148 <= bank_44[addr9];
        45:end_delay_wire_148 <= bank_45[addr9];
        46:end_delay_wire_148 <= bank_46[addr9];
        47:end_delay_wire_148 <= bank_47[addr9];
        48:end_delay_wire_148 <= bank_48[addr9];
        49:end_delay_wire_148 <= bank_49[addr9];
        50:end_delay_wire_148 <= bank_50[addr9];
        51:end_delay_wire_148 <= bank_51[addr9];
        52:end_delay_wire_148 <= bank_52[addr9];
        53:end_delay_wire_148 <= bank_53[addr9];
        54:end_delay_wire_148 <= bank_54[addr9];
        55:end_delay_wire_148 <= bank_55[addr9];
        56:end_delay_wire_148 <= bank_56[addr9];
        57:end_delay_wire_148 <= bank_57[addr9];
        58:end_delay_wire_148 <= bank_58[addr9];
        59:end_delay_wire_148 <= bank_59[addr9];
        60:end_delay_wire_148 <= bank_60[addr9];
        61:end_delay_wire_148 <= bank_61[addr9];
        62:end_delay_wire_148 <= bank_62[addr9];
        63:end_delay_wire_148 <= bank_63[addr9];
        default:end_delay_wire_148 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_11_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_bank_selector.out)
        0:end_delay_wire_149 <= bank_0[addr10];
        1:end_delay_wire_149 <= bank_1[addr10];
        2:end_delay_wire_149 <= bank_2[addr10];
        3:end_delay_wire_149 <= bank_3[addr10];
        4:end_delay_wire_149 <= bank_4[addr10];
        5:end_delay_wire_149 <= bank_5[addr10];
        6:end_delay_wire_149 <= bank_6[addr10];
        7:end_delay_wire_149 <= bank_7[addr10];
        8:end_delay_wire_149 <= bank_8[addr10];
        9:end_delay_wire_149 <= bank_9[addr10];
        10:end_delay_wire_149 <= bank_10[addr10];
        11:end_delay_wire_149 <= bank_11[addr10];
        12:end_delay_wire_149 <= bank_12[addr10];
        13:end_delay_wire_149 <= bank_13[addr10];
        14:end_delay_wire_149 <= bank_14[addr10];
        15:end_delay_wire_149 <= bank_15[addr10];
        16:end_delay_wire_149 <= bank_16[addr10];
        17:end_delay_wire_149 <= bank_17[addr10];
        18:end_delay_wire_149 <= bank_18[addr10];
        19:end_delay_wire_149 <= bank_19[addr10];
        20:end_delay_wire_149 <= bank_20[addr10];
        21:end_delay_wire_149 <= bank_21[addr10];
        22:end_delay_wire_149 <= bank_22[addr10];
        23:end_delay_wire_149 <= bank_23[addr10];
        24:end_delay_wire_149 <= bank_24[addr10];
        25:end_delay_wire_149 <= bank_25[addr10];
        26:end_delay_wire_149 <= bank_26[addr10];
        27:end_delay_wire_149 <= bank_27[addr10];
        28:end_delay_wire_149 <= bank_28[addr10];
        29:end_delay_wire_149 <= bank_29[addr10];
        30:end_delay_wire_149 <= bank_30[addr10];
        31:end_delay_wire_149 <= bank_31[addr10];
        32:end_delay_wire_149 <= bank_32[addr10];
        33:end_delay_wire_149 <= bank_33[addr10];
        34:end_delay_wire_149 <= bank_34[addr10];
        35:end_delay_wire_149 <= bank_35[addr10];
        36:end_delay_wire_149 <= bank_36[addr10];
        37:end_delay_wire_149 <= bank_37[addr10];
        38:end_delay_wire_149 <= bank_38[addr10];
        39:end_delay_wire_149 <= bank_39[addr10];
        40:end_delay_wire_149 <= bank_40[addr10];
        41:end_delay_wire_149 <= bank_41[addr10];
        42:end_delay_wire_149 <= bank_42[addr10];
        43:end_delay_wire_149 <= bank_43[addr10];
        44:end_delay_wire_149 <= bank_44[addr10];
        45:end_delay_wire_149 <= bank_45[addr10];
        46:end_delay_wire_149 <= bank_46[addr10];
        47:end_delay_wire_149 <= bank_47[addr10];
        48:end_delay_wire_149 <= bank_48[addr10];
        49:end_delay_wire_149 <= bank_49[addr10];
        50:end_delay_wire_149 <= bank_50[addr10];
        51:end_delay_wire_149 <= bank_51[addr10];
        52:end_delay_wire_149 <= bank_52[addr10];
        53:end_delay_wire_149 <= bank_53[addr10];
        54:end_delay_wire_149 <= bank_54[addr10];
        55:end_delay_wire_149 <= bank_55[addr10];
        56:end_delay_wire_149 <= bank_56[addr10];
        57:end_delay_wire_149 <= bank_57[addr10];
        58:end_delay_wire_149 <= bank_58[addr10];
        59:end_delay_wire_149 <= bank_59[addr10];
        60:end_delay_wire_149 <= bank_60[addr10];
        61:end_delay_wire_149 <= bank_61[addr10];
        62:end_delay_wire_149 <= bank_62[addr10];
        63:end_delay_wire_149 <= bank_63[addr10];
        default:end_delay_wire_149 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_11_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_bank_selector.out)
        0:end_delay_wire_150 <= bank_0[addr11];
        1:end_delay_wire_150 <= bank_1[addr11];
        2:end_delay_wire_150 <= bank_2[addr11];
        3:end_delay_wire_150 <= bank_3[addr11];
        4:end_delay_wire_150 <= bank_4[addr11];
        5:end_delay_wire_150 <= bank_5[addr11];
        6:end_delay_wire_150 <= bank_6[addr11];
        7:end_delay_wire_150 <= bank_7[addr11];
        8:end_delay_wire_150 <= bank_8[addr11];
        9:end_delay_wire_150 <= bank_9[addr11];
        10:end_delay_wire_150 <= bank_10[addr11];
        11:end_delay_wire_150 <= bank_11[addr11];
        12:end_delay_wire_150 <= bank_12[addr11];
        13:end_delay_wire_150 <= bank_13[addr11];
        14:end_delay_wire_150 <= bank_14[addr11];
        15:end_delay_wire_150 <= bank_15[addr11];
        16:end_delay_wire_150 <= bank_16[addr11];
        17:end_delay_wire_150 <= bank_17[addr11];
        18:end_delay_wire_150 <= bank_18[addr11];
        19:end_delay_wire_150 <= bank_19[addr11];
        20:end_delay_wire_150 <= bank_20[addr11];
        21:end_delay_wire_150 <= bank_21[addr11];
        22:end_delay_wire_150 <= bank_22[addr11];
        23:end_delay_wire_150 <= bank_23[addr11];
        24:end_delay_wire_150 <= bank_24[addr11];
        25:end_delay_wire_150 <= bank_25[addr11];
        26:end_delay_wire_150 <= bank_26[addr11];
        27:end_delay_wire_150 <= bank_27[addr11];
        28:end_delay_wire_150 <= bank_28[addr11];
        29:end_delay_wire_150 <= bank_29[addr11];
        30:end_delay_wire_150 <= bank_30[addr11];
        31:end_delay_wire_150 <= bank_31[addr11];
        32:end_delay_wire_150 <= bank_32[addr11];
        33:end_delay_wire_150 <= bank_33[addr11];
        34:end_delay_wire_150 <= bank_34[addr11];
        35:end_delay_wire_150 <= bank_35[addr11];
        36:end_delay_wire_150 <= bank_36[addr11];
        37:end_delay_wire_150 <= bank_37[addr11];
        38:end_delay_wire_150 <= bank_38[addr11];
        39:end_delay_wire_150 <= bank_39[addr11];
        40:end_delay_wire_150 <= bank_40[addr11];
        41:end_delay_wire_150 <= bank_41[addr11];
        42:end_delay_wire_150 <= bank_42[addr11];
        43:end_delay_wire_150 <= bank_43[addr11];
        44:end_delay_wire_150 <= bank_44[addr11];
        45:end_delay_wire_150 <= bank_45[addr11];
        46:end_delay_wire_150 <= bank_46[addr11];
        47:end_delay_wire_150 <= bank_47[addr11];
        48:end_delay_wire_150 <= bank_48[addr11];
        49:end_delay_wire_150 <= bank_49[addr11];
        50:end_delay_wire_150 <= bank_50[addr11];
        51:end_delay_wire_150 <= bank_51[addr11];
        52:end_delay_wire_150 <= bank_52[addr11];
        53:end_delay_wire_150 <= bank_53[addr11];
        54:end_delay_wire_150 <= bank_54[addr11];
        55:end_delay_wire_150 <= bank_55[addr11];
        56:end_delay_wire_150 <= bank_56[addr11];
        57:end_delay_wire_150 <= bank_57[addr11];
        58:end_delay_wire_150 <= bank_58[addr11];
        59:end_delay_wire_150 <= bank_59[addr11];
        60:end_delay_wire_150 <= bank_60[addr11];
        61:end_delay_wire_150 <= bank_61[addr11];
        62:end_delay_wire_150 <= bank_62[addr11];
        63:end_delay_wire_150 <= bank_63[addr11];
        default:end_delay_wire_150 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_11_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_bank_selector.out)
        0:end_delay_wire_151 <= bank_0[addr12];
        1:end_delay_wire_151 <= bank_1[addr12];
        2:end_delay_wire_151 <= bank_2[addr12];
        3:end_delay_wire_151 <= bank_3[addr12];
        4:end_delay_wire_151 <= bank_4[addr12];
        5:end_delay_wire_151 <= bank_5[addr12];
        6:end_delay_wire_151 <= bank_6[addr12];
        7:end_delay_wire_151 <= bank_7[addr12];
        8:end_delay_wire_151 <= bank_8[addr12];
        9:end_delay_wire_151 <= bank_9[addr12];
        10:end_delay_wire_151 <= bank_10[addr12];
        11:end_delay_wire_151 <= bank_11[addr12];
        12:end_delay_wire_151 <= bank_12[addr12];
        13:end_delay_wire_151 <= bank_13[addr12];
        14:end_delay_wire_151 <= bank_14[addr12];
        15:end_delay_wire_151 <= bank_15[addr12];
        16:end_delay_wire_151 <= bank_16[addr12];
        17:end_delay_wire_151 <= bank_17[addr12];
        18:end_delay_wire_151 <= bank_18[addr12];
        19:end_delay_wire_151 <= bank_19[addr12];
        20:end_delay_wire_151 <= bank_20[addr12];
        21:end_delay_wire_151 <= bank_21[addr12];
        22:end_delay_wire_151 <= bank_22[addr12];
        23:end_delay_wire_151 <= bank_23[addr12];
        24:end_delay_wire_151 <= bank_24[addr12];
        25:end_delay_wire_151 <= bank_25[addr12];
        26:end_delay_wire_151 <= bank_26[addr12];
        27:end_delay_wire_151 <= bank_27[addr12];
        28:end_delay_wire_151 <= bank_28[addr12];
        29:end_delay_wire_151 <= bank_29[addr12];
        30:end_delay_wire_151 <= bank_30[addr12];
        31:end_delay_wire_151 <= bank_31[addr12];
        32:end_delay_wire_151 <= bank_32[addr12];
        33:end_delay_wire_151 <= bank_33[addr12];
        34:end_delay_wire_151 <= bank_34[addr12];
        35:end_delay_wire_151 <= bank_35[addr12];
        36:end_delay_wire_151 <= bank_36[addr12];
        37:end_delay_wire_151 <= bank_37[addr12];
        38:end_delay_wire_151 <= bank_38[addr12];
        39:end_delay_wire_151 <= bank_39[addr12];
        40:end_delay_wire_151 <= bank_40[addr12];
        41:end_delay_wire_151 <= bank_41[addr12];
        42:end_delay_wire_151 <= bank_42[addr12];
        43:end_delay_wire_151 <= bank_43[addr12];
        44:end_delay_wire_151 <= bank_44[addr12];
        45:end_delay_wire_151 <= bank_45[addr12];
        46:end_delay_wire_151 <= bank_46[addr12];
        47:end_delay_wire_151 <= bank_47[addr12];
        48:end_delay_wire_151 <= bank_48[addr12];
        49:end_delay_wire_151 <= bank_49[addr12];
        50:end_delay_wire_151 <= bank_50[addr12];
        51:end_delay_wire_151 <= bank_51[addr12];
        52:end_delay_wire_151 <= bank_52[addr12];
        53:end_delay_wire_151 <= bank_53[addr12];
        54:end_delay_wire_151 <= bank_54[addr12];
        55:end_delay_wire_151 <= bank_55[addr12];
        56:end_delay_wire_151 <= bank_56[addr12];
        57:end_delay_wire_151 <= bank_57[addr12];
        58:end_delay_wire_151 <= bank_58[addr12];
        59:end_delay_wire_151 <= bank_59[addr12];
        60:end_delay_wire_151 <= bank_60[addr12];
        61:end_delay_wire_151 <= bank_61[addr12];
        62:end_delay_wire_151 <= bank_62[addr12];
        63:end_delay_wire_151 <= bank_63[addr12];
        default:end_delay_wire_151 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_11_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_bank_selector.out)
        0:end_delay_wire_152 <= bank_0[addr13];
        1:end_delay_wire_152 <= bank_1[addr13];
        2:end_delay_wire_152 <= bank_2[addr13];
        3:end_delay_wire_152 <= bank_3[addr13];
        4:end_delay_wire_152 <= bank_4[addr13];
        5:end_delay_wire_152 <= bank_5[addr13];
        6:end_delay_wire_152 <= bank_6[addr13];
        7:end_delay_wire_152 <= bank_7[addr13];
        8:end_delay_wire_152 <= bank_8[addr13];
        9:end_delay_wire_152 <= bank_9[addr13];
        10:end_delay_wire_152 <= bank_10[addr13];
        11:end_delay_wire_152 <= bank_11[addr13];
        12:end_delay_wire_152 <= bank_12[addr13];
        13:end_delay_wire_152 <= bank_13[addr13];
        14:end_delay_wire_152 <= bank_14[addr13];
        15:end_delay_wire_152 <= bank_15[addr13];
        16:end_delay_wire_152 <= bank_16[addr13];
        17:end_delay_wire_152 <= bank_17[addr13];
        18:end_delay_wire_152 <= bank_18[addr13];
        19:end_delay_wire_152 <= bank_19[addr13];
        20:end_delay_wire_152 <= bank_20[addr13];
        21:end_delay_wire_152 <= bank_21[addr13];
        22:end_delay_wire_152 <= bank_22[addr13];
        23:end_delay_wire_152 <= bank_23[addr13];
        24:end_delay_wire_152 <= bank_24[addr13];
        25:end_delay_wire_152 <= bank_25[addr13];
        26:end_delay_wire_152 <= bank_26[addr13];
        27:end_delay_wire_152 <= bank_27[addr13];
        28:end_delay_wire_152 <= bank_28[addr13];
        29:end_delay_wire_152 <= bank_29[addr13];
        30:end_delay_wire_152 <= bank_30[addr13];
        31:end_delay_wire_152 <= bank_31[addr13];
        32:end_delay_wire_152 <= bank_32[addr13];
        33:end_delay_wire_152 <= bank_33[addr13];
        34:end_delay_wire_152 <= bank_34[addr13];
        35:end_delay_wire_152 <= bank_35[addr13];
        36:end_delay_wire_152 <= bank_36[addr13];
        37:end_delay_wire_152 <= bank_37[addr13];
        38:end_delay_wire_152 <= bank_38[addr13];
        39:end_delay_wire_152 <= bank_39[addr13];
        40:end_delay_wire_152 <= bank_40[addr13];
        41:end_delay_wire_152 <= bank_41[addr13];
        42:end_delay_wire_152 <= bank_42[addr13];
        43:end_delay_wire_152 <= bank_43[addr13];
        44:end_delay_wire_152 <= bank_44[addr13];
        45:end_delay_wire_152 <= bank_45[addr13];
        46:end_delay_wire_152 <= bank_46[addr13];
        47:end_delay_wire_152 <= bank_47[addr13];
        48:end_delay_wire_152 <= bank_48[addr13];
        49:end_delay_wire_152 <= bank_49[addr13];
        50:end_delay_wire_152 <= bank_50[addr13];
        51:end_delay_wire_152 <= bank_51[addr13];
        52:end_delay_wire_152 <= bank_52[addr13];
        53:end_delay_wire_152 <= bank_53[addr13];
        54:end_delay_wire_152 <= bank_54[addr13];
        55:end_delay_wire_152 <= bank_55[addr13];
        56:end_delay_wire_152 <= bank_56[addr13];
        57:end_delay_wire_152 <= bank_57[addr13];
        58:end_delay_wire_152 <= bank_58[addr13];
        59:end_delay_wire_152 <= bank_59[addr13];
        60:end_delay_wire_152 <= bank_60[addr13];
        61:end_delay_wire_152 <= bank_61[addr13];
        62:end_delay_wire_152 <= bank_62[addr13];
        63:end_delay_wire_152 <= bank_63[addr13];
        default:end_delay_wire_152 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_11_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_bank_selector.out)
        0:end_delay_wire_153 <= bank_0[addr14];
        1:end_delay_wire_153 <= bank_1[addr14];
        2:end_delay_wire_153 <= bank_2[addr14];
        3:end_delay_wire_153 <= bank_3[addr14];
        4:end_delay_wire_153 <= bank_4[addr14];
        5:end_delay_wire_153 <= bank_5[addr14];
        6:end_delay_wire_153 <= bank_6[addr14];
        7:end_delay_wire_153 <= bank_7[addr14];
        8:end_delay_wire_153 <= bank_8[addr14];
        9:end_delay_wire_153 <= bank_9[addr14];
        10:end_delay_wire_153 <= bank_10[addr14];
        11:end_delay_wire_153 <= bank_11[addr14];
        12:end_delay_wire_153 <= bank_12[addr14];
        13:end_delay_wire_153 <= bank_13[addr14];
        14:end_delay_wire_153 <= bank_14[addr14];
        15:end_delay_wire_153 <= bank_15[addr14];
        16:end_delay_wire_153 <= bank_16[addr14];
        17:end_delay_wire_153 <= bank_17[addr14];
        18:end_delay_wire_153 <= bank_18[addr14];
        19:end_delay_wire_153 <= bank_19[addr14];
        20:end_delay_wire_153 <= bank_20[addr14];
        21:end_delay_wire_153 <= bank_21[addr14];
        22:end_delay_wire_153 <= bank_22[addr14];
        23:end_delay_wire_153 <= bank_23[addr14];
        24:end_delay_wire_153 <= bank_24[addr14];
        25:end_delay_wire_153 <= bank_25[addr14];
        26:end_delay_wire_153 <= bank_26[addr14];
        27:end_delay_wire_153 <= bank_27[addr14];
        28:end_delay_wire_153 <= bank_28[addr14];
        29:end_delay_wire_153 <= bank_29[addr14];
        30:end_delay_wire_153 <= bank_30[addr14];
        31:end_delay_wire_153 <= bank_31[addr14];
        32:end_delay_wire_153 <= bank_32[addr14];
        33:end_delay_wire_153 <= bank_33[addr14];
        34:end_delay_wire_153 <= bank_34[addr14];
        35:end_delay_wire_153 <= bank_35[addr14];
        36:end_delay_wire_153 <= bank_36[addr14];
        37:end_delay_wire_153 <= bank_37[addr14];
        38:end_delay_wire_153 <= bank_38[addr14];
        39:end_delay_wire_153 <= bank_39[addr14];
        40:end_delay_wire_153 <= bank_40[addr14];
        41:end_delay_wire_153 <= bank_41[addr14];
        42:end_delay_wire_153 <= bank_42[addr14];
        43:end_delay_wire_153 <= bank_43[addr14];
        44:end_delay_wire_153 <= bank_44[addr14];
        45:end_delay_wire_153 <= bank_45[addr14];
        46:end_delay_wire_153 <= bank_46[addr14];
        47:end_delay_wire_153 <= bank_47[addr14];
        48:end_delay_wire_153 <= bank_48[addr14];
        49:end_delay_wire_153 <= bank_49[addr14];
        50:end_delay_wire_153 <= bank_50[addr14];
        51:end_delay_wire_153 <= bank_51[addr14];
        52:end_delay_wire_153 <= bank_52[addr14];
        53:end_delay_wire_153 <= bank_53[addr14];
        54:end_delay_wire_153 <= bank_54[addr14];
        55:end_delay_wire_153 <= bank_55[addr14];
        56:end_delay_wire_153 <= bank_56[addr14];
        57:end_delay_wire_153 <= bank_57[addr14];
        58:end_delay_wire_153 <= bank_58[addr14];
        59:end_delay_wire_153 <= bank_59[addr14];
        60:end_delay_wire_153 <= bank_60[addr14];
        61:end_delay_wire_153 <= bank_61[addr14];
        62:end_delay_wire_153 <= bank_62[addr14];
        63:end_delay_wire_153 <= bank_63[addr14];
        default:end_delay_wire_153 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_11_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_bank_selector.out)
        0:end_delay_wire_154 <= bank_0[addr15];
        1:end_delay_wire_154 <= bank_1[addr15];
        2:end_delay_wire_154 <= bank_2[addr15];
        3:end_delay_wire_154 <= bank_3[addr15];
        4:end_delay_wire_154 <= bank_4[addr15];
        5:end_delay_wire_154 <= bank_5[addr15];
        6:end_delay_wire_154 <= bank_6[addr15];
        7:end_delay_wire_154 <= bank_7[addr15];
        8:end_delay_wire_154 <= bank_8[addr15];
        9:end_delay_wire_154 <= bank_9[addr15];
        10:end_delay_wire_154 <= bank_10[addr15];
        11:end_delay_wire_154 <= bank_11[addr15];
        12:end_delay_wire_154 <= bank_12[addr15];
        13:end_delay_wire_154 <= bank_13[addr15];
        14:end_delay_wire_154 <= bank_14[addr15];
        15:end_delay_wire_154 <= bank_15[addr15];
        16:end_delay_wire_154 <= bank_16[addr15];
        17:end_delay_wire_154 <= bank_17[addr15];
        18:end_delay_wire_154 <= bank_18[addr15];
        19:end_delay_wire_154 <= bank_19[addr15];
        20:end_delay_wire_154 <= bank_20[addr15];
        21:end_delay_wire_154 <= bank_21[addr15];
        22:end_delay_wire_154 <= bank_22[addr15];
        23:end_delay_wire_154 <= bank_23[addr15];
        24:end_delay_wire_154 <= bank_24[addr15];
        25:end_delay_wire_154 <= bank_25[addr15];
        26:end_delay_wire_154 <= bank_26[addr15];
        27:end_delay_wire_154 <= bank_27[addr15];
        28:end_delay_wire_154 <= bank_28[addr15];
        29:end_delay_wire_154 <= bank_29[addr15];
        30:end_delay_wire_154 <= bank_30[addr15];
        31:end_delay_wire_154 <= bank_31[addr15];
        32:end_delay_wire_154 <= bank_32[addr15];
        33:end_delay_wire_154 <= bank_33[addr15];
        34:end_delay_wire_154 <= bank_34[addr15];
        35:end_delay_wire_154 <= bank_35[addr15];
        36:end_delay_wire_154 <= bank_36[addr15];
        37:end_delay_wire_154 <= bank_37[addr15];
        38:end_delay_wire_154 <= bank_38[addr15];
        39:end_delay_wire_154 <= bank_39[addr15];
        40:end_delay_wire_154 <= bank_40[addr15];
        41:end_delay_wire_154 <= bank_41[addr15];
        42:end_delay_wire_154 <= bank_42[addr15];
        43:end_delay_wire_154 <= bank_43[addr15];
        44:end_delay_wire_154 <= bank_44[addr15];
        45:end_delay_wire_154 <= bank_45[addr15];
        46:end_delay_wire_154 <= bank_46[addr15];
        47:end_delay_wire_154 <= bank_47[addr15];
        48:end_delay_wire_154 <= bank_48[addr15];
        49:end_delay_wire_154 <= bank_49[addr15];
        50:end_delay_wire_154 <= bank_50[addr15];
        51:end_delay_wire_154 <= bank_51[addr15];
        52:end_delay_wire_154 <= bank_52[addr15];
        53:end_delay_wire_154 <= bank_53[addr15];
        54:end_delay_wire_154 <= bank_54[addr15];
        55:end_delay_wire_154 <= bank_55[addr15];
        56:end_delay_wire_154 <= bank_56[addr15];
        57:end_delay_wire_154 <= bank_57[addr15];
        58:end_delay_wire_154 <= bank_58[addr15];
        59:end_delay_wire_154 <= bank_59[addr15];
        60:end_delay_wire_154 <= bank_60[addr15];
        61:end_delay_wire_154 <= bank_61[addr15];
        62:end_delay_wire_154 <= bank_62[addr15];
        63:end_delay_wire_154 <= bank_63[addr15];
        default:end_delay_wire_154 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_11_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_bank_selector.out)
        0:end_delay_wire_155 <= bank_0[addr16];
        1:end_delay_wire_155 <= bank_1[addr16];
        2:end_delay_wire_155 <= bank_2[addr16];
        3:end_delay_wire_155 <= bank_3[addr16];
        4:end_delay_wire_155 <= bank_4[addr16];
        5:end_delay_wire_155 <= bank_5[addr16];
        6:end_delay_wire_155 <= bank_6[addr16];
        7:end_delay_wire_155 <= bank_7[addr16];
        8:end_delay_wire_155 <= bank_8[addr16];
        9:end_delay_wire_155 <= bank_9[addr16];
        10:end_delay_wire_155 <= bank_10[addr16];
        11:end_delay_wire_155 <= bank_11[addr16];
        12:end_delay_wire_155 <= bank_12[addr16];
        13:end_delay_wire_155 <= bank_13[addr16];
        14:end_delay_wire_155 <= bank_14[addr16];
        15:end_delay_wire_155 <= bank_15[addr16];
        16:end_delay_wire_155 <= bank_16[addr16];
        17:end_delay_wire_155 <= bank_17[addr16];
        18:end_delay_wire_155 <= bank_18[addr16];
        19:end_delay_wire_155 <= bank_19[addr16];
        20:end_delay_wire_155 <= bank_20[addr16];
        21:end_delay_wire_155 <= bank_21[addr16];
        22:end_delay_wire_155 <= bank_22[addr16];
        23:end_delay_wire_155 <= bank_23[addr16];
        24:end_delay_wire_155 <= bank_24[addr16];
        25:end_delay_wire_155 <= bank_25[addr16];
        26:end_delay_wire_155 <= bank_26[addr16];
        27:end_delay_wire_155 <= bank_27[addr16];
        28:end_delay_wire_155 <= bank_28[addr16];
        29:end_delay_wire_155 <= bank_29[addr16];
        30:end_delay_wire_155 <= bank_30[addr16];
        31:end_delay_wire_155 <= bank_31[addr16];
        32:end_delay_wire_155 <= bank_32[addr16];
        33:end_delay_wire_155 <= bank_33[addr16];
        34:end_delay_wire_155 <= bank_34[addr16];
        35:end_delay_wire_155 <= bank_35[addr16];
        36:end_delay_wire_155 <= bank_36[addr16];
        37:end_delay_wire_155 <= bank_37[addr16];
        38:end_delay_wire_155 <= bank_38[addr16];
        39:end_delay_wire_155 <= bank_39[addr16];
        40:end_delay_wire_155 <= bank_40[addr16];
        41:end_delay_wire_155 <= bank_41[addr16];
        42:end_delay_wire_155 <= bank_42[addr16];
        43:end_delay_wire_155 <= bank_43[addr16];
        44:end_delay_wire_155 <= bank_44[addr16];
        45:end_delay_wire_155 <= bank_45[addr16];
        46:end_delay_wire_155 <= bank_46[addr16];
        47:end_delay_wire_155 <= bank_47[addr16];
        48:end_delay_wire_155 <= bank_48[addr16];
        49:end_delay_wire_155 <= bank_49[addr16];
        50:end_delay_wire_155 <= bank_50[addr16];
        51:end_delay_wire_155 <= bank_51[addr16];
        52:end_delay_wire_155 <= bank_52[addr16];
        53:end_delay_wire_155 <= bank_53[addr16];
        54:end_delay_wire_155 <= bank_54[addr16];
        55:end_delay_wire_155 <= bank_55[addr16];
        56:end_delay_wire_155 <= bank_56[addr16];
        57:end_delay_wire_155 <= bank_57[addr16];
        58:end_delay_wire_155 <= bank_58[addr16];
        59:end_delay_wire_155 <= bank_59[addr16];
        60:end_delay_wire_155 <= bank_60[addr16];
        61:end_delay_wire_155 <= bank_61[addr16];
        62:end_delay_wire_155 <= bank_62[addr16];
        63:end_delay_wire_155 <= bank_63[addr16];
        default:end_delay_wire_155 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_12_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_bank_selector.out)
        0:end_delay_wire_156 <= bank_0[addr17];
        1:end_delay_wire_156 <= bank_1[addr17];
        2:end_delay_wire_156 <= bank_2[addr17];
        3:end_delay_wire_156 <= bank_3[addr17];
        4:end_delay_wire_156 <= bank_4[addr17];
        5:end_delay_wire_156 <= bank_5[addr17];
        6:end_delay_wire_156 <= bank_6[addr17];
        7:end_delay_wire_156 <= bank_7[addr17];
        8:end_delay_wire_156 <= bank_8[addr17];
        9:end_delay_wire_156 <= bank_9[addr17];
        10:end_delay_wire_156 <= bank_10[addr17];
        11:end_delay_wire_156 <= bank_11[addr17];
        12:end_delay_wire_156 <= bank_12[addr17];
        13:end_delay_wire_156 <= bank_13[addr17];
        14:end_delay_wire_156 <= bank_14[addr17];
        15:end_delay_wire_156 <= bank_15[addr17];
        16:end_delay_wire_156 <= bank_16[addr17];
        17:end_delay_wire_156 <= bank_17[addr17];
        18:end_delay_wire_156 <= bank_18[addr17];
        19:end_delay_wire_156 <= bank_19[addr17];
        20:end_delay_wire_156 <= bank_20[addr17];
        21:end_delay_wire_156 <= bank_21[addr17];
        22:end_delay_wire_156 <= bank_22[addr17];
        23:end_delay_wire_156 <= bank_23[addr17];
        24:end_delay_wire_156 <= bank_24[addr17];
        25:end_delay_wire_156 <= bank_25[addr17];
        26:end_delay_wire_156 <= bank_26[addr17];
        27:end_delay_wire_156 <= bank_27[addr17];
        28:end_delay_wire_156 <= bank_28[addr17];
        29:end_delay_wire_156 <= bank_29[addr17];
        30:end_delay_wire_156 <= bank_30[addr17];
        31:end_delay_wire_156 <= bank_31[addr17];
        32:end_delay_wire_156 <= bank_32[addr17];
        33:end_delay_wire_156 <= bank_33[addr17];
        34:end_delay_wire_156 <= bank_34[addr17];
        35:end_delay_wire_156 <= bank_35[addr17];
        36:end_delay_wire_156 <= bank_36[addr17];
        37:end_delay_wire_156 <= bank_37[addr17];
        38:end_delay_wire_156 <= bank_38[addr17];
        39:end_delay_wire_156 <= bank_39[addr17];
        40:end_delay_wire_156 <= bank_40[addr17];
        41:end_delay_wire_156 <= bank_41[addr17];
        42:end_delay_wire_156 <= bank_42[addr17];
        43:end_delay_wire_156 <= bank_43[addr17];
        44:end_delay_wire_156 <= bank_44[addr17];
        45:end_delay_wire_156 <= bank_45[addr17];
        46:end_delay_wire_156 <= bank_46[addr17];
        47:end_delay_wire_156 <= bank_47[addr17];
        48:end_delay_wire_156 <= bank_48[addr17];
        49:end_delay_wire_156 <= bank_49[addr17];
        50:end_delay_wire_156 <= bank_50[addr17];
        51:end_delay_wire_156 <= bank_51[addr17];
        52:end_delay_wire_156 <= bank_52[addr17];
        53:end_delay_wire_156 <= bank_53[addr17];
        54:end_delay_wire_156 <= bank_54[addr17];
        55:end_delay_wire_156 <= bank_55[addr17];
        56:end_delay_wire_156 <= bank_56[addr17];
        57:end_delay_wire_156 <= bank_57[addr17];
        58:end_delay_wire_156 <= bank_58[addr17];
        59:end_delay_wire_156 <= bank_59[addr17];
        60:end_delay_wire_156 <= bank_60[addr17];
        61:end_delay_wire_156 <= bank_61[addr17];
        62:end_delay_wire_156 <= bank_62[addr17];
        63:end_delay_wire_156 <= bank_63[addr17];
        default:end_delay_wire_156 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_12_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_bank_selector.out)
        0:end_delay_wire_157 <= bank_0[addr18];
        1:end_delay_wire_157 <= bank_1[addr18];
        2:end_delay_wire_157 <= bank_2[addr18];
        3:end_delay_wire_157 <= bank_3[addr18];
        4:end_delay_wire_157 <= bank_4[addr18];
        5:end_delay_wire_157 <= bank_5[addr18];
        6:end_delay_wire_157 <= bank_6[addr18];
        7:end_delay_wire_157 <= bank_7[addr18];
        8:end_delay_wire_157 <= bank_8[addr18];
        9:end_delay_wire_157 <= bank_9[addr18];
        10:end_delay_wire_157 <= bank_10[addr18];
        11:end_delay_wire_157 <= bank_11[addr18];
        12:end_delay_wire_157 <= bank_12[addr18];
        13:end_delay_wire_157 <= bank_13[addr18];
        14:end_delay_wire_157 <= bank_14[addr18];
        15:end_delay_wire_157 <= bank_15[addr18];
        16:end_delay_wire_157 <= bank_16[addr18];
        17:end_delay_wire_157 <= bank_17[addr18];
        18:end_delay_wire_157 <= bank_18[addr18];
        19:end_delay_wire_157 <= bank_19[addr18];
        20:end_delay_wire_157 <= bank_20[addr18];
        21:end_delay_wire_157 <= bank_21[addr18];
        22:end_delay_wire_157 <= bank_22[addr18];
        23:end_delay_wire_157 <= bank_23[addr18];
        24:end_delay_wire_157 <= bank_24[addr18];
        25:end_delay_wire_157 <= bank_25[addr18];
        26:end_delay_wire_157 <= bank_26[addr18];
        27:end_delay_wire_157 <= bank_27[addr18];
        28:end_delay_wire_157 <= bank_28[addr18];
        29:end_delay_wire_157 <= bank_29[addr18];
        30:end_delay_wire_157 <= bank_30[addr18];
        31:end_delay_wire_157 <= bank_31[addr18];
        32:end_delay_wire_157 <= bank_32[addr18];
        33:end_delay_wire_157 <= bank_33[addr18];
        34:end_delay_wire_157 <= bank_34[addr18];
        35:end_delay_wire_157 <= bank_35[addr18];
        36:end_delay_wire_157 <= bank_36[addr18];
        37:end_delay_wire_157 <= bank_37[addr18];
        38:end_delay_wire_157 <= bank_38[addr18];
        39:end_delay_wire_157 <= bank_39[addr18];
        40:end_delay_wire_157 <= bank_40[addr18];
        41:end_delay_wire_157 <= bank_41[addr18];
        42:end_delay_wire_157 <= bank_42[addr18];
        43:end_delay_wire_157 <= bank_43[addr18];
        44:end_delay_wire_157 <= bank_44[addr18];
        45:end_delay_wire_157 <= bank_45[addr18];
        46:end_delay_wire_157 <= bank_46[addr18];
        47:end_delay_wire_157 <= bank_47[addr18];
        48:end_delay_wire_157 <= bank_48[addr18];
        49:end_delay_wire_157 <= bank_49[addr18];
        50:end_delay_wire_157 <= bank_50[addr18];
        51:end_delay_wire_157 <= bank_51[addr18];
        52:end_delay_wire_157 <= bank_52[addr18];
        53:end_delay_wire_157 <= bank_53[addr18];
        54:end_delay_wire_157 <= bank_54[addr18];
        55:end_delay_wire_157 <= bank_55[addr18];
        56:end_delay_wire_157 <= bank_56[addr18];
        57:end_delay_wire_157 <= bank_57[addr18];
        58:end_delay_wire_157 <= bank_58[addr18];
        59:end_delay_wire_157 <= bank_59[addr18];
        60:end_delay_wire_157 <= bank_60[addr18];
        61:end_delay_wire_157 <= bank_61[addr18];
        62:end_delay_wire_157 <= bank_62[addr18];
        63:end_delay_wire_157 <= bank_63[addr18];
        default:end_delay_wire_157 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_12_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_bank_selector.out)
        0:end_delay_wire_158 <= bank_0[addr19];
        1:end_delay_wire_158 <= bank_1[addr19];
        2:end_delay_wire_158 <= bank_2[addr19];
        3:end_delay_wire_158 <= bank_3[addr19];
        4:end_delay_wire_158 <= bank_4[addr19];
        5:end_delay_wire_158 <= bank_5[addr19];
        6:end_delay_wire_158 <= bank_6[addr19];
        7:end_delay_wire_158 <= bank_7[addr19];
        8:end_delay_wire_158 <= bank_8[addr19];
        9:end_delay_wire_158 <= bank_9[addr19];
        10:end_delay_wire_158 <= bank_10[addr19];
        11:end_delay_wire_158 <= bank_11[addr19];
        12:end_delay_wire_158 <= bank_12[addr19];
        13:end_delay_wire_158 <= bank_13[addr19];
        14:end_delay_wire_158 <= bank_14[addr19];
        15:end_delay_wire_158 <= bank_15[addr19];
        16:end_delay_wire_158 <= bank_16[addr19];
        17:end_delay_wire_158 <= bank_17[addr19];
        18:end_delay_wire_158 <= bank_18[addr19];
        19:end_delay_wire_158 <= bank_19[addr19];
        20:end_delay_wire_158 <= bank_20[addr19];
        21:end_delay_wire_158 <= bank_21[addr19];
        22:end_delay_wire_158 <= bank_22[addr19];
        23:end_delay_wire_158 <= bank_23[addr19];
        24:end_delay_wire_158 <= bank_24[addr19];
        25:end_delay_wire_158 <= bank_25[addr19];
        26:end_delay_wire_158 <= bank_26[addr19];
        27:end_delay_wire_158 <= bank_27[addr19];
        28:end_delay_wire_158 <= bank_28[addr19];
        29:end_delay_wire_158 <= bank_29[addr19];
        30:end_delay_wire_158 <= bank_30[addr19];
        31:end_delay_wire_158 <= bank_31[addr19];
        32:end_delay_wire_158 <= bank_32[addr19];
        33:end_delay_wire_158 <= bank_33[addr19];
        34:end_delay_wire_158 <= bank_34[addr19];
        35:end_delay_wire_158 <= bank_35[addr19];
        36:end_delay_wire_158 <= bank_36[addr19];
        37:end_delay_wire_158 <= bank_37[addr19];
        38:end_delay_wire_158 <= bank_38[addr19];
        39:end_delay_wire_158 <= bank_39[addr19];
        40:end_delay_wire_158 <= bank_40[addr19];
        41:end_delay_wire_158 <= bank_41[addr19];
        42:end_delay_wire_158 <= bank_42[addr19];
        43:end_delay_wire_158 <= bank_43[addr19];
        44:end_delay_wire_158 <= bank_44[addr19];
        45:end_delay_wire_158 <= bank_45[addr19];
        46:end_delay_wire_158 <= bank_46[addr19];
        47:end_delay_wire_158 <= bank_47[addr19];
        48:end_delay_wire_158 <= bank_48[addr19];
        49:end_delay_wire_158 <= bank_49[addr19];
        50:end_delay_wire_158 <= bank_50[addr19];
        51:end_delay_wire_158 <= bank_51[addr19];
        52:end_delay_wire_158 <= bank_52[addr19];
        53:end_delay_wire_158 <= bank_53[addr19];
        54:end_delay_wire_158 <= bank_54[addr19];
        55:end_delay_wire_158 <= bank_55[addr19];
        56:end_delay_wire_158 <= bank_56[addr19];
        57:end_delay_wire_158 <= bank_57[addr19];
        58:end_delay_wire_158 <= bank_58[addr19];
        59:end_delay_wire_158 <= bank_59[addr19];
        60:end_delay_wire_158 <= bank_60[addr19];
        61:end_delay_wire_158 <= bank_61[addr19];
        62:end_delay_wire_158 <= bank_62[addr19];
        63:end_delay_wire_158 <= bank_63[addr19];
        default:end_delay_wire_158 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_12_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_bank_selector.out)
        0:end_delay_wire_159 <= bank_0[addr20];
        1:end_delay_wire_159 <= bank_1[addr20];
        2:end_delay_wire_159 <= bank_2[addr20];
        3:end_delay_wire_159 <= bank_3[addr20];
        4:end_delay_wire_159 <= bank_4[addr20];
        5:end_delay_wire_159 <= bank_5[addr20];
        6:end_delay_wire_159 <= bank_6[addr20];
        7:end_delay_wire_159 <= bank_7[addr20];
        8:end_delay_wire_159 <= bank_8[addr20];
        9:end_delay_wire_159 <= bank_9[addr20];
        10:end_delay_wire_159 <= bank_10[addr20];
        11:end_delay_wire_159 <= bank_11[addr20];
        12:end_delay_wire_159 <= bank_12[addr20];
        13:end_delay_wire_159 <= bank_13[addr20];
        14:end_delay_wire_159 <= bank_14[addr20];
        15:end_delay_wire_159 <= bank_15[addr20];
        16:end_delay_wire_159 <= bank_16[addr20];
        17:end_delay_wire_159 <= bank_17[addr20];
        18:end_delay_wire_159 <= bank_18[addr20];
        19:end_delay_wire_159 <= bank_19[addr20];
        20:end_delay_wire_159 <= bank_20[addr20];
        21:end_delay_wire_159 <= bank_21[addr20];
        22:end_delay_wire_159 <= bank_22[addr20];
        23:end_delay_wire_159 <= bank_23[addr20];
        24:end_delay_wire_159 <= bank_24[addr20];
        25:end_delay_wire_159 <= bank_25[addr20];
        26:end_delay_wire_159 <= bank_26[addr20];
        27:end_delay_wire_159 <= bank_27[addr20];
        28:end_delay_wire_159 <= bank_28[addr20];
        29:end_delay_wire_159 <= bank_29[addr20];
        30:end_delay_wire_159 <= bank_30[addr20];
        31:end_delay_wire_159 <= bank_31[addr20];
        32:end_delay_wire_159 <= bank_32[addr20];
        33:end_delay_wire_159 <= bank_33[addr20];
        34:end_delay_wire_159 <= bank_34[addr20];
        35:end_delay_wire_159 <= bank_35[addr20];
        36:end_delay_wire_159 <= bank_36[addr20];
        37:end_delay_wire_159 <= bank_37[addr20];
        38:end_delay_wire_159 <= bank_38[addr20];
        39:end_delay_wire_159 <= bank_39[addr20];
        40:end_delay_wire_159 <= bank_40[addr20];
        41:end_delay_wire_159 <= bank_41[addr20];
        42:end_delay_wire_159 <= bank_42[addr20];
        43:end_delay_wire_159 <= bank_43[addr20];
        44:end_delay_wire_159 <= bank_44[addr20];
        45:end_delay_wire_159 <= bank_45[addr20];
        46:end_delay_wire_159 <= bank_46[addr20];
        47:end_delay_wire_159 <= bank_47[addr20];
        48:end_delay_wire_159 <= bank_48[addr20];
        49:end_delay_wire_159 <= bank_49[addr20];
        50:end_delay_wire_159 <= bank_50[addr20];
        51:end_delay_wire_159 <= bank_51[addr20];
        52:end_delay_wire_159 <= bank_52[addr20];
        53:end_delay_wire_159 <= bank_53[addr20];
        54:end_delay_wire_159 <= bank_54[addr20];
        55:end_delay_wire_159 <= bank_55[addr20];
        56:end_delay_wire_159 <= bank_56[addr20];
        57:end_delay_wire_159 <= bank_57[addr20];
        58:end_delay_wire_159 <= bank_58[addr20];
        59:end_delay_wire_159 <= bank_59[addr20];
        60:end_delay_wire_159 <= bank_60[addr20];
        61:end_delay_wire_159 <= bank_61[addr20];
        62:end_delay_wire_159 <= bank_62[addr20];
        63:end_delay_wire_159 <= bank_63[addr20];
        default:end_delay_wire_159 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_12_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_bank_selector.out)
        0:end_delay_wire_160 <= bank_0[addr21];
        1:end_delay_wire_160 <= bank_1[addr21];
        2:end_delay_wire_160 <= bank_2[addr21];
        3:end_delay_wire_160 <= bank_3[addr21];
        4:end_delay_wire_160 <= bank_4[addr21];
        5:end_delay_wire_160 <= bank_5[addr21];
        6:end_delay_wire_160 <= bank_6[addr21];
        7:end_delay_wire_160 <= bank_7[addr21];
        8:end_delay_wire_160 <= bank_8[addr21];
        9:end_delay_wire_160 <= bank_9[addr21];
        10:end_delay_wire_160 <= bank_10[addr21];
        11:end_delay_wire_160 <= bank_11[addr21];
        12:end_delay_wire_160 <= bank_12[addr21];
        13:end_delay_wire_160 <= bank_13[addr21];
        14:end_delay_wire_160 <= bank_14[addr21];
        15:end_delay_wire_160 <= bank_15[addr21];
        16:end_delay_wire_160 <= bank_16[addr21];
        17:end_delay_wire_160 <= bank_17[addr21];
        18:end_delay_wire_160 <= bank_18[addr21];
        19:end_delay_wire_160 <= bank_19[addr21];
        20:end_delay_wire_160 <= bank_20[addr21];
        21:end_delay_wire_160 <= bank_21[addr21];
        22:end_delay_wire_160 <= bank_22[addr21];
        23:end_delay_wire_160 <= bank_23[addr21];
        24:end_delay_wire_160 <= bank_24[addr21];
        25:end_delay_wire_160 <= bank_25[addr21];
        26:end_delay_wire_160 <= bank_26[addr21];
        27:end_delay_wire_160 <= bank_27[addr21];
        28:end_delay_wire_160 <= bank_28[addr21];
        29:end_delay_wire_160 <= bank_29[addr21];
        30:end_delay_wire_160 <= bank_30[addr21];
        31:end_delay_wire_160 <= bank_31[addr21];
        32:end_delay_wire_160 <= bank_32[addr21];
        33:end_delay_wire_160 <= bank_33[addr21];
        34:end_delay_wire_160 <= bank_34[addr21];
        35:end_delay_wire_160 <= bank_35[addr21];
        36:end_delay_wire_160 <= bank_36[addr21];
        37:end_delay_wire_160 <= bank_37[addr21];
        38:end_delay_wire_160 <= bank_38[addr21];
        39:end_delay_wire_160 <= bank_39[addr21];
        40:end_delay_wire_160 <= bank_40[addr21];
        41:end_delay_wire_160 <= bank_41[addr21];
        42:end_delay_wire_160 <= bank_42[addr21];
        43:end_delay_wire_160 <= bank_43[addr21];
        44:end_delay_wire_160 <= bank_44[addr21];
        45:end_delay_wire_160 <= bank_45[addr21];
        46:end_delay_wire_160 <= bank_46[addr21];
        47:end_delay_wire_160 <= bank_47[addr21];
        48:end_delay_wire_160 <= bank_48[addr21];
        49:end_delay_wire_160 <= bank_49[addr21];
        50:end_delay_wire_160 <= bank_50[addr21];
        51:end_delay_wire_160 <= bank_51[addr21];
        52:end_delay_wire_160 <= bank_52[addr21];
        53:end_delay_wire_160 <= bank_53[addr21];
        54:end_delay_wire_160 <= bank_54[addr21];
        55:end_delay_wire_160 <= bank_55[addr21];
        56:end_delay_wire_160 <= bank_56[addr21];
        57:end_delay_wire_160 <= bank_57[addr21];
        58:end_delay_wire_160 <= bank_58[addr21];
        59:end_delay_wire_160 <= bank_59[addr21];
        60:end_delay_wire_160 <= bank_60[addr21];
        61:end_delay_wire_160 <= bank_61[addr21];
        62:end_delay_wire_160 <= bank_62[addr21];
        63:end_delay_wire_160 <= bank_63[addr21];
        default:end_delay_wire_160 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_12_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_bank_selector.out)
        0:end_delay_wire_161 <= bank_0[addr22];
        1:end_delay_wire_161 <= bank_1[addr22];
        2:end_delay_wire_161 <= bank_2[addr22];
        3:end_delay_wire_161 <= bank_3[addr22];
        4:end_delay_wire_161 <= bank_4[addr22];
        5:end_delay_wire_161 <= bank_5[addr22];
        6:end_delay_wire_161 <= bank_6[addr22];
        7:end_delay_wire_161 <= bank_7[addr22];
        8:end_delay_wire_161 <= bank_8[addr22];
        9:end_delay_wire_161 <= bank_9[addr22];
        10:end_delay_wire_161 <= bank_10[addr22];
        11:end_delay_wire_161 <= bank_11[addr22];
        12:end_delay_wire_161 <= bank_12[addr22];
        13:end_delay_wire_161 <= bank_13[addr22];
        14:end_delay_wire_161 <= bank_14[addr22];
        15:end_delay_wire_161 <= bank_15[addr22];
        16:end_delay_wire_161 <= bank_16[addr22];
        17:end_delay_wire_161 <= bank_17[addr22];
        18:end_delay_wire_161 <= bank_18[addr22];
        19:end_delay_wire_161 <= bank_19[addr22];
        20:end_delay_wire_161 <= bank_20[addr22];
        21:end_delay_wire_161 <= bank_21[addr22];
        22:end_delay_wire_161 <= bank_22[addr22];
        23:end_delay_wire_161 <= bank_23[addr22];
        24:end_delay_wire_161 <= bank_24[addr22];
        25:end_delay_wire_161 <= bank_25[addr22];
        26:end_delay_wire_161 <= bank_26[addr22];
        27:end_delay_wire_161 <= bank_27[addr22];
        28:end_delay_wire_161 <= bank_28[addr22];
        29:end_delay_wire_161 <= bank_29[addr22];
        30:end_delay_wire_161 <= bank_30[addr22];
        31:end_delay_wire_161 <= bank_31[addr22];
        32:end_delay_wire_161 <= bank_32[addr22];
        33:end_delay_wire_161 <= bank_33[addr22];
        34:end_delay_wire_161 <= bank_34[addr22];
        35:end_delay_wire_161 <= bank_35[addr22];
        36:end_delay_wire_161 <= bank_36[addr22];
        37:end_delay_wire_161 <= bank_37[addr22];
        38:end_delay_wire_161 <= bank_38[addr22];
        39:end_delay_wire_161 <= bank_39[addr22];
        40:end_delay_wire_161 <= bank_40[addr22];
        41:end_delay_wire_161 <= bank_41[addr22];
        42:end_delay_wire_161 <= bank_42[addr22];
        43:end_delay_wire_161 <= bank_43[addr22];
        44:end_delay_wire_161 <= bank_44[addr22];
        45:end_delay_wire_161 <= bank_45[addr22];
        46:end_delay_wire_161 <= bank_46[addr22];
        47:end_delay_wire_161 <= bank_47[addr22];
        48:end_delay_wire_161 <= bank_48[addr22];
        49:end_delay_wire_161 <= bank_49[addr22];
        50:end_delay_wire_161 <= bank_50[addr22];
        51:end_delay_wire_161 <= bank_51[addr22];
        52:end_delay_wire_161 <= bank_52[addr22];
        53:end_delay_wire_161 <= bank_53[addr22];
        54:end_delay_wire_161 <= bank_54[addr22];
        55:end_delay_wire_161 <= bank_55[addr22];
        56:end_delay_wire_161 <= bank_56[addr22];
        57:end_delay_wire_161 <= bank_57[addr22];
        58:end_delay_wire_161 <= bank_58[addr22];
        59:end_delay_wire_161 <= bank_59[addr22];
        60:end_delay_wire_161 <= bank_60[addr22];
        61:end_delay_wire_161 <= bank_61[addr22];
        62:end_delay_wire_161 <= bank_62[addr22];
        63:end_delay_wire_161 <= bank_63[addr22];
        default:end_delay_wire_161 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_12_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_bank_selector.out)
        0:end_delay_wire_162 <= bank_0[addr23];
        1:end_delay_wire_162 <= bank_1[addr23];
        2:end_delay_wire_162 <= bank_2[addr23];
        3:end_delay_wire_162 <= bank_3[addr23];
        4:end_delay_wire_162 <= bank_4[addr23];
        5:end_delay_wire_162 <= bank_5[addr23];
        6:end_delay_wire_162 <= bank_6[addr23];
        7:end_delay_wire_162 <= bank_7[addr23];
        8:end_delay_wire_162 <= bank_8[addr23];
        9:end_delay_wire_162 <= bank_9[addr23];
        10:end_delay_wire_162 <= bank_10[addr23];
        11:end_delay_wire_162 <= bank_11[addr23];
        12:end_delay_wire_162 <= bank_12[addr23];
        13:end_delay_wire_162 <= bank_13[addr23];
        14:end_delay_wire_162 <= bank_14[addr23];
        15:end_delay_wire_162 <= bank_15[addr23];
        16:end_delay_wire_162 <= bank_16[addr23];
        17:end_delay_wire_162 <= bank_17[addr23];
        18:end_delay_wire_162 <= bank_18[addr23];
        19:end_delay_wire_162 <= bank_19[addr23];
        20:end_delay_wire_162 <= bank_20[addr23];
        21:end_delay_wire_162 <= bank_21[addr23];
        22:end_delay_wire_162 <= bank_22[addr23];
        23:end_delay_wire_162 <= bank_23[addr23];
        24:end_delay_wire_162 <= bank_24[addr23];
        25:end_delay_wire_162 <= bank_25[addr23];
        26:end_delay_wire_162 <= bank_26[addr23];
        27:end_delay_wire_162 <= bank_27[addr23];
        28:end_delay_wire_162 <= bank_28[addr23];
        29:end_delay_wire_162 <= bank_29[addr23];
        30:end_delay_wire_162 <= bank_30[addr23];
        31:end_delay_wire_162 <= bank_31[addr23];
        32:end_delay_wire_162 <= bank_32[addr23];
        33:end_delay_wire_162 <= bank_33[addr23];
        34:end_delay_wire_162 <= bank_34[addr23];
        35:end_delay_wire_162 <= bank_35[addr23];
        36:end_delay_wire_162 <= bank_36[addr23];
        37:end_delay_wire_162 <= bank_37[addr23];
        38:end_delay_wire_162 <= bank_38[addr23];
        39:end_delay_wire_162 <= bank_39[addr23];
        40:end_delay_wire_162 <= bank_40[addr23];
        41:end_delay_wire_162 <= bank_41[addr23];
        42:end_delay_wire_162 <= bank_42[addr23];
        43:end_delay_wire_162 <= bank_43[addr23];
        44:end_delay_wire_162 <= bank_44[addr23];
        45:end_delay_wire_162 <= bank_45[addr23];
        46:end_delay_wire_162 <= bank_46[addr23];
        47:end_delay_wire_162 <= bank_47[addr23];
        48:end_delay_wire_162 <= bank_48[addr23];
        49:end_delay_wire_162 <= bank_49[addr23];
        50:end_delay_wire_162 <= bank_50[addr23];
        51:end_delay_wire_162 <= bank_51[addr23];
        52:end_delay_wire_162 <= bank_52[addr23];
        53:end_delay_wire_162 <= bank_53[addr23];
        54:end_delay_wire_162 <= bank_54[addr23];
        55:end_delay_wire_162 <= bank_55[addr23];
        56:end_delay_wire_162 <= bank_56[addr23];
        57:end_delay_wire_162 <= bank_57[addr23];
        58:end_delay_wire_162 <= bank_58[addr23];
        59:end_delay_wire_162 <= bank_59[addr23];
        60:end_delay_wire_162 <= bank_60[addr23];
        61:end_delay_wire_162 <= bank_61[addr23];
        62:end_delay_wire_162 <= bank_62[addr23];
        63:end_delay_wire_162 <= bank_63[addr23];
        default:end_delay_wire_162 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_12_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_bank_selector.out)
        0:end_delay_wire_163 <= bank_0[addr24];
        1:end_delay_wire_163 <= bank_1[addr24];
        2:end_delay_wire_163 <= bank_2[addr24];
        3:end_delay_wire_163 <= bank_3[addr24];
        4:end_delay_wire_163 <= bank_4[addr24];
        5:end_delay_wire_163 <= bank_5[addr24];
        6:end_delay_wire_163 <= bank_6[addr24];
        7:end_delay_wire_163 <= bank_7[addr24];
        8:end_delay_wire_163 <= bank_8[addr24];
        9:end_delay_wire_163 <= bank_9[addr24];
        10:end_delay_wire_163 <= bank_10[addr24];
        11:end_delay_wire_163 <= bank_11[addr24];
        12:end_delay_wire_163 <= bank_12[addr24];
        13:end_delay_wire_163 <= bank_13[addr24];
        14:end_delay_wire_163 <= bank_14[addr24];
        15:end_delay_wire_163 <= bank_15[addr24];
        16:end_delay_wire_163 <= bank_16[addr24];
        17:end_delay_wire_163 <= bank_17[addr24];
        18:end_delay_wire_163 <= bank_18[addr24];
        19:end_delay_wire_163 <= bank_19[addr24];
        20:end_delay_wire_163 <= bank_20[addr24];
        21:end_delay_wire_163 <= bank_21[addr24];
        22:end_delay_wire_163 <= bank_22[addr24];
        23:end_delay_wire_163 <= bank_23[addr24];
        24:end_delay_wire_163 <= bank_24[addr24];
        25:end_delay_wire_163 <= bank_25[addr24];
        26:end_delay_wire_163 <= bank_26[addr24];
        27:end_delay_wire_163 <= bank_27[addr24];
        28:end_delay_wire_163 <= bank_28[addr24];
        29:end_delay_wire_163 <= bank_29[addr24];
        30:end_delay_wire_163 <= bank_30[addr24];
        31:end_delay_wire_163 <= bank_31[addr24];
        32:end_delay_wire_163 <= bank_32[addr24];
        33:end_delay_wire_163 <= bank_33[addr24];
        34:end_delay_wire_163 <= bank_34[addr24];
        35:end_delay_wire_163 <= bank_35[addr24];
        36:end_delay_wire_163 <= bank_36[addr24];
        37:end_delay_wire_163 <= bank_37[addr24];
        38:end_delay_wire_163 <= bank_38[addr24];
        39:end_delay_wire_163 <= bank_39[addr24];
        40:end_delay_wire_163 <= bank_40[addr24];
        41:end_delay_wire_163 <= bank_41[addr24];
        42:end_delay_wire_163 <= bank_42[addr24];
        43:end_delay_wire_163 <= bank_43[addr24];
        44:end_delay_wire_163 <= bank_44[addr24];
        45:end_delay_wire_163 <= bank_45[addr24];
        46:end_delay_wire_163 <= bank_46[addr24];
        47:end_delay_wire_163 <= bank_47[addr24];
        48:end_delay_wire_163 <= bank_48[addr24];
        49:end_delay_wire_163 <= bank_49[addr24];
        50:end_delay_wire_163 <= bank_50[addr24];
        51:end_delay_wire_163 <= bank_51[addr24];
        52:end_delay_wire_163 <= bank_52[addr24];
        53:end_delay_wire_163 <= bank_53[addr24];
        54:end_delay_wire_163 <= bank_54[addr24];
        55:end_delay_wire_163 <= bank_55[addr24];
        56:end_delay_wire_163 <= bank_56[addr24];
        57:end_delay_wire_163 <= bank_57[addr24];
        58:end_delay_wire_163 <= bank_58[addr24];
        59:end_delay_wire_163 <= bank_59[addr24];
        60:end_delay_wire_163 <= bank_60[addr24];
        61:end_delay_wire_163 <= bank_61[addr24];
        62:end_delay_wire_163 <= bank_62[addr24];
        63:end_delay_wire_163 <= bank_63[addr24];
        default:end_delay_wire_163 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_13_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_bank_selector.out)
        0:end_delay_wire_164 <= bank_0[addr25];
        1:end_delay_wire_164 <= bank_1[addr25];
        2:end_delay_wire_164 <= bank_2[addr25];
        3:end_delay_wire_164 <= bank_3[addr25];
        4:end_delay_wire_164 <= bank_4[addr25];
        5:end_delay_wire_164 <= bank_5[addr25];
        6:end_delay_wire_164 <= bank_6[addr25];
        7:end_delay_wire_164 <= bank_7[addr25];
        8:end_delay_wire_164 <= bank_8[addr25];
        9:end_delay_wire_164 <= bank_9[addr25];
        10:end_delay_wire_164 <= bank_10[addr25];
        11:end_delay_wire_164 <= bank_11[addr25];
        12:end_delay_wire_164 <= bank_12[addr25];
        13:end_delay_wire_164 <= bank_13[addr25];
        14:end_delay_wire_164 <= bank_14[addr25];
        15:end_delay_wire_164 <= bank_15[addr25];
        16:end_delay_wire_164 <= bank_16[addr25];
        17:end_delay_wire_164 <= bank_17[addr25];
        18:end_delay_wire_164 <= bank_18[addr25];
        19:end_delay_wire_164 <= bank_19[addr25];
        20:end_delay_wire_164 <= bank_20[addr25];
        21:end_delay_wire_164 <= bank_21[addr25];
        22:end_delay_wire_164 <= bank_22[addr25];
        23:end_delay_wire_164 <= bank_23[addr25];
        24:end_delay_wire_164 <= bank_24[addr25];
        25:end_delay_wire_164 <= bank_25[addr25];
        26:end_delay_wire_164 <= bank_26[addr25];
        27:end_delay_wire_164 <= bank_27[addr25];
        28:end_delay_wire_164 <= bank_28[addr25];
        29:end_delay_wire_164 <= bank_29[addr25];
        30:end_delay_wire_164 <= bank_30[addr25];
        31:end_delay_wire_164 <= bank_31[addr25];
        32:end_delay_wire_164 <= bank_32[addr25];
        33:end_delay_wire_164 <= bank_33[addr25];
        34:end_delay_wire_164 <= bank_34[addr25];
        35:end_delay_wire_164 <= bank_35[addr25];
        36:end_delay_wire_164 <= bank_36[addr25];
        37:end_delay_wire_164 <= bank_37[addr25];
        38:end_delay_wire_164 <= bank_38[addr25];
        39:end_delay_wire_164 <= bank_39[addr25];
        40:end_delay_wire_164 <= bank_40[addr25];
        41:end_delay_wire_164 <= bank_41[addr25];
        42:end_delay_wire_164 <= bank_42[addr25];
        43:end_delay_wire_164 <= bank_43[addr25];
        44:end_delay_wire_164 <= bank_44[addr25];
        45:end_delay_wire_164 <= bank_45[addr25];
        46:end_delay_wire_164 <= bank_46[addr25];
        47:end_delay_wire_164 <= bank_47[addr25];
        48:end_delay_wire_164 <= bank_48[addr25];
        49:end_delay_wire_164 <= bank_49[addr25];
        50:end_delay_wire_164 <= bank_50[addr25];
        51:end_delay_wire_164 <= bank_51[addr25];
        52:end_delay_wire_164 <= bank_52[addr25];
        53:end_delay_wire_164 <= bank_53[addr25];
        54:end_delay_wire_164 <= bank_54[addr25];
        55:end_delay_wire_164 <= bank_55[addr25];
        56:end_delay_wire_164 <= bank_56[addr25];
        57:end_delay_wire_164 <= bank_57[addr25];
        58:end_delay_wire_164 <= bank_58[addr25];
        59:end_delay_wire_164 <= bank_59[addr25];
        60:end_delay_wire_164 <= bank_60[addr25];
        61:end_delay_wire_164 <= bank_61[addr25];
        62:end_delay_wire_164 <= bank_62[addr25];
        63:end_delay_wire_164 <= bank_63[addr25];
        default:end_delay_wire_164 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_13_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_bank_selector.out)
        0:end_delay_wire_165 <= bank_0[addr26];
        1:end_delay_wire_165 <= bank_1[addr26];
        2:end_delay_wire_165 <= bank_2[addr26];
        3:end_delay_wire_165 <= bank_3[addr26];
        4:end_delay_wire_165 <= bank_4[addr26];
        5:end_delay_wire_165 <= bank_5[addr26];
        6:end_delay_wire_165 <= bank_6[addr26];
        7:end_delay_wire_165 <= bank_7[addr26];
        8:end_delay_wire_165 <= bank_8[addr26];
        9:end_delay_wire_165 <= bank_9[addr26];
        10:end_delay_wire_165 <= bank_10[addr26];
        11:end_delay_wire_165 <= bank_11[addr26];
        12:end_delay_wire_165 <= bank_12[addr26];
        13:end_delay_wire_165 <= bank_13[addr26];
        14:end_delay_wire_165 <= bank_14[addr26];
        15:end_delay_wire_165 <= bank_15[addr26];
        16:end_delay_wire_165 <= bank_16[addr26];
        17:end_delay_wire_165 <= bank_17[addr26];
        18:end_delay_wire_165 <= bank_18[addr26];
        19:end_delay_wire_165 <= bank_19[addr26];
        20:end_delay_wire_165 <= bank_20[addr26];
        21:end_delay_wire_165 <= bank_21[addr26];
        22:end_delay_wire_165 <= bank_22[addr26];
        23:end_delay_wire_165 <= bank_23[addr26];
        24:end_delay_wire_165 <= bank_24[addr26];
        25:end_delay_wire_165 <= bank_25[addr26];
        26:end_delay_wire_165 <= bank_26[addr26];
        27:end_delay_wire_165 <= bank_27[addr26];
        28:end_delay_wire_165 <= bank_28[addr26];
        29:end_delay_wire_165 <= bank_29[addr26];
        30:end_delay_wire_165 <= bank_30[addr26];
        31:end_delay_wire_165 <= bank_31[addr26];
        32:end_delay_wire_165 <= bank_32[addr26];
        33:end_delay_wire_165 <= bank_33[addr26];
        34:end_delay_wire_165 <= bank_34[addr26];
        35:end_delay_wire_165 <= bank_35[addr26];
        36:end_delay_wire_165 <= bank_36[addr26];
        37:end_delay_wire_165 <= bank_37[addr26];
        38:end_delay_wire_165 <= bank_38[addr26];
        39:end_delay_wire_165 <= bank_39[addr26];
        40:end_delay_wire_165 <= bank_40[addr26];
        41:end_delay_wire_165 <= bank_41[addr26];
        42:end_delay_wire_165 <= bank_42[addr26];
        43:end_delay_wire_165 <= bank_43[addr26];
        44:end_delay_wire_165 <= bank_44[addr26];
        45:end_delay_wire_165 <= bank_45[addr26];
        46:end_delay_wire_165 <= bank_46[addr26];
        47:end_delay_wire_165 <= bank_47[addr26];
        48:end_delay_wire_165 <= bank_48[addr26];
        49:end_delay_wire_165 <= bank_49[addr26];
        50:end_delay_wire_165 <= bank_50[addr26];
        51:end_delay_wire_165 <= bank_51[addr26];
        52:end_delay_wire_165 <= bank_52[addr26];
        53:end_delay_wire_165 <= bank_53[addr26];
        54:end_delay_wire_165 <= bank_54[addr26];
        55:end_delay_wire_165 <= bank_55[addr26];
        56:end_delay_wire_165 <= bank_56[addr26];
        57:end_delay_wire_165 <= bank_57[addr26];
        58:end_delay_wire_165 <= bank_58[addr26];
        59:end_delay_wire_165 <= bank_59[addr26];
        60:end_delay_wire_165 <= bank_60[addr26];
        61:end_delay_wire_165 <= bank_61[addr26];
        62:end_delay_wire_165 <= bank_62[addr26];
        63:end_delay_wire_165 <= bank_63[addr26];
        default:end_delay_wire_165 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_13_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_bank_selector.out)
        0:end_delay_wire_166 <= bank_0[addr27];
        1:end_delay_wire_166 <= bank_1[addr27];
        2:end_delay_wire_166 <= bank_2[addr27];
        3:end_delay_wire_166 <= bank_3[addr27];
        4:end_delay_wire_166 <= bank_4[addr27];
        5:end_delay_wire_166 <= bank_5[addr27];
        6:end_delay_wire_166 <= bank_6[addr27];
        7:end_delay_wire_166 <= bank_7[addr27];
        8:end_delay_wire_166 <= bank_8[addr27];
        9:end_delay_wire_166 <= bank_9[addr27];
        10:end_delay_wire_166 <= bank_10[addr27];
        11:end_delay_wire_166 <= bank_11[addr27];
        12:end_delay_wire_166 <= bank_12[addr27];
        13:end_delay_wire_166 <= bank_13[addr27];
        14:end_delay_wire_166 <= bank_14[addr27];
        15:end_delay_wire_166 <= bank_15[addr27];
        16:end_delay_wire_166 <= bank_16[addr27];
        17:end_delay_wire_166 <= bank_17[addr27];
        18:end_delay_wire_166 <= bank_18[addr27];
        19:end_delay_wire_166 <= bank_19[addr27];
        20:end_delay_wire_166 <= bank_20[addr27];
        21:end_delay_wire_166 <= bank_21[addr27];
        22:end_delay_wire_166 <= bank_22[addr27];
        23:end_delay_wire_166 <= bank_23[addr27];
        24:end_delay_wire_166 <= bank_24[addr27];
        25:end_delay_wire_166 <= bank_25[addr27];
        26:end_delay_wire_166 <= bank_26[addr27];
        27:end_delay_wire_166 <= bank_27[addr27];
        28:end_delay_wire_166 <= bank_28[addr27];
        29:end_delay_wire_166 <= bank_29[addr27];
        30:end_delay_wire_166 <= bank_30[addr27];
        31:end_delay_wire_166 <= bank_31[addr27];
        32:end_delay_wire_166 <= bank_32[addr27];
        33:end_delay_wire_166 <= bank_33[addr27];
        34:end_delay_wire_166 <= bank_34[addr27];
        35:end_delay_wire_166 <= bank_35[addr27];
        36:end_delay_wire_166 <= bank_36[addr27];
        37:end_delay_wire_166 <= bank_37[addr27];
        38:end_delay_wire_166 <= bank_38[addr27];
        39:end_delay_wire_166 <= bank_39[addr27];
        40:end_delay_wire_166 <= bank_40[addr27];
        41:end_delay_wire_166 <= bank_41[addr27];
        42:end_delay_wire_166 <= bank_42[addr27];
        43:end_delay_wire_166 <= bank_43[addr27];
        44:end_delay_wire_166 <= bank_44[addr27];
        45:end_delay_wire_166 <= bank_45[addr27];
        46:end_delay_wire_166 <= bank_46[addr27];
        47:end_delay_wire_166 <= bank_47[addr27];
        48:end_delay_wire_166 <= bank_48[addr27];
        49:end_delay_wire_166 <= bank_49[addr27];
        50:end_delay_wire_166 <= bank_50[addr27];
        51:end_delay_wire_166 <= bank_51[addr27];
        52:end_delay_wire_166 <= bank_52[addr27];
        53:end_delay_wire_166 <= bank_53[addr27];
        54:end_delay_wire_166 <= bank_54[addr27];
        55:end_delay_wire_166 <= bank_55[addr27];
        56:end_delay_wire_166 <= bank_56[addr27];
        57:end_delay_wire_166 <= bank_57[addr27];
        58:end_delay_wire_166 <= bank_58[addr27];
        59:end_delay_wire_166 <= bank_59[addr27];
        60:end_delay_wire_166 <= bank_60[addr27];
        61:end_delay_wire_166 <= bank_61[addr27];
        62:end_delay_wire_166 <= bank_62[addr27];
        63:end_delay_wire_166 <= bank_63[addr27];
        default:end_delay_wire_166 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_13_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_bank_selector.out)
        0:end_delay_wire_167 <= bank_0[addr28];
        1:end_delay_wire_167 <= bank_1[addr28];
        2:end_delay_wire_167 <= bank_2[addr28];
        3:end_delay_wire_167 <= bank_3[addr28];
        4:end_delay_wire_167 <= bank_4[addr28];
        5:end_delay_wire_167 <= bank_5[addr28];
        6:end_delay_wire_167 <= bank_6[addr28];
        7:end_delay_wire_167 <= bank_7[addr28];
        8:end_delay_wire_167 <= bank_8[addr28];
        9:end_delay_wire_167 <= bank_9[addr28];
        10:end_delay_wire_167 <= bank_10[addr28];
        11:end_delay_wire_167 <= bank_11[addr28];
        12:end_delay_wire_167 <= bank_12[addr28];
        13:end_delay_wire_167 <= bank_13[addr28];
        14:end_delay_wire_167 <= bank_14[addr28];
        15:end_delay_wire_167 <= bank_15[addr28];
        16:end_delay_wire_167 <= bank_16[addr28];
        17:end_delay_wire_167 <= bank_17[addr28];
        18:end_delay_wire_167 <= bank_18[addr28];
        19:end_delay_wire_167 <= bank_19[addr28];
        20:end_delay_wire_167 <= bank_20[addr28];
        21:end_delay_wire_167 <= bank_21[addr28];
        22:end_delay_wire_167 <= bank_22[addr28];
        23:end_delay_wire_167 <= bank_23[addr28];
        24:end_delay_wire_167 <= bank_24[addr28];
        25:end_delay_wire_167 <= bank_25[addr28];
        26:end_delay_wire_167 <= bank_26[addr28];
        27:end_delay_wire_167 <= bank_27[addr28];
        28:end_delay_wire_167 <= bank_28[addr28];
        29:end_delay_wire_167 <= bank_29[addr28];
        30:end_delay_wire_167 <= bank_30[addr28];
        31:end_delay_wire_167 <= bank_31[addr28];
        32:end_delay_wire_167 <= bank_32[addr28];
        33:end_delay_wire_167 <= bank_33[addr28];
        34:end_delay_wire_167 <= bank_34[addr28];
        35:end_delay_wire_167 <= bank_35[addr28];
        36:end_delay_wire_167 <= bank_36[addr28];
        37:end_delay_wire_167 <= bank_37[addr28];
        38:end_delay_wire_167 <= bank_38[addr28];
        39:end_delay_wire_167 <= bank_39[addr28];
        40:end_delay_wire_167 <= bank_40[addr28];
        41:end_delay_wire_167 <= bank_41[addr28];
        42:end_delay_wire_167 <= bank_42[addr28];
        43:end_delay_wire_167 <= bank_43[addr28];
        44:end_delay_wire_167 <= bank_44[addr28];
        45:end_delay_wire_167 <= bank_45[addr28];
        46:end_delay_wire_167 <= bank_46[addr28];
        47:end_delay_wire_167 <= bank_47[addr28];
        48:end_delay_wire_167 <= bank_48[addr28];
        49:end_delay_wire_167 <= bank_49[addr28];
        50:end_delay_wire_167 <= bank_50[addr28];
        51:end_delay_wire_167 <= bank_51[addr28];
        52:end_delay_wire_167 <= bank_52[addr28];
        53:end_delay_wire_167 <= bank_53[addr28];
        54:end_delay_wire_167 <= bank_54[addr28];
        55:end_delay_wire_167 <= bank_55[addr28];
        56:end_delay_wire_167 <= bank_56[addr28];
        57:end_delay_wire_167 <= bank_57[addr28];
        58:end_delay_wire_167 <= bank_58[addr28];
        59:end_delay_wire_167 <= bank_59[addr28];
        60:end_delay_wire_167 <= bank_60[addr28];
        61:end_delay_wire_167 <= bank_61[addr28];
        62:end_delay_wire_167 <= bank_62[addr28];
        63:end_delay_wire_167 <= bank_63[addr28];
        default:end_delay_wire_167 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_13_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_bank_selector.out)
        0:end_delay_wire_168 <= bank_0[addr29];
        1:end_delay_wire_168 <= bank_1[addr29];
        2:end_delay_wire_168 <= bank_2[addr29];
        3:end_delay_wire_168 <= bank_3[addr29];
        4:end_delay_wire_168 <= bank_4[addr29];
        5:end_delay_wire_168 <= bank_5[addr29];
        6:end_delay_wire_168 <= bank_6[addr29];
        7:end_delay_wire_168 <= bank_7[addr29];
        8:end_delay_wire_168 <= bank_8[addr29];
        9:end_delay_wire_168 <= bank_9[addr29];
        10:end_delay_wire_168 <= bank_10[addr29];
        11:end_delay_wire_168 <= bank_11[addr29];
        12:end_delay_wire_168 <= bank_12[addr29];
        13:end_delay_wire_168 <= bank_13[addr29];
        14:end_delay_wire_168 <= bank_14[addr29];
        15:end_delay_wire_168 <= bank_15[addr29];
        16:end_delay_wire_168 <= bank_16[addr29];
        17:end_delay_wire_168 <= bank_17[addr29];
        18:end_delay_wire_168 <= bank_18[addr29];
        19:end_delay_wire_168 <= bank_19[addr29];
        20:end_delay_wire_168 <= bank_20[addr29];
        21:end_delay_wire_168 <= bank_21[addr29];
        22:end_delay_wire_168 <= bank_22[addr29];
        23:end_delay_wire_168 <= bank_23[addr29];
        24:end_delay_wire_168 <= bank_24[addr29];
        25:end_delay_wire_168 <= bank_25[addr29];
        26:end_delay_wire_168 <= bank_26[addr29];
        27:end_delay_wire_168 <= bank_27[addr29];
        28:end_delay_wire_168 <= bank_28[addr29];
        29:end_delay_wire_168 <= bank_29[addr29];
        30:end_delay_wire_168 <= bank_30[addr29];
        31:end_delay_wire_168 <= bank_31[addr29];
        32:end_delay_wire_168 <= bank_32[addr29];
        33:end_delay_wire_168 <= bank_33[addr29];
        34:end_delay_wire_168 <= bank_34[addr29];
        35:end_delay_wire_168 <= bank_35[addr29];
        36:end_delay_wire_168 <= bank_36[addr29];
        37:end_delay_wire_168 <= bank_37[addr29];
        38:end_delay_wire_168 <= bank_38[addr29];
        39:end_delay_wire_168 <= bank_39[addr29];
        40:end_delay_wire_168 <= bank_40[addr29];
        41:end_delay_wire_168 <= bank_41[addr29];
        42:end_delay_wire_168 <= bank_42[addr29];
        43:end_delay_wire_168 <= bank_43[addr29];
        44:end_delay_wire_168 <= bank_44[addr29];
        45:end_delay_wire_168 <= bank_45[addr29];
        46:end_delay_wire_168 <= bank_46[addr29];
        47:end_delay_wire_168 <= bank_47[addr29];
        48:end_delay_wire_168 <= bank_48[addr29];
        49:end_delay_wire_168 <= bank_49[addr29];
        50:end_delay_wire_168 <= bank_50[addr29];
        51:end_delay_wire_168 <= bank_51[addr29];
        52:end_delay_wire_168 <= bank_52[addr29];
        53:end_delay_wire_168 <= bank_53[addr29];
        54:end_delay_wire_168 <= bank_54[addr29];
        55:end_delay_wire_168 <= bank_55[addr29];
        56:end_delay_wire_168 <= bank_56[addr29];
        57:end_delay_wire_168 <= bank_57[addr29];
        58:end_delay_wire_168 <= bank_58[addr29];
        59:end_delay_wire_168 <= bank_59[addr29];
        60:end_delay_wire_168 <= bank_60[addr29];
        61:end_delay_wire_168 <= bank_61[addr29];
        62:end_delay_wire_168 <= bank_62[addr29];
        63:end_delay_wire_168 <= bank_63[addr29];
        default:end_delay_wire_168 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_13_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_bank_selector.out)
        0:end_delay_wire_169 <= bank_0[addr30];
        1:end_delay_wire_169 <= bank_1[addr30];
        2:end_delay_wire_169 <= bank_2[addr30];
        3:end_delay_wire_169 <= bank_3[addr30];
        4:end_delay_wire_169 <= bank_4[addr30];
        5:end_delay_wire_169 <= bank_5[addr30];
        6:end_delay_wire_169 <= bank_6[addr30];
        7:end_delay_wire_169 <= bank_7[addr30];
        8:end_delay_wire_169 <= bank_8[addr30];
        9:end_delay_wire_169 <= bank_9[addr30];
        10:end_delay_wire_169 <= bank_10[addr30];
        11:end_delay_wire_169 <= bank_11[addr30];
        12:end_delay_wire_169 <= bank_12[addr30];
        13:end_delay_wire_169 <= bank_13[addr30];
        14:end_delay_wire_169 <= bank_14[addr30];
        15:end_delay_wire_169 <= bank_15[addr30];
        16:end_delay_wire_169 <= bank_16[addr30];
        17:end_delay_wire_169 <= bank_17[addr30];
        18:end_delay_wire_169 <= bank_18[addr30];
        19:end_delay_wire_169 <= bank_19[addr30];
        20:end_delay_wire_169 <= bank_20[addr30];
        21:end_delay_wire_169 <= bank_21[addr30];
        22:end_delay_wire_169 <= bank_22[addr30];
        23:end_delay_wire_169 <= bank_23[addr30];
        24:end_delay_wire_169 <= bank_24[addr30];
        25:end_delay_wire_169 <= bank_25[addr30];
        26:end_delay_wire_169 <= bank_26[addr30];
        27:end_delay_wire_169 <= bank_27[addr30];
        28:end_delay_wire_169 <= bank_28[addr30];
        29:end_delay_wire_169 <= bank_29[addr30];
        30:end_delay_wire_169 <= bank_30[addr30];
        31:end_delay_wire_169 <= bank_31[addr30];
        32:end_delay_wire_169 <= bank_32[addr30];
        33:end_delay_wire_169 <= bank_33[addr30];
        34:end_delay_wire_169 <= bank_34[addr30];
        35:end_delay_wire_169 <= bank_35[addr30];
        36:end_delay_wire_169 <= bank_36[addr30];
        37:end_delay_wire_169 <= bank_37[addr30];
        38:end_delay_wire_169 <= bank_38[addr30];
        39:end_delay_wire_169 <= bank_39[addr30];
        40:end_delay_wire_169 <= bank_40[addr30];
        41:end_delay_wire_169 <= bank_41[addr30];
        42:end_delay_wire_169 <= bank_42[addr30];
        43:end_delay_wire_169 <= bank_43[addr30];
        44:end_delay_wire_169 <= bank_44[addr30];
        45:end_delay_wire_169 <= bank_45[addr30];
        46:end_delay_wire_169 <= bank_46[addr30];
        47:end_delay_wire_169 <= bank_47[addr30];
        48:end_delay_wire_169 <= bank_48[addr30];
        49:end_delay_wire_169 <= bank_49[addr30];
        50:end_delay_wire_169 <= bank_50[addr30];
        51:end_delay_wire_169 <= bank_51[addr30];
        52:end_delay_wire_169 <= bank_52[addr30];
        53:end_delay_wire_169 <= bank_53[addr30];
        54:end_delay_wire_169 <= bank_54[addr30];
        55:end_delay_wire_169 <= bank_55[addr30];
        56:end_delay_wire_169 <= bank_56[addr30];
        57:end_delay_wire_169 <= bank_57[addr30];
        58:end_delay_wire_169 <= bank_58[addr30];
        59:end_delay_wire_169 <= bank_59[addr30];
        60:end_delay_wire_169 <= bank_60[addr30];
        61:end_delay_wire_169 <= bank_61[addr30];
        62:end_delay_wire_169 <= bank_62[addr30];
        63:end_delay_wire_169 <= bank_63[addr30];
        default:end_delay_wire_169 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_13_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_bank_selector.out)
        0:end_delay_wire_170 <= bank_0[addr31];
        1:end_delay_wire_170 <= bank_1[addr31];
        2:end_delay_wire_170 <= bank_2[addr31];
        3:end_delay_wire_170 <= bank_3[addr31];
        4:end_delay_wire_170 <= bank_4[addr31];
        5:end_delay_wire_170 <= bank_5[addr31];
        6:end_delay_wire_170 <= bank_6[addr31];
        7:end_delay_wire_170 <= bank_7[addr31];
        8:end_delay_wire_170 <= bank_8[addr31];
        9:end_delay_wire_170 <= bank_9[addr31];
        10:end_delay_wire_170 <= bank_10[addr31];
        11:end_delay_wire_170 <= bank_11[addr31];
        12:end_delay_wire_170 <= bank_12[addr31];
        13:end_delay_wire_170 <= bank_13[addr31];
        14:end_delay_wire_170 <= bank_14[addr31];
        15:end_delay_wire_170 <= bank_15[addr31];
        16:end_delay_wire_170 <= bank_16[addr31];
        17:end_delay_wire_170 <= bank_17[addr31];
        18:end_delay_wire_170 <= bank_18[addr31];
        19:end_delay_wire_170 <= bank_19[addr31];
        20:end_delay_wire_170 <= bank_20[addr31];
        21:end_delay_wire_170 <= bank_21[addr31];
        22:end_delay_wire_170 <= bank_22[addr31];
        23:end_delay_wire_170 <= bank_23[addr31];
        24:end_delay_wire_170 <= bank_24[addr31];
        25:end_delay_wire_170 <= bank_25[addr31];
        26:end_delay_wire_170 <= bank_26[addr31];
        27:end_delay_wire_170 <= bank_27[addr31];
        28:end_delay_wire_170 <= bank_28[addr31];
        29:end_delay_wire_170 <= bank_29[addr31];
        30:end_delay_wire_170 <= bank_30[addr31];
        31:end_delay_wire_170 <= bank_31[addr31];
        32:end_delay_wire_170 <= bank_32[addr31];
        33:end_delay_wire_170 <= bank_33[addr31];
        34:end_delay_wire_170 <= bank_34[addr31];
        35:end_delay_wire_170 <= bank_35[addr31];
        36:end_delay_wire_170 <= bank_36[addr31];
        37:end_delay_wire_170 <= bank_37[addr31];
        38:end_delay_wire_170 <= bank_38[addr31];
        39:end_delay_wire_170 <= bank_39[addr31];
        40:end_delay_wire_170 <= bank_40[addr31];
        41:end_delay_wire_170 <= bank_41[addr31];
        42:end_delay_wire_170 <= bank_42[addr31];
        43:end_delay_wire_170 <= bank_43[addr31];
        44:end_delay_wire_170 <= bank_44[addr31];
        45:end_delay_wire_170 <= bank_45[addr31];
        46:end_delay_wire_170 <= bank_46[addr31];
        47:end_delay_wire_170 <= bank_47[addr31];
        48:end_delay_wire_170 <= bank_48[addr31];
        49:end_delay_wire_170 <= bank_49[addr31];
        50:end_delay_wire_170 <= bank_50[addr31];
        51:end_delay_wire_170 <= bank_51[addr31];
        52:end_delay_wire_170 <= bank_52[addr31];
        53:end_delay_wire_170 <= bank_53[addr31];
        54:end_delay_wire_170 <= bank_54[addr31];
        55:end_delay_wire_170 <= bank_55[addr31];
        56:end_delay_wire_170 <= bank_56[addr31];
        57:end_delay_wire_170 <= bank_57[addr31];
        58:end_delay_wire_170 <= bank_58[addr31];
        59:end_delay_wire_170 <= bank_59[addr31];
        60:end_delay_wire_170 <= bank_60[addr31];
        61:end_delay_wire_170 <= bank_61[addr31];
        62:end_delay_wire_170 <= bank_62[addr31];
        63:end_delay_wire_170 <= bank_63[addr31];
        default:end_delay_wire_170 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_13_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_bank_selector.out)
        0:end_delay_wire_171 <= bank_0[addr32];
        1:end_delay_wire_171 <= bank_1[addr32];
        2:end_delay_wire_171 <= bank_2[addr32];
        3:end_delay_wire_171 <= bank_3[addr32];
        4:end_delay_wire_171 <= bank_4[addr32];
        5:end_delay_wire_171 <= bank_5[addr32];
        6:end_delay_wire_171 <= bank_6[addr32];
        7:end_delay_wire_171 <= bank_7[addr32];
        8:end_delay_wire_171 <= bank_8[addr32];
        9:end_delay_wire_171 <= bank_9[addr32];
        10:end_delay_wire_171 <= bank_10[addr32];
        11:end_delay_wire_171 <= bank_11[addr32];
        12:end_delay_wire_171 <= bank_12[addr32];
        13:end_delay_wire_171 <= bank_13[addr32];
        14:end_delay_wire_171 <= bank_14[addr32];
        15:end_delay_wire_171 <= bank_15[addr32];
        16:end_delay_wire_171 <= bank_16[addr32];
        17:end_delay_wire_171 <= bank_17[addr32];
        18:end_delay_wire_171 <= bank_18[addr32];
        19:end_delay_wire_171 <= bank_19[addr32];
        20:end_delay_wire_171 <= bank_20[addr32];
        21:end_delay_wire_171 <= bank_21[addr32];
        22:end_delay_wire_171 <= bank_22[addr32];
        23:end_delay_wire_171 <= bank_23[addr32];
        24:end_delay_wire_171 <= bank_24[addr32];
        25:end_delay_wire_171 <= bank_25[addr32];
        26:end_delay_wire_171 <= bank_26[addr32];
        27:end_delay_wire_171 <= bank_27[addr32];
        28:end_delay_wire_171 <= bank_28[addr32];
        29:end_delay_wire_171 <= bank_29[addr32];
        30:end_delay_wire_171 <= bank_30[addr32];
        31:end_delay_wire_171 <= bank_31[addr32];
        32:end_delay_wire_171 <= bank_32[addr32];
        33:end_delay_wire_171 <= bank_33[addr32];
        34:end_delay_wire_171 <= bank_34[addr32];
        35:end_delay_wire_171 <= bank_35[addr32];
        36:end_delay_wire_171 <= bank_36[addr32];
        37:end_delay_wire_171 <= bank_37[addr32];
        38:end_delay_wire_171 <= bank_38[addr32];
        39:end_delay_wire_171 <= bank_39[addr32];
        40:end_delay_wire_171 <= bank_40[addr32];
        41:end_delay_wire_171 <= bank_41[addr32];
        42:end_delay_wire_171 <= bank_42[addr32];
        43:end_delay_wire_171 <= bank_43[addr32];
        44:end_delay_wire_171 <= bank_44[addr32];
        45:end_delay_wire_171 <= bank_45[addr32];
        46:end_delay_wire_171 <= bank_46[addr32];
        47:end_delay_wire_171 <= bank_47[addr32];
        48:end_delay_wire_171 <= bank_48[addr32];
        49:end_delay_wire_171 <= bank_49[addr32];
        50:end_delay_wire_171 <= bank_50[addr32];
        51:end_delay_wire_171 <= bank_51[addr32];
        52:end_delay_wire_171 <= bank_52[addr32];
        53:end_delay_wire_171 <= bank_53[addr32];
        54:end_delay_wire_171 <= bank_54[addr32];
        55:end_delay_wire_171 <= bank_55[addr32];
        56:end_delay_wire_171 <= bank_56[addr32];
        57:end_delay_wire_171 <= bank_57[addr32];
        58:end_delay_wire_171 <= bank_58[addr32];
        59:end_delay_wire_171 <= bank_59[addr32];
        60:end_delay_wire_171 <= bank_60[addr32];
        61:end_delay_wire_171 <= bank_61[addr32];
        62:end_delay_wire_171 <= bank_62[addr32];
        63:end_delay_wire_171 <= bank_63[addr32];
        default:end_delay_wire_171 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_14_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_bank_selector.out)
        0:end_delay_wire_172 <= bank_0[addr33];
        1:end_delay_wire_172 <= bank_1[addr33];
        2:end_delay_wire_172 <= bank_2[addr33];
        3:end_delay_wire_172 <= bank_3[addr33];
        4:end_delay_wire_172 <= bank_4[addr33];
        5:end_delay_wire_172 <= bank_5[addr33];
        6:end_delay_wire_172 <= bank_6[addr33];
        7:end_delay_wire_172 <= bank_7[addr33];
        8:end_delay_wire_172 <= bank_8[addr33];
        9:end_delay_wire_172 <= bank_9[addr33];
        10:end_delay_wire_172 <= bank_10[addr33];
        11:end_delay_wire_172 <= bank_11[addr33];
        12:end_delay_wire_172 <= bank_12[addr33];
        13:end_delay_wire_172 <= bank_13[addr33];
        14:end_delay_wire_172 <= bank_14[addr33];
        15:end_delay_wire_172 <= bank_15[addr33];
        16:end_delay_wire_172 <= bank_16[addr33];
        17:end_delay_wire_172 <= bank_17[addr33];
        18:end_delay_wire_172 <= bank_18[addr33];
        19:end_delay_wire_172 <= bank_19[addr33];
        20:end_delay_wire_172 <= bank_20[addr33];
        21:end_delay_wire_172 <= bank_21[addr33];
        22:end_delay_wire_172 <= bank_22[addr33];
        23:end_delay_wire_172 <= bank_23[addr33];
        24:end_delay_wire_172 <= bank_24[addr33];
        25:end_delay_wire_172 <= bank_25[addr33];
        26:end_delay_wire_172 <= bank_26[addr33];
        27:end_delay_wire_172 <= bank_27[addr33];
        28:end_delay_wire_172 <= bank_28[addr33];
        29:end_delay_wire_172 <= bank_29[addr33];
        30:end_delay_wire_172 <= bank_30[addr33];
        31:end_delay_wire_172 <= bank_31[addr33];
        32:end_delay_wire_172 <= bank_32[addr33];
        33:end_delay_wire_172 <= bank_33[addr33];
        34:end_delay_wire_172 <= bank_34[addr33];
        35:end_delay_wire_172 <= bank_35[addr33];
        36:end_delay_wire_172 <= bank_36[addr33];
        37:end_delay_wire_172 <= bank_37[addr33];
        38:end_delay_wire_172 <= bank_38[addr33];
        39:end_delay_wire_172 <= bank_39[addr33];
        40:end_delay_wire_172 <= bank_40[addr33];
        41:end_delay_wire_172 <= bank_41[addr33];
        42:end_delay_wire_172 <= bank_42[addr33];
        43:end_delay_wire_172 <= bank_43[addr33];
        44:end_delay_wire_172 <= bank_44[addr33];
        45:end_delay_wire_172 <= bank_45[addr33];
        46:end_delay_wire_172 <= bank_46[addr33];
        47:end_delay_wire_172 <= bank_47[addr33];
        48:end_delay_wire_172 <= bank_48[addr33];
        49:end_delay_wire_172 <= bank_49[addr33];
        50:end_delay_wire_172 <= bank_50[addr33];
        51:end_delay_wire_172 <= bank_51[addr33];
        52:end_delay_wire_172 <= bank_52[addr33];
        53:end_delay_wire_172 <= bank_53[addr33];
        54:end_delay_wire_172 <= bank_54[addr33];
        55:end_delay_wire_172 <= bank_55[addr33];
        56:end_delay_wire_172 <= bank_56[addr33];
        57:end_delay_wire_172 <= bank_57[addr33];
        58:end_delay_wire_172 <= bank_58[addr33];
        59:end_delay_wire_172 <= bank_59[addr33];
        60:end_delay_wire_172 <= bank_60[addr33];
        61:end_delay_wire_172 <= bank_61[addr33];
        62:end_delay_wire_172 <= bank_62[addr33];
        63:end_delay_wire_172 <= bank_63[addr33];
        default:end_delay_wire_172 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_14_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_bank_selector.out)
        0:end_delay_wire_173 <= bank_0[addr34];
        1:end_delay_wire_173 <= bank_1[addr34];
        2:end_delay_wire_173 <= bank_2[addr34];
        3:end_delay_wire_173 <= bank_3[addr34];
        4:end_delay_wire_173 <= bank_4[addr34];
        5:end_delay_wire_173 <= bank_5[addr34];
        6:end_delay_wire_173 <= bank_6[addr34];
        7:end_delay_wire_173 <= bank_7[addr34];
        8:end_delay_wire_173 <= bank_8[addr34];
        9:end_delay_wire_173 <= bank_9[addr34];
        10:end_delay_wire_173 <= bank_10[addr34];
        11:end_delay_wire_173 <= bank_11[addr34];
        12:end_delay_wire_173 <= bank_12[addr34];
        13:end_delay_wire_173 <= bank_13[addr34];
        14:end_delay_wire_173 <= bank_14[addr34];
        15:end_delay_wire_173 <= bank_15[addr34];
        16:end_delay_wire_173 <= bank_16[addr34];
        17:end_delay_wire_173 <= bank_17[addr34];
        18:end_delay_wire_173 <= bank_18[addr34];
        19:end_delay_wire_173 <= bank_19[addr34];
        20:end_delay_wire_173 <= bank_20[addr34];
        21:end_delay_wire_173 <= bank_21[addr34];
        22:end_delay_wire_173 <= bank_22[addr34];
        23:end_delay_wire_173 <= bank_23[addr34];
        24:end_delay_wire_173 <= bank_24[addr34];
        25:end_delay_wire_173 <= bank_25[addr34];
        26:end_delay_wire_173 <= bank_26[addr34];
        27:end_delay_wire_173 <= bank_27[addr34];
        28:end_delay_wire_173 <= bank_28[addr34];
        29:end_delay_wire_173 <= bank_29[addr34];
        30:end_delay_wire_173 <= bank_30[addr34];
        31:end_delay_wire_173 <= bank_31[addr34];
        32:end_delay_wire_173 <= bank_32[addr34];
        33:end_delay_wire_173 <= bank_33[addr34];
        34:end_delay_wire_173 <= bank_34[addr34];
        35:end_delay_wire_173 <= bank_35[addr34];
        36:end_delay_wire_173 <= bank_36[addr34];
        37:end_delay_wire_173 <= bank_37[addr34];
        38:end_delay_wire_173 <= bank_38[addr34];
        39:end_delay_wire_173 <= bank_39[addr34];
        40:end_delay_wire_173 <= bank_40[addr34];
        41:end_delay_wire_173 <= bank_41[addr34];
        42:end_delay_wire_173 <= bank_42[addr34];
        43:end_delay_wire_173 <= bank_43[addr34];
        44:end_delay_wire_173 <= bank_44[addr34];
        45:end_delay_wire_173 <= bank_45[addr34];
        46:end_delay_wire_173 <= bank_46[addr34];
        47:end_delay_wire_173 <= bank_47[addr34];
        48:end_delay_wire_173 <= bank_48[addr34];
        49:end_delay_wire_173 <= bank_49[addr34];
        50:end_delay_wire_173 <= bank_50[addr34];
        51:end_delay_wire_173 <= bank_51[addr34];
        52:end_delay_wire_173 <= bank_52[addr34];
        53:end_delay_wire_173 <= bank_53[addr34];
        54:end_delay_wire_173 <= bank_54[addr34];
        55:end_delay_wire_173 <= bank_55[addr34];
        56:end_delay_wire_173 <= bank_56[addr34];
        57:end_delay_wire_173 <= bank_57[addr34];
        58:end_delay_wire_173 <= bank_58[addr34];
        59:end_delay_wire_173 <= bank_59[addr34];
        60:end_delay_wire_173 <= bank_60[addr34];
        61:end_delay_wire_173 <= bank_61[addr34];
        62:end_delay_wire_173 <= bank_62[addr34];
        63:end_delay_wire_173 <= bank_63[addr34];
        default:end_delay_wire_173 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_14_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_bank_selector.out)
        0:end_delay_wire_174 <= bank_0[addr35];
        1:end_delay_wire_174 <= bank_1[addr35];
        2:end_delay_wire_174 <= bank_2[addr35];
        3:end_delay_wire_174 <= bank_3[addr35];
        4:end_delay_wire_174 <= bank_4[addr35];
        5:end_delay_wire_174 <= bank_5[addr35];
        6:end_delay_wire_174 <= bank_6[addr35];
        7:end_delay_wire_174 <= bank_7[addr35];
        8:end_delay_wire_174 <= bank_8[addr35];
        9:end_delay_wire_174 <= bank_9[addr35];
        10:end_delay_wire_174 <= bank_10[addr35];
        11:end_delay_wire_174 <= bank_11[addr35];
        12:end_delay_wire_174 <= bank_12[addr35];
        13:end_delay_wire_174 <= bank_13[addr35];
        14:end_delay_wire_174 <= bank_14[addr35];
        15:end_delay_wire_174 <= bank_15[addr35];
        16:end_delay_wire_174 <= bank_16[addr35];
        17:end_delay_wire_174 <= bank_17[addr35];
        18:end_delay_wire_174 <= bank_18[addr35];
        19:end_delay_wire_174 <= bank_19[addr35];
        20:end_delay_wire_174 <= bank_20[addr35];
        21:end_delay_wire_174 <= bank_21[addr35];
        22:end_delay_wire_174 <= bank_22[addr35];
        23:end_delay_wire_174 <= bank_23[addr35];
        24:end_delay_wire_174 <= bank_24[addr35];
        25:end_delay_wire_174 <= bank_25[addr35];
        26:end_delay_wire_174 <= bank_26[addr35];
        27:end_delay_wire_174 <= bank_27[addr35];
        28:end_delay_wire_174 <= bank_28[addr35];
        29:end_delay_wire_174 <= bank_29[addr35];
        30:end_delay_wire_174 <= bank_30[addr35];
        31:end_delay_wire_174 <= bank_31[addr35];
        32:end_delay_wire_174 <= bank_32[addr35];
        33:end_delay_wire_174 <= bank_33[addr35];
        34:end_delay_wire_174 <= bank_34[addr35];
        35:end_delay_wire_174 <= bank_35[addr35];
        36:end_delay_wire_174 <= bank_36[addr35];
        37:end_delay_wire_174 <= bank_37[addr35];
        38:end_delay_wire_174 <= bank_38[addr35];
        39:end_delay_wire_174 <= bank_39[addr35];
        40:end_delay_wire_174 <= bank_40[addr35];
        41:end_delay_wire_174 <= bank_41[addr35];
        42:end_delay_wire_174 <= bank_42[addr35];
        43:end_delay_wire_174 <= bank_43[addr35];
        44:end_delay_wire_174 <= bank_44[addr35];
        45:end_delay_wire_174 <= bank_45[addr35];
        46:end_delay_wire_174 <= bank_46[addr35];
        47:end_delay_wire_174 <= bank_47[addr35];
        48:end_delay_wire_174 <= bank_48[addr35];
        49:end_delay_wire_174 <= bank_49[addr35];
        50:end_delay_wire_174 <= bank_50[addr35];
        51:end_delay_wire_174 <= bank_51[addr35];
        52:end_delay_wire_174 <= bank_52[addr35];
        53:end_delay_wire_174 <= bank_53[addr35];
        54:end_delay_wire_174 <= bank_54[addr35];
        55:end_delay_wire_174 <= bank_55[addr35];
        56:end_delay_wire_174 <= bank_56[addr35];
        57:end_delay_wire_174 <= bank_57[addr35];
        58:end_delay_wire_174 <= bank_58[addr35];
        59:end_delay_wire_174 <= bank_59[addr35];
        60:end_delay_wire_174 <= bank_60[addr35];
        61:end_delay_wire_174 <= bank_61[addr35];
        62:end_delay_wire_174 <= bank_62[addr35];
        63:end_delay_wire_174 <= bank_63[addr35];
        default:end_delay_wire_174 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_14_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_bank_selector.out)
        0:end_delay_wire_175 <= bank_0[addr36];
        1:end_delay_wire_175 <= bank_1[addr36];
        2:end_delay_wire_175 <= bank_2[addr36];
        3:end_delay_wire_175 <= bank_3[addr36];
        4:end_delay_wire_175 <= bank_4[addr36];
        5:end_delay_wire_175 <= bank_5[addr36];
        6:end_delay_wire_175 <= bank_6[addr36];
        7:end_delay_wire_175 <= bank_7[addr36];
        8:end_delay_wire_175 <= bank_8[addr36];
        9:end_delay_wire_175 <= bank_9[addr36];
        10:end_delay_wire_175 <= bank_10[addr36];
        11:end_delay_wire_175 <= bank_11[addr36];
        12:end_delay_wire_175 <= bank_12[addr36];
        13:end_delay_wire_175 <= bank_13[addr36];
        14:end_delay_wire_175 <= bank_14[addr36];
        15:end_delay_wire_175 <= bank_15[addr36];
        16:end_delay_wire_175 <= bank_16[addr36];
        17:end_delay_wire_175 <= bank_17[addr36];
        18:end_delay_wire_175 <= bank_18[addr36];
        19:end_delay_wire_175 <= bank_19[addr36];
        20:end_delay_wire_175 <= bank_20[addr36];
        21:end_delay_wire_175 <= bank_21[addr36];
        22:end_delay_wire_175 <= bank_22[addr36];
        23:end_delay_wire_175 <= bank_23[addr36];
        24:end_delay_wire_175 <= bank_24[addr36];
        25:end_delay_wire_175 <= bank_25[addr36];
        26:end_delay_wire_175 <= bank_26[addr36];
        27:end_delay_wire_175 <= bank_27[addr36];
        28:end_delay_wire_175 <= bank_28[addr36];
        29:end_delay_wire_175 <= bank_29[addr36];
        30:end_delay_wire_175 <= bank_30[addr36];
        31:end_delay_wire_175 <= bank_31[addr36];
        32:end_delay_wire_175 <= bank_32[addr36];
        33:end_delay_wire_175 <= bank_33[addr36];
        34:end_delay_wire_175 <= bank_34[addr36];
        35:end_delay_wire_175 <= bank_35[addr36];
        36:end_delay_wire_175 <= bank_36[addr36];
        37:end_delay_wire_175 <= bank_37[addr36];
        38:end_delay_wire_175 <= bank_38[addr36];
        39:end_delay_wire_175 <= bank_39[addr36];
        40:end_delay_wire_175 <= bank_40[addr36];
        41:end_delay_wire_175 <= bank_41[addr36];
        42:end_delay_wire_175 <= bank_42[addr36];
        43:end_delay_wire_175 <= bank_43[addr36];
        44:end_delay_wire_175 <= bank_44[addr36];
        45:end_delay_wire_175 <= bank_45[addr36];
        46:end_delay_wire_175 <= bank_46[addr36];
        47:end_delay_wire_175 <= bank_47[addr36];
        48:end_delay_wire_175 <= bank_48[addr36];
        49:end_delay_wire_175 <= bank_49[addr36];
        50:end_delay_wire_175 <= bank_50[addr36];
        51:end_delay_wire_175 <= bank_51[addr36];
        52:end_delay_wire_175 <= bank_52[addr36];
        53:end_delay_wire_175 <= bank_53[addr36];
        54:end_delay_wire_175 <= bank_54[addr36];
        55:end_delay_wire_175 <= bank_55[addr36];
        56:end_delay_wire_175 <= bank_56[addr36];
        57:end_delay_wire_175 <= bank_57[addr36];
        58:end_delay_wire_175 <= bank_58[addr36];
        59:end_delay_wire_175 <= bank_59[addr36];
        60:end_delay_wire_175 <= bank_60[addr36];
        61:end_delay_wire_175 <= bank_61[addr36];
        62:end_delay_wire_175 <= bank_62[addr36];
        63:end_delay_wire_175 <= bank_63[addr36];
        default:end_delay_wire_175 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_14_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_bank_selector.out)
        0:end_delay_wire_176 <= bank_0[addr37];
        1:end_delay_wire_176 <= bank_1[addr37];
        2:end_delay_wire_176 <= bank_2[addr37];
        3:end_delay_wire_176 <= bank_3[addr37];
        4:end_delay_wire_176 <= bank_4[addr37];
        5:end_delay_wire_176 <= bank_5[addr37];
        6:end_delay_wire_176 <= bank_6[addr37];
        7:end_delay_wire_176 <= bank_7[addr37];
        8:end_delay_wire_176 <= bank_8[addr37];
        9:end_delay_wire_176 <= bank_9[addr37];
        10:end_delay_wire_176 <= bank_10[addr37];
        11:end_delay_wire_176 <= bank_11[addr37];
        12:end_delay_wire_176 <= bank_12[addr37];
        13:end_delay_wire_176 <= bank_13[addr37];
        14:end_delay_wire_176 <= bank_14[addr37];
        15:end_delay_wire_176 <= bank_15[addr37];
        16:end_delay_wire_176 <= bank_16[addr37];
        17:end_delay_wire_176 <= bank_17[addr37];
        18:end_delay_wire_176 <= bank_18[addr37];
        19:end_delay_wire_176 <= bank_19[addr37];
        20:end_delay_wire_176 <= bank_20[addr37];
        21:end_delay_wire_176 <= bank_21[addr37];
        22:end_delay_wire_176 <= bank_22[addr37];
        23:end_delay_wire_176 <= bank_23[addr37];
        24:end_delay_wire_176 <= bank_24[addr37];
        25:end_delay_wire_176 <= bank_25[addr37];
        26:end_delay_wire_176 <= bank_26[addr37];
        27:end_delay_wire_176 <= bank_27[addr37];
        28:end_delay_wire_176 <= bank_28[addr37];
        29:end_delay_wire_176 <= bank_29[addr37];
        30:end_delay_wire_176 <= bank_30[addr37];
        31:end_delay_wire_176 <= bank_31[addr37];
        32:end_delay_wire_176 <= bank_32[addr37];
        33:end_delay_wire_176 <= bank_33[addr37];
        34:end_delay_wire_176 <= bank_34[addr37];
        35:end_delay_wire_176 <= bank_35[addr37];
        36:end_delay_wire_176 <= bank_36[addr37];
        37:end_delay_wire_176 <= bank_37[addr37];
        38:end_delay_wire_176 <= bank_38[addr37];
        39:end_delay_wire_176 <= bank_39[addr37];
        40:end_delay_wire_176 <= bank_40[addr37];
        41:end_delay_wire_176 <= bank_41[addr37];
        42:end_delay_wire_176 <= bank_42[addr37];
        43:end_delay_wire_176 <= bank_43[addr37];
        44:end_delay_wire_176 <= bank_44[addr37];
        45:end_delay_wire_176 <= bank_45[addr37];
        46:end_delay_wire_176 <= bank_46[addr37];
        47:end_delay_wire_176 <= bank_47[addr37];
        48:end_delay_wire_176 <= bank_48[addr37];
        49:end_delay_wire_176 <= bank_49[addr37];
        50:end_delay_wire_176 <= bank_50[addr37];
        51:end_delay_wire_176 <= bank_51[addr37];
        52:end_delay_wire_176 <= bank_52[addr37];
        53:end_delay_wire_176 <= bank_53[addr37];
        54:end_delay_wire_176 <= bank_54[addr37];
        55:end_delay_wire_176 <= bank_55[addr37];
        56:end_delay_wire_176 <= bank_56[addr37];
        57:end_delay_wire_176 <= bank_57[addr37];
        58:end_delay_wire_176 <= bank_58[addr37];
        59:end_delay_wire_176 <= bank_59[addr37];
        60:end_delay_wire_176 <= bank_60[addr37];
        61:end_delay_wire_176 <= bank_61[addr37];
        62:end_delay_wire_176 <= bank_62[addr37];
        63:end_delay_wire_176 <= bank_63[addr37];
        default:end_delay_wire_176 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_14_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_bank_selector.out)
        0:end_delay_wire_177 <= bank_0[addr38];
        1:end_delay_wire_177 <= bank_1[addr38];
        2:end_delay_wire_177 <= bank_2[addr38];
        3:end_delay_wire_177 <= bank_3[addr38];
        4:end_delay_wire_177 <= bank_4[addr38];
        5:end_delay_wire_177 <= bank_5[addr38];
        6:end_delay_wire_177 <= bank_6[addr38];
        7:end_delay_wire_177 <= bank_7[addr38];
        8:end_delay_wire_177 <= bank_8[addr38];
        9:end_delay_wire_177 <= bank_9[addr38];
        10:end_delay_wire_177 <= bank_10[addr38];
        11:end_delay_wire_177 <= bank_11[addr38];
        12:end_delay_wire_177 <= bank_12[addr38];
        13:end_delay_wire_177 <= bank_13[addr38];
        14:end_delay_wire_177 <= bank_14[addr38];
        15:end_delay_wire_177 <= bank_15[addr38];
        16:end_delay_wire_177 <= bank_16[addr38];
        17:end_delay_wire_177 <= bank_17[addr38];
        18:end_delay_wire_177 <= bank_18[addr38];
        19:end_delay_wire_177 <= bank_19[addr38];
        20:end_delay_wire_177 <= bank_20[addr38];
        21:end_delay_wire_177 <= bank_21[addr38];
        22:end_delay_wire_177 <= bank_22[addr38];
        23:end_delay_wire_177 <= bank_23[addr38];
        24:end_delay_wire_177 <= bank_24[addr38];
        25:end_delay_wire_177 <= bank_25[addr38];
        26:end_delay_wire_177 <= bank_26[addr38];
        27:end_delay_wire_177 <= bank_27[addr38];
        28:end_delay_wire_177 <= bank_28[addr38];
        29:end_delay_wire_177 <= bank_29[addr38];
        30:end_delay_wire_177 <= bank_30[addr38];
        31:end_delay_wire_177 <= bank_31[addr38];
        32:end_delay_wire_177 <= bank_32[addr38];
        33:end_delay_wire_177 <= bank_33[addr38];
        34:end_delay_wire_177 <= bank_34[addr38];
        35:end_delay_wire_177 <= bank_35[addr38];
        36:end_delay_wire_177 <= bank_36[addr38];
        37:end_delay_wire_177 <= bank_37[addr38];
        38:end_delay_wire_177 <= bank_38[addr38];
        39:end_delay_wire_177 <= bank_39[addr38];
        40:end_delay_wire_177 <= bank_40[addr38];
        41:end_delay_wire_177 <= bank_41[addr38];
        42:end_delay_wire_177 <= bank_42[addr38];
        43:end_delay_wire_177 <= bank_43[addr38];
        44:end_delay_wire_177 <= bank_44[addr38];
        45:end_delay_wire_177 <= bank_45[addr38];
        46:end_delay_wire_177 <= bank_46[addr38];
        47:end_delay_wire_177 <= bank_47[addr38];
        48:end_delay_wire_177 <= bank_48[addr38];
        49:end_delay_wire_177 <= bank_49[addr38];
        50:end_delay_wire_177 <= bank_50[addr38];
        51:end_delay_wire_177 <= bank_51[addr38];
        52:end_delay_wire_177 <= bank_52[addr38];
        53:end_delay_wire_177 <= bank_53[addr38];
        54:end_delay_wire_177 <= bank_54[addr38];
        55:end_delay_wire_177 <= bank_55[addr38];
        56:end_delay_wire_177 <= bank_56[addr38];
        57:end_delay_wire_177 <= bank_57[addr38];
        58:end_delay_wire_177 <= bank_58[addr38];
        59:end_delay_wire_177 <= bank_59[addr38];
        60:end_delay_wire_177 <= bank_60[addr38];
        61:end_delay_wire_177 <= bank_61[addr38];
        62:end_delay_wire_177 <= bank_62[addr38];
        63:end_delay_wire_177 <= bank_63[addr38];
        default:end_delay_wire_177 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_14_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_bank_selector.out)
        0:end_delay_wire_178 <= bank_0[addr39];
        1:end_delay_wire_178 <= bank_1[addr39];
        2:end_delay_wire_178 <= bank_2[addr39];
        3:end_delay_wire_178 <= bank_3[addr39];
        4:end_delay_wire_178 <= bank_4[addr39];
        5:end_delay_wire_178 <= bank_5[addr39];
        6:end_delay_wire_178 <= bank_6[addr39];
        7:end_delay_wire_178 <= bank_7[addr39];
        8:end_delay_wire_178 <= bank_8[addr39];
        9:end_delay_wire_178 <= bank_9[addr39];
        10:end_delay_wire_178 <= bank_10[addr39];
        11:end_delay_wire_178 <= bank_11[addr39];
        12:end_delay_wire_178 <= bank_12[addr39];
        13:end_delay_wire_178 <= bank_13[addr39];
        14:end_delay_wire_178 <= bank_14[addr39];
        15:end_delay_wire_178 <= bank_15[addr39];
        16:end_delay_wire_178 <= bank_16[addr39];
        17:end_delay_wire_178 <= bank_17[addr39];
        18:end_delay_wire_178 <= bank_18[addr39];
        19:end_delay_wire_178 <= bank_19[addr39];
        20:end_delay_wire_178 <= bank_20[addr39];
        21:end_delay_wire_178 <= bank_21[addr39];
        22:end_delay_wire_178 <= bank_22[addr39];
        23:end_delay_wire_178 <= bank_23[addr39];
        24:end_delay_wire_178 <= bank_24[addr39];
        25:end_delay_wire_178 <= bank_25[addr39];
        26:end_delay_wire_178 <= bank_26[addr39];
        27:end_delay_wire_178 <= bank_27[addr39];
        28:end_delay_wire_178 <= bank_28[addr39];
        29:end_delay_wire_178 <= bank_29[addr39];
        30:end_delay_wire_178 <= bank_30[addr39];
        31:end_delay_wire_178 <= bank_31[addr39];
        32:end_delay_wire_178 <= bank_32[addr39];
        33:end_delay_wire_178 <= bank_33[addr39];
        34:end_delay_wire_178 <= bank_34[addr39];
        35:end_delay_wire_178 <= bank_35[addr39];
        36:end_delay_wire_178 <= bank_36[addr39];
        37:end_delay_wire_178 <= bank_37[addr39];
        38:end_delay_wire_178 <= bank_38[addr39];
        39:end_delay_wire_178 <= bank_39[addr39];
        40:end_delay_wire_178 <= bank_40[addr39];
        41:end_delay_wire_178 <= bank_41[addr39];
        42:end_delay_wire_178 <= bank_42[addr39];
        43:end_delay_wire_178 <= bank_43[addr39];
        44:end_delay_wire_178 <= bank_44[addr39];
        45:end_delay_wire_178 <= bank_45[addr39];
        46:end_delay_wire_178 <= bank_46[addr39];
        47:end_delay_wire_178 <= bank_47[addr39];
        48:end_delay_wire_178 <= bank_48[addr39];
        49:end_delay_wire_178 <= bank_49[addr39];
        50:end_delay_wire_178 <= bank_50[addr39];
        51:end_delay_wire_178 <= bank_51[addr39];
        52:end_delay_wire_178 <= bank_52[addr39];
        53:end_delay_wire_178 <= bank_53[addr39];
        54:end_delay_wire_178 <= bank_54[addr39];
        55:end_delay_wire_178 <= bank_55[addr39];
        56:end_delay_wire_178 <= bank_56[addr39];
        57:end_delay_wire_178 <= bank_57[addr39];
        58:end_delay_wire_178 <= bank_58[addr39];
        59:end_delay_wire_178 <= bank_59[addr39];
        60:end_delay_wire_178 <= bank_60[addr39];
        61:end_delay_wire_178 <= bank_61[addr39];
        62:end_delay_wire_178 <= bank_62[addr39];
        63:end_delay_wire_178 <= bank_63[addr39];
        default:end_delay_wire_178 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_14_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_bank_selector.out)
        0:end_delay_wire_179 <= bank_0[addr40];
        1:end_delay_wire_179 <= bank_1[addr40];
        2:end_delay_wire_179 <= bank_2[addr40];
        3:end_delay_wire_179 <= bank_3[addr40];
        4:end_delay_wire_179 <= bank_4[addr40];
        5:end_delay_wire_179 <= bank_5[addr40];
        6:end_delay_wire_179 <= bank_6[addr40];
        7:end_delay_wire_179 <= bank_7[addr40];
        8:end_delay_wire_179 <= bank_8[addr40];
        9:end_delay_wire_179 <= bank_9[addr40];
        10:end_delay_wire_179 <= bank_10[addr40];
        11:end_delay_wire_179 <= bank_11[addr40];
        12:end_delay_wire_179 <= bank_12[addr40];
        13:end_delay_wire_179 <= bank_13[addr40];
        14:end_delay_wire_179 <= bank_14[addr40];
        15:end_delay_wire_179 <= bank_15[addr40];
        16:end_delay_wire_179 <= bank_16[addr40];
        17:end_delay_wire_179 <= bank_17[addr40];
        18:end_delay_wire_179 <= bank_18[addr40];
        19:end_delay_wire_179 <= bank_19[addr40];
        20:end_delay_wire_179 <= bank_20[addr40];
        21:end_delay_wire_179 <= bank_21[addr40];
        22:end_delay_wire_179 <= bank_22[addr40];
        23:end_delay_wire_179 <= bank_23[addr40];
        24:end_delay_wire_179 <= bank_24[addr40];
        25:end_delay_wire_179 <= bank_25[addr40];
        26:end_delay_wire_179 <= bank_26[addr40];
        27:end_delay_wire_179 <= bank_27[addr40];
        28:end_delay_wire_179 <= bank_28[addr40];
        29:end_delay_wire_179 <= bank_29[addr40];
        30:end_delay_wire_179 <= bank_30[addr40];
        31:end_delay_wire_179 <= bank_31[addr40];
        32:end_delay_wire_179 <= bank_32[addr40];
        33:end_delay_wire_179 <= bank_33[addr40];
        34:end_delay_wire_179 <= bank_34[addr40];
        35:end_delay_wire_179 <= bank_35[addr40];
        36:end_delay_wire_179 <= bank_36[addr40];
        37:end_delay_wire_179 <= bank_37[addr40];
        38:end_delay_wire_179 <= bank_38[addr40];
        39:end_delay_wire_179 <= bank_39[addr40];
        40:end_delay_wire_179 <= bank_40[addr40];
        41:end_delay_wire_179 <= bank_41[addr40];
        42:end_delay_wire_179 <= bank_42[addr40];
        43:end_delay_wire_179 <= bank_43[addr40];
        44:end_delay_wire_179 <= bank_44[addr40];
        45:end_delay_wire_179 <= bank_45[addr40];
        46:end_delay_wire_179 <= bank_46[addr40];
        47:end_delay_wire_179 <= bank_47[addr40];
        48:end_delay_wire_179 <= bank_48[addr40];
        49:end_delay_wire_179 <= bank_49[addr40];
        50:end_delay_wire_179 <= bank_50[addr40];
        51:end_delay_wire_179 <= bank_51[addr40];
        52:end_delay_wire_179 <= bank_52[addr40];
        53:end_delay_wire_179 <= bank_53[addr40];
        54:end_delay_wire_179 <= bank_54[addr40];
        55:end_delay_wire_179 <= bank_55[addr40];
        56:end_delay_wire_179 <= bank_56[addr40];
        57:end_delay_wire_179 <= bank_57[addr40];
        58:end_delay_wire_179 <= bank_58[addr40];
        59:end_delay_wire_179 <= bank_59[addr40];
        60:end_delay_wire_179 <= bank_60[addr40];
        61:end_delay_wire_179 <= bank_61[addr40];
        62:end_delay_wire_179 <= bank_62[addr40];
        63:end_delay_wire_179 <= bank_63[addr40];
        default:end_delay_wire_179 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_15_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_bank_selector.out)
        0:end_delay_wire_180 <= bank_0[addr41];
        1:end_delay_wire_180 <= bank_1[addr41];
        2:end_delay_wire_180 <= bank_2[addr41];
        3:end_delay_wire_180 <= bank_3[addr41];
        4:end_delay_wire_180 <= bank_4[addr41];
        5:end_delay_wire_180 <= bank_5[addr41];
        6:end_delay_wire_180 <= bank_6[addr41];
        7:end_delay_wire_180 <= bank_7[addr41];
        8:end_delay_wire_180 <= bank_8[addr41];
        9:end_delay_wire_180 <= bank_9[addr41];
        10:end_delay_wire_180 <= bank_10[addr41];
        11:end_delay_wire_180 <= bank_11[addr41];
        12:end_delay_wire_180 <= bank_12[addr41];
        13:end_delay_wire_180 <= bank_13[addr41];
        14:end_delay_wire_180 <= bank_14[addr41];
        15:end_delay_wire_180 <= bank_15[addr41];
        16:end_delay_wire_180 <= bank_16[addr41];
        17:end_delay_wire_180 <= bank_17[addr41];
        18:end_delay_wire_180 <= bank_18[addr41];
        19:end_delay_wire_180 <= bank_19[addr41];
        20:end_delay_wire_180 <= bank_20[addr41];
        21:end_delay_wire_180 <= bank_21[addr41];
        22:end_delay_wire_180 <= bank_22[addr41];
        23:end_delay_wire_180 <= bank_23[addr41];
        24:end_delay_wire_180 <= bank_24[addr41];
        25:end_delay_wire_180 <= bank_25[addr41];
        26:end_delay_wire_180 <= bank_26[addr41];
        27:end_delay_wire_180 <= bank_27[addr41];
        28:end_delay_wire_180 <= bank_28[addr41];
        29:end_delay_wire_180 <= bank_29[addr41];
        30:end_delay_wire_180 <= bank_30[addr41];
        31:end_delay_wire_180 <= bank_31[addr41];
        32:end_delay_wire_180 <= bank_32[addr41];
        33:end_delay_wire_180 <= bank_33[addr41];
        34:end_delay_wire_180 <= bank_34[addr41];
        35:end_delay_wire_180 <= bank_35[addr41];
        36:end_delay_wire_180 <= bank_36[addr41];
        37:end_delay_wire_180 <= bank_37[addr41];
        38:end_delay_wire_180 <= bank_38[addr41];
        39:end_delay_wire_180 <= bank_39[addr41];
        40:end_delay_wire_180 <= bank_40[addr41];
        41:end_delay_wire_180 <= bank_41[addr41];
        42:end_delay_wire_180 <= bank_42[addr41];
        43:end_delay_wire_180 <= bank_43[addr41];
        44:end_delay_wire_180 <= bank_44[addr41];
        45:end_delay_wire_180 <= bank_45[addr41];
        46:end_delay_wire_180 <= bank_46[addr41];
        47:end_delay_wire_180 <= bank_47[addr41];
        48:end_delay_wire_180 <= bank_48[addr41];
        49:end_delay_wire_180 <= bank_49[addr41];
        50:end_delay_wire_180 <= bank_50[addr41];
        51:end_delay_wire_180 <= bank_51[addr41];
        52:end_delay_wire_180 <= bank_52[addr41];
        53:end_delay_wire_180 <= bank_53[addr41];
        54:end_delay_wire_180 <= bank_54[addr41];
        55:end_delay_wire_180 <= bank_55[addr41];
        56:end_delay_wire_180 <= bank_56[addr41];
        57:end_delay_wire_180 <= bank_57[addr41];
        58:end_delay_wire_180 <= bank_58[addr41];
        59:end_delay_wire_180 <= bank_59[addr41];
        60:end_delay_wire_180 <= bank_60[addr41];
        61:end_delay_wire_180 <= bank_61[addr41];
        62:end_delay_wire_180 <= bank_62[addr41];
        63:end_delay_wire_180 <= bank_63[addr41];
        default:end_delay_wire_180 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_15_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_bank_selector.out)
        0:end_delay_wire_181 <= bank_0[addr42];
        1:end_delay_wire_181 <= bank_1[addr42];
        2:end_delay_wire_181 <= bank_2[addr42];
        3:end_delay_wire_181 <= bank_3[addr42];
        4:end_delay_wire_181 <= bank_4[addr42];
        5:end_delay_wire_181 <= bank_5[addr42];
        6:end_delay_wire_181 <= bank_6[addr42];
        7:end_delay_wire_181 <= bank_7[addr42];
        8:end_delay_wire_181 <= bank_8[addr42];
        9:end_delay_wire_181 <= bank_9[addr42];
        10:end_delay_wire_181 <= bank_10[addr42];
        11:end_delay_wire_181 <= bank_11[addr42];
        12:end_delay_wire_181 <= bank_12[addr42];
        13:end_delay_wire_181 <= bank_13[addr42];
        14:end_delay_wire_181 <= bank_14[addr42];
        15:end_delay_wire_181 <= bank_15[addr42];
        16:end_delay_wire_181 <= bank_16[addr42];
        17:end_delay_wire_181 <= bank_17[addr42];
        18:end_delay_wire_181 <= bank_18[addr42];
        19:end_delay_wire_181 <= bank_19[addr42];
        20:end_delay_wire_181 <= bank_20[addr42];
        21:end_delay_wire_181 <= bank_21[addr42];
        22:end_delay_wire_181 <= bank_22[addr42];
        23:end_delay_wire_181 <= bank_23[addr42];
        24:end_delay_wire_181 <= bank_24[addr42];
        25:end_delay_wire_181 <= bank_25[addr42];
        26:end_delay_wire_181 <= bank_26[addr42];
        27:end_delay_wire_181 <= bank_27[addr42];
        28:end_delay_wire_181 <= bank_28[addr42];
        29:end_delay_wire_181 <= bank_29[addr42];
        30:end_delay_wire_181 <= bank_30[addr42];
        31:end_delay_wire_181 <= bank_31[addr42];
        32:end_delay_wire_181 <= bank_32[addr42];
        33:end_delay_wire_181 <= bank_33[addr42];
        34:end_delay_wire_181 <= bank_34[addr42];
        35:end_delay_wire_181 <= bank_35[addr42];
        36:end_delay_wire_181 <= bank_36[addr42];
        37:end_delay_wire_181 <= bank_37[addr42];
        38:end_delay_wire_181 <= bank_38[addr42];
        39:end_delay_wire_181 <= bank_39[addr42];
        40:end_delay_wire_181 <= bank_40[addr42];
        41:end_delay_wire_181 <= bank_41[addr42];
        42:end_delay_wire_181 <= bank_42[addr42];
        43:end_delay_wire_181 <= bank_43[addr42];
        44:end_delay_wire_181 <= bank_44[addr42];
        45:end_delay_wire_181 <= bank_45[addr42];
        46:end_delay_wire_181 <= bank_46[addr42];
        47:end_delay_wire_181 <= bank_47[addr42];
        48:end_delay_wire_181 <= bank_48[addr42];
        49:end_delay_wire_181 <= bank_49[addr42];
        50:end_delay_wire_181 <= bank_50[addr42];
        51:end_delay_wire_181 <= bank_51[addr42];
        52:end_delay_wire_181 <= bank_52[addr42];
        53:end_delay_wire_181 <= bank_53[addr42];
        54:end_delay_wire_181 <= bank_54[addr42];
        55:end_delay_wire_181 <= bank_55[addr42];
        56:end_delay_wire_181 <= bank_56[addr42];
        57:end_delay_wire_181 <= bank_57[addr42];
        58:end_delay_wire_181 <= bank_58[addr42];
        59:end_delay_wire_181 <= bank_59[addr42];
        60:end_delay_wire_181 <= bank_60[addr42];
        61:end_delay_wire_181 <= bank_61[addr42];
        62:end_delay_wire_181 <= bank_62[addr42];
        63:end_delay_wire_181 <= bank_63[addr42];
        default:end_delay_wire_181 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_15_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_bank_selector.out)
        0:end_delay_wire_182 <= bank_0[addr43];
        1:end_delay_wire_182 <= bank_1[addr43];
        2:end_delay_wire_182 <= bank_2[addr43];
        3:end_delay_wire_182 <= bank_3[addr43];
        4:end_delay_wire_182 <= bank_4[addr43];
        5:end_delay_wire_182 <= bank_5[addr43];
        6:end_delay_wire_182 <= bank_6[addr43];
        7:end_delay_wire_182 <= bank_7[addr43];
        8:end_delay_wire_182 <= bank_8[addr43];
        9:end_delay_wire_182 <= bank_9[addr43];
        10:end_delay_wire_182 <= bank_10[addr43];
        11:end_delay_wire_182 <= bank_11[addr43];
        12:end_delay_wire_182 <= bank_12[addr43];
        13:end_delay_wire_182 <= bank_13[addr43];
        14:end_delay_wire_182 <= bank_14[addr43];
        15:end_delay_wire_182 <= bank_15[addr43];
        16:end_delay_wire_182 <= bank_16[addr43];
        17:end_delay_wire_182 <= bank_17[addr43];
        18:end_delay_wire_182 <= bank_18[addr43];
        19:end_delay_wire_182 <= bank_19[addr43];
        20:end_delay_wire_182 <= bank_20[addr43];
        21:end_delay_wire_182 <= bank_21[addr43];
        22:end_delay_wire_182 <= bank_22[addr43];
        23:end_delay_wire_182 <= bank_23[addr43];
        24:end_delay_wire_182 <= bank_24[addr43];
        25:end_delay_wire_182 <= bank_25[addr43];
        26:end_delay_wire_182 <= bank_26[addr43];
        27:end_delay_wire_182 <= bank_27[addr43];
        28:end_delay_wire_182 <= bank_28[addr43];
        29:end_delay_wire_182 <= bank_29[addr43];
        30:end_delay_wire_182 <= bank_30[addr43];
        31:end_delay_wire_182 <= bank_31[addr43];
        32:end_delay_wire_182 <= bank_32[addr43];
        33:end_delay_wire_182 <= bank_33[addr43];
        34:end_delay_wire_182 <= bank_34[addr43];
        35:end_delay_wire_182 <= bank_35[addr43];
        36:end_delay_wire_182 <= bank_36[addr43];
        37:end_delay_wire_182 <= bank_37[addr43];
        38:end_delay_wire_182 <= bank_38[addr43];
        39:end_delay_wire_182 <= bank_39[addr43];
        40:end_delay_wire_182 <= bank_40[addr43];
        41:end_delay_wire_182 <= bank_41[addr43];
        42:end_delay_wire_182 <= bank_42[addr43];
        43:end_delay_wire_182 <= bank_43[addr43];
        44:end_delay_wire_182 <= bank_44[addr43];
        45:end_delay_wire_182 <= bank_45[addr43];
        46:end_delay_wire_182 <= bank_46[addr43];
        47:end_delay_wire_182 <= bank_47[addr43];
        48:end_delay_wire_182 <= bank_48[addr43];
        49:end_delay_wire_182 <= bank_49[addr43];
        50:end_delay_wire_182 <= bank_50[addr43];
        51:end_delay_wire_182 <= bank_51[addr43];
        52:end_delay_wire_182 <= bank_52[addr43];
        53:end_delay_wire_182 <= bank_53[addr43];
        54:end_delay_wire_182 <= bank_54[addr43];
        55:end_delay_wire_182 <= bank_55[addr43];
        56:end_delay_wire_182 <= bank_56[addr43];
        57:end_delay_wire_182 <= bank_57[addr43];
        58:end_delay_wire_182 <= bank_58[addr43];
        59:end_delay_wire_182 <= bank_59[addr43];
        60:end_delay_wire_182 <= bank_60[addr43];
        61:end_delay_wire_182 <= bank_61[addr43];
        62:end_delay_wire_182 <= bank_62[addr43];
        63:end_delay_wire_182 <= bank_63[addr43];
        default:end_delay_wire_182 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_15_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_bank_selector.out)
        0:end_delay_wire_183 <= bank_0[addr44];
        1:end_delay_wire_183 <= bank_1[addr44];
        2:end_delay_wire_183 <= bank_2[addr44];
        3:end_delay_wire_183 <= bank_3[addr44];
        4:end_delay_wire_183 <= bank_4[addr44];
        5:end_delay_wire_183 <= bank_5[addr44];
        6:end_delay_wire_183 <= bank_6[addr44];
        7:end_delay_wire_183 <= bank_7[addr44];
        8:end_delay_wire_183 <= bank_8[addr44];
        9:end_delay_wire_183 <= bank_9[addr44];
        10:end_delay_wire_183 <= bank_10[addr44];
        11:end_delay_wire_183 <= bank_11[addr44];
        12:end_delay_wire_183 <= bank_12[addr44];
        13:end_delay_wire_183 <= bank_13[addr44];
        14:end_delay_wire_183 <= bank_14[addr44];
        15:end_delay_wire_183 <= bank_15[addr44];
        16:end_delay_wire_183 <= bank_16[addr44];
        17:end_delay_wire_183 <= bank_17[addr44];
        18:end_delay_wire_183 <= bank_18[addr44];
        19:end_delay_wire_183 <= bank_19[addr44];
        20:end_delay_wire_183 <= bank_20[addr44];
        21:end_delay_wire_183 <= bank_21[addr44];
        22:end_delay_wire_183 <= bank_22[addr44];
        23:end_delay_wire_183 <= bank_23[addr44];
        24:end_delay_wire_183 <= bank_24[addr44];
        25:end_delay_wire_183 <= bank_25[addr44];
        26:end_delay_wire_183 <= bank_26[addr44];
        27:end_delay_wire_183 <= bank_27[addr44];
        28:end_delay_wire_183 <= bank_28[addr44];
        29:end_delay_wire_183 <= bank_29[addr44];
        30:end_delay_wire_183 <= bank_30[addr44];
        31:end_delay_wire_183 <= bank_31[addr44];
        32:end_delay_wire_183 <= bank_32[addr44];
        33:end_delay_wire_183 <= bank_33[addr44];
        34:end_delay_wire_183 <= bank_34[addr44];
        35:end_delay_wire_183 <= bank_35[addr44];
        36:end_delay_wire_183 <= bank_36[addr44];
        37:end_delay_wire_183 <= bank_37[addr44];
        38:end_delay_wire_183 <= bank_38[addr44];
        39:end_delay_wire_183 <= bank_39[addr44];
        40:end_delay_wire_183 <= bank_40[addr44];
        41:end_delay_wire_183 <= bank_41[addr44];
        42:end_delay_wire_183 <= bank_42[addr44];
        43:end_delay_wire_183 <= bank_43[addr44];
        44:end_delay_wire_183 <= bank_44[addr44];
        45:end_delay_wire_183 <= bank_45[addr44];
        46:end_delay_wire_183 <= bank_46[addr44];
        47:end_delay_wire_183 <= bank_47[addr44];
        48:end_delay_wire_183 <= bank_48[addr44];
        49:end_delay_wire_183 <= bank_49[addr44];
        50:end_delay_wire_183 <= bank_50[addr44];
        51:end_delay_wire_183 <= bank_51[addr44];
        52:end_delay_wire_183 <= bank_52[addr44];
        53:end_delay_wire_183 <= bank_53[addr44];
        54:end_delay_wire_183 <= bank_54[addr44];
        55:end_delay_wire_183 <= bank_55[addr44];
        56:end_delay_wire_183 <= bank_56[addr44];
        57:end_delay_wire_183 <= bank_57[addr44];
        58:end_delay_wire_183 <= bank_58[addr44];
        59:end_delay_wire_183 <= bank_59[addr44];
        60:end_delay_wire_183 <= bank_60[addr44];
        61:end_delay_wire_183 <= bank_61[addr44];
        62:end_delay_wire_183 <= bank_62[addr44];
        63:end_delay_wire_183 <= bank_63[addr44];
        default:end_delay_wire_183 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_15_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_bank_selector.out)
        0:end_delay_wire_184 <= bank_0[addr45];
        1:end_delay_wire_184 <= bank_1[addr45];
        2:end_delay_wire_184 <= bank_2[addr45];
        3:end_delay_wire_184 <= bank_3[addr45];
        4:end_delay_wire_184 <= bank_4[addr45];
        5:end_delay_wire_184 <= bank_5[addr45];
        6:end_delay_wire_184 <= bank_6[addr45];
        7:end_delay_wire_184 <= bank_7[addr45];
        8:end_delay_wire_184 <= bank_8[addr45];
        9:end_delay_wire_184 <= bank_9[addr45];
        10:end_delay_wire_184 <= bank_10[addr45];
        11:end_delay_wire_184 <= bank_11[addr45];
        12:end_delay_wire_184 <= bank_12[addr45];
        13:end_delay_wire_184 <= bank_13[addr45];
        14:end_delay_wire_184 <= bank_14[addr45];
        15:end_delay_wire_184 <= bank_15[addr45];
        16:end_delay_wire_184 <= bank_16[addr45];
        17:end_delay_wire_184 <= bank_17[addr45];
        18:end_delay_wire_184 <= bank_18[addr45];
        19:end_delay_wire_184 <= bank_19[addr45];
        20:end_delay_wire_184 <= bank_20[addr45];
        21:end_delay_wire_184 <= bank_21[addr45];
        22:end_delay_wire_184 <= bank_22[addr45];
        23:end_delay_wire_184 <= bank_23[addr45];
        24:end_delay_wire_184 <= bank_24[addr45];
        25:end_delay_wire_184 <= bank_25[addr45];
        26:end_delay_wire_184 <= bank_26[addr45];
        27:end_delay_wire_184 <= bank_27[addr45];
        28:end_delay_wire_184 <= bank_28[addr45];
        29:end_delay_wire_184 <= bank_29[addr45];
        30:end_delay_wire_184 <= bank_30[addr45];
        31:end_delay_wire_184 <= bank_31[addr45];
        32:end_delay_wire_184 <= bank_32[addr45];
        33:end_delay_wire_184 <= bank_33[addr45];
        34:end_delay_wire_184 <= bank_34[addr45];
        35:end_delay_wire_184 <= bank_35[addr45];
        36:end_delay_wire_184 <= bank_36[addr45];
        37:end_delay_wire_184 <= bank_37[addr45];
        38:end_delay_wire_184 <= bank_38[addr45];
        39:end_delay_wire_184 <= bank_39[addr45];
        40:end_delay_wire_184 <= bank_40[addr45];
        41:end_delay_wire_184 <= bank_41[addr45];
        42:end_delay_wire_184 <= bank_42[addr45];
        43:end_delay_wire_184 <= bank_43[addr45];
        44:end_delay_wire_184 <= bank_44[addr45];
        45:end_delay_wire_184 <= bank_45[addr45];
        46:end_delay_wire_184 <= bank_46[addr45];
        47:end_delay_wire_184 <= bank_47[addr45];
        48:end_delay_wire_184 <= bank_48[addr45];
        49:end_delay_wire_184 <= bank_49[addr45];
        50:end_delay_wire_184 <= bank_50[addr45];
        51:end_delay_wire_184 <= bank_51[addr45];
        52:end_delay_wire_184 <= bank_52[addr45];
        53:end_delay_wire_184 <= bank_53[addr45];
        54:end_delay_wire_184 <= bank_54[addr45];
        55:end_delay_wire_184 <= bank_55[addr45];
        56:end_delay_wire_184 <= bank_56[addr45];
        57:end_delay_wire_184 <= bank_57[addr45];
        58:end_delay_wire_184 <= bank_58[addr45];
        59:end_delay_wire_184 <= bank_59[addr45];
        60:end_delay_wire_184 <= bank_60[addr45];
        61:end_delay_wire_184 <= bank_61[addr45];
        62:end_delay_wire_184 <= bank_62[addr45];
        63:end_delay_wire_184 <= bank_63[addr45];
        default:end_delay_wire_184 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_15_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_bank_selector.out)
        0:end_delay_wire_185 <= bank_0[addr46];
        1:end_delay_wire_185 <= bank_1[addr46];
        2:end_delay_wire_185 <= bank_2[addr46];
        3:end_delay_wire_185 <= bank_3[addr46];
        4:end_delay_wire_185 <= bank_4[addr46];
        5:end_delay_wire_185 <= bank_5[addr46];
        6:end_delay_wire_185 <= bank_6[addr46];
        7:end_delay_wire_185 <= bank_7[addr46];
        8:end_delay_wire_185 <= bank_8[addr46];
        9:end_delay_wire_185 <= bank_9[addr46];
        10:end_delay_wire_185 <= bank_10[addr46];
        11:end_delay_wire_185 <= bank_11[addr46];
        12:end_delay_wire_185 <= bank_12[addr46];
        13:end_delay_wire_185 <= bank_13[addr46];
        14:end_delay_wire_185 <= bank_14[addr46];
        15:end_delay_wire_185 <= bank_15[addr46];
        16:end_delay_wire_185 <= bank_16[addr46];
        17:end_delay_wire_185 <= bank_17[addr46];
        18:end_delay_wire_185 <= bank_18[addr46];
        19:end_delay_wire_185 <= bank_19[addr46];
        20:end_delay_wire_185 <= bank_20[addr46];
        21:end_delay_wire_185 <= bank_21[addr46];
        22:end_delay_wire_185 <= bank_22[addr46];
        23:end_delay_wire_185 <= bank_23[addr46];
        24:end_delay_wire_185 <= bank_24[addr46];
        25:end_delay_wire_185 <= bank_25[addr46];
        26:end_delay_wire_185 <= bank_26[addr46];
        27:end_delay_wire_185 <= bank_27[addr46];
        28:end_delay_wire_185 <= bank_28[addr46];
        29:end_delay_wire_185 <= bank_29[addr46];
        30:end_delay_wire_185 <= bank_30[addr46];
        31:end_delay_wire_185 <= bank_31[addr46];
        32:end_delay_wire_185 <= bank_32[addr46];
        33:end_delay_wire_185 <= bank_33[addr46];
        34:end_delay_wire_185 <= bank_34[addr46];
        35:end_delay_wire_185 <= bank_35[addr46];
        36:end_delay_wire_185 <= bank_36[addr46];
        37:end_delay_wire_185 <= bank_37[addr46];
        38:end_delay_wire_185 <= bank_38[addr46];
        39:end_delay_wire_185 <= bank_39[addr46];
        40:end_delay_wire_185 <= bank_40[addr46];
        41:end_delay_wire_185 <= bank_41[addr46];
        42:end_delay_wire_185 <= bank_42[addr46];
        43:end_delay_wire_185 <= bank_43[addr46];
        44:end_delay_wire_185 <= bank_44[addr46];
        45:end_delay_wire_185 <= bank_45[addr46];
        46:end_delay_wire_185 <= bank_46[addr46];
        47:end_delay_wire_185 <= bank_47[addr46];
        48:end_delay_wire_185 <= bank_48[addr46];
        49:end_delay_wire_185 <= bank_49[addr46];
        50:end_delay_wire_185 <= bank_50[addr46];
        51:end_delay_wire_185 <= bank_51[addr46];
        52:end_delay_wire_185 <= bank_52[addr46];
        53:end_delay_wire_185 <= bank_53[addr46];
        54:end_delay_wire_185 <= bank_54[addr46];
        55:end_delay_wire_185 <= bank_55[addr46];
        56:end_delay_wire_185 <= bank_56[addr46];
        57:end_delay_wire_185 <= bank_57[addr46];
        58:end_delay_wire_185 <= bank_58[addr46];
        59:end_delay_wire_185 <= bank_59[addr46];
        60:end_delay_wire_185 <= bank_60[addr46];
        61:end_delay_wire_185 <= bank_61[addr46];
        62:end_delay_wire_185 <= bank_62[addr46];
        63:end_delay_wire_185 <= bank_63[addr46];
        default:end_delay_wire_185 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_15_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_bank_selector.out)
        0:end_delay_wire_186 <= bank_0[addr47];
        1:end_delay_wire_186 <= bank_1[addr47];
        2:end_delay_wire_186 <= bank_2[addr47];
        3:end_delay_wire_186 <= bank_3[addr47];
        4:end_delay_wire_186 <= bank_4[addr47];
        5:end_delay_wire_186 <= bank_5[addr47];
        6:end_delay_wire_186 <= bank_6[addr47];
        7:end_delay_wire_186 <= bank_7[addr47];
        8:end_delay_wire_186 <= bank_8[addr47];
        9:end_delay_wire_186 <= bank_9[addr47];
        10:end_delay_wire_186 <= bank_10[addr47];
        11:end_delay_wire_186 <= bank_11[addr47];
        12:end_delay_wire_186 <= bank_12[addr47];
        13:end_delay_wire_186 <= bank_13[addr47];
        14:end_delay_wire_186 <= bank_14[addr47];
        15:end_delay_wire_186 <= bank_15[addr47];
        16:end_delay_wire_186 <= bank_16[addr47];
        17:end_delay_wire_186 <= bank_17[addr47];
        18:end_delay_wire_186 <= bank_18[addr47];
        19:end_delay_wire_186 <= bank_19[addr47];
        20:end_delay_wire_186 <= bank_20[addr47];
        21:end_delay_wire_186 <= bank_21[addr47];
        22:end_delay_wire_186 <= bank_22[addr47];
        23:end_delay_wire_186 <= bank_23[addr47];
        24:end_delay_wire_186 <= bank_24[addr47];
        25:end_delay_wire_186 <= bank_25[addr47];
        26:end_delay_wire_186 <= bank_26[addr47];
        27:end_delay_wire_186 <= bank_27[addr47];
        28:end_delay_wire_186 <= bank_28[addr47];
        29:end_delay_wire_186 <= bank_29[addr47];
        30:end_delay_wire_186 <= bank_30[addr47];
        31:end_delay_wire_186 <= bank_31[addr47];
        32:end_delay_wire_186 <= bank_32[addr47];
        33:end_delay_wire_186 <= bank_33[addr47];
        34:end_delay_wire_186 <= bank_34[addr47];
        35:end_delay_wire_186 <= bank_35[addr47];
        36:end_delay_wire_186 <= bank_36[addr47];
        37:end_delay_wire_186 <= bank_37[addr47];
        38:end_delay_wire_186 <= bank_38[addr47];
        39:end_delay_wire_186 <= bank_39[addr47];
        40:end_delay_wire_186 <= bank_40[addr47];
        41:end_delay_wire_186 <= bank_41[addr47];
        42:end_delay_wire_186 <= bank_42[addr47];
        43:end_delay_wire_186 <= bank_43[addr47];
        44:end_delay_wire_186 <= bank_44[addr47];
        45:end_delay_wire_186 <= bank_45[addr47];
        46:end_delay_wire_186 <= bank_46[addr47];
        47:end_delay_wire_186 <= bank_47[addr47];
        48:end_delay_wire_186 <= bank_48[addr47];
        49:end_delay_wire_186 <= bank_49[addr47];
        50:end_delay_wire_186 <= bank_50[addr47];
        51:end_delay_wire_186 <= bank_51[addr47];
        52:end_delay_wire_186 <= bank_52[addr47];
        53:end_delay_wire_186 <= bank_53[addr47];
        54:end_delay_wire_186 <= bank_54[addr47];
        55:end_delay_wire_186 <= bank_55[addr47];
        56:end_delay_wire_186 <= bank_56[addr47];
        57:end_delay_wire_186 <= bank_57[addr47];
        58:end_delay_wire_186 <= bank_58[addr47];
        59:end_delay_wire_186 <= bank_59[addr47];
        60:end_delay_wire_186 <= bank_60[addr47];
        61:end_delay_wire_186 <= bank_61[addr47];
        62:end_delay_wire_186 <= bank_62[addr47];
        63:end_delay_wire_186 <= bank_63[addr47];
        default:end_delay_wire_186 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_15_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_bank_selector.out)
        0:end_delay_wire_187 <= bank_0[addr48];
        1:end_delay_wire_187 <= bank_1[addr48];
        2:end_delay_wire_187 <= bank_2[addr48];
        3:end_delay_wire_187 <= bank_3[addr48];
        4:end_delay_wire_187 <= bank_4[addr48];
        5:end_delay_wire_187 <= bank_5[addr48];
        6:end_delay_wire_187 <= bank_6[addr48];
        7:end_delay_wire_187 <= bank_7[addr48];
        8:end_delay_wire_187 <= bank_8[addr48];
        9:end_delay_wire_187 <= bank_9[addr48];
        10:end_delay_wire_187 <= bank_10[addr48];
        11:end_delay_wire_187 <= bank_11[addr48];
        12:end_delay_wire_187 <= bank_12[addr48];
        13:end_delay_wire_187 <= bank_13[addr48];
        14:end_delay_wire_187 <= bank_14[addr48];
        15:end_delay_wire_187 <= bank_15[addr48];
        16:end_delay_wire_187 <= bank_16[addr48];
        17:end_delay_wire_187 <= bank_17[addr48];
        18:end_delay_wire_187 <= bank_18[addr48];
        19:end_delay_wire_187 <= bank_19[addr48];
        20:end_delay_wire_187 <= bank_20[addr48];
        21:end_delay_wire_187 <= bank_21[addr48];
        22:end_delay_wire_187 <= bank_22[addr48];
        23:end_delay_wire_187 <= bank_23[addr48];
        24:end_delay_wire_187 <= bank_24[addr48];
        25:end_delay_wire_187 <= bank_25[addr48];
        26:end_delay_wire_187 <= bank_26[addr48];
        27:end_delay_wire_187 <= bank_27[addr48];
        28:end_delay_wire_187 <= bank_28[addr48];
        29:end_delay_wire_187 <= bank_29[addr48];
        30:end_delay_wire_187 <= bank_30[addr48];
        31:end_delay_wire_187 <= bank_31[addr48];
        32:end_delay_wire_187 <= bank_32[addr48];
        33:end_delay_wire_187 <= bank_33[addr48];
        34:end_delay_wire_187 <= bank_34[addr48];
        35:end_delay_wire_187 <= bank_35[addr48];
        36:end_delay_wire_187 <= bank_36[addr48];
        37:end_delay_wire_187 <= bank_37[addr48];
        38:end_delay_wire_187 <= bank_38[addr48];
        39:end_delay_wire_187 <= bank_39[addr48];
        40:end_delay_wire_187 <= bank_40[addr48];
        41:end_delay_wire_187 <= bank_41[addr48];
        42:end_delay_wire_187 <= bank_42[addr48];
        43:end_delay_wire_187 <= bank_43[addr48];
        44:end_delay_wire_187 <= bank_44[addr48];
        45:end_delay_wire_187 <= bank_45[addr48];
        46:end_delay_wire_187 <= bank_46[addr48];
        47:end_delay_wire_187 <= bank_47[addr48];
        48:end_delay_wire_187 <= bank_48[addr48];
        49:end_delay_wire_187 <= bank_49[addr48];
        50:end_delay_wire_187 <= bank_50[addr48];
        51:end_delay_wire_187 <= bank_51[addr48];
        52:end_delay_wire_187 <= bank_52[addr48];
        53:end_delay_wire_187 <= bank_53[addr48];
        54:end_delay_wire_187 <= bank_54[addr48];
        55:end_delay_wire_187 <= bank_55[addr48];
        56:end_delay_wire_187 <= bank_56[addr48];
        57:end_delay_wire_187 <= bank_57[addr48];
        58:end_delay_wire_187 <= bank_58[addr48];
        59:end_delay_wire_187 <= bank_59[addr48];
        60:end_delay_wire_187 <= bank_60[addr48];
        61:end_delay_wire_187 <= bank_61[addr48];
        62:end_delay_wire_187 <= bank_62[addr48];
        63:end_delay_wire_187 <= bank_63[addr48];
        default:end_delay_wire_187 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_8_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_bank_selector.out)
        0:end_delay_wire_188 <= bank_0[addr49];
        1:end_delay_wire_188 <= bank_1[addr49];
        2:end_delay_wire_188 <= bank_2[addr49];
        3:end_delay_wire_188 <= bank_3[addr49];
        4:end_delay_wire_188 <= bank_4[addr49];
        5:end_delay_wire_188 <= bank_5[addr49];
        6:end_delay_wire_188 <= bank_6[addr49];
        7:end_delay_wire_188 <= bank_7[addr49];
        8:end_delay_wire_188 <= bank_8[addr49];
        9:end_delay_wire_188 <= bank_9[addr49];
        10:end_delay_wire_188 <= bank_10[addr49];
        11:end_delay_wire_188 <= bank_11[addr49];
        12:end_delay_wire_188 <= bank_12[addr49];
        13:end_delay_wire_188 <= bank_13[addr49];
        14:end_delay_wire_188 <= bank_14[addr49];
        15:end_delay_wire_188 <= bank_15[addr49];
        16:end_delay_wire_188 <= bank_16[addr49];
        17:end_delay_wire_188 <= bank_17[addr49];
        18:end_delay_wire_188 <= bank_18[addr49];
        19:end_delay_wire_188 <= bank_19[addr49];
        20:end_delay_wire_188 <= bank_20[addr49];
        21:end_delay_wire_188 <= bank_21[addr49];
        22:end_delay_wire_188 <= bank_22[addr49];
        23:end_delay_wire_188 <= bank_23[addr49];
        24:end_delay_wire_188 <= bank_24[addr49];
        25:end_delay_wire_188 <= bank_25[addr49];
        26:end_delay_wire_188 <= bank_26[addr49];
        27:end_delay_wire_188 <= bank_27[addr49];
        28:end_delay_wire_188 <= bank_28[addr49];
        29:end_delay_wire_188 <= bank_29[addr49];
        30:end_delay_wire_188 <= bank_30[addr49];
        31:end_delay_wire_188 <= bank_31[addr49];
        32:end_delay_wire_188 <= bank_32[addr49];
        33:end_delay_wire_188 <= bank_33[addr49];
        34:end_delay_wire_188 <= bank_34[addr49];
        35:end_delay_wire_188 <= bank_35[addr49];
        36:end_delay_wire_188 <= bank_36[addr49];
        37:end_delay_wire_188 <= bank_37[addr49];
        38:end_delay_wire_188 <= bank_38[addr49];
        39:end_delay_wire_188 <= bank_39[addr49];
        40:end_delay_wire_188 <= bank_40[addr49];
        41:end_delay_wire_188 <= bank_41[addr49];
        42:end_delay_wire_188 <= bank_42[addr49];
        43:end_delay_wire_188 <= bank_43[addr49];
        44:end_delay_wire_188 <= bank_44[addr49];
        45:end_delay_wire_188 <= bank_45[addr49];
        46:end_delay_wire_188 <= bank_46[addr49];
        47:end_delay_wire_188 <= bank_47[addr49];
        48:end_delay_wire_188 <= bank_48[addr49];
        49:end_delay_wire_188 <= bank_49[addr49];
        50:end_delay_wire_188 <= bank_50[addr49];
        51:end_delay_wire_188 <= bank_51[addr49];
        52:end_delay_wire_188 <= bank_52[addr49];
        53:end_delay_wire_188 <= bank_53[addr49];
        54:end_delay_wire_188 <= bank_54[addr49];
        55:end_delay_wire_188 <= bank_55[addr49];
        56:end_delay_wire_188 <= bank_56[addr49];
        57:end_delay_wire_188 <= bank_57[addr49];
        58:end_delay_wire_188 <= bank_58[addr49];
        59:end_delay_wire_188 <= bank_59[addr49];
        60:end_delay_wire_188 <= bank_60[addr49];
        61:end_delay_wire_188 <= bank_61[addr49];
        62:end_delay_wire_188 <= bank_62[addr49];
        63:end_delay_wire_188 <= bank_63[addr49];
        default:end_delay_wire_188 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_8_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_bank_selector.out)
        0:end_delay_wire_189 <= bank_0[addr50];
        1:end_delay_wire_189 <= bank_1[addr50];
        2:end_delay_wire_189 <= bank_2[addr50];
        3:end_delay_wire_189 <= bank_3[addr50];
        4:end_delay_wire_189 <= bank_4[addr50];
        5:end_delay_wire_189 <= bank_5[addr50];
        6:end_delay_wire_189 <= bank_6[addr50];
        7:end_delay_wire_189 <= bank_7[addr50];
        8:end_delay_wire_189 <= bank_8[addr50];
        9:end_delay_wire_189 <= bank_9[addr50];
        10:end_delay_wire_189 <= bank_10[addr50];
        11:end_delay_wire_189 <= bank_11[addr50];
        12:end_delay_wire_189 <= bank_12[addr50];
        13:end_delay_wire_189 <= bank_13[addr50];
        14:end_delay_wire_189 <= bank_14[addr50];
        15:end_delay_wire_189 <= bank_15[addr50];
        16:end_delay_wire_189 <= bank_16[addr50];
        17:end_delay_wire_189 <= bank_17[addr50];
        18:end_delay_wire_189 <= bank_18[addr50];
        19:end_delay_wire_189 <= bank_19[addr50];
        20:end_delay_wire_189 <= bank_20[addr50];
        21:end_delay_wire_189 <= bank_21[addr50];
        22:end_delay_wire_189 <= bank_22[addr50];
        23:end_delay_wire_189 <= bank_23[addr50];
        24:end_delay_wire_189 <= bank_24[addr50];
        25:end_delay_wire_189 <= bank_25[addr50];
        26:end_delay_wire_189 <= bank_26[addr50];
        27:end_delay_wire_189 <= bank_27[addr50];
        28:end_delay_wire_189 <= bank_28[addr50];
        29:end_delay_wire_189 <= bank_29[addr50];
        30:end_delay_wire_189 <= bank_30[addr50];
        31:end_delay_wire_189 <= bank_31[addr50];
        32:end_delay_wire_189 <= bank_32[addr50];
        33:end_delay_wire_189 <= bank_33[addr50];
        34:end_delay_wire_189 <= bank_34[addr50];
        35:end_delay_wire_189 <= bank_35[addr50];
        36:end_delay_wire_189 <= bank_36[addr50];
        37:end_delay_wire_189 <= bank_37[addr50];
        38:end_delay_wire_189 <= bank_38[addr50];
        39:end_delay_wire_189 <= bank_39[addr50];
        40:end_delay_wire_189 <= bank_40[addr50];
        41:end_delay_wire_189 <= bank_41[addr50];
        42:end_delay_wire_189 <= bank_42[addr50];
        43:end_delay_wire_189 <= bank_43[addr50];
        44:end_delay_wire_189 <= bank_44[addr50];
        45:end_delay_wire_189 <= bank_45[addr50];
        46:end_delay_wire_189 <= bank_46[addr50];
        47:end_delay_wire_189 <= bank_47[addr50];
        48:end_delay_wire_189 <= bank_48[addr50];
        49:end_delay_wire_189 <= bank_49[addr50];
        50:end_delay_wire_189 <= bank_50[addr50];
        51:end_delay_wire_189 <= bank_51[addr50];
        52:end_delay_wire_189 <= bank_52[addr50];
        53:end_delay_wire_189 <= bank_53[addr50];
        54:end_delay_wire_189 <= bank_54[addr50];
        55:end_delay_wire_189 <= bank_55[addr50];
        56:end_delay_wire_189 <= bank_56[addr50];
        57:end_delay_wire_189 <= bank_57[addr50];
        58:end_delay_wire_189 <= bank_58[addr50];
        59:end_delay_wire_189 <= bank_59[addr50];
        60:end_delay_wire_189 <= bank_60[addr50];
        61:end_delay_wire_189 <= bank_61[addr50];
        62:end_delay_wire_189 <= bank_62[addr50];
        63:end_delay_wire_189 <= bank_63[addr50];
        default:end_delay_wire_189 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_8_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_bank_selector.out)
        0:end_delay_wire_190 <= bank_0[addr51];
        1:end_delay_wire_190 <= bank_1[addr51];
        2:end_delay_wire_190 <= bank_2[addr51];
        3:end_delay_wire_190 <= bank_3[addr51];
        4:end_delay_wire_190 <= bank_4[addr51];
        5:end_delay_wire_190 <= bank_5[addr51];
        6:end_delay_wire_190 <= bank_6[addr51];
        7:end_delay_wire_190 <= bank_7[addr51];
        8:end_delay_wire_190 <= bank_8[addr51];
        9:end_delay_wire_190 <= bank_9[addr51];
        10:end_delay_wire_190 <= bank_10[addr51];
        11:end_delay_wire_190 <= bank_11[addr51];
        12:end_delay_wire_190 <= bank_12[addr51];
        13:end_delay_wire_190 <= bank_13[addr51];
        14:end_delay_wire_190 <= bank_14[addr51];
        15:end_delay_wire_190 <= bank_15[addr51];
        16:end_delay_wire_190 <= bank_16[addr51];
        17:end_delay_wire_190 <= bank_17[addr51];
        18:end_delay_wire_190 <= bank_18[addr51];
        19:end_delay_wire_190 <= bank_19[addr51];
        20:end_delay_wire_190 <= bank_20[addr51];
        21:end_delay_wire_190 <= bank_21[addr51];
        22:end_delay_wire_190 <= bank_22[addr51];
        23:end_delay_wire_190 <= bank_23[addr51];
        24:end_delay_wire_190 <= bank_24[addr51];
        25:end_delay_wire_190 <= bank_25[addr51];
        26:end_delay_wire_190 <= bank_26[addr51];
        27:end_delay_wire_190 <= bank_27[addr51];
        28:end_delay_wire_190 <= bank_28[addr51];
        29:end_delay_wire_190 <= bank_29[addr51];
        30:end_delay_wire_190 <= bank_30[addr51];
        31:end_delay_wire_190 <= bank_31[addr51];
        32:end_delay_wire_190 <= bank_32[addr51];
        33:end_delay_wire_190 <= bank_33[addr51];
        34:end_delay_wire_190 <= bank_34[addr51];
        35:end_delay_wire_190 <= bank_35[addr51];
        36:end_delay_wire_190 <= bank_36[addr51];
        37:end_delay_wire_190 <= bank_37[addr51];
        38:end_delay_wire_190 <= bank_38[addr51];
        39:end_delay_wire_190 <= bank_39[addr51];
        40:end_delay_wire_190 <= bank_40[addr51];
        41:end_delay_wire_190 <= bank_41[addr51];
        42:end_delay_wire_190 <= bank_42[addr51];
        43:end_delay_wire_190 <= bank_43[addr51];
        44:end_delay_wire_190 <= bank_44[addr51];
        45:end_delay_wire_190 <= bank_45[addr51];
        46:end_delay_wire_190 <= bank_46[addr51];
        47:end_delay_wire_190 <= bank_47[addr51];
        48:end_delay_wire_190 <= bank_48[addr51];
        49:end_delay_wire_190 <= bank_49[addr51];
        50:end_delay_wire_190 <= bank_50[addr51];
        51:end_delay_wire_190 <= bank_51[addr51];
        52:end_delay_wire_190 <= bank_52[addr51];
        53:end_delay_wire_190 <= bank_53[addr51];
        54:end_delay_wire_190 <= bank_54[addr51];
        55:end_delay_wire_190 <= bank_55[addr51];
        56:end_delay_wire_190 <= bank_56[addr51];
        57:end_delay_wire_190 <= bank_57[addr51];
        58:end_delay_wire_190 <= bank_58[addr51];
        59:end_delay_wire_190 <= bank_59[addr51];
        60:end_delay_wire_190 <= bank_60[addr51];
        61:end_delay_wire_190 <= bank_61[addr51];
        62:end_delay_wire_190 <= bank_62[addr51];
        63:end_delay_wire_190 <= bank_63[addr51];
        default:end_delay_wire_190 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_8_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_bank_selector.out)
        0:end_delay_wire_191 <= bank_0[addr52];
        1:end_delay_wire_191 <= bank_1[addr52];
        2:end_delay_wire_191 <= bank_2[addr52];
        3:end_delay_wire_191 <= bank_3[addr52];
        4:end_delay_wire_191 <= bank_4[addr52];
        5:end_delay_wire_191 <= bank_5[addr52];
        6:end_delay_wire_191 <= bank_6[addr52];
        7:end_delay_wire_191 <= bank_7[addr52];
        8:end_delay_wire_191 <= bank_8[addr52];
        9:end_delay_wire_191 <= bank_9[addr52];
        10:end_delay_wire_191 <= bank_10[addr52];
        11:end_delay_wire_191 <= bank_11[addr52];
        12:end_delay_wire_191 <= bank_12[addr52];
        13:end_delay_wire_191 <= bank_13[addr52];
        14:end_delay_wire_191 <= bank_14[addr52];
        15:end_delay_wire_191 <= bank_15[addr52];
        16:end_delay_wire_191 <= bank_16[addr52];
        17:end_delay_wire_191 <= bank_17[addr52];
        18:end_delay_wire_191 <= bank_18[addr52];
        19:end_delay_wire_191 <= bank_19[addr52];
        20:end_delay_wire_191 <= bank_20[addr52];
        21:end_delay_wire_191 <= bank_21[addr52];
        22:end_delay_wire_191 <= bank_22[addr52];
        23:end_delay_wire_191 <= bank_23[addr52];
        24:end_delay_wire_191 <= bank_24[addr52];
        25:end_delay_wire_191 <= bank_25[addr52];
        26:end_delay_wire_191 <= bank_26[addr52];
        27:end_delay_wire_191 <= bank_27[addr52];
        28:end_delay_wire_191 <= bank_28[addr52];
        29:end_delay_wire_191 <= bank_29[addr52];
        30:end_delay_wire_191 <= bank_30[addr52];
        31:end_delay_wire_191 <= bank_31[addr52];
        32:end_delay_wire_191 <= bank_32[addr52];
        33:end_delay_wire_191 <= bank_33[addr52];
        34:end_delay_wire_191 <= bank_34[addr52];
        35:end_delay_wire_191 <= bank_35[addr52];
        36:end_delay_wire_191 <= bank_36[addr52];
        37:end_delay_wire_191 <= bank_37[addr52];
        38:end_delay_wire_191 <= bank_38[addr52];
        39:end_delay_wire_191 <= bank_39[addr52];
        40:end_delay_wire_191 <= bank_40[addr52];
        41:end_delay_wire_191 <= bank_41[addr52];
        42:end_delay_wire_191 <= bank_42[addr52];
        43:end_delay_wire_191 <= bank_43[addr52];
        44:end_delay_wire_191 <= bank_44[addr52];
        45:end_delay_wire_191 <= bank_45[addr52];
        46:end_delay_wire_191 <= bank_46[addr52];
        47:end_delay_wire_191 <= bank_47[addr52];
        48:end_delay_wire_191 <= bank_48[addr52];
        49:end_delay_wire_191 <= bank_49[addr52];
        50:end_delay_wire_191 <= bank_50[addr52];
        51:end_delay_wire_191 <= bank_51[addr52];
        52:end_delay_wire_191 <= bank_52[addr52];
        53:end_delay_wire_191 <= bank_53[addr52];
        54:end_delay_wire_191 <= bank_54[addr52];
        55:end_delay_wire_191 <= bank_55[addr52];
        56:end_delay_wire_191 <= bank_56[addr52];
        57:end_delay_wire_191 <= bank_57[addr52];
        58:end_delay_wire_191 <= bank_58[addr52];
        59:end_delay_wire_191 <= bank_59[addr52];
        60:end_delay_wire_191 <= bank_60[addr52];
        61:end_delay_wire_191 <= bank_61[addr52];
        62:end_delay_wire_191 <= bank_62[addr52];
        63:end_delay_wire_191 <= bank_63[addr52];
        default:end_delay_wire_191 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_8_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_bank_selector.out)
        0:end_delay_wire_192 <= bank_0[addr53];
        1:end_delay_wire_192 <= bank_1[addr53];
        2:end_delay_wire_192 <= bank_2[addr53];
        3:end_delay_wire_192 <= bank_3[addr53];
        4:end_delay_wire_192 <= bank_4[addr53];
        5:end_delay_wire_192 <= bank_5[addr53];
        6:end_delay_wire_192 <= bank_6[addr53];
        7:end_delay_wire_192 <= bank_7[addr53];
        8:end_delay_wire_192 <= bank_8[addr53];
        9:end_delay_wire_192 <= bank_9[addr53];
        10:end_delay_wire_192 <= bank_10[addr53];
        11:end_delay_wire_192 <= bank_11[addr53];
        12:end_delay_wire_192 <= bank_12[addr53];
        13:end_delay_wire_192 <= bank_13[addr53];
        14:end_delay_wire_192 <= bank_14[addr53];
        15:end_delay_wire_192 <= bank_15[addr53];
        16:end_delay_wire_192 <= bank_16[addr53];
        17:end_delay_wire_192 <= bank_17[addr53];
        18:end_delay_wire_192 <= bank_18[addr53];
        19:end_delay_wire_192 <= bank_19[addr53];
        20:end_delay_wire_192 <= bank_20[addr53];
        21:end_delay_wire_192 <= bank_21[addr53];
        22:end_delay_wire_192 <= bank_22[addr53];
        23:end_delay_wire_192 <= bank_23[addr53];
        24:end_delay_wire_192 <= bank_24[addr53];
        25:end_delay_wire_192 <= bank_25[addr53];
        26:end_delay_wire_192 <= bank_26[addr53];
        27:end_delay_wire_192 <= bank_27[addr53];
        28:end_delay_wire_192 <= bank_28[addr53];
        29:end_delay_wire_192 <= bank_29[addr53];
        30:end_delay_wire_192 <= bank_30[addr53];
        31:end_delay_wire_192 <= bank_31[addr53];
        32:end_delay_wire_192 <= bank_32[addr53];
        33:end_delay_wire_192 <= bank_33[addr53];
        34:end_delay_wire_192 <= bank_34[addr53];
        35:end_delay_wire_192 <= bank_35[addr53];
        36:end_delay_wire_192 <= bank_36[addr53];
        37:end_delay_wire_192 <= bank_37[addr53];
        38:end_delay_wire_192 <= bank_38[addr53];
        39:end_delay_wire_192 <= bank_39[addr53];
        40:end_delay_wire_192 <= bank_40[addr53];
        41:end_delay_wire_192 <= bank_41[addr53];
        42:end_delay_wire_192 <= bank_42[addr53];
        43:end_delay_wire_192 <= bank_43[addr53];
        44:end_delay_wire_192 <= bank_44[addr53];
        45:end_delay_wire_192 <= bank_45[addr53];
        46:end_delay_wire_192 <= bank_46[addr53];
        47:end_delay_wire_192 <= bank_47[addr53];
        48:end_delay_wire_192 <= bank_48[addr53];
        49:end_delay_wire_192 <= bank_49[addr53];
        50:end_delay_wire_192 <= bank_50[addr53];
        51:end_delay_wire_192 <= bank_51[addr53];
        52:end_delay_wire_192 <= bank_52[addr53];
        53:end_delay_wire_192 <= bank_53[addr53];
        54:end_delay_wire_192 <= bank_54[addr53];
        55:end_delay_wire_192 <= bank_55[addr53];
        56:end_delay_wire_192 <= bank_56[addr53];
        57:end_delay_wire_192 <= bank_57[addr53];
        58:end_delay_wire_192 <= bank_58[addr53];
        59:end_delay_wire_192 <= bank_59[addr53];
        60:end_delay_wire_192 <= bank_60[addr53];
        61:end_delay_wire_192 <= bank_61[addr53];
        62:end_delay_wire_192 <= bank_62[addr53];
        63:end_delay_wire_192 <= bank_63[addr53];
        default:end_delay_wire_192 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_8_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_bank_selector.out)
        0:end_delay_wire_193 <= bank_0[addr54];
        1:end_delay_wire_193 <= bank_1[addr54];
        2:end_delay_wire_193 <= bank_2[addr54];
        3:end_delay_wire_193 <= bank_3[addr54];
        4:end_delay_wire_193 <= bank_4[addr54];
        5:end_delay_wire_193 <= bank_5[addr54];
        6:end_delay_wire_193 <= bank_6[addr54];
        7:end_delay_wire_193 <= bank_7[addr54];
        8:end_delay_wire_193 <= bank_8[addr54];
        9:end_delay_wire_193 <= bank_9[addr54];
        10:end_delay_wire_193 <= bank_10[addr54];
        11:end_delay_wire_193 <= bank_11[addr54];
        12:end_delay_wire_193 <= bank_12[addr54];
        13:end_delay_wire_193 <= bank_13[addr54];
        14:end_delay_wire_193 <= bank_14[addr54];
        15:end_delay_wire_193 <= bank_15[addr54];
        16:end_delay_wire_193 <= bank_16[addr54];
        17:end_delay_wire_193 <= bank_17[addr54];
        18:end_delay_wire_193 <= bank_18[addr54];
        19:end_delay_wire_193 <= bank_19[addr54];
        20:end_delay_wire_193 <= bank_20[addr54];
        21:end_delay_wire_193 <= bank_21[addr54];
        22:end_delay_wire_193 <= bank_22[addr54];
        23:end_delay_wire_193 <= bank_23[addr54];
        24:end_delay_wire_193 <= bank_24[addr54];
        25:end_delay_wire_193 <= bank_25[addr54];
        26:end_delay_wire_193 <= bank_26[addr54];
        27:end_delay_wire_193 <= bank_27[addr54];
        28:end_delay_wire_193 <= bank_28[addr54];
        29:end_delay_wire_193 <= bank_29[addr54];
        30:end_delay_wire_193 <= bank_30[addr54];
        31:end_delay_wire_193 <= bank_31[addr54];
        32:end_delay_wire_193 <= bank_32[addr54];
        33:end_delay_wire_193 <= bank_33[addr54];
        34:end_delay_wire_193 <= bank_34[addr54];
        35:end_delay_wire_193 <= bank_35[addr54];
        36:end_delay_wire_193 <= bank_36[addr54];
        37:end_delay_wire_193 <= bank_37[addr54];
        38:end_delay_wire_193 <= bank_38[addr54];
        39:end_delay_wire_193 <= bank_39[addr54];
        40:end_delay_wire_193 <= bank_40[addr54];
        41:end_delay_wire_193 <= bank_41[addr54];
        42:end_delay_wire_193 <= bank_42[addr54];
        43:end_delay_wire_193 <= bank_43[addr54];
        44:end_delay_wire_193 <= bank_44[addr54];
        45:end_delay_wire_193 <= bank_45[addr54];
        46:end_delay_wire_193 <= bank_46[addr54];
        47:end_delay_wire_193 <= bank_47[addr54];
        48:end_delay_wire_193 <= bank_48[addr54];
        49:end_delay_wire_193 <= bank_49[addr54];
        50:end_delay_wire_193 <= bank_50[addr54];
        51:end_delay_wire_193 <= bank_51[addr54];
        52:end_delay_wire_193 <= bank_52[addr54];
        53:end_delay_wire_193 <= bank_53[addr54];
        54:end_delay_wire_193 <= bank_54[addr54];
        55:end_delay_wire_193 <= bank_55[addr54];
        56:end_delay_wire_193 <= bank_56[addr54];
        57:end_delay_wire_193 <= bank_57[addr54];
        58:end_delay_wire_193 <= bank_58[addr54];
        59:end_delay_wire_193 <= bank_59[addr54];
        60:end_delay_wire_193 <= bank_60[addr54];
        61:end_delay_wire_193 <= bank_61[addr54];
        62:end_delay_wire_193 <= bank_62[addr54];
        63:end_delay_wire_193 <= bank_63[addr54];
        default:end_delay_wire_193 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_8_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_bank_selector.out)
        0:end_delay_wire_194 <= bank_0[addr55];
        1:end_delay_wire_194 <= bank_1[addr55];
        2:end_delay_wire_194 <= bank_2[addr55];
        3:end_delay_wire_194 <= bank_3[addr55];
        4:end_delay_wire_194 <= bank_4[addr55];
        5:end_delay_wire_194 <= bank_5[addr55];
        6:end_delay_wire_194 <= bank_6[addr55];
        7:end_delay_wire_194 <= bank_7[addr55];
        8:end_delay_wire_194 <= bank_8[addr55];
        9:end_delay_wire_194 <= bank_9[addr55];
        10:end_delay_wire_194 <= bank_10[addr55];
        11:end_delay_wire_194 <= bank_11[addr55];
        12:end_delay_wire_194 <= bank_12[addr55];
        13:end_delay_wire_194 <= bank_13[addr55];
        14:end_delay_wire_194 <= bank_14[addr55];
        15:end_delay_wire_194 <= bank_15[addr55];
        16:end_delay_wire_194 <= bank_16[addr55];
        17:end_delay_wire_194 <= bank_17[addr55];
        18:end_delay_wire_194 <= bank_18[addr55];
        19:end_delay_wire_194 <= bank_19[addr55];
        20:end_delay_wire_194 <= bank_20[addr55];
        21:end_delay_wire_194 <= bank_21[addr55];
        22:end_delay_wire_194 <= bank_22[addr55];
        23:end_delay_wire_194 <= bank_23[addr55];
        24:end_delay_wire_194 <= bank_24[addr55];
        25:end_delay_wire_194 <= bank_25[addr55];
        26:end_delay_wire_194 <= bank_26[addr55];
        27:end_delay_wire_194 <= bank_27[addr55];
        28:end_delay_wire_194 <= bank_28[addr55];
        29:end_delay_wire_194 <= bank_29[addr55];
        30:end_delay_wire_194 <= bank_30[addr55];
        31:end_delay_wire_194 <= bank_31[addr55];
        32:end_delay_wire_194 <= bank_32[addr55];
        33:end_delay_wire_194 <= bank_33[addr55];
        34:end_delay_wire_194 <= bank_34[addr55];
        35:end_delay_wire_194 <= bank_35[addr55];
        36:end_delay_wire_194 <= bank_36[addr55];
        37:end_delay_wire_194 <= bank_37[addr55];
        38:end_delay_wire_194 <= bank_38[addr55];
        39:end_delay_wire_194 <= bank_39[addr55];
        40:end_delay_wire_194 <= bank_40[addr55];
        41:end_delay_wire_194 <= bank_41[addr55];
        42:end_delay_wire_194 <= bank_42[addr55];
        43:end_delay_wire_194 <= bank_43[addr55];
        44:end_delay_wire_194 <= bank_44[addr55];
        45:end_delay_wire_194 <= bank_45[addr55];
        46:end_delay_wire_194 <= bank_46[addr55];
        47:end_delay_wire_194 <= bank_47[addr55];
        48:end_delay_wire_194 <= bank_48[addr55];
        49:end_delay_wire_194 <= bank_49[addr55];
        50:end_delay_wire_194 <= bank_50[addr55];
        51:end_delay_wire_194 <= bank_51[addr55];
        52:end_delay_wire_194 <= bank_52[addr55];
        53:end_delay_wire_194 <= bank_53[addr55];
        54:end_delay_wire_194 <= bank_54[addr55];
        55:end_delay_wire_194 <= bank_55[addr55];
        56:end_delay_wire_194 <= bank_56[addr55];
        57:end_delay_wire_194 <= bank_57[addr55];
        58:end_delay_wire_194 <= bank_58[addr55];
        59:end_delay_wire_194 <= bank_59[addr55];
        60:end_delay_wire_194 <= bank_60[addr55];
        61:end_delay_wire_194 <= bank_61[addr55];
        62:end_delay_wire_194 <= bank_62[addr55];
        63:end_delay_wire_194 <= bank_63[addr55];
        default:end_delay_wire_194 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_8_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_bank_selector.out)
        0:end_delay_wire_195 <= bank_0[addr56];
        1:end_delay_wire_195 <= bank_1[addr56];
        2:end_delay_wire_195 <= bank_2[addr56];
        3:end_delay_wire_195 <= bank_3[addr56];
        4:end_delay_wire_195 <= bank_4[addr56];
        5:end_delay_wire_195 <= bank_5[addr56];
        6:end_delay_wire_195 <= bank_6[addr56];
        7:end_delay_wire_195 <= bank_7[addr56];
        8:end_delay_wire_195 <= bank_8[addr56];
        9:end_delay_wire_195 <= bank_9[addr56];
        10:end_delay_wire_195 <= bank_10[addr56];
        11:end_delay_wire_195 <= bank_11[addr56];
        12:end_delay_wire_195 <= bank_12[addr56];
        13:end_delay_wire_195 <= bank_13[addr56];
        14:end_delay_wire_195 <= bank_14[addr56];
        15:end_delay_wire_195 <= bank_15[addr56];
        16:end_delay_wire_195 <= bank_16[addr56];
        17:end_delay_wire_195 <= bank_17[addr56];
        18:end_delay_wire_195 <= bank_18[addr56];
        19:end_delay_wire_195 <= bank_19[addr56];
        20:end_delay_wire_195 <= bank_20[addr56];
        21:end_delay_wire_195 <= bank_21[addr56];
        22:end_delay_wire_195 <= bank_22[addr56];
        23:end_delay_wire_195 <= bank_23[addr56];
        24:end_delay_wire_195 <= bank_24[addr56];
        25:end_delay_wire_195 <= bank_25[addr56];
        26:end_delay_wire_195 <= bank_26[addr56];
        27:end_delay_wire_195 <= bank_27[addr56];
        28:end_delay_wire_195 <= bank_28[addr56];
        29:end_delay_wire_195 <= bank_29[addr56];
        30:end_delay_wire_195 <= bank_30[addr56];
        31:end_delay_wire_195 <= bank_31[addr56];
        32:end_delay_wire_195 <= bank_32[addr56];
        33:end_delay_wire_195 <= bank_33[addr56];
        34:end_delay_wire_195 <= bank_34[addr56];
        35:end_delay_wire_195 <= bank_35[addr56];
        36:end_delay_wire_195 <= bank_36[addr56];
        37:end_delay_wire_195 <= bank_37[addr56];
        38:end_delay_wire_195 <= bank_38[addr56];
        39:end_delay_wire_195 <= bank_39[addr56];
        40:end_delay_wire_195 <= bank_40[addr56];
        41:end_delay_wire_195 <= bank_41[addr56];
        42:end_delay_wire_195 <= bank_42[addr56];
        43:end_delay_wire_195 <= bank_43[addr56];
        44:end_delay_wire_195 <= bank_44[addr56];
        45:end_delay_wire_195 <= bank_45[addr56];
        46:end_delay_wire_195 <= bank_46[addr56];
        47:end_delay_wire_195 <= bank_47[addr56];
        48:end_delay_wire_195 <= bank_48[addr56];
        49:end_delay_wire_195 <= bank_49[addr56];
        50:end_delay_wire_195 <= bank_50[addr56];
        51:end_delay_wire_195 <= bank_51[addr56];
        52:end_delay_wire_195 <= bank_52[addr56];
        53:end_delay_wire_195 <= bank_53[addr56];
        54:end_delay_wire_195 <= bank_54[addr56];
        55:end_delay_wire_195 <= bank_55[addr56];
        56:end_delay_wire_195 <= bank_56[addr56];
        57:end_delay_wire_195 <= bank_57[addr56];
        58:end_delay_wire_195 <= bank_58[addr56];
        59:end_delay_wire_195 <= bank_59[addr56];
        60:end_delay_wire_195 <= bank_60[addr56];
        61:end_delay_wire_195 <= bank_61[addr56];
        62:end_delay_wire_195 <= bank_62[addr56];
        63:end_delay_wire_195 <= bank_63[addr56];
        default:end_delay_wire_195 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_bank_selector.out)
        0:end_delay_wire_196 <= bank_0[addr57];
        1:end_delay_wire_196 <= bank_1[addr57];
        2:end_delay_wire_196 <= bank_2[addr57];
        3:end_delay_wire_196 <= bank_3[addr57];
        4:end_delay_wire_196 <= bank_4[addr57];
        5:end_delay_wire_196 <= bank_5[addr57];
        6:end_delay_wire_196 <= bank_6[addr57];
        7:end_delay_wire_196 <= bank_7[addr57];
        8:end_delay_wire_196 <= bank_8[addr57];
        9:end_delay_wire_196 <= bank_9[addr57];
        10:end_delay_wire_196 <= bank_10[addr57];
        11:end_delay_wire_196 <= bank_11[addr57];
        12:end_delay_wire_196 <= bank_12[addr57];
        13:end_delay_wire_196 <= bank_13[addr57];
        14:end_delay_wire_196 <= bank_14[addr57];
        15:end_delay_wire_196 <= bank_15[addr57];
        16:end_delay_wire_196 <= bank_16[addr57];
        17:end_delay_wire_196 <= bank_17[addr57];
        18:end_delay_wire_196 <= bank_18[addr57];
        19:end_delay_wire_196 <= bank_19[addr57];
        20:end_delay_wire_196 <= bank_20[addr57];
        21:end_delay_wire_196 <= bank_21[addr57];
        22:end_delay_wire_196 <= bank_22[addr57];
        23:end_delay_wire_196 <= bank_23[addr57];
        24:end_delay_wire_196 <= bank_24[addr57];
        25:end_delay_wire_196 <= bank_25[addr57];
        26:end_delay_wire_196 <= bank_26[addr57];
        27:end_delay_wire_196 <= bank_27[addr57];
        28:end_delay_wire_196 <= bank_28[addr57];
        29:end_delay_wire_196 <= bank_29[addr57];
        30:end_delay_wire_196 <= bank_30[addr57];
        31:end_delay_wire_196 <= bank_31[addr57];
        32:end_delay_wire_196 <= bank_32[addr57];
        33:end_delay_wire_196 <= bank_33[addr57];
        34:end_delay_wire_196 <= bank_34[addr57];
        35:end_delay_wire_196 <= bank_35[addr57];
        36:end_delay_wire_196 <= bank_36[addr57];
        37:end_delay_wire_196 <= bank_37[addr57];
        38:end_delay_wire_196 <= bank_38[addr57];
        39:end_delay_wire_196 <= bank_39[addr57];
        40:end_delay_wire_196 <= bank_40[addr57];
        41:end_delay_wire_196 <= bank_41[addr57];
        42:end_delay_wire_196 <= bank_42[addr57];
        43:end_delay_wire_196 <= bank_43[addr57];
        44:end_delay_wire_196 <= bank_44[addr57];
        45:end_delay_wire_196 <= bank_45[addr57];
        46:end_delay_wire_196 <= bank_46[addr57];
        47:end_delay_wire_196 <= bank_47[addr57];
        48:end_delay_wire_196 <= bank_48[addr57];
        49:end_delay_wire_196 <= bank_49[addr57];
        50:end_delay_wire_196 <= bank_50[addr57];
        51:end_delay_wire_196 <= bank_51[addr57];
        52:end_delay_wire_196 <= bank_52[addr57];
        53:end_delay_wire_196 <= bank_53[addr57];
        54:end_delay_wire_196 <= bank_54[addr57];
        55:end_delay_wire_196 <= bank_55[addr57];
        56:end_delay_wire_196 <= bank_56[addr57];
        57:end_delay_wire_196 <= bank_57[addr57];
        58:end_delay_wire_196 <= bank_58[addr57];
        59:end_delay_wire_196 <= bank_59[addr57];
        60:end_delay_wire_196 <= bank_60[addr57];
        61:end_delay_wire_196 <= bank_61[addr57];
        62:end_delay_wire_196 <= bank_62[addr57];
        63:end_delay_wire_196 <= bank_63[addr57];
        default:end_delay_wire_196 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_bank_selector.out)
        0:end_delay_wire_197 <= bank_0[addr58];
        1:end_delay_wire_197 <= bank_1[addr58];
        2:end_delay_wire_197 <= bank_2[addr58];
        3:end_delay_wire_197 <= bank_3[addr58];
        4:end_delay_wire_197 <= bank_4[addr58];
        5:end_delay_wire_197 <= bank_5[addr58];
        6:end_delay_wire_197 <= bank_6[addr58];
        7:end_delay_wire_197 <= bank_7[addr58];
        8:end_delay_wire_197 <= bank_8[addr58];
        9:end_delay_wire_197 <= bank_9[addr58];
        10:end_delay_wire_197 <= bank_10[addr58];
        11:end_delay_wire_197 <= bank_11[addr58];
        12:end_delay_wire_197 <= bank_12[addr58];
        13:end_delay_wire_197 <= bank_13[addr58];
        14:end_delay_wire_197 <= bank_14[addr58];
        15:end_delay_wire_197 <= bank_15[addr58];
        16:end_delay_wire_197 <= bank_16[addr58];
        17:end_delay_wire_197 <= bank_17[addr58];
        18:end_delay_wire_197 <= bank_18[addr58];
        19:end_delay_wire_197 <= bank_19[addr58];
        20:end_delay_wire_197 <= bank_20[addr58];
        21:end_delay_wire_197 <= bank_21[addr58];
        22:end_delay_wire_197 <= bank_22[addr58];
        23:end_delay_wire_197 <= bank_23[addr58];
        24:end_delay_wire_197 <= bank_24[addr58];
        25:end_delay_wire_197 <= bank_25[addr58];
        26:end_delay_wire_197 <= bank_26[addr58];
        27:end_delay_wire_197 <= bank_27[addr58];
        28:end_delay_wire_197 <= bank_28[addr58];
        29:end_delay_wire_197 <= bank_29[addr58];
        30:end_delay_wire_197 <= bank_30[addr58];
        31:end_delay_wire_197 <= bank_31[addr58];
        32:end_delay_wire_197 <= bank_32[addr58];
        33:end_delay_wire_197 <= bank_33[addr58];
        34:end_delay_wire_197 <= bank_34[addr58];
        35:end_delay_wire_197 <= bank_35[addr58];
        36:end_delay_wire_197 <= bank_36[addr58];
        37:end_delay_wire_197 <= bank_37[addr58];
        38:end_delay_wire_197 <= bank_38[addr58];
        39:end_delay_wire_197 <= bank_39[addr58];
        40:end_delay_wire_197 <= bank_40[addr58];
        41:end_delay_wire_197 <= bank_41[addr58];
        42:end_delay_wire_197 <= bank_42[addr58];
        43:end_delay_wire_197 <= bank_43[addr58];
        44:end_delay_wire_197 <= bank_44[addr58];
        45:end_delay_wire_197 <= bank_45[addr58];
        46:end_delay_wire_197 <= bank_46[addr58];
        47:end_delay_wire_197 <= bank_47[addr58];
        48:end_delay_wire_197 <= bank_48[addr58];
        49:end_delay_wire_197 <= bank_49[addr58];
        50:end_delay_wire_197 <= bank_50[addr58];
        51:end_delay_wire_197 <= bank_51[addr58];
        52:end_delay_wire_197 <= bank_52[addr58];
        53:end_delay_wire_197 <= bank_53[addr58];
        54:end_delay_wire_197 <= bank_54[addr58];
        55:end_delay_wire_197 <= bank_55[addr58];
        56:end_delay_wire_197 <= bank_56[addr58];
        57:end_delay_wire_197 <= bank_57[addr58];
        58:end_delay_wire_197 <= bank_58[addr58];
        59:end_delay_wire_197 <= bank_59[addr58];
        60:end_delay_wire_197 <= bank_60[addr58];
        61:end_delay_wire_197 <= bank_61[addr58];
        62:end_delay_wire_197 <= bank_62[addr58];
        63:end_delay_wire_197 <= bank_63[addr58];
        default:end_delay_wire_197 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_bank_selector.out)
        0:end_delay_wire_198 <= bank_0[addr59];
        1:end_delay_wire_198 <= bank_1[addr59];
        2:end_delay_wire_198 <= bank_2[addr59];
        3:end_delay_wire_198 <= bank_3[addr59];
        4:end_delay_wire_198 <= bank_4[addr59];
        5:end_delay_wire_198 <= bank_5[addr59];
        6:end_delay_wire_198 <= bank_6[addr59];
        7:end_delay_wire_198 <= bank_7[addr59];
        8:end_delay_wire_198 <= bank_8[addr59];
        9:end_delay_wire_198 <= bank_9[addr59];
        10:end_delay_wire_198 <= bank_10[addr59];
        11:end_delay_wire_198 <= bank_11[addr59];
        12:end_delay_wire_198 <= bank_12[addr59];
        13:end_delay_wire_198 <= bank_13[addr59];
        14:end_delay_wire_198 <= bank_14[addr59];
        15:end_delay_wire_198 <= bank_15[addr59];
        16:end_delay_wire_198 <= bank_16[addr59];
        17:end_delay_wire_198 <= bank_17[addr59];
        18:end_delay_wire_198 <= bank_18[addr59];
        19:end_delay_wire_198 <= bank_19[addr59];
        20:end_delay_wire_198 <= bank_20[addr59];
        21:end_delay_wire_198 <= bank_21[addr59];
        22:end_delay_wire_198 <= bank_22[addr59];
        23:end_delay_wire_198 <= bank_23[addr59];
        24:end_delay_wire_198 <= bank_24[addr59];
        25:end_delay_wire_198 <= bank_25[addr59];
        26:end_delay_wire_198 <= bank_26[addr59];
        27:end_delay_wire_198 <= bank_27[addr59];
        28:end_delay_wire_198 <= bank_28[addr59];
        29:end_delay_wire_198 <= bank_29[addr59];
        30:end_delay_wire_198 <= bank_30[addr59];
        31:end_delay_wire_198 <= bank_31[addr59];
        32:end_delay_wire_198 <= bank_32[addr59];
        33:end_delay_wire_198 <= bank_33[addr59];
        34:end_delay_wire_198 <= bank_34[addr59];
        35:end_delay_wire_198 <= bank_35[addr59];
        36:end_delay_wire_198 <= bank_36[addr59];
        37:end_delay_wire_198 <= bank_37[addr59];
        38:end_delay_wire_198 <= bank_38[addr59];
        39:end_delay_wire_198 <= bank_39[addr59];
        40:end_delay_wire_198 <= bank_40[addr59];
        41:end_delay_wire_198 <= bank_41[addr59];
        42:end_delay_wire_198 <= bank_42[addr59];
        43:end_delay_wire_198 <= bank_43[addr59];
        44:end_delay_wire_198 <= bank_44[addr59];
        45:end_delay_wire_198 <= bank_45[addr59];
        46:end_delay_wire_198 <= bank_46[addr59];
        47:end_delay_wire_198 <= bank_47[addr59];
        48:end_delay_wire_198 <= bank_48[addr59];
        49:end_delay_wire_198 <= bank_49[addr59];
        50:end_delay_wire_198 <= bank_50[addr59];
        51:end_delay_wire_198 <= bank_51[addr59];
        52:end_delay_wire_198 <= bank_52[addr59];
        53:end_delay_wire_198 <= bank_53[addr59];
        54:end_delay_wire_198 <= bank_54[addr59];
        55:end_delay_wire_198 <= bank_55[addr59];
        56:end_delay_wire_198 <= bank_56[addr59];
        57:end_delay_wire_198 <= bank_57[addr59];
        58:end_delay_wire_198 <= bank_58[addr59];
        59:end_delay_wire_198 <= bank_59[addr59];
        60:end_delay_wire_198 <= bank_60[addr59];
        61:end_delay_wire_198 <= bank_61[addr59];
        62:end_delay_wire_198 <= bank_62[addr59];
        63:end_delay_wire_198 <= bank_63[addr59];
        default:end_delay_wire_198 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_bank_selector.out)
        0:end_delay_wire_199 <= bank_0[addr60];
        1:end_delay_wire_199 <= bank_1[addr60];
        2:end_delay_wire_199 <= bank_2[addr60];
        3:end_delay_wire_199 <= bank_3[addr60];
        4:end_delay_wire_199 <= bank_4[addr60];
        5:end_delay_wire_199 <= bank_5[addr60];
        6:end_delay_wire_199 <= bank_6[addr60];
        7:end_delay_wire_199 <= bank_7[addr60];
        8:end_delay_wire_199 <= bank_8[addr60];
        9:end_delay_wire_199 <= bank_9[addr60];
        10:end_delay_wire_199 <= bank_10[addr60];
        11:end_delay_wire_199 <= bank_11[addr60];
        12:end_delay_wire_199 <= bank_12[addr60];
        13:end_delay_wire_199 <= bank_13[addr60];
        14:end_delay_wire_199 <= bank_14[addr60];
        15:end_delay_wire_199 <= bank_15[addr60];
        16:end_delay_wire_199 <= bank_16[addr60];
        17:end_delay_wire_199 <= bank_17[addr60];
        18:end_delay_wire_199 <= bank_18[addr60];
        19:end_delay_wire_199 <= bank_19[addr60];
        20:end_delay_wire_199 <= bank_20[addr60];
        21:end_delay_wire_199 <= bank_21[addr60];
        22:end_delay_wire_199 <= bank_22[addr60];
        23:end_delay_wire_199 <= bank_23[addr60];
        24:end_delay_wire_199 <= bank_24[addr60];
        25:end_delay_wire_199 <= bank_25[addr60];
        26:end_delay_wire_199 <= bank_26[addr60];
        27:end_delay_wire_199 <= bank_27[addr60];
        28:end_delay_wire_199 <= bank_28[addr60];
        29:end_delay_wire_199 <= bank_29[addr60];
        30:end_delay_wire_199 <= bank_30[addr60];
        31:end_delay_wire_199 <= bank_31[addr60];
        32:end_delay_wire_199 <= bank_32[addr60];
        33:end_delay_wire_199 <= bank_33[addr60];
        34:end_delay_wire_199 <= bank_34[addr60];
        35:end_delay_wire_199 <= bank_35[addr60];
        36:end_delay_wire_199 <= bank_36[addr60];
        37:end_delay_wire_199 <= bank_37[addr60];
        38:end_delay_wire_199 <= bank_38[addr60];
        39:end_delay_wire_199 <= bank_39[addr60];
        40:end_delay_wire_199 <= bank_40[addr60];
        41:end_delay_wire_199 <= bank_41[addr60];
        42:end_delay_wire_199 <= bank_42[addr60];
        43:end_delay_wire_199 <= bank_43[addr60];
        44:end_delay_wire_199 <= bank_44[addr60];
        45:end_delay_wire_199 <= bank_45[addr60];
        46:end_delay_wire_199 <= bank_46[addr60];
        47:end_delay_wire_199 <= bank_47[addr60];
        48:end_delay_wire_199 <= bank_48[addr60];
        49:end_delay_wire_199 <= bank_49[addr60];
        50:end_delay_wire_199 <= bank_50[addr60];
        51:end_delay_wire_199 <= bank_51[addr60];
        52:end_delay_wire_199 <= bank_52[addr60];
        53:end_delay_wire_199 <= bank_53[addr60];
        54:end_delay_wire_199 <= bank_54[addr60];
        55:end_delay_wire_199 <= bank_55[addr60];
        56:end_delay_wire_199 <= bank_56[addr60];
        57:end_delay_wire_199 <= bank_57[addr60];
        58:end_delay_wire_199 <= bank_58[addr60];
        59:end_delay_wire_199 <= bank_59[addr60];
        60:end_delay_wire_199 <= bank_60[addr60];
        61:end_delay_wire_199 <= bank_61[addr60];
        62:end_delay_wire_199 <= bank_62[addr60];
        63:end_delay_wire_199 <= bank_63[addr60];
        default:end_delay_wire_199 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_bank_selector.out)
        0:end_delay_wire_200 <= bank_0[addr61];
        1:end_delay_wire_200 <= bank_1[addr61];
        2:end_delay_wire_200 <= bank_2[addr61];
        3:end_delay_wire_200 <= bank_3[addr61];
        4:end_delay_wire_200 <= bank_4[addr61];
        5:end_delay_wire_200 <= bank_5[addr61];
        6:end_delay_wire_200 <= bank_6[addr61];
        7:end_delay_wire_200 <= bank_7[addr61];
        8:end_delay_wire_200 <= bank_8[addr61];
        9:end_delay_wire_200 <= bank_9[addr61];
        10:end_delay_wire_200 <= bank_10[addr61];
        11:end_delay_wire_200 <= bank_11[addr61];
        12:end_delay_wire_200 <= bank_12[addr61];
        13:end_delay_wire_200 <= bank_13[addr61];
        14:end_delay_wire_200 <= bank_14[addr61];
        15:end_delay_wire_200 <= bank_15[addr61];
        16:end_delay_wire_200 <= bank_16[addr61];
        17:end_delay_wire_200 <= bank_17[addr61];
        18:end_delay_wire_200 <= bank_18[addr61];
        19:end_delay_wire_200 <= bank_19[addr61];
        20:end_delay_wire_200 <= bank_20[addr61];
        21:end_delay_wire_200 <= bank_21[addr61];
        22:end_delay_wire_200 <= bank_22[addr61];
        23:end_delay_wire_200 <= bank_23[addr61];
        24:end_delay_wire_200 <= bank_24[addr61];
        25:end_delay_wire_200 <= bank_25[addr61];
        26:end_delay_wire_200 <= bank_26[addr61];
        27:end_delay_wire_200 <= bank_27[addr61];
        28:end_delay_wire_200 <= bank_28[addr61];
        29:end_delay_wire_200 <= bank_29[addr61];
        30:end_delay_wire_200 <= bank_30[addr61];
        31:end_delay_wire_200 <= bank_31[addr61];
        32:end_delay_wire_200 <= bank_32[addr61];
        33:end_delay_wire_200 <= bank_33[addr61];
        34:end_delay_wire_200 <= bank_34[addr61];
        35:end_delay_wire_200 <= bank_35[addr61];
        36:end_delay_wire_200 <= bank_36[addr61];
        37:end_delay_wire_200 <= bank_37[addr61];
        38:end_delay_wire_200 <= bank_38[addr61];
        39:end_delay_wire_200 <= bank_39[addr61];
        40:end_delay_wire_200 <= bank_40[addr61];
        41:end_delay_wire_200 <= bank_41[addr61];
        42:end_delay_wire_200 <= bank_42[addr61];
        43:end_delay_wire_200 <= bank_43[addr61];
        44:end_delay_wire_200 <= bank_44[addr61];
        45:end_delay_wire_200 <= bank_45[addr61];
        46:end_delay_wire_200 <= bank_46[addr61];
        47:end_delay_wire_200 <= bank_47[addr61];
        48:end_delay_wire_200 <= bank_48[addr61];
        49:end_delay_wire_200 <= bank_49[addr61];
        50:end_delay_wire_200 <= bank_50[addr61];
        51:end_delay_wire_200 <= bank_51[addr61];
        52:end_delay_wire_200 <= bank_52[addr61];
        53:end_delay_wire_200 <= bank_53[addr61];
        54:end_delay_wire_200 <= bank_54[addr61];
        55:end_delay_wire_200 <= bank_55[addr61];
        56:end_delay_wire_200 <= bank_56[addr61];
        57:end_delay_wire_200 <= bank_57[addr61];
        58:end_delay_wire_200 <= bank_58[addr61];
        59:end_delay_wire_200 <= bank_59[addr61];
        60:end_delay_wire_200 <= bank_60[addr61];
        61:end_delay_wire_200 <= bank_61[addr61];
        62:end_delay_wire_200 <= bank_62[addr61];
        63:end_delay_wire_200 <= bank_63[addr61];
        default:end_delay_wire_200 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_bank_selector.out)
        0:end_delay_wire_201 <= bank_0[addr62];
        1:end_delay_wire_201 <= bank_1[addr62];
        2:end_delay_wire_201 <= bank_2[addr62];
        3:end_delay_wire_201 <= bank_3[addr62];
        4:end_delay_wire_201 <= bank_4[addr62];
        5:end_delay_wire_201 <= bank_5[addr62];
        6:end_delay_wire_201 <= bank_6[addr62];
        7:end_delay_wire_201 <= bank_7[addr62];
        8:end_delay_wire_201 <= bank_8[addr62];
        9:end_delay_wire_201 <= bank_9[addr62];
        10:end_delay_wire_201 <= bank_10[addr62];
        11:end_delay_wire_201 <= bank_11[addr62];
        12:end_delay_wire_201 <= bank_12[addr62];
        13:end_delay_wire_201 <= bank_13[addr62];
        14:end_delay_wire_201 <= bank_14[addr62];
        15:end_delay_wire_201 <= bank_15[addr62];
        16:end_delay_wire_201 <= bank_16[addr62];
        17:end_delay_wire_201 <= bank_17[addr62];
        18:end_delay_wire_201 <= bank_18[addr62];
        19:end_delay_wire_201 <= bank_19[addr62];
        20:end_delay_wire_201 <= bank_20[addr62];
        21:end_delay_wire_201 <= bank_21[addr62];
        22:end_delay_wire_201 <= bank_22[addr62];
        23:end_delay_wire_201 <= bank_23[addr62];
        24:end_delay_wire_201 <= bank_24[addr62];
        25:end_delay_wire_201 <= bank_25[addr62];
        26:end_delay_wire_201 <= bank_26[addr62];
        27:end_delay_wire_201 <= bank_27[addr62];
        28:end_delay_wire_201 <= bank_28[addr62];
        29:end_delay_wire_201 <= bank_29[addr62];
        30:end_delay_wire_201 <= bank_30[addr62];
        31:end_delay_wire_201 <= bank_31[addr62];
        32:end_delay_wire_201 <= bank_32[addr62];
        33:end_delay_wire_201 <= bank_33[addr62];
        34:end_delay_wire_201 <= bank_34[addr62];
        35:end_delay_wire_201 <= bank_35[addr62];
        36:end_delay_wire_201 <= bank_36[addr62];
        37:end_delay_wire_201 <= bank_37[addr62];
        38:end_delay_wire_201 <= bank_38[addr62];
        39:end_delay_wire_201 <= bank_39[addr62];
        40:end_delay_wire_201 <= bank_40[addr62];
        41:end_delay_wire_201 <= bank_41[addr62];
        42:end_delay_wire_201 <= bank_42[addr62];
        43:end_delay_wire_201 <= bank_43[addr62];
        44:end_delay_wire_201 <= bank_44[addr62];
        45:end_delay_wire_201 <= bank_45[addr62];
        46:end_delay_wire_201 <= bank_46[addr62];
        47:end_delay_wire_201 <= bank_47[addr62];
        48:end_delay_wire_201 <= bank_48[addr62];
        49:end_delay_wire_201 <= bank_49[addr62];
        50:end_delay_wire_201 <= bank_50[addr62];
        51:end_delay_wire_201 <= bank_51[addr62];
        52:end_delay_wire_201 <= bank_52[addr62];
        53:end_delay_wire_201 <= bank_53[addr62];
        54:end_delay_wire_201 <= bank_54[addr62];
        55:end_delay_wire_201 <= bank_55[addr62];
        56:end_delay_wire_201 <= bank_56[addr62];
        57:end_delay_wire_201 <= bank_57[addr62];
        58:end_delay_wire_201 <= bank_58[addr62];
        59:end_delay_wire_201 <= bank_59[addr62];
        60:end_delay_wire_201 <= bank_60[addr62];
        61:end_delay_wire_201 <= bank_61[addr62];
        62:end_delay_wire_201 <= bank_62[addr62];
        63:end_delay_wire_201 <= bank_63[addr62];
        default:end_delay_wire_201 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_bank_selector.out)
        0:end_delay_wire_202 <= bank_0[addr63];
        1:end_delay_wire_202 <= bank_1[addr63];
        2:end_delay_wire_202 <= bank_2[addr63];
        3:end_delay_wire_202 <= bank_3[addr63];
        4:end_delay_wire_202 <= bank_4[addr63];
        5:end_delay_wire_202 <= bank_5[addr63];
        6:end_delay_wire_202 <= bank_6[addr63];
        7:end_delay_wire_202 <= bank_7[addr63];
        8:end_delay_wire_202 <= bank_8[addr63];
        9:end_delay_wire_202 <= bank_9[addr63];
        10:end_delay_wire_202 <= bank_10[addr63];
        11:end_delay_wire_202 <= bank_11[addr63];
        12:end_delay_wire_202 <= bank_12[addr63];
        13:end_delay_wire_202 <= bank_13[addr63];
        14:end_delay_wire_202 <= bank_14[addr63];
        15:end_delay_wire_202 <= bank_15[addr63];
        16:end_delay_wire_202 <= bank_16[addr63];
        17:end_delay_wire_202 <= bank_17[addr63];
        18:end_delay_wire_202 <= bank_18[addr63];
        19:end_delay_wire_202 <= bank_19[addr63];
        20:end_delay_wire_202 <= bank_20[addr63];
        21:end_delay_wire_202 <= bank_21[addr63];
        22:end_delay_wire_202 <= bank_22[addr63];
        23:end_delay_wire_202 <= bank_23[addr63];
        24:end_delay_wire_202 <= bank_24[addr63];
        25:end_delay_wire_202 <= bank_25[addr63];
        26:end_delay_wire_202 <= bank_26[addr63];
        27:end_delay_wire_202 <= bank_27[addr63];
        28:end_delay_wire_202 <= bank_28[addr63];
        29:end_delay_wire_202 <= bank_29[addr63];
        30:end_delay_wire_202 <= bank_30[addr63];
        31:end_delay_wire_202 <= bank_31[addr63];
        32:end_delay_wire_202 <= bank_32[addr63];
        33:end_delay_wire_202 <= bank_33[addr63];
        34:end_delay_wire_202 <= bank_34[addr63];
        35:end_delay_wire_202 <= bank_35[addr63];
        36:end_delay_wire_202 <= bank_36[addr63];
        37:end_delay_wire_202 <= bank_37[addr63];
        38:end_delay_wire_202 <= bank_38[addr63];
        39:end_delay_wire_202 <= bank_39[addr63];
        40:end_delay_wire_202 <= bank_40[addr63];
        41:end_delay_wire_202 <= bank_41[addr63];
        42:end_delay_wire_202 <= bank_42[addr63];
        43:end_delay_wire_202 <= bank_43[addr63];
        44:end_delay_wire_202 <= bank_44[addr63];
        45:end_delay_wire_202 <= bank_45[addr63];
        46:end_delay_wire_202 <= bank_46[addr63];
        47:end_delay_wire_202 <= bank_47[addr63];
        48:end_delay_wire_202 <= bank_48[addr63];
        49:end_delay_wire_202 <= bank_49[addr63];
        50:end_delay_wire_202 <= bank_50[addr63];
        51:end_delay_wire_202 <= bank_51[addr63];
        52:end_delay_wire_202 <= bank_52[addr63];
        53:end_delay_wire_202 <= bank_53[addr63];
        54:end_delay_wire_202 <= bank_54[addr63];
        55:end_delay_wire_202 <= bank_55[addr63];
        56:end_delay_wire_202 <= bank_56[addr63];
        57:end_delay_wire_202 <= bank_57[addr63];
        58:end_delay_wire_202 <= bank_58[addr63];
        59:end_delay_wire_202 <= bank_59[addr63];
        60:end_delay_wire_202 <= bank_60[addr63];
        61:end_delay_wire_202 <= bank_61[addr63];
        62:end_delay_wire_202 <= bank_62[addr63];
        63:end_delay_wire_202 <= bank_63[addr63];
        default:end_delay_wire_202 <= 327;
      endcase
    end
    if (op_hcompute_conv_stencil_9_read_ren_fsm_out) begin
      case( hw_kernel_global_wrapper_stencil_hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_bank_selector.out)
        0:end_delay_wire_203 <= bank_0[addr64];
        1:end_delay_wire_203 <= bank_1[addr64];
        2:end_delay_wire_203 <= bank_2[addr64];
        3:end_delay_wire_203 <= bank_3[addr64];
        4:end_delay_wire_203 <= bank_4[addr64];
        5:end_delay_wire_203 <= bank_5[addr64];
        6:end_delay_wire_203 <= bank_6[addr64];
        7:end_delay_wire_203 <= bank_7[addr64];
        8:end_delay_wire_203 <= bank_8[addr64];
        9:end_delay_wire_203 <= bank_9[addr64];
        10:end_delay_wire_203 <= bank_10[addr64];
        11:end_delay_wire_203 <= bank_11[addr64];
        12:end_delay_wire_203 <= bank_12[addr64];
        13:end_delay_wire_203 <= bank_13[addr64];
        14:end_delay_wire_203 <= bank_14[addr64];
        15:end_delay_wire_203 <= bank_15[addr64];
        16:end_delay_wire_203 <= bank_16[addr64];
        17:end_delay_wire_203 <= bank_17[addr64];
        18:end_delay_wire_203 <= bank_18[addr64];
        19:end_delay_wire_203 <= bank_19[addr64];
        20:end_delay_wire_203 <= bank_20[addr64];
        21:end_delay_wire_203 <= bank_21[addr64];
        22:end_delay_wire_203 <= bank_22[addr64];
        23:end_delay_wire_203 <= bank_23[addr64];
        24:end_delay_wire_203 <= bank_24[addr64];
        25:end_delay_wire_203 <= bank_25[addr64];
        26:end_delay_wire_203 <= bank_26[addr64];
        27:end_delay_wire_203 <= bank_27[addr64];
        28:end_delay_wire_203 <= bank_28[addr64];
        29:end_delay_wire_203 <= bank_29[addr64];
        30:end_delay_wire_203 <= bank_30[addr64];
        31:end_delay_wire_203 <= bank_31[addr64];
        32:end_delay_wire_203 <= bank_32[addr64];
        33:end_delay_wire_203 <= bank_33[addr64];
        34:end_delay_wire_203 <= bank_34[addr64];
        35:end_delay_wire_203 <= bank_35[addr64];
        36:end_delay_wire_203 <= bank_36[addr64];
        37:end_delay_wire_203 <= bank_37[addr64];
        38:end_delay_wire_203 <= bank_38[addr64];
        39:end_delay_wire_203 <= bank_39[addr64];
        40:end_delay_wire_203 <= bank_40[addr64];
        41:end_delay_wire_203 <= bank_41[addr64];
        42:end_delay_wire_203 <= bank_42[addr64];
        43:end_delay_wire_203 <= bank_43[addr64];
        44:end_delay_wire_203 <= bank_44[addr64];
        45:end_delay_wire_203 <= bank_45[addr64];
        46:end_delay_wire_203 <= bank_46[addr64];
        47:end_delay_wire_203 <= bank_47[addr64];
        48:end_delay_wire_203 <= bank_48[addr64];
        49:end_delay_wire_203 <= bank_49[addr64];
        50:end_delay_wire_203 <= bank_50[addr64];
        51:end_delay_wire_203 <= bank_51[addr64];
        52:end_delay_wire_203 <= bank_52[addr64];
        53:end_delay_wire_203 <= bank_53[addr64];
        54:end_delay_wire_203 <= bank_54[addr64];
        55:end_delay_wire_203 <= bank_55[addr64];
        56:end_delay_wire_203 <= bank_56[addr64];
        57:end_delay_wire_203 <= bank_57[addr64];
        58:end_delay_wire_203 <= bank_58[addr64];
        59:end_delay_wire_203 <= bank_59[addr64];
        60:end_delay_wire_203 <= bank_60[addr64];
        61:end_delay_wire_203 <= bank_61[addr64];
        62:end_delay_wire_203 <= bank_62[addr64];
        63:end_delay_wire_203 <= bank_63[addr64];
        default:end_delay_wire_203 <= 327;
      endcase
    end
  end

endmodule

